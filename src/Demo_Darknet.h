#pragma once

#include "ofMain.h"
#include "ofxScreenGrab.h"
#include "ofxScreenGrabCropped.h"
#include "ofxDarknet.h"

class ofxPPSlide;


class DarknetScreenGrabDemo : public ofxPPElement {
public:
    DarknetScreenGrabDemo(ofxPPSlide *parent, string name, float x, float y, float w, float h) : ofxPPElement(parent, name, x, y, w, h) {
        font.load("myriad.ttf", 20);
    }
    
    void setDarknetReference(ofxDarknet *darknet){
        this->darknet = darknet;
    }
    
    void start() {
        if (!loaded) {
            screen.setup(ofGetWidth(), ofGetHeight(), true && !IS_PROJECTING);
            
            int deviceIdx = 0;
            vector<ofVideoDevice> devices = grab.listDevices();
            for (int i=0; i<devices.size(); i++) {
                if (devices[i].deviceName == "USB Camera") {
                    cout << "found "<<devices[i].deviceName << " at " << i << endl;
                    deviceIdx = i;
                }
            }
            grab.setDeviceID(deviceIdx);
            grab.initGrabber(640, 480);
            
            loaded = true;
        }
    }
    
    void stop() {
        grab.close();
    }
    
    void update() {
        float thresh = ofMap( ofGetMouseX(), 0, ofGetWidth(), 0, 1 );
        
        if (isScreenGrab) {
            screen.update();
            if (!screen.isDebug()) {
                screen.getGrabber().getTextureReference().readToPixels(pixels);
    //            pixels.resize(ofGetWidth(), ofGetHeight());
                pw = pixels.getWidth();
                ph = pixels.getHeight();
//                detections = darknet->yolo(pixels, thresh);
            }
        }
        else {
            grab.update();
            if (grab.isFrameNew()){
//                detections = darknet->yolo( grab.getPixels(), thresh );
                pw = grab.getPixels().getWidth();
                ph = grab.getPixels().getHeight();
            }
        }
        
    }
    
    void draw() {
        ofSetColor(255);
        
        if (screen.isDebug()) {
            screen.drawDebug();
        }
        else {
            ofPushMatrix();
            ofTranslate(box.getX(), box.getY());

            if (isScreenGrab) {
                screen.draw(0, 0, box.getWidth(), box.getHeight());
            }
            else {
                grab.draw(0, 0, box.getWidth(), box.getHeight());
            }

            for(detected_object d : detections ){
                ofSetColor( d.color );
                glLineWidth( ofMap( d.probability, 0, 1, 0, 8 ) );
                ofNoFill();
                ofRectangle rect2(ofMap(d.rect.x, 0, pw, 0, box.getWidth()),
                                 ofMap(d.rect.y, 0, ph, 0, box.getHeight()),
                                 ofMap(d.rect.width, 0, pw, 0, box.getWidth()),
                                 ofMap(d.rect.height, 0, ph, 0, box.getHeight()));
                ofDrawRectangle( rect2 );
                ofSetColor(0, 200);
                ofFill();
                ofDrawRectangle( rect2.x, rect2.y, rect2.width, 22 );
                ofSetColor(255);
                font.drawString(d.label, rect2.x + 5, rect2.y + 20 );
            }
            ofPopMatrix();
        }
    }
    
    void setScreenGrabDebug(bool & debug) {
        screen.setDebug(debug);
        if (!screen.isDebug()) {
            pixels.allocate(screen.getGrabber().getTextureReference().getWidth(),
                            screen.getGrabber().getTextureReference().getHeight(), 4);
        }
    }
    
    void keyPressed(int key) {
        if (key==' ') {
            isScreenGrab = !isScreenGrab;
        }
        else if (key=='d') {
            bool b = !screen.isDebug();
            setScreenGrabDebug(b);
        }
    }
    
    bool mouseMoved(int x, int y ){
        screen.mouseMoved(x, y);
        return true;
    }
    
    bool mouseDragged(int x, int y){
        screen.mouseDragged(x, y);
        return true;
    }
    
    bool mousePressed(int x, int y){
        screen.mousePressed(x, y);
        return true;
    }
    
    bool mouseReleased(int x, int y){
        screen.mouseReleased(x, y);
        return true;
    }

    ofxDarknet *darknet;
    vector<detected_object> detections;
    ofVideoGrabber grab;
    ofxScreenGrabCropped screen;
    bool isScreenGrab = false;
    ofPixels pixels;
    int pw, ph;
    ofTrueTypeFont font;
};

