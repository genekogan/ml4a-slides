#pragma once

#include "ofMain.h"
#include "ofxThreadedImageLoader.h"
#include "ofxCcv.h"
#include "ofxInstagram.h"


class ofxPPSlide;



class ofxCcvThreaded : public ofThread, public ofxCcv {
public:
    ofxCcvThreaded() {
        ready = true;
        isNew = false;
        toClassify = false;
        toEncode = false;
    }
    
    void start() {
        startThread();
    }
    
    void stop() {
        stopThread();
    }
    
    void setClassify(bool toClassify, int numResults=20) {
        this->toClassify = toClassify;
        this->numResults = numResults;
    }
    
    void setEncode(bool toEncode) {
        this->toEncode = toEncode;
    }
    
    void update(ofBaseHasPixels &pix, int layer) {
        this->layer = layer;
        ready = false;
        img.setFromPixels(pix.getPixels());
    }
    
    void threadedFunction() {
        while(isThreadRunning()) {
            if(lock()) {
                if (!ready) {
                    if (toEncode) {
                        encode(img, layer);
                    }
                    if (toClassify) {
                        results = classify(img, numResults);
                    }
                    ready = true;
                    isNew = true;
                }
                unlock();
            } else {
                ofLogWarning("threadedFunction()") << "Unable to lock mutex.";
            }
        }
    }
    
    vector<ofxCcv::Classification> getResults() {
        //unique_lock<std::mutex> lock(mutex);
        return results;
    }
    
    bool isReady() {
        return ready;
    }
    
    bool hasNewResults() {
        if (isNew) {
            isNew = false;
            return true;
        }
        else {
            return false;
        }
    }
    
protected:
    
    ofImage img;
    vector<ofxCcv::Classification> results;
    
    bool isNew;
    bool ready;
    int layer;
    
    int numResults;
    bool toClassify;
    bool toEncode;
};



class CcvForwardPassDemoThreaded : public ofxPPElement {
public:
    CcvForwardPassDemoThreaded(ofxPPSlide *parent, string name, float x, float y, float w, float h) : ofxPPElement(parent, name, x, y, w, h) {
        loaded = false;
        inputMode = 0;
        ofSetVerticalSync(true);
        layer = 0;
        viewMode = 0;
        highlighted = 0;
        scroll = 0;
    }
    
