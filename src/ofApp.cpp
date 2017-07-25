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
    
//    ofSetWindowShape(1920, 1080);
    ofSetFullscreen(true);
    
    // make sure USB Camera detected
    checkIfCorrectCam();

    // Darknet
    string cfgfile = ofToDataPath( "cfg/yolo9000.cfg" );
    string weightfile = "/Users/gene/Teaching/ML4A/ml4a-ofx/data/darknet/yolo9000.weights";
    string namesfile = ofToDataPath( "cfg/9k.names" );
    darknet.init( cfgfile, weightfile, namesfile );
    string cfgfile2 = "/Users/gene/Code/of_v0.9.6_osx_release/addons/ofxDarknet/example-deepdream/bin/data/cfg/vgg-conv.cfg";
    string weightfile2 = "/Users/gene/Teaching/ML4A/ml4a-ofx/data/darknet/vgg-conv.weights";
    //darknet2.init( cfgfile2, weightfile2 );

    
    // Ccv
    //ccv.setup("/Users/gene/bin/misc/ccv/image-net-2012.sqlite3");
    
    // background functions
    slideshow.setBackgroundFunction(this, &ofApp::drawBgWhite);
    //slideshow.setBackgroundFunction(this, &ofApp::drawBgBlack);
    
    // before loading slides
    //slideshow.loadFromExported();
    
    // CONTENT
//    WorkshopCIIDAboutMe();
    WorkshopCIIDDeepLearning2();
    
    
    ///Users/gene/bin/misc/stock/pointcloud-GAN.png
    
    // after loading slides
    slideshow.setContentRectangle(20, 56, ofGetWidth()-40, ofGetHeight()-56);
    slideshow.printStats();
    slideshow.wrapNotes();
    slideshow.preloadAssets();
  
    // export external for distribution
    // slideshow.exportAssets();
    // slideshow.exportScreenshots();
    

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

