#include "ofApp.h"


void ofApp::ML4A(){
    s = slideshow.addSlide("Machine Learning for Artists @ ITP-NYU, Spring 2016");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("ml4a @ itp 1", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/01.mp4", true, -0.014, 0, 1.02/3.0, 0.5);//->setPositionRandom();
    s->addMovie("ml4a @ itp 2", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/02.mp4", true, 0.33, 0, 1.02/3.0, 0.5);//->setPositionRandom();
    s->addMovie("ml4a @ itp 3", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/03.mp4", true, 0.674, 0, 1.02/3.0, 0.5);//->setPositionRandom();
    s->addMovie("ml4a @ itp 4", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/04.mp4", true,  -0.014, 0.5, 1.02/3.0, 0.5);//->setPositionRandom();
    s->addMovie("ml4a @ itp 5", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/05.mp4", true,  0.33, 0.5, 1.02/3.0, 0.5);//->setPositionRandom();
    s->addMovie("ml4a @ itp 6", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/06.mp4", true,  0.674, 0.5, 1.02/3.0, 0.5);//->setPositionRandom();
    s->addText(h4, ofColor(255), "3.24 introduction, neural networks", 0.01, 0.01, 1.0/3.0);
    s->addText(h4, ofColor(255), "3.31 wekinator + applications", 0.01+1.0/3.0, 0.01, 1.0/3.0);
    s->addText(h4, ofColor(255), "4.7 convolutional neural networks", 0.01+2.0/3.0, 0.01, 1.0/3.0);
    s->addText(h4, ofColor(255), "4.14 convnet applications", 0.01, 0.51, 1.0/3.0);
    s->addText(h4, ofColor(255), "4.21 recurrent neural networks", 0.01+1.0/3.0, 0.51, 1.0/3.0);
    s->addText(h4, ofColor(255), "4.28 game AI, reinforcement learning", 0.01+2.0/3.0, 0.51, 1.0/3.0);
    s->loadAssets();

    s = slideshow.addSlide("Convolution layers");
    s->addMovie("convolution", "/Users/gene/bin/misc/stock/convolution_demo.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "ml4a.github.io/dev/demos/demo_convolution.html", 0.1, 0.05, 1);

    s = slideshow.addSlide("CNN demo");
    CcvForwardPassDemo *ccvd = new CcvForwardPassDemo(s, "ccv", 0, 0, 1, 1);
    s->addAction(ccvd);

    s = slideshow.addSlide("wig?");
    s->addImage("wig", "/Users/gene/Code/of_v0.9.0_osx_release/apps/ofxaddons-bingo/_assets/wig.png", 0.0, 0, 1, 1);

    s = slideshow.addSlide("wig?");
    s->addImage("wig2", "/Users/gene/Code/of_v0.9.0_osx_release/apps/ofxaddons-bingo/_assets/wig2.png", 0.0, 0, 1, 1);

    s = slideshow.addSlide("Convnet -> Instagram");
    CcvInstagramDemo *ccvid = new CcvInstagramDemo(s, "ccv demo", 0, 0, 1, 1);
    s->addAction(ccvid);

    s = slideshow.addSlide("Confusion matrix");
    s->addImage("wig2", "/Users/gene/bin/misc/stock/cifar_confusion.png", 0.0, 0.05, 1, 0.95);
    s->addText(h4, ofColor(0), "ml4a.github.io/dev/demos/cifar_confusion.html", 0.0, 0.01, 1);
}


void ofApp::AboutAltAI(){
    s = slideshow.addSlide("alt-AI");
    s->addText(h2, ofColor(0), "1) sfpc", 0.1, 0.2, 0.7);
    s->addText(h2, ofColor(0), "2) exhibition", 0.1, 0.3, 0.7);
    s->addText(h2, ofColor(0), "3) machine learning", 0.1, 0.4, 0.7);
    s->addText(h2, ofColor(0), "4) ml4a", 0.1, 0.5, 0.7);
    
    s = slideshow.addSlide("openframe");
    s->addText(h3, ofColor(0), "openframe.io", 0.1, 0.005, 0.7);
    s->addImage("openframe", "/Users/gene/Desktop/openframe_altai.jpg", 0, 0.1, 1, 0.8);
    
    s = slideshow.addSlide("openframe");
    s->addText(h3, ofColor(0), "openframe.io", 0.1, 0.005, 0.7);
    s->addMovie("openframe", "/Users/gene/bin/misc/stock/patricio_openframe.mp4", true, 0, 0.1, 1, 0.8);
}

void ofApp::AltAI() {
    //Intro();
    NeuralNets();
    Convnets();
    DeepDream();
    StyleTransfer();
    TSNE();
}