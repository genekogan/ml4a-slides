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
    
    s = slideshow.addSlide("Super-resolution => Deblurring");
    s->addImage("deblur", "/Users/gene/bin/misc/super-resolution-ground-truth.jpg", 0.0, 0.2, 1.0, 0.75);
    s->addText(h3, ofColor(0), "https://arxiv.org/abs/1702.00783", 0.1, 0.01, 0.8);

    CreativeAILondon();
    
    
 Kikk();
 Betahaus();
 OpenDotTalk();
 HowDeepIsYourDream();
 ArtCenterNabi();
 RecurseCenter();
 ITPxStory();
 CreativeAILondon();
 MattTalk();

    
    
    // CONTENT
    
    
    
    
    /*
    s = slideshow.addSlide("Plug & Play Generative Networks");
    s->addImage("PPGN", "/Users/gene/bin/misc/ppgn_image_captioning.jpg", 0, 0.05, 1, 0.97);
    s->addText(h4, ofColor(0), "http://www.evolvingai.org/ppgn", 0.1, 0.0, 0.8);

    s = slideshow.addSlide("Objectifier (Bjørn Karmann, CIID)");
    s->addImage("objectifier", "/Users/gene/bin/misc/prototype_objectifier.jpg", 0, 0, 0.6, 0.55);
    s->addMovie("objectifier", "/Users/gene/bin/misc/prototype_objectifier.mp4", true, 0.32, 0.4, 0.7, 0.6);
    s->addText(h4, ofColor(0), "bjoernkarmann.dk/objectifier", 0.65, 0.0, 0.4);
    
    s = slideshow.addSlide("Fukushima's Neocognitron (1982) and Hubel/Wiesel");
    s->addImage("hubel wiesel", "/Users/gene/bin/misc/neocognitron.png", 0, 0.1, 0.5, 0.5);
    s->addImage("hubel wiesel", "/Users/gene/bin/misc/hubel1.jpg", 0.5, 0.05, 0.5, 1);
    s->addImage("hubel wiesel", "/Users/gene/bin/misc/hubel2.jpg", 0, 0.6, 0.5, 0.4);
    s->addText(h4, ofColor(0), "Hubel, Wiesel 1962: Receptive fields, binocular interaction and functional architecture in the cat's visual cortex", 0.51, 0.0, 0.4);

    s = slideshow.addSlide("Tele-captioning skype");
    s->addImage("skype1", "/Users/gene/bin/misc/densecap-skype_2.png", 0.32, 0.46, 0.7, 0.65);
    s->addImage("skype1", "/Users/gene/bin/misc/densecap-skype_1.png", 0, 0.0, 0.7, 0.65);


    // nsfw
    // - obscene machine
//
//
     */
    
    
    //WorkshopRecurseCenterDeepLearning();
    
    //RIS + t-SNe
    // audio t-SNE
    
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