void ofApp::WorkshopEyeo() {
    s = slideshow.addSlide("Machine learning for artists @ Eyeo, 26 June 2017");
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "@frnsys", 0.4, 0.2, 0.5);
    s->addText(h2, ofColor(0), "frnsys.com", 0.4, 0.3, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.7, 0.2, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.7, 0.3, 0.5);
    s->start();
    
    s = slideshow.addSlide("Segments?");
    s->addText(h3, ofColor(0), " - Installation", 0.1, 0.1, 0.8);
    s->addText(h3, ofColor(0), " - Introduction to machine learning & neural networks", 0.1, 0.2, 0.8);
    s->addText(h3, ofColor(0), " - Practical: feature extraction & retrieval for images, sounds, text", 0.1, 0.3, 0.8);
    s->addText(h3, ofColor(0), " - Practical: reinforcement learning & game AI", 0.1, 0.4, 0.8);
    s->addText(h3, ofColor(0), " - If time: survey of deep learning stuff?", 0.1, 0.5, 0.8);
    s->addText(h3, ofColor(0), " - Overview of ml4a resources", 0.1, 0.6, 0.8);
    

    /////////////////////////////////////////////////
    // AI
    
    s = slideshow.addSlide("A short history of machine learning & AI");
    s->addImage("perceptron", "/Users/gene/bin/misc/mark_1_perceptron.jpg", 0.0, 0.0, 0.5, 1);
    s->addText(h2, ofColor(0), "20x20 = 400 cadmium sulfide photocells", 0.55, 0.2, 0.4);
    s->addText(h2, ofColor(0), "1 layer of weights encoded as potentiometers with weight updates done by electric motors", 0.55, 0.5, 0.4);
    
    s = slideshow.addSlide("Hype cycles");
    s->addImage("perceptrons top", "/Users/gene/bin/misc/stock/nytimes_perceptron_top.png", 0.0, 0.0, 1, 0.24);
    s->addImage("perceptrons", "/Users/gene/bin/misc/stock/nytimes_perceptron.png", 0.13, 0.24, 0.4, 0.76);
    s->addText(h2, ofColor(0), "Perceptrons demonstrated to have major flaws", 0.55, 0.3, 0.3);
    s->addText(h2, ofColor(0), "Disappointing progress leads to AI winter", 0.55, 0.6, 0.3);
    
    s = slideshow.addSlide("70s-90s");
    s->addText(h2, ofColor(0), " - AI Winter", 0.1, 0.1, 0.7);
    s->addText(h2, ofColor(0), " - \"Machine learning\" grows out of computational stats applied to AI", 0.1, 0.2, 0.8);
    s->addText(h2, ofColor(0), " - Other methods prevail: SVMs, decision forests, Boosting, etc", 0.1, 0.35, 0.8);
    s->addText(h2, ofColor(0), " - Applied machine learning characterized by \"expert\" handcrafted feature-engineering", 0.1, 0.5, 0.8);
    
    s = slideshow.addSlide("Emergence of deep learning");
    s->addText(h2, ofColor(0), " - 1980s: Geoff Hinton applies backpropagation to train multiple layer neural nets", 0.1, 0.0, 0.8);
    s->addText(h2, ofColor(0), " - 1998: LeNet + handwritten check detection", 0.1, 0.1, 0.8);
    s->addText(h2, ofColor(0), " - 2006: CIFAR + \"Deep Learning Conspiracy\"", 0.1, 0.2, 0.8);
    s->addText(h2, ofColor(0), " - 2009: Convnet gets SOTA for speech-to-text", 0.1, 0.3, 0.8);
    s->addText(h2, ofColor(0), " - 2010: ImageNet challenge", 0.1, 0.4, 0.7);
    s->addText(h2, ofColor(0), " - 2012: AlexNet gets SOTA for image classification", 0.1, 0.5, 0.7);
    s->addText(h2, ofColor(0), " - 2013: ZFNet + Deep learning investment boom", 0.1, 0.6, 0.7);
    s->addText(h2, ofColor(0), " - 2014(ish): More researchers/students using Theano, Torch, Keras, and others", 0.1, 0.7, 0.7);
    s->addText(h2, ofColor(0), " - 2015: Creative boom from Deepdream, stylenet", 0.1, 0.8, 0.7);
    s->addText(h2, ofColor(0), " - 2016: ResNets, Tensorflow, AlphaGo, research exploding", 0.1, 0.9, 0.7);
    
    s = slideshow.addSlide("ImageNet top-5 + GPU");
    s->addImage("invest", "/Users/gene/bin/misc/ilsvrc-top5.png", 0.0, 0.0, 1.0, 0.48);
    s->addImage("invest", "/Users/gene/bin/misc/ILSVRC-nvidia.png", 0.0, 0.52, 1.0, 0.48);
    
    // about machine learning and ai
    s = slideshow.addSlide("AI Spring?");
    s->addImage("invest", "/Users/gene/bin/misc/stock/hype-investment.jpg", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("AGI is on people's minds?");
    s->addMovie("Seaquest", "/Users/gene/bin/misc/stock/Deep Q network learning to play Seaquest-5WXVJ1A0k6Q.mp4", true, 0, 0, 0.5, 0.5);
    s->addMovie("Pong", "/Users/gene/bin/misc/stock/Deep Q network learning to play Pong-60pwnLB0DqY.mp4", true, 0.5, 0.5, 0.5, 0.5);
    s->addMovie("Breakout", "/Users/gene/bin/misc/stock/Google DeepMind's Deep Q-learning playing Atari Breakout-V1eYniJ0Rnk.mp4", true, 0, 0.5, 0.5, 0.5);
    s->addMovie("Space Invaders", "/Users/gene/bin/misc/stock/Deep Q network playing Space Invaders-ZisFfiEdQ_E.mp4", true, 0.5, 0.0, 0.5, 0.5);
    //
    //    s = slideshow.addSlide("Can machines think?");
    //    s->addImage("cmt 1", "/Users/gene/bin/misc/turing_cmt_1.png", 0, 0, 1, 1);
    //
    //    s = slideshow.addSlide("Can machines think?");
    //    s->addImage("cmt 1", "/Users/gene/bin/misc/turing_cmt_2.png", 0, 0, 1, 1);
    
//    s = slideshow.addSlide("Can machines think?");
//    s->addText(h2, ofColor(0), "\"The question of whether a computer can think is no more interesting than the question of whether a submarine can swim.\" - Edsger Dijkstra", 0.1, 0.1, 0.7);
//    
//    s = slideshow.addSlide("Singularity concerns");
//    s->addText(h2, ofColor(0), "\"Worrying about killer robots is like worrying about overpopulation on Mars\" - Andrew Ng", 0.05, 0.15, 0.75);
//    s->addText(h2, ofColor(0), "\"Worrying about sentient AI as the ice caps melt is like standing on the tracks as the train rushes in, worrying about being hit by lightning\" - Bret Victor", 0.05, 0.35, 0.75);
//    
//    s = slideshow.addSlide("Critical issues in AI");
//    s->addImage("napalm", "/Users/gene/bin/misc/stock/napalmgirl_censoredfb.jpg", 0.0, 0.0, 0.5, 0.5);
//    s->addImage("drones", "/Users/gene/bin/misc/stock/trumpdrone.jpeg", 0.0, 0.5, 0.5, 0.5);
//    s->addImage("pred policing", "/Users/gene/bin/misc/propublica-recidivism.png", 0.5, 0.5, 0.5, 0.5);
//    s->addImage("flash crash", "/Users/gene/Pictures/Screenshots/flashcrash_tweet.png", 0.5, 0.0, 0.5, 0.5);
//    
//    s = slideshow.addSlide("Art <-> Activism?");
//    s->addImage("neural net", "/Users/gene/bin/misc/stock/flow.png", 0.15, 0.15, 0.7, 0.7);
    
    
    
    /////////////////////////////////////////////////
    // OVERVIEW OF ML4A
    
    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.1, 0.1, 0.8, 0.8);
    
