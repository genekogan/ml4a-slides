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
//    h1.load("AndaleMono.ttf",  72);
//    h2.load("myriad.ttf", 32);
//    h3.load("AndaleMono.ttf", 22);
//    h4.load("AndaleMono.ttf", 18);
//    h5.load("AndaleMono.ttf", 12);
//    h6.load("verdana.ttf", 36);
    h1.load("verdana.ttf", 72);
    h2.load("verdana.ttf", 32);
    h3.load("verdana.ttf", 22);
    h4.load("verdana.ttf", 18);
    h5.load("verdana.ttf", 12);
    h6.load("verdana.ttf", 36);

    
//    ofSetWindowShape(1920, 1080);
    ofSetFullscreen(true);
    
    // make sure USB Camera detected
    checkIfCorrectCam();

    // Darknet
    string cfgfile = ofToDataPath( "cfg/yolo9000.cfg" );
    string weightfile = "/Users/gene/Teaching/ML4A/ml4a-ofx/data/darknet/yolo9000.weights";
    string namesfile = ofToDataPath( "cfg/9k.names" );
//    darknet.init( cfgfile, weightfile, namesfile );
    string cfgfile2 = "/Users/gene/Code/of_v0.9.6_osx_release/addons/ofxDarknet/example-deepdream/bin/data/cfg/vgg-conv.cfg";
    string weightfile2 = "/Users/gene/Teaching/ML4A/ml4a-ofx/data/darknet/vgg-conv.weights";
    //darknet2.init( cfgfile2, weightfile2 );

    
    // Ccv
    //ccv.setup("/Users/gene/bin/misc/ccv/image-net-2012.sqlite3");
    
    // background functions
    slideshow.setBackgroundFunction(this, &ofApp::drawBgWhite);
//    slideshow.setBackgroundFunction(this, &ofApp::drawBgBlack);

    // before loading slides
//    slideshow.loadFromExported();
    
    // CONTENT
//    WorkshopMLLiteracyPix2Pix();
//    WorkshopPhotographersGallery();
//    WorkshopKikk2();
    //WorkshopMapping();
    
    //ShanghaiTechWorkshop();
    //WorkshopCIIDDeepLearning2();
    
    //s = slideshow.addSlide("Image-to-Image");
    // blur, enhance, saturate

    
    // blur, enhance, saturate

    
    SonarPlusD();
    //CIIDOpenLecture2018();
    
    
//
//
//    s = slideshow.addSlide("Agenda 1/2");
//    s->addText(h3, ofColor(0), "Day 1: Introduction, setup", 0.1, 0.1, 0.8);
//    s->addText(h3, ofColor(0), " - Machine learning + creativity", 0.1, 0.16, 0.8);
//    s->addText(h3, ofColor(0), " - How neural networks work", 0.1, 0.22, 0.8);
//    s->addText(h3, ofColor(0), " - Basic online demos", 0.1, 0.28, 0.8);
//    s->addText(h3, ofColor(0), " - Getting setup", 0.1, 0.34, 0.8);
//    s->addText(h3, ofColor(0), " - Fun surprise?", 0.1, 0.4, 0.8);
//    s->addText(h3, ofColor(0), "Day 2: AI + Interaction design", 0.1, 0.55, 0.8);
//    s->addText(h3, ofColor(0), " - Tensorflow.js in the browser ", 0.1, 0.61, 0.8);
//    s->addText(h3, ofColor(0), " - Camera-reactive design and games", 0.1, 0.67, 0.8);
//    s->addText(h3, ofColor(0), " - Wekinator", 0.1, 0.73, 0.8);
//
//    s = slideshow.addSlide("Agenda 2/2");
//    s->addText(h3, ofColor(0), "Day 3-4-5: Deep learning", 0.1, 0.1, 0.8);
//    s->addText(h3, ofColor(0), " - Visualization of neural networks", 0.1, 0.16, 0.8);
//    s->addText(h3, ofColor(0), " - Deepdream", 0.1, 0.22, 0.8);
//    s->addText(h3, ofColor(0), " - Neural style transfer & texture synthesis", 0.1, 0.28, 0.8);
//    s->addText(h3, ofColor(0), " - Introduction to generative models", 0.1, 0.34, 0.8);
//    s->addText(h3, ofColor(0), " - pix2pix / CycleGAN / DCGAN", 0.1, 0.4, 0.8);
//    s->addText(h3, ofColor(0), "Possible topics TBD (depending on infrastructure)", 0.1, 0.55, 0.8);
//    s->addText(h3, ofColor(0), " - t-SNE", 0.1, 0.61, 0.8);
//    s->addText(h3, ofColor(0), " - ml4a-ofx ", 0.1, 0.67, 0.8);
//    s->addText(h3, ofColor(0), " - char-rnn", 0.1, 0.73, 0.8);
//
//    WorkshopCIIDCostaRicaAboutMe();
//    WorkshopCIIDCostaRicaProjects();
//    WorkshopCIIDCostaRicaNeuralNets();
    
   // WorkshopCMULapnorm();
    
