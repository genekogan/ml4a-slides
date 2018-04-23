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
//    h1.load("AndaleMono.ttf", 72);
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
    //slideshow.loadFromExported();
    
    // CONTENT
//    WorkshopMLLiteracyPix2Pix();
    //WorkshopCIIDCostaRicaAboutMe();
    WorkshopCIIDCostaRicaProjects();
    WorkshopCIIDCostaRicaNeuralNets();
    
    
    // after loading slides
    slideshow.setContentRectangle(20, 56, ofGetWidth()-40, ofGetHeight()-56);
    slideshow.printStats();
    slideshow.wrapNotes();
    slideshow.preloadAssets();
  
    // export external for distribution`
//     slideshow.exportAssets();
//    slideshow.exportScreenshots();
    

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

void ofApp::WorkshopCIIDCostaRicaAboutMe() {
    
    s = slideshow.addSlide("hello :)");
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
    s->start();
    
    s = slideshow.addSlide("music information retrieval");
    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
    s->addImage("genre VA", "/Users/gene/bin/misc/sourcetone/genre-AvgVA.jpg", 0.0, 0.4, 0.42, 0.6);
    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
    
    s = slideshow.addSlide("Color of Words");
    s->addScrollableImage("color of words", "/Users/gene/bin/misc/stock/color-of-words.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Musical instruments (w/ Jeff Snyder)");
    s->addImage("tweet", "/Users/gene/Web/genekogan.github.io/_site/images/birl/birl1.jpg", 0.0, 0.0, 1, 0.35);
    s->addImage("tweet", "/Users/gene/bin/misc/Snyderphonics_Manta.jpg", 0.0, 0.365, 1, 0.64);
    
    // s = slideshow.addSlide("Generative art");
    // s->addImage("star", "/Users/gene/bin/images/stars/star-00001.png", 0, 0, 0.25, 0.5);
    // s->addImage("star", "/Users/gene/bin/images/stars/star-00004.png", 0.25, 0, 0.25, 0.5);
    // s->addImage("star", "/Users/gene/bin/images/stars/star-00005.png", 0.5, 0, 0.25, 0.5);
    // s->addImage("star", "/Users/gene/bin/images/stars/star-00010.png", 0.75, 0, 0.25, 0.5);
    // s->addImage("star", "/Users/gene/bin/images/stars/star-00014.png", 0.25, 0.5, 0.25, 0.5);
    // s->addImage("star", "/Users/gene/bin/images/stars/star-00016.png", 0.5, 0.5, 0.25, 0.5);
    // s->addImage("star", "/Users/gene/bin/images/stars/star-00011.png", 0, 0.5, 0.25, 0.5);
    // s->addImage("star", "/Users/gene/bin/images/stars/star-00022.png", 0.75, 0.5, 0.25, 0.5);
    
    // s = slideshow.addSlide("Interference patterns");
    // s->addImage("interference", "/Users/gene/bin/images/interference/interference11.png", 0.0, 0, 0.33, 1);
    // s->addImage("interference", "/Users/gene/bin/images/interference/interference14.png", 0.3333, 0, 0.33, 1);
    // s->addImage("interference", "/Users/gene/bin/images/interference/interference12.png", 0.6666, 0, 0.33, 1);
    
    s = slideshow.addSlide("Nature and simulation");
    s->addMovie("simulation", "/Users/gene/bin/images/Flocking-fast.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Nature and simulation");
    s->addMovie("simulation", "/Users/gene/bin/images/VertexFields2_01.29.2012.mov", true, 0, 0, 1, 1);
    
    //    s = slideshow.addSlide("Nature and simulation");
    //    s->addMovie("simulation", "/Users/gene/bin/images/Tree.mov", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Nature and simulation");
    s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/listening-to-the-ocean-20.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Nature and simulation");
    s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/listening-to-the-ocean-10.jpg", 0.505, 0, 0.5, 1);
    s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/generator5.png", 0, 0, 0.5, 1);
    
    //        s = slideshow.addSlide("Visual instruments");
    //        s->addMovie("genart", "/Users/gene/bin/images/instagram/bits.mp4", true, 0, 0, 0.333333, 0.5);
    //        s->addMovie("genart", "/Users/gene/bin/images/instagram/constellations.mp4", true, 0.3333, 0, 0.33333, 0.5);
    //        s->addMovie("genart", "/Users/gene/bin/images/instagram/subdivision_2.mp4", true, 0.66666, 0.0, 0.3333, 0.5);
    //        s->addMovie("genart", "/Users/gene/bin/images/instagram/old/vert1.mp4", true, 0, 0.5, 0.333333, 0.5);
    //        s->addMovie("genart", "/Users/gene/bin/images/instagram/video/cubes.mp4", true, 0.33333, 0.5, 0.333333, 0.5);
    //        s->addMovie("genart", "/Users/gene/bin/images/instagram/old/polar_glitch2.mp4", true, 0.66666, 0.5, 0.333333, 0.5);
    
    // s = slideshow.addSlide("Data visualization");
    // s->addImage("genart", "/Users/gene/Web/genekogan.github.io/_site/images/audio-sculpture/audio-sculpture2.jpg", 0, 0, 0.36, 1);
    // s->addMovie("genart", "/Users/gene/bin/misc/Tennis rankings 1983-2013-HD.mp4", true, 0.4, 0, 0.61, 1);
    
    s = slideshow.addSlide("Kinect Projector Toolkit");
    s->addMovie("KPT", "/Users/gene/bin/opera-toolkit/colin-ribbons-2_nosound.mp4", true, 0.0, 0, 0.5, 0.6);
    s->addMovie("KPT", "/Users/gene/bin/kinect-projector-toolkit/Silhouettes @ Saigon Ranger 12:5:2014.mp4", true, 0.4, 0.4, 0.64, 0.62);
    
    s = slideshow.addSlide("Machine Yearning (2014)");
    s->addMovie("machine yearning", "/Users/gene/bin/machine-yearning/machine-yearning-gopro.mp4", true, 0.0, 0, 1, 1);
    
    s = slideshow.addSlide("Neural nets hallucinating");
    s->addMovie("dcgan", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0.026, 0.5, 0.47);
    s->addImage("deepdream", "/Users/gene/bin/misc/stock/building-dreams.png", 0, 0.515, 0.5, 0.48);
    s->addImage("stylenet", "/Users/gene/bin/misc/stock/stylenet-original.png", 0.5, 0.53, 0.5, 0.47);
    s->addImage("synthesizing original", "/Users/gene/bin/misc/stock/synthesizing-original.jpg", 0.5, 0.025, 0.5, 0.48);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=QYcKCGdZvq4", 0.01, 0.0, 1.0);
    s->addText(h5, ofColor(0), "research.googleblog.com/2015/06/inceptionism-going-deeper-into-neural.html", 0.002, 0.475, 1.0);
    s->addText(h4, ofColor(0), "https://arxiv.org/abs/1508.06576", 0.6, 0.51, 1.0);
    s->addText(h4, ofColor(0), "http://www.evolvingai.org/synthesizing", 0.6, 0.0, 1.0);
    
    s = slideshow.addSlide("Video style with optical flow loss term (Ruder et al, 2016)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("video style", "/Users/gene/bin/style-transfer/10_optical_flow/video-style-transfer-x4-reordered.mp4", true, 0, 0, 1, 1);
    
    CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
    s = slideshow.addSlide("Cubist Mirror");
    s->addAction(cmd);
    
    s = slideshow.addSlide("A Book from the Sky");
    s->addMovie("zloops", "/Users/gene/bin/dcgan/summary/zloops.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Character interpolations");
    s->addMovie("interplations", "/Users/gene/bin/dcgan/public/interpolations_3.mp4", true, 0.2, 0.15, 0.6, 0.6);
    
    s = slideshow.addSlide("Audio t-SNE");
    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0, 0, 1, 1);
    s->addAction(attd);
    
    s = slideshow.addSlide("Dense captioning Deepdream");
    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Invisible Cities");
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/milan_style_transfer_x4.jpg", 0.0, 0.04, 1, 0.96);
    s->addText(h3, ofColor(100), "opendot.github.io/ml4a-invisible-cities/", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("City style transfer");
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/milan_x_venice_la.jpg", 0.0, 0.0, 1.0, 1.0);
    
    s = slideshow.addSlide("Handrawn satellite imagery");
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/handdrawn1.jpg", 0.0, 0.0, 1.0, 0.5);
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/handdrawn2.jpg", 0.0, 0.5, 1.0, 0.5);
    
    s = slideshow.addSlide("Meat puppet");
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/trump_face_train.png", 0.0, 0.0, 0.45, 1.0);
    s->addImage("fb", "/Users/gene/bin/misc/stock/arrow.png", 0.46, 0.0, 0.08, 1.0);
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/gene_face_test.png", 0.55, 0.0, 0.45, 1.0);
    
    s = slideshow.addSlide("Meat puppet");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump_gene1.mp4", false, 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("ml4a-ofx");
    s->addMovie("andreas", "/Users/gene/bin/misc/workshops/andreas-ml4a-ofx.mp4", true, 0.0, 0.0, 0.7, 0.5);
    s->addMovie("andreas", "/Users/gene/bin/misc/workshops/andreas-pig-classifier.mp4", true, 0.36, 0.4, 0.7, 0.6);
    
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
    
    s = slideshow.addSlide("python notebooks");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-guide-RIS.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-nn.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-hnnat.png", 0, 0, 1, 1);
    
}


void ofApp::WorkshopCIIDCostaRicaProjects() {
    
    s = slideshow.addSlide("Objectifier (Bjoern Karmann, CIID)");
    s->addImage("objectifier", "/Users/gene/bin/misc/prototype_objectifier.jpg", 0, 0, 0.6, 0.55);
    s->addMovie("objectifier", "/Users/gene/bin/misc/prototype_objectifier.mp4", true, 0.32, 0.4, 0.7, 0.6);
    s->addText(h4, ofColor(0), "bjoernkarmann.dk/objectifier", 0.65, 0.0, 0.4);
    s->start();
    
    s = slideshow.addSlide("Nabi hackathon project");
    s->addImage("fb", "/Users/gene/bin/ml4a/nabimusic2.png", 0.0, 0.00, 1.0, 1.0);
    
    s = slideshow.addSlide("DoodleTunes");
    s->addMovie("fb", "/Users/gene/bin/ml4a/Doodle Tunes-small.mp4", true, 0.0, 0.00, 1.0, 1.0);
    
    s = slideshow.addSlide("DoodleClassifier");
    s->addMovie("fb", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, 0.0, 0.00, 1.0, 1.0);
    
    s = slideshow.addSlide("Beta blockers (Chino Kim)");
    s->addMovie("beta blockers", "/Users/gene/bin/alt-ai/betablockers.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Piano Die Hard (Corbin Ordel & Aaron Montoya-Moraga)");
    s->addImage("pdh", "/Users/gene/Web/alt-AI/images/exhibit-corbin.jpg", 0, 0, 0.7, 1);
    s->addMovie("pdh", "/Users/gene/bin/misc/stock/pianodiehard.mp4", true, 0.7, 0, 0.3, 1);
    
    s = slideshow.addSlide("Neural Recycle (Seth Kranzler)");
    s->addImage("assisted visions", "/Users/gene/Web/alt-AI/images/exhibit-seth.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Doppelcam (Melanie Hoff + Dhruv Mehrotra)");
    s->addImage("doppelcam", "/Users/gene/Web/alt-AI/images/exhibit-melanie.jpg", 0, 0.15, 1, 0.85);
    s->addText(h4, ofColor(0), "https://doppel.camera", 0.01, 0.0, 0.99);
    
    s = slideshow.addSlide("Terrapattern");
    s->addText(h4, ofColor(0), "Golan Levin, David Newberry, Kyle McDonald, Irene Alvarado, Aman Tiwari, Manzil Zaheer", 0.01, 0.01, 0.9);
    s->addImage("Terrapattern", "/Users/gene/bin/misc/stock/terrapattern.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("ai experiments");
    s->addText(h4, ofColor(0), "https://aiexperiments.withgoogle.com/", 0.01, 0.002, 0.9);
    s->addImage("ai experiments", "/Users/gene/bin/misc/stock/aiexperiments.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("The samples never end (Jason Levine)");
    s->addMovie("jason", "/Users/gene/bin/misc/stock/altaivibez4.mp4", true, 0, 0, 1, 1)->setPositionRandom();
    
    s = slideshow.addSlide("Visualizing Neural Networks (Cassie Tarakajian)");
    s->addMovie("visualizing neural nets", "/Users/gene/bin/alt-ai/lisa-oculus-convnet.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("TransProse (Hannah Davis)");
    s->addMovie("transprose", "/Users/gene/bin/misc/TransProse - 2 Pieces-ItWLLzMislM.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://www.musicfromtext.com/", 0.01, 0.0, 0.99);
    
    s = slideshow.addSlide("Body Language (Nancy Nowacek, Morgan Hille-Refakis, David Sheinkopf, Caitlin Sikora, Gene Kogan)");
    s->addMovie("body language", "/Users/gene/bin/misc/morgan-gesture-classifier.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Anna Riddler - Fall of the house of usher");
    s->addImage("Anna", "/Users/gene/bin/misc/stock/annariddler - fothou.jpg", 0, 0, 0.67, 0.7);
    s->addMovie("Anna", "/Users/gene/bin/misc/stock/annariddler - fothou.mp4", true, 0.4, 0.35, 0.74, 0.65);
    
    s = slideshow.addSlide("Cubist Mirror @ TIFF");
    s->addImage("fb", "/Users/gene/bin/style-transfer/cubist-mirror/cubist-mirror-tiff.jpg", 0.0, 0.00, 1.0, 1.0);
    
    s = slideshow.addSlide("Cubist Mirror @ TIFF");
    s->addMovie("nabi mirror", "/Users/gene/bin/alt-ai/cubistmirror-nabi.mp4", true, 0.55, 0.2, 0.455, 0.8);
    
    s = slideshow.addSlide("Meat puppet");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump_gene1.mp4", false, 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Helena Sarin (@glagolista)");
    s->addImage("helana", "/Users/gene/bin/misc/stock/helena - cyclegan.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Feedback & ping-ponging (Mario Klingemann)");
    s->addMovie("mario", "/Users/gene/bin/misc/stock/quasimondo - Face Feedback III - Faces in 1024x1024 generated by neural networks.mp4", true, 0, 0, 0.5, 1);
    s->addMovie("mario", "/Users/gene/bin/misc/stock/quasimondo - cyclegan-feedback.mp4", true, 0.52, 0, 0.48, 1);
    
    
    s = slideshow.addSlide("Uncanny Mirror");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/quasimondo_uncannymirror.mp4", true, 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "Mario Klingemann (@quasimondo)", 0.01, 0.0, 1.0);
    
}


void ofApp::WorkshopCIIDCostaRicaNeuralNets() {
    
    s = slideshow.addSlide("Machine learning");
    s->addImage("imagenet", "/Users/gene/bin/misc/stock/machine-learning.png", 0.0, 0.0, 0.4, 1);
    s->addImage("mnist1", "/Users/gene/bin/misc/stock/mnist-forward-pass-1.png", 0.4, 0, 0.6, 1);
    
    s = slideshow.addSlide("Neural network");
    s->addImage("neuron", "/Users/gene/bin/misc/stock/forwardPassDemo/fp_1.png", 0.1, 0.1, 0.8, 0.8);
    s->addBreakpoint();
    s->addImage("neuron", "/Users/gene/bin/misc/stock/forwardPassDemo/fp_2.png", 0.1, 0.1, 0.8, 0.8);
    s->addBreakpoint();
    s->addImage("neuron", "/Users/gene/bin/misc/stock/forwardPassDemo/fp_3.png", 0.1, 0.1, 0.8, 0.8);
    s->addBreakpoint();
    s->addImage("neuron", "/Users/gene/bin/misc/stock/forwardPassDemo/fp_4.png", 0.1, 0.1, 0.8, 0.8);
    s->addBreakpoint();
    s->addImage("neuron", "/Users/gene/bin/misc/stock/forwardPassDemo/fp_5.png", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("MNIST");
    s->addImage("mnist", "/Users/gene/bin/misc/stock/mnist_random_sample.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Classifying handwritten numbers");
    s->addImage("mnist", "/Users/gene/bin/misc/mnist-net.png", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Training our neural network");
    s->addImage("mnist1", "/Users/gene/bin/misc/stock/mnist-forward-pass-1.png", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("mnist3", "/Users/gene/bin/misc/stock/mnist-forward-pass-3.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Training our neural network");
    s->addMovie("mnist", "/Users/gene/bin/misc/stock/mnist_weights_demo.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("MNIST first layer weights");
    s->addImage("MNIST weights", "/Users/gene/bin/misc/stock/mnist_weights.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("A more complicated dataset");
    s->addImage("CIFAR", "/Users/gene/bin/misc/stock/cifar.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("What tricks ordinary neural nets?");
    s->addImage("CIFAR cats", "/Users/gene/bin/misc/stock/cifar-cats.png", 0.0, 0.02, 1, 0.48);
    s->addImage("CIFAR-10 linear classifier", "/Users/gene/bin/misc/stock/cifar_weights_linclassifier_cs231n.png", 0.0, 0.52, 1.0, 0.25);
    s->addText(h4, ofColor(0), "CIFAR-10 linear classifier [ cs231n.stanford.edu/slides/winter1516_lecture2.pdf ]", 0.10, 0.8, 1);
    
    s = slideshow.addSlide("Convolutional networks");
    s->addImage("lenet", "/Users/gene/bin/misc/stock/lenet.png", 0, 0, 1, 0.4);
    s->addImage("alexnet", "/Users/gene/bin/misc/stock/alexnet2.png", 0, 0.5, 1, 0.4);
    s->addText(h3, ofColor(0), "Lenet (LeCun et al, 1998) [http://yann.lecun.com/exdb/lenet/]", 0.05, 0.4, 0.9);
    s->addText(h3, ofColor(0), "AlexNet 2012 [via https://jeremykarnowski.wordpress.com/2015/07/15/alexnet-visualization/]", 0.05, 0.92, 0.9);
    
    s = slideshow.addSlide("Hubel/Wiesel (1959, 1962, 1968)");
    s->addImage("hubel wiesel", "/Users/gene/bin/misc/hubel1.jpg", 0.0, 0.05, 1.0, 0.5);
    s->addImage("hubel wiesel", "/Users/gene/bin/misc/hubel2.jpg", 0.0, 0.57, 1.0, 0.36);
    s->addText(h4, ofColor(0), "Hubel, Wiesel 1962: Receptive fields, binocular interaction and functional architecture in the cat's visual cortex", 0.01, 0.0, 0.9);
    s->addText(h4, ofColor(0), "Wang et al: On the Oirigin of Deep Learning arxiv.org/pdf/1702.07800.pdf", 0.01, 0.95, 0.9);
    
    s = slideshow.addSlide("Fukushima's Neocognitron (1980)");
    s->addImage("neocognitron", "/Users/gene/bin/misc/neocognitron1.png", 0, 0.1, 1.0, 0.5);
    s->addImage("neocognitron", "/Users/gene/bin/misc/neocognitron3.png", 0, 0.6, 1.0, 0.4);
    s->addText(h4, ofColor(0), "Neocognitron: A Self-organizing Neural Network Model for a Mechanism of Pattern Recognition Unaffected by Shift in Position", 0.01, 0.0, 0.75);
    s->addText(h4, ofColor(0), "but no backprop yet", 0.1, 0.95, 0.8);
    
    s = slideshow.addSlide("Convolution layers");
    s->addMovie("convolution", "/Users/gene/bin/misc/stock/convolution_demo.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "ml4a.github.io/dev/demos/demo_convolution.html", 0.1, 0.05, 1);
    
    s = slideshow.addSlide("Convolutional neural networks");
    s->addImage("lenet", "/Users/gene/bin/misc/stock/lenet.png", 0, 0, 1, 0.4);
    s->addMovie("lenet demo", "/Users/gene/bin/misc/stock/lenet_demo.mp4", true, 0, 0.4, 1, 0.6);
    s->addText(h3, ofColor(0), "Lenet (LeCun et al, 1998) [http://yann.lecun.com/exdb/lenet/]", 0, 0.4, 1);
    
    s = slideshow.addSlide("Convnet geometry (volume interpretation)");
    s->addImage("volumes", "/Users/gene/bin/misc/stock/cnn_volumes.jpg", 0.0, 0.0, 1.0, 1.0);
    s->addText(h4, ofColor(0), "http://cs231n.stanford.edu/slides/winter1516_lecture2.pdf", 0.1, 0.05, 1);
    
    s = slideshow.addSlide("Convolution layers");
    s->addMovie("convolution", "/Users/gene/bin/misc/stock/convolution_demo.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "ml4a.github.io/dev/demos/demo_convolution.html", 0.1, 0.05, 1);
    //
    // s = slideshow.addSlide("Pooling layers");
    // s->addImage("pooling", "/Users/gene/bin/misc/stock/cnn_pool.jpg", 0.0, 0.2, 0.5, 0.7);
    // s->addImage("Max-pooling", "/Users/gene/bin/misc/stock/cnn_maxpool.jpg", 0.5, 0.2, 0.5, 0.7);
    // s->addText(h4, ofColor(0), "http://cs231n.github.io/convolutional-networks/", 0.1, 0.01, 0.99);
    //
    s = slideshow.addSlide("CNN demo");
    CcvForwardPassDemo *ccvd = new CcvForwardPassDemo(s, "ccv", 0, 0, 1, 1);
    s->addAction(ccvd);
    
    s = slideshow.addSlide("What neural networks see");
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l1_nofilter.png", 0.0, 0.1, 1, 0.8);
    s->addText(h4, ofColor(255), "What neural nets look for\nVisualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]", 0.02, 0.0, 1.0);
    
    s = slideshow.addSlide("What neural networks see");
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l2.png", 0.01, 0.15, 0.45, 0.7);
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l3.png", 0.47, 0.15, 0.52, 0.7);
    s->addText(h4, ofColor(255), "Visualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]", 0.02, 0.0, 1.0);
    
    s = slideshow.addSlide("Applications of deep learning");
    s->addImage("karpathy slides", "/Users/gene/bin/misc/stock/karpathy-convnets-slide.png", 0, 0, 1, 0.95);
    s->addText(h5, ofColor(0), "https://www.youtube.com/watch?v=u6aEYuemt0M&t=8s", 0.1, 0.95, 0.9);
    
    s = slideshow.addSlide("Applications of deep learning");
    s->addImage("mitosis", "/Users/gene/bin/misc/stock/mitosis.png", 0, 0, 1, 0.75);
    s->addText(h4, ofColor(0), "Ciresan et al 2013 - Mitosis Detection in Breast Cancer Histology Images", 0.1, 0.8, 0.9);
    s->addText(h4, ofColor(0), "http://people.idsia.ch/~ciresan/data/miccai2013.pdf", 0.1, 0.9, 0.9);
    
    s = slideshow.addSlide("Applications of deep learning");
    s->addImage("speech processing", "/Users/gene/bin/misc/stock/cnn-speech.png", 0.0, 0.0, 0.33, 0.5);
    s->addImage("alphaGo", "/Users/gene/bin/misc/stock/nature-go.jpg", 0.1, 0.52, 0.5, 0.5);
    s->addImage("self-driving car dash", "/Users/gene/bin/misc/stock/sdc-dash.jpg", 0.44, 0.0, 0.4, 0.5);
    s->addImage("self-driving car", "/Users/gene/bin/misc/stock/self-driving-car.jpg", 0.72, 0.31, 0.3, 0.5);
    s->addText(h5, ofColor(0), "http://recognize-speech.com/acoustic-model/knn/comparing-different-architectures/convolutional-neural-networks-cnns", 0.01, 0.08, 0.5);
    s->addText(h5, ofColor(0), "http://www.informationweek.com/it-life/googles-self-driving-car-busted-for-driving-too-slow/d/d-id/1323140", 0.35, 0.1, 0.5);
    s->addText(h5, ofColor(0), "https://infinityleap.com/the-cars-have-eyes-nvidia-unveils-self-driving-car-system-at-ces-2016/", 0.35, 0.12, 0.45);
    s->addText(h5, ofColor(0), "http://www.nature.com/nature/journal/v529/n7587/full/nature16961.html", 0.35, 0.4, 0.5);
    s->addText(h5, ofColor(0), "https://vk.com/doc-44016343_437229031?dl=56ce06e325d42fbc72", 0.35, 0.42, 0.5);
    
    s = slideshow.addSlide("Backpropaganda");
    s->addImage("invest", "/Users/gene/bin/misc/stock/hype-investment.jpg", 0.42, 0.0, 0.59, 0.7);
    s->addImage("invest", "/Users/gene/bin/misc/stock/ILSVRC.png", 0.0, 0.05, 0.4, 0.4);
    s->addImage("invest", "/Users/gene/bin/misc/ILSVRC-nvidia.png", 0.0, 0.55, 0.4, 0.4);
    s->addText(h3, ofColor(80), "\"Machine learning is a core, transformative way by which we’re rethinking everything we’re doing,\" - Sundar Pichai, Google CEO", 0.45, 0.7, 0.4);
    
    s = slideshow.addSlide("Deep learning community");
    s->addImage("invest", "/Users/gene/bin/misc/stock/arxiv.png", 0.0, 0.0, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/torch.png", 0.0, 0.33, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/keras.png", 0.0, 0.66, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/kaggle.png", 0.5, 0.0, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/twitter.png", 0.5, 0.33, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/reddit-icon.png", 0.5, 0.66, 0.45, 0.3);
    
    // software 2.0
    s = slideshow.addSlide("A new paradigm for computing?");
    s->addImage("invest", "/Users/gene/bin/misc/software2.0.png", 0.0, 0.0, 0.5, 1);
    s->addText(h4, ofColor(80), "Software 1.0 - logic and control-flow", 0.51, 0.2, 0.45);
    s->addText(h4, ofColor(80), "Software 2.0 - differentiable programming", 0.51, 0.6, 0.45);
    
    
}
