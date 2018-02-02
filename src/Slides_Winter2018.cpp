#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::WorkshopLapnorm(){
    
    s = slideshow.addSlide("Neural synthesis @ Spektrum, 25 Nov 2017");
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.4, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.3, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.4, 0.5);
    s->start();
    
    
    s = slideshow.addSlide("What are neural networks?");
    s->addImage("lenet", "/Users/gene/bin/misc/stock/lenet.png", 0, 0, 1, 0.4);
    s->addImage("alexnet", "/Users/gene/bin/misc/stock/alexnet2.png", 0, 0.5, 1, 0.4);
    s->addText(h3, ofColor(0), "Lenet (LeCun et al, 1998) [http://yann.lecun.com/exdb/lenet/]", 0.05, 0.4, 0.9);
    s->addText(h3, ofColor(0), "AlexNet 2012 [via https://jeremykarnowski.wordpress.com/2015/07/15/alexnet-visualization/]", 0.05, 0.92, 0.9);
    
    
    /////////////////////////////////////////////////
    // OVERVIEW OF ML4A
    
    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Workshops");
    s->addImage("rachel", "/Users/gene/bin/misc/workshops/opendot/30491978563_c7baa100d2_o.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/altai.JPG", 0.5, 0.0, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/influencers3.jpg", 0.0, 0.5, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/opendot1.jpg", 0.5, 0.5, 0.5, 0.48);
    
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
    
    s = slideshow.addSlide("Confusion matrix");
    s->addImage("wig2", "/Users/gene/bin/misc/stock/cifar_confusion.png", 0.0, 0.05, 1, 0.95);
    s->addText(h4, ofColor(0), "ml4a.github.io/dev/demos/cifar_confusion.html", 0.0, 0.01, 1);
    
    s = slideshow.addSlide("Which pixels affect the activations?");
    s->addImage("ZF activation strength", "/Users/gene/bin/misc/stock/activation_strength.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://arxiv.org/abs/1311.2901", 0.0, 0.01, 1);
    
    s = slideshow.addSlide("Visualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]");
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l1.png", 0.0, 0.1, 1, 0.8);
    s->addText(h3, ofColor(0), "Image patches which respond most to filters", 0.2, 0.0, 1.0);
    
    s = slideshow.addSlide("Visualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]");
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l2.png", 0.0, 0.0, 0.5, 1);
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l3.png", 0.5, 0.0, 0.5, 1);
    s->addText(h3, ofColor(0), "Image patches which respond most to filters", 0.2, 0.0, 1.0);
    
    
    
    
    
    
    
    s = slideshow.addSlide("\"Image generated by a convolutional neural network\"");
    s->addImage("reddit deepdream post", "/Users/gene/bin/deepdream/reddit.png", 0.0, 0.1, 0.7, 1);
    s->addImage("reddit image", "/Users/gene/bin/deepdream/_slugs.jpg", 0.45, 0, 0.55, 0.4);
    s->addText(h3, ofColor(0), "Mysteriously posted to /r/MachineLearning on June 16, 2015", 0.00, 0.0, 0.38);
    
    //    http://www.evolvingai.org/content/ai-neuroscience-understanding
    
    s = slideshow.addSlide("Google Inceptionism classvis");
    s->addImage("Deepdream classvis", "/Users/gene/bin/deepdream/paper/classvis.png", 0.0, 0.2, 1, 0.8);
    s->addText(h4, ofColor(0), "Going deeper with Inceptionism (Mordvintsev, Olah, Tyka)", 0.2, 0.0, 1.0);
    s->addText(h4, ofColor(0), "googleresearch.blogspot.com/2015/06/inceptionism-going-deeper-into-neural.html]", 0.2, 0.1, 1.0);
    
    s = slideshow.addSlide("Deepdream");
    s->addImage("Ibis", "/Users/gene/bin/deepdream/paper/ibis.png", 0.0, 0.0, 1.0, 0.65);
    s->addImage("Deepdream prototypes", "/Users/gene/bin/deepdream/paper/Funny-Animals.png", 0.0, 0.66, 1.0, 0.33);
    s->addText(h4, ofColor(0), "googleresearch.blogspot.com/2015/06/inceptionism-going-deeper-into-neural.html]", 0.04, 0.0, 1.0);
    
    s = slideshow.addSlide("Deepdream noise");
    s->addImage("Tyka noisedream 1", "/Users/gene/bin/deepdream/paper/building-dreams1.png", 0.0, 0.0, 0.5, 1.0);
    s->addImage("Tyka noisedream 2", "/Users/gene/bin/deepdream/paper/building-dreams2.png", 0.5, 0.0, 0.5, 1.0);
    s->addText(h3, ofColor(0), "Mike Tyka [mtyka.github.io]", 0.15, 0.0, 1.0);
    
    //    s = slideshow.addSlide("Deepdream: Vishnu");
    //    s->addImage("vishnu", "/Users/gene/bin/deepdream/gods/_vishnu2.jpg", 0, 0, 1, 1);
    //    s->addBreakpoint();
    //    s->addImage("vishnu deepdream", "/Users/gene/bin/deepdream/gods/vishnu(2)__12_3_1.2(1).jpg", 0, 0, 1, 1);
    //    s->addBreakpoint();
    //    s->addImage("vishnu deepdream", "/Users/gene/bin/deepdream/gods/vishnu(2)__12_3_1.2(10).jpg", 0, 0, 1, 1);
    //    s->addBreakpoint();
    //    s->addImage("vishnu deepdream", "/Users/gene/bin/deepdream/gods/vishnu(2)__12_3_1.2(23).jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Charles Monet");
    s->addImage("Monet", "/Users/gene/bin/deepdream/painters/_monet1.jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("Monet", "/Users/gene/bin/deepdream/painters/monet1(1)0002_i10_o4_os1.1_j32.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Deepdream: Egon Schiele");
    s->addImage("Schiele", "/Users/gene/bin/deepdream/painters/_schiele.jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("Schiele", "/Users/gene/bin/deepdream/painters/schiele(0)0002_i10_o4_os1.1_j32.png", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("Schiele", "/Users/gene/bin/deepdream/painters/schiele(1)0001_i10_o4_os1.1_j32.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Deepdream: Edvard Munch");
    s->addImage("Munch", "/Users/gene/bin/deepdream/painters/_scream.jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("Munch", "/Users/gene/bin/deepdream/painters/scream_0029_i10_o4_os1.4_j32.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Deepdream: Fireworks");
    s->addImage("July 4 Fireworks", "/Users/gene/bin/deepdream/fireworks/_fireworks.jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("July 4 Fireworks", "/Users/gene/bin/deepdream/fireworks/fireworks1_10_4_1.4(5).jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("July 4 Fireworks", "/Users/gene/bin/deepdream/fireworks/fireworks1a_10_8_1.4(2).jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("July 4 Fireworks", "/Users/gene/bin/deepdream/fireworks/fireworks2a_10_8_1.4(9).jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Deepdream: Lake Indawgyi");
    s->addImage("lake indawgyi", "/Users/gene/bin/deepdream/holy_places/_indawgyi_pagoda.jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("lake indawgyi deepdream", "/Users/gene/bin/deepdream/holy_places/indawgyi_pagoda_10_4_1.4(6).jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Deepdream: Jaaga");
    s->addImage("Jaaga", "/Users/gene/bin/deepdream/jaaga/_jaaga.jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("Jaaga", "/Users/gene/bin/deepdream/jaaga/jaaga_1_8_4_1.4(13).jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("Jaaga", "/Users/gene/bin/deepdream/jaaga/jaaga(2)__10_4_1.4(5).jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("Jaaga", "/Users/gene/bin/deepdream/jaaga/jaaga(2)__16_5_1.2(11).jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Deepdream: Leonardo Da Vinci");
    s->addImage("Da Vinci", "/Users/gene/bin/deepdream/painters/_davinci.jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("Da Vinci", "/Users/gene/bin/deepdream/painters/davinci_drawing(0)0002_i5_o8_os1.1_j32.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Deepzoom");
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_feedback/deepzoom.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Oscillating which layer to enhance");
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_content/deeptrain2.mp4", true, 0.0, 0.0, 0.6, 0.35);
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_prototypes/testOtherl4_1.mp4", true, 0.0, 0.35, 0.5, 0.65);
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_prototypes/makeMid_blur_2a_imovie.mp4", true, 0.4, 0.0, 0.6, 0.6);
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_feedback/theFrame7.mp4", true, 0.5, 0.5, 0.5, 0.5);
    
    
    s = slideshow.addSlide("Classvis by Mike Tyka (leatherback turtle");
    s->addImage("tyka", "/Users/gene/bin/misc/stock/mtyka_deepdream1_leatherbackturtles.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Classvis by Mike Tyka (pelican)");
    s->addImage("tyka", "/Users/gene/bin/misc/stock/mtyka_deepdream_pelican.jpg", 0, 0, 1, 1);
    
    slideshow.addSlide("Make it stop")->addImage("cappucinno", "/Users/gene/bin/deepdream/cappucinno/composite_cappucinno2a.png", 0.05, 0.05, 0.9, 0.9);
    
    
    
    
    
    
    
    ////////////////////////////////////////////////////////////
    ///// LAPNORM
    
    
    
    s = slideshow.addSlide("Channel synthesis");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/harvest.mp4", false, 0.15, 0.15, 0.7, 0.7)->setLoop(false);
    
    s = slideshow.addSlide("Channel synthesis");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/E1-115_n40_o05_r1.33.mp4", false, -0.005, 0.15, 0.5, 0.7)->setLoop(false);
    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/H5-89_n50_o09_r1.33.mp4", true, 0.3333, 0.15, 0.32, 0.7)->setLoop(false);
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/E6-63_n50_o05_r1.33.mp4", false, 0.505, 0.15, 0.5, 0.7)->setLoop(false);
    
    // low level swatches + high level swatches
    
    s = slideshow.addSlide("InceptionV3 conv2d");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-1_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-7_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-15_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-28_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-52_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A2-12_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A2-25_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A2-27_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed3a");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-8_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-9_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-20_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-31_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-0_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-26_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-36_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-44_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
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
    
    s = slideshow.addSlide("InceptionV3 mixed4b");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E1-42_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E2-91_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E3-15_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E3-17_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-0_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-16_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-17_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-33_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed4c");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F2-32_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F2-41_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F2-64_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F3-187_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F5-7_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F6-17_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F6-29_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F6-54_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed4d");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G1-9_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G1-15_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G2-36_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G2-54_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G2-86_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G3-145_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G6-2_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G6-20_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed4e");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H1-54_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H1-116_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H1-158_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H3-7_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H3-77_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H3-303_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H4-13_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H6-123_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed5a");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J1-51_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J1-198_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J2-69_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J4-8_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J5-81_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J6-16_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J6-53_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J6-109_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    //    s = slideshow.addSlide("t-SNE of favorite swatches");
    //    s->addScrollableImage("t-SNE swatches", "/Users/gene/bin/lapnorm/swatches/favorites/_all_swatches_tsne.png", 0, 0, 1, 1);
    //
    s = slideshow.addSlide("t-SNE of all ~7500 swatches");
    s->addScrollableImage("t-SNE swatches", "/Users/gene/bin/lapnorm/swatches/all/swatches-tsne_large.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/initial_experiments/frame0010 (2).png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/initial_experiments/eureka.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F6-34+G2-139_n11_o08_r1.33_cr4_b0.60.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G3-283+F3-26+H1-54_n11_o08_r1.33_cr0_b0.75.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G3-45+G1-36+H6-23_n15_o08_r1.33_cr5_b0.21.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/E6-16+L1-55+G2-76_n10_o07_r1.33.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F6-34+G6-2_n20_o07_r1.33.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/D1-152+F1-40+H5-34_n40_o07_r1.33.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/D2-13+D2-50+D5-15_n40_o07_r1.33.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F6-9+D1-27+D5-15_n10_o08_r1.33_cr3_b0.35.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/D5-15+G1-36+D1-133_n15_o08_r1.33_cr3_b0.46.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/D6-11+G1-15+D1-189_n40_o07_r1.33.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F1-78+D6-52+D1-41_n15_o07_r1.33.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/D3-92+D1-41+F5-40_n15_o08_r1.33_cr4_b0.42.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G1-85+E6-0+F6-54_n20_o07_r1.33.png", 0, 0, 1, 1);
    // s = slideshow.addSlide("Mixing gradients");
    // s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/H3-136+F6-41+H6-72_n40_o07_r1.33.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/large.jpeg", 0, 0, 1, 1);
    
    //    D6-12+D3-92+F1-94_n15_o08_r1.33_cr6_b0.22.png
    //    E2-78+F2-32+G2-38_n10_o08_r1.33_cr5_b0.33.png
    
    
    s = slideshow.addSlide("Feedback and gradient interpolation");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/mask_videos/F1-40+J1-42+G1-34+D6-31+G1-62+H1-225_n16_o04_r1.31_1.05,1.50,1.10.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Feedback and gradient interpolation");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/mask_videos/G2-139+C1-81_n14_o08_r1.30_cr4_b0.05_1.00,1.00,1.00.mp4", true, 0, 0, 1, 1);
    
    //    s = slideshow.addSlide("Feedback and gradient interpolation");
    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/fullfades/hframes2.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Feedback and gradient interpolation");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/fullfades/K18-178+L4-61+K19-55+K07-45+K18-35_m3_b4_o5_i36_c0_s10_norm1.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Moving gradients around");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/testframes2_.mp4", true, 0, 0, 1, 1);
    
    //    s = slideshow.addSlide("Moving gradients around");
    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/testframes9b0_.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Loops");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/loops/_lapnom-loops.mp4", true, 0, 0, 1, 1)->setLoop(true);
    
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
    
    
    
    
    
    
}


void ofApp::PPLLondon() {
    
    s = slideshow.addSlide("PPL Meetup, 16 Nov 2017");
    s->addText(h2, ofColor(225), "@genekogan", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(225), "genekogan.com", 0.1, 0.4, 0.5);
    s->addText(h2, ofColor(225), "ml4a.github.io", 0.6, 0.3, 0.5);
    s->addText(h2, ofColor(225), "@ml4a_", 0.6, 0.4, 0.5);
    s->start();
    
    s = slideshow.addSlide("Music information retrieval");
    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
    s->addImage("genre VA", "/Users/gene/bin/misc/sourcetone/genre-AvgVA.jpg", 0.0, 0.4, 0.42, 0.6);
    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
    
    //    s = slideshow.addSlide("Gestural Instruments");
    //    s->addMovie("leap", "/Users/gene/bin/misc/LeapMotion + SuperCollider demo-SD.mp4", true, 0.1, 0.1, 0.8, 0.8);
    //    s->addText(h3, ofColor(255), "https://github.com/genekogan/LeapMotion-SuperCollider-Instruments", 0.05, 0, 0.85);
    
    s = slideshow.addSlide("Musical instruments (w/ Jeff Snyder)");
    s->addImage("birl", "/Users/gene/bin/misc/birl/birl1.jpg", 0.0, 0.0, 1, 0.35);
    s->addImage("manta", "/Users/gene/bin/misc/Snyderphonics_Manta.jpg", 0.0, 0.355, 0.55, 0.65);
    s->addImage("birl", "/Users/gene/bin/misc/birl/birl_interface.png", 0.5505, 0.355, 0.45, 0.65);
    
    s = slideshow.addSlide("Physical models");
    s->addImage("manta", "/Users/gene/bin/misc/stock/phLUTe.jpg", 0.0, 0.0, 0.5, 0.7);
    s->addImage("manta", "/Users/gene/bin/misc/stock/igdis.jpg", 0.5, 0.3, 0.5, 0.7);
    s->addText(h3, ofColor(255), "IGDIS (reconstruction of Greek prosody)\nhttp://users.teicrete.gr/taxd/06/greek_singer/greek_singer_eng.htm", 0.05, 0, 0.85);
    
    s = slideshow.addSlide("From deep listening to deep learning");
    s->addImage("lenet", "/Users/gene/bin/misc/stock/lenet.png", 0, 0, 1, 0.4);
    s->addImage("alexnet", "/Users/gene/bin/misc/stock/alexnet2.png", 0, 0.5, 1, 0.4);
    s->addText(h3, ofColor(255), "Lenet (LeCun et al, 1998) [http://yann.lecun.com/exdb/lenet/]", 0.05, 0.4, 0.9);
    s->addText(h3, ofColor(255), "AlexNet 2012 [via https://jeremykarnowski.wordpress.com/2015/07/15/alexnet-visualization/]", 0.05, 0.92, 0.9);
    
    s = slideshow.addSlide("Neural nets for speech recognition");
    s->addImage("speech processing", "/Users/gene/bin/misc/stock/cnn-speech.png", 0.0, 0.1, 1.0, 0.9);
    s->addText(h3, ofColor(255), "http://recognize-speech.com/acoustic-model/knn/comparing-different-architectures/convolutional-neural-networks-cnns", 0.05, 0, 0.85);
    
    s = slideshow.addSlide("RNNs/LSTMs + GRUV, 2015");
    s->addImage("nn_simple", "/Users/gene/bin/misc/stock/rnn/nn_simple.png", 0.0, 0.01, 0.52, 0.4);
    s->addImage("rnn_complex", "/Users/gene/bin/misc/stock/rnn/rnn_simple.png", 0.0, 0.49, 0.25, 0.4);
    s->addImage("rnn_simple", "/Users/gene/bin/misc/stock/rnn/rnn_complex.png", 0.27, 0.49, 0.25, 0.4);
    s->addText(h3, ofColor(255), "Feedforward neural net", 0.02, 0.0, 0.5);
    s->addText(h3, ofColor(255), "Recurrent neural net", 0.02, 0.4, 0.5);
    s->addSound("Chopin LSTM", "/Users/gene/bin/music-learning/chopin_lstm.wav", h4, false, false, 0.6, 0.4, 0.33, 0.04);
    s->addSound("Coltrane LSTM", "/Users/gene/bin/music-learning/bluetrain.wav", h4, false, false, 0.6, 0.3, 0.33, 0.04);
    s->addSound("Vibraphone (original)", "/Users/gene/bin/music-learning/vibraphon.aiff", h4, false, false, 0.6, 0.6, 0.33, 0.04);
    s->addSound("Vibraphone LSTM", "/Users/gene/bin/music-learning/hypnotic_vibes.wav", h4, false, false, 0.6, 0.68, 0.33, 0.04);
    
    s = slideshow.addSlide("WaveNets");
    s->addText(h3, ofColor(255), "https://deepmind.com/blog/wavenet-generative-model-raw-audio/", 0.05, 0.01, 0.9);
    s->addMovie("wavenet zoom", "/Users/gene/bin/wavenet/blogpost/wavenet-zoom.mp4", true, 0.05, 0.1, 0.4, 0.4);
    s->addMovie("wavenet conv", "/Users/gene/bin/wavenet/blogpost/wavenet-dilated-convolutions.mp4", true, 0.55, 0.1, 0.4, 0.4);
    s->addSound("wavenet 1", "/Users/gene/bin/wavenet/blogpost/wavenet-1.wav", h4, false, false, 0.05, 0.6, 0.25, 0.04);
    s->addSound("wavenet 2", "/Users/gene/bin/wavenet/blogpost/wavenet-2.wav", h4, false, false, 0.05, 0.66, 0.25, 0.04);
    s->addSound("voice 1", "/Users/gene/bin/wavenet/blogpost/avocado-1.wav", h4, false, false, 0.05, 0.76, 0.25, 0.04);
    s->addSound("voice 2", "/Users/gene/bin/wavenet/blogpost/avocado-2.wav", h4, false, false, 0.05, 0.82, 0.25, 0.04);
    s->addSound("babble 1", "/Users/gene/bin/wavenet/blogpost/speaker-1.wav", h4, false, false, 0.35, 0.6, 0.25, 0.04);
    s->addSound("babble 2", "/Users/gene/bin/wavenet/blogpost/speaker-2.wav", h4, false, false, 0.35, 0.66, 0.25, 0.04);
    s->addSound("babble 3", "/Users/gene/bin/wavenet/blogpost/speaker-3.wav", h4, false, false, 0.35, 0.72, 0.25, 0.04);
    s->addSound("babble 4", "/Users/gene/bin/wavenet/blogpost/speaker-4.wav", h4, false, false, 0.35, 0.78, 0.25, 0.04);
    s->addSound("babble 5", "/Users/gene/bin/wavenet/blogpost/speaker-5.wav", h4, false, false, 0.35, 0.84, 0.25, 0.04);
    s->addSound("babble 6", "/Users/gene/bin/wavenet/blogpost/speaker-6.wav", h4, false, false, 0.35, 0.9, 0.25, 0.04);
    s->addSound("jazz 1", "/Users/gene/bin/wavenet/blogpost/sample_1.wav", h4, false, false, 0.65, 0.6, 0.25, 0.04);
    s->addSound("jazz 2", "/Users/gene/bin/wavenet/blogpost/sample_2.wav", h4, false, false, 0.65, 0.66, 0.25, 0.04);
    s->addSound("jazz 3", "/Users/gene/bin/wavenet/blogpost/sample_3.wav", h4, false, false, 0.65, 0.72, 0.25, 0.04);
    s->addSound("jazz 4", "/Users/gene/bin/wavenet/blogpost/sample_4.wav", h4, false, false, 0.65, 0.78, 0.25, 0.04);
    s->addSound("jazz 5", "/Users/gene/bin/wavenet/blogpost/sample_5.wav", h4, false, false, 0.65, 0.84, 0.25, 0.04);
    s->addSound("jazz 6", "/Users/gene/bin/wavenet/blogpost/sample_6.wav", h4, false, false, 0.65, 0.9, 0.25, 0.04);
    
    s = slideshow.addSlide("NSynth: Neural Audio Synthesis");
    s->addText(h4, ofColor(255), "https://magenta.tensorflow.org/nsynth", 0.1, 0.0, 0.8);
    s->addImage("ns", "/Users/gene/bin/misc/stock/NSynth_blog_figs_InterpolateZ.png", 0, 0.04, 1.0, 0.36);
    s->addImage("ns", "/Users/gene/bin/misc/stock/NSynth_blog_figs_Three_Reconstructions.png", 0, 0.405, 1.0, 0.61);
    
    s = slideshow.addSlide("Reverse-engineering WaveNet");
    s->addText(h3, ofColor(255), "https://github.com/ibab/tensorflow-wavenet", 0.05, 0.01, 0.9);
    s->addImage("ibab", "/Users/gene/bin/wavenet/blogpost/ibab-tensorflow.png", 0.1, 0.1, 0.8, 0.5);
    s->addSound("Il Barbiere di Siviglia wavenet", "/Users/gene/bin/wavenet/barber_25525_fadein.wav", h4, false, false, 0.25, 0.7, 0.5, 0.1);
    s->addText(h4, ofColor(255), "https://soundcloud.com/genekogan/il-barbiere-di-siviglia-wavenet", 0.26, 0.825, 0.8);
    
    s = slideshow.addSlide("SampleRNN");
    s->addText(h4, ofColor(255), "SampleRNN: An Unconditional End-to-End Neural Audio Generation Model\nMehri et al (https://arxiv.org/abs/1612.07837)", 0.01, 0.0, 0.8);
    s->addImage("ibab", "/Users/gene/bin/misc/stock/samplernn.png", 0.01, 0.1, 0.98, 0.4);
    s->addText(h4, ofColor(255), "https://github.com/richardassar/SampleRNN_torch", 0.1, 0.55, 0.8);
    s->addSound("Mozart", "/Users/gene/bin/music-learning/samplernn-mozart.mp3", h4, false, false, 0.05, 0.65, 0.25, 0.04);
    s->addSound("Tangerine Dream", "/Users/gene/bin/music-learning/samplernn-tangerinedream.mp3", h4, false, false, 0.05, 0.73, 0.25, 0.04);
    
    s = slideshow.addSlide("Symbolic approaches: Composing MIDI with LSTMs");
    s->addImage("midi-lstm", "/Users/gene/bin/misc/stock/lstm-midi.png", 0, 0, 1, 0.5);
    s->addText(h4, ofColor(255), "Composing music with recurrent neural nets (Daniel Johnson)", 0.1, 0.55, 0.99);
    s->addText(h4, ofColor(255), "http://www.hexahedria.com/2015/08/03/composing-music-with-recurrent-neural-networks/", 0.1, 0.6, 0.99);
    s->addText(h4, ofColor(255), "LSTM Realbook: Generation Jazz chord progressions (Keunwoo Choi)", 0.1, 0.7, 0.99);
    s->addText(h4, ofColor(255), "https://keunwoochoi.wordpress.com/2016/02/19/lstm-realbook/", 0.1, 0.75, 0.99);
    
    
    s = slideshow.addSlide("Generative Models");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/DGN_places_long.jpg", 0.0, 0.1, 1, 0.9);
    s->addText(h4, ofColor(255), "Deep Generator Networks\nNguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.1, 0.01, 1.0);
    
    s = slideshow.addSlide("DGN samples");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/boathouses.png", 0.0, 0.05, 0.57, 0.95);
    s->addImage("classvis", "/Users/gene/bin/synthesizing/buttes.png", 0.573, 0.05, 0.43, 0.95);
    s->addText(h4, ofColor(255), "http://genekogan.com/works/synthesizing/", 0.1, 0.00, 1.0);
    
    s = slideshow.addSlide("Natural language generation");
    s->addImage("fb", "/Users/gene/bin/misc/stock/neural-storyteller.png", 0, 0.2, 1, 0.6);
    s->addText(h3, ofColor(255), "https://github.com/ryankiros/neural-storyteller", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("StackGAN");
    s->addText(h3, ofColor(255), "Text to Photo-realistic Image Synthesis with Stacked GANs\nZhang et al (https://arxiv.org/abs/1612.03242)", 0.1, 0.0, 0.8);
    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-bird2.jpg", 0.0, 0.12, 1.0, 0.4);
    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-flower1.jpg", 0.0, 0.53, 1.0, 0.4);
    s = slideshow.addSlide("StackGAN");
    s->addText(h3, ofColor(255), "Text to Photo-realistic Image Synthesis with Stacked GANs\nZhang et al (https://arxiv.org/abs/1612.03242)", 0.1, 0.0, 0.8);
    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-bird_interp.png", 0.0, 0.15, 1.0, 0.8);
    
    s = slideshow.addSlide("PointCloud generation");
    s->addText(h3, ofColor(255), "Representation Learning and Adversarial Generation of 3D Point Clouds\nAchlioptas et all (https://arxiv.org/abs/1707.02392", 0.1, 0.0, 0.8);
    s->addImage("PointCloud", "/Users/gene/bin/misc/stock/pointcloud-GAN.png", 0.0, 0.15, 1.0, 0.8);
    
    s = slideshow.addSlide("Image-to-Image Translation with Conditional Adversarial Nets");
    s->addImage("fb", "/Users/gene/bin/pix2pix/teaser_v3a.png", 0.0, 0.04, 1.0, 0.96);
    s->addText(h4, ofColor(255), "Isola et al (phillipi.github.io/pix2pix/)", 0.02, 0.00, 0.8);
    
    
    s = slideshow.addSlide("CycleGAN");
    s->addImage("fb", "/Users/gene/bin/misc/cyclegan/cyclegan.jpg", 0.0, 0.07, 1, 0.95);
    s->addText(h3, ofColor(200), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("CycleGAN");
    s->addMovie("fb", "/Users/gene/bin/misc/cyclegan/cyclegan_zebra.mp4", true, 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(200), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("Meat puppet");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump_gene1.mp4", true, 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("pix2pix Angela Merkel");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/dattran-merkel-pix2pix.mp4", true, 0.05, 0.05, 0.9, 0.9)->setLoop(true);
    
    s = slideshow.addSlide("Lyrebird.ai");
    s->addImage("fb", "/Users/gene/bin/misc/stock/lyrebird.jpg", 0.0, 0.00, 1, 0.4);
    s->addSound("Politicians talking about Lyrebird", "/Users/gene/bin/music-learning/lyrebird/lyrebird-politicians.mp3", h4, false, false, 0.05, 0.45, 0.35, 0.04);
    s->addSound("Voice demo 11", "/Users/gene/bin/music-learning/lyrebird/lyrebird-2.mp3", h4, false, false, 0.05, 0.6, 0.35, 0.04);
    s->addText(h4, ofColor(255), "I'm very excited to participate in this year's Loop festival in Berlin!! My talk is called \"Deep Listener: Machine Learning in the Composer's Future Toolkit.\" Later, we will have a machine learning for artists workshop.", 0.05, 0.65, 0.4);
    s->addSound("Voice demo 2", "/Users/gene/bin/music-learning/lyrebird/lyrebird-1.mp3", h4, false, false, 0.55, 0.6, 0.35, 0.04);
    s->addText(h4, ofColor(255), "Oak is strong and also gives shade. The pipe began to rust while new. Thieves who rob friends deserve jail. The ripe taste of cheese improves with age. Cats and dogs each hate the other. Move the vat over the hot fire. The hog crawled under the high fence. Act on these orders with great speed.", 0.55, 0.65, 0.4);
    
    //        s = slideshow.addSlide("Face2Face");
    //        s->addMovie("Face2Face", "/Users/gene/bin/misc/stock/Face2Face - Real-time Face Capture and Reenactment of RGB Videos (CVPR 2016 Oral)-ohmajJTcpNk.mp4", true, 0.1, 0.1, 0.8, 0.8);
    //        s->addText(h4, ofColor(255), "graphics.stanford.edu/~niessner/thies2016face.html", 0.2, 0.05, 0.8);
    
    s = slideshow.addSlide("Synthesizing Obama: Learning Lip Sync from Audio (SIGGRAPH 2017)");
    s->addMovie("Face2Face", "/Users/gene/bin/misc/stock/obama-lipsync.mp4", true, 0.1, 0.1, 0.8, 0.8);
    s->addText(h4, ofColor(255), "https://grail.cs.washington.edu/projects/AudioToObama/", 0.2, 0.05, 0.8);
    
    s = slideshow.addSlide("Audio texture synthesis and style transfer");
    s->addText(h4, ofColor(255), "by Dmitry Ulyanov and Vadim Lebedev\nhttps://dmitryulyanov.github.io/audio-texture-synthesis-and-style-transfer/", 0.01, 0.0, 0.8);
    s->addImage("ibab", "/Users/gene/Writing/_Talks/S4AD-Pioneerworks/06_style-transfer/images/ml_egypt_crab_maps.jpg", 0.01, 0.1, 0.98, 0.5);
    s->addSound("Star Wars Imperial March", "/Users/gene/bin/music-learning/ulyanov/imperial.mp3", h4, false, false, 0.05, 0.65, 0.35, 0.04);
    s->addSound("Star Spangled Banner", "/Users/gene/bin/music-learning/ulyanov/usa.mp3", h4, false, false, 0.05, 0.72, 0.35, 0.04);
    s->addSound("Imperial March x Star Spangled Banner", "/Users/gene/bin/music-learning/ulyanov/imperial_usa.mp3", h4, false, false, 0.05, 0.79, 0.35, 0.04);
    s->addSound("Eminem", "/Users/gene/bin/music-learning/ulyanov/eminem.mp3", h4, false, false, 0.55, 0.65, 0.35, 0.04);
    s->addSound("Gettysburg Address", "/Users/gene/bin/music-learning/ulyanov/gettysburg.mp3", h4, false, false, 0.55, 0.72, 0.35, 0.04);
    s->addSound("Eminem x Gettysburg", "/Users/gene/bin/music-learning/ulyanov/eminem_gettysburg.mp3", h4, false, false, 0.55, 0.79, 0.35, 0.04);
    
    s = slideshow.addSlide("Demos");
    s->addMovie("andreas", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, -0.01, 0.0, 0.65, 0.7);
    s->addMovie("andreas", "/Users/gene/bin/misc/workshops/andreas-pig-classifier.mp4", true, 0.4, 0.4, 0.61, 0.6);
    s->start();
    
    s = slideshow.addSlide("Audio t-SNE (drum samples)");
    s->setBackgroundFunction(this, &ofApp::drawBgWhite);
    AudioTSNEDemo *attd2 = new AudioTSNEDemo(s, "audio t-sne", 0.0, 0, 1, 1);
    attd2->setTsnePath("/Users/gene/Teaching/ML4A/ml4a-guides/data/example-audio-tSNE-drums.json");
    s->addAction(attd2);
    
    s = slideshow.addSlide("Audio t-SNE (Queen)");
    s->setBackgroundFunction(this, &ofApp::drawBgWhite);
    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0.0, 0, 1, 1);
    s->addAction(attd);
    
    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.1, 0.1, 0.8, 0.8);
    s->start();
    
    s = slideshow.addSlide("ml4a.github.io/guides");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-guides-index.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Guides");
    s->addImage("workshop", "/Users/gene/bin/ml4a/xdegrees_samples.jpg", 0, 0, 0.5, 0.5);
    // s->addImage("workshop", "/Users/gene/bin/ml4a/nabimusic2.png", 0.51, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, 0.51, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/ml4a/neural-painter/dog-cat-interp.mp4", true, 0.0, 0.51, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/bin/tsne/tsne-animals-highlights.png", 0.51, 0.51, 0.5, 0.5);
    
    s = slideshow.addSlide("ml4a-ofx");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-ofx.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("ml4a.github.io/classes");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("ml4a @ itp", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/ml4a @ itp-nyu -- timelapse_crop.mp4", true, 0, 0, 1, 1)->setPositionRandom();
    s->loadAssets();
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-nn.png", 0, 0, 1, 1);
    
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

void ofApp::LoopFunkhaus() {
    
    
    s = slideshow.addSlide("Loop Festival, 12 Nov 2017");
    s->addText(h2, ofColor(225), "@genekogan", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(225), "genekogan.com", 0.1, 0.4, 0.5);
    s->addText(h2, ofColor(225), "ml4a.github.io", 0.6, 0.3, 0.5);
    s->addText(h2, ofColor(225), "@ml4a_", 0.6, 0.4, 0.5);
    s->addText(h2, ofColor(255), "Deep Listener: Machine Learning in the Composer's Future Toolkit", 0.0, 0.01, 0.8);
    s->start();
    
    s = slideshow.addSlide("Pauline Oliveros");
    s->addImage("fb", "/Users/gene/bin/misc/stock/Pauline-Oliveros.png", 0.05, 0.1, 0.9, 0.89);
    s->addText(h3, ofColor(200), "May 30, 1932 - Nov 24, 2016", 0.00, 0.0, 0.8);
    
    s = slideshow.addSlide("Deep Listening exercises");
    s->addImage("fb", "/Users/gene/bin/misc/stock/deeplisteningexcercise.jpg", 0.15, 0.1, 0.7, 0.8);
    
    s = slideshow.addSlide("Musique concrète + Electronic Music");
    s->addImage("fb", "/Users/gene/bin/misc/stock/pierre_henry.jpg", 0.5, 0.0, 0.5, 0.5);
    s->addImage("fb", "/Users/gene/bin/misc/stock/Electronic-music-of-Brainvoyager-Daphne-Oram-625x426.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("fb", "/Users/gene/bin/misc/stock/stockhausen.jpeg", 0.0, 0.5, 0.5, 0.5);
    s->addImage("fb", "/Users/gene/bin/misc/stock/oliveros_buchla.jpg", 0.5, 0.5, 0.5, 0.5);
    
    s = slideshow.addSlide("RCA Mark II Synthesizer");
    s->addImage("fb", "/Users/gene/bin/misc/stock/RCA-Mark-II-Sound-Synthesizer.jpg", 0.15, 0.1, 0.7, 0.8);
    
    s = slideshow.addSlide("RCA Mark II Synthesizer");
    s->addImage("fb", "/Users/gene/bin/misc/stock/buchla_brad.JPG", 0.15, 0.1, 0.7, 0.8);
    s->addText(h3, ofColor(200), "Prentis Hall @ Columbia University, New York, NY", 0.00, 0.0, 0.8);
    
    s = slideshow.addSlide("Music information retrieval");
    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
    s->addImage("genre VA", "/Users/gene/bin/misc/sourcetone/genre-AvgVA.jpg", 0.0, 0.4, 0.42, 0.6);
    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
    
    //    s = slideshow.addSlide("Gestural Instruments");
    //    s->addMovie("leap", "/Users/gene/bin/misc/LeapMotion + SuperCollider demo-SD.mp4", true, 0.1, 0.1, 0.8, 0.8);
    //    s->addText(h3, ofColor(255), "https://github.com/genekogan/LeapMotion-SuperCollider-Instruments", 0.05, 0, 0.85);
    
    s = slideshow.addSlide("Musical instruments (w/ Jeff Snyder)");
    s->addImage("manta", "/Users/gene/bin/misc/Snyderphonics_Manta.jpg", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Musical instruments (w/ Jeff Snyder)");
    s->addImage("birl", "/Users/gene/bin/misc/birl/birl1.jpg", 0.0, 0.0, 1, 0.35);
    s->addImage("birl", "/Users/gene/bin/misc/birl/birl_interface.png", 0.0, 0.355, 1, 0.65);
    
    s = slideshow.addSlide("Musical instruments (w/ Jeff Snyder)");
    s->addMovie("birl", "/Users/gene/bin/misc/birl/Pedro Eustache tries out the Snyderphonics Birl prototype.mp4", true, 0.1, 0.15, 0.8, 0.8);
    s->addText(h3, ofColor(255), "Pedtro Eustache on the Birl", 0.05, 0, 0.85);
    
    s = slideshow.addSlide("Physical models");
    s->addImage("manta", "/Users/gene/bin/misc/stock/phLUTe.jpg", 0.0, 0.0, 0.5, 0.7);
    s->addImage("manta", "/Users/gene/bin/misc/stock/igdis.jpg", 0.5, 0.3, 0.5, 0.7);
    s->addText(h3, ofColor(255), "IGDIS (reconstruction of Greek prosody)\nhttp://users.teicrete.gr/taxd/06/greek_singer/greek_singer_eng.htm", 0.05, 0, 0.85);
    
    s = slideshow.addSlide("From deep listening to deep learning");
    s->addImage("lenet", "/Users/gene/bin/misc/stock/lenet.png", 0, 0, 1, 0.4);
    s->addImage("alexnet", "/Users/gene/bin/misc/stock/alexnet2.png", 0, 0.5, 1, 0.4);
    s->addText(h3, ofColor(255), "Lenet (LeCun et al, 1998) [http://yann.lecun.com/exdb/lenet/]", 0.05, 0.4, 0.9);
    s->addText(h3, ofColor(255), "AlexNet 2012 [via https://jeremykarnowski.wordpress.com/2015/07/15/alexnet-visualization/]", 0.05, 0.92, 0.9);
    
    s = slideshow.addSlide("Neural nets for speech recognition");
    s->addImage("speech processing", "/Users/gene/bin/misc/stock/cnn-speech.png", 0.0, 0.1, 1.0, 0.9);
    s->addText(h3, ofColor(255), "http://recognize-speech.com/acoustic-model/knn/comparing-different-architectures/convolutional-neural-networks-cnns", 0.05, 0, 0.85);
    
    s = slideshow.addSlide("RNNs/LSTMs + GRUV, 2015");
    s->addImage("nn_simple", "/Users/gene/bin/misc/stock/rnn/nn_simple.png", 0.0, 0.01, 0.52, 0.4);
    s->addImage("rnn_complex", "/Users/gene/bin/misc/stock/rnn/rnn_simple.png", 0.0, 0.49, 0.25, 0.4);
    s->addImage("rnn_simple", "/Users/gene/bin/misc/stock/rnn/rnn_complex.png", 0.27, 0.49, 0.25, 0.4);
    s->addText(h3, ofColor(255), "Feedforward neural net", 0.02, 0.0, 0.5);
    s->addText(h3, ofColor(255), "Recurrent neural net", 0.02, 0.4, 0.5);
    s->addSound("Chopin LSTM", "/Users/gene/bin/music-learning/chopin_lstm.wav", h4, false, false, 0.6, 0.4, 0.33, 0.04);
    s->addSound("Coltrane LSTM", "/Users/gene/bin/music-learning/bluetrain.wav", h4, false, false, 0.6, 0.3, 0.33, 0.04);
    s->addSound("Vibraphone (original)", "/Users/gene/bin/music-learning/vibraphon.aiff", h4, false, false, 0.6, 0.6, 0.33, 0.04);
    s->addSound("Vibraphone LSTM", "/Users/gene/bin/music-learning/hypnotic_vibes.wav", h4, false, false, 0.6, 0.68, 0.33, 0.04);
    
    s = slideshow.addSlide("WaveNets");
    s->addText(h3, ofColor(255), "https://deepmind.com/blog/wavenet-generative-model-raw-audio/", 0.05, 0.01, 0.9);
    s->addMovie("wavenet zoom", "/Users/gene/bin/wavenet/blogpost/wavenet-zoom.mp4", true, 0.05, 0.1, 0.4, 0.4);
    s->addMovie("wavenet conv", "/Users/gene/bin/wavenet/blogpost/wavenet-dilated-convolutions.mp4", true, 0.55, 0.1, 0.4, 0.4);
    s->addSound("wavenet 1", "/Users/gene/bin/wavenet/blogpost/wavenet-1.wav", h4, false, false, 0.05, 0.6, 0.25, 0.04);
    s->addSound("wavenet 2", "/Users/gene/bin/wavenet/blogpost/wavenet-2.wav", h4, false, false, 0.05, 0.66, 0.25, 0.04);
    s->addSound("voice 1", "/Users/gene/bin/wavenet/blogpost/avocado-1.wav", h4, false, false, 0.05, 0.76, 0.25, 0.04);
    s->addSound("voice 2", "/Users/gene/bin/wavenet/blogpost/avocado-2.wav", h4, false, false, 0.05, 0.82, 0.25, 0.04);
    s->addSound("babble 1", "/Users/gene/bin/wavenet/blogpost/speaker-1.wav", h4, false, false, 0.35, 0.6, 0.25, 0.04);
    s->addSound("babble 2", "/Users/gene/bin/wavenet/blogpost/speaker-2.wav", h4, false, false, 0.35, 0.66, 0.25, 0.04);
    s->addSound("babble 3", "/Users/gene/bin/wavenet/blogpost/speaker-3.wav", h4, false, false, 0.35, 0.72, 0.25, 0.04);
    s->addSound("babble 4", "/Users/gene/bin/wavenet/blogpost/speaker-4.wav", h4, false, false, 0.35, 0.78, 0.25, 0.04);
    s->addSound("babble 5", "/Users/gene/bin/wavenet/blogpost/speaker-5.wav", h4, false, false, 0.35, 0.84, 0.25, 0.04);
    s->addSound("babble 6", "/Users/gene/bin/wavenet/blogpost/speaker-6.wav", h4, false, false, 0.35, 0.9, 0.25, 0.04);
    s->addSound("jazz 1", "/Users/gene/bin/wavenet/blogpost/sample_1.wav", h4, false, false, 0.65, 0.6, 0.25, 0.04);
    s->addSound("jazz 2", "/Users/gene/bin/wavenet/blogpost/sample_2.wav", h4, false, false, 0.65, 0.66, 0.25, 0.04);
    s->addSound("jazz 3", "/Users/gene/bin/wavenet/blogpost/sample_3.wav", h4, false, false, 0.65, 0.72, 0.25, 0.04);
    s->addSound("jazz 4", "/Users/gene/bin/wavenet/blogpost/sample_4.wav", h4, false, false, 0.65, 0.78, 0.25, 0.04);
    s->addSound("jazz 5", "/Users/gene/bin/wavenet/blogpost/sample_5.wav", h4, false, false, 0.65, 0.84, 0.25, 0.04);
    s->addSound("jazz 6", "/Users/gene/bin/wavenet/blogpost/sample_6.wav", h4, false, false, 0.65, 0.9, 0.25, 0.04);
    
    s = slideshow.addSlide("NSynth: Neural Audio Synthesis");
    s->addText(h4, ofColor(255), "https://magenta.tensorflow.org/nsynth", 0.1, 0.0, 0.8);
    s->addImage("ns", "/Users/gene/bin/misc/stock/NSynth_blog_figs_InterpolateZ.png", 0, 0.04, 1.0, 0.36);
    s->addImage("ns", "/Users/gene/bin/misc/stock/NSynth_blog_figs_Three_Reconstructions.png", 0, 0.405, 1.0, 0.61);
    
    s = slideshow.addSlide("Reverse-engineering WaveNet");
    s->addText(h3, ofColor(255), "https://github.com/ibab/tensorflow-wavenet", 0.05, 0.01, 0.9);
    s->addImage("ibab", "/Users/gene/bin/wavenet/blogpost/ibab-tensorflow.png", 0.1, 0.1, 0.8, 0.5);
    s->addSound("Il Barbiere di Siviglia wavenet", "/Users/gene/bin/wavenet/barber_25525_fadein.wav", h4, false, false, 0.25, 0.7, 0.5, 0.1);
    s->addText(h4, ofColor(255), "https://soundcloud.com/genekogan/il-barbiere-di-siviglia-wavenet", 0.26, 0.825, 0.8);
    
    s = slideshow.addSlide("SampleRNN");
    s->addText(h4, ofColor(255), "SampleRNN: An Unconditional End-to-End Neural Audio Generation Model\nMehri et al (https://arxiv.org/abs/1612.07837)", 0.01, 0.0, 0.8);
    s->addImage("ibab", "/Users/gene/bin/misc/stock/samplernn.png", 0.01, 0.1, 0.98, 0.4);
    s->addText(h4, ofColor(255), "https://github.com/richardassar/SampleRNN_torch", 0.1, 0.55, 0.8);
    s->addSound("Mozart", "/Users/gene/bin/music-learning/samplernn-mozart.mp3", h4, false, false, 0.05, 0.65, 0.25, 0.04);
    s->addSound("Tangerine Dream", "/Users/gene/bin/music-learning/samplernn-tangerinedream.mp3", h4, false, false, 0.05, 0.73, 0.25, 0.04);
    
    s = slideshow.addSlide("Symbolic approaches: Composing MIDI with LSTMs");
    s->addImage("midi-lstm", "/Users/gene/bin/misc/stock/lstm-midi.png", 0, 0, 1, 0.5);
    s->addText(h4, ofColor(255), "Composing music with recurrent neural nets (Daniel Johnson)", 0.1, 0.55, 0.99);
    s->addText(h4, ofColor(255), "http://www.hexahedria.com/2015/08/03/composing-music-with-recurrent-neural-networks/", 0.1, 0.6, 0.99);
    s->addText(h4, ofColor(255), "LSTM Realbook: Generation Jazz chord progressions (Keunwoo Choi)", 0.1, 0.7, 0.99);
    s->addText(h4, ofColor(255), "https://keunwoochoi.wordpress.com/2016/02/19/lstm-realbook/", 0.1, 0.75, 0.99);
    
    
    s = slideshow.addSlide("A brief digression");
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l1_nofilter.png", 0.0, 0.1, 1, 0.8);
    s->addText(h4, ofColor(255), "What neural nets look for\nVisualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]", 0.02, 0.0, 1.0);
    
    s = slideshow.addSlide("What neural networks look for");
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l2.png", 0.01, 0.15, 0.45, 0.7);
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l3.png", 0.47, 0.15, 0.52, 0.7);
    s->addText(h4, ofColor(255), "Visualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]", 0.02, 0.0, 1.0);
    
    s = slideshow.addSlide("Channel synthesis");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/harvest.mp4", false, 0.15, 0.15, 0.7, 0.7)->setLoop(false);
    
    //    s = slideshow.addSlide("Channel synthesis");
    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/E1-115_n40_o05_r1.33.mp4", false, -0.005, 0.15, 0.5, 0.7)->setLoop(false);
    //    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/H5-89_n50_o09_r1.33.mp4", true, 0.3333, 0.15, 0.32, 0.7)->setLoop(false);
    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/E6-63_n50_o05_r1.33.mp4", false, 0.505, 0.15, 0.5, 0.7)->setLoop(false);
    
    // low level swatches + high level swatches
    
    s = slideshow.addSlide("InceptionV3 conv2d");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-1_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-7_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-15_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-28_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-52_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A2-12_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A2-25_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A2-27_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed3a");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-8_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-9_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-20_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-31_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-0_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-26_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-36_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-44_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
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
    
    s = slideshow.addSlide("InceptionV3 mixed4b");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E1-42_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E2-91_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E3-15_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E3-17_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-0_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-16_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-17_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-33_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed4c");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F2-32_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F2-41_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F2-64_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F3-187_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F5-7_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F6-17_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F6-29_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F6-54_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed4d");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G1-9_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G1-15_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G2-36_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G2-54_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G2-86_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G3-145_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G6-2_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G6-20_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed4e");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H1-54_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H1-116_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H1-158_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H3-7_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H3-77_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H3-303_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H4-13_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H6-123_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/initial_experiments/eureka.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G3-283+F3-26+H1-54_n11_o08_r1.33_cr0_b0.75.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G3-45+G1-36+H6-23_n15_o08_r1.33_cr5_b0.21.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F6-9+D1-27+D5-15_n10_o08_r1.33_cr3_b0.35.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Feedback and gradient interpolation");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/nips/nips_GeneKogan_snippet.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Generative Models");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/DGN_places_long.jpg", 0.0, 0.1, 1, 0.9);
    s->addText(h4, ofColor(255), "Deep Generator Networks\nNguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.1, 0.01, 1.0);
    
    s = slideshow.addSlide("DGN samples");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/boathouses.png", 0.0, 0.05, 0.57, 0.95);
    s->addImage("classvis", "/Users/gene/bin/synthesizing/buttes.png", 0.573, 0.05, 0.43, 0.95);
    s->addText(h4, ofColor(255), "http://genekogan.com/works/synthesizing/", 0.1, 0.00, 1.0);
    
    s = slideshow.addSlide("Natural language generation");
    s->addImage("fb", "/Users/gene/bin/misc/stock/neural-storyteller.png", 0, 0.2, 1, 0.6);
    s->addText(h3, ofColor(255), "https://github.com/ryankiros/neural-storyteller", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("StackGAN");
    s->addText(h3, ofColor(255), "Text to Photo-realistic Image Synthesis with Stacked GANs\nZhang et al (https://arxiv.org/abs/1612.03242)", 0.1, 0.0, 0.8);
    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-bird2.jpg", 0.0, 0.12, 1.0, 0.4);
    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-flower1.jpg", 0.0, 0.53, 1.0, 0.4);
    s = slideshow.addSlide("StackGAN");
    s->addText(h3, ofColor(255), "Text to Photo-realistic Image Synthesis with Stacked GANs\nZhang et al (https://arxiv.org/abs/1612.03242)", 0.1, 0.0, 0.8);
    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-bird_interp.png", 0.0, 0.15, 1.0, 0.8);
    
    s = slideshow.addSlide("PointCloud generation");
    s->addText(h3, ofColor(255), "Representation Learning and Adversarial Generation of 3D Point Clouds\nAchlioptas et all (https://arxiv.org/abs/1707.02392", 0.1, 0.0, 0.8);
    s->addImage("PointCloud", "/Users/gene/bin/misc/stock/pointcloud-GAN.png", 0.0, 0.15, 1.0, 0.8);
    
    s = slideshow.addSlide("Image-to-Image Translation with Conditional Adversarial Nets");
    s->addImage("fb", "/Users/gene/bin/pix2pix/teaser_v3a.png", 0.0, 0.04, 1.0, 0.96);
    s->addText(h4, ofColor(255), "Isola et al (phillipi.github.io/pix2pix/)", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("Invisible Cities");
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/milan_style_transfer_x4.jpg", 0.0, 0.04, 1, 0.96);
    s->addText(h4, ofColor(255), "opendot.github.io/ml4a-invisible-cities/", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("CycleGAN");
    s->addImage("fb", "/Users/gene/bin/misc/cyclegan/cyclegan.jpg", 0.0, 0.07, 1, 0.95);
    s->addText(h3, ofColor(200), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("CycleGAN");
    s->addMovie("fb", "/Users/gene/bin/misc/cyclegan/cyclegan_zebra.mp4", true, 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(200), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("Meat puppet");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump_gene1.mp4", true, 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("pix2pix Angela Merkel");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/dattran-merkel-pix2pix.mp4", true, 0.05, 0.05, 0.9, 0.9)->setLoop(true);
    
    s = slideshow.addSlide("Lyrebird.ai");
    s->addImage("fb", "/Users/gene/bin/misc/stock/lyrebird.jpg", 0.0, 0.00, 1, 0.4);
    s->addSound("Politicians talking about Lyrebird", "/Users/gene/bin/music-learning/lyrebird/lyrebird-politicians.mp3", h4, false, false, 0.05, 0.45, 0.35, 0.04);
    s->addSound("Voice demo 11", "/Users/gene/bin/music-learning/lyrebird/lyrebird-2.mp3", h4, false, false, 0.05, 0.6, 0.35, 0.04);
    s->addText(h4, ofColor(255), "I'm very excited to participate in this year's Loop festival in Berlin!! My talk is called \"Deep Listener: Machine Learning in the Composer's Future Toolkit.\" Later, we will have a machine learning for artists workshop.", 0.05, 0.65, 0.4);
    s->addSound("Voice demo 2", "/Users/gene/bin/music-learning/lyrebird/lyrebird-1.mp3", h4, false, false, 0.55, 0.6, 0.35, 0.04);
    s->addText(h4, ofColor(255), "Oak is strong and also gives shade. The pipe began to rust while new. Thieves who rob friends deserve jail. The ripe taste of cheese improves with age. Cats and dogs each hate the other. Move the vat over the hot fire. The hog crawled under the high fence. Act on these orders with great speed.", 0.55, 0.65, 0.4);
    
    //        s = slideshow.addSlide("Face2Face");
    //        s->addMovie("Face2Face", "/Users/gene/bin/misc/stock/Face2Face - Real-time Face Capture and Reenactment of RGB Videos (CVPR 2016 Oral)-ohmajJTcpNk.mp4", true, 0.1, 0.1, 0.8, 0.8);
    //        s->addText(h4, ofColor(255), "graphics.stanford.edu/~niessner/thies2016face.html", 0.2, 0.05, 0.8);
    
    s = slideshow.addSlide("Synthesizing Obama: Learning Lip Sync from Audio (SIGGRAPH 2017)");
    s->addMovie("Face2Face", "/Users/gene/bin/misc/stock/obama-lipsync.mp4", true, 0.1, 0.1, 0.8, 0.8);
    s->addText(h4, ofColor(255), "https://grail.cs.washington.edu/projects/AudioToObama/", 0.2, 0.05, 0.8);
    
    s = slideshow.addSlide("Audio texture synthesis and style transfer");
    s->addText(h4, ofColor(255), "by Dmitry Ulyanov and Vadim Lebedev\nhttps://dmitryulyanov.github.io/audio-texture-synthesis-and-style-transfer/", 0.01, 0.0, 0.8);
    s->addImage("ibab", "/Users/gene/Writing/_Talks/S4AD-Pioneerworks/06_style-transfer/images/ml_egypt_crab_maps.jpg", 0.01, 0.1, 0.98, 0.5);
    s->addSound("Star Wars Imperial March", "/Users/gene/bin/music-learning/ulyanov/imperial.mp3", h4, false, false, 0.05, 0.65, 0.35, 0.04);
    s->addSound("Star Spangled Banner", "/Users/gene/bin/music-learning/ulyanov/usa.mp3", h4, false, false, 0.05, 0.72, 0.35, 0.04);
    s->addSound("Imperial March x Star Spangled Banner", "/Users/gene/bin/music-learning/ulyanov/imperial_usa.mp3", h4, false, false, 0.05, 0.79, 0.35, 0.04);
    s->addSound("Eminem", "/Users/gene/bin/music-learning/ulyanov/eminem.mp3", h4, false, false, 0.55, 0.65, 0.35, 0.04);
    s->addSound("Gettysburg Address", "/Users/gene/bin/music-learning/ulyanov/gettysburg.mp3", h4, false, false, 0.55, 0.72, 0.35, 0.04);
    s->addSound("Eminem x Gettysburg", "/Users/gene/bin/music-learning/ulyanov/eminem_gettysburg.mp3", h4, false, false, 0.55, 0.79, 0.35, 0.04);
    
    s = slideshow.addSlide("Demos");
    s->addMovie("andreas", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, -0.01, 0.0, 0.65, 0.7);
    s->addMovie("andreas", "/Users/gene/bin/misc/workshops/andreas-pig-classifier.mp4", true, 0.4, 0.4, 0.61, 0.6);
    
    s = slideshow.addSlide("Audio t-SNE (drum samples)");
    s->setBackgroundFunction(this, &ofApp::drawBgWhite);
    AudioTSNEDemo *attd2 = new AudioTSNEDemo(s, "audio t-sne", 0.0, 0, 1, 1);
    attd2->setTsnePath("/Users/gene/Teaching/ML4A/ml4a-guides/data/example-audio-tSNE-drums.json");
    s->addAction(attd2);
    
    s = slideshow.addSlide("Audio t-SNE (Queen)");
    s->setBackgroundFunction(this, &ofApp::drawBgWhite);
    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0.0, 0, 1, 1);
    s->addAction(attd);
    
    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.1, 0.1, 0.8, 0.8);
    s->start();
    
    s = slideshow.addSlide("ml4a.github.io/guides");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-guides-index.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Guides");
    s->addImage("workshop", "/Users/gene/bin/ml4a/xdegrees_samples.jpg", 0, 0, 0.5, 0.5);
    // s->addImage("workshop", "/Users/gene/bin/ml4a/nabimusic2.png", 0.51, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, 0.51, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/ml4a/neural-painter/dog-cat-interp.mp4", true, 0.0, 0.51, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/bin/tsne/tsne-animals-highlights.png", 0.51, 0.51, 0.5, 0.5);
    
    s = slideshow.addSlide("ml4a-ofx");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-ofx.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("ml4a.github.io/classes");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("ml4a @ itp", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/ml4a @ itp-nyu -- timelapse_crop.mp4", true, 0, 0, 1, 1)->setPositionRandom();
    s->loadAssets();
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-nn.png", 0, 0, 1, 1);
    
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








//--------------------------------------------------------------
void ofApp::WorkshopLoop() {
    
    s = slideshow.addSlide("Machine Learning for Artists @ Loop, 12 Nov 2017");
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
    s->start();
    
    s = slideshow.addSlide("Music information retrieval (~2008-2011)");
    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
    s->addImage("genre VA", "/Users/gene/bin/misc/sourcetone/genre-AvgVA.jpg", 0.0, 0.4, 0.42, 0.6);
    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
    
    s = slideshow.addSlide("Color of Words (2011)");
    s->addScrollableImage("color of words", "/Users/gene/bin/misc/stock/color-of-words.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Musical instruments (w/ Jeff Snyder) ~2014");
    s->addImage("tweet", "/Users/gene/Web/genekogan.github.io/_site/images/birl/birl1.jpg", 0.0, 0.0, 1, 0.35);
    s->addImage("tweet", "/Users/gene/bin/misc/Snyderphonics_Manta.jpg", 0.0, 0.365, 1, 0.64);
    
    s = slideshow.addSlide("Media arts / creative tech");
    s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/listening-to-the-ocean-10.jpg", 0.0, 0, 0.5, 0.5);
    s->addMovie("KPT", "/Users/gene/bin/opera-toolkit/colin-ribbons-2_nosound.mp4", true,0.5, 0, 0.5, 0.5);
    s->addMovie("simulation", "/Users/gene/bin/images/VertexFields2_01.29.2012.mov", true, 0.0, 0.5, 0.5, 0.5);
    s->addImage("genart", "/Users/gene/Web/genekogan.github.io/_site/images/audio-sculpture/audio-sculpture2.jpg", 0.5, 0.5, 0.5, 0.5);
    
    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("ml4a.github.io/guides");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-guides-index.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Guides");
    s->addImage("workshop", "/Users/gene/bin/ml4a/xdegrees_samples.jpg", 0, 0, 0.5, 0.5);
    //s->addImage("workshop", "/Users/gene/bin/ml4a/nabimusic2.png", 0.51, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, 0.51, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/ml4a/neural-painter/dog-cat-interp.mp4", true, 0.0, 0.51, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/bin/tsne/tsne-animals-highlights.png", 0.51, 0.51, 0.5, 0.5);
    
    s = slideshow.addSlide("Hallucinating faces with PCA");
    s->addMovie("eigenface", "/Users/gene/bin/ml4a/eigenface/eigenface_grid_8x4.mp4", true, 0, 0.06, 1, 0.95);
    s->addText(h4, ofColor(255), "https://github.com/ml4a/ml4a-guides/tree/master/notebooks/Eigenfaces.ipynb", 0.1, 0, 0.8);
    
    //    s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
    //    s->addImage("yolo", "/Users/gene/bin/ml4a/ReverseImageSearch/yolo-screen1.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Guides");
    s->addImage("workshop", "/Users/gene/bin/ml4a/nabimusic2.png", 0.51, 0, 0.5, 0.5);
    
    //s->addMovie("fb", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, 0.51, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/ml4a/neural-painter/dog-cat-interp.mp4", true, 0.0, 0.51, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/bin/tsne/tsne-animals-highlights.png", 0.51, 0.51, 0.5, 0.5);
    //
    
    //    s = slideshow.addSlide("Guides");
    //    s->addScrollableImage("animal t-sne", "/Users/gene/bin/tsne/tsne-animals.png", 0.0, 0.0, 1.0, 1.0);
    
    s = slideshow.addSlide("t-SNE :: CalTech-256 animals");
    s->addScrollableImage("t-SNE animals", "/Users/gene/bin/tsne/grid_animals2.png", 0, 0, 1, 1);
    
    //    s = slideshow.addSlide("Guides");
    //    s->addImage("workshop", "/Users/gene/bin/ml4a/xdegrees_samples.jpg", 0, 0, 0.5, 0.5);
    
    s = slideshow.addSlide("Audio + Text t-SNEs");
    s->setBackgroundFunction(this, &ofApp::drawBgWhite);
    s->addScrollableImage("wiki t-SNE", "/Users/gene/bin/tsne/wiki-tSNE.png", -0.05, 0.0, 0.72, 0.76);
    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0.48, 0.39, 0.54, 0.63);
    attd->setTsnePath("/Users/gene/Teaching/ML4A/ml4a-guides/data/example-audio-tSNE-drums.json");
    s->addAction(attd);
    attd->start();
    s->addText(h4, ofColor(255), "www.genekogan.com/works/wiki-tSNE", 0.03, 0.8, 0.7);
    s->addText(h4, ofColor(255), "github.com/ml4a/ml4a-ofx", 0.67, 0.3, 0.7);
    
    s = slideshow.addSlide("Demos");
    s->addMovie("transfer learning", "/Users/gene/bin/misc/wekinator-coffee-croissant.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("python + data science tutorials");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-guide-RIS.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("ml4a.github.io/classes");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("ml4a @ itp", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/ml4a @ itp-nyu -- timelapse_crop.mp4", true, 0, 0, 1, 1)->setPositionRandom();
    s->loadAssets();
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-nn.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-hnnat.png", 0, 0, 1, 1);
    
    
    // how neural nets work
    //  - reverse image search
    //  - image path
    //  - image t-sne
    //  - audio t-sne + text t-sne
    
    // wekinator + ableton
    
    // generative models
    //  - pix2pix
    //  - style transfer
    //  - lapnorm
    
    s = slideshow.addSlide("Tutorials");
    s->addText(h2, ofColor(0), "1) how neural nets work", 0.1, 0.2, 0.7);
    s->addText(h2, ofColor(0), "2) convnetpredictor + ableton demo", 0.1, 0.3, 0.7);
    s->addText(h2, ofColor(0), "3) Audio t-SNE", 0.1, 0.4, 0.7);
    
    s = slideshow.addSlide("Convolutional neural networks");
    s->addImage("AlexNet", "/Users/gene/bin/misc/stock/alexnet2.png", 0, 0, 1.0, 0.4);
    s->addImage("AlexNet", "/Users/gene/bin/misc/stock/alexnet-firstlayer-filters.jpg", 0.0, 0.41, 1.0, 0.6);
    
    s = slideshow.addSlide("CNN demo");
    s->setBackgroundFunction(this, &ofApp::drawBgWhite);
    CcvForwardPassDemo *ccvd = new CcvForwardPassDemo(s, "ccv", 0, 0, 1, 1);
    s->addAction(ccvd);
    
    s = slideshow.addSlide("Notebooks");
    s->addText(h2, ofColor(0), "1) feature extraction + similarity retrieval", 0.1, 0.2, 0.7);
    s->addText(h2, ofColor(0), "2) x degrees of separation", 0.1, 0.3, 0.7);
    s->addText(h2, ofColor(0), "3) t-SNE", 0.1, 0.4, 0.7);
    
    s = slideshow.addSlide("wekinator + ableton");
    s->addMovie("transfer learning", "/Users/gene/bin/misc/wekinator-coffee-croissant.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Wolfenstein Controlled by Sound");
    s->addMovie("wolfenstein", "/Users/gene/bin/ml4a/Wolfenstein 3D controlled by sound.mp4", false, 0, 0.05, 1, 0.96);
    s->addText(h4, ofColor(100), "Støj (Andreas Refsgaard & Lasse Korsgaard) https://vimeo.com/207831279", 0.00, 0.00, 0.8);
    s->start();
    
    
    s = slideshow.addSlide("pix2pix + lapnorm");
    
    
    s = slideshow.addSlide("Google Inceptionism classvis");
    s->addImage("Deepdream classvis", "/Users/gene/bin/deepdream/paper/classvis.png", 0.0, 0.2, 1, 0.8);
    s->addText(h4, ofColor(0), "Going deeper with Inceptionism (Mordvintsev, Olah, Tyka)", 0.2, 0.0, 1.0);
    s->addText(h4, ofColor(0), "googleresearch.blogspot.com/2015/06/inceptionism-going-deeper-into-neural.html]", 0.2, 0.1, 1.0);
    
    s = slideshow.addSlide("Deepdream (2015)");
    s->addImage("Ibis", "/Users/gene/bin/deepdream/paper/ibis.png", 0.0, 0.0, 1.0, 0.65);
    s->addImage("Deepdream prototypes", "/Users/gene/bin/deepdream/paper/Funny-Animals.png", 0.0, 0.66, 1.0, 0.33);
    s->addText(h4, ofColor(0), "googleresearch.blogspot.com/2015/06/inceptionism-going-deeper-into-neural.html]", 0.04, 0.0, 1.0);
    
    s = slideshow.addSlide("Deepdream (2015)");
    s->addImage("Jaaga", "/Users/gene/bin/deepdream/jaaga/_jaaga.jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("Jaaga", "/Users/gene/bin/deepdream/jaaga/jaaga_1_8_4_1.4(13).jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("Jaaga", "/Users/gene/bin/deepdream/jaaga/jaaga(2)__10_4_1.4(5).jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("Jaaga", "/Users/gene/bin/deepdream/jaaga/jaaga(2)__16_5_1.2(11).jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("da Vinci Deepdream (2015) ");
    s->addImage("Da Vinci", "/Users/gene/bin/deepdream/painters/_davinci.jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("Da Vinci", "/Users/gene/bin/deepdream/painters/davinci_drawing(0)0002_i5_o8_os1.1_j32.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Mike Tyka's experiments (2015)");
    s->addImage("Tyka noisedream 1", "/Users/gene/bin/deepdream/paper/building-dreams1.png", 0.0, 0.0, 0.5, 1.0);
    s->addImage("Tyka noisedream 2", "/Users/gene/bin/deepdream/paper/building-dreams2.png", 0.5, 0.0, 0.5, 1.0);
    s->addText(h3, ofColor(0), "Mike Tyka [mtyka.github.io]", 0.15, 0.0, 1.0);
    
    
    s = slideshow.addSlide("Channel synthesis");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/harvest.mp4", false, 0.15, 0.15, 0.7, 0.7)->setLoop(false);
    
    s = slideshow.addSlide("Channel synthesis");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/E1-115_n40_o05_r1.33.mp4", false, -0.005, 0.15, 0.5, 0.7)->setLoop(false);
    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/H5-89_n50_o09_r1.33.mp4", true, 0.3333, 0.15, 0.32, 0.7)->setLoop(false);
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/E6-63_n50_o05_r1.33.mp4", false, 0.505, 0.15, 0.5, 0.7)->setLoop(false);
    
    // low level swatches + high level swatches
    
    s = slideshow.addSlide("InceptionV3 conv2d");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-1_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-7_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-15_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-28_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-52_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A2-12_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A2-25_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A2-27_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed3a");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-8_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-9_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-20_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-31_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-0_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-26_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-36_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-44_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
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
    
    s = slideshow.addSlide("InceptionV3 mixed4b");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E1-42_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E2-91_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E3-15_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E3-17_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-0_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-16_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-17_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-33_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed4c");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F2-32_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F2-41_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F2-64_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F3-187_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F5-7_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F6-17_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F6-29_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F6-54_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed4d");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G1-9_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G1-15_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G2-36_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G2-54_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G2-86_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G3-145_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G6-2_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G6-20_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed4e");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H1-54_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H1-116_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H1-158_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H3-7_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H3-77_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H3-303_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H4-13_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H6-123_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed5a");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J1-51_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J1-198_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J2-69_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J4-8_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J5-81_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J6-16_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J6-53_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J6-109_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    //    s = slideshow.addSlide("t-SNE of favorite swatches");
    //    s->addScrollableImage("t-SNE swatches", "/Users/gene/bin/lapnorm/swatches/favorites/_all_swatches_tsne.png", 0, 0, 1, 1);
    //
    s = slideshow.addSlide("t-SNE of all ~7500 swatches");
    s->addScrollableImage("t-SNE swatches", "/Users/gene/bin/lapnorm/swatches/all/swatches-tsne_large.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/initial_experiments/frame0010 (2).png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/initial_experiments/eureka.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F6-34+G2-139_n11_o08_r1.33_cr4_b0.60.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G3-283+F3-26+H1-54_n11_o08_r1.33_cr0_b0.75.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G3-45+G1-36+H6-23_n15_o08_r1.33_cr5_b0.21.png", 0, 0, 1, 1);
    // s = slideshow.addSlide("Mixing gradients");
    // s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/E6-16+L1-55+G2-76_n10_o07_r1.33.png", 0, 0, 1, 1);
    // s = slideshow.addSlide("Mixing gradients");
    // s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F6-34+G6-2_n20_o07_r1.33.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/D1-152+F1-40+H5-34_n40_o07_r1.33.png", 0, 0, 1, 1);
    // s = slideshow.addSlide("Mixing gradients");
    // s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/D2-13+D2-50+D5-15_n40_o07_r1.33.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F6-9+D1-27+D5-15_n10_o08_r1.33_cr3_b0.35.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/D5-15+G1-36+D1-133_n15_o08_r1.33_cr3_b0.46.png", 0, 0, 1, 1);
    // s = slideshow.addSlide("Mixing gradients");
    // s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/D6-11+G1-15+D1-189_n40_o07_r1.33.png", 0, 0, 1, 1);
    // s = slideshow.addSlide("Mixing gradients");
    // s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F1-78+D6-52+D1-41_n15_o07_r1.33.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/D3-92+D1-41+F5-40_n15_o08_r1.33_cr4_b0.42.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G1-85+E6-0+F6-54_n20_o07_r1.33.png", 0, 0, 1, 1);
    // s = slideshow.addSlide("Mixing gradients");
    // s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/H3-136+F6-41+H6-72_n40_o07_r1.33.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/large.jpeg", 0, 0, 1, 1);
    
    //    D6-12+D3-92+F1-94_n15_o08_r1.33_cr6_b0.22.png
    //    E2-78+F2-32+G2-38_n10_o08_r1.33_cr5_b0.33.png
    
    
    s = slideshow.addSlide("Feedback and gradient interpolation");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/mask_videos/F1-40+J1-42+G1-34+D6-31+G1-62+H1-225_n16_o04_r1.31_1.05,1.50,1.10.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Feedback and gradient interpolation");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/mask_videos/G2-139+C1-81_n14_o08_r1.30_cr4_b0.05_1.00,1.00,1.00.mp4", true, 0, 0, 1, 1);
    
    //    s = slideshow.addSlide("Feedback and gradient interpolation");
    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/fullfades/hframes2.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Feedback and gradient interpolation");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/fullfades/K18-178+L4-61+K19-55+K07-45+K18-35_m3_b4_o5_i36_c0_s10_norm1.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Moving gradients around");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/testframes2_.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Moving gradients around");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/testframes9b0_.mp4", true, 0, 0, 1, 1);
    
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
    
    
    
    
    
    
    s = slideshow.addSlide("Style transfer");
    s->addImage("Mona Lisa -> Cubist/Expressionist/Impressionist", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_cubist_expressionist_impressionist.jpg", 0, 0.15, 1, 0.85);
    s->addText(h4, ofColor(0), "Gatys et al, 2015 (arxiv.org/abs/1508.06576)", 0.002, 0, 1.0);
    s->addText(h4, ofColor(0), "Justin Johnson's neural-style (https://github.com/jcjohnson/neural-style)", 0.002, 0.075, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Hokusai");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/hokusai.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_hokusai.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Tarsila");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/tarsilo2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_tarsila.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Roy Liechtenstein");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/liechtenstein.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_liechtenstein.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Wassily Kandinsky");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/kandinsky2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_kandinsky2.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Crab Nebula");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/crab.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_crab.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Egyptian Hieroglyphs");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/egypt.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_egypt.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Google Maps (1)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Google Maps (2)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps2.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Google Maps (3)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps3.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps3_cw08.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Google Maps (4)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps3.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps3_cw15.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Google Maps (5)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps3.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps3.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Why is a Raven like a Writing Desk?");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("AliceNet", "/Users/gene/bin/style-transfer/04_alice/Alice-Stylenet.mov", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("<3 <3 <3");
    s->addImage("yan", "/Users/gene/bin/misc/yannlecun.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Video style with optical flow loss term (Ruder et al, 2016)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("video style", "/Users/gene/bin/style-transfer/10_optical_flow/video-style-transfer-x4-reordered.mp4", true, 0, 0, 1, 1);
    
    CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
    s = slideshow.addSlide("What happens when it's real-time?");
    s->addAction(cmd);
    // cmd->setStyleModel("/Users/gene/bin/style-transfer/models/kandinsky_e2_full512.model");
    cmd->setStyleModel("/Users/gene/bin/style-transfer/models/cubist.model");
    
    s = slideshow.addSlide("Cubist Mirror");
    s->addMovie("altai mirror", "/Users/gene/bin/alt-ai/cubistmirror_v1.mp4", true, 0, 0, 0.61, 0.67);
    s->addMovie("nabi mirror", "/Users/gene/bin/alt-ai/cubistmirror-nabi.mp4", true, 0.55, 0.2, 0.455, 0.8);
    
    s = slideshow.addSlide("Generative models");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder.png", 0.0, 0.6, 0.45, 0.3);
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder_net.png", 0, 0.0, 0.45, 0.7);
    s->addImage("GANs", "/Users/gene/bin/misc/stock/GANs.png", 0.35, 0.0, 0.66, 1.0);
    
    s = slideshow.addSlide("\"Interpolating\" numbers");
    s->addText(h4, ofColor(0), "made with https://github.com/Newmu/dcgan_code", 0.1, 0, 0.8);
    s->addMovie("MNIST interpolations", "/Users/gene/bin/dcgan/summary/digits.mov", true, 0.2, 0.1, 0.6, 0.6);
    
    s = slideshow.addSlide("HIT-OR3C dataset (Harbin University)");
    s->addScrollableImage("Actuals", "/Users/gene/bin/dcgan/summary/actual.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Fake (R) vs. Real (L)");
    s->addImage("Mona Lisa", "/Users/gene/bin/dcgan/summary/fakereal.png", 0, 0, 1, 1);
    
    //    s = slideshow.addSlide("A Book from the Sky");
    //    s->addImage("xu bing", "/Users/gene/bin/dcgan/summary/a_book_from_the_sky.jpg", 0.02, 0.02, 0.46, 0.96);
    //    s->addMovie("loop", "/Users/gene/bin/dcgan/summary/longloop.mp4", true, 0.55, 0.1, 0.4, 0.8);
    //
    //    s = slideshow.addSlide("Class conditional space");
    //    s->addScrollableImage("Interpolating characters", "/Users/gene/Web/Home/images/a-book-from-the-sky/banner.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("A Book from the Sky");
    s->addMovie("zloops", "/Users/gene/bin/dcgan/summary/zloops.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Character interpolations");
    s->addMovie("interplations", "/Users/gene/bin/dcgan/public/interpolations_3.mp4", true, 0.2, 0.15, 0.6, 0.6);
    
    s = slideshow.addSlide("Radical interpolations");
    s->addText(h3, ofColor(0), "interpolations across characters sharing the same radical often appear to preserve it", 0.1, 0.0, 0.8);
    s->addMovie("radical interpolations", "/Users/gene/bin/dcgan/summary/radinterpolation.mp4", true, 0, 0.2, 1, 0.8);
    
    //    s = slideshow.addSlide("Arithmetic (this is really stretching it)");
    //    s->addMovie("arithmetic", "/Users/gene/bin/dcgan/summary/arithmetic2.mp4", true, 0, 0, 1, 1);
    
    //    s = slideshow.addSlide("Neural net generated fonts (Erik Bernhardsson)");
    //    s->addMovie("generative fonts", "/Users/gene/bin/misc/erikbernhardsson_genfonts.mp4", true, 0, 0, 1, 1);
    //    s->addText(h4, ofColor(0), "https://erikbern.com/2016/01/21/analyzing-50k-fonts-using-deep-neural-networks/", 0.01, 0.0, 0.99);
    
    s = slideshow.addSlide("Deep Generator Networks");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/DGN_architecture.jpg", 0.0, 0.1, 1, 0.41);
    s->addImage("classvis", "/Users/gene/bin/misc/stock/class-synthesis-deepgen.png", 0.0, 0.52, 1, 0.48);
    s->addText(h4, ofColor(0), "Nguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.15, 0.01, 1.0);
    
    //    s = slideshow.addSlide("DGN CaffeNet");
    //    s->addScrollableImage("classvis", "/Users/gene/bin/synthesizing/synthesizing-caffenet-tSNE.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("DGN (buttes)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/buttes.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("DGN (boathouses)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/boathouses.png", 0.025, 0.025, 0.95, 0.95);
    
    //    s = slideshow.addSlide("DGN (discotheque)");
    //    s->addImage("classvis", "/Users/gene/bin/synthesizing/discotheque.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("DGN convergence");
    ofxPPMovie *mov = s->addMovie("cheeseburger", "/Users/gene/bin/synthesizing/cheeseburgernew.mov", false, 0.02, 0.1, 0.46, 0.8);
    mov->setLoop(false);
    ofxPPMovie *mov2 = s->addMovie("teapot", "/Users/gene/bin/synthesizing/teapotnew.mov", false, 0.52, 0.1, 0.46, 0.8);
    mov2->setLoop(false);
    
    s = slideshow.addSlide("Image-to-Image Translation with Conditional Adversarial Nets");
    s->addImage("fb", "/Users/gene/bin/pix2pix/teaser_v3a.png", 0.0, 0.04, 1.0, 0.96);
    s->addText(h3, ofColor(100), "phillipi.github.io/pix2pix/", 0.02, 0.00, 0.8);
    s->start();
    
    //    s = slideshow.addSlide("Invisible Cities");
    //    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/milan_style_transfer_x4.jpg", 0.0, 0.04, 1, 0.96);
    //    s->addText(h3, ofColor(100), "opendot.github.io/ml4a-invisible-cities/", 0.02, 0.00, 0.8);
    
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
    
    s = slideshow.addSlide("Online drawing tool");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/invisible_cities/invisible_cities-draw.mp4", false, 0.05, 0.05, 0.9, 0.9);
    s->addText(h3, ofColor(100), "github.com/genekogan/InvisibleCities/", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("Edges2Cat + FotoGenerator");
    s->addImage("sketch2cat", "/Users/gene/bin/pix2pix/foto-generator.png", 0.45, 0.495, 0.55, 0.52);
    s->addImage("sketch2cat", "/Users/gene/bin/pix2pix/edges2cat.png", 0.0, 0.05, 0.55, 0.53);
    s->addText(h3, ofColor(100), "Interface by Christopher Hesse (https://affinelayer.com/pixsrv/)", 0.1, 0, 0.8);
    
    
    s = slideshow.addSlide("Pix2Pix streetview (Jasper van Loenen)");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/jasper-streetview.mp4", false, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Fall of the House of Usher (Anna Riddler)");
    s->addImage("fb", "/Users/gene/bin/misc/fallofthehouseofuser.png", 0.05, 0.05, 0.9, 0.9);
    s->addText(h3, ofColor(100), "http://annaridler.com/fall-of-the-house-of-usher/", 0.1, 0, 0.8);
    
    s = slideshow.addSlide("Pix2Pix + FaceTracker");
    s->addMovie("mario", "/Users/gene/bin/pix2pix/quasimondo_facepix2pix.mp4", true, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Meat puppet");
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/trump_face_train.png", 0.0, 0.0, 0.45, 1.0);
    s->addImage("fb", "/Users/gene/bin/misc/stock/arrow.png", 0.46, 0.0, 0.08, 1.0);
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/gene_face_test.png", 0.55, 0.0, 0.45, 1.0);
    
    s = slideshow.addSlide("Meat puppet");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump_gene1.mp4", true, 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Meat puppet @ ECAL");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump-meatpuppet-pix2pix-ecal.mp4", true, 0.0, 0.0, 1.0, 1.0)->setPosition(0.25);
    
    s = slideshow.addSlide("CycleGAN");
    s->addImage("fb", "/Users/gene/bin/misc/cyclegan/cyclegan.jpg", 0.0, 0.07, 1, 0.95);
    s->addText(h3, ofColor(100), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("CycleGAN");
    s->addMovie("fb", "/Users/gene/bin/misc/cyclegan/cyclegan_zebra.mp4", true, 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(100), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("CycleGAN fail");
    s->addImage("fb", "/Users/gene/bin/misc/cyclegan/putin_zebra.jpeg", 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(100), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("So so many GANs");
    s->addImage("classvis", "/Users/gene/bin/misc/stock/GANpublications.png", 0, 0, 1, 0.87);
    s->addText(h3, ofColor(0), "Graph by Bruno Gavranovic, via https://deephunt.in/the-gan-zoo-79597dc8c347", 0.1, 0.9, 0.8);
    
    s = slideshow.addSlide("BEGAN");
    s->addImage("BEGAN", "/Users/gene/bin/misc/stock/BEGAN.png", 0.1, 0.3, 0.8, 0.6);
    s->addText(h3, ofColor(0), "Boundary Equilibrium GANs (BEGAN)\nBerthelot et al (https://arxiv.org/abs/1703.10717)", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("InfoGAN");
    s->addImage("InfoGAN", "/Users/gene/bin/misc/stock/InfoGAN1.png", 0.0, 0.07, 1.0, 0.4);
    s->addImage("InfoGAN", "/Users/gene/bin/misc/stock/InfoGAN2.png", 0.0, 0.47, 1.0, 0.53);
    s->addText(h3, ofColor(0), "Information maximizing GAN (InfoGAN)\nChen et al (https://arxiv.org/abs/1606.03657)", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("DiscoGAN");
    s->addText(h3, ofColor(0), "Discover Cross-Domain Relations (DiscoGAN)\nKim et al (https://arxiv.org/abs/1703.05192)", 0.1, 0.0, 0.8);
    s->addImage("DiscoGAN", "/Users/gene/bin/misc/stock/DiscoGAN.png", 0.0, 0.09, 1.0, 0.32);
    s->addImage("DiscoGAN", "/Users/gene/bin/misc/stock/DiscoGAN-gender1.png", 0.0, 0.395, 1.0, 0.29);
    s->addImage("DiscoGAN", "/Users/gene/bin/misc/stock/DiscoGAN-gender2.png", 0.0, 0.715, 1.0, 0.29);
    
    s = slideshow.addSlide("StackGAN");
    s->addText(h3, ofColor(0), "Text to Photo-realistic Image Synthesis with Stacked GANs\nZhang et al (https://arxiv.org/abs/1612.03242)", 0.1, 0.0, 0.8);
    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-bird2.jpg", 0.0, 0.12, 1.0, 0.4);
    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-flower1.jpg", 0.0, 0.53, 1.0, 0.4);
    s = slideshow.addSlide("StackGAN");
    s->addText(h3, ofColor(0), "Text to Photo-realistic Image Synthesis with Stacked GANs\nZhang et al (https://arxiv.org/abs/1612.03242)", 0.1, 0.0, 0.8);
    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-bird_interp.png", 0.0, 0.15, 1.0, 0.8);
    
    s = slideshow.addSlide("ArtGAN");
    s->addImage("classvis", "/Users/gene/bin/misc/stock/ArtGAN-art.png", 0, 0.1, 1, 0.78);
    s->addImage("classvis", "/Users/gene/bin/misc/stock/ArtGAN-caption.png", 0, 0.88, 1, 0.13);
    s->addText(h3, ofColor(0), "ArtGAN: Artwork Synthesis with Conditional Categorical GANs\nTan et al (https://arxiv.org/abs/1702.03410)", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("GANGogh");
    s->addImage("classvis", "/Users/gene/bin/misc/stock/GANGogh.png", 0, 0.1, 1, 0.78);
    s->addText(h3, ofColor(0), "Jones, Bonafilia, Danyluk (https://github.com/rkjones4/GANGogh)", 0.1, 0.0, 0.8);
    
    //    s = slideshow.addSlide("YOLO x ScreenGrab");
    //    DarknetScreenGrabDemo *dnsgd = new DarknetScreenGrabDemo(s, "Darknet Demo", 0, 0, 1, 1);
    //    dnsgd->setDarknetReference(&darknet);
    //    s->addAction(dnsgd);
    
    s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
    s->addImage("yolo", "/Users/gene/bin/ml4a/ReverseImageSearch/yolo-screen1.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
    s->addImage("yolo", "/Users/gene/bin/ml4a/ReverseImageSearch/yolo-screen2.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
    s->addImage("yolo", "/Users/gene/bin/ml4a/ReverseImageSearch/yolo-screen3.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Tele-captioning skype");
    s->addImage("skype1", "/Users/gene/bin/misc/densecap-skype_2.png", 0.32, 0.46, 0.7, 0.65);
    s->addImage("skype1", "/Users/gene/bin/misc/densecap-skype_1.png", 0, 0.0, 0.7, 0.65);
    
    s = slideshow.addSlide("Reverse Object Search");
    s->addImage("workshop", "/Users/gene/bin/misc/ROSF/Screen Shot 2017-03-07 at 5.04.47 PM.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Reverse Object Search");
    s->addImage("workshop", "/Users/gene/bin/misc/ROSF/Screen Shot 2017-03-07 at 4.58.51 PM.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("thanks :)");
    s->addMovie("t-SNE convergence", "/Users/gene/bin/tsne/tsne_manual.mp4", true, 0, 0, 1, 1);
    s->addRect(ofColor(255,160), 0.005, 0.19, 0.33, 0.25);
    s->addRect(ofColor(255,160), 0.595, 0.19, 0.33, 0.25);
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
    
}


//--------------------------------------------------------------
void ofApp::HubBerlin(){
    
    
    //s = slideshow.addSlide("Lunchmeat Festival, 20 Oct 2017");
    s = slideshow.addSlide("hub.berlin 28 Nov 2017");
    s->addText(h2, ofColor(255), "@genekogan", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(255), "genekogan.com", 0.1, 0.4, 0.5);
    s->addText(h2, ofColor(255), "ml4a.github.io", 0.6, 0.3, 0.5);
    s->addText(h2, ofColor(255), "@ml4a_", 0.6, 0.4, 0.5);
    s->start();
    
    // about me
    s = slideshow.addSlide("Music information retrieval (~2008-2011)");
    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
    s->addImage("genre VA", "/Users/gene/bin/misc/sourcetone/genre-AvgVA.jpg", 0.0, 0.4, 0.42, 0.6);
    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
    
    s = slideshow.addSlide("Data scientist in denial");
    s->addImage("data science", "/Users/gene/bin/misc/stock/data-scientist-google-trends.png", 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Musical instruments (w/ Jeff Snyder) ~2014");
    s->addImage("tweet", "/Users/gene/Web/genekogan.github.io/_site/images/birl/birl1.jpg", 0.0, 0.0, 1, 0.35);
    s->addImage("tweet", "/Users/gene/bin/misc/Snyderphonics_Manta.jpg", 0.0, 0.365, 1, 0.64);
    
    s = slideshow.addSlide("Media arts / creative tech");
    s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/listening-to-the-ocean-10.jpg", 0.0, 0, 0.5, 0.5);
    s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/generator5.png", 0.5, 0, 0.5, 0.5);
    s->addMovie("simulation", "/Users/gene/bin/images/VertexFields2_01.29.2012.mov", true, 0.0, 0.5, 0.5, 0.5);
    s->addImage("genart", "/Users/gene/Web/genekogan.github.io/_site/images/audio-sculpture/audio-sculpture2.jpg", 0.5, 0.5, 0.5, 0.5);
    
    
    s = slideshow.addSlide("Machine learning + visual art");
    s->addMovie("dcgan", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0.026, 0.5, 0.47);
    s->addImage("deepdream", "/Users/gene/bin/misc/stock/building-dreams.png", 0, 0.515, 0.5, 0.48);
    s->addImage("stylenet", "/Users/gene/bin/misc/stock/stylenet-original.png", 0.5, 0.53, 0.5, 0.47);
    s->addImage("synthesizing original", "/Users/gene/bin/misc/stock/synthesizing-original.jpg", 0.5, 0.025, 0.5, 0.48);
    s->addText(h4, ofColor(255), "https://www.youtube.com/watch?v=QYcKCGdZvq4", 0.01, 0.0, 1.0);
    s->addText(h5, ofColor(255), "research.googleblog.com/2015/06/inceptionism-going-deeper-into-neural.html", 0.002, 0.475, 1.0);
    s->addText(h4, ofColor(255), "https://arxiv.org/abs/1508.06576", 0.6, 0.51, 1.0);
    s->addText(h4, ofColor(255), "http://www.evolvingai.org/synthesizing", 0.6, 0.0, 1.0);
    
    
    
    
    ////////////////////////////////////////////////////////////
    ///// LAPNORM
    
    s = slideshow.addSlide("What are neural networks?");
    s->addImage("lenet", "/Users/gene/bin/misc/stock/lenet.png", 0, 0, 1, 0.4);
    s->addImage("alexnet", "/Users/gene/bin/misc/stock/alexnet2.png", 0, 0.5, 1, 0.4);
    s->addText(h3, ofColor(255), "Lenet (LeCun et al, 1998) [http://yann.lecun.com/exdb/lenet/]", 0.05, 0.4, 0.9);
    s->addText(h3, ofColor(255), "AlexNet 2012 [via https://jeremykarnowski.wordpress.com/2015/07/15/alexnet-visualization/]", 0.05, 0.92, 0.9);
    
    s = slideshow.addSlide("Convolutional neural network demo");
    s->setBackgroundFunction(this, &ofApp::drawBgWhite);
    CcvForwardPassDemo *ccvd = new CcvForwardPassDemo(s, "ccv", 0, 0, 1, 1);
    s->addAction(ccvd);
    //
    //    s = slideshow.addSlide("What neural networks look for");
    //    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l2.png", 0.01, 0.15, 0.45, 0.7);
    //    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l3.png", 0.47, 0.15, 0.52, 0.7);
    //    s->addText(h4, ofColor(255), "Visualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]", 0.02, 0.0, 1.0);
    //
    s = slideshow.addSlide("Channel synthesis");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/harvest.mp4", false, 0.15, 0.15, 0.7, 0.7)->setLoop(false);
    
    //    s = slideshow.addSlide("Channel synthesis");
    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/E1-115_n40_o05_r1.33.mp4", false, -0.005, 0.15, 0.5, 0.7)->setLoop(false);
    //    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/H5-89_n50_o09_r1.33.mp4", true, 0.3333, 0.15, 0.32, 0.7)->setLoop(false);
    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/E6-63_n50_o05_r1.33.mp4", false, 0.505, 0.15, 0.5, 0.7)->setLoop(false);
    
    // low level swatches + high level swatches
    
    //    s = slideshow.addSlide("InceptionV3 conv2d");
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-1_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-7_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-15_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-28_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-52_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A2-12_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A2-25_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A2-27_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    //
    //    s = slideshow.addSlide("InceptionV3 mixed3a");
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-8_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-9_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-20_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-31_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-0_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-26_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-36_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-44_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    //
    //    s = slideshow.addSlide("InceptionV3 mixed3b");
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/C1-95_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/C3-0_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/C5-9_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/C5-53_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/C6-5_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/C6-30_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/C6-38_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/C6-54_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    //
    //    s = slideshow.addSlide("InceptionV3 mixed4a");
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/D1-67_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/D1-86_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/D1-96_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/D1-133_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/D1-144_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/D1-152_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/D6-9_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/D6-52_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    //
    //    s = slideshow.addSlide("InceptionV3 mixed4b");
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E1-42_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E2-91_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E3-15_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E3-17_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-0_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-16_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-17_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-33_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    //
    s = slideshow.addSlide("InceptionV3 mixed4c");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F2-32_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F2-41_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F2-64_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F3-187_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F5-7_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F6-17_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F6-29_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F6-54_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed4d");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G1-9_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G1-15_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G2-36_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G2-54_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G2-86_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G3-145_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G6-2_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G6-20_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    //    s = slideshow.addSlide("InceptionV3 mixed4e");
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H1-54_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H1-116_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H1-158_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H3-7_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H3-77_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H3-303_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H4-13_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H6-123_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    //
    //    s = slideshow.addSlide("InceptionV3 mixed5a");
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J1-51_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J1-198_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J2-69_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J4-8_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J5-81_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J6-16_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J6-53_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    //    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J6-109_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    //
    //    s = slideshow.addSlide("t-SNE of favorite swatches");
    //    s->addScrollableImage("t-SNE swatches", "/Users/gene/bin/lapnorm/swatches/favorites/_all_swatches_tsne.png", 0, 0, 1, 1);
    //
    //    s = slideshow.addSlide("t-SNE of all ~7500 swatches");
    //    s->addScrollableImage("t-SNE swatches", "/Users/gene/bin/lapnorm/swatches/all/swatches-tsne_large.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/initial_experiments/frame0010 (2).png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/initial_experiments/eureka.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F6-34+G2-139_n11_o08_r1.33_cr4_b0.60.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G3-283+F3-26+H1-54_n11_o08_r1.33_cr0_b0.75.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G3-45+G1-36+H6-23_n15_o08_r1.33_cr5_b0.21.png", 0, 0, 1, 1);
    // s = slideshow.addSlide("Mixing gradients");
    // s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/E6-16+L1-55+G2-76_n10_o07_r1.33.png", 0, 0, 1, 1);
    // s = slideshow.addSlide("Mixing gradients");
    // s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F6-34+G6-2_n20_o07_r1.33.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/D1-152+F1-40+H5-34_n40_o07_r1.33.png", 0, 0, 1, 1);
    // s = slideshow.addSlide("Mixing gradients");
    // s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/D2-13+D2-50+D5-15_n40_o07_r1.33.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F6-9+D1-27+D5-15_n10_o08_r1.33_cr3_b0.35.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/D5-15+G1-36+D1-133_n15_o08_r1.33_cr3_b0.46.png", 0, 0, 1, 1);
    // s = slideshow.addSlide("Mixing gradients");
    // s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/D6-11+G1-15+D1-189_n40_o07_r1.33.png", 0, 0, 1, 1);
    // s = slideshow.addSlide("Mixing gradients");
    // s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F1-78+D6-52+D1-41_n15_o07_r1.33.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/D3-92+D1-41+F5-40_n15_o08_r1.33_cr4_b0.42.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G1-85+E6-0+F6-54_n20_o07_r1.33.png", 0, 0, 1, 1);
    // s = slideshow.addSlide("Mixing gradients");
    // s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/H3-136+F6-41+H6-72_n40_o07_r1.33.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/large.jpeg", 0, 0, 1, 1);
    
    //    D6-12+D3-92+F1-94_n15_o08_r1.33_cr6_b0.22.png
    //    E2-78+F2-32+G2-38_n10_o08_r1.33_cr5_b0.33.png
    
    
    s = slideshow.addSlide("Feedback and gradient interpolation");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/mask_videos/F1-40+J1-42+G1-34+D6-31+G1-62+H1-225_n16_o04_r1.31_1.05,1.50,1.10.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Feedback and gradient interpolation");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/mask_videos/G2-139+C1-81_n14_o08_r1.30_cr4_b0.05_1.00,1.00,1.00.mp4", true, 0, 0, 1, 1);
    
    //    s = slideshow.addSlide("Feedback and gradient interpolation");
    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/fullfades/hframes2.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Feedback and gradient interpolation");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/fullfades/K18-178+L4-61+K19-55+K07-45+K18-35_m3_b4_o5_i36_c0_s10_norm1.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Moving gradients around");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/testframes2_.mp4", true, 0, 0, 1, 1);
    
    //    s = slideshow.addSlide("Moving gradients around");
    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/testframes9b0_.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Loops");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/loops/_lapnom-loops.mp4", true, 0, 0, 1, 1)->setLoop(true);
    
    //    s = slideshow.addSlide("Constrain to an image");
    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/class38_face3.mp4", false, 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Mask with an image");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/image_mask/monalisa/F2-41+C2-0+C3-179+B2-44+C1-106_n11_o02_r1.39_1.10,1.25,1.20_2.mp4", true, 0, 0, 1, 1)->setLoop(true);
    
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
    
    
    
    
    ////////////////////////////////////////////////////////////
    ///// GENERATIVE MODELS
    
    //    s = slideshow.addSlide("Generative Models");
    //    s->addImage("classvis", "/Users/gene/bin/synthesizing/DGN_places_long.jpg", 0.0, 0.1, 1, 0.9);
    //    s->addText(h4, ofColor(255), "Deep Generator Networks\nNguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.1, 0.01, 1.0);
    //
    //    s = slideshow.addSlide("DGN variety");
    //    s->addImage("classvis", "/Users/gene/bin/synthesizing/boathouses.png", 0.0, 0.05, 0.57, 0.95);
    //    s->addImage("classvis", "/Users/gene/bin/synthesizing/buttes.png", 0.573, 0.05, 0.43, 0.95);
    //    s->addText(h4, ofColor(255), "http://genekogan.com/works/synthesizing/", 0.1, 0.00, 1.0);
    //
    //    s = slideshow.addSlide("DGN (people as artifacts)");
    //    s->addImage("classvis", "/Users/gene/bin/synthesizing/people.png", 0.1, 0.1, 0.8, 0.9);
    //    s->addText(h3, ofColor(255), "http://genekogan.com/works/synthesizing/", 0.1, 0.00, 1.0);
    
    //    s = slideshow.addSlide("Deep convolutional generative adversarial networks");
    //    s->addImage("Mona Lisa", "/Users/gene/bin/dcgan/public/dcgan-glasses.png", 0.0, 0.06, 1.0, 0.94);
    //    s->addText(h4, ofColor(255), "Radford, Metz, Chintala 2015 (https://arxiv.org/abs/1511.06434)", 0.1, 0.0, 0.8);
    //
    //    s = slideshow.addSlide("\"Interpolating\" numbers");
    //    s->addMovie("MNIST interpolations", "/Users/gene/bin/dcgan/summary/digits.mov", true, 0.2, 0.1, 0.6, 0.6);
    //
    //    s = slideshow.addSlide("A Book from the Sky");
    //    s->addMovie("zloops", "/Users/gene/bin/dcgan/summary/zloops.mp4", true, 0, 0.1, 1, 0.91);
    //    s->addText(h3, ofColor(255), "http://genekogan.com/works/a-book-from-the-sky/", 0.1, 0.0, 0.8);
    //
    //    s = slideshow.addSlide("A Book from the Sky");
    //    s->addMovie("interplations", "/Users/gene/bin/dcgan/public/interpolations_3.mp4", true, 0.1, 0.15, 0.8, 0.6);
    //    s->addText(h3, ofColor(255), "http://genekogan.com/works/a-book-from-the-sky/", 0.1, 0.0, 0.8);
    
    //    s = slideshow.addSlide("More DCGANs");
    //    s->addImage("manga 1", "/Users/gene/bin/dcgan/public/07_manga_sample1.png", 0, 0.1, 0.48, 0.9);
    //    s->addImage("albums", "/Users/gene/bin/dcgan/public/album-covers-DCGAN.jpg", 0.52, 0.1, 0.475, 0.9);
    //    s->addText(h3, ofColor(255), "https://github.com/mattya/chainer-DCGAN", 0, 0, 1);
    //    s->addText(h3, ofColor(255), "album covers by @AlecRad", 0.51, 0, 1);
    //
    //    s = slideshow.addSlide("PointCloud generation");
    //    s->addText(h3, ofColor(255), "Representation Learning and Adversarial Generation of 3D Point Clouds\nAchlioptas et all (https://arxiv.org/abs/1707.02392", 0.1, 0.0, 0.8);
    //    s->addImage("PointCloud", "/Users/gene/bin/misc/stock/pointcloud-GAN.png", 0.0, 0.15, 1.0, 0.8);
    
    //    s = slideshow.addSlide("WaveNet");
    //    s->addText(h3, ofColor(255), "https://deepmind.com/blog/wavenet-generative-model-raw-audio/", 0.05, 0.01, 0.9);
    //    s->addMovie("wavenet zoom", "/Users/gene/bin/wavenet/blogpost/wavenet-zoom.mp4", true, 0.05, 0.1, 0.4, 0.4);
    //    s->addMovie("wavenet conv", "/Users/gene/bin/wavenet/blogpost/wavenet-dilated-convolutions.mp4", true, 0.55, 0.1, 0.4, 0.4);
    //    s->addSound("wavenet 1", "/Users/gene/bin/wavenet/blogpost/wavenet-1.wav", h4, false, false, 0.05, 0.6, 0.25, 0.04);
    //    s->addSound("wavenet 2", "/Users/gene/bin/wavenet/blogpost/wavenet-2.wav", h4, false, false, 0.05, 0.66, 0.25, 0.04);
    //    s->addSound("voice 1", "/Users/gene/bin/wavenet/blogpost/avocado-1.wav", h4, false, false, 0.05, 0.76, 0.25, 0.04);
    //    s->addSound("voice 2", "/Users/gene/bin/wavenet/blogpost/avocado-2.wav", h4, false, false, 0.05, 0.82, 0.25, 0.04);
    //    s->addSound("babble 1", "/Users/gene/bin/wavenet/blogpost/speaker-1.wav", h4, false, false, 0.35, 0.6, 0.25, 0.04);
    //    s->addSound("babble 2", "/Users/gene/bin/wavenet/blogpost/speaker-2.wav", h4, false, false, 0.35, 0.66, 0.25, 0.04);
    //    s->addSound("babble 3", "/Users/gene/bin/wavenet/blogpost/speaker-3.wav", h4, false, false, 0.35, 0.72, 0.25, 0.04);
    //    s->addSound("babble 4", "/Users/gene/bin/wavenet/blogpost/speaker-4.wav", h4, false, false, 0.35, 0.78, 0.25, 0.04);
    //    s->addSound("babble 5", "/Users/gene/bin/wavenet/blogpost/speaker-5.wav", h4, false, false, 0.35, 0.84, 0.25, 0.04);
    //    s->addSound("babble 6", "/Users/gene/bin/wavenet/blogpost/speaker-6.wav", h4, false, false, 0.35, 0.9, 0.25, 0.04);
    //    s->addSound("jazz 1", "/Users/gene/bin/wavenet/blogpost/sample_1.wav", h4, false, false, 0.65, 0.6, 0.25, 0.04);
    //    s->addSound("jazz 2", "/Users/gene/bin/wavenet/blogpost/sample_2.wav", h4, false, false, 0.65, 0.66, 0.25, 0.04);
    //    s->addSound("jazz 3", "/Users/gene/bin/wavenet/blogpost/sample_3.wav", h4, false, false, 0.65, 0.72, 0.25, 0.04);
    //    s->addSound("jazz 4", "/Users/gene/bin/wavenet/blogpost/sample_4.wav", h4, false, false, 0.65, 0.78, 0.25, 0.04);
    //    s->addSound("jazz 5", "/Users/gene/bin/wavenet/blogpost/sample_5.wav", h4, false, false, 0.65, 0.84, 0.25, 0.04);
    //    s->addSound("jazz 6", "/Users/gene/bin/wavenet/blogpost/sample_6.wav", h4, false, false, 0.65, 0.9, 0.25, 0.04);
    
    //    s = slideshow.addSlide("Video prediction");
    //    s->addMovie("Video GANs", "/Users/gene/bin/dcgan/video_gans.mp4", true, 0.0, 0.1, 1, 0.91);
    //    s->addText(h4, ofColor(255), "Carl Vondrick (http://web.mit.edu/vondrick/tinyvideo/)", 0.0, 0.0, 0.8);
    
    //    s = slideshow.addSlide("Natural language generation");
    //    s->addImage("fb", "/Users/gene/bin/misc/stock/neural-storyteller.png", 0, 0.2, 1, 0.6);
    //    s->addText(h3, ofColor(255), "https://github.com/ryankiros/neural-storyteller", 0.02, 0.00, 0.8);
    //
    //    s = slideshow.addSlide("Dense captioning Pouff's grocery trip");
    //    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream_grocery.mp4", true, 0, 0.08, 1, 0.93);
    //    s->addText(h4, ofColor(255), "original: https://www.youtube.com/watch?v=DgPaCWJL7XI", 0.01, 0.0, 0.99);
    //
    //    s = slideshow.addSlide("StackGAN");
    //    s->addText(h3, ofColor(255), "Text to Photo-realistic Image Synthesis with Stacked GANs\nZhang et al (https://arxiv.org/abs/1612.03242)", 0.1, 0.0, 0.8);
    //    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-bird2.jpg", 0.0, 0.12, 1.0, 0.4);
    //    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-flower1.jpg", 0.0, 0.53, 1.0, 0.4);
    //    s = slideshow.addSlide("StackGAN");
    //    s->addText(h3, ofColor(255), "Text to Photo-realistic Image Synthesis with Stacked GANs\nZhang et al (https://arxiv.org/abs/1612.03242)", 0.1, 0.0, 0.8);
    //    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-bird_interp.png", 0.0, 0.15, 1.0, 0.8);
    
    // pix2pix
    
    s = slideshow.addSlide("Image-to-Image Translation with Conditional Adversarial Nets");
    s->addImage("fb", "/Users/gene/bin/pix2pix/teaser_v3a.png", 0.0, 0.04, 1.0, 0.96);
    s->addText(h4, ofColor(255), "Isola et al (phillipi.github.io/pix2pix/)", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("Invisible Cities");
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/milan_style_transfer_x4.jpg", 0.0, 0.04, 1, 0.96);
    s->addText(h4, ofColor(255), "opendot.github.io/ml4a-invisible-cities/", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("Invisible Cities");
    s->addText(h4, ofColor(255), "opendot.github.io/ml4a-invisible-cities/", 0.02, 0.00, 0.8);
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/handdrawn1.jpg", 0.0, 0.1, 1.0, 0.45);
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/handdrawn2.jpg", 0.0, 0.555, 1.0, 0.45);
    
    s = slideshow.addSlide("Meat puppet");
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/trump_face_train.png", 0.0, 0.0, 0.45, 1.0);
    s->addImage("fb", "/Users/gene/bin/misc/stock/arrow.png", 0.46, 0.0, 0.08, 1.0);
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/gene_face_test.png", 0.55, 0.0, 0.45, 1.0);
    
    s = slideshow.addSlide("Meat puppet");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump_gene1.mp4", true, 0.1, 0.1, 0.8, 0.8);
    
    //    s = slideshow.addSlide("Meat puppet @ ECAL");
    //    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump-meatpuppet-pix2pix-ecal.mp4", true, 0.0, 0.0, 1.0, 1.0)->setPosition(0.25);
    
    s = slideshow.addSlide("CycleGAN");
    s->addImage("fb", "/Users/gene/bin/misc/cyclegan/cyclegan.jpg", 0.0, 0.07, 1, 0.95);
    s->addText(h3, ofColor(255), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("CycleGAN");
    s->addMovie("fb", "/Users/gene/bin/misc/cyclegan/cyclegan_zebra.mp4", true, 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(255), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("CycleGAN fail");
    s->addImage("fb", "/Users/gene/bin/misc/cyclegan/putin_zebra.jpeg", 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(255), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    //    s = slideshow.addSlide("Style transfer");
    //    s->addImage("Mona Lisa -> Cubist/Expressionist/Impressionist", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_cubist_expressionist_impressionist.jpg", 0, 0.15, 1, 0.85);
    //    s->addText(h4, ofColor(255), "Gatys et al, 2015 (arxiv.org/abs/1508.06576)", 0.002, 0, 1.0);
    //    s->addText(h4, ofColor(255), "Justin Johnson's neural-style (https://github.com/jcjohnson/neural-style)", 0.002, 0.075, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Hokusai style transfer");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/hokusai.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_hokusai.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Tarsila");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/tarsilo2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_tarsila.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Roy Liechtenstein");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/liechtenstein.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_liechtenstein.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Wassily Kandinsky");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/kandinsky2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_kandinsky2.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Crab Nebula");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/crab.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_crab.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Egyptian Hieroglyphs");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/egypt.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_egypt.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Google Maps (1)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Google Maps (2)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps2.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Google Maps (3)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps3.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps3_cw08.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Google Maps (4)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps3.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps3_cw15.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Google Maps (5)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps3.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps3.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Cubist Mirror");
    s->addMovie("altai mirror", "/Users/gene/bin/alt-ai/cubistmirror_v1.mp4", true, 0, 0, 0.61, 0.67);
    s->addMovie("nabi mirror", "/Users/gene/bin/alt-ai/cubistmirror-nabi.mp4", true, 0.55, 0.2, 0.455, 0.8);
    
    
    ////////////////////////////////////////////////////////////
    ///// DEMOS + ML4A
    
    
    //    s = slideshow.addSlide("Wolfenstein Controlled by Sound");
    //    s->addMovie("wolfenstein", "/Users/gene/bin/ml4a/Wolfenstein 3D controlled by sound.mp4", false, 0, 0.05, 1, 0.96);
    //    s->addText(h4, ofColor(255), "Stoj (Andreas Refsgaard & Lasse Korsgaard) https://vimeo.com/207831279", 0.00, 0.00, 0.8);
    //    s->start();
    
    //    slideshow.setPage(s);
    
    
    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.1, 0.1, 0.8, 0.8);
    
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
    
    s = slideshow.addSlide("ml4a.github.io/guides");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-guides-index.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Guides");
    s->addImage("workshop", "/Users/gene/bin/ml4a/xdegrees_samples.jpg", 0, 0, 0.5, 0.5);
    //s->addImage("workshop", "/Users/gene/bin/ml4a/nabimusic2.png", 0.51, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, 0.51, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/ml4a/neural-painter/dog-cat-interp.mp4", true, 0.0, 0.51, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/bin/tsne/tsne-animals-highlights.png", 0.51, 0.51, 0.5, 0.5);
    
    //    s = slideshow.addSlide("Hallucinating faces with PCA");
    //    s->addMovie("eigenface", "/Users/gene/bin/ml4a/eigenface/eigenface_grid_8x4.mp4", true, 0, 0.06, 1, 0.95);
    //    s->addText(h4, ofColor(255), "https://github.com/ml4a/ml4a-guides/tree/master/notebooks/Eigenfaces.ipynb", 0.1, 0, 0.8);
    
    //    s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
    //    s->addImage("yolo", "/Users/gene/bin/ml4a/ReverseImageSearch/yolo-screen1.png", 0, 0, 1, 1);
    
    
    //    s = slideshow.addSlide("Guides");
    //    s->addImage("workshop", "/Users/gene/bin/ml4a/nabimusic2.png", 0.51, 0, 0.5, 0.5);
    //
    //    //s->addMovie("fb", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, 0.51, 0, 0.5, 0.5);
    //    s->addMovie("fb", "/Users/gene/bin/ml4a/neural-painter/dog-cat-interp.mp4", true, 0.0, 0.51, 0.5, 0.5);
    //    s->addImage("workshop", "/Users/gene/bin/tsne/tsne-animals-highlights.png", 0.51, 0.51, 0.5, 0.5);
    //
    
    //    s = slideshow.addSlide("Guides");
    //    s->addScrollableImage("animal t-sne", "/Users/gene/bin/tsne/tsne-animals.png", 0.0, 0.0, 1.0, 1.0);
    
    s = slideshow.addSlide("t-SNE :: CalTech-256 animals");
    s->addScrollableImage("t-SNE animals", "/Users/gene/bin/tsne/grid_animals2.png", 0, 0, 1, 1);
    
    //    s = slideshow.addSlide("Guides");
    //    s->addImage("workshop", "/Users/gene/bin/ml4a/xdegrees_samples.jpg", 0, 0, 0.5, 0.5);
    
    s = slideshow.addSlide("Audio + Text t-SNEs");
    s->setBackgroundFunction(this, &ofApp::drawBgWhite);
    s->addScrollableImage("wiki t-SNE", "/Users/gene/bin/tsne/wiki-tSNE.png", -0.05, 0.0, 0.72, 0.76);
    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0.48, 0.39, 0.54, 0.63);
    attd->setTsnePath("/Users/gene/Teaching/ML4A/ml4a-guides/data/example-audio-tSNE-drums.json");
    s->addAction(attd);
    attd->start();
    s->addText(h4, ofColor(0), "www.genekogan.com/works/wiki-tSNE", 0.03, 0.8, 0.7);
    s->addText(h4, ofColor(0), "github.com/ml4a/ml4a-ofx", 0.67, 0.3, 0.7);
    
    
    s = slideshow.addSlide("Demos");
    s->addMovie("transfer learning", "/Users/gene/bin/misc/wekinator-coffee-croissant.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("ml4a projects");
    s->addMovie("objectifier", "/Users/gene/bin/misc/prototype_objectifier.mp4", true, 0.0, 0.0, 0.5, 0.49);
    s->addMovie("beta blockers", "/Users/gene/bin/alt-ai/betablockers_nosound.mp4", true, 0.51, 0.5, 0.5, 0.49);
    s->addImage("pdh", "/Users/gene/Web/alt-AI/images/exhibit-corbin.jpg", 0.5, 0.0, 0.5, 0.49);
    s->addImage("seth", "/Users/gene/Web/alt-AI/images/exhibit-seth.jpg", 0.0, 0.5, 0.5, 0.49);
    s->addText(h4, ofColor(255), "Piano Die Hard (Corbin Ordel & Aaron Montoya-Moraga)", 0.51, 0.465, 0.5);
    s->addText(h4, ofColor(255), "Beta blockers (Chino Kim)", 0.51, 0.96, 0.5);
    s->addText(h4, ofColor(255), "Objectifier (Bjoern Karmann)", 0.01, 0.465, 0.5);
    s->addText(h4, ofColor(255), "Neural Recycle (Seth Kranzler)", 0.01, 0.96, 0.5);
    
    s = slideshow.addSlide("python + data science tutorials");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-guide-RIS.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
    s->addImage("yolo", "/Users/gene/bin/ml4a/ReverseImageSearch/yolo-screen1.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("ml4a.github.io/classes");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("ml4a @ itp", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/ml4a @ itp-nyu -- timelapse_crop.mp4", true, 0, 0, 1, 1)->setPositionRandom();
    s->loadAssets();
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-nn.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-hnnat.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Decentralized AI");
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/decentralizedAI/dcai7.png", 0, 0.07, 1, 0.94);
    s->addText(h3, ofColor(255), "https://docs.google.com/presentation/d/1RI6BnBsJtTBg3djZbD1hDjuhQagPBAUtAqcqoYWQTxU", 0.01, 0.0, 0.9);
    
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

//--------------------------------------------------------------
void ofApp::Lunchmeat(){
    
    
    //s = slideshow.addSlide("Lunchmeat Festival, 20 Oct 2017");
    s = slideshow.addSlide("Acadia Workshop @ AutoDesk, 31 Oct 2017");
    
    s->addText(h2, ofColor(255), "@genekogan", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(255), "genekogan.com", 0.1, 0.4, 0.5);
    s->addText(h2, ofColor(255), "ml4a.github.io", 0.6, 0.3, 0.5);
    s->addText(h2, ofColor(255), "@ml4a_", 0.6, 0.4, 0.5);
    s->start();
    
    // about me
    s = slideshow.addSlide("Music information retrieval (~2008-2011)");
    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
    s->addImage("genre VA", "/Users/gene/bin/misc/sourcetone/genre-AvgVA.jpg", 0.0, 0.4, 0.42, 0.6);
    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
    
    s = slideshow.addSlide("Musical instruments (w/ Jeff Snyder) ~2014");
    s->addImage("tweet", "/Users/gene/Web/genekogan.github.io/_site/images/birl/birl1.jpg", 0.0, 0.0, 1, 0.35);
    s->addImage("tweet", "/Users/gene/bin/misc/Snyderphonics_Manta.jpg", 0.0, 0.365, 1, 0.64);
    
    s = slideshow.addSlide("Media arts / creative tech");
    s->addMovie("simulation", "/Users/gene/bin/images/VertexFields2_01.29.2012.mov", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Generative art");
    s->addMovie("genart", "/Users/gene/bin/images/instagram/bits.mp4", true, 0, 0, 0.333333, 0.5);
    s->addMovie("genart", "/Users/gene/bin/images/instagram/constellations.mp4", true, 0.3333, 0, 0.33333, 0.5);
    s->addMovie("genart", "/Users/gene/bin/images/instagram/subdivision_2.mp4", true, 0.66666, 0.0, 0.3333, 0.5);
    s->addMovie("genart", "/Users/gene/bin/images/instagram/old/vert1.mp4", true, 0, 0.5, 0.333333, 0.5);
    s->addMovie("genart", "/Users/gene/bin/images/instagram/video/cubes.mp4", true, 0.33333, 0.5, 0.333333, 0.5);
    s->addMovie("genart", "/Users/gene/bin/images/instagram/old/polar_glitch2.mp4", true, 0.66666, 0.5, 0.333333, 0.5);
    
    s = slideshow.addSlide("Nature and simulation");
    s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/listening-to-the-ocean-10.jpg", 0.505, 0, 0.5, 1);
    s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/generator5.png", 0, 0, 0.5, 1);
    
    s = slideshow.addSlide("Kinect Projector Toolkit");
    s->addMovie("KPT", "/Users/gene/bin/opera-toolkit/colin-ribbons-2_nosound.mp4", true, 0.0, 0, 0.5, 0.6);
    s->addMovie("KPT", "/Users/gene/bin/kinect-projector-toolkit/Silhouettes @ Saigon Ranger_nosound.mp4", true, 0.4, 0.4, 0.64, 0.62);
    
    s = slideshow.addSlide("Machine Yearning (2014)");
    s->addMovie("machine yearning", "/Users/gene/bin/machine-yearning/machine-yearning-gopro.mp4", true, 0.0, 0, 1, 1);
    
    s = slideshow.addSlide("Mass collaboration: EcoHacker-Build");
    s->addImage("ecohack", "/Users/gene/bin/ecohacker-build/_mg_7093_14926714478_o.jpg", 0, 0, 1, 1);
    
    
    
    s = slideshow.addSlide("Machine learning + visual art (2015->)");
    s->addMovie("dcgan", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0.026, 0.5, 0.47);
    s->addImage("deepdream", "/Users/gene/bin/misc/stock/building-dreams.png", 0, 0.515, 0.5, 0.48);
    s->addImage("stylenet", "/Users/gene/bin/misc/stock/stylenet-original.png", 0.5, 0.53, 0.5, 0.47);
    s->addImage("synthesizing original", "/Users/gene/bin/misc/stock/synthesizing-original.jpg", 0.5, 0.025, 0.5, 0.48);
    s->addText(h4, ofColor(255), "https://www.youtube.com/watch?v=QYcKCGdZvq4", 0.01, 0.0, 1.0);
    s->addText(h5, ofColor(255), "research.googleblog.com/2015/06/inceptionism-going-deeper-into-neural.html", 0.002, 0.475, 1.0);
    s->addText(h4, ofColor(255), "https://arxiv.org/abs/1508.06576", 0.6, 0.51, 1.0);
    s->addText(h4, ofColor(255), "http://www.evolvingai.org/synthesizing", 0.6, 0.0, 1.0);
    
    
    
    
    ////////////////////////////////////////////////////////////
    ///// LAPNORM
    
    s = slideshow.addSlide("What are neural networks?");
    s->addImage("lenet", "/Users/gene/bin/misc/stock/lenet.png", 0, 0, 1, 0.4);
    s->addImage("alexnet", "/Users/gene/bin/misc/stock/alexnet2.png", 0, 0.5, 1, 0.4);
    s->addText(h3, ofColor(255), "Lenet (LeCun et al, 1998) [http://yann.lecun.com/exdb/lenet/]", 0.05, 0.4, 0.9);
    s->addText(h3, ofColor(255), "AlexNet 2012 [via https://jeremykarnowski.wordpress.com/2015/07/15/alexnet-visualization/]", 0.05, 0.92, 0.9);
    
    s = slideshow.addSlide("Convolutional neural network demo");
    s->setBackgroundFunction(this, &ofApp::drawBgWhite);
    CcvForwardPassDemo *ccvd = new CcvForwardPassDemo(s, "ccv", 0, 0, 1, 1);
    s->addAction(ccvd);
    
    s = slideshow.addSlide("What neural networks look for");
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l1_nofilter.png", 0.0, 0.1, 1, 0.8);
    s->addText(h4, ofColor(255), "Visualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]", 0.02, 0.0, 1.0);
    
    s = slideshow.addSlide("What neural networks look for");
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l2.png", 0.01, 0.15, 0.45, 0.7);
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l3.png", 0.47, 0.15, 0.52, 0.7);
    s->addText(h4, ofColor(255), "Visualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]", 0.02, 0.0, 1.0);
    
    
    s = slideshow.addSlide("Channel synthesis");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/harvest.mp4", false, 0.15, 0.15, 0.7, 0.7)->setLoop(false);
    
    //    s = slideshow.addSlide("Channel synthesis");
    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/E1-115_n40_o05_r1.33.mp4", false, -0.005, 0.15, 0.5, 0.7)->setLoop(false);
    //    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/H5-89_n50_o09_r1.33.mp4", true, 0.3333, 0.15, 0.32, 0.7)->setLoop(false);
    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/E6-63_n50_o05_r1.33.mp4", false, 0.505, 0.15, 0.5, 0.7)->setLoop(false);
    
    // low level swatches + high level swatches
    
    s = slideshow.addSlide("InceptionV3 conv2d");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-1_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-7_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-15_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-28_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-52_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A2-12_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A2-25_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A2-27_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed3a");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-8_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-9_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-20_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-31_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-0_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-26_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-36_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-44_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
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
    
    s = slideshow.addSlide("InceptionV3 mixed4b");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E1-42_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E2-91_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E3-15_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E3-17_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-0_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-16_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-17_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-33_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed4c");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F2-32_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F2-41_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F2-64_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F3-187_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F5-7_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F6-17_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F6-29_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F6-54_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed4d");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G1-9_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G1-15_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G2-36_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G2-54_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G2-86_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G3-145_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G6-2_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G6-20_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed4e");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H1-54_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H1-116_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H1-158_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H3-7_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H3-77_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H3-303_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H4-13_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H6-123_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed5a");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J1-51_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J1-198_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J2-69_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J4-8_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J5-81_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J6-16_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J6-53_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J6-109_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    //    s = slideshow.addSlide("t-SNE of favorite swatches");
    //    s->addScrollableImage("t-SNE swatches", "/Users/gene/bin/lapnorm/swatches/favorites/_all_swatches_tsne.png", 0, 0, 1, 1);
    //
    s = slideshow.addSlide("t-SNE of all ~7500 swatches");
    s->addScrollableImage("t-SNE swatches", "/Users/gene/bin/lapnorm/swatches/all/swatches-tsne_large.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/initial_experiments/frame0010 (2).png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/initial_experiments/eureka.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F6-34+G2-139_n11_o08_r1.33_cr4_b0.60.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G3-283+F3-26+H1-54_n11_o08_r1.33_cr0_b0.75.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G3-45+G1-36+H6-23_n15_o08_r1.33_cr5_b0.21.png", 0, 0, 1, 1);
    // s = slideshow.addSlide("Mixing gradients");
    // s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/E6-16+L1-55+G2-76_n10_o07_r1.33.png", 0, 0, 1, 1);
    // s = slideshow.addSlide("Mixing gradients");
    // s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F6-34+G6-2_n20_o07_r1.33.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/D1-152+F1-40+H5-34_n40_o07_r1.33.png", 0, 0, 1, 1);
    // s = slideshow.addSlide("Mixing gradients");
    // s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/D2-13+D2-50+D5-15_n40_o07_r1.33.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F6-9+D1-27+D5-15_n10_o08_r1.33_cr3_b0.35.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/D5-15+G1-36+D1-133_n15_o08_r1.33_cr3_b0.46.png", 0, 0, 1, 1);
    // s = slideshow.addSlide("Mixing gradients");
    // s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/D6-11+G1-15+D1-189_n40_o07_r1.33.png", 0, 0, 1, 1);
    // s = slideshow.addSlide("Mixing gradients");
    // s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F1-78+D6-52+D1-41_n15_o07_r1.33.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/D3-92+D1-41+F5-40_n15_o08_r1.33_cr4_b0.42.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G1-85+E6-0+F6-54_n20_o07_r1.33.png", 0, 0, 1, 1);
    // s = slideshow.addSlide("Mixing gradients");
    // s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/H3-136+F6-41+H6-72_n40_o07_r1.33.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/large.jpeg", 0, 0, 1, 1);
    
    //    D6-12+D3-92+F1-94_n15_o08_r1.33_cr6_b0.22.png
    //    E2-78+F2-32+G2-38_n10_o08_r1.33_cr5_b0.33.png
    
    
    s = slideshow.addSlide("Feedback and gradient interpolation");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/mask_videos/F1-40+J1-42+G1-34+D6-31+G1-62+H1-225_n16_o04_r1.31_1.05,1.50,1.10.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Feedback and gradient interpolation");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/mask_videos/G2-139+C1-81_n14_o08_r1.30_cr4_b0.05_1.00,1.00,1.00.mp4", true, 0, 0, 1, 1);
    
    //    s = slideshow.addSlide("Feedback and gradient interpolation");
    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/fullfades/hframes2.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Feedback and gradient interpolation");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/fullfades/K18-178+L4-61+K19-55+K07-45+K18-35_m3_b4_o5_i36_c0_s10_norm1.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Moving gradients around");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/testframes2_.mp4", true, 0, 0, 1, 1);
    
    //    s = slideshow.addSlide("Moving gradients around");
    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/testframes9b0_.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Loops");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/loops/_lapnom-loops.mp4", true, 0, 0, 1, 1)->setLoop(true);
    
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
    
    
    
    
    
    
    ////////////////////////////////////////////////////////////
    ///// GENERATIVE MODELS
    
    s = slideshow.addSlide("Generative Models");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/DGN_places_long.jpg", 0.0, 0.1, 1, 0.9);
    s->addText(h4, ofColor(255), "Deep Generator Networks\nNguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.1, 0.01, 1.0);
    
    s = slideshow.addSlide("DGN variety");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/boathouses.png", 0.0, 0.05, 0.57, 0.95);
    s->addImage("classvis", "/Users/gene/bin/synthesizing/buttes.png", 0.573, 0.05, 0.43, 0.95);
    s->addText(h4, ofColor(255), "http://genekogan.com/works/synthesizing/", 0.1, 0.00, 1.0);
    
    s = slideshow.addSlide("DGN (people as artifacts)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/people.png", 0.1, 0.1, 0.8, 0.9);
    s->addText(h3, ofColor(255), "http://genekogan.com/works/synthesizing/", 0.1, 0.00, 1.0);
    
    s = slideshow.addSlide("Deep convolutional generative adversarial networks");
    s->addImage("Mona Lisa", "/Users/gene/bin/dcgan/public/dcgan-glasses.png", 0.0, 0.06, 1.0, 0.94);
    s->addText(h4, ofColor(255), "Radford, Metz, Chintala 2015 (https://arxiv.org/abs/1511.06434)", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("\"Interpolating\" numbers");
    s->addMovie("MNIST interpolations", "/Users/gene/bin/dcgan/summary/digits.mov", true, 0.2, 0.1, 0.6, 0.6);
    
    s = slideshow.addSlide("A Book from the Sky");
    s->addMovie("zloops", "/Users/gene/bin/dcgan/summary/zloops.mp4", true, 0, 0.1, 1, 0.91);
    s->addText(h3, ofColor(255), "http://genekogan.com/works/a-book-from-the-sky/", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("A Book from the Sky");
    s->addMovie("interplations", "/Users/gene/bin/dcgan/public/interpolations_3.mp4", true, 0.1, 0.15, 0.8, 0.6);
    s->addText(h3, ofColor(255), "http://genekogan.com/works/a-book-from-the-sky/", 0.1, 0.0, 0.8);
    
    //    s = slideshow.addSlide("More DCGANs");
    //    s->addImage("manga 1", "/Users/gene/bin/dcgan/public/07_manga_sample1.png", 0, 0.1, 0.48, 0.9);
    //    s->addImage("albums", "/Users/gene/bin/dcgan/public/album-covers-DCGAN.jpg", 0.52, 0.1, 0.475, 0.9);
    //    s->addText(h3, ofColor(255), "https://github.com/mattya/chainer-DCGAN", 0, 0, 1);
    //    s->addText(h3, ofColor(255), "album covers by @AlecRad", 0.51, 0, 1);
    //
    //    s = slideshow.addSlide("PointCloud generation");
    //    s->addText(h3, ofColor(255), "Representation Learning and Adversarial Generation of 3D Point Clouds\nAchlioptas et all (https://arxiv.org/abs/1707.02392", 0.1, 0.0, 0.8);
    //    s->addImage("PointCloud", "/Users/gene/bin/misc/stock/pointcloud-GAN.png", 0.0, 0.15, 1.0, 0.8);
    
    //    s = slideshow.addSlide("WaveNet");
    //    s->addText(h3, ofColor(255), "https://deepmind.com/blog/wavenet-generative-model-raw-audio/", 0.05, 0.01, 0.9);
    //    s->addMovie("wavenet zoom", "/Users/gene/bin/wavenet/blogpost/wavenet-zoom.mp4", true, 0.05, 0.1, 0.4, 0.4);
    //    s->addMovie("wavenet conv", "/Users/gene/bin/wavenet/blogpost/wavenet-dilated-convolutions.mp4", true, 0.55, 0.1, 0.4, 0.4);
    //    s->addSound("wavenet 1", "/Users/gene/bin/wavenet/blogpost/wavenet-1.wav", h4, false, false, 0.05, 0.6, 0.25, 0.04);
    //    s->addSound("wavenet 2", "/Users/gene/bin/wavenet/blogpost/wavenet-2.wav", h4, false, false, 0.05, 0.66, 0.25, 0.04);
    //    s->addSound("voice 1", "/Users/gene/bin/wavenet/blogpost/avocado-1.wav", h4, false, false, 0.05, 0.76, 0.25, 0.04);
    //    s->addSound("voice 2", "/Users/gene/bin/wavenet/blogpost/avocado-2.wav", h4, false, false, 0.05, 0.82, 0.25, 0.04);
    //    s->addSound("babble 1", "/Users/gene/bin/wavenet/blogpost/speaker-1.wav", h4, false, false, 0.35, 0.6, 0.25, 0.04);
    //    s->addSound("babble 2", "/Users/gene/bin/wavenet/blogpost/speaker-2.wav", h4, false, false, 0.35, 0.66, 0.25, 0.04);
    //    s->addSound("babble 3", "/Users/gene/bin/wavenet/blogpost/speaker-3.wav", h4, false, false, 0.35, 0.72, 0.25, 0.04);
    //    s->addSound("babble 4", "/Users/gene/bin/wavenet/blogpost/speaker-4.wav", h4, false, false, 0.35, 0.78, 0.25, 0.04);
    //    s->addSound("babble 5", "/Users/gene/bin/wavenet/blogpost/speaker-5.wav", h4, false, false, 0.35, 0.84, 0.25, 0.04);
    //    s->addSound("babble 6", "/Users/gene/bin/wavenet/blogpost/speaker-6.wav", h4, false, false, 0.35, 0.9, 0.25, 0.04);
    //    s->addSound("jazz 1", "/Users/gene/bin/wavenet/blogpost/sample_1.wav", h4, false, false, 0.65, 0.6, 0.25, 0.04);
    //    s->addSound("jazz 2", "/Users/gene/bin/wavenet/blogpost/sample_2.wav", h4, false, false, 0.65, 0.66, 0.25, 0.04);
    //    s->addSound("jazz 3", "/Users/gene/bin/wavenet/blogpost/sample_3.wav", h4, false, false, 0.65, 0.72, 0.25, 0.04);
    //    s->addSound("jazz 4", "/Users/gene/bin/wavenet/blogpost/sample_4.wav", h4, false, false, 0.65, 0.78, 0.25, 0.04);
    //    s->addSound("jazz 5", "/Users/gene/bin/wavenet/blogpost/sample_5.wav", h4, false, false, 0.65, 0.84, 0.25, 0.04);
    //    s->addSound("jazz 6", "/Users/gene/bin/wavenet/blogpost/sample_6.wav", h4, false, false, 0.65, 0.9, 0.25, 0.04);
    
    //    s = slideshow.addSlide("Video prediction");
    //    s->addMovie("Video GANs", "/Users/gene/bin/dcgan/video_gans.mp4", true, 0.0, 0.1, 1, 0.91);
    //    s->addText(h4, ofColor(255), "Carl Vondrick (http://web.mit.edu/vondrick/tinyvideo/)", 0.0, 0.0, 0.8);
    
    //    s = slideshow.addSlide("Natural language generation");
    //    s->addImage("fb", "/Users/gene/bin/misc/stock/neural-storyteller.png", 0, 0.2, 1, 0.6);
    //    s->addText(h3, ofColor(255), "https://github.com/ryankiros/neural-storyteller", 0.02, 0.00, 0.8);
    //
    //    s = slideshow.addSlide("Dense captioning Pouff's grocery trip");
    //    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream_grocery.mp4", true, 0, 0.08, 1, 0.93);
    //    s->addText(h4, ofColor(255), "original: https://www.youtube.com/watch?v=DgPaCWJL7XI", 0.01, 0.0, 0.99);
    //
    //    s = slideshow.addSlide("StackGAN");
    //    s->addText(h3, ofColor(255), "Text to Photo-realistic Image Synthesis with Stacked GANs\nZhang et al (https://arxiv.org/abs/1612.03242)", 0.1, 0.0, 0.8);
    //    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-bird2.jpg", 0.0, 0.12, 1.0, 0.4);
    //    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-flower1.jpg", 0.0, 0.53, 1.0, 0.4);
    //    s = slideshow.addSlide("StackGAN");
    //    s->addText(h3, ofColor(255), "Text to Photo-realistic Image Synthesis with Stacked GANs\nZhang et al (https://arxiv.org/abs/1612.03242)", 0.1, 0.0, 0.8);
    //    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-bird_interp.png", 0.0, 0.15, 1.0, 0.8);
    
    // pix2pix
    
    s = slideshow.addSlide("Image-to-Image Translation with Conditional Adversarial Nets");
    s->addImage("fb", "/Users/gene/bin/pix2pix/teaser_v3a.png", 0.0, 0.04, 1.0, 0.96);
    s->addText(h4, ofColor(255), "Isola et al (phillipi.github.io/pix2pix/)", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("Invisible Cities");
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/milan_style_transfer_x4.jpg", 0.0, 0.04, 1, 0.96);
    s->addText(h4, ofColor(255), "opendot.github.io/ml4a-invisible-cities/", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("Invisible Cities");
    s->addText(h4, ofColor(255), "opendot.github.io/ml4a-invisible-cities/", 0.02, 0.00, 0.8);
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/handdrawn1.jpg", 0.0, 0.1, 1.0, 0.45);
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/handdrawn2.jpg", 0.0, 0.555, 1.0, 0.45);
    
    s = slideshow.addSlide("Real-time pix2pix");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/invisible_cities/invisible_cities-draw.mp4", false, 0.05, 0.05, 0.9, 0.9);
    s->addText(h3, ofColor(255), "github.com/genekogan/InvisibleCities/", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("Pix2Pix + FaceTracker");
    s->addMovie("mario", "/Users/gene/bin/pix2pix/quasimondo_facepix2pix.mp4", true, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Meat puppet");
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/trump_face_train.png", 0.0, 0.0, 0.45, 1.0);
    s->addImage("fb", "/Users/gene/bin/misc/stock/arrow.png", 0.46, 0.0, 0.08, 1.0);
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/gene_face_test.png", 0.55, 0.0, 0.45, 1.0);
    
    s = slideshow.addSlide("Meat puppet");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump_gene1.mp4", true, 0.1, 0.1, 0.8, 0.8);
    
    //    s = slideshow.addSlide("Meat puppet @ ECAL");
    //    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump-meatpuppet-pix2pix-ecal.mp4", true, 0.0, 0.0, 1.0, 1.0)->setPosition(0.25);
    
    s = slideshow.addSlide("CycleGAN");
    s->addImage("fb", "/Users/gene/bin/misc/cyclegan/cyclegan.jpg", 0.0, 0.07, 1, 0.95);
    s->addText(h3, ofColor(255), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("CycleGAN");
    s->addMovie("fb", "/Users/gene/bin/misc/cyclegan/cyclegan_zebra.mp4", true, 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(255), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("CycleGAN fail");
    s->addImage("fb", "/Users/gene/bin/misc/cyclegan/putin_zebra.jpeg", 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(255), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    
    s = slideshow.addSlide("Style transfer");
    s->addImage("Mona Lisa -> Cubist/Expressionist/Impressionist", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_cubist_expressionist_impressionist.jpg", 0, 0.15, 1, 0.85);
    s->addText(h4, ofColor(255), "Gatys et al, 2015 (arxiv.org/abs/1508.06576)", 0.002, 0, 1.0);
    s->addText(h4, ofColor(255), "Justin Johnson's neural-style (https://github.com/jcjohnson/neural-style)", 0.002, 0.075, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Hokusai");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/hokusai.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_hokusai.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Tarsila");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/tarsilo2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_tarsila.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Roy Liechtenstein");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/liechtenstein.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_liechtenstein.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Wassily Kandinsky");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/kandinsky2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_kandinsky2.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Crab Nebula");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/crab.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_crab.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Egyptian Hieroglyphs");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/egypt.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_egypt.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Google Maps (1)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Google Maps (2)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps2.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Google Maps (3)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps3.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps3_cw08.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Google Maps (4)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps3.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps3_cw15.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Google Maps (5)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps3.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps3.jpg", 0.6, 0.0, 0.4, 1.0);
    
    //    s = slideshow.addSlide("Why is a Raven like a Writing Desk?");
    //    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    //    s->addMovie("AliceNet", "/Users/gene/bin/style-transfer/04_alice/Alice-Stylenet.mov", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Video style with optical flow loss term (Ruder et al, 2016)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("video style", "/Users/gene/bin/style-transfer/10_optical_flow/video-style-transfer-x4-reordered.mp4", true, 0, 0, 1, 1);
    
    
    CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
    s = slideshow.addSlide("Style transfer");
    s->addAction(cmd);
    // cmd->setStyleModel("/Users/gene/bin/style-transfer/models/kandinsky_e2_full512.model");
    cmd->setStyleModel("/Users/gene/bin/style-transfer/models/cubist.model");
    
    s = slideshow.addSlide("Cubist Mirror");
    s->addMovie("altai mirror", "/Users/gene/bin/alt-ai/cubistmirror_v1.mp4", true, 0, 0, 0.61, 0.67);
    s->addMovie("nabi mirror", "/Users/gene/bin/alt-ai/cubistmirror-nabi.mp4", true, 0.55, 0.2, 0.455, 0.8);
    
    
    ////////////////////////////////////////////////////////////
    ///// DEMOS + ML4A
    
    
    //    s = slideshow.addSlide("Wolfenstein Controlled by Sound");
    //    s->addMovie("wolfenstein", "/Users/gene/bin/ml4a/Wolfenstein 3D controlled by sound.mp4", false, 0, 0.05, 1, 0.96);
    //    s->addText(h4, ofColor(255), "Stoj (Andreas Refsgaard & Lasse Korsgaard) https://vimeo.com/207831279", 0.00, 0.00, 0.8);
    //    s->start();
    
    //    slideshow.setPage(s);
    
    
    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.1, 0.1, 0.8, 0.8);
    
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
    
    s = slideshow.addSlide("ml4a.github.io/guides");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-guides-index.png", 0, 0, 1, 1);
    
    
    
    s = slideshow.addSlide("Guides");
    s->addImage("workshop", "/Users/gene/bin/ml4a/xdegrees_samples.jpg", 0, 0, 0.5, 0.5);
    //s->addImage("workshop", "/Users/gene/bin/ml4a/nabimusic2.png", 0.51, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, 0.51, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/ml4a/neural-painter/dog-cat-interp.mp4", true, 0.0, 0.51, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/bin/tsne/tsne-animals-highlights.png", 0.51, 0.51, 0.5, 0.5);
    
    //    s = slideshow.addSlide("Hallucinating faces with PCA");
    //    s->addMovie("eigenface", "/Users/gene/bin/ml4a/eigenface/eigenface_grid_8x4.mp4", true, 0, 0.06, 1, 0.95);
    //    s->addText(h4, ofColor(255), "https://github.com/ml4a/ml4a-guides/tree/master/notebooks/Eigenfaces.ipynb", 0.1, 0, 0.8);
    
    //    s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
    //    s->addImage("yolo", "/Users/gene/bin/ml4a/ReverseImageSearch/yolo-screen1.png", 0, 0, 1, 1);
    
    
    //    s = slideshow.addSlide("Guides");
    //    s->addImage("workshop", "/Users/gene/bin/ml4a/nabimusic2.png", 0.51, 0, 0.5, 0.5);
    //
    //    //s->addMovie("fb", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, 0.51, 0, 0.5, 0.5);
    //    s->addMovie("fb", "/Users/gene/bin/ml4a/neural-painter/dog-cat-interp.mp4", true, 0.0, 0.51, 0.5, 0.5);
    //    s->addImage("workshop", "/Users/gene/bin/tsne/tsne-animals-highlights.png", 0.51, 0.51, 0.5, 0.5);
    //
    
    //    s = slideshow.addSlide("Guides");
    //    s->addScrollableImage("animal t-sne", "/Users/gene/bin/tsne/tsne-animals.png", 0.0, 0.0, 1.0, 1.0);
    
    s = slideshow.addSlide("t-SNE :: CalTech-256 animals");
    s->addScrollableImage("t-SNE animals", "/Users/gene/bin/tsne/grid_animals2.png", 0, 0, 1, 1);
    
    //    s = slideshow.addSlide("Guides");
    //    s->addImage("workshop", "/Users/gene/bin/ml4a/xdegrees_samples.jpg", 0, 0, 0.5, 0.5);
    
    s = slideshow.addSlide("Audio + Text t-SNEs");
    s->setBackgroundFunction(this, &ofApp::drawBgWhite);
    s->addScrollableImage("wiki t-SNE", "/Users/gene/bin/tsne/wiki-tSNE.png", -0.05, 0.0, 0.72, 0.76);
    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0.48, 0.39, 0.54, 0.63);
    attd->setTsnePath("/Users/gene/Teaching/ML4A/ml4a-guides/data/example-audio-tSNE-drums.json");
    s->addAction(attd);
    attd->start();
    s->addText(h4, ofColor(0), "www.genekogan.com/works/wiki-tSNE", 0.03, 0.8, 0.7);
    s->addText(h4, ofColor(0), "github.com/ml4a/ml4a-ofx", 0.67, 0.3, 0.7);
    
    
    s = slideshow.addSlide("Demos");
    s->addMovie("transfer learning", "/Users/gene/bin/misc/wekinator-coffee-croissant.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("ml4a projects");
    s->addMovie("objectifier", "/Users/gene/bin/misc/prototype_objectifier.mp4", true, 0.0, 0.0, 0.5, 0.49);
    s->addMovie("beta blockers", "/Users/gene/bin/alt-ai/betablockers_nosound.mp4", true, 0.51, 0.5, 0.5, 0.49);
    s->addImage("pdh", "/Users/gene/Web/alt-AI/images/exhibit-corbin.jpg", 0.5, 0.0, 0.5, 0.49);
    s->addImage("seth", "/Users/gene/Web/alt-AI/images/exhibit-seth.jpg", 0.0, 0.5, 0.5, 0.49);
    s->addText(h4, ofColor(255), "Piano Die Hard (Corbin Ordel & Aaron Montoya-Moraga)", 0.51, 0.465, 0.5);
    s->addText(h4, ofColor(255), "Beta blockers (Chino Kim)", 0.51, 0.96, 0.5);
    s->addText(h4, ofColor(255), "Objectifier (Bjoern Karmann)", 0.01, 0.465, 0.5);
    s->addText(h4, ofColor(255), "Neural Recycle (Seth Kranzler)", 0.01, 0.96, 0.5);
    
    s = slideshow.addSlide("python + data science tutorials");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-guide-RIS.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
    s->addImage("yolo", "/Users/gene/bin/ml4a/ReverseImageSearch/yolo-screen1.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("ml4a.github.io/classes");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("ml4a @ itp", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/ml4a @ itp-nyu -- timelapse_crop.mp4", true, 0, 0, 1, 1)->setPositionRandom();
    s->loadAssets();
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-nn.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-hnnat.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Decentralized AI");
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/decentralizedAI/dcai7.png", 0, 0.07, 1, 0.94);
    s->addText(h3, ofColor(255), "https://docs.google.com/presentation/d/1RI6BnBsJtTBg3djZbD1hDjuhQagPBAUtAqcqoYWQTxU", 0.01, 0.0, 0.9);
    
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
void ofApp::WorkshopHubBerlin(){
    WorkshopLunchmeat();
}

void ofApp::WorkshopRMIT() {
    
    
    s = slideshow.addSlide("7 Dec 2017, RMIT");
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.4, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.3, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.4, 0.5);
    s->start();
    
    //    s = slideshow.addSlide("Segments?");
    //    s->addText(h3, ofColor(0), " - Introduction to machine learning & ml4a resources", 0.1, 0.1, 0.8);
    //    s->addText(h3, ofColor(0), " - How neural networks work", 0.1, 0.2, 0.8);
    //    s->addText(h3, ofColor(0), " - Applications of deep neural nets to generative art", 0.1, 0.3, 0.8);
    //    s->addText(h3, ofColor(0), " - Practical: style transfer + deepdream", 0.1, 0.4, 0.8);
    //    s->addText(h3, ofColor(0), " - Practical: pix2pix-tensorflow", 0.1, 0.5, 0.8);
    //    s->addText(h3, ofColor(0), " - Overview of main resources", 0.1, 0.6, 0.8);
    //
    
    s = slideshow.addSlide("About me");
    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
    s->addImage("genre VA", "/Users/gene/bin/misc/sourcetone/genre-AvgVA.jpg", 0.0, 0.4, 0.42, 0.6);
    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
    
    //    s = slideshow.addSlide("Color of Words");
    //    s->addScrollableImage("color of words", "/Users/gene/bin/misc/stock/color-of-words.png", 0, 0, 1, 1);
    
    //    s = slideshow.addSlide("Generative art");
    //    s->addImage("interference", "/Users/gene/bin/images/interference/interference11.png", 0.0, 0, 0.33, 0.5);
    //    s->addImage("interference", "/Users/gene/bin/images/interference/interference14.png", 0.3333, 0, 0.33, 0.5);
    //    s->addImage("interference", "/Users/g ene/bin/images/interference/interference12.png", 0.6666, 0, 0.33, 0.5);
    //    s->addImage("star", "/Users/gene/bin/images/stars/star-00014.png", 0.25, 0.5, 0.25, 0.5);
    //    s->addImage("star", "/Users/gene/bin/images/stars/star-00016.png", 0.5, 0.5, 0.25, 0.5);
    //    s->addImage("star", "/Users/gene/bin/images/stars/star-00011.png", 0, 0.5, 0.25, 0.5);
    //    s->addImage("star", "/Users/gene/bin/images/stars/star-00022.png", 0.75, 0.5, 0.25, 0.5);
    //
    //    s = slideshow.addSlide("Nature and simulation");
    //    s->addMovie("simulation", "/Users/gene/bin/images/Flocking-fast.mp4", true, -0.04, 0.0, 0.65, 0.6);
    //    s->addMovie("simulation", "/Users/gene/bin/images/VertexFields2_01.29.2012.mov", true, 0.42, 0.415, 0.63, 0.6);
    
    s = slideshow.addSlide("Kinect Projector Toolkit");
    s->addMovie("KPT", "/Users/gene/bin/opera-toolkit/colin-ribbons-2_nosound.mp4", true, 0.0, 0, 0.5, 0.6);
    s->addMovie("KPT", "/Users/gene/bin/kinect-projector-toolkit/Silhouettes @ Saigon Ranger 12:5:2014.mp4", true, 0.4, 0.4, 0.64, 0.62);
    
    s = slideshow.addSlide("Musical instruments (w/ Jeff Snyder)");
    s->addImage("tweet", "/Users/gene/Web/genekogan.github.io/_site/images/birl/birl1.jpg", 0.0, 0.0, 1, 0.35);
    s->addImage("tweet", "/Users/gene/bin/misc/Snyderphonics_Manta.jpg", 0.0, 0.365, 1, 0.64);
    
    /////////////////////////////////////////////////
    // OVERVIEW OF ML4A
    
    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Workshops");
    s->addImage("rachel", "/Users/gene/bin/misc/workshops/opendot/30491978563_c7baa100d2_o.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/altai.JPG", 0.5, 0.0, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/influencers3.jpg", 0.0, 0.5, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/opendot1.jpg", 0.5, 0.5, 0.5, 0.48);
    
    //    s = slideshow.addSlide("ml4a.github.io");
    //    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.1, 0.1, 0.8, 0.8);
    
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
    
    s = slideshow.addSlide("t-SNE :: CalTech-256 animals");
    s->addScrollableImage("t-SNE animals", "/Users/gene/bin/tsne/grid_animals2.png", 0, 0, 1, 1);
    
    //    s = slideshow.addSlide("Guides");
    //    s->addImage("workshop", "/Users/gene/bin/ml4a/xdegrees_samples.jpg", 0, 0, 0.5, 0.5);
    
    s = slideshow.addSlide("Audio + Text t-SNEs");
    s->setBackgroundFunction(this, &ofApp::drawBgWhite);
    s->addScrollableImage("wiki t-SNE", "/Users/gene/bin/tsne/wiki-tSNE.png", -0.05, 0.0, 0.72, 0.76);
    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0.48, 0.39, 0.54, 0.63);
    attd->setTsnePath("/Users/gene/Teaching/ML4A/ml4a-guides/data/example-audio-tSNE-drums.json");
    s->addAction(attd);
    attd->start();
    s->addText(h4, ofColor(255), "www.genekogan.com/works/wiki-tSNE", 0.03, 0.8, 0.7);
    s->addText(h4, ofColor(255), "github.com/ml4a/ml4a-ofx", 0.67, 0.3, 0.7);
    
    s = slideshow.addSlide("ml4a-ofx + wekinator");
    s->addMovie("andreas", "/Users/gene/bin/misc/workshops/andreas-ml4a-ofx.mp4", true, 0.0, 0.0, 0.7, 0.5);
    s->addMovie("andreas", "/Users/gene/bin/misc/workshops/andreas-pig-classifier.mp4", true, 0.36, 0.4, 0.7, 0.6);
    
    s = slideshow.addSlide("python notebooks");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-guide-RIS.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-nn.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-hnnat.png", 0, 0, 1, 1);
    
    
    
    
    
    
    s = slideshow.addSlide("Deep generative models");
    s->addMovie("dcgan", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0.026, 0.5, 0.47);
    s->addImage("deepdream", "/Users/gene/bin/misc/stock/building-dreams.png", 0, 0.515, 0.5, 0.48);
    s->addImage("stylenet", "/Users/gene/bin/misc/stock/stylenet-original.png", 0.5, 0.53, 0.5, 0.47);
    s->addImage("synthesizing original", "/Users/gene/bin/misc/stock/synthesizing-original.jpg", 0.5, 0.025, 0.5, 0.48);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=QYcKCGdZvq4", 0.01, 0.0, 1.0);
    s->addText(h5, ofColor(0), "research.googleblog.com/2015/06/inceptionism-going-deeper-into-neural.html", 0.002, 0.475, 1.0);
    s->addText(h4, ofColor(0), "https://arxiv.org/abs/1508.06576", 0.6, 0.51, 1.0);
    s->addText(h4, ofColor(0), "http://www.evolvingai.org/synthesizing", 0.6, 0.0, 1.0);
    
    s = slideshow.addSlide("pix2pix -> generative model as a filter");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/jasper-streetview.mp4", true, 0, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump_gene1.mp4", true, 0.5, 0.0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/pix2pix/memo-painting.mp4", true, 0.0, 0.5, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/pix2pix/brannon-kurzweil.mp4", true, 0.5, 0.5, 0.5, 0.5);
    
    s = slideshow.addSlide("The idea today");
    s->addText(h3, ofColor(0), "Part 1: PCA for poets", 0.1, 0.1, 0.8);
    s->addText(h3, ofColor(0), " - what are neural nets", 0.1, 0.2, 0.8);
    s->addText(h3, ofColor(0), " - how generative models work", 0.1, 0.3, 0.8);
    s->addText(h3, ofColor(0), "Part 2: pix2pix (& CycleGAN)", 0.1, 0.4, 0.8);
    s->addText(h3, ofColor(0), " - implementation options", 0.1, 0.5, 0.8);
    s->addText(h3, ofColor(0), " - tutorial (pre-baked oven)", 0.1, 0.6, 0.8);
    s->addText(h3, ofColor(0), "Part 3: other stuff", 0.1, 0.7, 0.8);
    s->addText(h3, ofColor(0), " - style transfer", 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(0), " - neural synth", 0.1, 0.9, 0.8);
    
    s = slideshow.addSlide("ML generative models");
    s->addImage("pca", "/Users/gene/bin/misc/stock/GaussianScatterPCA.svg.png", 0.0, 0, 0.5, 1.0);
    s->addImage("arrow", "/Users/gene/bin/misc/stock/arrow.png", 0.47, 0.0, 0.06, 1.0);
    s->addImage("deepdream", "/Users/gene/bin/misc/stock/building-dreams.png", 0.48, 0.3, 0.63, 0.5);
    s->addMovie("dcgan", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0.4, 0.0, 0.25, 0.33);
    s->addMovie("Deepzoom", "/Users/gene/bin/strelka/out2.mp4", true, 0.4, 0.67, 0.31, 0.34);
    s->addImage("synthesizing original", "/Users/gene/bin/misc/stock/synthesizing-original.jpg", 0.71, 0.66, 0.3, 0.35);
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_content/deeptrain2.mp4", true, 0.66, 0.0, 0.35, 0.35);
    
    s = slideshow.addSlide("Attributes are not independent");
    s->addImage("pca", "/Users/gene/bin/misc/stock/GaussianScatterPCA.svg.png", 0.0, 0, 0.5, 1.0);
    s->addImage("pca", "/Users/gene/bin/misc/stock/GaussianScatterPCA.svg-flipped.png", 0.5, 0, 0.5, 1.0);
    s->addImage("arrow", "/Users/gene/bin/misc/stock/arrow.png", 0.47, 0.0, 0.06, 1.0);
    
    s = slideshow.addSlide("Attributes are not independent");
    s->addImage("pca", "/Users/gene/bin/misc/stock/GaussianScatterPCA.svg.png", 0.0, 0, 0.5, 1.0);
    s->addImage("pca", "/Users/gene/bin/misc/stock/GaussianScatterPCA.svg-flipped.png", 0.5, 0, 0.5, 1.0);
    s->addImage("arrow", "/Users/gene/bin/misc/stock/arrow.png", 0.47, 0.0, 0.06, 1.0);
    
    s = slideshow.addSlide("Principal component analysis");
    s->addImage("pca", "/Users/gene/bin/misc/stock/fig_pca_principal_component_analysis.png", 0.0, 0.0, 1, 1);
    s->addText(h4, ofColor(0), "http://www.nlpca.org/pca_principal_component_analysis.html", 0.1, 0, 0.8);
    
    s = slideshow.addSlide("Pixel space");
    s->addImage("pixelspace", "/Users/gene/bin/misc/stock/pixel_space_small.jpg", 0.0, 0.0, 0.55, 0.7);
    s->addImage("pixelspace", "/Users/gene/bin/misc/stock/arrow.png", 0.56, 0.0, 0.08, 0.7);
    s->addImage("pixelspace", "/Users/gene/bin/misc/stock/monalisa_pixelated.png", 0.65, 0.0, 0.3, 0.7);
    s->addText(h3, ofColor(0), "\"To deal with hyper-planes in a 14-dimensional space, visualize a 3-D space and say “fourteen” to yourself very loudly. Everyone does it.\"\n - Geoffrey Hinton", 0.01, 0.74, 0.8);
    
    s = slideshow.addSlide("Faces in the wild");
    s->addImage("pixelspace", "/Users/gene/bin/ml4a/eigenface/faces_grid_16x9.png", 0.0, 0.0, 1, 1);
    
    s = slideshow.addSlide("PCA procedure");
    s->addImage("pca", "/Users/gene/bin/misc/stock/pca-pixelspace.png", 0.25, 0.1, 0.35, 0.4);
    s->addImage("pca", "/Users/gene/bin/misc/stock/pca-pcaspace.png", 0.7, 0.1, 0.27, 0.4);
    s->addImage("pca", "/Users/gene/bin/misc/stock/arrow.png", 0.62, 0.1, 0.06, 0.4);
    s->addImage("pca", "/Users/gene/bin/misc/stock/pca-calculate.png", 0.02, 0.15, 0.18, 0.1);
    s->addImage("pca", "/Users/gene/bin/misc/stock/pca-reduce.png", 0.02, 0.25, 0.18, 0.1);
    s->addText(h2, ofColor(0,180,0), "Compute PC + reduce dimensionality", 0.02, 0.001, 0.8);
    s->addBreakpoint();
    s->addText(h2, ofColor(0,180,0), "Reconstruct", 0.02, 0.501, 0.8);
    s->addImage("pca", "/Users/gene/bin/misc/stock/pca-pcaspace.png", 0.25, 0.6, 0.27, 0.4);
    s->addImage("pca", "/Users/gene/bin/misc/stock/pca-pixelspace.png", 0.62, 0.6, 0.35, 0.4);
    s->addImage("pca", "/Users/gene/bin/misc/stock/arrow.png", 0.53, 0.6, 0.06, 0.4);
    s->addImage("pca", "/Users/gene/bin/misc/stock/pca-reconstruct.png", 0.02, 0.65, 0.18, 0.1);
    
    s = slideshow.addSlide("Reconstructions, n = {2000, 1000, 500, 100, 50, 10, 2, 1}");
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_29_original.png", 0.1, 0.15, 0.3, 0.3);
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_29_reconstructed.png", 0.0, 0.54, 1, 0.3);
    s->addText(h4, ofColor(0), "https://github.com/ml4a/ml4a-guides/tree/master/notebooks/Eigenfaces.ipynb", 0.1, 0, 0.8);
    
    s = slideshow.addSlide("Reconstructions, n = {2000, 1000, 500, 100, 50, 10, 2, 1}");
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_2_original.png", 0, 0, 0.15, 0.195);
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_2_reconstructed.png", 0.15, 0, 0.85, 0.195);
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_15_original.png", 0, 0.2, 0.15, 0.195);
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_15_reconstructed.png", 0.15, 0.2, 0.85, 0.195);
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_17_original.png", 0, 0.4, 0.15, 0.195);
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_17_reconstructed.png", 0.15, 0.4, 0.85, 0.195);
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_19_original.png", 0, 0.6, 0.15, 0.195);
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_19_reconstructed.png", 0.15, 0.6, 0.85, 0.195);
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_28_original.png", 0, 0.6, 0.15, 0.195);
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_28_reconstructed.png", 0.15, 0.6, 0.85, 0.195);
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_24_original.png", 0, 0.8, 0.15, 0.195);
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_24_reconstructed.png", 0.15, 0.8, 0.85, 0.195);
    
    // random numbers?
    s = slideshow.addSlide("Interpolating between face codes");
    s->addImage("eigenface", "/Users/gene/bin/ml4a/eigenface/interpolated1.png", 0, 0.05, 1.0, 0.15);
    s->addImage("eigenface", "/Users/gene/bin/ml4a/eigenface/interpolated2.png", 0, 0.21, 1.0, 0.15);
    s->addImage("eigenface", "/Users/gene/bin/ml4a/eigenface/interpolated3.png", 0, 0.37, 1.0, 0.15);
    s->addImage("eigenface", "/Users/gene/bin/ml4a/eigenface/interpolated4.png", 0, 0.53, 1.0, 0.15);
    s->addImage("eigenface", "/Users/gene/bin/ml4a/eigenface/interpolated5.png", 0, 0.69, 1.0, 0.15);
    s->addImage("eigenface", "/Users/gene/bin/ml4a/eigenface/interpolated6.png", 0, 0.85, 1.0, 0.15);
    
    s = slideshow.addSlide("Hallucinating faces");
    s->addImage("eigenface", "/Users/gene/bin/ml4a/eigenface/hallucinated_faces.png", 0, 0.055, 1, 0.943);
    s->addText(h4, ofColor(0), "https://github.com/ml4a/ml4a-guides/tree/master/notebooks/Eigenfaces.ipynb", 0.1, 0, 0.8);
    
    s = slideshow.addSlide("Nightmare");
    s->addMovie("eigenface", "/Users/gene/bin/ml4a/eigenface/eigenface_grid_8x4.mp4", true, 0, 0.06, 1, 0.95);
    s->addText(h4, ofColor(0), "https://github.com/ml4a/ml4a-guides/tree/master/notebooks/Eigenfaces.ipynb", 0.1, 0, 0.8);
    
    s = slideshow.addSlide("Autoencoders");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder.png", 0, 0, 1, 0.3);
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder_net.png", 0, 0.3, 1, 0.65);
    s->addText(h4, ofColor(0), "world's most expensive identity function", 0.01, 0.93, 0.8);
    // samples left -> right
    
    
    ///////////////////
    // Insert neural net stuff
    
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
    
    //    s = slideshow.addSlide("Convnet geometry (volume interpretation)");
    //    s->addImage("volumes", "/Users/gene/bin/misc/stock/cnn_volumes.jpg", 0.0, 0.0, 1.0, 1.0);
    //    s->addText(h4, ofColor(0), "http://cs231n.stanford.edu/slides/winter1516_lecture2.pdf", 0.1, 0.05, 1);
    
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
    
    
    //////////////////
    // back to gen models
    
    
    s = slideshow.addSlide("so.... back to Autoencoders");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder.png", 0, 0, 1, 0.3);
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder_net.png", 0, 0.3, 1, 0.65);
    s->addText(h4, ofColor(0), "world's most expensive identity function", 0.01, 0.93, 0.8);
    // samples left -> right
    
    s = slideshow.addSlide("Reconstructions MNIST");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoders_mnist_reconstruction.png", 0, 0, 1, 1);
    
    
    // GANS + DCGANs + A book from the sky + Zero Likes + VGAN
    
    s = slideshow.addSlide("Generative adversarial nets (Goodfellow et al)");
    s->addImage("Mona Lisa", "/Users/gene/bin/misc/stock/GANs.png", 0.0, 0.0, 1.0, 1.0);
    
    s = slideshow.addSlide("Deep convolutional generative adversarial network");
    s->addImage("Mona Lisa", "/Users/gene/bin/misc/stock/faces_128_filter_samples.png", 0.0, 0.15, 1.0, 0.86);
    s->addText(h4, ofColor(0), "Radford, Metz, Chintala", 0.1, 0.0, 0.8);
    s->addText(h4, ofColor(0), "arxiv.org/abs/1511.06434", 0.1, 0.08, 0.8);
    
    s = slideshow.addSlide("Arithmetic on generated faces");
    s->addImage("smiling arithmetic", "/Users/gene/bin/misc/stock/faces_arithmetic_collage1.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "Radford, Metz, Chintala (arxiv.org/abs/1511.06434)", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("Interpolating faces");
    s->addMovie("mymov2", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "Radford, Metz, Chintala (arxiv.org/abs/1511.06434)", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("\"Interpolating\" numbers");
    s->addMovie("MNIST interpolations", "/Users/gene/bin/dcgan/summary/digits.mov", true, 0.2, 0.1, 0.6, 0.6);
    
    s = slideshow.addSlide("HIT-OR3C");
    s->addScrollableImage("Actuals", "/Users/gene/bin/dcgan/summary/actual.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Fake (R) + Real (L)");
    s->addImage("Mona Lisa", "/Users/gene/bin/dcgan/summary/fakereal.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("A Book from the Sky (Dec 2015)");
    s->addMovie("zloops", "/Users/gene/bin/dcgan/summary/zloops.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Character interpolations");
    s->addMovie("interplations", "/Users/gene/bin/dcgan/summary/interpolations.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Radical interpolations");
    s->addText(h3, ofColor(0), "interpolations across characters sharing the same radical often appear to preserve it", 0.1, 0.0, 0.8);
    s->addMovie("radical interpolations", "/Users/gene/bin/dcgan/summary/radinterpolation.mp4", true, 0, 0.2, 1, 0.8);
    
    s = slideshow.addSlide("Arithmetic tricks");
    s->addMovie("arithmetic", "/Users/gene/bin/dcgan/public/arithmetic2.mp4", true, 0.1, 0.2, 0.8, 0.6);
    
    s = slideshow.addSlide("DCGAN flowers");
    s->addImage("flowers", "/Users/gene/bin/dcgan/public/07_flowers.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://twitter.com/vintermann/status/675599478494208000", 0, 0, 1);
    
    s = slideshow.addSlide("DCGAN Manga");
    s->addImage("manga 1", "/Users/gene/bin/dcgan/public/07_manga_sample1.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://github.com/mattya/chainer-DCGAN", 0, 0, 1);
    
    s = slideshow.addSlide("DCGAN Manga interpolations");
    s->addImage("manga 2", "/Users/gene/bin/dcgan/public/07_manga_sample2.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://github.com/mattya/chainer-DCGAN", 0, 0, 1);
    
    
    s = slideshow.addSlide("@zero_likes (Sam Hains)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addImage("zero_likes", "/Users/gene/bin/dcgan/zero_likes/zero_likes-selfie.png", 0.0, 0.05, 1, 0.9);
    
    s = slideshow.addSlide("@zero_likes (Sam Hains)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addImage("zero_likes", "/Users/gene/bin/dcgan/zero_likes/zero_likes-doglooks.png", 0.0, 0.05, 1, 0.9);
    
    s = slideshow.addSlide("@zero_likes (Sam Hains)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addImage("zero_likes", "/Users/gene/bin/dcgan/zero_likes/zero_likes-sandwich.png", 0.0, 0.05, 1, 0.9);
    
    // vgan
    s = slideshow.addSlide("Video prediction GANs");
    s->addMovie("Video GANS", "/Users/gene/bin/dcgan/video_gans.mp4", true, 0.0, 0.03, 1, 1);
    s->addText(h4, ofColor(0), "Carl Vondrick (http://web.mit.edu/vondrick/tinyvideo/)", 0.0, 0.0, 0.8);
    
    s = slideshow.addSlide("loading video gans!");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("Loading VGAN", "/Users/gene/bin/dcgan/loading_vgan.mp4", true, 0.0, 0.0, 1, 1);
    
    
    // DGN
    
    s = slideshow.addSlide("Deep Generator Networks");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/DGN_architecture.jpg", 0.0, 0.1, 1, 0.41);
    s->addImage("classvis", "/Users/gene/bin/misc/stock/class-synthesis-deepgen.png", 0.0, 0.52, 1, 0.48);
    s->addText(h4, ofColor(0), "Nguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.15, 0.01, 1.0);
    s->start();
    
    
    s = slideshow.addSlide("DGN CaffeNet");
    s->addScrollableImage("classvis", "/Users/gene/bin/synthesizing/synthesizing-caffenet-tSNE.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("DGN convergence");
    s->addText(h4, ofColor(0), "https://github.com/Evolving-AI-Lab/synthesizing", 0.15, 0.00, 1.0);
    ofxPPMovie *mov3 = s->addMovie("macaw", "/Users/gene/bin/synthesizing/macaw.mov", true, 0.05, 0.05, 0.9, 0.9);
    mov3->setLoop(false);
    
    s = slideshow.addSlide("DGN convergence");
    ofxPPMovie *mov = s->addMovie("cheeseburger", "/Users/gene/bin/synthesizing/teapotnew.mov", true, 0.02, 0.1, 0.46, 0.8);
    mov->setLoop(false);
    ofxPPMovie *mov2 = s->addMovie("teapot", "/Users/gene/bin/synthesizing/cheeseburgernew.mov", true, 0.52, 0.1, 0.46, 0.8);
    mov2->setLoop(false);
    
    s = slideshow.addSlide("DGN (people)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/people.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("DGN (boathouses)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/boathouses.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("Plug & Play Generative Networks");
    s->addImage("PPGN", "/Users/gene/bin/misc/ppgn_image_captioning.jpg", 0, 0.05, 1, 0.97);
    s->addText(h4, ofColor(0), "http://www.evolvingai.org/ppgn", 0.1, 0.0, 0.8);
    
    
    ////////////////////////
    // pix2pix
    
    s = slideshow.addSlide("Image-to-Image Translation with Conditional Adversarial Nets");
    s->addImage("fb", "/Users/gene/bin/pix2pix/teaser_v3a.png", 0.0, 0.04, 1.0, 0.96);
    s->addText(h3, ofColor(100), "phillipi.github.io/pix2pix/", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("Invisible Cities");
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/milan_style_transfer_x4.jpg", 0.0, 0.04, 1, 0.96);
    s->addText(h3, ofColor(100), "opendot.github.io/ml4a-invisible-cities/", 0.02, 0.00, 0.8);
    
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
    s->addText(h3, ofColor(100), "github.com/genekogan/InvisibleCities/", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("Pix2Pix experiment (Ildar Iakubov)");
    s->addMovie("fb", "/Users/gene/bin/strelka/ildar-pix2pix.mp4", false, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Pix2Pix streetview (Jasper van Loenen)");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/jasper-streetview.mp4", false, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Pix2Pix person-to-person (Brannon Dorsey)");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/brannon-kurzweil.mp4", false, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Meat puppet");
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/trump_face_train.png", 0.0, 0.0, 0.45, 1.0);
    s->addImage("fb", "/Users/gene/bin/misc/stock/arrow.png", 0.46, 0.0, 0.08, 1.0);
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/gene_face_test.png", 0.55, 0.0, 0.45, 1.0);
    
    s = slideshow.addSlide("Meat puppet");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump_gene1.mp4", false, 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Meat puppet @ ECAL");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump-meatpuppet-pix2pix-ecal.mp4", true, 0.0, 0.0, 1.0, 1.0)->setPosition(0.25);
    
    s = slideshow.addSlide("Pix2Pix + webcam (Memo Akten)");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/memo-painting.mp4", true, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Pix2Pix HD!");
    s->addMovie("fb", "/Users/gene/bin/misc/High-Resolution Image Synthesis and Semantic Manipulation with Conditional GANs.mp4", true, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("CycleGAN");
    s->addImage("fb", "/Users/gene/bin/misc/cyclegan/cyclegan.jpg", 0.0, 0.07, 1, 0.95);
    s->addText(h3, ofColor(100), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("CycleGAN");
    s->addMovie("fb", "/Users/gene/bin/misc/cyclegan/cyclegan_zebra.mp4", true, 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(100), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("CycleGAN fail");
    s->addImage("fb", "/Users/gene/bin/misc/cyclegan/putin_zebra.jpeg", 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(100), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("GPU Options");
    s->addText(h3, ofColor(0), "Amazon EC2, Google Cloud", 0.1, 0.1, 0.8);
    s->addText(h3, ofColor(0), "FloydHub", 0.1, 0.2, 0.8);
    s->addText(h3, ofColor(0), "Paperspace", 0.1, 0.3, 0.8);
    s->addText(h3, ofColor(0), "Buy your own!", 0.1, 0.4, 0.8);
    
}

void ofApp::RMITSymposium() {
    //s = slideshow.addSlide("Lunchmeat Festival, 20 Oct 2017");
    //s = slideshow.addSlide("Symposium at RMIT, 8 Dec 2017");
	s = slideshow.addSlide("Royal College of Art, 24 Jan 2018");
    
    s->addText(h2, ofColor(255), "@genekogan", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(255), "genekogan.com", 0.1, 0.4, 0.5);
    s->addText(h2, ofColor(255), "ml4a.github.io", 0.6, 0.3, 0.5);
    s->addText(h2, ofColor(255), "@ml4a_", 0.6, 0.4, 0.5);
    s->start();
    
    // about me
    s = slideshow.addSlide("Music information retrieval (~2008-2011)");
    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
    s->addImage("genre VA", "/Users/gene/bin/misc/sourcetone/genre-AvgVA.jpg", 0.0, 0.4, 0.42, 0.6);
    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
    
    s = slideshow.addSlide("Musical instruments (w/ Jeff Snyder) ~2014");
    s->addImage("tweet", "/Users/gene/Web/genekogan.github.io/_site/images/birl/birl1.jpg", 0.0, 0.0, 1, 0.35);
    s->addImage("tweet", "/Users/gene/bin/misc/Snyderphonics_Manta.jpg", 0.0, 0.365, 1, 0.64);
    
    s = slideshow.addSlide("Media arts / creative tech");
    s->addMovie("simulation", "/Users/gene/bin/images/VertexFields2_01.29.2012.mov", true, 0, 0, 1, 1);
    
    //        s = slideshow.addSlide("Generative art");
    //        s->addMovie("genart", "/Users/gene/bin/images/instagram/bits.mp4", true, 0, 0, 0.333333, 0.5);
    //        s->addMovie("genart", "/Users/gene/bin/images/instagram/constellations.mp4", true, 0.3333, 0, 0.33333, 0.5);
    //        s->addMovie("genart", "/Users/gene/bin/images/instagram/subdivision_2.mp4", true, 0.66666, 0.0, 0.3333, 0.5);
    //        s->addMovie("genart", "/Users/gene/bin/images/instagram/old/vert1.mp4", true, 0, 0.5, 0.333333, 0.5);
    //        s->addMovie("genart", "/Users/gene/bin/images/instagram/video/cubes.mp4", true, 0.33333, 0.5, 0.333333, 0.5);
    //        s->addMovie("genart", "/Users/gene/bin/images/instagram/old/polar_glitch2.mp4", true, 0.66666, 0.5, 0.333333, 0.5);
    
    s = slideshow.addSlide("Nature and simulation");
    s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/listening-to-the-ocean-10.jpg", 0.505, 0, 0.5, 1);
    s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/generator5.png", 0, 0, 0.5, 1);
    
    s = slideshow.addSlide("Kinect Projector Toolkit");
    s->addMovie("KPT", "/Users/gene/bin/opera-toolkit/colin-ribbons-2_nosound.mp4", true, 0.0, 0, 0.5, 0.6);
    s->addMovie("KPT", "/Users/gene/bin/kinect-projector-toolkit/Silhouettes @ Saigon Ranger_nosound.mp4", true, 0.4, 0.4, 0.64, 0.62);
    
    s = slideshow.addSlide("Machine Yearning (2014)");
    s->addMovie("machine yearning", "/Users/gene/bin/machine-yearning/machine-yearning-gopro.mp4", true, 0.0, 0, 1, 1);
    
    //        s = slideshow.addSlide("Mass collaboration: EcoHacker-Build");
    //        s->addImage("ecohack", "/Users/gene/bin/ecohacker-build/_mg_7093_14926714478_o.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Machine learning + visual art (2015->)");
    s->addMovie("dcgan", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0.026, 0.5, 0.47);
    s->addImage("deepdream", "/Users/gene/bin/misc/stock/building-dreams.png", 0, 0.515, 0.5, 0.48);
    s->addImage("stylenet", "/Users/gene/bin/misc/stock/stylenet-original.png", 0.5, 0.53, 0.5, 0.47);
    s->addImage("synthesizing original", "/Users/gene/bin/misc/stock/synthesizing-original.jpg", 0.5, 0.025, 0.5, 0.48);
    s->addText(h4, ofColor(255), "https://www.youtube.com/watch?v=QYcKCGdZvq4", 0.01, 0.0, 1.0);
    s->addText(h5, ofColor(255), "research.googleblog.com/2015/06/inceptionism-going-deeper-into-neural.html", 0.002, 0.475, 1.0);
    s->addText(h4, ofColor(255), "https://arxiv.org/abs/1508.06576", 0.6, 0.51, 1.0);
    s->addText(h4, ofColor(255), "http://www.evolvingai.org/synthesizing", 0.6, 0.0, 1.0);
    
    
    s = slideshow.addSlide("Neural synthesis");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/nips/NIPS_GeneKogan_new.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Invisible Cities");
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/milan_style_transfer_x4.jpg", 0.0, 0.04, 1, 0.96);
    s->addText(h4, ofColor(255), "opendot.github.io/ml4a-invisible-cities/", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("Invisible Cities");
    s->addText(h4, ofColor(255), "opendot.github.io/ml4a-invisible-cities/", 0.02, 0.00, 0.8);
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/handdrawn1.jpg", 0.0, 0.1, 1.0, 0.45);
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/handdrawn2.jpg", 0.0, 0.555, 1.0, 0.45);
    
    s = slideshow.addSlide("Meat puppet");
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/trump_face_train.png", 0.0, 0.0, 0.45, 1.0);
    s->addImage("fb", "/Users/gene/bin/misc/stock/arrow.png", 0.46, 0.0, 0.08, 1.0);
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/gene_face_test.png", 0.55, 0.0, 0.45, 1.0);
    
    
    
    CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
    s = slideshow.addSlide("Style transfer");
    s->addAction(cmd);
    // cmd->setStyleModel("/Users/gene/bin/style-transfer/models/kandinsky_e2_full512.model");
    cmd->setStyleModel("/Users/gene/bin/style-transfer/models/cubist.model");
    
    //        s = slideshow.addSlide("Cubist Mirror");
    //        s->addMovie("altai mirror", "/Users/gene/bin/alt-ai/cubistmirror_v1.mp4", true, 0, 0, 0.61, 0.67);
    //        s->addMovie("nabi mirror", "/Users/gene/bin/alt-ai/cubistmirror-nabi.mp4", true, 0.55, 0.2, 0.455, 0.8);
    
    
    ////////////////////////////////////////////////////////////
    ///// DEMOS + ML4A
    
    
    //    s = slideshow.addSlide("Wolfenstein Controlled by Sound");
    //    s->addMovie("wolfenstein", "/Users/gene/bin/ml4a/Wolfenstein 3D controlled by sound.mp4", false, 0, 0.05, 1, 0.96);
    //    s->addText(h4, ofColor(255), "Stoj (Andreas Refsgaard & Lasse Korsgaard) https://vimeo.com/207831279", 0.00, 0.00, 0.8);
    //    s->start();
    
    //    slideshow.setPage(s);
    
    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.1, 0.1, 0.8, 0.8);
    
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
    
    s = slideshow.addSlide("ml4a.github.io/guides");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-guides-index.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Guides");
    s->addImage("workshop", "/Users/gene/bin/ml4a/xdegrees_samples.jpg", 0, 0, 0.5, 0.5);
    //s->addImage("workshop", "/Users/gene/bin/ml4a/nabimusic2.png", 0.51, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, 0.51, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/ml4a/neural-painter/dog-cat-interp.mp4", true, 0.0, 0.51, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/bin/tsne/tsne-animals-highlights.png", 0.51, 0.51, 0.5, 0.5);
    
    
    
    s = slideshow.addSlide("Demos");
    s->addMovie("transfer learning", "/Users/gene/bin/misc/wekinator-coffee-croissant.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("ml4a projects");
    s->addMovie("objectifier", "/Users/gene/bin/misc/prototype_objectifier.mp4", true, 0.0, 0.0, 0.5, 0.49);
    s->addMovie("beta blockers", "/Users/gene/bin/alt-ai/betablockers_nosound.mp4", true, 0.51, 0.5, 0.5, 0.49);
    s->addImage("pdh", "/Users/gene/Web/alt-AI/images/exhibit-corbin.jpg", 0.5, 0.0, 0.5, 0.49);
    s->addImage("seth", "/Users/gene/Web/alt-AI/images/exhibit-seth.jpg", 0.0, 0.5, 0.5, 0.49);
    s->addText(h4, ofColor(255), "Piano Die Hard (Corbin Ordel & Aaron Montoya-Moraga)", 0.51, 0.465, 0.5);
    s->addText(h4, ofColor(255), "Beta blockers (Chino Kim)", 0.51, 0.96, 0.5);
    s->addText(h4, ofColor(255), "Objectifier (Bjoern Karmann)", 0.01, 0.465, 0.5);
    s->addText(h4, ofColor(255), "Neural Recycle (Seth Kranzler)", 0.01, 0.96, 0.5);
    
    s = slideshow.addSlide("python + data science tutorials");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-guide-RIS.png", 0, 0, 1, 1);
    
    //        s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
    //        s->addImage("yolo", "/Users/gene/bin/ml4a/ReverseImageSearch/yolo-screen1.png", 0, 0, 1, 1);
    //
    s = slideshow.addSlide("ml4a.github.io/classes");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("ml4a @ itp", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/ml4a @ itp-nyu -- timelapse_crop.mp4", true, 0, 0, 1, 1)->setPositionRandom();
    s->loadAssets();
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-nn.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-hnnat.png", 0, 0, 1, 1);
    
    //        s = slideshow.addSlide("Decentralized AI");
    //        s->addImage("workshop", "/Users/gene/bin/misc/workshops/decentralizedAI/dcai7.png", 0, 0.07, 1, 0.94);
    //        s->addText(h3, ofColor(255), "https://docs.google.com/presentation/d/1RI6BnBsJtTBg3djZbD1hDjuhQagPBAUtAqcqoYWQTxU", 0.01, 0.0, 0.9);
    //
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




//--------------------------------------------------------------
void ofApp::DAMGallery(){
    
    
    //s = slideshow.addSlide("Lunchmeat Festival, 20 Oct 2017");
    s = slideshow.addSlide("DAM Gallery, 28 Jan 2018");
    s->addText(h2, ofColor(255), "@genekogan", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(255), "genekogan.com", 0.1, 0.4, 0.5);
    s->addText(h2, ofColor(255), "ml4a.github.io", 0.6, 0.3, 0.5);
    s->addText(h2, ofColor(255), "@ml4a_", 0.6, 0.4, 0.5);
    s->start();
    
    // about me
    s = slideshow.addSlide("Music information retrieval (~2008-2011)");
    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
    s->addImage("genre VA", "/Users/gene/bin/misc/sourcetone/genre-AvgVA.jpg", 0.0, 0.4, 0.42, 0.6);
    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
    
    s = slideshow.addSlide("Data scientist in denial");
    s->addImage("data science", "/Users/gene/bin/misc/stock/data-scientist-google-trends.png", 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Musical instruments (w/ Jeff Snyder) ~2014");
    s->addImage("tweet", "/Users/gene/Web/genekogan.github.io/_site/images/birl/birl1.jpg", 0.0, 0.0, 1, 0.35);
    s->addImage("tweet", "/Users/gene/bin/misc/Snyderphonics_Manta.jpg", 0.0, 0.365, 1, 0.64);
    
//    s = slideshow.addSlide("Media arts / creative tech");
//    s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/listening-to-the-ocean-10.jpg", 0.0, 0, 0.5, 0.5);
//    s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/generator5.png", 0.5, 0, 0.5, 0.5);
//    s->addMovie("simulation", "/Users/gene/bin/images/VertexFields2_01.29.2012.mov", true, 0.0, 0.5, 0.5, 0.5);
//    s->addImage("genart", "/Users/gene/Web/genekogan.github.io/_site/images/audio-sculpture/audio-sculpture2.jpg", 0.5, 0.5, 0.5, 0.5);

    s = slideshow.addSlide("Generative art");
    s->addImage("star", "/Users/gene/bin/images/stars/star-00001.png", 0, 0, 0.25, 0.5);
    s->addImage("star", "/Users/gene/bin/images/stars/star-00004.png", 0.25, 0, 0.25, 0.5);
    s->addImage("star", "/Users/gene/bin/images/stars/star-00005.png", 0.5, 0, 0.25, 0.5);
    s->addImage("star", "/Users/gene/bin/images/stars/star-00010.png", 0.75, 0, 0.25, 0.5);
    s->addImage("star", "/Users/gene/bin/images/stars/star-00014.png", 0.25, 0.5, 0.25, 0.5);
    s->addImage("star", "/Users/gene/bin/images/stars/star-00016.png", 0.5, 0.5, 0.25, 0.5);
    s->addImage("star", "/Users/gene/bin/images/stars/star-00011.png", 0, 0.5, 0.25, 0.5);
    s->addImage("star", "/Users/gene/bin/images/stars/star-00022.png", 0.75, 0.5, 0.25, 0.5);
    
    s = slideshow.addSlide("Interference patterns");
    s->addImage("interference", "/Users/gene/bin/images/interference/interference11.png", 0.0, 0, 0.33, 1);
    s->addImage("interference", "/Users/gene/bin/images/interference/interference14.png", 0.3333, 0, 0.33, 1);
    s->addImage("interference", "/Users/gene/bin/images/interference/interference12.png", 0.6666, 0, 0.33, 1);

    
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

    
    s = slideshow.addSlide("Machine learning + visual art");
    s->addMovie("dcgan", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0.026, 0.5, 0.47);
    s->addImage("deepdream", "/Users/gene/bin/misc/stock/building-dreams.png", 0, 0.515, 0.5, 0.48);
    s->addImage("stylenet", "/Users/gene/bin/misc/stock/stylenet-original.png", 0.5, 0.53, 0.5, 0.47);
    s->addImage("synthesizing original", "/Users/gene/bin/misc/stock/synthesizing-original.jpg", 0.5, 0.025, 0.5, 0.48);
    s->addText(h4, ofColor(255), "https://www.youtube.com/watch?v=QYcKCGdZvq4", 0.01, 0.0, 1.0);
    s->addText(h5, ofColor(255), "research.googleblog.com/2015/06/inceptionism-going-deeper-into-neural.html", 0.002, 0.475, 1.0);
    s->addText(h4, ofColor(255), "https://arxiv.org/abs/1508.06576", 0.6, 0.51, 1.0);
    s->addText(h4, ofColor(255), "http://www.evolvingai.org/synthesizing", 0.6, 0.0, 1.0);
    
    
    
    
    ////////////////////////////////////////////////////////////
    ///// LAPNORM
    
    s = slideshow.addSlide("What are neural networks?");
    s->addImage("lenet", "/Users/gene/bin/misc/stock/lenet.png", 0, 0, 1, 0.4);
    s->addImage("alexnet", "/Users/gene/bin/misc/stock/alexnet2.png", 0, 0.5, 1, 0.4);
    s->addText(h3, ofColor(255), "Lenet (LeCun et al, 1998) [http://yann.lecun.com/exdb/lenet/]", 0.05, 0.4, 0.9);
    s->addText(h3, ofColor(255), "AlexNet 2012 [via https://jeremykarnowski.wordpress.com/2015/07/15/alexnet-visualization/]", 0.05, 0.92, 0.9);
    
    s = slideshow.addSlide("Convolutional neural network demo");
    s->setBackgroundFunction(this, &ofApp::drawBgWhite);
    CcvForwardPassDemo *ccvd = new CcvForwardPassDemo(s, "ccv", 0, 0, 1, 1);
    s->addAction(ccvd);
    
    
    //
    //    s = slideshow.addSlide("What neural networks look for");
    //    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l2.png", 0.01, 0.15, 0.45, 0.7);
    //    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l3.png", 0.47, 0.15, 0.52, 0.7);
    //    s->addText(h4, ofColor(255), "Visualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]", 0.02, 0.0, 1.0);
    //
    s = slideshow.addSlide("Channel synthesis");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/harvest.mp4", false, 0.15, 0.15, 0.7, 0.7)->setLoop(false);
    
    //    s = slideshow.addSlide("Channel synthesis");
    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/E1-115_n40_o05_r1.33.mp4", false, -0.005, 0.15, 0.5, 0.7)->setLoop(false);
    //    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/H5-89_n50_o09_r1.33.mp4", true, 0.3333, 0.15, 0.32, 0.7)->setLoop(false);
    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/E6-63_n50_o05_r1.33.mp4", false, 0.505, 0.15, 0.5, 0.7)->setLoop(false);
    
    // low level swatches + high level swatches
    
    s = slideshow.addSlide("InceptionV3 conv2d");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-1_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-7_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-15_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-28_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-52_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A2-12_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A2-25_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A2-27_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);

    s = slideshow.addSlide("InceptionV3 mixed3a");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-8_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-9_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-20_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-31_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-0_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-26_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-36_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-44_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);

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

    s = slideshow.addSlide("InceptionV3 mixed4b");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E1-42_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E2-91_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E3-15_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E3-17_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-0_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-16_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-17_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-33_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);

    s = slideshow.addSlide("InceptionV3 mixed4c");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F2-32_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F2-41_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F2-64_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F3-187_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F5-7_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F6-17_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F6-29_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F6-54_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed4d");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G1-9_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G1-15_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G2-36_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G2-54_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G2-86_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G3-145_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G6-2_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G6-20_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed4e");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H1-54_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H1-116_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H1-158_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H3-7_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H3-77_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H3-303_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H4-13_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H6-123_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);

    s = slideshow.addSlide("InceptionV3 mixed5a");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J1-51_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J1-198_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J2-69_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J4-8_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J5-81_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J6-16_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J6-53_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/J6-109_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);

    //    s = slideshow.addSlide("t-SNE of favorite swatches");
    //    s->addScrollableImage("t-SNE swatches", "/Users/gene/bin/lapnorm/swatches/favorites/_all_swatches_tsne.png", 0, 0, 1, 1);
    //
    //    s = slideshow.addSlide("t-SNE of all ~7500 swatches");
    //    s->addScrollableImage("t-SNE swatches", "/Users/gene/bin/lapnorm/swatches/all/swatches-tsne_large.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/initial_experiments/frame0010 (2).png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/initial_experiments/eureka.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F6-34+G2-139_n11_o08_r1.33_cr4_b0.60.png", 0, 0, 1, 1);
//    s = slideshow.addSlide("Mixing gradients");
//    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G3-283+F3-26+H1-54_n11_o08_r1.33_cr0_b0.75.png", 0, 0, 1, 1);
//    s = slideshow.addSlide("Mixing gradients");
//    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G3-45+G1-36+H6-23_n15_o08_r1.33_cr5_b0.21.png", 0, 0, 1, 1);
    // s = slideshow.addSlide("Mixing gradients");
    // s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/E6-16+L1-55+G2-76_n10_o07_r1.33.png", 0, 0, 1, 1);
    // s = slideshow.addSlide("Mixing gradients");
    // s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F6-34+G6-2_n20_o07_r1.33.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/D1-152+F1-40+H5-34_n40_o07_r1.33.png", 0, 0, 1, 1);
    // s = slideshow.addSlide("Mixing gradients");
    // s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/D2-13+D2-50+D5-15_n40_o07_r1.33.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F6-9+D1-27+D5-15_n10_o08_r1.33_cr3_b0.35.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/D5-15+G1-36+D1-133_n15_o08_r1.33_cr3_b0.46.png", 0, 0, 1, 1);
    // s = slideshow.addSlide("Mixing gradients");
    // s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/D6-11+G1-15+D1-189_n40_o07_r1.33.png", 0, 0, 1, 1);
    // s = slideshow.addSlide("Mixing gradients");
    // s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F1-78+D6-52+D1-41_n15_o07_r1.33.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/D3-92+D1-41+F5-40_n15_o08_r1.33_cr4_b0.42.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G1-85+E6-0+F6-54_n20_o07_r1.33.png", 0, 0, 1, 1);
    // s = slideshow.addSlide("Mixing gradients");
    // s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/H3-136+F6-41+H6-72_n40_o07_r1.33.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/large.jpeg", 0, 0, 1, 1);
    
    //    D6-12+D3-92+F1-94_n15_o08_r1.33_cr6_b0.22.png
    //    E2-78+F2-32+G2-38_n10_o08_r1.33_cr5_b0.33.png
    
    
    s = slideshow.addSlide("Feedback and gradient interpolation");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/mask_videos/F1-40+J1-42+G1-34+D6-31+G1-62+H1-225_n16_o04_r1.31_1.05,1.50,1.10.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Feedback and gradient interpolation");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/mask_videos/G2-139+C1-81_n14_o08_r1.30_cr4_b0.05_1.00,1.00,1.00.mp4", true, 0, 0, 1, 1);
    
    //    s = slideshow.addSlide("Feedback and gradient interpolation");
    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/fullfades/hframes2.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Feedback and gradient interpolation");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/fullfades/K18-178+L4-61+K19-55+K07-45+K18-35_m3_b4_o5_i36_c0_s10_norm1.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Moving gradients around");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/testframes2_.mp4", true, 0, 0, 1, 1);
    
    //    s = slideshow.addSlide("Moving gradients around");
    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/testframes9b0_.mp4", true, 0, 0, 1, 1);
    
    //s = slideshow.addSlide("Loops");
    //s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/loops/_lapnom-loops.mp4", true, 0, 0, 1, 1)->setLoop(true);
    
    //    s = slideshow.addSlide("Constrain to an image");
    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/class38_face3.mp4", false, 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Mask with an image");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/image_mask/monalisa/F2-41+C2-0+C3-179+B2-44+C1-106_n11_o02_r1.39_1.10,1.25,1.20_2.mp4", true, 0, 0, 1, 1)->setLoop(true);
    
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
    
    
    
    
    ////////////////////////////////////////////////////////////
    ///// GENERATIVE MODELS
    
    s = slideshow.addSlide("Generative Models");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/DGN_places_long.jpg", 0.0, 0.1, 1, 0.9);
    s->addText(h4, ofColor(255), "Deep Generator Networks\nNguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.1, 0.01, 1.0);
    
    s = slideshow.addSlide("DGN variety");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/boathouses.png", 0.0, 0.05, 0.57, 0.95);
    s->addImage("classvis", "/Users/gene/bin/synthesizing/buttes.png", 0.573, 0.05, 0.43, 0.95);
    s->addText(h4, ofColor(255), "http://genekogan.com/works/synthesizing/", 0.1, 0.00, 1.0);
    
    s = slideshow.addSlide("DGN (people as artifacts)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/people.png", 0.1, 0.1, 0.8, 0.9);
    s->addText(h3, ofColor(255), "http://genekogan.com/works/synthesizing/", 0.1, 0.00, 1.0);
    
//    s = slideshow.addSlide("Deep convolutional generative adversarial networks");
//    s->addImage("Mona Lisa", "/Users/gene/bin/dcgan/public/dcgan-glasses.png", 0.0, 0.06, 1.0, 0.94);
//    s->addText(h4, ofColor(255), "Radford, Metz, Chintala 2015 (https://arxiv.org/abs/1511.06434)", 0.1, 0.0, 0.8);
//
//    s = slideshow.addSlide("\"Interpolating\" numbers");
//    s->addMovie("MNIST interpolations", "/Users/gene/bin/dcgan/summary/digits.mov", true, 0.2, 0.1, 0.6, 0.6);
//
//    s = slideshow.addSlide("A Book from the Sky");
//    s->addMovie("zloops", "/Users/gene/bin/dcgan/summary/zloops.mp4", true, 0, 0.1, 1, 0.91);
//    s->addText(h3, ofColor(255), "http://genekogan.com/works/a-book-from-the-sky/", 0.1, 0.0, 0.8);
//
//    s = slideshow.addSlide("A Book from the Sky");
//    s->addMovie("interplations", "/Users/gene/bin/dcgan/public/interpolations_3.mp4", true, 0.1, 0.15, 0.8, 0.6);
//    s->addText(h3, ofColor(255), "http://genekogan.com/works/a-book-from-the-sky/", 0.1, 0.0, 0.8);
    
//    s = slideshow.addSlide("More DCGANs");
//    s->addImage("manga 1", "/Users/gene/bin/dcgan/public/07_manga_sample1.png", 0, 0.1, 0.48, 0.9);
//    s->addImage("albums", "/Users/gene/bin/dcgan/public/album-covers-DCGAN.jpg", 0.52, 0.1, 0.475, 0.9);
//    s->addText(h3, ofColor(255), "https://github.com/mattya/chainer-DCGAN", 0, 0, 1);
//    s->addText(h3, ofColor(255), "album covers by @AlecRad", 0.51, 0, 1);
    
//    s = slideshow.addSlide("PointCloud generation");
//    s->addText(h3, ofColor(255), "Representation Learning and Adversarial Generation of 3D Point Clouds\nAchlioptas et all (https://arxiv.org/abs/1707.02392", 0.1, 0.0, 0.8);
//    s->addImage("PointCloud", "/Users/gene/bin/misc/stock/pointcloud-GAN.png", 0.0, 0.15, 1.0, 0.8);
    
//    s = slideshow.addSlide("WaveNet");
//    s->addText(h3, ofColor(255), "https://deepmind.com/blog/wavenet-generative-model-raw-audio/", 0.05, 0.01, 0.9);
//    s->addMovie("wavenet zoom", "/Users/gene/bin/wavenet/blogpost/wavenet-zoom.mp4", true, 0.05, 0.1, 0.4, 0.4);
//    s->addMovie("wavenet conv", "/Users/gene/bin/wavenet/blogpost/wavenet-dilated-convolutions.mp4", true, 0.55, 0.1, 0.4, 0.4);
//    s->addSound("wavenet 1", "/Users/gene/bin/wavenet/blogpost/wavenet-1.wav", h4, false, false, 0.05, 0.6, 0.25, 0.04);
//    s->addSound("wavenet 2", "/Users/gene/bin/wavenet/blogpost/wavenet-2.wav", h4, false, false, 0.05, 0.66, 0.25, 0.04);
//    s->addSound("voice 1", "/Users/gene/bin/wavenet/blogpost/avocado-1.wav", h4, false, false, 0.05, 0.76, 0.25, 0.04);
//    s->addSound("voice 2", "/Users/gene/bin/wavenet/blogpost/avocado-2.wav", h4, false, false, 0.05, 0.82, 0.25, 0.04);
//    s->addSound("babble 1", "/Users/gene/bin/wavenet/blogpost/speaker-1.wav", h4, false, false, 0.35, 0.6, 0.25, 0.04);
//    s->addSound("babble 2", "/Users/gene/bin/wavenet/blogpost/speaker-2.wav", h4, false, false, 0.35, 0.66, 0.25, 0.04);
//    s->addSound("babble 3", "/Users/gene/bin/wavenet/blogpost/speaker-3.wav", h4, false, false, 0.35, 0.72, 0.25, 0.04);
//    s->addSound("babble 4", "/Users/gene/bin/wavenet/blogpost/speaker-4.wav", h4, false, false, 0.35, 0.78, 0.25, 0.04);
//    s->addSound("babble 5", "/Users/gene/bin/wavenet/blogpost/speaker-5.wav", h4, false, false, 0.35, 0.84, 0.25, 0.04);
//    s->addSound("babble 6", "/Users/gene/bin/wavenet/blogpost/speaker-6.wav", h4, false, false, 0.35, 0.9, 0.25, 0.04);
//    s->addSound("jazz 1", "/Users/gene/bin/wavenet/blogpost/sample_1.wav", h4, false, false, 0.65, 0.6, 0.25, 0.04);
//    s->addSound("jazz 2", "/Users/gene/bin/wavenet/blogpost/sample_2.wav", h4, false, false, 0.65, 0.66, 0.25, 0.04);
//    s->addSound("jazz 3", "/Users/gene/bin/wavenet/blogpost/sample_3.wav", h4, false, false, 0.65, 0.72, 0.25, 0.04);
//    s->addSound("jazz 4", "/Users/gene/bin/wavenet/blogpost/sample_4.wav", h4, false, false, 0.65, 0.78, 0.25, 0.04);
//    s->addSound("jazz 5", "/Users/gene/bin/wavenet/blogpost/sample_5.wav", h4, false, false, 0.65, 0.84, 0.25, 0.04);
//    s->addSound("jazz 6", "/Users/gene/bin/wavenet/blogpost/sample_6.wav", h4, false, false, 0.65, 0.9, 0.25, 0.04);
//
//    s = slideshow.addSlide("Video prediction");
//    s->addMovie("Video GANs", "/Users/gene/bin/dcgan/video_gans.mp4", true, 0.0, 0.1, 1, 0.91);
//    s->addText(h4, ofColor(255), "Carl Vondrick (http://web.mit.edu/vondrick/tinyvideo/)", 0.0, 0.0, 0.8);
    
//    s = slideshow.addSlide("Natural language generation");
//    s->addImage("fb", "/Users/gene/bin/misc/stock/neural-storyteller.png", 0, 0.2, 1, 0.6);
//    s->addText(h3, ofColor(255), "https://github.com/ryankiros/neural-storyteller", 0.02, 0.00, 0.8);
//
//    s = slideshow.addSlide("Dense captioning Pouff's grocery trip");
//    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream_grocery.mp4", true, 0, 0.08, 1, 0.93);
//    s->addText(h4, ofColor(255), "original: https://www.youtube.com/watch?v=DgPaCWJL7XI", 0.01, 0.0, 0.99);
//
//    s = slideshow.addSlide("StackGAN");
//    s->addText(h3, ofColor(255), "Text to Photo-realistic Image Synthesis with Stacked GANs\nZhang et al (https://arxiv.org/abs/1612.03242)", 0.1, 0.0, 0.8);
//    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-bird2.jpg", 0.0, 0.12, 1.0, 0.4);
//    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-flower1.jpg", 0.0, 0.53, 1.0, 0.4);
//    s = slideshow.addSlide("StackGAN");
//    s->addText(h3, ofColor(255), "Text to Photo-realistic Image Synthesis with Stacked GANs\nZhang et al (https://arxiv.org/abs/1612.03242)", 0.1, 0.0, 0.8);
//    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-bird_interp.png", 0.0, 0.15, 1.0, 0.8);
//
//
//    s = slideshow.addSlide("Image-to-Image Translation with Conditional Adversarial Nets");
//    s->addImage("fb", "/Users/gene/bin/pix2pix/teaser_v3a.png", 0.0, 0.04, 1.0, 0.96);
//    s->addText(h4, ofColor(255), "Isola et al (phillipi.github.io/pix2pix/)", 0.02, 0.00, 0.8);
//
//    s = slideshow.addSlide("Invisible Cities");
//    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/milan_style_transfer_x4.jpg", 0.0, 0.04, 1, 0.96);
//    s->addText(h4, ofColor(255), "opendot.github.io/ml4a-invisible-cities/", 0.02, 0.00, 0.8);
//
//    s = slideshow.addSlide("Invisible Cities");
//    s->addText(h4, ofColor(255), "opendot.github.io/ml4a-invisible-cities/", 0.02, 0.00, 0.8);
//    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/handdrawn1.jpg", 0.0, 0.1, 1.0, 0.45);
//    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/handdrawn2.jpg", 0.0, 0.555, 1.0, 0.45);
    
    s = slideshow.addSlide("Meat puppet");
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/trump_face_train.png", 0.0, 0.0, 0.45, 1.0);
    s->addImage("fb", "/Users/gene/bin/misc/stock/arrow.png", 0.46, 0.0, 0.08, 1.0);
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/gene_face_test.png", 0.55, 0.0, 0.45, 1.0);
    
    s = slideshow.addSlide("Meat puppet");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump_gene1.mp4", true, 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Meat puppet @ ECAL");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump-meatpuppet-pix2pix-ecal.mp4", true, 0.0, 0.0, 1.0, 1.0)->setPosition(0.25);
    
    s = slideshow.addSlide("pix2pix Angela Merkel");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/dattran-merkel-pix2pix.mp4", true, 0.05, 0.05, 0.9, 0.9)->setLoop(true);

    s = slideshow.addSlide("CycleGAN");
    s->addImage("fb", "/Users/gene/bin/misc/cyclegan/cyclegan.jpg", 0.0, 0.07, 1, 0.95);
    s->addText(h3, ofColor(255), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("CycleGAN");
    s->addMovie("fb", "/Users/gene/bin/misc/cyclegan/cyclegan_zebra.mp4", true, 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(255), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("CycleGAN fail");
    s->addImage("fb", "/Users/gene/bin/misc/cyclegan/putin_zebra.jpeg", 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(255), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("Style transfer");
    s->addImage("Mona Lisa -> Cubist/Expressionist/Impressionist", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_cubist_expressionist_impressionist.jpg", 0, 0.15, 1, 0.85);
    s->addText(h4, ofColor(255), "Gatys et al, 2015 (arxiv.org/abs/1508.06576)", 0.002, 0, 1.0);
    s->addText(h4, ofColor(255), "Justin Johnson's neural-style (https://github.com/jcjohnson/neural-style)", 0.002, 0.075, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Hokusai style transfer");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/hokusai.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_hokusai.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Tarsila");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/tarsilo2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_tarsila.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Roy Liechtenstein");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/liechtenstein.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_liechtenstein.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Wassily Kandinsky");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/kandinsky2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_kandinsky2.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Crab Nebula");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/crab.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_crab.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Egyptian Hieroglyphs");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/egypt.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_egypt.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Google Maps (1)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Google Maps (2)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps2.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Google Maps (3)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps3.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps3_cw08.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Google Maps (4)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps3.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps3_cw15.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Google Maps (5)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps3.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps3.jpg", 0.6, 0.0, 0.4, 1.0);
    
    CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
    s = slideshow.addSlide("What happens when it's real-time?");
    s->addAction(cmd);
    // cmd->setStyleModel("/Users/gene/bin/style-transfer/models/kandinsky_e2_full512.model");
    cmd->setStyleModel("/Users/gene/bin/style-transfer/models/cubist.model");

    s = slideshow.addSlide("Cubist Mirror");
    s->addMovie("altai mirror", "/Users/gene/bin/alt-ai/cubistmirror_v1.mp4", true, 0, 0, 0.61, 0.67);
    s->addMovie("nabi mirror", "/Users/gene/bin/alt-ai/cubistmirror-nabi.mp4", true, 0.55, 0.2, 0.455, 0.8);
    
    
    ////////////////////////////////////////////////////////////
    ///// DEMOS + ML4A
    
    
    
    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.1, 0.1, 0.8, 0.8);
    
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
    
    s = slideshow.addSlide("ml4a.github.io/guides");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-guides-index.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Guides");
    s->addImage("workshop", "/Users/gene/bin/ml4a/xdegrees_samples.jpg", 0, 0, 0.5, 0.5);
    //s->addImage("workshop", "/Users/gene/bin/ml4a/nabimusic2.png", 0.51, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, 0.51, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/ml4a/neural-painter/dog-cat-interp.mp4", true, 0.0, 0.51, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/bin/tsne/tsne-animals-highlights.png", 0.51, 0.51, 0.5, 0.5);
    
    //    s = slideshow.addSlide("Hallucinating faces with PCA");
    //    s->addMovie("eigenface", "/Users/gene/bin/ml4a/eigenface/eigenface_grid_8x4.mp4", true, 0, 0.06, 1, 0.95);
    //    s->addText(h4, ofColor(255), "https://github.com/ml4a/ml4a-guides/tree/master/notebooks/Eigenfaces.ipynb", 0.1, 0, 0.8);
    
    //    s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
    //    s->addImage("yolo", "/Users/gene/bin/ml4a/ReverseImageSearch/yolo-screen1.png", 0, 0, 1, 1);
    
    
    //    s = slideshow.addSlide("Guides");
    //    s->addImage("workshop", "/Users/gene/bin/ml4a/nabimusic2.png", 0.51, 0, 0.5, 0.5);
    //
    //    //s->addMovie("fb", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, 0.51, 0, 0.5, 0.5);
    //    s->addMovie("fb", "/Users/gene/bin/ml4a/neural-painter/dog-cat-interp.mp4", true, 0.0, 0.51, 0.5, 0.5);
    //    s->addImage("workshop", "/Users/gene/bin/tsne/tsne-animals-highlights.png", 0.51, 0.51, 0.5, 0.5);
    //
    
    //    s = slideshow.addSlide("Guides");
    //    s->addScrollableImage("animal t-sne", "/Users/gene/bin/tsne/tsne-animals.png", 0.0, 0.0, 1.0, 1.0);
    
    s = slideshow.addSlide("t-SNE :: CalTech-256 animals");
    s->addScrollableImage("t-SNE animals", "/Users/gene/bin/tsne/grid_animals2.png", 0, 0, 1, 1);
    
    //    s = slideshow.addSlide("Guides");
    //    s->addImage("workshop", "/Users/gene/bin/ml4a/xdegrees_samples.jpg", 0, 0, 0.5, 0.5);
    
    s = slideshow.addSlide("Audio + Text t-SNEs");
    s->setBackgroundFunction(this, &ofApp::drawBgWhite);
    s->addScrollableImage("wiki t-SNE", "/Users/gene/bin/tsne/wiki-tSNE.png", -0.05, 0.0, 0.72, 0.76);

    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0.48, 0.39, 0.54, 0.63);
    attd->setTsnePath("/Users/gene/Teaching/ML4A/ml4a-guides/data/example-audio-tSNE-drums.json");
    s->addAction(attd);
    attd->start();


    
    s->addText(h4, ofColor(0), "www.genekogan.com/works/wiki-tSNE", 0.03, 0.8, 0.7);
    s->addText(h4, ofColor(0), "github.com/ml4a/ml4a-ofx", 0.67, 0.3, 0.7);
    
    
    s = slideshow.addSlide("Demos");
    s->addMovie("transfer learning", "/Users/gene/bin/misc/wekinator-coffee-croissant.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("ml4a projects");
    s->addMovie("objectifier", "/Users/gene/bin/misc/prototype_objectifier.mp4", true, 0.0, 0.0, 0.5, 0.49);
    s->addMovie("beta blockers", "/Users/gene/bin/alt-ai/betablockers_nosound.mp4", true, 0.51, 0.5, 0.5, 0.49);
    s->addImage("pdh", "/Users/gene/Web/alt-AI/images/exhibit-corbin.jpg", 0.5, 0.0, 0.5, 0.49);
    s->addImage("seth", "/Users/gene/Web/alt-AI/images/exhibit-seth.jpg", 0.0, 0.5, 0.5, 0.49);
    s->addText(h4, ofColor(255), "Piano Die Hard (Corbin Ordel & Aaron Montoya-Moraga)", 0.51, 0.465, 0.5);
    s->addText(h4, ofColor(255), "Beta blockers (Chino Kim)", 0.51, 0.96, 0.5);
    s->addText(h4, ofColor(255), "Objectifier (Bjoern Karmann)", 0.01, 0.465, 0.5);
    s->addText(h4, ofColor(255), "Neural Recycle (Seth Kranzler)", 0.01, 0.96, 0.5);
    
    s = slideshow.addSlide("Wolfenstein Controlled by Sound");
    s->addMovie("wolfenstein", "/Users/gene/bin/ml4a/Wolfenstein 3D controlled by sound.mp4", false, 0, 0.05, 1, 0.96);
    s->addText(h4, ofColor(255), "Stoj (Andreas Refsgaard & Lasse Korsgaard) https://vimeo.com/207831279", 0.00, 0.00, 0.8);
    s->start();
    
    s = slideshow.addSlide("python + data science tutorials");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-guide-RIS.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
    s->addImage("yolo", "/Users/gene/bin/ml4a/ReverseImageSearch/yolo-screen1.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("ml4a.github.io/classes");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("ml4a @ itp", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/ml4a @ itp-nyu -- timelapse_crop.mp4", true, 0, 0, 1, 1)->setPositionRandom();
    s->loadAssets();
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-nn.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-hnnat.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Decentralized AI");
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/decentralizedAI/dcai7.png", 0, 0.1, 1, 0.9);
    s->addText(h4, ofColor(255), "https://docs.google.com/presentation/d/1RI6BnBsJtTBg3djZbD1hDjuhQagPBAUtAqcqoYWQTxU", 0.01, 0.0, 0.9);
    
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


void ofApp::CTMFestival() {
    
    
    s = slideshow.addSlide("CTM Festival, 30 Jan 2018");
    s->addText(h2, ofColor(225), "@genekogan", 0.1, 0.45, 0.5);
    s->addText(h2, ofColor(225), "genekogan.com", 0.1, 0.55, 0.5);
    s->addText(h2, ofColor(225), "ml4a.github.io", 0.6, 0.45, 0.5);
    s->addText(h2, ofColor(225), "@ml4a_", 0.6, 0.55, 0.5);
    s->addText(h2, ofColor(255, 185), "Musicmaker's dystopia;\nThe automation of songwriting, production, and curation", 0.1, 0.1, 0.75);
    s->start();
    
    s = slideshow.addSlide("RCA Mark II Synthesizer");
    s->addImage("fb", "/Users/gene/bin/misc/stock/RCA-Mark-II-Sound-Synthesizer.jpg", 0.15, 0.1, 0.7, 0.8);
    
    s = slideshow.addSlide("RCA Mark II Synthesizer");
    s->addImage("fb", "/Users/gene/bin/misc/stock/buchla_brad.JPG", 0.15, 0.1, 0.7, 0.8);
    s->addText(h3, ofColor(200), "Prentis Hall @ Columbia University, New York, NY", 0.00, 0.0, 0.8);
    
    s = slideshow.addSlide("Music information retrieval");
    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
    s->addImage("genre VA", "/Users/gene/bin/misc/sourcetone/genre-AvgVA.jpg", 0.0, 0.4, 0.42, 0.6);
    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
    
    //    s = slideshow.addSlide("Gestural Instruments");
    //    s->addMovie("leap", "/Users/gene/bin/misc/LeapMotion + SuperCollider demo-SD.mp4", true, 0.1, 0.1, 0.8, 0.8);
    //    s->addText(h3, ofColor(255), "https://github.com/genekogan/LeapMotion-SuperCollider-Instruments", 0.05, 0, 0.85);
    
    s = slideshow.addSlide("Musical instruments (w/ Jeff Snyder)");
    s->addImage("manta", "/Users/gene/bin/misc/Snyderphonics_Manta.jpg", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Musical instruments (w/ Jeff Snyder)");
    s->addImage("birl", "/Users/gene/bin/misc/birl/birl1.jpg", 0.0, 0.0, 1, 0.35);
    s->addImage("birl", "/Users/gene/bin/misc/birl/birl_interface.png", 0.0, 0.355, 1, 0.65);
    
    s = slideshow.addSlide("Musical instruments (w/ Jeff Snyder)");
    s->addMovie("birl", "/Users/gene/bin/misc/birl/Pedro Eustache tries out the Snyderphonics Birl prototype.mp4", true, 0.1, 0.15, 0.8, 0.8);
    s->addText(h3, ofColor(255), "Pedtro Eustache on the Birl", 0.05, 0, 0.85);
    
    s = slideshow.addSlide("Musique concrète + Electronic Music");
    s->addImage("fb", "/Users/gene/bin/misc/stock/pierre_henry.jpg", 0.5, 0.0, 0.5, 0.5);
    s->addImage("fb", "/Users/gene/bin/misc/stock/Electronic-music-of-Brainvoyager-Daphne-Oram-625x426.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("fb", "/Users/gene/bin/misc/stock/stockhausen.jpeg", 0.0, 0.5, 0.5, 0.5);
    s->addImage("fb", "/Users/gene/bin/misc/stock/oliveros_buchla.jpg", 0.5, 0.5, 0.5, 0.5);
    
    s = slideshow.addSlide("Early days: Physical models");
    s->addImage("manta", "/Users/gene/bin/misc/stock/phLUTe.jpg", 0.0, 0.0, 0.5, 0.7);
    s->addImage("manta", "/Users/gene/bin/misc/stock/igdis.jpg", 0.5, 0.3, 0.5, 0.7);
    s->addText(h3, ofColor(255), "IGDIS (reconstruction of Greek prosody)\nhttp://users.teicrete.gr/taxd/06/greek_singer/greek_singer_eng.htm", 0.05, 0, 0.85);
    
    s = slideshow.addSlide("From deep listening to deep learning");
    s->addImage("lenet", "/Users/gene/bin/misc/stock/lenet.png", 0, 0, 1, 0.4);
    s->addImage("alexnet", "/Users/gene/bin/misc/stock/alexnet2.png", 0, 0.5, 1, 0.4);
    s->addText(h3, ofColor(255), "Lenet (LeCun et al, 1998) [http://yann.lecun.com/exdb/lenet/]", 0.05, 0.4, 0.9);
    s->addText(h3, ofColor(255), "AlexNet 2012 [via https://jeremykarnowski.wordpress.com/2015/07/15/alexnet-visualization/]", 0.05, 0.92, 0.9);
    
    s = slideshow.addSlide("Neural nets for classification");
    s->addImage("mnist1", "/Users/gene/bin/misc/stock/mnist-forward-pass-1.png", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("mnist3", "/Users/gene/bin/misc/stock/mnist-forward-pass-3.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Neural nets for speech recognition");
    s->addImage("speech processing", "/Users/gene/bin/misc/stock/cnn-speech.png", 0.0, 0.1, 1.0, 0.9);
    s->addText(h3, ofColor(255), "http://recognize-speech.com/acoustic-model/knn/comparing-different-architectures/convolutional-neural-networks-cnns", 0.05, 0, 0.85);
    
    s = slideshow.addSlide("Neural nets as generative models");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder.png", 0, 0, 1, 0.3);
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder_net.png", 0, 0.3, 1, 0.65);
    
    s = slideshow.addSlide("Generative adversarial networks (Goodfellow et al)");
    s->addImage("Mona Lisa", "/Users/gene/bin/misc/stock/GANs.png", 0.0, 0.0, 1.0, 1.0);
    
    s = slideshow.addSlide("Synthesis");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/DGN_places_long.jpg", 0.0, 0.1, 1, 0.9);
    s->addText(h4, ofColor(255), "Deep Generator Networks\nNguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.1, 0.01, 1.0);
    
    s = slideshow.addSlide("RNNs/LSTMs + GRUV, 2015");
    s->addImage("nn_simple", "/Users/gene/bin/misc/stock/rnn/nn_simple.png", 0.0, 0.01, 0.52, 0.4);
    s->addImage("rnn_complex", "/Users/gene/bin/misc/stock/rnn/rnn_simple.png", 0.0, 0.49, 0.25, 0.4);
    s->addImage("rnn_simple", "/Users/gene/bin/misc/stock/rnn/rnn_complex.png", 0.27, 0.49, 0.25, 0.4);
    s->addText(h3, ofColor(255), "Feedforward neural net", 0.02, 0.0, 0.5);
    s->addText(h3, ofColor(255), "Recurrent neural net", 0.02, 0.4, 0.5);
    s->addSound("Chopin LSTM", "/Users/gene/bin/music-learning/chopin_lstm.wav", h4, false, false, 0.6, 0.4, 0.33, 0.04);
    s->addSound("Coltrane LSTM", "/Users/gene/bin/music-learning/bluetrain.wav", h4, false, false, 0.6, 0.3, 0.33, 0.04);
    s->addSound("Vibraphone (original)", "/Users/gene/bin/music-learning/vibraphon.aiff", h4, false, false, 0.6, 0.6, 0.33, 0.04);
    s->addSound("Vibraphone LSTM", "/Users/gene/bin/music-learning/hypnotic_vibes.wav", h4, false, false, 0.6, 0.68, 0.33, 0.04);
    
    s = slideshow.addSlide("WaveNets");
    s->addText(h3, ofColor(255), "https://deepmind.com/blog/wavenet-generative-model-raw-audio/", 0.05, 0.01, 0.9);
    s->addMovie("wavenet zoom", "/Users/gene/bin/wavenet/blogpost/wavenet-zoom.mp4", true, 0.05, 0.1, 0.4, 0.4);
    s->addMovie("wavenet conv", "/Users/gene/bin/wavenet/blogpost/wavenet-dilated-convolutions.mp4", true, 0.55, 0.1, 0.4, 0.4);
    s->addSound("wavenet 1", "/Users/gene/bin/wavenet/blogpost/wavenet-1.wav", h4, false, false, 0.05, 0.6, 0.25, 0.04);
    s->addSound("wavenet 2", "/Users/gene/bin/wavenet/blogpost/wavenet-2.wav", h4, false, false, 0.05, 0.66, 0.25, 0.04);
    s->addSound("voice 1", "/Users/gene/bin/wavenet/blogpost/avocado-1.wav", h4, false, false, 0.05, 0.76, 0.25, 0.04);
    s->addSound("voice 2", "/Users/gene/bin/wavenet/blogpost/avocado-2.wav", h4, false, false, 0.05, 0.82, 0.25, 0.04);
    s->addSound("babble 1", "/Users/gene/bin/wavenet/blogpost/speaker-1.wav", h4, false, false, 0.35, 0.6, 0.25, 0.04);
    s->addSound("babble 2", "/Users/gene/bin/wavenet/blogpost/speaker-2.wav", h4, false, false, 0.35, 0.66, 0.25, 0.04);
    s->addSound("babble 3", "/Users/gene/bin/wavenet/blogpost/speaker-3.wav", h4, false, false, 0.35, 0.72, 0.25, 0.04);
    s->addSound("babble 4", "/Users/gene/bin/wavenet/blogpost/speaker-4.wav", h4, false, false, 0.35, 0.78, 0.25, 0.04);
    s->addSound("babble 5", "/Users/gene/bin/wavenet/blogpost/speaker-5.wav", h4, false, false, 0.35, 0.84, 0.25, 0.04);
    s->addSound("babble 6", "/Users/gene/bin/wavenet/blogpost/speaker-6.wav", h4, false, false, 0.35, 0.9, 0.25, 0.04);
    s->addSound("jazz 1", "/Users/gene/bin/wavenet/blogpost/sample_1.wav", h4, false, false, 0.65, 0.6, 0.25, 0.04);
    s->addSound("jazz 2", "/Users/gene/bin/wavenet/blogpost/sample_2.wav", h4, false, false, 0.65, 0.66, 0.25, 0.04);
    s->addSound("jazz 3", "/Users/gene/bin/wavenet/blogpost/sample_3.wav", h4, false, false, 0.65, 0.72, 0.25, 0.04);
    s->addSound("jazz 4", "/Users/gene/bin/wavenet/blogpost/sample_4.wav", h4, false, false, 0.65, 0.78, 0.25, 0.04);
    s->addSound("jazz 5", "/Users/gene/bin/wavenet/blogpost/sample_5.wav", h4, false, false, 0.65, 0.84, 0.25, 0.04);
    s->addSound("jazz 6", "/Users/gene/bin/wavenet/blogpost/sample_6.wav", h4, false, false, 0.65, 0.9, 0.25, 0.04);
    
    s = slideshow.addSlide("NSynth: Neural Audio Synthesis");
    s->addText(h4, ofColor(255), "https://magenta.tensorflow.org/nsynth", 0.1, 0.0, 0.8);
    s->addImage("ns", "/Users/gene/bin/misc/stock/NSynth_blog_figs_InterpolateZ.png", 0, 0.04, 1.0, 0.36);
    s->addImage("ns", "/Users/gene/bin/misc/stock/NSynth_blog_figs_Three_Reconstructions.png", 0, 0.405, 1.0, 0.61);
    
    s = slideshow.addSlide("Reverse-engineering WaveNet");
    s->addText(h3, ofColor(255), "https://github.com/ibab/tensorflow-wavenet", 0.05, 0.01, 0.9);
    s->addImage("ibab", "/Users/gene/bin/wavenet/blogpost/ibab-tensorflow.png", 0.1, 0.1, 0.8, 0.5);
    s->addSound("Il Barbiere di Siviglia wavenet", "/Users/gene/bin/wavenet/barber_25525_fadein.wav", h4, false, false, 0.25, 0.7, 0.5, 0.1);
    s->addText(h4, ofColor(255), "https://soundcloud.com/genekogan/il-barbiere-di-siviglia-wavenet", 0.26, 0.825, 0.8);
    
    s = slideshow.addSlide("SampleRNN");
    s->addText(h4, ofColor(255), "SampleRNN: An Unconditional End-to-End Neural Audio Generation Model\nMehri et al (https://arxiv.org/abs/1612.07837)", 0.01, 0.0, 0.8);
    s->addImage("ibab", "/Users/gene/bin/misc/stock/samplernn.png", 0.01, 0.1, 0.98, 0.4);
    s->addText(h4, ofColor(255), "https://github.com/richardassar/SampleRNN_torch", 0.1, 0.55, 0.8);
    s->addSound("Mozart", "/Users/gene/bin/music-learning/samplernn-mozart.mp3", h4, false, false, 0.05, 0.65, 0.25, 0.04);
    s->addSound("Tangerine Dream", "/Users/gene/bin/music-learning/samplernn-tangerinedream.mp3", h4, false, false, 0.05, 0.73, 0.25, 0.04);
    
    s = slideshow.addSlide("Symbolic approaches: Composing MIDI with LSTMs");
    s->addImage("midi-lstm", "/Users/gene/bin/misc/stock/lstm-midi.png", 0, 0, 1, 0.5);
    s->addText(h4, ofColor(255), "Composing music with recurrent neural nets (Daniel Johnson)", 0.1, 0.55, 0.99);
    s->addText(h4, ofColor(255), "http://www.hexahedria.com/2015/08/03/composing-music-with-recurrent-neural-networks/", 0.1, 0.6, 0.99);
    s->addText(h4, ofColor(255), "LSTM Realbook: Generation Jazz chord progressions (Keunwoo Choi)", 0.1, 0.7, 0.99);
    s->addText(h4, ofColor(255), "https://keunwoochoi.wordpress.com/2016/02/19/lstm-realbook/", 0.1, 0.75, 0.99);
    
    
    s = slideshow.addSlide("A brief digression");
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l1_nofilter.png", 0.0, 0.1, 1, 0.8);
    s->addText(h4, ofColor(255), "What neural nets look for\nVisualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]", 0.02, 0.0, 1.0);
    
    s = slideshow.addSlide("What neural networks look for");
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l2.png", 0.01, 0.15, 0.45, 0.7);
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l3.png", 0.47, 0.15, 0.52, 0.7);
    s->addText(h4, ofColor(255), "Visualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]", 0.02, 0.0, 1.0);
    
    s = slideshow.addSlide("Channel synthesis");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/harvest.mp4", false, 0.15, 0.15, 0.7, 0.7)->setLoop(false);
    
    //    s = slideshow.addSlide("Channel synthesis");
    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/E1-115_n40_o05_r1.33.mp4", false, -0.005, 0.15, 0.5, 0.7)->setLoop(false);
    //    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/H5-89_n50_o09_r1.33.mp4", true, 0.3333, 0.15, 0.32, 0.7)->setLoop(false);
    //    s->addMovie("class synth", "/Users/gene/bin/lapnorm/_bin/class_generation/E6-63_n50_o05_r1.33.mp4", false, 0.505, 0.15, 0.5, 0.7)->setLoop(false);
    
    // low level swatches + high level swatches
    
    s = slideshow.addSlide("InceptionV3 conv2d");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-1_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-7_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-15_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-28_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A1-52_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A2-12_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A2-25_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/A2-27_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed3a");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-8_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-9_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-20_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B1-31_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-0_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-26_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-36_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/B2-44_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
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
    
    s = slideshow.addSlide("InceptionV3 mixed4b");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E1-42_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E2-91_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E3-15_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E3-17_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-0_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-16_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-17_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/E6-33_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed4c");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F2-32_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F2-41_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F2-64_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F3-187_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F5-7_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F6-17_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F6-29_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/F6-54_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed4d");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G1-9_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G1-15_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G2-36_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G2-54_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G2-86_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G3-145_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G6-2_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/G6-20_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("InceptionV3 mixed4e");
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H1-54_n20_o06_r1.33.png", 0, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H1-116_n20_o06_r1.33.png", 0.25, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H1-158_n20_o06_r1.33.png", 0.5, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H3-7_n20_o06_r1.33.png", 0.75, 0, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H3-77_n20_o06_r1.33.png", 0, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H3-303_n20_o06_r1.33.png", 0.25, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H4-13_n20_o06_r1.33.png", 0.5, 0.505, 0.245, 0.5);
    s->addImage("s","/Users/gene/bin/lapnorm/swatches/favorites/highlights/H6-123_n20_o06_r1.33.png", 0.75, 0.505, 0.245, 0.5);
    
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/initial_experiments/eureka.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G3-283+F3-26+H1-54_n11_o08_r1.33_cr0_b0.75.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G3-45+G1-36+H6-23_n15_o08_r1.33_cr5_b0.21.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F6-9+D1-27+D5-15_n10_o08_r1.33_cr3_b0.35.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Feedback and gradient interpolation");
    //s->addMovie("class synth", "/Users/gene/bin/lapnorm/nips/nips_GeneKogan_snippet.mp4", true, 0, 0, 1, 1);
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/nips/NIPS_GeneKogan_new.mp4", true, 0, 0, 1, 1)->setPosition(0.2);
    
    //    s = slideshow.addSlide("Generative Models");
    //    s->addImage("classvis", "/Users/gene/bin/synthesizing/DGN_places_long.jpg", 0.0, 0.1, 1, 0.9);
    //    s->addText(h4, ofColor(255), "Deep Generator Networks\nNguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.1, 0.01, 1.0);
    //
    s = slideshow.addSlide("DGN samples");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/boathouses.png", 0.0, 0.05, 0.57, 0.95);
    s->addImage("classvis", "/Users/gene/bin/synthesizing/buttes.png", 0.573, 0.05, 0.43, 0.95);
    s->addText(h4, ofColor(255), "http://genekogan.com/works/synthesizing/", 0.1, 0.00, 1.0);
    
    //    s = slideshow.addSlide("DiscoGAN");
    //    s->addText(h3, ofColor(255), "Discover Cross-Domain Relations (DiscoGAN)\nKim et al (https://arxiv.org/abs/1703.05192)", 0.1, 0.0, 0.8);
    //    s->addImage("DiscoGAN", "/Users/gene/bin/misc/stock/DiscoGAN.png", 0.0, 0.09, 1.0, 0.32);
    //    s->addImage("DiscoGAN", "/Users/gene/bin/misc/stock/DiscoGAN-gender1.png", 0.0, 0.425, 1.0, 0.29);
    //    s->addImage("DiscoGAN", "/Users/gene/bin/misc/stock/DiscoGAN-gender2.png", 0.0, 0.715, 1.0, 0.29);
    
    s = slideshow.addSlide("Progressive Growing of GANs for Improved Quality, Stability, and Variation");
    s->addMovie("pgan", "/Users/gene/bin/misc/nvidia-progressive-faces.mp4", true, 0, 0, 1, 1)->setLoop(true);
    s->addText(h4, ofColor(255), "Karras et al (NVIDIA), 2017\nhttp://research.nvidia.com/publication/2017-10_Progressive-Growing-of", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("lol");
    s->addImage("joke", "/Users/gene/bin/misc/DoppelGAN/highlights/rock-zelwegger.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Natural language generation");
    s->addImage("fb", "/Users/gene/bin/misc/stock/neural-storyteller.png", 0, 0.2, 1, 0.6);
    s->addText(h3, ofColor(255), "https://github.com/ryankiros/neural-storyteller", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("StackGAN");
    s->addText(h3, ofColor(255), "Text to Photo-realistic Image Synthesis with Stacked GANs\nZhang et al (https://arxiv.org/abs/1612.03242)", 0.1, 0.0, 0.8);
    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-bird2.jpg", 0.0, 0.12, 1.0, 0.4);
    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-flower1.jpg", 0.0, 0.53, 1.0, 0.4);
    s = slideshow.addSlide("StackGAN");
    s->addText(h3, ofColor(255), "Text to Photo-realistic Image Synthesis with Stacked GANs\nZhang et al (https://arxiv.org/abs/1612.03242)", 0.1, 0.0, 0.8);
    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-bird_interp.png", 0.0, 0.15, 1.0, 0.8);
    
    s = slideshow.addSlide("PointCloud generation");
    s->addText(h3, ofColor(255), "Representation Learning and Adversarial Generation of 3D Point Clouds\nAchlioptas et all (https://arxiv.org/abs/1707.02392", 0.1, 0.0, 0.8);
    s->addImage("PointCloud", "/Users/gene/bin/misc/stock/pointcloud-GAN.png", 0.0, 0.15, 1.0, 0.8);
    
    s = slideshow.addSlide("Image-to-Image Translation with Conditional Adversarial Nets");
    s->addImage("fb", "/Users/gene/bin/pix2pix/teaser_v3a.png", 0.0, 0.04, 1.0, 0.96);
    s->addText(h4, ofColor(255), "Isola et al (phillipi.github.io/pix2pix/)", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("Invisible Cities");
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/milan_style_transfer_x4.jpg", 0.0, 0.04, 1, 0.96);
    s->addText(h4, ofColor(255), "opendot.github.io/ml4a-invisible-cities/", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("CycleGAN");
    s->addImage("fb", "/Users/gene/bin/misc/cyclegan/cyclegan.jpg", 0.0, 0.07, 1, 0.95);
    s->addText(h3, ofColor(200), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("CycleGAN");
    s->addMovie("fb", "/Users/gene/bin/misc/cyclegan/cyclegan_zebra.mp4", true, 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(200), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("CycleGAN fail");
    s->addImage("fb", "/Users/gene/bin/misc/cyclegan/putin_zebra.jpeg", 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(255), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("Meat puppet");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump_gene1.mp4", true, 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("pix2pix Angela Merkel");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/dattran-merkel-pix2pix.mp4", true, 0.05, 0.05, 0.9, 0.9)->setLoop(true);
    
    s = slideshow.addSlide("Lyrebird.ai");
    s->addImage("fb", "/Users/gene/bin/misc/stock/lyrebird.jpg", 0.0, 0.00, 1, 0.4);
    s->addSound("Politicians talking about Lyrebird", "/Users/gene/bin/music-learning/lyrebird/lyrebird-politicians.mp3", h4, false, false, 0.05, 0.45, 0.35, 0.04);
    s->addSound("Voice demo 11", "/Users/gene/bin/music-learning/lyrebird/lyrebird-2.mp3", h4, false, false, 0.05, 0.6, 0.35, 0.04);
    s->addText(h4, ofColor(255), "I'm very excited to participate in this year's Loop festival in Berlin!! My talk is called \"Deep Listener: Machine Learning in the Composer's Future Toolkit.\" Later, we will have a machine learning for artists workshop.", 0.05, 0.65, 0.4);
    s->addSound("Voice demo 2", "/Users/gene/bin/music-learning/lyrebird/lyrebird-1.mp3", h4, false, false, 0.55, 0.6, 0.35, 0.04);
    s->addText(h4, ofColor(255), "Oak is strong and also gives shade. The pipe began to rust while new. Thieves who rob friends deserve jail. The ripe taste of cheese improves with age. Cats and dogs each hate the other. Move the vat over the hot fire. The hog crawled under the high fence. Act on these orders with great speed.", 0.55, 0.65, 0.4);
    
    //        s = slideshow.addSlide("Face2Face");
    //        s->addMovie("Face2Face", "/Users/gene/bin/misc/stock/Face2Face - Real-time Face Capture and Reenactment of RGB Videos (CVPR 2016 Oral)-ohmajJTcpNk.mp4", true, 0.1, 0.1, 0.8, 0.8);
    //        s->addText(h4, ofColor(255), "graphics.stanford.edu/~niessner/thies2016face.html", 0.2, 0.05, 0.8);
    
    s = slideshow.addSlide("Synthesizing Obama: Learning Lip Sync from Audio (SIGGRAPH 2017)");
    s->addMovie("Face2Face", "/Users/gene/bin/misc/stock/obama-lipsync.mp4", true, 0.1, 0.1, 0.8, 0.8);
    s->addText(h4, ofColor(255), "https://grail.cs.washington.edu/projects/AudioToObama/", 0.2, 0.05, 0.8);
    
    s = slideshow.addSlide("Audio texture synthesis and style transfer");
    s->addText(h4, ofColor(255), "by Dmitry Ulyanov and Vadim Lebedev\nhttps://dmitryulyanov.github.io/audio-texture-synthesis-and-style-transfer/", 0.01, 0.0, 0.8);
    s->addImage("ibab", "/Users/gene/Writing/_Talks/S4AD-Pioneerworks/06_style-transfer/images/ml_egypt_crab_maps.jpg", 0.01, 0.1, 0.98, 0.5);
    s->addSound("Star Wars Imperial March", "/Users/gene/bin/music-learning/ulyanov/imperial.mp3", h4, false, false, 0.05, 0.65, 0.35, 0.04);
    s->addSound("Star Spangled Banner", "/Users/gene/bin/music-learning/ulyanov/usa.mp3", h4, false, false, 0.05, 0.72, 0.35, 0.04);
    s->addSound("Imperial March x Star Spangled Banner", "/Users/gene/bin/music-learning/ulyanov/imperial_usa.mp3", h4, false, false, 0.05, 0.79, 0.35, 0.04);
    s->addSound("Eminem", "/Users/gene/bin/music-learning/ulyanov/eminem.mp3", h4, false, false, 0.55, 0.65, 0.35, 0.04);
    s->addSound("Gettysburg Address", "/Users/gene/bin/music-learning/ulyanov/gettysburg.mp3", h4, false, false, 0.55, 0.72, 0.35, 0.04);
    s->addSound("Eminem x Gettysburg", "/Users/gene/bin/music-learning/ulyanov/eminem_gettysburg.mp3", h4, false, false, 0.55, 0.79, 0.35, 0.04);
    
    
    
    s = slideshow.addSlide("Content-based recommendation (Sander Dieleman)");
    s->addText(h4, ofColor(255), "https://benanne.github.io/2014/08/05/spotify-cnns.html ", 0.01, 0.0, 0.8);
    s->addImage("fb", "/Users/gene/bin/misc/sander-rec/sander-1.png", 0.0, 0.1, 1, 0.9);
    s = slideshow.addSlide("Content-based recommendation (Sander Dieleman)");
    s->addText(h4, ofColor(255), "https://benanne.github.io/2014/08/05/spotify-cnns.html ", 0.01, 0.0, 0.8);
    s->addImage("fb", "/Users/gene/bin/misc/sander-rec/sander-2.png", 0.0, 0.1, 1, 0.9);
    s = slideshow.addSlide("Content-based recommendation (Sander Dieleman)");
    s->addText(h4, ofColor(255), "https://benanne.github.io/2014/08/05/spotify-cnns.html ", 0.01, 0.0, 0.8);
    s->addImage("fb", "/Users/gene/bin/misc/sander-rec/sander-3.png", 0.0, 0.1, 1, 0.9);
    s = slideshow.addSlide("Content-based recommendation (Sander Dieleman)");
    s->addText(h4, ofColor(255), "https://benanne.github.io/2014/08/05/spotify-cnns.html ", 0.01, 0.0, 0.8);
    s->addImage("fb", "/Users/gene/bin/misc/sander-rec/sander-4.png", 0.0, 0.1, 1, 0.9);
    s = slideshow.addSlide("Content-based recommendation (Sander Dieleman)");
    s->addText(h4, ofColor(255), "https://benanne.github.io/2014/08/05/spotify-cnns.html ", 0.01, 0.0, 0.8);
    s->addImage("fb", "/Users/gene/bin/misc/sander-rec/sander-5.png", 0.0, 0.1, 1, 0.9);
    s = slideshow.addSlide("Content-based recommendation (Sander Dieleman)");
    s->addText(h4, ofColor(255), "https://benanne.github.io/2014/08/05/spotify-cnns.html ", 0.01, 0.0, 0.8);
    s->addImage("fb", "/Users/gene/bin/misc/sander-rec/sander-6.png", 0.0, 0.1, 1, 0.9);
    s = slideshow.addSlide("Content-based recommendation (Sander Dieleman)");
    s->addText(h4, ofColor(255), "https://benanne.github.io/2014/08/05/spotify-cnns.html ", 0.01, 0.0, 0.8);
    s->addImage("fb", "/Users/gene/bin/misc/sander-rec/sander-7.png", 0.0, 0.1, 1, 0.9);
    s = slideshow.addSlide("Content-based recommendation (Sander Dieleman)");
    s->addText(h4, ofColor(255), "https://benanne.github.io/2014/08/05/spotify-cnns.html ", 0.01, 0.0, 0.8);
    s->addImage("fb", "/Users/gene/bin/misc/sander-rec/sander-8.png", 0.0, 0.1, 1, 0.9);
    s = slideshow.addSlide("Content-based recommendation (Sander Dieleman)");
    s->addText(h4, ofColor(255), "https://benanne.github.io/2014/08/05/spotify-cnns.html ", 0.01, 0.0, 0.8);
    s->addImage("fb", "/Users/gene/bin/misc/sander-rec/sander-9.png", 0.0, 0.1, 1, 0.9);
    s = slideshow.addSlide("Content-based recommendation (Sander Dieleman)");
    s->addText(h4, ofColor(255), "https://benanne.github.io/2014/08/05/spotify-cnns.html ", 0.01, 0.0, 0.8);
    s->addImage("fb", "/Users/gene/bin/misc/sander-rec/sander-10.png", 0.0, 0.1, 1, 0.9);
    s = slideshow.addSlide("Content-based recommendation (Sander Dieleman)");
    s->addText(h4, ofColor(255), "https://benanne.github.io/2014/08/05/spotify-cnns.html ", 0.01, 0.0, 0.8);
    s->addImage("fb", "/Users/gene/bin/misc/sander-rec/sander-11.png", 0.0, 0.1, 1, 0.9);
    
    s = slideshow.addSlide("Wavenet optimizing latent factors");
    s->addText(h4, ofColor(255), "https://benanne.github.io/2014/08/05/spotify-cnns.html ", 0.01, 0.0, 0.8);
    s->addImage("fb", "/Users/gene/bin/misc/sander-rec/wavenet-recommenders.png", 0.0, 0, 1, 1);
    
    s = slideshow.addSlide("Ipod of the future");
    s->addImage("fb", "/Users/gene/bin/misc/stock/ipod.jpg", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Musicians dystopia");
    s->addImage("fb", "/Users/gene/bin/misc/stock/skleton-musicians.jpg", 0.0, 0, 1, 1);
    
    
    
    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.1, 0.1, 0.8, 0.8);
    s->start();
    
    s = slideshow.addSlide("ml4a.github.io/guides");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-guides-index.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Guides");
    s->addImage("workshop", "/Users/gene/bin/ml4a/xdegrees_samples.jpg", 0, 0, 0.5, 0.5);
    // s->addImage("workshop", "/Users/gene/bin/ml4a/nabimusic2.png", 0.51, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, 0.51, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/ml4a/neural-painter/dog-cat-interp.mp4", true, 0.0, 0.51, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/bin/tsne/tsne-animals-highlights.png", 0.51, 0.51, 0.5, 0.5);
    
    s = slideshow.addSlide("t-SNE :: CalTech-256 animals");
    s->addScrollableImage("t-SNE animals", "/Users/gene/bin/tsne/grid_animals2.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Audio t-SNE (drum samples)");
    s->setBackgroundFunction(this, &ofApp::drawBgWhite);
    AudioTSNEDemo *attd2 = new AudioTSNEDemo(s, "audio t-sne", 0.0, 0, 1, 1);
    attd2->setTsnePath("/Users/gene/Teaching/ML4A/ml4a-guides/data/example-audio-tSNE-drums.json");
    s->addAction(attd2);
    
    s = slideshow.addSlide("Audio t-SNE (Queen)");
    s->setBackgroundFunction(this, &ofApp::drawBgWhite);
    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0.0, 0, 1, 1);
    s->addAction(attd);
    
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
    
    s = slideshow.addSlide("ml4a.github.io/classes");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("ml4a @ itp", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/ml4a @ itp-nyu -- timelapse_crop.mp4", true, 0, 0, 1, 1)->setPositionRandom();
    s->loadAssets();
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-nn.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-hnnat.png", 0, 0, 1, 1);
    
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


void ofApp::WorkshopMicrosoftTheGarage() {
    
    
    s = slideshow.addSlide("2 Feb 2018, The Garage @ Microsoft Vancouver");
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.4, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.3, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.4, 0.5);
    s->start();
    
	s = slideshow.addSlide("Workshop segments");
	s->addText(h3, ofColor(0), " - Introduction to machine learning & ml4a resources", 0.1, 0.1, 0.8);
	s->addText(h3, ofColor(0), " - Deep neural nets & generative models", 0.1, 0.2, 0.8);
	s->addText(h3, ofColor(0), " - Practical: style transfer and/or char-rnn", 0.1, 0.4, 0.8);
	s->addText(h3, ofColor(0), " - Practical: pix2pix-tensorflow (pre-baked oven)", 0.1, 0.5, 0.8);
	s->addText(h3, ofColor(0), " - Practical: neural synthesis", 0.1, 0.6, 0.8);

    
    s = slideshow.addSlide("About me");
    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
    s->addImage("genre VA", "/Users/gene/bin/misc/sourcetone/genre-AvgVA.jpg", 0.0, 0.4, 0.42, 0.6);
    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
    
    s = slideshow.addSlide("Musical instruments (w/ Jeff Snyder) ~2014");
    s->addImage("tweet", "/Users/gene/Web/genekogan.github.io/_site/images/birl/birl1.jpg", 0.0, 0.0, 1, 0.35);
    s->addImage("tweet", "/Users/gene/bin/misc/Snyderphonics_Manta.jpg", 0.0, 0.365, 1, 0.64);
    
    s = slideshow.addSlide("Media arts / creative tech");
    s->addMovie("simulation", "/Users/gene/bin/images/VertexFields2_01.29.2012.mov", true, 0, 0, 1, 1);
    
    //        s = slideshow.addSlide("Generative art");
    //        s->addMovie("genart", "/Users/gene/bin/images/instagram/bits.mp4", true, 0, 0, 0.333333, 0.5);
    //        s->addMovie("genart", "/Users/gene/bin/images/instagram/constellations.mp4", true, 0.3333, 0, 0.33333, 0.5);
    //        s->addMovie("genart", "/Users/gene/bin/images/instagram/subdivision_2.mp4", true, 0.66666, 0.0, 0.3333, 0.5);
    //        s->addMovie("genart", "/Users/gene/bin/images/instagram/old/vert1.mp4", true, 0, 0.5, 0.333333, 0.5);
    //        s->addMovie("genart", "/Users/gene/bin/images/instagram/video/cubes.mp4", true, 0.33333, 0.5, 0.333333, 0.5);
    //        s->addMovie("genart", "/Users/gene/bin/images/instagram/old/polar_glitch2.mp4", true, 0.66666, 0.5, 0.333333, 0.5);
    
    s = slideshow.addSlide("Nature and simulation");
    s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/listening-to-the-ocean-10.jpg", 0.505, 0, 0.5, 1);
    s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/generator5.png", 0, 0, 0.5, 1);
    
    s = slideshow.addSlide("Kinect Projector Toolkit");
    s->addMovie("KPT", "/Users/gene/bin/opera-toolkit/colin-ribbons-2_nosound.mp4", true, 0.0, 0, 0.5, 0.6);
    s->addMovie("KPT", "/Users/gene/bin/kinect-projector-toolkit/Silhouettes @ Saigon Ranger_nosound.mp4", true, 0.4, 0.4, 0.64, 0.62);
    
    s = slideshow.addSlide("Machine Yearning (2014)");
    s->addMovie("machine yearning", "/Users/gene/bin/machine-yearning/machine-yearning-gopro.mp4", true, 0.0, 0, 1, 1);
    
    //        s = slideshow.addSlide("Mass collaboration: EcoHacker-Build");
    //        s->addImage("ecohack", "/Users/gene/bin/ecohacker-build/_mg_7093_14926714478_o.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Machine learning + visual art (2015->)");
    s->addMovie("dcgan", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0.026, 0.5, 0.47);
    s->addImage("deepdream", "/Users/gene/bin/misc/stock/building-dreams.png", 0, 0.515, 0.5, 0.48);
    s->addImage("stylenet", "/Users/gene/bin/misc/stock/stylenet-original.png", 0.5, 0.53, 0.5, 0.47);
    s->addImage("synthesizing original", "/Users/gene/bin/misc/stock/synthesizing-original.jpg", 0.5, 0.025, 0.5, 0.48);
    s->addText(h4, ofColor(255), "https://www.youtube.com/watch?v=QYcKCGdZvq4", 0.01, 0.0, 1.0);
    s->addText(h5, ofColor(255), "research.googleblog.com/2015/06/inceptionism-going-deeper-into-neural.html", 0.002, 0.475, 1.0);
    s->addText(h4, ofColor(255), "https://arxiv.org/abs/1508.06576", 0.6, 0.51, 1.0);
    s->addText(h4, ofColor(255), "http://www.evolvingai.org/synthesizing", 0.6, 0.0, 1.0);
    
    s = slideshow.addSlide("Neural synthesis");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/nips/NIPS_GeneKogan_new.mp4", true, 0, 0, 1, 1);

    
    /////////////////////////////////////////////////
    // OVERVIEW OF ML4A
    
    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.1, 0.1, 0.8, 0.8);
    
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

    s = slideshow.addSlide("ml4a.github.io/guides");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-guides-index.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Guides");
    s->addImage("workshop", "/Users/gene/bin/ml4a/xdegrees_samples.jpg", 0, 0, 0.5, 0.5);
    //s->addImage("workshop", "/Users/gene/bin/ml4a/nabimusic2.png", 0.51, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, 0.51, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/ml4a/neural-painter/dog-cat-interp.mp4", true, 0.0, 0.51, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/bin/tsne/tsne-animals-highlights.png", 0.51, 0.51, 0.5, 0.5);
    
    s = slideshow.addSlide("Hallucinating faces with PCA");
    s->addMovie("eigenface", "/Users/gene/bin/ml4a/eigenface/eigenface_grid_8x4.mp4", true, 0, 0.06, 1, 0.95);
    s->addText(h4, ofColor(255), "https://github.com/ml4a/ml4a-guides/tree/master/notebooks/Eigenfaces.ipynb", 0.1, 0, 0.8);
    
    //    s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
    //    s->addImage("yolo", "/Users/gene/bin/ml4a/ReverseImageSearch/yolo-screen1.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Guides");
    s->addImage("workshop", "/Users/gene/bin/ml4a/nabimusic2.png", 0.0, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, 0.51, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/ml4a/neural-painter/dog-cat-interp.mp4", true, 0.0, 0.51, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/bin/tsne/tsne-animals-highlights.png", 0.51, 0.51, 0.5, 0.5);
    //
    
    //    s = slideshow.addSlide("Guides");
    //    s->addScrollableImage("animal t-sne", "/Users/gene/bin/tsne/tsne-animals.png", 0.0, 0.0, 1.0, 1.0);
    
    s = slideshow.addSlide("t-SNE :: CalTech-256 animals");
    s->addScrollableImage("t-SNE animals", "/Users/gene/bin/tsne/grid_animals2.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Audio + Text t-SNEs");
    s->setBackgroundFunction(this, &ofApp::drawBgWhite);
    s->addScrollableImage("wiki t-SNE", "/Users/gene/bin/tsne/wiki-tSNE.png", -0.05, 0.0, 0.72, 0.76);
    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0.48, 0.39, 0.54, 0.63);
    attd->setTsnePath("/Users/gene/Teaching/ML4A/ml4a-guides/data/example-audio-tSNE-drums.json");
    s->addAction(attd);
    attd->start();
    s->addText(h4, ofColor(255), "www.genekogan.com/works/wiki-tSNE", 0.03, 0.8, 0.7);
    s->addText(h4, ofColor(255), "github.com/ml4a/ml4a-ofx", 0.67, 0.3, 0.7);
    
    s = slideshow.addSlide("Demos");
    s->addMovie("transfer learning", "/Users/gene/bin/misc/wekinator-coffee-croissant.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("ml4a-ofx + wekinator");
    s->addMovie("andreas", "/Users/gene/bin/misc/workshops/andreas-ml4a-ofx.mp4", true, 0.0, 0.0, 0.7, 0.5);
    s->addMovie("andreas", "/Users/gene/bin/misc/workshops/andreas-pig-classifier.mp4", true, 0.36, 0.4, 0.7, 0.6);

    s = slideshow.addSlide("python + data science tutorials");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-guide-RIS.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("ml4a.github.io/classes");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("ml4a @ itp", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/ml4a @ itp-nyu -- timelapse_crop.mp4", true, 0, 0, 1, 1)->setPositionRandom();
    s->loadAssets();
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-nn.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-hnnat.png", 0, 0, 1, 1);



    
    
    
    
    











	





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
    s->addText(h2, ofColor(0), " - 1998: LeNet + handwritten check detection", 0.1, 0.08, 0.8);
    s->addText(h2, ofColor(0), " - 2006: CIFAR + \"Deep Learning Conspiracy\"", 0.1, 0.16, 0.8);
    s->addText(h2, ofColor(0), " - 2009: Convnet gets SOTA for speech-to-text", 0.1, 0.23, 0.8);
    s->addText(h2, ofColor(0), " - 2010: ImageNet challenge", 0.1, 0.32, 0.7);
    s->addText(h2, ofColor(0), " - 2012: AlexNet gets SOTA for image classification", 0.1, 0.4, 0.7);
    s->addText(h2, ofColor(0), " - 2013: ZFNet + Deep learning investment boom", 0.1, 0.48, 0.7);
    s->addText(h2, ofColor(0), " - 2014(ish): More researchers/students using Theano, Torch, Keras, and others", 0.1, 0.56, 0.7);
    s->addText(h2, ofColor(0), " - 2015: Creative boom from Deepdream, stylenet", 0.1, 0.64, 0.7);
    s->addText(h2, ofColor(0), " - 2016: ResNets, Tensorflow, AlphaGo, research branching", 0.1, 0.72, 0.7);
    s->addText(h2, ofColor(0), " - 2017: Final ImageNet, AlphaZero, OpenMined, safety/security/bias", 0.1, 0.8, 0.7);
    
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
    s = slideshow.addSlide("Singularity concerns");
    s->addText(h2, ofColor(0), "\"Worrying about killer robots is like worrying about overpopulation on Mars\" - Andrew Ng", 0.05, 0.15, 0.75);
    s->addText(h2, ofColor(0), "\"Worrying about sentient AI as the ice caps melt is like standing on the tracks as the train rushes in, worrying about being hit by lightning\" - Bret Victor", 0.05, 0.35, 0.75);
    
    s = slideshow.addSlide("Critical issues in AI");
    s->addImage("napalm", "/Users/gene/bin/misc/stock/napalmgirl_censoredfb.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("drones", "/Users/gene/bin/misc/stock/trumpdrone.jpeg", 0.0, 0.5, 0.5, 0.5);
    s->addImage("pred policing", "/Users/gene/bin/misc/propublica-recidivism.png", 0.5, 0.5, 0.5, 0.5);
    s->addImage("flash crash", "/Users/gene/Pictures/Screenshots/flashcrash_tweet.png", 0.5, 0.0, 0.5, 0.5);




	//////////////////////////////////////////
	// Generative models

    s = slideshow.addSlide("Deep generative models");
    s->addMovie("dcgan", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0.026, 0.5, 0.47);
    s->addImage("deepdream", "/Users/gene/bin/misc/stock/building-dreams.png", 0, 0.515, 0.5, 0.48);
    s->addImage("stylenet", "/Users/gene/bin/misc/stock/stylenet-original.png", 0.5, 0.53, 0.5, 0.47);
    s->addImage("synthesizing original", "/Users/gene/bin/misc/stock/synthesizing-original.jpg", 0.5, 0.025, 0.5, 0.48);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=QYcKCGdZvq4", 0.01, 0.0, 1.0);
    s->addText(h5, ofColor(0), "research.googleblog.com/2015/06/inceptionism-going-deeper-into-neural.html", 0.002, 0.475, 1.0);
    s->addText(h4, ofColor(0), "https://arxiv.org/abs/1508.06576", 0.6, 0.51, 1.0);
    s->addText(h4, ofColor(0), "http://www.evolvingai.org/synthesizing", 0.6, 0.0, 1.0);
    
    s = slideshow.addSlide("pix2pix -> generative model as a filter");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/jasper-streetview.mp4", true, 0, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump_gene1.mp4", true, 0.5, 0.0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/pix2pix/memo-painting.mp4", true, 0.0, 0.5, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/pix2pix/brannon-kurzweil.mp4", true, 0.5, 0.5, 0.5, 0.5);
    
    s = slideshow.addSlide("ML generative models");
    s->addImage("pca", "/Users/gene/bin/misc/stock/GaussianScatterPCA.svg.png", 0.0, 0, 0.5, 1.0);
    s->addImage("arrow", "/Users/gene/bin/misc/stock/arrow.png", 0.47, 0.0, 0.06, 1.0);
    s->addImage("deepdream", "/Users/gene/bin/misc/stock/building-dreams.png", 0.48, 0.3, 0.63, 0.5);
    s->addMovie("dcgan", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0.4, 0.0, 0.25, 0.33);
    s->addMovie("Deepzoom", "/Users/gene/bin/strelka/out2.mp4", true, 0.4, 0.67, 0.31, 0.34);
    s->addImage("synthesizing original", "/Users/gene/bin/misc/stock/synthesizing-original.jpg", 0.71, 0.66, 0.3, 0.35);
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_content/deeptrain2.mp4", true, 0.66, 0.0, 0.35, 0.35);
    
    s = slideshow.addSlide("Attributes are not independent");
    s->addImage("pca", "/Users/gene/bin/misc/stock/GaussianScatterPCA.svg.png", 0.0, 0, 0.5, 1.0);
    s->addImage("pca", "/Users/gene/bin/misc/stock/GaussianScatterPCA.svg-flipped.png", 0.5, 0, 0.5, 1.0);
    s->addImage("arrow", "/Users/gene/bin/misc/stock/arrow.png", 0.47, 0.0, 0.06, 1.0);
    
    s = slideshow.addSlide("Attributes are not independent");
    s->addImage("pca", "/Users/gene/bin/misc/stock/GaussianScatterPCA.svg.png", 0.0, 0, 0.5, 1.0);
    s->addImage("pca", "/Users/gene/bin/misc/stock/GaussianScatterPCA.svg-flipped.png", 0.5, 0, 0.5, 1.0);
    s->addImage("arrow", "/Users/gene/bin/misc/stock/arrow.png", 0.47, 0.0, 0.06, 1.0);
    
    s = slideshow.addSlide("Principal component analysis");
    s->addImage("pca", "/Users/gene/bin/misc/stock/fig_pca_principal_component_analysis.png", 0.0, 0.0, 1, 1);
    s->addText(h4, ofColor(0), "http://www.nlpca.org/pca_principal_component_analysis.html", 0.1, 0, 0.8);
    
    s = slideshow.addSlide("Pixel space");
    s->addImage("pixelspace", "/Users/gene/bin/misc/stock/pixel_space_small.jpg", 0.0, 0.0, 0.55, 0.7);
    s->addImage("pixelspace", "/Users/gene/bin/misc/stock/arrow.png", 0.56, 0.0, 0.08, 0.7);
    s->addImage("pixelspace", "/Users/gene/bin/misc/stock/monalisa_pixelated.png", 0.65, 0.0, 0.3, 0.7);
    s->addText(h3, ofColor(0), "\"To deal with hyper-planes in a 14-dimensional space, visualize a 3-D space and say “fourteen” to yourself very loudly. Everyone does it.\"\n - Geoffrey Hinton", 0.01, 0.74, 0.8);
    
    s = slideshow.addSlide("Faces in the wild");
    s->addImage("pixelspace", "/Users/gene/bin/ml4a/eigenface/faces_grid_16x9.png", 0.0, 0.0, 1, 1);
    
    s = slideshow.addSlide("PCA procedure");
    s->addImage("pca", "/Users/gene/bin/misc/stock/pca-pixelspace.png", 0.25, 0.1, 0.35, 0.4);
    s->addImage("pca", "/Users/gene/bin/misc/stock/pca-pcaspace.png", 0.7, 0.1, 0.27, 0.4);
    s->addImage("pca", "/Users/gene/bin/misc/stock/arrow.png", 0.62, 0.1, 0.06, 0.4);
    s->addImage("pca", "/Users/gene/bin/misc/stock/pca-calculate.png", 0.02, 0.15, 0.18, 0.1);
    s->addImage("pca", "/Users/gene/bin/misc/stock/pca-reduce.png", 0.02, 0.25, 0.18, 0.1);
    s->addText(h2, ofColor(0,180,0), "Compute PC + reduce dimensionality", 0.02, 0.001, 0.8);
    s->addBreakpoint();
    s->addText(h2, ofColor(0,180,0), "Reconstruct", 0.02, 0.501, 0.8);
    s->addImage("pca", "/Users/gene/bin/misc/stock/pca-pcaspace.png", 0.25, 0.6, 0.27, 0.4);
    s->addImage("pca", "/Users/gene/bin/misc/stock/pca-pixelspace.png", 0.62, 0.6, 0.35, 0.4);
    s->addImage("pca", "/Users/gene/bin/misc/stock/arrow.png", 0.53, 0.6, 0.06, 0.4);
    s->addImage("pca", "/Users/gene/bin/misc/stock/pca-reconstruct.png", 0.02, 0.65, 0.18, 0.1);
    
    s = slideshow.addSlide("Reconstructions, n = {2000, 1000, 500, 100, 50, 10, 2, 1}");
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_29_original.png", 0.1, 0.15, 0.3, 0.3);
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_29_reconstructed.png", 0.0, 0.54, 1, 0.3);
    s->addText(h4, ofColor(0), "https://github.com/ml4a/ml4a-guides/tree/master/notebooks/Eigenfaces.ipynb", 0.1, 0, 0.8);
    
    s = slideshow.addSlide("Reconstructions, n = {2000, 1000, 500, 100, 50, 10, 2, 1}");
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_2_original.png", 0, 0, 0.15, 0.195);
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_2_reconstructed.png", 0.15, 0, 0.85, 0.195);
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_15_original.png", 0, 0.2, 0.15, 0.195);
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_15_reconstructed.png", 0.15, 0.2, 0.85, 0.195);
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_17_original.png", 0, 0.4, 0.15, 0.195);
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_17_reconstructed.png", 0.15, 0.4, 0.85, 0.195);
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_19_original.png", 0, 0.6, 0.15, 0.195);
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_19_reconstructed.png", 0.15, 0.6, 0.85, 0.195);
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_28_original.png", 0, 0.6, 0.15, 0.195);
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_28_reconstructed.png", 0.15, 0.6, 0.85, 0.195);
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_24_original.png", 0, 0.8, 0.15, 0.195);
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_24_reconstructed.png", 0.15, 0.8, 0.85, 0.195);
    
    // random numbers?
    s = slideshow.addSlide("Interpolating between face codes");
    s->addImage("eigenface", "/Users/gene/bin/ml4a/eigenface/interpolated1.png", 0, 0.05, 1.0, 0.15);
    s->addImage("eigenface", "/Users/gene/bin/ml4a/eigenface/interpolated2.png", 0, 0.21, 1.0, 0.15);
    s->addImage("eigenface", "/Users/gene/bin/ml4a/eigenface/interpolated3.png", 0, 0.37, 1.0, 0.15);
    s->addImage("eigenface", "/Users/gene/bin/ml4a/eigenface/interpolated4.png", 0, 0.53, 1.0, 0.15);
    s->addImage("eigenface", "/Users/gene/bin/ml4a/eigenface/interpolated5.png", 0, 0.69, 1.0, 0.15);
    s->addImage("eigenface", "/Users/gene/bin/ml4a/eigenface/interpolated6.png", 0, 0.85, 1.0, 0.15);
    
    s = slideshow.addSlide("Hallucinating faces");
    s->addImage("eigenface", "/Users/gene/bin/ml4a/eigenface/hallucinated_faces.png", 0, 0.055, 1, 0.943);
    s->addText(h4, ofColor(0), "https://github.com/ml4a/ml4a-guides/tree/master/notebooks/Eigenfaces.ipynb", 0.1, 0, 0.8);
    
    s = slideshow.addSlide("Nightmare");
    s->addMovie("eigenface", "/Users/gene/bin/ml4a/eigenface/eigenface_grid_8x4.mp4", true, 0, 0.06, 1, 0.95);
    s->addText(h4, ofColor(0), "https://github.com/ml4a/ml4a-guides/tree/master/notebooks/Eigenfaces.ipynb", 0.1, 0, 0.8);
    
    s = slideshow.addSlide("Autoencoders");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder.png", 0, 0, 1, 0.3);
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder_net.png", 0, 0.3, 1, 0.65);
    s->addText(h4, ofColor(0), "world's most expensive identity function", 0.01, 0.93, 0.8);
    // samples left -> right
    
    
    ///////////////////
    // Insert neural net stuff
    
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
    
    //    s = slideshow.addSlide("Convnet geometry (volume interpretation)");
    //    s->addImage("volumes", "/Users/gene/bin/misc/stock/cnn_volumes.jpg", 0.0, 0.0, 1.0, 1.0);
    //    s->addText(h4, ofColor(0), "http://cs231n.stanford.edu/slides/winter1516_lecture2.pdf", 0.1, 0.05, 1);
    
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
    
    
    //////////////////
    // back to gen models
    
    
    s = slideshow.addSlide("so.... back to Autoencoders");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder.png", 0, 0, 1, 0.3);
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder_net.png", 0, 0.3, 1, 0.65);
    s->addText(h4, ofColor(0), "world's most expensive identity function", 0.01, 0.93, 0.8);
    // samples left -> right
    
    s = slideshow.addSlide("Reconstructions MNIST");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoders_mnist_reconstruction.png", 0, 0, 1, 1);
    
    
    // GANS + DCGANs + A book from the sky + Zero Likes + VGAN
    
    s = slideshow.addSlide("Generative adversarial nets (Goodfellow et al)");
    s->addImage("Mona Lisa", "/Users/gene/bin/misc/stock/GANs.png", 0.0, 0.0, 1.0, 1.0);
    
    s = slideshow.addSlide("Deep convolutional generative adversarial network");
    s->addImage("Mona Lisa", "/Users/gene/bin/misc/stock/faces_128_filter_samples.png", 0.0, 0.15, 1.0, 0.86);
    s->addText(h4, ofColor(0), "Radford, Metz, Chintala", 0.1, 0.0, 0.8);
    s->addText(h4, ofColor(0), "arxiv.org/abs/1511.06434", 0.1, 0.08, 0.8);
    
    s = slideshow.addSlide("Arithmetic on generated faces");
    s->addImage("smiling arithmetic", "/Users/gene/bin/misc/stock/faces_arithmetic_collage1.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "Radford, Metz, Chintala (arxiv.org/abs/1511.06434)", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("Interpolating faces");
    s->addMovie("mymov2", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "Radford, Metz, Chintala (arxiv.org/abs/1511.06434)", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("\"Interpolating\" numbers");
    s->addMovie("MNIST interpolations", "/Users/gene/bin/dcgan/summary/digits.mov", true, 0.2, 0.1, 0.6, 0.6);
    
    s = slideshow.addSlide("HIT-OR3C");
    s->addScrollableImage("Actuals", "/Users/gene/bin/dcgan/summary/actual.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Fake (R) + Real (L)");
    s->addImage("Mona Lisa", "/Users/gene/bin/dcgan/summary/fakereal.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("A Book from the Sky (Dec 2015)");
    s->addMovie("zloops", "/Users/gene/bin/dcgan/summary/zloops.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Character interpolations");
    s->addMovie("interplations", "/Users/gene/bin/dcgan/summary/interpolations.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Radical interpolations");
    s->addText(h3, ofColor(0), "interpolations across characters sharing the same radical often appear to preserve it", 0.1, 0.0, 0.8);
    s->addMovie("radical interpolations", "/Users/gene/bin/dcgan/summary/radinterpolation.mp4", true, 0, 0.2, 1, 0.8);
    
    s = slideshow.addSlide("Arithmetic tricks");
    s->addMovie("arithmetic", "/Users/gene/bin/dcgan/public/arithmetic2.mp4", true, 0.1, 0.2, 0.8, 0.6);
    
    s = slideshow.addSlide("DCGAN flowers");
    s->addImage("flowers", "/Users/gene/bin/dcgan/public/07_flowers.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://twitter.com/vintermann/status/675599478494208000", 0, 0, 1);
    
    s = slideshow.addSlide("DCGAN Manga");
    s->addImage("manga 1", "/Users/gene/bin/dcgan/public/07_manga_sample1.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://github.com/mattya/chainer-DCGAN", 0, 0, 1);
    
    s = slideshow.addSlide("DCGAN Manga interpolations");
    s->addImage("manga 2", "/Users/gene/bin/dcgan/public/07_manga_sample2.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://github.com/mattya/chainer-DCGAN", 0, 0, 1);
    
    
    s = slideshow.addSlide("@zero_likes (Sam Hains)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addImage("zero_likes", "/Users/gene/bin/dcgan/zero_likes/zero_likes-selfie.png", 0.0, 0.05, 1, 0.9);
    
    s = slideshow.addSlide("@zero_likes (Sam Hains)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addImage("zero_likes", "/Users/gene/bin/dcgan/zero_likes/zero_likes-doglooks.png", 0.0, 0.05, 1, 0.9);
    
    s = slideshow.addSlide("@zero_likes (Sam Hains)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addImage("zero_likes", "/Users/gene/bin/dcgan/zero_likes/zero_likes-sandwich.png", 0.0, 0.05, 1, 0.9);
    
    // vgan
    s = slideshow.addSlide("Video prediction GANs");
    s->addMovie("Video GANS", "/Users/gene/bin/dcgan/video_gans.mp4", true, 0.0, 0.03, 1, 1);
    s->addText(h4, ofColor(0), "Carl Vondrick (http://web.mit.edu/vondrick/tinyvideo/)", 0.0, 0.0, 0.8);
    
    s = slideshow.addSlide("loading video gans!");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("Loading VGAN", "/Users/gene/bin/dcgan/loading_vgan.mp4", true, 0.0, 0.0, 1, 1);
    
    
    // DGN
    
    s = slideshow.addSlide("Deep Generator Networks");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/DGN_architecture.jpg", 0.0, 0.1, 1, 0.41);
    s->addImage("classvis", "/Users/gene/bin/misc/stock/class-synthesis-deepgen.png", 0.0, 0.52, 1, 0.48);
    s->addText(h4, ofColor(0), "Nguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.15, 0.01, 1.0);
    s->start();
    
    
    s = slideshow.addSlide("DGN CaffeNet");
    s->addScrollableImage("classvis", "/Users/gene/bin/synthesizing/synthesizing-caffenet-tSNE.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("DGN convergence");
    s->addText(h4, ofColor(0), "https://github.com/Evolving-AI-Lab/synthesizing", 0.15, 0.00, 1.0);
    ofxPPMovie *mov3 = s->addMovie("macaw", "/Users/gene/bin/synthesizing/macaw.mov", true, 0.05, 0.05, 0.9, 0.9);
    mov3->setLoop(false);
    
    s = slideshow.addSlide("DGN convergence");
    ofxPPMovie *mov = s->addMovie("cheeseburger", "/Users/gene/bin/synthesizing/teapotnew.mov", true, 0.02, 0.1, 0.46, 0.8);
    mov->setLoop(false);
    ofxPPMovie *mov2 = s->addMovie("teapot", "/Users/gene/bin/synthesizing/cheeseburgernew.mov", true, 0.52, 0.1, 0.46, 0.8);
    mov2->setLoop(false);
    
    s = slideshow.addSlide("DGN (people)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/people.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("DGN (boathouses)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/boathouses.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("Plug & Play Generative Networks");
    s->addImage("PPGN", "/Users/gene/bin/misc/ppgn_image_captioning.jpg", 0, 0.05, 1, 0.97);
    s->addText(h4, ofColor(0), "http://www.evolvingai.org/ppgn", 0.1, 0.0, 0.8);
    
    
    ////////////////////////
    // pix2pix
    
    s = slideshow.addSlide("Image-to-Image Translation with Conditional Adversarial Nets");
    s->addImage("fb", "/Users/gene/bin/pix2pix/teaser_v3a.png", 0.0, 0.04, 1.0, 0.96);
    s->addText(h3, ofColor(100), "phillipi.github.io/pix2pix/", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("Invisible Cities");
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/milan_style_transfer_x4.jpg", 0.0, 0.04, 1, 0.96);
    s->addText(h3, ofColor(100), "opendot.github.io/ml4a-invisible-cities/", 0.02, 0.00, 0.8);
    
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
    s->addText(h3, ofColor(100), "github.com/genekogan/InvisibleCities/", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("Pix2Pix experiment (Ildar Iakubov)");
    s->addMovie("fb", "/Users/gene/bin/strelka/ildar-pix2pix.mp4", false, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Pix2Pix streetview (Jasper van Loenen)");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/jasper-streetview.mp4", false, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Pix2Pix person-to-person (Brannon Dorsey)");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/brannon-kurzweil.mp4", false, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Meat puppet");
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/trump_face_train.png", 0.0, 0.0, 0.45, 1.0);
    s->addImage("fb", "/Users/gene/bin/misc/stock/arrow.png", 0.46, 0.0, 0.08, 1.0);
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/gene_face_test.png", 0.55, 0.0, 0.45, 1.0);
    
    s = slideshow.addSlide("Meat puppet");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump_gene1.mp4", false, 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Meat puppet @ ECAL");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump-meatpuppet-pix2pix-ecal.mp4", true, 0.0, 0.0, 1.0, 1.0)->setPosition(0.25);
    
    s = slideshow.addSlide("Pix2Pix + webcam (Memo Akten)");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/memo-painting.mp4", true, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Pix2Pix HD!");
    s->addMovie("fb", "/Users/gene/bin/misc/High-Resolution Image Synthesis and Semantic Manipulation with Conditional GANs.mp4", true, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("CycleGAN");
    s->addImage("fb", "/Users/gene/bin/misc/cyclegan/cyclegan.jpg", 0.0, 0.07, 1, 0.95);
    s->addText(h3, ofColor(100), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("CycleGAN");
    s->addMovie("fb", "/Users/gene/bin/misc/cyclegan/cyclegan_zebra.mp4", true, 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(100), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("CycleGAN fail");
    s->addImage("fb", "/Users/gene/bin/misc/cyclegan/putin_zebra.jpeg", 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(100), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    

    s = slideshow.addSlide("GPU Options");
    s->addText(h3, ofColor(0), "Azure, GCC, EC2", 0.1, 0.1, 0.8);
    s->addText(h3, ofColor(0), "FloydHub", 0.1, 0.2, 0.8);
    s->addText(h3, ofColor(0), "Paperspace", 0.1, 0.3, 0.8);
    s->addText(h3, ofColor(0), "your own!", 0.1, 0.4, 0.8);
    
}