    void start() {
        if (!loaded) {
            loadAssets();
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
        ccv.start();
    }
    
    void stop() {
        grab.close();
        ccv.stop();
    }
    
    void loadAssets() {
        loadCcv();
    }
    
    void loadCcv() {
        loaded = true;
        ccv.setup("/Users/gene/bin/misc/ccv/image-net-2012.sqlite3");
        ccv.setEncode(true);
        ccv.setClassify(false);
    }
    
    void draw() {
        if (ccv.isLoaded() && inputMode == 0) {
            grab.update();
            ccv.update(grab, ccv.numLayers());
        }

        ofPushMatrix();
        ofTranslate(box.getX(), box.getY());
        
        if (!ccv.isLoaded()) {
            ofDrawBitmapString("Can't find network file! Check to make sure it's in your data folder.", 20, 20);
            return;
        }
        
        if (inputMode == 0) {   // webcam
            grab.draw(0, 0, 320, 240);
        }
        else {  // image
            pic.draw(0, 0, 320, pic.getHeight() * 320 / pic.getWidth());
        }
        
        // draw menu
        ofNoFill();
        inputMode == 0 ? ofSetColor(0, 255, 0) : ofSetColor(0);
        ofDrawRectangle(10, 245, 200, 20);
        ofDrawBitmapString("Webcam", 15, 262);
        inputMode == 1 ? ofSetColor(0, 255, 0) : ofSetColor(0);
        ofDrawRectangle(10, 268, 200, 20);
        ofDrawBitmapString("Load picture", 15, 285);
        viewMode == 0 ? ofSetColor(0, 255, 0) : ofSetColor(0);
        ofDrawRectangle(10, 310, 200, 20);
        ofDrawBitmapString("View Feature maps", 15, 327);
        viewMode == 1 ? ofSetColor(0, 255, 0) : ofSetColor(0);
        ofDrawRectangle(10, 333, 200, 20);
        ofDrawBitmapString("View Filters", 15, 350);
        vector<string> layerNames = ccv.getLayerNames();
        for (int i=0; i<layerNames.size(); i++) {
            i == layer ? ofSetColor(0, 255, 0) : ofSetColor(0);
            ofDrawRectangle(10, 375+23*i, 200, 20);
            ofDrawBitmapString(layerNames[i], 15, 392+23*i);
        }
        ofSetColor(0);
        ofDrawBitmapString("drag feature maps to scroll", 5, ofGetHeight()-5);
        
        
        ofTranslate(325, 5);
        
        // draw feature maps
        if (viewMode == 0) {
            maps = ccv.getFeatureMaps(layer);
            ofImage img;
            img.getTexture().setTextureMinMagFilter(GL_NEAREST, GL_NEAREST);
            for (int m=0; m<maps.size(); m++) {
                ofPushMatrix();
                ofSetColor(255);
                if (maps.size() > 1) {
                    maps[m].getImage(img);
                    ofTranslate((m%8)*105, floor(m/8)*105 - scroll);
                    img.draw(0, 0, 100, 100);
                }
                else {
                    float mul = 255.0 / maps[m].max;
                    int cols = 32;
                    int rows = 128;
                    ofPixels pix;
                    pix.allocate(rows, cols, OF_PIXELS_GRAY);
                    for (int i=0; i<rows*cols; i++) {
                        pix[i] = mul * maps[m].acts[i];
                    }
                    img.setFromPixels(pix);
                    img.draw(0, 0, box.getWidth() - 330, 100);
                }
                ofPopMatrix();
            }
            
            // draw highlighted
            if (highlighted != -1 && highlighted < maps.size() && maps.size() > 1) {
                ofxCcv::FeatureMap map = maps[highlighted];
                map.getImage(img);
                ofPushMatrix();
                ofTranslate(ofClamp((highlighted%8)*105 - 50, 0, ofGetWidth()-220), ofClamp(floor(highlighted/8)*105 - scroll - 50, 20, ofGetHeight()-220));
                ofSetColor(0, 255, 0);
                ofFill();
                ofDrawRectangle(-10, -25, 220, 235);
                ofSetColor(0);
                ofDrawBitmapString(ccv.getLayerNames()[layer]+" - "+ofToString(highlighted), 0, -2);
                ofSetColor(255);
                img.draw(0, 0, 200, 200);
                ofPopMatrix();
            }
            
            if (layer == ccv.getLayerNames().size()-1) {
                results = ccv.getResults();
                ofPushStyle();
                ofPushMatrix();
                ofTranslate(10, 120);
                for(int i = 0; i < results.size(); i++) {
                    ofSetColor(ofColor::black);
                    ofFill();
                    ofDrawRectangle(0, 0, 100, 20);
                    ofSetColor(ofColor::red);
                    ofDrawRectangle(1, 2, (100-2) * results[i].confidence, 15);
                    ofSetColor(ofColor::blue);
                    ofDrawBitmapStringHighlight(results[i].imageNetName, 106, 15);
                    ofTranslate(0, 25);
                }
                ofPopMatrix();
                ofPopStyle();
            }
        }
        
        // draw weights
        else if (viewMode == 1) {
            ofSetColor(0);
            ofDrawBitmapString("just first layer filters for now", 2, 15);
            ofSetColor(255);
            vector<ofImage> weightImgs = ccv.getWeights();
            for (int i=0; i<weightImgs.size(); i++) {
                ofPushMatrix();
                ofTranslate((i%12)*65, 24 + floor(i/12)*65);
                weightImgs[i].getTexture().setTextureMinMagFilter(GL_NEAREST, GL_NEAREST);
                weightImgs[i].draw(0, 0, 60, 60);
                ofPopMatrix();
            }
        }
        
        ofPopMatrix();
    }
    
    bool mouseMoved(int x_, int y_) {
        float mx = ofGetMouseX() - box.getX();
        float my = ofGetMouseY() - box.getY();
        for (int i=0; i<8; i++) {
            for (int j=0; j<32; j++) {
                if (ofRectangle(325 + 105*i, 5 + 105*j - scroll, 100, 100).inside(mx, my)) {
                    highlighted = i + 8 * j;
                    return true;
                }
            }
        }
        highlighted = -1;
        return false;
    }
    
    bool mouseScrolled(float x_, float y_) {
        scroll = ofClamp(scroll - y_, 0, 32 * 110);
    }

    bool mousePressed(int x_, int y_) {
        float mx = ofGetMouseX() - box.getX();
        float my = ofGetMouseY() - box.getY();
        if      (ofRectangle(10, 310, 200, 20).inside(mx, my)) viewMode = 0;
        else if (ofRectangle(10, 333, 200, 20).inside(mx, my)) viewMode = 1;
        else if (ofRectangle(10, 245, 200, 20).inside(mx, my)) inputMode = 0;
        else if (ofRectangle(10, 268, 200, 20).inside(mx, my)) {
            ofFileDialogResult result = ofSystemLoadDialog("Select an image");
            if (result.bSuccess) {
                inputMode = 1;
                pic.load(result.filePath);
                ccv.update(pic, ccv.numLayers());
                return true;
            }
        }
        else {
            for (int i=0; i<ccv.getLayerNames().size(); i++) {
                if (ofRectangle(10, 375+23*i, 200, 20).inside(mx, my)) {
                    layer = i;
                    if (layer == ccv.getLayerNames().size()-1) {
                        ccv.setClassify(true, 20);
                    }
                    else {
                        ccv.setClassify(false);
                    }
                    if (inputMode == 1) {
                        ccv.update(pic, ccv.numLayers());
                    }
                    return true;
                }
            }
        }
        return false;
    }
    
    ofImage pic;
    ofVideoGrabber grab;
    
    ofxCcvThreaded ccv;
    vector<ofxCcv::FeatureMap> maps;
    vector<ofxCcv::Classification> results;
    
    int layer;
    int inputMode;
    int viewMode;
    int highlighted;
    int scroll;
};



class CcvForwardPassDemo : public ofxPPElement {
public:
    CcvForwardPassDemo(ofxPPSlide *parent, string name, float x, float y, float w, float h) : ofxPPElement(parent, name, x, y, w, h) {
        loaded = false;
        inputMode = 0;
        layer = 0;
        viewMode = 0;
        highlighted = 0;
        scroll = 0;
    }
    
