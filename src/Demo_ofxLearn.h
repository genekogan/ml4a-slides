#pragma once

#include "ofMain.h"
#include "ofxLearn.h"


////////////////////////////////////////
// CLASSIFICATION DEMO

class ofxPPSlide;

class ClassifierDemo : public ofxPPElement {
public:
    ClassifierDemo(ofxPPSlide *parent, string name, float x, float y, float w, float h) : ofxPPElement(parent, name, x, y, w, h) {
    }
    
    void start() {
        if (!loaded) {
            runClassifier();
            loaded = true;
        }
    }
    
    void runClassifier() {
        for (int i=0; i<2000; i++) {
            vector<double> sample;
            sample.push_back(ofRandom(1));
            sample.push_back(ofRandom(1));
            
            int label;
            float distFromCenter = ofDist(sample[0], sample[1], 0.5, 0.5);
            if (distFromCenter < ofRandom(0.1, 0.3)) {
                label = 1;
            }
            else if (distFromCenter < ofRandom(0.25, 0.55)) {
                label = 2;
            }
            else {
                label = 3;
            }
            trainingExamples.push_back(sample);
            trainingLabels.push_back(label);
            classifier.addSample(sample, label);
        }
        classifier.train();
    }
    
    void draw() {
        ofPushMatrix();
        ofTranslate(box.getX(), box.getY());
        
        for (int i=0; i<trainingExamples.size(); i++) {
            vector<double> trainingExample = trainingExamples[i];
            int trainingLabel = trainingLabels[i];
            if (trainingLabel == 1) {
                ofSetColor(255, 0, 0, 150);
            }
            else if (trainingLabel == 2) {
                ofSetColor(0, 255, 0, 150);
            }
            else if (trainingLabel == 3) {
                ofSetColor(0, 0, 255, 150);
            }
            float x = ofMap(trainingExample[0], 0, 1, 0, box.getWidth());
            float y = ofMap(trainingExample[1], 0, 1, 0, box.getHeight());
            ofDrawCircle(x, y, 4);
        }
        
        // classify a new sample
        float mx = ofGetMouseX() - box.getX();
        float my = ofGetMouseY() - box.getY();
        
        if (mx > 0 && my > 0 && mx < box.getWidth() && my < box.getHeight()) {
            vector<double> sample;
            sample.push_back((double)mx / box.getWidth());
            sample.push_back((double)my / box.getHeight());
            
            int label = classifier.predict(sample);
            
            if (label == 1) {
                ofSetColor(255, 0, 0);
            }
            else if (label == 2) {
                ofSetColor(0, 255, 0);
            }
            else if (label == 3) {
                ofSetColor(0, 0, 255);
            }
            ofDrawCircle(mx, my, ofMap(sin(0.1*ofGetFrameNum()), -1, 1, 5, 35));
            ofSetColor(0);
            ofDrawBitmapString("class "+ofToString(label), mx-25, my);
        }
        
        ofPopMatrix();
    }
    
    ofxLearnSVM classifier;
    vector<vector<double> > trainingExamples;
    vector<int> trainingLabels;
};




////////////////////////////////////////
// REGRESSION DEMO

class RegressionDemo : public ofxPPElement {
public:
    RegressionDemo(ofxPPSlide *parent, string name, float x, float y, float w, float h) : ofxPPElement(parent, name, x, y, w, h) {
    }
    
    void start() {
        if (!loaded) {
            runClassifier();
            loaded = true;
        }
    }
    
    void runClassifier() {
        for (int i=0; i<500; i++){
            double x_ = ofRandom(1);
            double y_ = 0.44 * pow(x_, 2) + 0.59 * x_ + ofRandom(-0.13, 0.13);
            y_ = ofClamp(y_, 0, 1);
            vector<double> sample;
            sample.push_back(x_);
            mlp.addSample(sample, y_);
            svr.addSample(sample, y_);
            trainingExamples.push_back(sample);
            trainingLabels.push_back(y_);
        }
        mlp.train();
        svr.train();
    }
    
