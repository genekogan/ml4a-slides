#include "ofApp.h"




//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFullscreen(true);
//    ofSetWindowShape(1280, 640);
    
    // load fonts
    h1.load("/Users/gene/Code/of_v0.9.0_osx_release/apps/myApps/convnet-canvas/bin/data/fonts/AndaleMono.ttf", 72);
    h1a.load("/Users/gene/Code/of_v0.9.3_osx_release/examples/utils/systemSpeakExample/bin/data/verdana.ttf", 36);
    h2.load("/Users/gene/Code/of_v0.9.0_osx_release/addons/ofxLibwebsockets/example_server_binary_video/bin/data/myriad.ttf", 32);
    h3.load("/Users/gene/Code/of_v0.9.0_osx_release/apps/myApps/convnet-canvas/bin/data/fonts/AndaleMono.ttf", 22);
    h4.load("/Users/gene/Code/of_v0.9.0_osx_release/apps/myApps/convnet-canvas/bin/data/fonts/AndaleMono.ttf", 15);
    h5.load("/Users/gene/Code/of_v0.9.0_osx_release/apps/myApps/convnet-canvas/bin/data/fonts/AndaleMono.ttf", 12);
    
    slideshow.setBackgroundFunction(this, &ofApp::drawBgWhite);
    //slideshow.loadFromExported();
    
    //NetzpolitischerAbend();

//    s = slideshow.addSlide("Reverse Image Search");
//    ReverseImageSearchDemo *ris = new ReverseImageSearchDemo(s, "ris", 0, 0, 1, 1);
//    s->addAction(ris);
//    s->start();
    
    
//    GoogleMLArtExperiments();
  
    TechCode();
//    Kikk();
//    WorkshopRetune();
    
    
    // Trolley problem
    //
    
    slideshow.setContentRectangle(20, 56, ofGetWidth()-40, ofGetHeight()-56);
    slideshow.printStats();
    
    //slideshow.exportAssets();
    
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
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
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








