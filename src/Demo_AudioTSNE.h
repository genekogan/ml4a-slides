#pragma once

#include "ofMain.h"
#include "ofxJSON.h"

class ofxPPSlide;


class AudioClip {
public:
    void setup(string path, float x, float y, ofRectangle home) {
        sound.load(path);
        point.set(ofMap(x, 0, 1, home.getX(), home.getX() + home.getWidth()),
                  ofMap(y, 0, 1, home.getY(), home.getY() + home.getHeight()));
//        point.set(ofGetWidth() * x, ofGetHeight() * y);
        t = 0;
    }
    void update() {
        if (sound.isPlaying() && sound.getPositionMS() > 1000) {
            sound.stop();
        }
    }
    void draw() {
        if (sound.isPlaying()) {
            ofSetColor(0, 255, 0, 220);
        } else {
            ofSetColor(0, 165);
        }
        ofDrawCircle(point.x, point.y, 5);
    }
    void trigger() {
        sound.play();
        t = ofGetElapsedTimef();
    }
    void mouseMoved(int x, int y) {
        if (sound.isPlaying() || (ofGetElapsedTimef() - t < 2.0)) {
            return;
        }
        float distanceToMouse = ofDistSquared(x, y, point.x, point.y);
        if (distanceToMouse < 250) {
            trigger();
        }
    }
    ofSoundPlayer sound;
    ofPoint point;
    float t;
};


class AudioTSNEDemo : public ofxPPElement {
public:
    AudioTSNEDemo(ofxPPSlide *parent, string name, float x, float y, float w, float h) : ofxPPElement(parent, name, x, y, w, h) {
        tsnePath = "/Users/gene/Desktop/bohemian.json";
    }
    
    void start() {
        if (!loaded) {
            setupTsne();
            loaded = true;
        }
    }
    
    void setTsnePath(string tsnePath_) {
        tsnePath = tsnePath_;
    }
    
    void stop() {
    }
    
    void setupTsne() {
         ofxJSONElement result;
         bool parsingSuccessful = result.open(tsnePath);
         for (int i=0; i<result.size(); i++) {
             string path = result[i]["path"].asString();
             //float x = result[i]["x"].asFloat();
             //float y = result[i]["y"].asFloat();
             float x = result[i]["point"][0].asFloat();
             float y = result[i]["point"][1].asFloat();
         
             AudioClip newSound;
             newSound.setup(path, x, y, box);
             sounds.push_back(newSound);
         }
        
        /*
        string file = "audiotsnetest.json";
        ofxJSONElement result;
        bool parsingSuccessful = result.open(file);
        for (int i=0; i<result.size(); i++) {
            string path = result[i]["path"].asString();
            float x = result[i]["x"].asFloat();
            float y = result[i]["y"].asFloat();
            AudioClip newSound;
            newSound.setup(path, x, y);
            sounds.push_back(newSound);
        }
         */
    }
    
    void update() {
        for (int i=0; i<sounds.size(); i++) {
            sounds[i].update();
        }
        ofSoundUpdate();
    }
    
    void draw() {
        //ofBackgroundGradient(ofColor(100), ofColor(20));
        for (int i=0; i<sounds.size(); i++) {
            sounds[i].draw();
        }
    }
    
    bool mouseMoved(int x_, int y_) {
        for (int i=0; i<sounds.size(); i++) {
            sounds[i].mouseMoved(x_, y_);
        }
    }
    
    vector<AudioClip> sounds;
    string tsnePath;
};