    void draw() {
        ofPushMatrix();
        ofTranslate(box.getX(), box.getY());

        float mx = ofGetMouseX() - box.getX();
        float my = ofGetMouseY() - box.getY();
        
        ofSetColor(255, 0, 0, 50);
        for (int i=0; i<trainingExamples.size(); i++) {
            vector<double> trainingExample = trainingExamples[i];
            float x_ = ofMap(trainingExample[0], 0, 1, 0, box.getWidth());
            float y_ = ofMap(trainingLabels[i], 0, 1, 0, box.getHeight());
            ofDrawCircle(x_, y_, 5);
        }

        if (mx > 0 && my > 0 && mx < box.getWidth() && my < box.getHeight()) {
            float x_new = (float) mx / box.getWidth();
            
            vector<double> sample;
            sample.push_back(x_new);
            
            double mlpPrediction = mlp.predict(sample);
            float x_ = ofMap(x_new, 0, 1, 0, box.getWidth());
            float y_ = ofMap(mlpPrediction, 0, 1, 0, box.getHeight());

            ofSetColor(0, 255, 0, 150);
            ofDrawCircle(x_, y_, 20);
            ofSetColor(0);
            ofDrawBitmapString("MLP", x_, y_);

            double svrPrediction = svr.predict(sample);
            x_ = ofMap(x_new, 0, 1, 0, box.getWidth());
            y_ = ofMap(svrPrediction, 0, 1, 0, box.getHeight());
            
            ofSetColor(0, 0, 255, 150);
            ofDrawCircle(x_, y_, 20);
            ofSetColor(0);
            ofDrawBitmapString("SVR", x_, y_);
        }
        ofPopMatrix();
    }
    
    ofxLearnMLP mlp;
    ofxLearnSVR svr;
    vector<vector<double> > trainingExamples;
    vector<double> trainingLabels;
};



////////////////////////////////////////
// CLUSTERING DEMO

class ClusteringDemo : public ofxPPElement {
public:
    ClusteringDemo(ofxPPSlide *parent, string name, float x, float y, float w, float h) : ofxPPElement(parent, name, x, y, w, h) {
        trained = false;
    }
    bool trained;
    void start() {
        if (!loaded) {
            runClustering();
            loaded = true;
        }
    }
    
    void runClustering() {
        numPoints = 400;
        numClusters = 5;

        for (int i = 0; i < numPoints; i++) {
            instances[i].push_back( ofRandom(1) );
            instances[i].push_back( ofRandom(1) );
            clusterer.addSample( instances[i] );
        }
        
        // we tell ofxLearn to assign our NUMPOINTS points into NUMCLUSTERS clusters.
        // It returns a vector of integers specifying the cluster for each of the points
        clusterer.setNumClusters(numClusters);
        clusterer.train();
        clusters = clusterer.getClusters();
        
        // We randomize NUMCLUSTERS colors to visualize the clusters in the draw loop
        for (int i = 0; i < numClusters; i++) {
            colors[i] = ofColor( ofRandom(255), ofRandom(255), ofRandom(255), 180 );
        }
        trained = true;
    }
    
    void draw() {
        if (!trained) return;
        ofPushMatrix();
        ofTranslate(box.getX(), box.getY());
        for (int i = 0; i < numPoints; i++) {
            ofPushMatrix();
            ofTranslate(instances[i][0] * box.getWidth(), instances[i][1] * box.getHeight());
            ofSetColor( colors[clusters[i]] );
            ofDrawCircle(0, 0, 6);
            ofDisableDepthTest();
            ofPopMatrix();
        }
        ofPopMatrix();
    }
    
    int numClusters, numPoints;
    ofxLearnKMeans clusterer;
    vector<double> instances[400];
    vector<int> clusters;
    ofColor colors[5];

};
