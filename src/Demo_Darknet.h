#pragma once

#include "ofMain.h"
#include "ofxGui.h"
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
            loaded = true;
        }
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
                detections = darknet->yolo(pixels, thresh);
            }
        }
        else {
            grab.update();
            if (grab.isFrameNew()){
                detections = darknet->yolo( grab.getPixels(), thresh );
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

            float ar = float(pw) / float(ph);
            
            float bx = 0;
            float by = 0;
            float bw = box.getWidth();
            float bh = box.getHeight();
            if (ar * box.getHeight() < box.getWidth()) {
                bh = box.getHeight();
                bw = ar * bh;
                bx = 0.5 * (box.getWidth() - bw);
            } else {
                bw = box.getWidth();
                bh = bw / ar;
                by = 0.5 * (box.getHeight() - bh);
            }
            
            
            if (isScreenGrab) {
                //screen.draw(0, 0, box.getWidth(), box.getHeight());
                screen.draw(bx, by, bw, bh);
            }
            else {
                //grab.draw(0, 0, box.getWidth(), box.getHeight());
                grab.draw(bx, by, bw, bh);
            }

            for(detected_object d : detections ){
                ofSetColor( d.color );
                glLineWidth( ofMap( d.probability, 0, 1, 0, 8 ) );
                ofNoFill();
//                ofRectangle rect2(ofMap(d.rect.x, 0, pw, 0, box.getWidth()),
//                                 ofMap(d.rect.y, 0, ph, 0, box.getHeight()),
//                                 ofMap(d.rect.width, 0, pw, 0, box.getWidth()),
//                                 ofMap(d.rect.height, 0, ph, 0, box.getHeight()));
                ofRectangle rect2(ofMap(d.rect.x, 0, pw, bx, bw),
                                  ofMap(d.rect.y, 0, ph, by, bh),
                                  ofMap(d.rect.width, 0, pw, 0, bw),
                                  ofMap(d.rect.height, 0, ph, 0, bh));
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



class DarknetDeepdreamDemo : public ofxPPElement {
public:
    DarknetDeepdreamDemo(ofxPPSlide *parent, string name, float x, float y, float w, float h) : ofxPPElement(parent, name, x, y, w, h) {
        font.load("myriad.ttf", 20);
        
        gui.setup();
        gui.setPosition(5, 200);
        gui.setName("darkdream");
        gui.add(isDreaming.set("dream", false));
        gui.add(max_layer.set("max_layer", 11, 1, 13));
        gui.add(iters.set("iterations", 8, 1, 10));
        gui.add(octaves.set("octaves", 2, 1, 8));
        gui.add(thresh.set("thresh", 0.85, 0.0, 1.0));
        gui.add(range.set("range", 3, 1, 10));
        gui.add(norm.set("norm", 1, 1, 10));
        gui.add(rate.set("rate", 0.02, 0.0, 0.1));
        gui.add(blendAmt.set("blendAmt", 0.1, 0.0, 1.0));
        
        nw = 240;
        nh = 180;
    }
    
    void setDarknetReference(ofxDarknet *darknet){
        this->darknet = darknet;
    }
    
    void start() {
        if (!loaded) {
            screen.setup(ofGetWidth(), ofGetHeight(), true && !IS_PROJECTING);
            loaded = true;
        }
        int deviceIdx = 0;
        vector<ofVideoDevice> devices = grab.listDevices();
        for (int i=0; i<devices.size(); i++) {
            if (devices[i].deviceName == "USB Camera") {
                cout << "found "<<devices[i].deviceName << " at " << i << endl;
                deviceIdx = i;
            }
        }
        grab.setDeviceID(deviceIdx);
        grab.initGrabber(320, 240);
        isDreaming.addListener(this, &DarknetDeepdreamDemo::startDream);
    }
    
    void stop() {
        isDreaming.removeListener(this, &DarknetDeepdreamDemo::startDream);
        grab.close();
    }
    
    void makeDream() {
        // blend last dream with cam
        ofPixels p1 = nightmare.getPixels();
        ofPixels p2 = grab.getPixels();
        p2.resize(nw, nh);
        
        ofPixels pix;
        pix.allocate(p1.getWidth(), p2.getHeight(), 3);
        for (int i=0; i<pix.size(); i++) {
            pix[i] = blendAmt * p1[i] + (1.0 - blendAmt) * p2[i];
        }
        
        
        // dream
        nightmare = darknet->nightmare( pix, max_layer, range, norm, 1, iters, octaves, rate, thresh );

    }
    
    void startDream(bool & b) {
        if (b) {
            nightmare.setFromPixels(grab.getPixels());
            nightmare.resize(nw, nh);
            makeDream();
        }
    
    }

    
    void update() {

        
        if (isScreenGrab) {
            screen.update();
            if (!screen.isDebug()) {
                screen.getGrabber().getTextureReference().readToPixels(pixels);
                //            pixels.resize(ofGetWidth(), ofGetHeight());
                pw = pixels.getWidth();
                ph = pixels.getHeight();
            }
        }
        else {
            grab.update();
            if (grab.isFrameNew()){
                pw = grab.getPixels().getWidth();
                ph = grab.getPixels().getHeight();
            }
        }
        
        if (isDreaming) {
            makeDream();
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
            
            //float ar = float(box.getWidth()) / float(box.getHeight());
            
            if (isScreenGrab) {
                screen.draw(200, 50, 512, 384);
            }
            else {
                grab.draw(200, 50, 512, 384);
            }
            
            if (nightmare.isAllocated()){
                nightmare.draw(720, 50, 512, 384);
            }
            
            ofPopMatrix();
        }
        
        gui.draw();

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
    //vector<detected_object> detections;
    ofVideoGrabber grab;
    ofxScreenGrabCropped screen;
    bool isScreenGrab = false;
    ofPixels pixels;
    int pw, ph;
    ofTrueTypeFont font;
    
    ofImage nightmare;
    
    ofParameter<bool> isDreaming;
    ofParameter<int> max_layer;
    ofParameter<int> iters;
    ofParameter<int> octaves;
    ofParameter<float> thresh;
    ofParameter<int> range;
    ofParameter<int> norm;
    ofParameter<float> rate;
    ofParameter<float> blendAmt;
    
    ofxPanel gui;
    
    int nw, nh;
};