    void start() {
        if (!loaded) {
            loadAssets();
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
    }
    
    void stop() {
        grab.close();
    }
    
    void loadAssets() {
        loadCcv();
    }
    
    void loadCcv() {
        loaded = true;
        ccv.setup("/Users/gene/bin/misc/ccv/image-net-2012.sqlite3");
    }
    
    void draw() {
        if (ccv.isLoaded() && inputMode == 0) {
            grab.update();
            ccv.encode(grab, ccv.numLayers());
        }
        
        ofPushMatrix();
        ofTranslate(box.getX(), box.getY());
        
        if (!ccv.isLoaded()) {
            ofDrawBitmapString("Can't find network file! Check to make sure it's in your data folder.", 20, 20);
            return;
        }
        
        if (inputMode == 0) {   // webcam
            grab.draw(0, 0, 320, 240);
        }
        else {  // image
            pic.draw(0, 0, 320, pic.getHeight() * 320 / pic.getWidth());
        }
        
        // draw menu
        ofNoFill();
        inputMode == 0 ? ofSetColor(0, 255, 0) : ofSetColor(0);
        ofDrawRectangle(10, 245, 200, 20);
        ofDrawBitmapString("Webcam", 15, 262);
        inputMode == 1 ? ofSetColor(0, 255, 0) : ofSetColor(0);
        ofDrawRectangle(10, 268, 200, 20);
        ofDrawBitmapString("Load picture", 15, 285);
        viewMode == 0 ? ofSetColor(0, 255, 0) : ofSetColor(0);
        ofDrawRectangle(10, 310, 200, 20);
        ofDrawBitmapString("View Feature maps", 15, 327);
        viewMode == 1 ? ofSetColor(0, 255, 0) : ofSetColor(0);
        ofDrawRectangle(10, 333, 200, 20);
        ofDrawBitmapString("View Filters", 15, 350);
        vector<string> layerNames = ccv.getLayerNames();
        for (int i=0; i<layerNames.size(); i++) {
            i == layer ? ofSetColor(0, 255, 0) : ofSetColor(0);
            ofDrawRectangle(10, 375+23*i, 200, 20);
            ofDrawBitmapString(layerNames[i], 15, 392+23*i);
        }
        ofSetColor(0);
        ofDrawBitmapString("drag feature maps to scroll", 5, ofGetHeight()-5);
        
        
        ofTranslate(325, 5);
        
        // draw feature maps
        if (viewMode == 0) {
            maps = ccv.getFeatureMaps(layer);
            ofImage img;
            img.getTexture().setTextureMinMagFilter(GL_NEAREST, GL_NEAREST);
            for (int m=0; m<maps.size(); m++) {
                ofPushMatrix();
                ofSetColor(255);
                if (maps.size() > 1) {
                    maps[m].getImage(img);
                    ofTranslate((m%8)*105, floor(m/8)*105 - scroll);
                    img.draw(0, 0, 100, 100);
                }
                else {
                    float mul = 255.0 / maps[m].max;
                    int cols = 32;
                    int rows = 128;
                    ofPixels pix;
                    pix.allocate(rows, cols, OF_PIXELS_GRAY);
                    for (int i=0; i<rows*cols; i++) {
                        pix[i] = mul * maps[m].acts[i];
                    }
                    img.setFromPixels(pix);
                    img.draw(0, 0, box.getWidth() - 330, 100);
                }
                ofPopMatrix();
            }
            
            // draw highlighted
            if (highlighted != -1 && highlighted < maps.size() && maps.size() > 1) {
                ofxCcv::FeatureMap map = maps[highlighted];
                map.getImage(img);
                ofPushMatrix();
                ofTranslate(ofClamp((highlighted%8)*105 - 50, 0, ofGetWidth()-220), ofClamp(floor(highlighted/8)*105 - scroll - 50, 20, ofGetHeight()-220));
                ofSetColor(0, 255, 0);
                ofFill();
                ofDrawRectangle(-10, -25, 220, 235);
                ofSetColor(0);
                ofDrawBitmapString(ccv.getLayerNames()[layer]+" - "+ofToString(highlighted), 0, -2);
                ofSetColor(255);
                img.draw(0, 0, 200, 200);
                ofPopMatrix();
            }
            
            if (layer == ccv.getLayerNames().size()-1) {
                if (inputMode == 0) {
                    results = ccv.classify(grab, 20);
                }
                else {
                    results = ccv.classify(pic, 20);
                }
                ofPushStyle();
                ofPushMatrix();
                ofTranslate(10, 120);
                for(int i = 0; i < results.size(); i++) {
                    ofSetColor(ofColor::black);
                    ofFill();
                    ofDrawRectangle(0, 0, 100, 20);
                    ofSetColor(ofColor::red);
                    ofDrawRectangle(1, 2, (100-2) * results[i].confidence, 15);
                    ofSetColor(ofColor::blue);
                    ofDrawBitmapStringHighlight(results[i].imageNetName, 106, 15);
                    ofTranslate(0, 25);
                }
                ofPopMatrix();
                ofPopStyle();
            }
        }
        
        // draw weights
        else if (viewMode == 1) {
            ofSetColor(0);
            ofDrawBitmapString("just first layer filters for now", 2, 15);
            ofSetColor(255);
            vector<ofImage> weightImgs = ccv.getWeights();
            for (int i=0; i<weightImgs.size(); i++) {
                ofPushMatrix();
                ofTranslate((i%12)*65, 24 + floor(i/12)*65);
                weightImgs[i].getTexture().setTextureMinMagFilter(GL_NEAREST, GL_NEAREST);
                weightImgs[i].draw(0, 0, 60, 60);
                ofPopMatrix();
            }
        }
        
        ofPopMatrix();
    }
    
    bool mouseMoved(int x_, int y_) {
        float mx = ofGetMouseX() - box.getX();
        float my = ofGetMouseY() - box.getY();
        for (int i=0; i<8; i++) {
            for (int j=0; j<32; j++) {
                if (ofRectangle(325 + 105*i, 5 + 105*j - scroll, 100, 100).inside(mx, my)) {
                    highlighted = i + 8 * j;
                    return true;
                }
            }
        }
        highlighted = -1;
        return false;
    }
    
    bool mouseScrolled(float x_, float y_) {
        scroll = ofClamp(scroll - y_, 0, 32 * 110);
    }
    
    bool mousePressed(int x_, int y_) {
        float mx = ofGetMouseX() - box.getX();
        float my = ofGetMouseY() - box.getY();
        if      (ofRectangle(10, 310, 200, 20).inside(mx, my)) viewMode = 0;
        else if (ofRectangle(10, 333, 200, 20).inside(mx, my)) viewMode = 1;
        else if (ofRectangle(10, 245, 200, 20).inside(mx, my)) inputMode = 0;
        else if (ofRectangle(10, 268, 200, 20).inside(mx, my)) {
            ofFileDialogResult result = ofSystemLoadDialog("Select an image");
            if (result.bSuccess) {
                inputMode = 1;
                pic.load(result.filePath);
                ccv.encode(pic, ccv.numLayers());
                return true;
            }
        }
        else {
            for (int i=0; i<ccv.getLayerNames().size(); i++) {
                if (ofRectangle(10, 375+23*i, 200, 20).inside(mx, my)) {
                    layer = i;
                    return true;
                }
            }
        }
        return false;
    }
    
    ofImage pic;
    ofVideoGrabber grab;
    
    ofxCcv ccv;
    vector<ofxCcv::FeatureMap> maps;
    vector<ofxCcv::Classification> results;
    
    int layer;
    int inputMode;
    int viewMode;
    int highlighted;
    int scroll;
};



class CcvInstagramDemo : public ofxPPElement {
public:
    CcvInstagramDemo(ofxPPSlide *parent, string name, float x, float y, float w, float h) : ofxPPElement(parent, name, x, y, w, h) {
        loaded = false;
    }
    
