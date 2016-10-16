#pragma once

#include "ofMain.h"
#include "ofxJSON.h"

class ofxPPSlide;


struct ImageThumb {
public:
    ofImage image;
    vector<int> closest;
    float t;
};


class ReverseImageSearchDemo : public ofxPPElement {
public:
    ReverseImageSearchDemo(ofxPPSlide *parent, string name, float x, float y, float w, float h) : ofxPPElement(parent, name, x, y, w, h) {
    }
    
    void start() {
        if (!loaded) {
            setupData();
            loaded = true;
        }
    }
    
    void stop() {
    }
    
    void setupData() {
        
        thumbHeight = box.getHeight() * 0.25;
        margin = 5;
        zoom = 1.25;
        string file = "/Users/gene/Teaching/ML4A/ml4a-ofx/apps/ReverseImageSearch/bin/data/lookup.json";
        
        fullWidth = 0;
        ofxJSONElement result;
        bool parsingSuccessful = result.open(file);
        for (int i=0; i<result.size(); i++) {
            string path = result[i]["path"].asString();
            ImageThumb thumb;
            thumb.image.load(path);
            thumb.image.resize(thumbHeight * thumb.image.getWidth() / thumb.image.getHeight(), thumbHeight);
            for (int j=0; j<result[i]["lookup"].size(); j++) {
                int c = result[i]["lookup"][j].asInt();
                thumb.closest.push_back(c);
            }
            thumbs.push_back(thumb);
            order.push_back(i);
            fullWidth += (thumb.image.getWidth() + 5);
        }
        
        random_shuffle(order.begin(), order.end());
        mx = 0;
        highlighted = -1;
    }
    
    void update() {
    }
    
    void draw() {
        int centerX;
        float x = 10 - mx;
        float y = box.getY() + thumbHeight * (zoom - 1.0) * 0.5 + 20;
        for (int i=0; i<thumbs.size(); i++) {
            if (x > -thumbs[order[i]].image.getWidth() &&
                x < box.getWidth()) {
                thumbs[order[i]].image.draw(x, y);
            }
            if (ofGetMouseX() > x && ofGetMouseX() < x+thumbs[order[i]].image.getWidth()) {
                highlighted = order[i];
                centerX = x + 0.5 * thumbs[order[i]].image.getWidth();
            }
            x += (margin + thumbs[order[i]].image.getWidth());
        }
        
        if (highlighted != -1) {
            ofPushStyle();
            ofPushMatrix();
            ofSetRectMode(OF_RECTMODE_CENTER);
            ofSetColor(0, 255, 0);
            ofDrawRectangle(centerX, 0.5 * thumbHeight + y,
                            zoom * thumbs[highlighted].image.getWidth() + 20,
                            zoom * thumbs[highlighted].image.getHeight() + 20);
            ofSetColor(255);
            thumbs[highlighted].image.draw(centerX, 0.5 * thumbHeight + y,
                                           zoom * thumbs[highlighted].image.getWidth(),
                                           zoom * thumbs[highlighted].image.getHeight());
            ofSetColor(0, 200);
            ofDrawRectangle(centerX, zoom * thumbHeight + y - 30, 90, 20);
            ofSetColor(255);
            ofDrawBitmapString("Query Image", centerX - 43, zoom * thumbHeight + y - 22);
            ofPopMatrix();
            ofPopStyle();
            
            float x = margin;
            float y = box.getHeight() - 2 * (thumbHeight + margin);
            ofSetColor(0);
            ofDrawBitmapString("Nearest neighbor images:", x + margin, y - margin);
            ofSetColor(255);
            for (int i=0; i<20; i++) {
                thumbs[thumbs[highlighted].closest[i]].image.draw(x, y);
                x += (margin + thumbs[thumbs[highlighted].closest[i]].image.getWidth());
                if (x > (box.getWidth() - thumbs[thumbs[highlighted].closest[i+1]].image.getWidth()*0.33)) {
                    y += thumbHeight + margin;
                    x = margin;
                }
            }
        }
    }

    bool mouseDragged(int x_, int y_) {
        float newMx = mx + 10 * (ofGetMouseX() - ofGetPreviousMouseX());
        mx = max(0.0f, min(fullWidth - box.getWidth(), newMx));
    }


    
    vector<ImageThumb> thumbs;
    vector<int> order;
    
    float fullWidth;
    float mx;
    int highlighted;
    float thumbHeight;
    float margin;
    float zoom;
};

