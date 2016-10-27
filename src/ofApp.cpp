#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    
    if (USE_SECOND_SCREEN) {
        ofSetWindowPosition(ofGetScreenWidth(), 0);
    }
    ofSetFullscreen(true);
    
    // load fonts
    h1.load("/Users/gene/Code/of_v0.9.0_osx_release/apps/myApps/convnet-canvas/bin/data/fonts/AndaleMono.ttf", 72);
    h2.load("/Users/gene/Code/of_v0.9.0_osx_release/addons/ofxLibwebsockets/example_server_binary_video/bin/data/myriad.ttf", 32);
    h3.load("/Users/gene/Code/of_v0.9.0_osx_release/apps/myApps/convnet-canvas/bin/data/fonts/AndaleMono.ttf", 22);
    h4.load("/Users/gene/Code/of_v0.9.0_osx_release/apps/myApps/convnet-canvas/bin/data/fonts/AndaleMono.ttf", 15);
    h5.load("/Users/gene/Code/of_v0.9.0_osx_release/apps/myApps/convnet-canvas/bin/data/fonts/AndaleMono.ttf", 12);
    h6.load("/Users/gene/Code/of_v0.9.3_osx_release/examples/utils/systemSpeakExample/bin/data/verdana.ttf", 36);
    
    slideshow.setBackgroundFunction(this, &ofApp::drawBgWhite);
    
    //slideshow.loadFromExported();
    
    Kikk();
    //CriticalIssues();
    
    
    slideshow.setContentRectangle(20, 56, ofGetWidth()-40, ofGetHeight()-56);
    slideshow.printStats();
    slideshow.wrapNotes();
    
    //slideshow.exportAssets();
    //slideshow.exportScreenshots();
    
    //setup osc remote control
    if (OSC_REMOTE_ENABLED) {
        osc.setup(8000);
    }
}

//--------------------------------------------------------------
void ofApp::drawBgWhite(ofxPPSlide * & slide) {
    ofBackground(255);
    ofSetHexColor(0x1abc9c);
    ofFill();
    ofDrawRectangle(0, 0, ofGetWidth(), 56);
    ofSetColor(255);
    h2.drawString(slide->getName(), 10, 42);
}

//--------------------------------------------------------------
void ofApp::drawBgBlack(ofxPPSlide * & slide) {
    ofBackground(32);
    ofSetHexColor(0x1abc9c);
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
    cout << "DRAG BUTTON " << button << endl;
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