//    s = slideshow.addSlide("Assignment");
//    s->addText(h3, ofColor(0), "Download and install:", 0.1, 0.1, 0.8);
//    s->addText(h3, ofColor(0), " - https://github.com/ml4a/ml4a-demos/releases", 0.1, 0.16, 0.8);
//    s->addText(h3, ofColor(0), "Setting up environment (options)", 0.1, 0.22, 0.8);
//    s->addText(h3, ofColor(0), " - 1) Install yourself! (hard)", 0.1, 0.28, 0.8);
//    s->addText(h3, ofColor(0), " - 2) Colab (free & easy, but limited, need Google account)", 0.1, 0.34, 0.8);
//    s->addText(h3, ofColor(0), " - 3) Paperspace ($, needs internet, most functional) + cmder", 0.1, 0.4, 0.8);
//    s->addText(h3, ofColor(0), " - 4) Other cloud, DIY (Google, FloydHub, Azure, EC2)", 0.1, 0.46, 0.8);
//    s->addText(h3, ofColor(0), " - 5) Just watching is an option", 0.1, 0.52, 0.8);
    
    
    
    // after loading slides
    slideshow.setContentRectangle(20, 56, ofGetWidth()-40, ofGetHeight()-56);
    slideshow.printStats();
    slideshow.wrapNotes();
    //slideshow.preloadAssets();
  
    // export external for distribution`
   // slideshow.exportAssets();
//    slideshow.exportScreenshots();
    

    // ml4a itp new slides
    //  http://www.iangoodfellow.com/slides/2017-12-08-creativity.pdf (and adversarial attacks)Screen Shot 2018-06-02 at 8.26.42 PM.png
    // Screen Shot 2018-06-02 at 8.26.10 PM.png
    // Screen Shot 2018-06-02 at 8.26.42 PM.png
    
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
void ofApp::drawBgNone(ofxPPSlide * & slide) {
    ofBackground(32);
    //  ofSetHexColor(0x1abc9c);
//    ofSetHexColor(0x9c1abc);
//    ofFill();
//    ofDrawRectangle(0, 0, ofGetWidth(), 56);
//    ofSetColor(255);
//    h2.drawString(slide->getName(), 10, 42);
}

//--------------------------------------------------------------
void ofApp::update(){
//    if (OSC_REMOTE_ENABLED) {
//        checkRemoteControl();
//    }
    if (isPaused)   return;
    slideshow.update();
}

//--------------------------------------------------------------
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
//    slideshow.setContentRectangle(20, 56, ofGetWidth()-40, ofGetHeight()-56);
//    slideshow.windowResized();
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
//    slideshow.mouseScrolled(args.scrollX, args.scrollY);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
//    if (key=='?') {
//        if (isPaused) {
//            ofSetFrameRate(60);
//            isPaused = false;
//        } else {
//            ofSetFrameRate(1);
//            isPaused = true;
//        }
//    }
//    slideshow.keyPressed(key);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
//    slideshow.mouseMoved(x, y);
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
//    slideshow.mouseDragged(x, y);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
//    slideshow.mousePressed(x, y);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
//    slideshow.mouseReleased(x, y);
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