    void start() {
        if (!loaded) {
            loadAssets();
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
    
    void loadAssets() {
        loadCcv();
    }
    
    //https://www.instagram.com/oauth/authorize/?client_id=005a17c812b440c79a1382a18674b28b&redirect_uri=http://127.0.0.1&response_type=code&scope=public_content
    void loadCcv() {
        loaded = true;
        ccv.setup("/Users/gene/bin/misc/ccv/image-net-2012.sqlite3");
        string auth_token = "30900225.005a17c.4121a62509204fdfbeb211b05a67d525";
        instagram.setup(auth_token,"self");
        instagram.setCertFileLocation(ofToDataPath("ca-bundle-insta",false));
        scrollValue = 0;
    }
    
    void update() {
        grab.update();
        if(grab.isFrameNew()) {
            if(ofGetKeyPressed()) {
                
                // get libccv classification
                results = ccv.classify(grab);
                if (results.size() == 0)    return;
                string searchword = results[0].imageNetName;
                vector<string> words = ofSplitString(searchword, ",");
                if (words.size() == 0) return;
                searchword = words[0];
                ofStringReplace(searchword, " ", "");
                
                // search instagram for first word
                instagram.getListOfTaggedObjectsNormal(searchword, 20);
                images.clear();
                images.resize(20);
                if(!instagram.getBasicData().empty()) {
                    for(int i = 0; i < instagram.getBasicData().size(); i++) {
                        getImages.loadFromURL(images[i], instagram.getBasicData()[i].imageURL);
                    }
                }
            }
        }
    }
    
    void draw() {
        ofPushMatrix();
        ofTranslate(box.getX(), box.getY());
        
        if (!ccv.isLoaded()) {
            ofDrawBitmapString("Can't find network file! Check to make sure it's in your data folder.", 20, 20);
            return;
        }

        scrollValue = -ofMap(ofGetMouseY(), 0, ofGetHeight(), 0, 3200);
        
        // draw camera
        grab.draw(0, 0);
        
        // draw libccv results
        ofPushStyle();
        ofPushMatrix();
        ofTranslate(5, 5);
        ofSetColor(0, 180);
        ofDrawRectangle(0, -10, 310, 90);
        for (int i = 0; i < results.size(); i++) {
            ofSetColor(ofColor::white);
            ofFill();
            ofSetColor(255, 0, 0);
            ofDrawRectangle(5, 1, (105-2) * results[i].confidence, 10-2);
            ofSetColor(ofColor::white);
            ofDrawBitmapString(results[i].imageNetName, 105, 10);
            ofTranslate(0, 15);
        }
        ofPopMatrix();
        ofPopStyle();
        
        // draw instagram search results
        ofPushMatrix();
        ofTranslate(640, 0);
        ofTranslate(0, scrollValue);
        if (!images.empty()) {
            for (int i = 0; i < images.size(); i++) {
                if (images[i].isAllocated()) {
                    int idx = i;
                    if (i==2) idx = idx +1;
                    ofPushStyle();
                    ofSetColor(0, 100);
                    ofDrawRectangle(5, 5+(i*160), 800, 155);
                    ofPopStyle();
                    images[idx].draw(10, 10+(i*160), 150,150);
                    ofDrawBitmapString("Username: "+instagram.getBasicData()[i].user, 170,20+(i*160));
                    ofDrawBitmapString("Created At: "+instagram.getBasicData()[i].created_at, 170,35+(i*160));
                    ofDrawBitmapString("Image Url: "+instagram.getBasicData()[i].imageURL, 170,50+(i*160));
                    ofDrawBitmapString("Image ID: "+instagram.getBasicData()[i].imageID, 170,65+(i*160));
                    ofDrawBitmapString("Caption: "+instagram.getBasicData()[i].caption, 170, 80+(i*160));
                }
            }
        }
        ofPopMatrix();
        
        ofPopMatrix();
    }
    
    bool mouseMoved(int x_, int y_) {
        float mx = ofGetMouseX() - box.getX();
        float my = ofGetMouseY() - box.getY();
        return false;
    }
    
    bool mouseDragged(int x_, int y_) {
        float mx = ofGetMouseX() - box.getX();
        float my = ofGetMouseY() - box.getY();
        return mouseOver;
    }
    
    bool mousePressed(int x_, int y_) {
        float mx = ofGetMouseX() - box.getX();
        float my = ofGetMouseY() - box.getY();
        clickOrigin = ofVec2f(mx,my);
        return mouseOver;
    }
    
    bool mouseReleased(int x, int y, int button) {
        releasePos = ofVec2f(x,y);
        scrollAmount = clickOrigin - releasePos;
        scrollValue += scrollAmount.y;
        return mouseOver;
    }

    
    ofVideoGrabber grab;
    
    ofxCcv ccv;
    vector<ofxCcv::Classification> results;
    
    ofxInstagram instagram;
    ofxThreadedImageLoader getImages;
    deque<ofImage> images;
    
    ofVec2f scrollAmount, clickOrigin, releasePos;
    int scrollValue;
};



class CcvOcclusionDemo : public ofxPPElement {
public:
    CcvOcclusionDemo(ofxPPSlide *parent, string name, float x, float y, float w, float h) : ofxPPElement(parent, name, x, y, w, h) {
        loaded = false;
    }
    
    void start() {
        if (!loaded) {
            loadAssets();
        }
    }
    
    void stop() {
    }
    
    void loadAssets() {
        loadCcvAndImage();
    }
    
    void loadCcvAndImage() {
        loaded = true;
        ccv.setup("/Users/gene/bin/misc/ccv/image-net-2012.sqlite3");

        string imagePath = "/Users/gene/Code/of_v0.9.0_osx_release/addons/ofxTSNE/example-images/bin/data/all/hummingbird-0063.jpg";
        w = 150;
        h = 150;
        stride = 20;
        
        occludeButtonRect = ofRectangle(10, 2, 256, 20);
        loadButtonRect = ofRectangle(280, 2, 100, 20);
        
        img.load(imagePath);
        analyzeImage();
    }
    
    void analyzeImage() {
        img.load("/Users/gene/Code/of_v0.9.0_osx_release/addons/ofxTSNE/example-images/bin/data/all/hummingbird-0063.jpg");
        fbo.allocate(img.getWidth(), img.getHeight(), GL_RGB);
        results = ccv.classify(img);
        classification = results[0];
        ofLog() << "unoccluded classification: " << classification.imageNetName << endl;
    }
    
    void occlude(int x, int y, int w, int h) {
        int iw = fbo.getWidth();
        int ih = fbo.getHeight();
        
        fbo.begin();
        ofPushStyle();
        ofClear(0, 255);
        img.draw(0, 0);
        ofSetColor(0);
        
        if (windowOccluded) {
            ofDrawRectangle(x, y, w, h);
        }
        else {
            ofDrawRectangle(0, 0, x, ih);
            ofDrawRectangle(x+w, 0, iw-(x+w), ih);
            ofDrawRectangle(0, 0, iw, y);
            ofDrawRectangle(0, y+h, iw, ih-(y+h));
        }
        ofPopStyle();
        fbo.end();
        
        fbo.readToPixels(pixels);
        img2.setFromPixels(pixels);
    }
    
    void update() {
        if (!ccv.isLoaded()) return;
        
        int iw = img.getWidth();
        int ih = img.getHeight();
        int x = mx;
        int y = my-20;
        
        occlude(x, y, w, h);
        results = ccv.classify(img2, 64);
    }
    
    void draw() {
        ofPushMatrix();
        ofTranslate(box.getX(), box.getY());
        
        if (!ccv.isLoaded()) {
            ofDrawBitmapString("Can't find network file! Check to make sure it's in your data folder.", 20, 20);
            return;
        }
        
        // buttons
        ofPushStyle();
        ofSetColor(0);
        ofDrawBitmapString("Occlude inner window", occludeButtonRect.getX() + 4, 17);
        ofDrawBitmapString("Load image", loadButtonRect.getX() + 4, 17);
        ofNoFill();
        ofSetColor(windowOccluded ? ofColor::green : ofColor::red);
        ofDrawRectangle(occludeButtonRect);
        ofSetColor(ofColor::black);
        ofDrawRectangle(loadButtonRect);
        ofPopStyle();
        
        // draw image
        ofSetColor(ofColor::white);
        img2.draw(0, 25);
        
        // draw results
        ofTranslate(img.getWidth() + 5, 25);
        for(int i = 0; i < results.size(); i++) {
            ofSetColor(ofColor::white);
            ofFill();
            ofDrawRectangle(0, 0, 100, 10);
            ofSetColor(results[i].imageNetId == classification.imageNetId ? ofColor::red : ofColor::black);
            ofDrawRectangle(1, 1, (100-2) * results[i].confidence, 10-2);
            ofSetColor(ofColor::white);
            ofDrawBitmapStringHighlight(results[i].imageNetName, 105, 10);
            ofTranslate(0, 15);
        }
        
        ofPopMatrix();
    }
    
    bool mouseMoved(int x_, int y_) {
        mx = ofGetMouseX() - box.getX();
        my = ofGetMouseY() - box.getY();
        return false;
    }
    
    bool mouseDragged(int x_, int y_) {
        return mouseOver;
    }
    
    bool mousePressed(int x_, int y_) {
        if (occludeButtonRect.inside(mx, my)) {
            windowOccluded = !windowOccluded;
        }
        else if (loadButtonRect.inside(mx, my)) {
            ofFileDialogResult result = ofSystemLoadDialog("Select an image");
            if (result.bSuccess) {
                img.load(result.filePath);
                analyzeImage();
                return mouseOver;
            }
   
        }
        return mouseOver;
    }
    
    bool mouseReleased(int x, int y, int button) {
        return mouseOver;
    }
    

    ofxCcv ccv;
    vector<ofxCcv::Classification> results;
    ofxCcv::Classification classification;
    
    ofImage img, img2, map;
    ofFbo fbo;
    ofPixels pixels;
    ofRectangle occludeButtonRect, loadButtonRect;
    
    int w, h, stride;
    bool windowOccluded = true;
    float mx, my;

};