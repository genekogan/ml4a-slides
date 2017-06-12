#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    isPaused = false;

    if (USE_SECOND_SCREEN) {
        ofSetWindowPosition(ofGetScreenWidth(), 0);
    }
    if (HIDE_CURSOR) {
        ofHideCursor();
        CGDisplayHideCursor(NULL);
    }
    //if (OSC_REMOTE_ENABLED) {
    //  osc.setup(8000);
    //}
    
    // load fonts
    h1.load("AndaleMono.ttf", 72);
    h2.load("myriad.ttf", 32);
    h3.load("AndaleMono.ttf", 22);
    h4.load("AndaleMono.ttf", 18);
    h5.load("AndaleMono.ttf", 12);
    h6.load("verdana.ttf", 36);
    
    //ofSetWindowShape(1600, 900);
    ofSetFullscreen(true);
    
    // make sure USB Camera detected
    checkIfCorrectCam();

    // Darknet
    string cfgfile = ofToDataPath( "cfg/yolo9000.cfg" );
    string weightfile = "/Users/gene/Teaching/ML4A/ml4a-ofx/data/darknet/yolo9000.weights";
    string namesfile = ofToDataPath( "cfg/9k.names" );
//    darknet.init( cfgfile, weightfile, namesfile );
    
    // Ccv
//    ccv.setup("/Users/gene/bin/misc/ccv/image-net-2012.sqlite3");
    
    // background functions
    slideshow.setBackgroundFunction(this, &ofApp::drawBgWhite);
//    slideshow.setBackgroundFunction(this, &ofApp::drawBgBlack);
    
    // before loading slides
//    slideshow.loadFromExported();
    
    // CONTENT
    CIIDOpenTalk();
    
    // after loading slides
    slideshow.setContentRectangle(20, 56, ofGetWidth()-40, ofGetHeight()-56);
    slideshow.printStats();
    slideshow.wrapNotes();
    slideshow.preloadAssets();
  
    // export external for distribution
//    slideshow.exportAssets();
//    slideshow.exportScreenshots();
    
    
    // Machine learning for (non-computer) scientists
    //  This is an overview of and introduction to machine learning for people whose primary __ is in life sciences, mathematics, . It focuses on the technical, analytical, and mathematical properties of machine learning algorithms, as well as an overview of nascent and promising applications , and an overview of existing tools to work with them.
}

//--------------------------------------------------------------
void ofApp::drawBgWhite(ofxPPSlide * & slide) {
    ofBackground(255);
    //ofSetHexColor(0x1abc9c);
    ofSetHexColor(0x9c1abc);
    ofFill();
    ofDrawRectangle(0, 0, ofGetWidth(), 56);
    ofSetColor(255);
    h2.drawString(slide->getName(), 10, 42);
}

//--------------------------------------------------------------
void ofApp::drawBgBlack(ofxPPSlide * & slide) {
    ofBackground(32);
  //  ofSetHexColor(0x1abc9c);
    ofSetHexColor(0x9c1abc);
    ofFill();
    ofDrawRectangle(0, 0, ofGetWidth(), 56);
    ofSetColor(255);
    h2.drawString(slide->getName(), 10, 42);
}

//--------------------------------------------------------------
void ofApp::update(){
//    if (OSC_REMOTE_ENABLED) {
//        checkRemoteControl();
//    }
    if (isPaused)   return;
    slideshow.update();
}

//-----------------------------------------------   ---------------
void ofApp::checkRemoteControl(){
//    while (osc.hasWaitingMessages()) {
//        ofxOscMessage msg;
//        osc.getNextMessage(msg);
//        string address = msg.getAddress();
//        cout << address << endl;
//        float value = msg.getArgAsFloat(0);
//        if (address == "/1/push1" && value == 0.0) {
//            slideshow.prevSegment();
//        }
//        if (address == "/1/push12" && value == 0.0) {
//            slideshow.nextSegment();
//        }
//    }
}

//--------------------------------------------------------------
void ofApp::checkIfCorrectCam() {
    bool foundUsbCam = false;
    ofVideoGrabber grab;
    vector<ofVideoDevice> devices = grab.listDevices();
    for (int i=0; i<devices.size(); i++) {
        if (devices[i].deviceName == "USB Camera") {
            foundUsbCam = true;
            ofLog(OF_LOG_NOTICE, "Camera detected!");
        }
    }
    if (!foundUsbCam) {
        ofLog(OF_LOG_NOTICE, "No usb cam found");
    }
    
    grab.initGrabber(320, 240);
    grab.close();
}

//--------------------------------------------------------------
void ofApp::draw(){
    if (isPaused)   return;
    slideshow.draw();
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    slideshow.setContentRectangle(20, 56, ofGetWidth()-40, ofGetHeight()-56);
    slideshow.windowResized();
}

//--------------------------------------------------------------
void ofApp::setupGui(){
    slideshow.setupGui();
}

//--------------------------------------------------------------
void ofApp::drawGui(ofEventArgs & args){
    slideshow.drawGui();
}

//--------------------------------------------------------------
void ofApp::keyPressedGui(ofKeyEventArgs & args){
    slideshow.keyPressed(args.key);
}

//--------------------------------------------------------------
void ofApp::mouseScrolled(ofMouseEventArgs & args){
    slideshow.mouseScrolled(args.scrollX, args.scrollY);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key=='?') {
        if (isPaused) {
            ofSetFrameRate(60);
            isPaused = false;
        } else {
            ofSetFrameRate(1);
            isPaused = true;
        }
    }
    slideshow.keyPressed(key);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    slideshow.mouseMoved(x, y);
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    slideshow.mouseDragged(x, y);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    slideshow.mousePressed(x, y);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    slideshow.mouseReleased(x, y);
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
}