//--------------------------------------------------------------
void ofApp::SonarPlusD() {
    
    s = slideshow.addSlide("The Neural Aesthetic");
    s->addText(h2, ofColor(60), "Sonar+D, 13 June 2018", 0.0, 0.0, 0.8);
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
    s->start();

//    s = slideshow.addSlide("Neural networks");
//    s->addImage("vae", "/Users/gene/bin/autoencoders/autoencoder_diagram2.png", 0.1, 0.1, 0.8, 0.8);
//    s->addText(h4, ofColor(100), "https://github.com/yzwxx/vae-celebA", 0.0, 0.95, 0.8);
    
    // kunihoko fukushima
    s = slideshow.addSlide("Fukushima's Neocognitron (1980)");
    s->addImage("neocognitron", "/Users/gene/bin/misc/neocognitron1.png", 0, 0.1, 1.0, 0.5);
    s->addImage("neocognitron", "/Users/gene/bin/misc/neocognitron3.png", 0, 0.6, 1.0, 0.4);
    s->addText(h4, ofColor(0), "Neocognitron: A Self-organizing Neural Network Model for a Mechanism of Pattern Recognition Unaffected by Shift in Position", 0.01, 0.0, 0.75);

    s = slideshow.addSlide("Convolutional networks");
    s->addImage("lenet", "/Users/gene/bin/misc/stock/lenet.png", 0, 0, 1, 0.4);
    s->addImage("alexnet", "/Users/gene/bin/misc/stock/alexnet2.png", 0, 0.5, 1, 0.4);
    s->addText(h4, ofColor(0), "Lenet (LeCun et al, 1998) [http://yann.lecun.com/exdb/lenet/]", 0.05, 0.4, 0.9);
    s->addText(h4, ofColor(0), "AlexNet 2012 [via https://jeremykarnowski.wordpress.com/2015/07/15/alexnet-visualization/]", 0.05, 0.92, 0.9);

    s = slideshow.addSlide("");
    s->addImage("mnist", "/Users/gene/bin/misc/stock/mnist_random_sample.png", -0.15, -0.15, 1.3, 1.3);
    
//    s = slideshow.addSlide("Classifying handwritten digits");
//    s->addImage("mnist", "/Users/gene/bin/misc/mnist-net.png", 0.2, 0.2, 0.6, 0.6);
    
    s = slideshow.addSlide("Classifying handwritten digits");
    s->addImage("mnist1", "/Users/gene/bin/misc/stock/mnist-forward-pass-1.png", 0.1, 0.1, 0.8, 0.8);
    s->addBreakpoint();
    s->addImage("mnist3", "/Users/gene/bin/misc/stock/mnist-forward-pass-3.png", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Training our neural network");
    s->addMovie("mnist", "/Users/gene/bin/misc/stock/mnist_weights_demo.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("What neural networks see");
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l1_nofilter.png", 0.0, 0.1, 1, 0.8);
    s->addText(h4, ofColor(100), "What neural nets look for\nVisualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]", 0.02, 0.0, 1.0);
    
    s = slideshow.addSlide("What neural networks see");
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l2.png", 0.01, 0.15, 0.45, 0.7);
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l3.png", 0.47, 0.15, 0.52, 0.7);
    s->addText(h4, ofColor(100), "Visualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]", 0.02, 0.0, 1.0);
    
    //////// Neural synth
    
    s = slideshow.addSlide("Channel synthesis");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/harvest.mp4", false, 0.15, 0.15, 0.7, 0.7)->setLoop(false);
    
    s = slideshow.addSlide("Channel synthesis");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/E1-115_n40_o05_r1.33.mp4", false, -0.005, 0.15, 0.5, 0.7)->setLoop(false);
    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/H5-89_n50_o09_r1.33.mp4", true, 0.3333, 0.15, 0.32, 0.7)->setLoop(false);
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/E6-63_n50_o05_r1.33.mp4", false, 0.505, 0.15, 0.5, 0.7)->setLoop(false);
    
    s = slideshow.addSlide("InceptionV3 conv2d");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-1_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-7_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-15_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-28_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-52_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A2-12_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A2-25_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A2-27_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
//    s = slideshow.addSlide("InceptionV3 mixed3a");
//    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-8_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
//    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-9_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
//    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-20_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
//    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-31_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
//    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-0_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
//    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-26_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
//    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-36_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
//    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-44_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed3b");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/C1-95_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/C3-0_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/C5-9_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/C5-53_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/C6-5_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/C6-30_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/C6-38_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/C6-54_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed4a");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/D1-67_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/D1-86_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/D1-96_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/D1-133_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/D1-144_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/D1-152_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/D6-9_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/D6-52_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
//    s = slideshow.addSlide("InceptionV3 mixed4b");
//    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E1-42_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
//    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E2-91_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
//    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E3-15_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
//    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E3-17_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
//    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-0_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
//    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-16_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
//    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-17_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
//    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-33_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed4c");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F2-32_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F2-41_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F2-64_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F3-187_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F5-7_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F6-17_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F6-29_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F6-54_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
//    s = slideshow.addSlide("InceptionV3 mixed4d");
//    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G1-9_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
//    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G1-15_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
//    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G2-36_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
//    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G2-54_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
//    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G2-86_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
//    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G3-145_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
//    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G6-2_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
//    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G6-20_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed4e");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H1-54_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H1-116_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H1-158_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H3-7_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H3-77_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H3-303_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H4-13_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H6-123_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("Neural synthesis / Deepdream");
    s->addImage("ns", "/Users/gene/bin/lapnorm/initial_experiments/frame0010 (2).png", 0, 0, 1, 1);
    s = slideshow.addSlide("Neural synthesis / Deepdream");
    s->addImage("ns", "/Users/gene/bin/lapnorm/initial_experiments/eureka.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients / Deepdream");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F6-34+G2-139_n11_o08_r1.33_cr4_b0.60.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Neural synthesis / Deepdream");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G3-283+F3-26+H1-54_n11_o08_r1.33_cr0_b0.75.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Neural synthesis / Deepdream");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G3-45+G1-36+H6-23_n15_o08_r1.33_cr5_b0.21.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Neural synthesis / Deepdream");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/nips/NIPS_GeneKogan_new.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Feedback and gradient interpolation");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/fullfades/hframes2.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Feedback and gradient interpolation");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/fullfades/K18-178+L4-61+K19-55+K07-45+K18-35_m3_b4_o5_i36_c0_s10_norm1.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Moving gradients around");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/testframes2_.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Moving gradients around");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/testframes9b0_.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Loops");
    s->addMovie("loop", "/Users/gene/bin/lapnorm/_bin/loops/D6-52+D3-27_n22_o03_r1.31_0.80,2.20,1.30.mp4", true, 0.0, 0.0, 0.5, 1);
    s->addMovie("loop", "/Users/gene/bin/lapnorm/_bin/loops/F1-49+F1-31_n22_o03_r1.31_0.80,2.20,1.30.mp4", true, 0.505, 0.0, 0.5, 1);
    
    s = slideshow.addSlide("Constrain to an image");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/class38_face3.mp4", false, 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Gradient masks");
    // s->addImage("mask", "/Users/gene/bin/lapnorm/selfie/download (4).jpeg", 0, 0, 0.248, 0.5);
    // s->addImage("mask", "/Users/gene/bin/lapnorm/selfie/myselfie00b.png", 0.25, 0, 0.248, 0.5);
    // s->addImage("mask", "/Users/gene/bin/lapnorm/selfie/myselfie2_00.png", 0.5, 0, 0.248, 0.5);
    // s->addImage("mask", "/Users/gene/bin/lapnorm/selfie/myselfie2_18.png", 0.75, 0, 0.248, 0.5);
    // s->addImage("mask", "/Users/gene/bin/lapnorm/selfie/myselfie2_28.png", 0, 0.505, 0.248, 0.5);
    // s->addImage("mask", "/Users/gene/bin/lapnorm/selfie/myselfie03.png", 0.25, 0.505, 0.248, 0.5);
    // s->addImage("mask", "/Users/gene/bin/lapnorm/selfie/myselfie05.png", 0.5, 0.505, 0.248, 0.5);
    // s->addImage("mask", "/Users/gene/bin/lapnorm/selfie/myselfie07b.png", 0.75, 0.505, 0.248, 0.5);
    s->addImage("mask", "/Users/gene/bin/lapnorm/selfie/download (4).jpeg", -0.005, 0, 0.333, 0.5);
    s->addImage("mask", "/Users/gene/bin/lapnorm/selfie/myselfie00b.png", 0.333, 0, 0.333, 0.5);
    s->addImage("mask", "/Users/gene/bin/lapnorm/selfie/myselfie2_18.png", 0.667, 0, 0.333, 0.5);
    s->addImage("mask", "/Users/gene/bin/lapnorm/selfie/myselfie03.png", -0.005, 0.501, 0.333, 0.5);
    s->addImage("mask", "/Users/gene/bin/lapnorm/selfie/myselfie05.png", 0.3335, 0.501, 0.333, 0.5);
    s->addImage("mask", "/Users/gene/bin/lapnorm/selfie/myselfie07b.png", 0.667, 0.501, 0.333, 0.5);
    
    
    //////// Texture synthesis
    
    s = slideshow.addSlide("Texture synthesis");
    s->addImage("ns", "/Users/gene/bin/tex-synth/tex/googlemaps.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Texture synthesis loops");
    s->addImage("ns", "/Users/gene/bin/style-transfer/_inputs/googlemaps_hd_small.png", 0, 0, 0.3, 0.4);
    s->addMovie("ns", "/Users/gene/bin/tex-synth/loops/googlemaps.mp4", true, 0.31, 0.2, 0.7, 0.8);
    
    s = slideshow.addSlide("Great Wave off Kanagawa (Hokusai)");
    s->addImage("ns", "/Users/gene/bin/style-transfer/_inputs/hokusai.jpg", 0, 0, 0.3, 0.4);
    s->addMovie("ns", "/Users/gene/bin/tex-synth/loops/hokusai_3.mp4", true, 0.31, 0.2, 0.7, 0.8);
    
    s = slideshow.addSlide("Composition 8 (Kandinsky)");
    s->addImage("ns", "/Users/gene/bin/style-transfer/_inputs/kandinsky.jpg", 0, 0, 0.3, 0.4);
    s->addMovie("ns", "/Users/gene/bin/tex-synth/loops/kandinsky_finished.mp4", true, 0.31, 0.2, 0.7, 0.8);
    
    s = slideshow.addSlide("Collage: Salvador Dali");
    s->addImage("ns", "/Users/gene/bin/tex-synth/painter-collages/multi_dali_1.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Collage: Georgia O'Keefe");
    s->addImage("ns", "/Users/gene/bin/tex-synth/painter-collages/multi_okeefe_1.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Collage: Jackson Pollock");
    s->addImage("ns", "/Users/gene/bin/tex-synth/painter-collages/multi_pollock_0.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Collage: Frida Kahlo");
    s->addImage("ns", "/Users/gene/bin/tex-synth/painter-collages/multi_kahlo_1.png", 0, 0, 1, 1);
    
    //////// Generative models
    
    s = slideshow.addSlide("Generative models");
    s->addImage("vae", "/Users/gene/bin/autoencoders/autoencoder_diagram2.png", 0.1, 0.1, 0.8, 0.8);
    s->addText(h4, ofColor(100), "https://github.com/yzwxx/vae-celebA", 0.0, 0.95, 0.8);
    
    s = slideshow.addSlide("Generative adversarial networks");
    s->addImage("ga", "/Users/gene/bin/misc/stock/GANs2.png", 0.1, 0.1, 0.8, 0.8);
    s->addText(h4, ofColor(0), "https://deeplearning4j.org/generative-adversarial-network", 0.1, 0.0, 0.8);
    
    ////// A Book from the Sky
    
    s = slideshow.addSlide("Deep convolutional generative adversarial network (DCGAN)");
    s->addImage("Mona Lisa", "/Users/gene/bin/dcgan/public/dcgan-glasses.png", 0.0, 0.06, 1.0, 0.94);
    s->addText(h4, ofColor(0), "Radford, Metz, Chintala 2015 (https://arxiv.org/abs/1511.06434)", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("HIT-OR3C dataset (Harbin University)");
    s->addScrollableImage("Actuals", "/Users/gene/bin/dcgan/summary/actual.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Fake (R) vs. Real (L)");
    s->addImage("Mona Lisa", "/Users/gene/bin/dcgan/summary/fakereal.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("A Book from the Sky");
    s->addMovie("zloops", "/Users/gene/bin/dcgan/summary/zloops.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Character interpolations");
    s->addMovie("interplations", "/Users/gene/bin/dcgan/public/interpolations_3.mp4", true, 0.2, 0.15, 0.6, 0.6);
    
    s = slideshow.addSlide("Radical interpolations");
    s->addText(h3, ofColor(0), "interpolations across characters sharing the same radical often appear to preserve it", 0.1, 0.0, 0.8);
    s->addMovie("radical interpolations", "/Users/gene/bin/dcgan/summary/radinterpolation.mp4", true, 0, 0.2, 1, 0.8);
    
    // IMAGE TRANSLATION
    
    s = slideshow.addSlide("Image-to-Image");
    s->addImage("vae", "/Users/gene/Learn/style-transfer/inputs/monalisa.jpg", 0.0, 0.0, 0.48, 0.6);
    s->addImage("vae", "/Users/gene/bin/style-transfer/muliscale/_inputs/vangogh2.jpg", 0.0, 0.61, 0.48, 0.4);
    s->addScrollableImage("vae", "/Users/gene/bin/style-transfer/muliscale/multires_ml_vangogh.png", 0.5, 0.0, 0.6, 1);
    
    s = slideshow.addSlide("Image-to-Image Translation with Conditional Adversarial Nets");
    s->addImage("fb", "/Users/gene/bin/pix2pix/teaser_v3a.png", 0.0, 0.04, 1.0, 0.96);
    s->addText(h3, ofColor(100), "phillipi.github.io/pix2pix/", 0.02, 0.00, 0.8);
    s->start();
    
    s = slideshow.addSlide("Reconstructing Mapbox tiles");
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/venice_reconstructed_all.jpg", 0.0, 0, 1, 1);
    s->addText(h3, ofColor(100), "opendot.github.io/ml4a-invisible-cities/", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("Invisible Cities");
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/la_x_venice.png", 0.0, 0.05, 1.0, 0.48);
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/milan_x_venice.jpg", 0.0, 0.53, 1.0, 0.48);
    s->addText(h3, ofColor(100), "opendot.github.io/ml4a-invisible-cities/", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("City style transfer");
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/milan_x_venice_la.jpg", 0.0, 0.05, 1.0, 0.95);
    s->addText(h3, ofColor(100), "opendot.github.io/ml4a-invisible-cities/", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("Handrawn satellite imagery");
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/handdrawn1.jpg", 0.0, 0.0, 1.0, 0.5);
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/handdrawn2.jpg", 0.0, 0.5, 1.0, 0.5);
    
    s = slideshow.addSlide("Pix2Pix + FaceTracker");
    s->addMovie("mario", "/Users/gene/bin/pix2pix/quasimondo_facepix2pix.mp4", true, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Meat puppet");
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/trump_face_train.png", 0.0, 0.0, 0.45, 1.0);
    s->addImage("fb", "/Users/gene/bin/misc/stock/arrow.png", 0.46, 0.0, 0.08, 1.0);
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/gene_face_test.png", 0.55, 0.0, 0.45, 1.0);
    
    s = slideshow.addSlide("Meat puppet");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump_gene1.mp4", true, 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Video style with optical flow loss term (Ruder et al, 2016)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("video style", "/Users/gene/bin/style-transfer/10_optical_flow/video-style-transfer-x4-reordered.mp4", true, 0, 0, 1, 1);

    s = slideshow.addSlide("Cubist Mirror");
    s->addMovie("altai mirror", "/Users/gene/bin/alt-ai/cubistmirror_v1.mp4", true, 0, 0, 0.61, 0.67);
    s->addMovie("nabi mirror", "/Users/gene/bin/alt-ai/cubistmirror-nabi.mp4", true, 0.55, 0.2, 0.455, 0.8);
    
    CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
    s = slideshow.addSlide("Cubist Mirror");
    s->addAction(cmd);
    // cmd->setStyleModel("/Users/gene/bin/style-transfer/models/kandinsky_e2_full512.model");
    cmd->setStyleModel("/Users/gene/bin/style-transfer/models/cubist.model");
    
    s = slideshow.addSlide("Cubist Mirror @ TIFF");
    s->addImage("fb", "/Users/gene/bin/style-transfer/cubist-mirror/cubist-mirror-tiff.jpg", 0.0, 0.00, 1.0, 1.0);
    
    s = slideshow.addSlide("Cubist Mirror @ TIFF");
    s->addMovie("fb", "/Users/gene/bin/style-transfer/cubist-mirror/cubist-mirror-tiff.mp4", true, 0.0, 0.00, 1.0, 1.0);
    
    s = slideshow.addSlide("CycleGAN");
    s->addImage("fb", "/Users/gene/bin/misc/cyclegan/cyclegan.jpg", 0.0, 0.07, 1, 0.95);
    s->addText(h3, ofColor(100), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("CycleGAN");
    s->addMovie("fb", "/Users/gene/bin/misc/cyclegan/cyclegan_zebra.mp4", true, 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(100), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("CycleGAN fail");
    s->addImage("fb", "/Users/gene/bin/misc/cyclegan/putin_zebra.jpeg", 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(100), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    
    s = slideshow.addSlide("Interactive applications");
    s->setBackgroundFunction(this, &ofApp::drawBgWhite);
    s->addScrollableImage("wiki t-SNE", "/Users/gene/bin/tsne/wiki-tSNE.png", -0.05, 0.0, 0.72, 0.76);
    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0.48, 0.39, 0.54, 0.63);
    attd->setTsnePath("/Users/gene/Teaching/ML4A/ml4a-guides/data/example-audio-tSNE-drums.json");
    s->addAction(attd);
    attd->start();
    s->addText(h4, ofColor(0), "www.genekogan.com/works/wiki-tSNE", 0.03, 0.8, 0.7);
    s->addText(h4, ofColor(0), "github.com/ml4a/ml4a-ofx", 0.67, 0.3, 0.7);

    s = slideshow.addSlide("DoodleTunes (w/ Andreas Refsgaard)");
    s->addMovie("doodle tunes", "/Users/gene/bin/misc/doodle-tunes-auto.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Body Language (Nancy Nowacek, Morgan Hille-Refakis, David Sheinkopf, Caitlin Sikora, Gene Kogan)");
    s->addMovie("body language", "/Users/gene/bin/misc/morgan-gesture-classifier.mp4", true, 0, 0, 1, 1);

    
    ///////// ML4A
    
    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Machine Learning for Artists @ ITP, Spring 2016");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("ml4a @ itp", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/ml4a @ itp-nyu -- timelapse_crop.mp4", true, 0, 0, 1, 1)->setPositionRandom();
    s->loadAssets();
    
    s = slideshow.addSlide("ml4a.github.io/guides");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-guides-index.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Guides");
    s->addImage("workshop", "/Users/gene/bin/ml4a/xdegrees_samples.jpg", 0, 0, 0.5, 0.5);
    //s->addImage("workshop", "/Users/gene/bin/ml4a/nabimusic2.png", 0.51, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, 0.51, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/ml4a/neural-painter/dog-cat-interp.mp4", true, 0.0, 0.51, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/bin/tsne/tsne-animals-highlights.png", 0.51, 0.51, 0.5, 0.5);
    
    s = slideshow.addSlide("ml4a-ofx");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-ofx.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Demos");
    s->addMovie("transfer learning", "/Users/gene/bin/misc/wekinator-coffee-croissant.mp4", true, 0, 0, 1, 1);
    // ableton demo
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-nn.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-hnnat.png", 0, 0, 1, 1);
    
    
    s = slideshow.addSlide("Workshops");
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/ecal/ecal1.JPG", 0.0, 0.0, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/Pictures/copenhagen/IMG_6195.JPG", 0.5, 0.0, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/nabi1.jpg", 0.0, 0.5, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/IMG_6301.JPG", 0.5, 0.5, 0.5, 0.48);
    
    s = slideshow.addSlide("Workshops");
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/opendot/30491978563_c7baa100d2_o.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/altai.JPG", 0.5, 0.0, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/influencers3.jpg", 0.0, 0.5, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/Web/genekogan.github.io/images/workshops/nabi2.jpg", 0.5, 0.5, 0.5, 0.48);
    
    
    s = slideshow.addSlide("thanks :)");
    s->setBackgroundFunction(this, &ofApp::drawBgWhite);
    s->addMovie("t-SNE convergence", "/Users/gene/bin/tsne/tsne_manual.mp4", true, 0, 0, 1, 1);
    s->addRect(ofColor(255,160), 0.005, 0.19, 0.33, 0.25);
    s->addRect(ofColor(255,160), 0.595, 0.19, 0.33, 0.25);
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);

}