//    s = slideshow.addSlide("Workshops");
//    s->addImage("rachel", "/Users/gene/bin/misc/workshops/opendot/30491978563_c7baa100d2_o.jpg", 0.0, 0.0, 0.5, 0.5);
//    s->addImage("workshop", "/Users/gene/bin/misc/workshops/altai.JPG", 0.5, 0.0, 0.5, 0.48);
//    s->addImage("workshop", "/Users/gene/bin/misc/workshops/influencers3.jpg", 0.0, 0.5, 0.5, 0.48);
//    s->addImage("workshop", "/Users/gene/bin/misc/workshops/opendot1.jpg", 0.5, 0.5, 0.5, 0.48);
    
    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("ml4a.github.io/guides");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-guides-index.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("ml4a-ofx");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-ofx.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Guides");
    s->addImage("workshop", "/Users/gene/bin/ml4a/xdegrees_samples.jpg", 0, 0, 0.5, 0.5);
    // s->addImage("workshop", "/Users/gene/bin/ml4a/nabimusic2.png", 0.51, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, 0.51, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/ml4a/neural-painter/dog-cat-interp.mp4", true, 0.0, 0.51, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/bin/tsne/tsne-animals-highlights.png", 0.51, 0.51, 0.5, 0.5);

//    s = slideshow.addSlide("ml4a-ofx");
//    s->addMovie("andreas", "/Users/gene/bin/misc/workshops/andreas-ml4a-ofx.mp4", true, 0.0, 0.0, 0.7, 0.5);
//    s->addMovie("andreas", "/Users/gene/bin/misc/workshops/andreas-pig-classifier.mp4", true, 0.36, 0.4, 0.7, 0.6);

    s = slideshow.addSlide("python notebooks");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-guide-RIS.png", 0, 0, 1, 1);
    
    
    
    
    /////////////////////////////////////////////////
    // OVERVIEW OF NEURAL NETS
    
    s = slideshow.addSlide("What is supervised learning?");
    s->addImage("imagenet", "/Users/gene/bin/misc/stock/machine-learning.png", 0.0, 0.05, 0.4, 0.9);
    s->addImage("imagenet", "/Users/gene/bin/misc/stock/Linear_regression.png", 0.41, 0.05, 0.6, 0.9);

    s = slideshow.addSlide("Convolutional neural networks \"in 5 minutes\" (brainbow by Katie Matho)");
    s->addImage("neural net", "/Users/gene/bin/misc/stock/brainbow.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("An artificial neuron");
    s->addImage("neural net", "/Users/gene/bin/misc/stock/artificial_neuron.png", 0.15, 0.15, 0.7, 0.7);
    
    s = slideshow.addSlide("Forward pass");
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
    
    s = slideshow.addSlide("Convolutional neural networks");
    s->addImage("lenet", "/Users/gene/bin/misc/stock/lenet.png", 0, 0, 1, 0.4);
    s->addMovie("lenet demo", "/Users/gene/bin/misc/stock/lenet_demo.mp4", true, 0, 0.4, 1, 0.6);
    s->addText(h3, ofColor(0), "Lenet (LeCun et al, 1998) [http://yann.lecun.com/exdb/lenet/]", 0, 0.4, 1);
    
    s = slideshow.addSlide("Convnets do everything");
    s->addImage("speech processing", "/Users/gene/bin/misc/stock/cnn-speech.png", 0.0, 0.0, 0.33, 0.5);
    s->addImage("deepdream", "/Users/gene/bin/misc/stock/memo-deepdream.jpg", 0.58, 0.6, 0.4, 0.5);
    s->addImage("lee sedol", "/Users/gene/bin/misc/stock/lee-sedol.png", 0.0, 0.44, 0.5, 0.2);
    s->addImage("alphaGo", "/Users/gene/bin/misc/stock/nature-go.jpg", 0.18, 0.7, 0.5, 0.3);
    s->addImage("self-driving car dash", "/Users/gene/bin/misc/stock/sdc-dash.jpg", 0.44, 0.0, 0.4, 0.5);
    s->addImage("self-driving car", "/Users/gene/bin/misc/stock/self-driving-car.jpg", 0.72, 0.31, 0.3, 0.5);
    s->addText(h5, ofColor(0), "http://recognize-speech.com/acoustic-model/knn/comparing-different-architectures/convolutional-neural-networks-cnns", 0.01, 0.08, 0.5);
    s->addText(h5, ofColor(0), "https://twitter.com/memotv/status/616777588283965440/photo/1", 0.51, 0.6, 0.4);
    s->addText(h5, ofColor(0), "http://www.informationweek.com/it-life/googles-self-driving-car-busted-for-driving-too-slow/d/d-id/1323140", 0.35, 0.1, 0.5);
    s->addText(h5, ofColor(0), "https://infinityleap.com/the-cars-have-eyes-nvidia-unveils-self-driving-car-system-at-ces-2016/", 0.35, 0.12, 0.45);
    s->addText(h5, ofColor(0), "http://www.nature.com/nature/journal/v529/n7587/full/nature16961.html", 0.35, 0.4, 0.5);
    s->addText(h5, ofColor(0), "https://vk.com/doc-44016343_437229031?dl=56ce06e325d42fbc72", 0.35, 0.42, 0.5);
    
    s = slideshow.addSlide("Convnet geometry (volume interpretation)");
    s->addImage("volumes", "/Users/gene/bin/misc/stock/cnn_volumes.jpg", 0.0, 0.0, 1.0, 1.0);
    s->addText(h4, ofColor(0), "http://cs231n.stanford.edu/slides/winter1516_lecture2.pdf", 0.1, 0.05, 1);
    
    s = slideshow.addSlide("Convolution layers");
    s->addMovie("convolution", "/Users/gene/bin/misc/stock/convolution_demo.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "ml4a.github.io/dev/demos/demo_convolution.html", 0.1, 0.05, 1);
    
    s = slideshow.addSlide("Pooling layers");
    s->addImage("pooling", "/Users/gene/bin/misc/stock/cnn_pool.jpg", 0.0, 0.2, 0.5, 0.7);
    s->addImage("Max-pooling", "/Users/gene/bin/misc/stock/cnn_maxpool.jpg", 0.5, 0.2, 0.5, 0.7);
    s->addText(h4, ofColor(0), "http://cs231n.github.io/convolutional-networks/", 0.1, 0.01, 0.99);
    
    s = slideshow.addSlide("CNN demo");
    CcvForwardPassDemo *ccvd = new CcvForwardPassDemo(s, "ccv", 0, 0, 1, 1);
    s->addAction(ccvd);
    
//    s = slideshow.addSlide("Confusion matrix");
//    s->addImage("wig2", "/Users/gene/bin/misc/stock/cifar_confusion.png", 0.0, 0.05, 1, 0.95);
//    s->addText(h4, ofColor(0), "ml4a.github.io/dev/demos/cifar_confusion.html", 0.0, 0.01, 1);
//    
//    s = slideshow.addSlide("Which pixels affect the activations?");
//    s->addImage("ZF activation strength", "/Users/gene/bin/misc/stock/activation_strength.png", 0, 0, 1, 1);
//    s->addText(h4, ofColor(0), "http://arxiv.org/abs/1311.2901", 0.0, 0.01, 1);
//    
//    s = slideshow.addSlide("Visualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]");
//    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l1.png", 0.0, 0.1, 1, 0.8);
//    s->addText(h3, ofColor(0), "Image patches which respond most to filters", 0.2, 0.0, 1.0);
//    
//    s = slideshow.addSlide("Visualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]");
//    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l2.png", 0.0, 0.0, 0.5, 1);
//    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l3.png", 0.5, 0.0, 0.5, 1);
//    s->addText(h3, ofColor(0), "Image patches which respond most to filters", 0.2, 0.0, 1.0);
//    
    
    
    s = slideshow.addSlide("Notebooks");
    s->addText(h3, ofColor(0), " - Feature extraction & reverse image search", 0.1, 0.1, 0.8);
    s->addText(h3, ofColor(0), " - Generating an image t-SNE", 0.1, 0.2, 0.8);
    s->addText(h3, ofColor(0), " - Maybe? shortest path between images", 0.1, 0.3, 0.8);
    s->addText(h3, ofColor(0), " - Practical: reinforcement learning & game AI", 0.1, 0.4, 0.8);
    s->addText(h3, ofColor(0), " - If time: survey of deep learning stuff?", 0.1, 0.5, 0.8);
    s->addText(h3, ofColor(0), " - Overview of ml4a resources", 0.1, 0.6, 0.8);

}


