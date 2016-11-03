#pragma once

#include "ofMain.h"
#include "ofxJSON.h"

class ofxPPSlide;


class AudioClip {
public:
    void setup(string path, float x, float y) {
        sound.load(path);
        point.set(x, y);
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
        }
        else {
            ofSetColor(0, 165);
        }
        ofDrawCircle(ofGetWidth() * point.x, ofGetHeight() * point.y, 5);
    }
    void trigger() {
        sound.play();
        t = ofGetElapsedTimef();
    }
    void mouseMoved(int x, int y) {
        float distanceToMouse = ofDistSquared(x, y, ofGetWidth() * point.x, ofGetHeight() * point.y);
        if (distanceToMouse < 250 && !sound.isPlaying() && (ofGetElapsedTimef() - t > 2.0)) {
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
    }
    
    void start() {
        if (!loaded) {
            setupTsne();
            loaded = true;
        }
    }
    
    void stop() {
    }
    
    void setupTsne() {
        
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
};

