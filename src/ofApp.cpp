#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    
    if (USE_SECOND_SCREEN) {
        ofSetWindowPosition(ofGetScreenWidth(), 0);
    }
    //ofSetWindowShape(1600, 900);
    ofHideCursor();
    CGDisplayHideCursor(NULL);
    
    ofSetFullscreen(true);
    
    // make sure USB Camera detected
    bool foundUsbCam = false;
    ofVideoGrabber grab;
    vector<ofVideoDevice> devices = grab.listDevices();
    for (int i=0; i<devices.size(); i++) {
        if (devices[i].deviceName == "USB Camera") {
            foundUsbCam = true;
        }
    }
    if (!foundUsbCam) {
        ofLog(OF_LOG_NOTICE, "No usb cam found");
        //ofExit();
    }
    
    // load fonts
    h1.load("AndaleMono.ttf", 72);
    h2.load("myriad.ttf", 32);
    h3.load("AndaleMono.ttf", 22);
    //h4.load("AndaleMono.ttf", 15);
    h4.load("AndaleMono.ttf", 18);
    h5.load("AndaleMono.ttf", 12);
    h6.load("verdana.ttf", 36);
    
    // background functions
    slideshow.setBackgroundFunction(this, &ofApp::drawBgWhite);

    // before loading slides
    //slideshow.loadFromExported();
    
    
    // CONTENT
    //OpenDotTalk();
    // mappings between censors and variables
    //ArtCenterNabi();
    WorkshopJogja();
    
    
    
    // after loading slides
    slideshow.setContentRectangle(20, 56, ofGetWidth()-40, ofGetHeight()-56);
    slideshow.printStats();
    slideshow.wrapNotes();
    slideshow.preloadAssets();
    //slideshow.exportAssets();
    //slideshow.exportScreenshots();

    if (OSC_REMOTE_ENABLED) {
        osc.setup(8000);
    }
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
    if (OSC_REMOTE_ENABLED) {
        checkRemoteControl();
    }
    slideshow.update();
}

//--------------------------------------------------------------
void ofApp::checkRemoteControl(){
    while (osc.hasWaitingMessages()) {
        ofxOscMessage msg;
        osc.getNextMessage(msg);
        string address = msg.getAddress();
        cout << address << endl;
        float value = msg.getArgAsFloat(0);
        if (address == "/1/push1" && value == 0.0) {
            slideshow.prevSegment();
        }
        if (address == "/1/push12" && value == 0.0) {
            slideshow.nextSegment();
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
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
