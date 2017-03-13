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
    string weightfile = "/Users/gene/Downloads/yolo9000.weights";
    string namesfile = ofToDataPath( "cfg/9k.names" );
    darknet.init( cfgfile, weightfile, namesfile );
    
    // Ccv
    //ccv.setup("/Users/gene/bin/misc/ccv/image-net-2012.sqlite3");
    
    // background functions
    slideshow.setBackgroundFunction(this, &ofApp::drawBgWhite);
    
    // before loading slides
    //slideshow.loadFromExported();
    
    // CONTENT
    WorkshopStrelkaIntro();
    WorkshopStrelkaOverviewML();
    
    // after loading slides
    slideshow.setContentRectangle(20, 56, ofGetWidth()-40, ofGetHeight()-56);
    slideshow.printStats();
    slideshow.wrapNotes();
    slideshow.preloadAssets();
    //slideshow.exportAssets();
    //slideshow.exportScreenshots();
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
        }
    }
    if (!foundUsbCam) {
        ofLog(OF_LOG_NOTICE, "No usb cam found");
    }
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

//--------------------------------------------------------------
void ofApp::WorkshopStrelkaOverviewML(){
    
    s = slideshow.addSlide("Machine learning");
    s->addImage("imagenet", "/Users/gene/bin/misc/stock/machine-learning.png", 0.0, 0.05, 0.4, 0.9);
    s->addImage("imagenet", "/Users/gene/bin/misc/stock/Linear_regression.png", 0.41, 0.05, 0.6, 0.9);
    
    s = slideshow.addSlide("Backpropaganda");
    s->addImage("invest", "/Users/gene/bin/misc/stock/hype-investment.jpg", 0.42, 0.0, 0.59, 0.7);
    s->addImage("invest", "/Users/gene/bin/misc/stock/ILSVRC.png", 0.0, 0.05, 0.4, 0.4);
    s->addImage("invest", "/Users/gene/bin/misc/ILSVRC-nvidia.png", 0.0, 0.55, 0.4, 0.4);
    s->addText(h3, ofColor(80), "\"Machine learning is a core, transformative way by which we’re rethinking everything we’re doing,\" - Sundar Pichai, Google CEO", 0.45, 0.7, 0.4);
    
    s = slideshow.addSlide("Applications of convnets");
    s->addImage("speech processing", "/Users/gene/bin/misc/stock/cnn-speech.png", 0.0, 0.0, 0.33, 0.5);
    s->addImage("alphaGo", "/Users/gene/bin/misc/stock/nature-go.jpg", 0.1, 0.52, 0.5, 0.5);
    s->addImage("self-driving car dash", "/Users/gene/bin/misc/stock/sdc-dash.jpg", 0.44, 0.0, 0.4, 0.5);
    s->addImage("self-driving car", "/Users/gene/bin/misc/stock/self-driving-car.jpg", 0.72, 0.31, 0.3, 0.5);
    s->addText(h5, ofColor(0), "http://recognize-speech.com/acoustic-model/knn/comparing-different-architectures/convolutional-neural-networks-cnns", 0.01, 0.08, 0.5);
    s->addText(h5, ofColor(0), "http://www.informationweek.com/it-life/googles-self-driving-car-busted-for-driving-too-slow/d/d-id/1323140", 0.35, 0.1, 0.5);
    s->addText(h5, ofColor(0), "https://infinityleap.com/the-cars-have-eyes-nvidia-unveils-self-driving-car-system-at-ces-2016/", 0.35, 0.12, 0.45);
    s->addText(h5, ofColor(0), "http://www.nature.com/nature/journal/v529/n7587/full/nature16961.html", 0.35, 0.4, 0.5);
    s->addText(h5, ofColor(0), "https://vk.com/doc-44016343_437229031?dl=56ce06e325d42fbc72", 0.35, 0.42, 0.5);

    s = slideshow.addSlide("Applications of convnets");
    s->addImage("karpathy slides", "/Users/gene/bin/misc/stock/karpathy-convnets-slide.png", 0, 0, 1, 0.95);
    s->addText(h5, ofColor(0), "https://www.youtube.com/watch?v=u6aEYuemt0M&t=8s", 0.1, 0.95, 0.9);
    
    s = slideshow.addSlide("Dense captioning (Li, Karpathy, Johnson)");
    s->addImage("densecap", "/Users/gene/bin/misc/stock/rnn/densecap.png", 0, 0.06, 1, 0.94);
    s->addText(h4, ofColor(0), "http://cs.stanford.edu/people/karpathy/densecap/", 0.01, 0.01, 0.99);

    s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
    DarknetScreenGrabDemo *dnsgd = new DarknetScreenGrabDemo(s, "Darknet Demo", 0, 0, 1, 1);
    dnsgd->setDarknetReference(&darknet);
    s->addAction(dnsgd);
    
    s = slideshow.addSlide("Deep learning community");
    s->addImage("invest", "/Users/gene/bin/misc/stock/arxiv.png", 0.0, 0.0, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/torch.png", 0.0, 0.33, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/keras.png", 0.0, 0.66, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/kaggle.png", 0.5, 0.0, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/twitter.png", 0.5, 0.33, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/reddit-icon.png", 0.5, 0.66, 0.45, 0.3);

    s = slideshow.addSlide("Critical issues in AI");
    s->addImage("napalm", "/Users/gene/bin/misc/stock/napalmgirl_censoredfb.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("drones", "/Users/gene/bin/misc/stock/trumpdrone.jpeg", 0.0, 0.5, 0.5, 0.5);
    s->addImage("pred policing", "/Users/gene/bin/misc/propublica-recidivism.png", 0.5, 0.5, 0.5, 0.5);
    s->addImage("flash crash", "/Users/gene/Pictures/Screenshots/flashcrash_tweet.png", 0.5, 0.0, 0.5, 0.5);

    s = slideshow.addSlide("Neural networks");
    s->addImage("imagenet", "/Users/gene/bin/misc/stock/neural-net-diagram.jpg", 0.2, 0.05, 0.6, 0.6);
    s->addImage("imagenet", "/Users/gene/bin/misc/stock/neural-net-equation.png", 0.3, 0.65, 0.4, 0.15);
    s->addText(h3, ofColor(0), "Solved with gradient descent via backpropagation", 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Classifying handwritten numbers");
    s->addImage("mnist", "/Users/gene/bin/misc/mnist-net.png", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Training our neural network");
    s->addImage("mnist1", "/Users/gene/bin/misc/stock/mnist-forward-pass-1.png", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("mnist3", "/Users/gene/bin/misc/stock/mnist-forward-pass-3.png", 0, 0, 1, 1);

    s = slideshow.addSlide("Training our neural network");
    s->addMovie("mnist", "/Users/gene/bin/misc/stock/mnist_weights_demo.mp4", true, 0, 0, 1, 1);

    
    s = slideshow.addSlide("Autoencoders");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder.png", 0, 0, 1, 0.3);
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder_net.png", 0, 0.3, 1, 0.65);
    s->addText(h4, ofColor(0), "world's most expensive identity function", 0.01, 0.93, 0.8);
    
    s = slideshow.addSlide("Neual nets hallucinating");
    s->addMovie("dcgan", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0.026, 0.5, 0.47);
    s->addImage("deepdream", "/Users/gene/bin/misc/stock/building-dreams.png", 0, 0.515, 0.5, 0.48);
    s->addImage("stylenet", "/Users/gene/bin/misc/stock/stylenet-original.png", 0.5, 0.53, 0.5, 0.47);
    s->addImage("synthesizing original", "/Users/gene/bin/misc/stock/synthesizing-original.jpg", 0.5, 0.025, 0.5, 0.48);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=QYcKCGdZvq4", 0.01, 0.0, 1.0);
    s->addText(h5, ofColor(0), "research.googleblog.com/2015/06/inceptionism-going-deeper-into-neural.html", 0.002, 0.475, 1.0);
    s->addText(h4, ofColor(0), "https://arxiv.org/abs/1508.06576", 0.6, 0.51, 1.0);
    s->addText(h4, ofColor(0), "http://www.evolvingai.org/synthesizing", 0.6, 0.0, 1.0);

    s = slideshow.addSlide("Deep Generator Networks");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/DGN_architecture.jpg", 0.0, 0.1, 1, 0.41);
    s->addImage("classvis", "/Users/gene/bin/misc/stock/class-synthesis-deepgen.png", 0.0, 0.52, 1, 0.48);
    s->addText(h4, ofColor(0), "Nguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.15, 0.01, 1.0);

    s = slideshow.addSlide("DGN CaffeNet");
    s->addScrollableImage("classvis", "/Users/gene/bin/synthesizing/synthesizing-caffenet-tSNE.png", 0, 0, 1, 1);

    s = slideshow.addSlide("DGN convergence");
    ofxPPMovie *mov = s->addMovie("cheeseburger", "/Users/gene/bin/synthesizing/cheeseburgernew.mov", false, 0.02, 0.1, 0.46, 0.8);
    mov->setLoop(false);
    ofxPPMovie *mov2 = s->addMovie("teapot", "/Users/gene/bin/synthesizing/teapotnew.mov", false, 0.52, 0.1, 0.46, 0.8);
    mov2->setLoop(false);
    
    s = slideshow.addSlide("DGN (buttes)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/buttes.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("DGN (boathouses)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/boathouses.png", 0.025, 0.025, 0.95, 0.95);

    s = slideshow.addSlide("Image-to-Image Translation with Conditional Adversarial Nets");
    s->addImage("fb", "/Users/gene/bin/pix2pix/teaser_v3a.png", 0.0, 0.04, 1.0, 0.96);
    s->addText(h3, ofColor(100), "phillipi.github.io/pix2pix/", 0.02, 0.00, 0.8);

}

//--------------------------------------------------------------
void ofApp::WorkshopStrelkaNeuralNets(){
    
    s = slideshow.addSlide("An artificial neuron");
    s->addImage("neural net", "/Users/gene/bin/misc/stock/artificial_neuron.png", 0.15, 0.15, 0.7, 0.7);
    
    s = slideshow.addSlide("Forward pass");
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
    
    
    
    s = slideshow.addSlide("Autoencoders");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder.png", 0, 0, 1, 0.3);
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder_net.png", 0, 0.3, 1, 0.65);
    s->addText(h4, ofColor(0), "world's most expensive identity function", 0.01, 0.93, 0.8);
    // samples left -> right
    
    s = slideshow.addSlide("MNIST variational autoencoder");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/mnist_VAE.png", 0, 0.1, 1, 0.8);
    s->addText(h4, ofColor(0), "https://jmetzen.github.io/2015-11-27/vae.html", 0.01, 0.0, 0.9);
    
    //    s = slideshow.addSlide("Autoencoders trained on celebrities faces");
    //    s->addImage("autoencoder", "/Users/gene/bin/autoencoders/_Classes.png", 0, 0, 1, 1);
    //    s->addBreakpoint();
    //    s->addImage("autoencoder", "/Users/gene/bin/autoencoders/_Attractive.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Deep convolutional generative adversarial network");
    s->addImage("Mona Lisa", "/Users/gene/bin/misc/stock/lsun_bedrooms_five_epoch_samples.png", 0.0, 0.2, 1.0, 0.8);
    s->addText(h4, ofColor(0), "Alec Radford, Luke Metz, Soumith Chintala", 0.1, 0.11, 0.8);
    s->addText(h4, ofColor(0), "arxiv.org/abs/1511.06434]", 0.1, 0.05, 0.8);
    s->addText(h4, ofColor(0), "these bedrooms aren't real", 0.1, 0.95, 0.8);
    
    s = slideshow.addSlide("Deep convolutional generative adversarial network");
    s->addImage("Mona Lisa", "/Users/gene/bin/misc/stock/lsun_bedrooms_five_epochs_interps.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Deep convolutional generative adversarial network");
    s->addImage("Mona Lisa", "/Users/gene/bin/misc/stock/googsearch_dcgan.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Bedroom hallucination");
    s->addImage("Soumith bedrooms", "/Users/gene/bin/misc/stock/dcgan_soumith_bedrooms.png", 0, 0.1, 1, 0.9);
    s->addText(h4, ofColor(0), "[twitter.com/amiconfusediam/status/673642977781293056]", 0.1, 0, 1);
    
    s = slideshow.addSlide("Deep convolutional generative adversarial network");
    s->addImage("Mona Lisa", "/Users/gene/bin/misc/stock/faces_128_filter_samples.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Arithmetic on generated faces");
    s->addImage("smiling arithmetic", "/Users/gene/bin/misc/stock/faces_arithmetic_collage1.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Putting on sunglasses");
    s->addImage("sunglasses", "/Users/gene/bin/misc/stock/faces_arithmetic_collage2.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Interpolating faces");
    s->addMovie("mymov2", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Generating numbers");
    s->addImage("MNIST (real)", "/Users/gene/bin/misc/stock/mnist_real.png", 0, 0.05, 1, 0.45);
    s->addImage("MNIST (DCGAN)", "/Users/gene/bin/misc/stock/mnist_cond_conv_gan_samples.png", 0, 0.55, 1, 0.45);
    s->addText(h4, ofColor(0), "MNIST (real)", 0.2, 0.0, 0.8);
    s->addText(h4, ofColor(0), "MNIST (DCGAN)", 0.2, 0.5, 0.8);
    
    s = slideshow.addSlide("Interpolating numbers");
    s->addMovie("MNIST interpolations", "/Users/gene/bin/dcgan/summary/digits.mov", true, 0.2, 0.1, 0.6, 0.6);
    
    s = slideshow.addSlide("A Book from the Sky");
    s->addMovie("matrix", "/Users/gene/bin/dcgan/summary/matrix.mp4", true, 0.44, 0.4, 0.7, 0.6);
    s->addImage("xu bing", "/Users/gene/bin/dcgan/summary/a_book_from_the_sky.jpg", 0.0, 0.0, 0.45, 0.8);
    s->addMovie("loop", "/Users/gene/bin/dcgan/summary/longloop.mp4", true, 0.5, 0.0, 0.5, 0.5);
    
    s = slideshow.addSlide("Actuals");
    s->addScrollableImage("Actuals", "/Users/gene/bin/dcgan/summary/actual.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Fake (R) + Real (L)");
    s->addImage("Mona Lisa", "/Users/gene/bin/dcgan/summary/fakereal.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Generated characters");
    s->addScrollableImage("Mona Lisa", "/Users/gene/bin/dcgan/summary/long_gen_all_chars.png", 0.25, 0.0, 0.5, 1.0);
    
    s = slideshow.addSlide("Class conditional space");
    s->addScrollableImage("Interpolating characters", "/Users/gene/Web/Home/images/a-book-from-the-sky/banner.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Loops around latent space");
    s->addMovie("zloops", "/Users/gene/bin/dcgan/summary/zloops.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Character interpolations");
    s->addMovie("interplations", "/Users/gene/bin/dcgan/summary/interpolations.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Radical interpolations");
    s->addText(h3, ofColor(0), "interpolations across characters sharing the same radical often appear to preserve it", 0.1, 0.0, 0.8);
    s->addMovie("radical interpolations", "/Users/gene/bin/dcgan/summary/radinterpolation.mp4", true, 0, 0.2, 1, 0.8);
    
    s = slideshow.addSlide("DCGAN flowers");
    s->addImage("flowers", "/Users/gene/bin/dcgan/public/07_flowers.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://twitter.com/vintermann/status/675599478494208000", 0, 0, 1);
    
    s = slideshow.addSlide("DCGAN Manga");
    s->addImage("manga 1", "/Users/gene/bin/dcgan/public/07_manga_sample1.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://github.com/mattya/chainer-DCGAN", 0, 0, 1);
    
    s = slideshow.addSlide("DCGAN Manga interpolations");
    s->addImage("manga 2", "/Users/gene/bin/dcgan/public/07_manga_sample2.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://github.com/mattya/chainer-DCGAN", 0, 0, 1);
    
    
    s = slideshow.addSlide("Super-resolution => Deblurring");
    s->addImage("deblur", "/Users/gene/bin/misc/super-resolution-ground-truth.jpg", 0.0, 0.2, 1.0, 0.75);
    s->addText(h3, ofColor(0), "https://arxiv.org/abs/1702.00783", 0.1, 0.01, 0.8);
    
    
    s = slideshow.addSlide("Deep Generator Networks");
    s->addImage("classvis", "/Users/gene/bin/misc/stock/class-synthesis-deepgen.png", 0.0, 0.2, 1, 0.8);
    s->addText(h4, ofColor(0), "Nguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.15, 0.1, 1.0);
    s->start();
    
    s = slideshow.addSlide("Deep Generator Networks (Places365)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/new_classes.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("DGN (buttes)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/buttes.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("Neural Doodle (semantic style transfer) by Alex Champandard");
    s->addImage("Neural doodle", "/Users/gene/bin/misc/stock/neural-doodle2.png", 0, 0.2, 1, 0.8);
    s->addText(h4, ofColor(0), "http://arxiv.org/pdf/1603.01768v1.pdf", 0.1, 0.0, 0.8);
    s->addText(h4, ofColor(0), "https://github.com/alexjc/neural-doodle", 0.1, 0.05, 0.8);
    
    s = slideshow.addSlide("Image analogies");
    s->addImage("Analogies", "/Users/gene/bin/misc/stock/trump-image-analogy.jpg", 0, 0.15, 1, 0.85);
    s->addText(h4, ofColor(0), "http://www.mrl.nyu.edu/projects/image-analogies/index.html", 0.1, 0.0, 0.8);
    s->addText(h4, ofColor(0), "https://github.com/awentzonline/image-analogies", 0.1, 0.05, 0.8);
    
    s = slideshow.addSlide("Super-resolution");
    s->addImage("Super-resolution", "/Users/gene/bin/misc/stock/superresolution.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "https://github.com/nagadomi/waifu2x", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("Super-resolution => Deblurring");
    s->addImage("deblur", "/Users/gene/bin/misc/super-resolution-ground-truth.jpg", 0.0, 0.2, 1.0, 0.75);
    s->addText(h3, ofColor(0), "https://arxiv.org/abs/1702.00783", 0.1, 0.01, 0.8);
    
    s = slideshow.addSlide("Colorization");
    s->addImage("Colorization", "/Users/gene/bin/misc/colorization/example_results.png", 0, 0.1, 1, 0.9);
    s->addText(h4, ofColor(0), "http://hi.cs.waseda.ac.jp/~iizuka/projects/colorization/en/", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("Invisible Cities");
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/milan_style_transfer_x4.jpg", 0.0, 0.04, 1, 0.96);
    s->addText(h3, ofColor(100), "opendot.github.io/ml4a-invisible-cities/", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("Image-to-Image Translation with Conditional Adversarial Nets");
    s->addImage("fb", "/Users/gene/bin/pix2pix/teaser_v3a.png", 0.0, 0.04, 1.0, 0.96);
    s->addText(h3, ofColor(100), "phillipi.github.io/pix2pix/", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("Reconstructing Mapbox tiles");
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/venice_reconstructed_all.jpg", 0.0, 0, 1, 1);
    
    s = slideshow.addSlide("City style transfer");
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/la_x_venice.png", 0.0, 0.0, 1.0, 0.5);
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/milan_x_venice.jpg", 0.0, 0.5, 1.0, 0.5);
    
    s = slideshow.addSlide("City style transfer");
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/milan_x_venice_la.jpg", 0.0, 0.0, 1.0, 1.0);
    
    s = slideshow.addSlide("Handrawn satellite imagery");
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/handdrawn1.jpg", 0.0, 0.0, 1.0, 0.5);
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/handdrawn2.jpg", 0.0, 0.5, 1.0, 0.5);
    
    s = slideshow.addSlide("Online drawing tool");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/invisible_cities/invisible_cities-draw.mp4", false, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Generating images from captions (Mansimov et al)");
    s->addImage("attention", "/Users/gene/bin/misc/stock/rnn/caption_to_image.png", 0, 0, 1, 0.5);
    s->addImage("attention", "/Users/gene/bin/misc/stock/rnn/caption_to_image_architecture.png", 0, 0.5, 1, 0.5);
    s->addText(h4, ofColor(0), "http://arxiv.org/abs/1511.02793", 0.01, 0.0, 0.99);
    
    s = slideshow.addSlide("Plug & Play Generative Networks");
    s->addImage("PPGN", "/Users/gene/bin/misc/ppgn_image_captioning.jpg", 0, 0.05, 1, 0.97);
    s->addText(h4, ofColor(0), "http://www.evolvingai.org/ppgn", 0.1, 0.0, 0.8);
}

//--------------------------------------------------------------
void ofApp::WorkshopStrelkaNeuralGenerativeModels(){
}

//--------------------------------------------------------------
void ofApp::WorkshopStrelkaIntro(){
    
    // intro to machine learning
    // intro to neural nets
    // intro to convnets
    // convnet applications (non generative models)
    // - deepdream, style transfer, reverse image search, object detection
    // autoencoders
    // modeling images as prob distributions and math
    //  - chalkbooard math?
    // GANs + DCGANs
    // image translation nets
    // pix2pix
    //  - pix2pix ideas and encodings

    s = slideshow.addSlide("");
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
    
//    s = slideshow.addSlide("Musical instruments (w/ Jeff Snyder)");
//    s->addImage("tweet", "/Users/gene/Web/genekogan.github.io/_site/images/birl/birl1.jpg", 0.0, 0.0, 1, 0.35);
//    s->addImage("tweet", "/Users/gene/bin/misc/Snyderphonics_Manta.jpg", 0.0, 0.365, 1, 0.64);
    
//    s = slideshow.addSlide("Generative art");
//    s->addImage("star", "/Users/gene/bin/images/stars/star-00001.png", 0, 0, 0.25, 0.5);
//    s->addImage("star", "/Users/gene/bin/images/stars/star-00004.png", 0.25, 0, 0.25, 0.5);
//    s->addImage("star", "/Users/gene/bin/images/stars/star-00005.png", 0.5, 0, 0.25, 0.5);
//    s->addImage("star", "/Users/gene/bin/images/stars/star-00010.png", 0.75, 0, 0.25, 0.5);
//    s->addImage("star", "/Users/gene/bin/images/stars/star-00014.png", 0.25, 0.5, 0.25, 0.5);
//    s->addImage("star", "/Users/gene/bin/images/stars/star-00016.png", 0.5, 0.5, 0.25, 0.5);
//    s->addImage("star", "/Users/gene/bin/images/stars/star-00011.png", 0, 0.5, 0.25, 0.5);
//    s->addImage("star", "/Users/gene/bin/images/stars/star-00022.png", 0.75, 0.5, 0.25, 0.5);
//    
    s = slideshow.addSlide("Interference patterns");
    s->addImage("interference", "/Users/gene/bin/images/interference/interference11.png", 0.0, 0, 0.33, 1);
    s->addImage("interference", "/Users/gene/bin/images/interference/interference14.png", 0.3333, 0, 0.33, 1);
    s->addImage("interference", "/Users/gene/bin/images/interference/interference12.png", 0.6666, 0, 0.33, 1);
    
//    s = slideshow.addSlide("Nature and simulation");
//    s->addMovie("simulation", "/Users/gene/bin/images/Flocking-fast.mp4", true, 0, 0, 1, 1);
    
//    s = slideshow.addSlide("Nature and simulation");
//    s->addMovie("simulation", "/Users/gene/bin/images/VertexFields2_01.29.2012.mov", true, 0, 0, 1, 1);
    
    //    s = slideshow.addSlide("Nature and simulation");
    //    s->addMovie("simulation", "/Users/gene/bin/images/Tree.mov", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Nature and simulation");
    s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/listening-to-the-ocean-20.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Nature and simulation");
    s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/listening-to-the-ocean-10.jpg", 0.505, 0, 0.5, 1);
    s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/generator5.png", 0, 0, 0.5, 1);
    
//    s = slideshow.addSlide("Visual instruments");
//    s->addMovie("genart", "/Users/gene/bin/images/instagram/bits.mp4", true, 0, 0, 0.333333, 0.5);
//    s->addMovie("genart", "/Users/gene/bin/images/instagram/constellations.mp4", true, 0.3333, 0, 0.33333, 0.5);
//    s->addMovie("genart", "/Users/gene/bin/images/instagram/subdivision_2.mp4", true, 0.66666, 0.0, 0.3333, 0.5);
//    s->addMovie("genart", "/Users/gene/bin/images/instagram/old/vert1.mp4", true, 0, 0.5, 0.333333, 0.5);
//    s->addMovie("genart", "/Users/gene/bin/images/instagram/video/cubes.mp4", true, 0.33333, 0.5, 0.333333, 0.5);
//    s->addMovie("genart", "/Users/gene/bin/images/instagram/old/polar_glitch2.mp4", true, 0.66666, 0.5, 0.333333, 0.5);
    
//    s = slideshow.addSlide("Data visualization");
//    s->addImage("genart", "/Users/gene/Web/genekogan.github.io/_site/images/audio-sculpture/audio-sculpture2.jpg", 0, 0, 0.36, 1);
//    s->addMovie("genart", "/Users/gene/bin/misc/Tennis rankings 1983-2013-HD.mp4", true, 0.4, 0, 0.61, 1);
    
    s = slideshow.addSlide("Kinect Projector Toolkit");
    s->addMovie("KPT", "/Users/gene/bin/opera-toolkit/colin-ribbons-2_nosound.mp4", true, 0.0, 0, 0.5, 0.6);
    s->addMovie("KPT", "/Users/gene/bin/kinect-projector-toolkit/Silhouettes @ Saigon Ranger 12:5:2014.mp4", true, 0.4, 0.4, 0.64, 0.62);
    
    s = slideshow.addSlide("Machine Yearning (2014)");
    s->addMovie("machine yearning", "/Users/gene/bin/machine-yearning/machine-yearning-gopro.mp4", true, 0.0, 0, 1, 1);
    
//    s = slideshow.addSlide("Opera Toolkit (2015)");
//    s->addMovie("KPT", "/Users/gene/bin/opera-toolkit/optk_sarah_v1.mp4", true, 0.0, 0, 1, 1);
    
//    s = slideshow.addSlide("Mass collaboration: EcoHacker-Build");
//    s->addImage("ecohack", "/Users/gene/bin/ecohacker-build/_mg_7093_14926714478_o.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Deep learning + art");
    s->addMovie("dcgan", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0.026, 0.5, 0.47);
    s->addImage("deepdream", "/Users/gene/bin/misc/stock/building-dreams.png", 0, 0.515, 0.5, 0.48);
    s->addImage("stylenet", "/Users/gene/bin/misc/stock/stylenet-original.png", 0.5, 0.53, 0.5, 0.47);
    s->addImage("synthesizing original", "/Users/gene/bin/misc/stock/synthesizing-original.jpg", 0.5, 0.025, 0.5, 0.48);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=QYcKCGdZvq4", 0.01, 0.0, 1.0);
    s->addText(h5, ofColor(0), "research.googleblog.com/2015/06/inceptionism-going-deeper-into-neural.html", 0.002, 0.475, 1.0);
    s->addText(h4, ofColor(0), "https://arxiv.org/abs/1508.06576", 0.6, 0.51, 1.0);
    s->addText(h4, ofColor(0), "http://www.evolvingai.org/synthesizing", 0.6, 0.0, 1.0);
    //    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/monalisa.jpg", 0.0, 0.0, 0.5, 0.59);
    //    s->addImage("Starry night", "/Users/gene/bin/_bin/style-transfer/_inputs/starrynight.jpg", 0.0, 0.6, 0.5, 0.4);
    //    s->addMovie("ML starry night", "/Users/gene/bin/style-transfer/11_demo/ml_starrynight_iterations.mp4", true, 0.5, 0.02, 0.5, 0.96);
    
    s = slideshow.addSlide("Why is a Raven like a Writing Desk?");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("AliceNet", "/Users/gene/bin/style-transfer/04_alice/Alice-Stylenet.mov", true, 0, 0, 1, 1);

    s = slideshow.addSlide("Satellite imagery generation");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/invisible_cities/invisible_cities-draw.mp4", false, 0.05, 0.05, 0.9, 0.9);

    s = slideshow.addSlide("Invisible Cities");
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/milan_style_transfer_x4.jpg", 0.0, 0.04, 1, 0.96);
    s->addText(h3, ofColor(100), "opendot.github.io/ml4a-invisible-cities/", 0.02, 0.00, 0.8);
    

}






