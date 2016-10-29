#include "ofApp.h"



void ofApp::TechCode() {
    
    
    s = slideshow.addSlide("Good evening");
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
    s->start();
    
    s = slideshow.addSlide("about me");
    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
    s->addMovie("KPT", "/Users/gene/Desktop/colin-ribbons-2.mp4", true, 0.0, 0.45, 0.4, 0.55);
    
    // creative machines
    s = slideshow.addSlide("Creativity");
    s->addText(h2, ofColor(0), "so can machines be creative?", 0.1, 0.2, 0.7);
    
    s = slideshow.addSlide("Can machines think?");
    s->addImage("cmt 1", "/Users/gene/bin/misc/turing_cmt_1.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Can machines think?");
    s->addImage("cmt 1", "/Users/gene/bin/misc/turing_cmt_2.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Can machines think?");
    s->addText(h2, ofColor(0), "\"The question of whether a computer can think is no more interesting than the question of whether a submarine can swim.\" - Edsger Dijkstra", 0.1, 0.1, 0.7);

    s = slideshow.addSlide("Convolutional neural networks in 5 min (brainbow by Katie Matho)");
    s->addImage("neural net", "/Users/gene/bin/misc/stock/brainbow.jpg", 0, 0, 1, 1);
    
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
    
    s = slideshow.addSlide("Training our neural network");
    s->addMovie("mnist", "/Users/gene/bin/misc/stock/mnist_weights_demo.mp4", true, 0, 0, 1, 1)->setLoop(false);
    
    s = slideshow.addSlide("Convnet demo");
    CcvForwardPassDemo *ccvd = new CcvForwardPassDemo(s, "ccv", 0, 0, 1, 1);
    s->addAction(ccvd);
    
    s = slideshow.addSlide("Reverse image search");
    ReverseImageSearchDemo *risd = new ReverseImageSearchDemo(s, "rims", 0, 0, 1, 1);
    s->addAction(risd);
    s->start();
    
    s = slideshow.addSlide("convnet -> t-SNE");
    s->addScrollableImage("animal t-sne", "/Users/gene/bin/tsne/tsne-animals.png", 0.0, 0.0, 1.0, 1.0);
    
    s = slideshow.addSlide("www.genekogan.com/works/wiki-tSNE");
    s->addScrollableImage("wiki t-SNE", "/Users/gene/bin/tsne/wiki-tSNE.png", 0.0, 0.09, 1.0, 0.9);
    
    s = slideshow.addSlide("Audio t-SNE");
    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0, 0, 1, 1);
    s->addAction(attd);
    
    slideshow.addSlide("t-SNE :: Ikea catalog (by Golan Levin + Aman Tiwari)")->addScrollableImage("t-SNE ikea", "/Users/gene/bin/tsne/contributions/ikea_golan_aman.jpg", 0, 0, 1, 1);

    s = slideshow.addSlide("Deep Generator Networks");
    s->addImage("classvis", "/Users/gene/bin/misc/stock/class-synthesis-deepgen.png", 0.0, 0.2, 1, 0.8);
    s->addText(h4, ofColor(0), "Nguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.15, 0.1, 1.0);
    s->start();
    
    s = slideshow.addSlide("DGN convergence");
    ofxPPMovie *mov = s->addMovie("cheeseburger", "/Users/gene/bin/synthesizing/cheeseburgernew.mov", true, 0.1, 0.1, 0.8, 0.8);
    mov->setLoop(false);
    
    s = slideshow.addSlide("DGN convergence");
    ofxPPMovie *mov2 = s->addMovie("teapot", "/Users/gene/bin/synthesizing/teapotnew.mov", true, 0.1, 0.1, 0.8, 0.8);
    mov2->setLoop(false);
    
    s = slideshow.addSlide("DGN (buttes)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/buttes.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("DGN (people as artifacts)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/people.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("DGN (discotheque)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/discotheque.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("DGN (boathouses)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/boathouses.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("DGN (Places365)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/new_classes.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Deep Generator Networks");
    s->addScrollableImage("classvis", "/Users/gene/bin/synthesizing/synthesizing-caffenet-tSNE.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("A Book from the Sky");
    s->addMovie("zloops", "/Users/gene/bin/dcgan/summary/zloops.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Character interpolations");
    s->addMovie("interplations", "/Users/gene/bin/dcgan/public/interpolations_3.mp4", true, 0.2, 0.15, 0.6, 0.6);
    
    s = slideshow.addSlide("Radical interpolations");
    s->addText(h3, ofColor(0), "interpolations across characters sharing the same radical often appear to preserve it", 0.1, 0.0, 0.8);
    s->addMovie("radical interpolations", "/Users/gene/bin/dcgan/summary/radinterpolation.mp4", true, 0, 0.2, 1, 0.8);

    s = slideshow.addSlide("Dense captioning (Li, Karpathy, Johnson)");
    s->addImage("densecap", "/Users/gene/bin/misc/stock/rnn/densecap.png", 0, 0.06, 1, 0.94);
    s->addText(h4, ofColor(0), "http://cs.stanford.edu/people/karpathy/densecap/", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("Dense captioning Atlas, The Next Generation");
    s->addMovie("densecap", "/Users/gene/bin/densecap/atlas.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Dense captioning Pouff's grocery trip");
    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream_grocery.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "original: https://www.youtube.com/watch?v=DgPaCWJL7XI", 0.01, 0.0, 0.99);
    
    s = slideshow.addSlide("Dense captioning Deepdream");
    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Deepdream (2015, Mordvintsev, Tyka, Olah)");
    s->addImage("Ibis", "/Users/gene/bin/deepdream/paper/ibis.png", 0.0, 0.0, 1.0, 0.65);
    s->addImage("Deepdream prototypes", "/Users/gene/bin/deepdream/paper/Funny-Animals.png", 0.0, 0.66, 1.0, 0.33);
    s->addText(h4, ofColor(0), "googleresearch.blogspot.com/2015/06/inceptionism-going-deeper-into-neural.html]", 0.04, 0.0, 1.0);
    
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
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_feedback/theFrame7.mov", true, 0.5, 0.5, 0.5, 0.5);
    
    s = slideshow.addSlide("Style Transfer");
    s->addImage("Mona Lisa -> Cubist/Expressionist/Impressionist", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_cubist_expressionist_impressionist.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Video style with optical flow loss term (Ruder et al, 2016)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("video style", "/Users/gene/bin/style-transfer/10_optical_flow/video-style-transfer-x4-reordered.mp4", true, 0, 0, 1, 1);
    
    CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
    s = slideshow.addSlide("Cubist Mirror");
    s->addAction(cmd);
    
    s = slideshow.addSlide("Machine Learning for Artists @ ITP-NYU, Spring 2016");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("ml4a @ itp 1", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/01.mp4", true, 0, 0.01, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addMovie("ml4a @ itp 2", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/02.mp4", true, 1.01 / 3.0, 0.01, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addMovie("ml4a @ itp 3", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/03.mp4", true, 2.02 / 3.0, 0.01, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addMovie("ml4a @ itp 4", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/04.mp4", true, 0, 0.51, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addMovie("ml4a @ itp 5", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/05.mp4", true, 1.01 / 3.0, 0.51, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addMovie("ml4a @ itp 6", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/06.mp4", true, 2.02 / 3.0, 0.51, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addText(h4, ofColor(255), "3.24 introduction, neural networks", 0.0, 0.0, 1.0/3.0);
    s->addText(h4, ofColor(255), "3.31 wekinator + applications", 1.01/3.0, 0.0, 1.0/3.0);
    s->addText(h4, ofColor(255), "4.7 convolutional neural networks", 2.02/3.0, 0.0, 1.0/3.0);
    s->addText(h4, ofColor(255), "4.14 convnet applications", 0.0, 0.5, 1.0/3.0);
    s->addText(h4, ofColor(255), "4.21 recurrent neural networks", 1.01/3.0, 0.5, 1.0/3.0);
    s->addText(h4, ofColor(255), "4.28 game AI, reinforcement learning", 2.02/3.0, 0.5, 1.0/3.0);
    s->loadAssets();
    
    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.2, 0.2, 0.6, 0.6);
    
    s = slideshow.addSlide("Thank you");
    s->addMovie("t-SNE convergence", "/Users/gene/Downloads/imgs/tsne_manual.mp4", true, 0, 0, 1, 1);
    s->addRect(ofColor(255,160), 0.005, 0.19, 0.33, 0.25);
    s->addRect(ofColor(255,160), 0.595, 0.19, 0.33, 0.25);
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);

}


void ofApp::IXDS() {
    
    // neural aesthetic
    // ml4a
    // convnets
    // t-SNE
    // - audio demo
    // Densecap
    // Style transfer
    // Cubist Mirror
    // Alt-AI
    
    s = slideshow.addSlide("good morning");
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
    s->addText(h2, ofColor(0), "the neural aesthetic @ schoolofma", 0.1, 0.5, 0.9);
    s->start();
    
    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.2, 0.2, 0.6, 0.6);
    
    s = slideshow.addSlide("about me");
    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
    s->addMovie("KPT", "/Users/gene/Desktop/colin-ribbons-2.mp4", true, 0.0, 0.45, 0.4, 0.55);
    
    s = slideshow.addSlide("Convolutional neural networks in 5 min (brainbow by Katie Matho)");
    s->addImage("neural net", "/Users/gene/bin/misc/stock/brainbow.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Perceptrons");
    s->addImage("perceptrons top", "/Users/gene/bin/misc/stock/nytimes_perceptron_top.png", 0.0, 0.0, 1, 0.24);
    s->addImage("perceptrons", "/Users/gene/bin/misc/stock/nytimes_perceptron.png", 0.0, 0.24, 1, 0.76);
    
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
    
    s = slideshow.addSlide("Forward pass");
    s->addImage("neuron", "/Users/gene/bin/misc/stock/forwardPassDemo/fp_1.png", 0.1, 0.1, 0.8, 0.8);
    s->addBreakpoint();
    s->addImage("neuron", "/Users/gene/bin/misc/stock/forwardPassDemo/fp_5.png", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("MNIST");
    s->addImage("mnist", "/Users/gene/bin/misc/stock/mnist_random_sample.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Classifying handwritten numbers");
    s->addImage("mnist", "/Users/gene/bin/misc/mnist-net.png", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Training our neural network");
    s->addImage("mnist1", "/Users/gene/bin/misc/stock/mnist-forward-pass-1.png", 0, 0, 1, 1);
    s->addBreakpoint();
    //    s->addImage("mnist2", "/Users/gene/bin/misc/stock/mnist-forward-pass-2.png", 0, 0, 1, 1);
    //    s->addBreakpoint();
    s->addImage("mnist3", "/Users/gene/bin/misc/stock/mnist-forward-pass-3.png", 0, 0, 1, 1);
    //    s->addBreakpoint();
    //    s->addImage("mnist4", "/Users/gene/bin/misc/stock/mnist-forward-pass-4.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Training our neural network");
    s->addMovie("mnist", "/Users/gene/bin/misc/stock/mnist_weights_demo.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("What tricks ordinary neural nets?");
    s->addImage("CIFAR cats", "/Users/gene/bin/misc/stock/cifar-cats.png", 0.0, 0.02, 1, 0.48);
    s->addImage("CIFAR-10 linear classifier", "/Users/gene/bin/misc/stock/cifar_weights_linclassifier_cs231n.png", 0.0, 0.52, 1.0, 0.25);
    s->addText(h4, ofColor(0), "CIFAR-10 linear classifier [ cs231n.stanford.edu/slides/winter1516_lecture2.pdf ]", 0.10, 0.8, 1);
    
    s = slideshow.addSlide("Convolution layers");
    s->addMovie("convolution", "/Users/gene/bin/misc/stock/convolution_demo.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "ml4a.github.io/dev/demos/demo_convolution.html", 0.1, 0.05, 1);
    
    s = slideshow.addSlide("Convnet demo");
    CcvForwardPassDemo *ccvd = new CcvForwardPassDemo(s, "ccv", 0, 0, 1, 1);
    s->addAction(ccvd);
    
    s = slideshow.addSlide("What can we do with neural nets?");
    s->addImage("wekinator", "/Users/gene/bin/misc/stock/wekinator.png", 0, 0, 0.5, 0.5);
    s->addMovie("faceosc + ableton", "/Users/gene/Desktop/faceosc_ableton.mp4", true, 0.4, 0.4, 0.6, 0.6);
    s->addText(h3, ofColor(0), "Machine learning for musicians + artists", 0.5, 0.1, 0.5);
    s->addText(h3, ofColor(0), "by Rebecca Fiebrink, @Princeton->@Goldsmiths", 0.5, 0.2, 0.5);
    s->addText(h3, ofColor(0), "Osc interface for your favorite apps", 0.5, 0.3, 0.5);
    
    s = slideshow.addSlide("Create mappings between sensors and synthesis parameters");
    s->addImage("kinect", "/Users/gene/bin/misc/stock/kinect-skeleton.png", 0, 0, 0.3333, 0.3333);
    s->addImage("leap", "/Users/gene/bin/misc/stock/leap-hands.jpg", 0, 0.33333, 0.3333, 0.33333);
    s->addImage("face", "/Users/gene/bin/misc/stock/face-osc.png", 0, 0.66666, 0.3333, 0.33333);
    s->addImage("arrow", "/Users/gene/bin/misc/stock/arrow.png", 0.4, 0.4, 0.2, 0.3);
    s->addImage("leap", "/Users/gene/bin/misc/stock/ableton-params.png", 0.66666, 0.0, 0.3333, 0.5);
    s->addImage("leap", "/Users/gene/bin/images/vjing/vj_160.jpg", 0.66666, 0.5, 0.3333, 0.5);
    
    s = slideshow.addSlide("t-SNE (Laurens van der Maaten + Geoff Hinton]");
    s->addImage("t-sne", "/Users/gene/bin/misc/stock/tsne.png", 0.0, 0.1, 1.0, 0.9);
    s->addText(h3, ofColor(0), "[http://www.cs.toronto.edu/~hinton/absps/tsne.pdf]", 0.2, 0.0, 0.8);
    
    s = slideshow.addSlide("convnet -> t-SNE");
    s->addScrollableImage("animal t-sne", "/Users/gene/bin/tsne/tsne-animals.png", 0.0, 0.0, 1.0, 1.0);
    
    s = slideshow.addSlide("www.genekogan.com/works/wiki-tSNE");
    s->addScrollableImage("wiki t-SNE", "/Users/gene/bin/tsne/wiki-tSNE.png", 0.0, 0.09, 1.0, 0.9);
    
    s = slideshow.addSlide("Audio t-SNE");
    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0, 0, 1, 1);
    s->addAction(attd);
    
    s = slideshow.addSlide("t-SNE colors converging in 2d");
    s->addMovie("t-SNE convergence", "/Users/gene/Downloads/imgs/tsne_manual.mp4", true, 0, 0, 1, 1);
    slideshow.addSlide("t-SNE :: CalTech-256 animals")->addScrollableImage("t-SNE animals", "/Users/gene/bin/tsne/grid_animals2.png", 0, 0, 1, 1);
    slideshow.addSlide("t-SNE :: Flowers")->addScrollableImage("t-SNE flowers", "/Users/gene/bin/tsne/grid_flowers.png", 0, 0, 1, 1);
    slideshow.addSlide("t-SNE :: Ikea catalog (by Golan Levin + Aman Tiwari)")->addScrollableImage("t-SNE ikea", "/Users/gene/bin/tsne/contributions/ikea_golan_aman.jpg", 0, 0, 1, 1);
    slideshow.addSlide("t-SNE :: Bogota bricks (by Olivia Jack)")->addScrollableImage("t-SNE bogota", "/Users/gene/bin/tsne/contributions/bogota-brick-p50.png", 0, 0, 1, 1);
    slideshow.addSlide("t-SNE :: Impressionist paintings (by Moritz Stefaner)")->addScrollableImage("t-SNE impressionism", "/Users/gene/bin/tsne/contributions/impressionism_moritz.jpg", 0, 0, 1, 1);
    slideshow.addSlide("t-SNE :: Sattelite images (by Zach Lieberman)")->addScrollableImage("t-SNE sattelite images", "/Users/gene/bin/tsne/contributions/sattelite_images_zach.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Visualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]");
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l2.png", 0.0, 0.0, 0.5, 1);
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l3.png", 0.5, 0.0, 0.5, 1);
    s->addText(h3, ofColor(0), "Image patches which respond most to filters", 0.2, 0.0, 1.0);
    
    s = slideshow.addSlide("Class visualization");
    s->addImage("Deepdream classvis", "/Users/gene/bin/deepdream/paper/classvis.png", 0.0, 0.05, 1, 0.42);
    s->addImage("classvis", "/Users/gene/bin/misc/stock/class-synthesis-deepgen.png", 0.0, 0.5, 1, 0.5);
    s->addText(h4, ofColor(0), "Going deeper with Inceptionism (Mordvintsev, Olah, Tyka)", 0.2, 0.0, 1.0);
    //    s->addText(h4, ofColor(0), "googleresearch.blogspot.com/2015/06/inceptionism-going-deeper-into-neural.html]", 0.2, 0.1, 1.0);
    s->addText(h4, ofColor(0), "Nguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.15, 0.48, 1.0);
    
    s = slideshow.addSlide("Deepdream (2015, Mordvintsev, Tyka, Olah)");
    s->addImage("Ibis", "/Users/gene/bin/deepdream/paper/ibis.png", 0.0, 0.0, 1.0, 0.65);
    s->addImage("Deepdream prototypes", "/Users/gene/bin/deepdream/paper/Funny-Animals.png", 0.0, 0.66, 1.0, 0.33);
    s->addText(h4, ofColor(0), "googleresearch.blogspot.com/2015/06/inceptionism-going-deeper-into-neural.html]", 0.04, 0.0, 1.0);
    
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
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_feedback/theFrame7.mov", true, 0.5, 0.5, 0.5, 0.5);
    
    slideshow.addSlide("Make it stop")->addImage("cappucinno", "/Users/gene/bin/deepdream/cappucinno/composite_cappucinno2a.png", 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Style Transfer");
    s->addImage("Mona Lisa -> Cubist/Expressionist/Impressionist", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_cubist_expressionist_impressionist.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("A neural algorithm of artistic style");
    s->addScrollableImage("arxiv style paper", "/Users/gene/bin/style-transfer/00_paper/arxiv_page.png", 0.0, 0.3, 0.45, 0.7);
    s->addScrollableImage("gatys et al", "/Users/gene/bin/style-transfer/00_paper/figure1.png", 0.5, 0.0, 0.5, 1.0);
    s->addText(h4, ofColor(0), "Gatys, Ecker, Bethge", 0.01, 0.04, 0.48);
    s->addText(h4, ofColor(0), "published Aug 26, 2015", 0.01, 0.12, 0.48);
    s->addText(h4, ofColor(0), "[arxiv.org/abs/1508.06576]", 0.01, 0.2, 0.48);
    
    //    s = slideshow.addSlide("Stylenet theory");
    //    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/Stylenet_theory.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Stylenet theory");
    //    s->addImage("st theory", "/Users/gene/bin/style-transfer/11_demo/theory_ml_starrynight_0.png", 0, 0, 1, 1);
    //    s->addBreakpoint();
    s->addImage("st theory", "/Users/gene/bin/style-transfer/11_demo/theory_ml_starrynight_1.png", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("st theory", "/Users/gene/bin/style-transfer/11_demo/theory_ml_starrynight_2.png", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("st theory", "/Users/gene/bin/style-transfer/11_demo/theory_ml_starrynight_3.png", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("st theory", "/Users/gene/bin/style-transfer/11_demo/theory_ml_starrynight_4.png", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("st theory", "/Users/gene/bin/style-transfer/11_demo/theory_ml_starrynight_5.png", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("st theory", "/Users/gene/bin/style-transfer/11_demo/theory_ml_starrynight_6.png", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("st theory", "/Users/gene/bin/style-transfer/11_demo/theory_ml_starrynight_7.png", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("st theory", "/Users/gene/bin/style-transfer/11_demo/theory_ml_starrynight_8.png", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("st theory", "/Users/gene/bin/style-transfer/11_demo/theory_ml_starrynight_9.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Stylenet convergence");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/monalisa.jpg", 0.0, 0.0, 0.5, 0.59);
    s->addImage("Starry night", "/Users/gene/bin/_bin/style-transfer/_inputs/starrynight.jpg", 0.0, 0.6, 0.5, 0.4);
    s->addMovie("ML starry night", "/Users/gene/bin/style-transfer/11_demo/ml_starrynight_iterations.mp4", true, 0.5, 0.02, 0.5, 0.96);
    
    
    s = slideshow.addSlide("Mona Lisa x Devajyoti Ray");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/devajyoti.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_devajyoti.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Hokusai");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/hokusai.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_hokusai.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Tarsila");
    s->addImage("Mona Lisa", "/Users/gene/bin/_bin/style-transfer/_inputs/tarsilo2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_tarsila.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Roy Liechtenstein");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/liechtenstein.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_liechtenstein.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Wu Guangzhou");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/wu2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_wu2.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Nii Hylton");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/hylton.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_hylton.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Wassily Kandinsky");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/kandinsky2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_kandinsky2.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Sol Lewitt");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/sol1.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_sol1.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Aurora Borealis");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/aurora.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_aurora.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Arabic Calligraphy (1)");
    s->addImage("Mona Lisa", "/Users/gene/bin/_bin/style-transfer/_inputs/caligraphy.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_calligraphy1.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Arabic Calligraphy (2)");
    s->addImage("Mona Lisa", "/Users/gene/bin/_bin/style-transfer/_inputs/caligraphy2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_calligraphy2.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Crab Nebula");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/crab.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_crab.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Egyptian Hieroglyphs (1)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/egypt.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_egypt.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Egyptian Hieroglyphs (2)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/egypt2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_egypt2.jpg", 0.6, 0.0, 0.4, 1.0);
    
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
    
    s = slideshow.addSlide("Mona Lisa x Rosetta Stone (1)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/rosetta1.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_rosetta1_cw12_1000.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x TV Broadcast Signal Intrusion");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/tvnoise.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_tvnoise.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Just style (google maps)");
    s->addImage("deep-texture", "/Users/gene/bin/_bin/style-transfer/_inputs/maps.jpg", 0, 0, 0.6, 0.6);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/maps1.jpg", 0.4, 0.4, 0.6, 0.6);
    
    s = slideshow.addSlide("Just style (google maps)");
    s->addImage("deep-texture", "/Users/gene/bin/_bin/style-transfer/_inputs/maps.jpg", 0, 0, 0.6, 0.6);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/maps2.jpg", 0.4, 0.4, 0.6, 0.6);
    
    s = slideshow.addSlide("Mr. Div x Gustav Klimt");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("Mr. Div x Gustav Klimt", "/Users/gene/bin/style-transfer/05_interpolations/klimt-discoball/klimt-discoball.mp4", true, 0, 0, 1, 1);
    
    //    s = slideshow.addSlide("Picasso x Picasso");
    //    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    //    s->addMovie("Picasso periods", "/Users/gene/bin/style-transfer/05_interpolations/picasso-periods/picasso-periods.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Why is a Raven like a Writing Desk?");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("AliceNet", "/Users/gene/bin/style-transfer/04_alice/Alice-Stylenet.mov", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Video style with optical flow loss term (Ruder et al, 2016)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("video style", "/Users/gene/bin/style-transfer/10_optical_flow/video-style-transfer-x4-reordered.mp4", true, 0, 0, 1, 1);
    
    //    s = slideshow.addSlide("Generative models");
    //    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder.png", 0, 0.0, 0.4, 0.5);
    //    s->addImage("DCGAN", "/Users/gene/bin/misc/stock/lsun_bedrooms_five_epochs_interps.png", 0.4, 0.0, 0.62, 1);
    //    s->addText(h4, ofColor(0), "world's most expensive identity function", 0.025, 0.4, 0.3);
    //    s->addText(h4, ofColor(0), "Deep convolutional generative adversarial networks", 0.1, 0.75, 0.3);
    //    s->addText(h4, ofColor(0), "Radford, Metz, Chintala [arxiv.org/abs/1511.06434]", 0.1, 0.85, 0.3);
    //
    //    s = slideshow.addSlide("Autoencoder");
    //    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder_net.png", 0, 0, 1, 1);
    //
    //    s = slideshow.addSlide("Arithmetic on generated faces");
    //    s->addImage("smiling arithmetic", "/Users/gene/bin/misc/stock/faces_arithmetic_collage1.png", 0, 0, 1, 1);
    //
    //    s = slideshow.addSlide("Putting on sunglasses");
    //    s->addImage("sunglasses", "/Users/gene/bin/misc/stock/faces_arithmetic_collage2.png", 0, 0, 1, 1);
    //
    //    s = slideshow.addSlide("Interpolating the z-space (Alec Radford)");
    //    s->addMovie("mymov2", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0, 1, 1);
    //
    //    s = slideshow.addSlide("Generating numbers");
    //    s->addImage("MNIST (real)", "/Users/gene/bin/misc/stock/mnist_real.png", 1./3, 0.05, 2./3, 0.45);
    //    s->addImage("MNIST (DCGAN)", "/Users/gene/bin/misc/stock/mnist_cond_conv_gan_samples.png", 1./3, 0.55, 2./3, 0.45);
    //    s->addText(h2, ofColor(0), "MNIST (real)", 0.14, 0.32, 1./3);
    //    s->addText(h2, ofColor(0), "MNIST (DCGAN)", 0.14, 0.64, 1./3);
    //
    //    s = slideshow.addSlide("\"Interpolating\" numbers");
    //    s->addMovie("MNIST interpolations", "/Users/gene/bin/dcgan/summary/digits.mov", true, 0.25, 0.2, 0.5, 0.5);
    //
    //    s = slideshow.addSlide("A Book from the Sky");
    //    s->addMovie("zloops", "/Users/gene/bin/dcgan/summary/zloops.mp4", true, 0, 0, 1, 1);
    //
    //    s = slideshow.addSlide("Character interpolations");
    //    s->addMovie("interplations", "/Users/gene/bin/dcgan/public/interpolations_3.mp4", true, 0.2, 0.15, 0.6, 0.6);
    //
    //    s = slideshow.addSlide("Radical interpolations");
    //    s->addText(h3, ofColor(0), "interpolations across characters sharing the same radical often appear to preserve it", 0.1, 0.0, 0.8);
    //    s->addMovie("radical interpolations", "/Users/gene/bin/dcgan/summary/radinterpolation.mp4", true, 0, 0.2, 1, 0.8);
    
    s = slideshow.addSlide("Recurrent Neural Networks");
    s->addText(h3, ofColor(0), "Feedforward neural net", 0.1, 0.0, 0.4);
    s->addText(h3, ofColor(0), "Recurrent neural net", 0.65, 0.0, 0.4);
    s->addImage("nn_simple", "/Users/gene/bin/misc/stock/rnn/nn_simple.png", 0.0, 0.1, 0.3333, 0.8);
    s->addImage("rnn_simple", "/Users/gene/bin/misc/stock/rnn/rnn_simple.png", 0.5, 0.1, 0.5, 0.8);
    s->addBreakpoint();
    s->addImage("rnn_complex", "/Users/gene/bin/misc/stock/rnn/rnn_complex.png", 0.5, 0.1, 0.5, 0.8);
    
    s = slideshow.addSlide("RNN sequence");
    s->addText(h3, ofColor(0), "Property: not commutative,\nso we can train it on sequenced {x,y}", 0.7, 0.2, 0.3);
    s->addImage("rnn_1", "/Users/gene/bin/misc/stock/rnn/rnn_stacked_1.png", 0.05, 0.1, 0.6, 0.8);
    s->addBreakpoint();
    s->addImage("rnn_2", "/Users/gene/bin/misc/stock/rnn/rnn_stacked_2.png", 0.05, 0.1, 0.6, 0.8);
    s->addBreakpoint();
    s->addImage("rnn_3", "/Users/gene/bin/misc/stock/rnn/rnn_stacked_3.png", 0.05, 0.1, 0.6, 0.8);
    s->addBreakpoint();
    s->addImage("rnn_4", "/Users/gene/bin/misc/stock/rnn/rnn_stacked_4.png", 0.05, 0.1, 0.6, 0.8);
    
    s = slideshow.addSlide("Sequences of text");
    s->addImage("helloworld", "/Users/gene/bin/misc/stock/rnn/rnn_stacked_helloworld.png", 0, 0.2, 1, 0.8);
    s->addText(h3, ofColor(0), "Training on 'hello world'", 0.1, 0.05, 0.9);
    s->addText(h3, ofColor(0), "Can sample text from the RNN!", 0.1, 0.15, 0.9);
    
    s = slideshow.addSlide("Shakespeare LSTM (Andrej Karpathy)");
    s->addImage("math lstm", "/Users/gene/bin/misc/stock/rnn/lstm_shakespeare.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://karpathy.github.io/2015/05/21/rnn-effectiveness/", 0.01, 0.01, 0.99);
    s = slideshow.addSlide("XML LSTM (Andrej Karpathy)");
    s->addImage("xml lstm", "/Users/gene/bin/misc/stock/rnn/lstm_xml.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://karpathy.github.io/2015/05/21/rnn-effectiveness/", 0.01, 0.01, 0.99);
    s = slideshow.addSlide("Linux LSTM (Andrej Karpathy)");
    s->addImage("linux lstm", "/Users/gene/bin/misc/stock/rnn/lstm_linux.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://karpathy.github.io/2015/05/21/rnn-effectiveness/", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("LaTeX LSTM (Justin Johnson)");
    s->addImage("math lstm", "/Users/gene/bin/misc/stock/rnn/LaTeX-LSTM1.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://karpathy.github.io/2015/05/21/rnn-effectiveness/", 0.01, 0.01, 0.99);
    s = slideshow.addSlide("LaTeX LSTM (Justin Johnson)");
    s->addImage("math lstm", "/Users/gene/bin/misc/stock/rnn/LaTeX-LSTM2.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://karpathy.github.io/2015/05/21/rnn-effectiveness/", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("Recipes (Tom Brewe)");
    s->addImage("recipes_lstm", "/Users/gene/bin/misc/stock/rnn/lstm_recipes.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "https://gist.github.com/nylki/1efbaa36635956d35bcc", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("Deep Drumpf");
    s->addImage("helloworld", "/Users/gene/bin/misc/stock/rnn/deepdrumpf.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Deep Drumpf");
    s->addImage("helloworld", "/Users/gene/bin/misc/stock/rnn/deepdrumpf_t0.png", 0.2, 0.1, 0.6, 0.8);
    s = slideshow.addSlide("Deep Drumpf");
    s->addImage("helloworld", "/Users/gene/bin/misc/stock/rnn/deepdrumpf_t1.png", 0.2, 0.1, 0.6, 0.8);
    
    s = slideshow.addSlide("Mario levels RNN (Adam Geitgey)");
    s->addMovie("Mario RNN", "/Users/gene/bin/misc/stock/rnn/mario_rnn.mp4", true, 0.1, 0.1, 0.8, 0.8);
    s->addText(h4, ofColor(0), "https://medium.com/@ageitgey/machine-learning-is-fun-part-2-a26a10b68df3#.g94ivdoej", 0.01, 0.03, 0.99);
    
    s = slideshow.addSlide("Dense captioning (Li, Karpathy, Johnson)");
    s->addImage("densecap", "/Users/gene/bin/misc/stock/rnn/densecap.png", 0, 0.06, 1, 0.94);
    s->addText(h4, ofColor(0), "http://cs.stanford.edu/people/karpathy/densecap/", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("Dense captioning Atlas, The Next Generation");
    s->addMovie("Attention", "/Users/gene/bin/densecap/atlas.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Dense captioning Deepdream");
    s->addMovie("Attention", "/Users/gene/bin/densecap/deepdream.mp4", true, 0, 0, 1, 1);
    
    CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
    s = slideshow.addSlide("Cubist Mirror");
    s->addAction(cmd);
    
    s = slideshow.addSlide("alt-AI");
    s->addMovie("alt-AI", "/Users/gene/bin/alt-ai/lisa-oculus-convnet.mp4", true, 0, 0, 0.5, 0.5);
    s->addMovie("alt-AI", "/Users/gene/bin/alt-ai/D90A8726.mp4", true, 0.5, 0, 0.5, 0.5);
    s->addMovie("alt-AI", "/Users/gene/bin/alt-ai/D90A8627.mp4", true, 0, 0.5, 0.5, 0.5);
    s->addMovie("alt-AI", "/Users/gene/bin/alt-ai/cubistmirror_v1.mp4", true, 0.5, 0.5, 0.5, 0.5);
    
    s = slideshow.addSlide("ml4a");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.2, 0.2, 0.6, 0.6);
    
    s = slideshow.addSlide("Machine Learning for Artists @ ITP-NYU, Spring 2016");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    //    s->addMovie("ml4a @ itp 1", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/01.mp4", true, -0.014, 0, 1.02/3.0, 0.5);//->setPositionRandom();
    //    s->addMovie("ml4a @ itp 2", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/02.mp4", true, 0.33, 0, 1.02/3.0, 0.5);//->setPositionRandom();
    //    s->addMovie("ml4a @ itp 3", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/03.mp4", true, 0.674, 0, 1.02/3.0, 0.5);//->setPositionRandom();
    //    s->addMovie("ml4a @ itp 4", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/04.mp4", true,  -0.014, 0.5, 1.02/3.0, 0.5);//->setPositionRandom();
    //    s->addMovie("ml4a @ itp 5", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/05.mp4", true,  0.33, 0.5, 1.02/3.0, 0.5);//->setPositionRandom();
    //    s->addMovie("ml4a @ itp 6", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/06.mp4", true,  0.674, 0.5, 1.02/3.0, 0.5);//->setPositionRandom();
    s->addMovie("ml4a @ itp 1", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/01.mp4", true, 0, 0.01, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addMovie("ml4a @ itp 2", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/02.mp4", true, 1.01 / 3.0, 0.01, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addMovie("ml4a @ itp 3", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/03.mp4", true, 2.02 / 3.0, 0.01, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addMovie("ml4a @ itp 4", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/04.mp4", true, 0, 0.51, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addMovie("ml4a @ itp 5", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/05.mp4", true, 1.01 / 3.0, 0.51, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addMovie("ml4a @ itp 6", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/06.mp4", true, 2.02 / 3.0, 0.51, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addText(h4, ofColor(255), "3.24 introduction, neural networks", 0.0, 0.0, 1.0/3.0);
    s->addText(h4, ofColor(255), "3.31 wekinator + applications", 1.01/3.0, 0.0, 1.0/3.0);
    s->addText(h4, ofColor(255), "4.7 convolutional neural networks", 2.02/3.0, 0.0, 1.0/3.0);
    s->addText(h4, ofColor(255), "4.14 convnet applications", 0.0, 0.5, 1.0/3.0);
    s->addText(h4, ofColor(255), "4.21 recurrent neural networks", 1.01/3.0, 0.5, 1.0/3.0);
    s->addText(h4, ofColor(255), "4.28 game AI, reinforcement learning", 2.02/3.0, 0.5, 1.0/3.0);
    s->loadAssets();
    
    s = slideshow.addSlide("The Neural Aesthetic");
    s->addText(h2, ofColor(0), "@SchoolOfMaaa", 0.1, 0.1, 0.8);
    s->addText(h2, ofColor(0), "Final exhibition July 28 at ACUD", 0.1, 0.2, 0.8);
}




void ofApp::WithTheBest() {
    
    
    
    // Convnets in 5 min
    //  - demo
    // Understanding content
    //  - similarity demo
    //  - t-SNE
    // Modifying images
    //  - deepdream
    //  - stylenet
    // Generative Models
    //  - autoencoders
    //  - DCGANs
    //  - DGNs
    //  - wavenets + youtube
    // RNNs
    //  - LSTMs producing text
    //  - densecap
    // Cubist mirror / kandinsky mirror
    // ml4a (classes + guides)
    // alt-AI
    
    
    
    
    s = slideshow.addSlide("The Neural Aesthetic");
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
    s->start();
    
    s = slideshow.addSlide("about me");
    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
    s->addMovie("KPT", "/Users/gene/Desktop/colin-ribbons-2.mp4", true, 0.0, 0.45, 0.4, 0.55);
    
    s = slideshow.addSlide("Convolutional neural networks in 5 min (brainbow by Katie Matho)");
    s->addImage("neural net", "/Users/gene/bin/misc/stock/brainbow.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Perceptrons");
    s->addImage("perceptrons top", "/Users/gene/bin/misc/stock/nytimes_perceptron_top.png", 0.0, 0.0, 1, 0.24);
    s->addImage("perceptrons", "/Users/gene/bin/misc/stock/nytimes_perceptron.png", 0.0, 0.24, 1, 0.76);
    
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
    
    s = slideshow.addSlide("Training our neural network");
    s->addMovie("mnist", "/Users/gene/bin/misc/stock/mnist_weights_demo.mp4", true, 0, 0, 1, 1)->setLoop(false);
    
    s = slideshow.addSlide("Convnet demo");
    CcvForwardPassDemo *ccvd = new CcvForwardPassDemo(s, "ccv", 0, 0, 1, 1);
    s->addAction(ccvd);
    
    s = slideshow.addSlide("Reverse image search");
    ReverseImageSearchDemo *risd = new ReverseImageSearchDemo(s, "rims", 0, 0, 1, 1);
    s->addAction(risd);
    s->start();
    
    s = slideshow.addSlide("t-SNE colors converging in 2d");
    s->addMovie("t-SNE convergence", "/Users/gene/Downloads/imgs/tsne_manual.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("t-SNE (Laurens van der Maaten + Geoff Hinton]");
    s->addImage("t-sne", "/Users/gene/bin/misc/stock/tsne.png", 0.0, 0.1, 1.0, 0.9);
    s->addText(h3, ofColor(0), "[http://www.cs.toronto.edu/~hinton/absps/tsne.pdf]", 0.2, 0.0, 0.8);
    
    s = slideshow.addSlide("convnet -> t-SNE");
    s->addScrollableImage("animal t-sne", "/Users/gene/bin/tsne/tsne-animals.png", 0.0, 0.0, 1.0, 1.0);
    
    s = slideshow.addSlide("www.genekogan.com/works/wiki-tSNE");
    s->addScrollableImage("wiki t-SNE", "/Users/gene/bin/tsne/wiki-tSNE.png", 0.0, 0.09, 1.0, 0.9);
    
    s = slideshow.addSlide("Audio t-SNE");
    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0, 0, 1, 1);
    s->addAction(attd);
    
    slideshow.addSlide("t-SNE :: CalTech-256 animals")->addScrollableImage("t-SNE animals", "/Users/gene/bin/tsne/grid_animals2.png", 0, 0, 1, 1);
    slideshow.addSlide("t-SNE :: Ikea catalog (by Golan Levin + Aman Tiwari)")->addScrollableImage("t-SNE ikea", "/Users/gene/bin/tsne/contributions/ikea_golan_aman.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Visualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]");
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l2.png", 0.0, 0.0, 0.5, 1);
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l3.png", 0.5, 0.0, 0.5, 1);
    s->addText(h3, ofColor(0), "Image patches which respond most to filters", 0.2, 0.0, 1.0);
    
    s = slideshow.addSlide("Class visualization");
    s->addImage("Deepdream classvis", "/Users/gene/bin/deepdream/paper/classvis.png", 0.0, 0.05, 1, 0.42);
    s->addImage("classvis", "/Users/gene/bin/misc/stock/class-synthesis-deepgen.png", 0.0, 0.5, 1, 0.5);
    s->addText(h4, ofColor(0), "Going deeper with Inceptionism (Mordvintsev, Olah, Tyka)", 0.2, 0.0, 1.0);
    //    s->addText(h4, ofColor(0), "googleresearch.blogspot.com/2015/06/inceptionism-going-deeper-into-neural.html]", 0.2, 0.1, 1.0);
    s->addText(h4, ofColor(0), "Nguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.15, 0.48, 1.0);
    
    s = slideshow.addSlide("Deepdream (2015, Mordvintsev, Tyka, Olah)");
    s->addImage("Ibis", "/Users/gene/bin/deepdream/paper/ibis.png", 0.0, 0.0, 1.0, 0.65);
    s->addImage("Deepdream prototypes", "/Users/gene/bin/deepdream/paper/Funny-Animals.png", 0.0, 0.66, 1.0, 0.33);
    s->addText(h4, ofColor(0), "googleresearch.blogspot.com/2015/06/inceptionism-going-deeper-into-neural.html]", 0.04, 0.0, 1.0);
    
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
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_feedback/theFrame7.mov", true, 0.5, 0.5, 0.5, 0.5);
    
    slideshow.addSlide("Make it stop")->addImage("cappucinno", "/Users/gene/bin/deepdream/cappucinno/composite_cappucinno2a.png", 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Style Transfer");
    s->addImage("Mona Lisa -> Cubist/Expressionist/Impressionist", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_cubist_expressionist_impressionist.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("A neural algorithm of artistic style");
    s->addScrollableImage("arxiv style paper", "/Users/gene/bin/style-transfer/00_paper/arxiv_page.png", 0.0, 0.3, 0.45, 0.7);
    s->addScrollableImage("gatys et al", "/Users/gene/bin/style-transfer/00_paper/figure1.png", 0.5, 0.0, 0.5, 1.0);
    s->addText(h4, ofColor(0), "Gatys, Ecker, Bethge", 0.01, 0.04, 0.48);
    s->addText(h4, ofColor(0), "published Aug 26, 2015", 0.01, 0.12, 0.48);
    s->addText(h4, ofColor(0), "[arxiv.org/abs/1508.06576]", 0.01, 0.2, 0.48);
    
    s = slideshow.addSlide("Stylenet theory");
    s->addImage("st theory", "/Users/gene/bin/style-transfer/11_demo/theory_ml_starrynight_1.png", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("st theory", "/Users/gene/bin/style-transfer/11_demo/theory_ml_starrynight_2.png", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("st theory", "/Users/gene/bin/style-transfer/11_demo/theory_ml_starrynight_3.png", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("st theory", "/Users/gene/bin/style-transfer/11_demo/theory_ml_starrynight_4.png", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("st theory", "/Users/gene/bin/style-transfer/11_demo/theory_ml_starrynight_5.png", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("st theory", "/Users/gene/bin/style-transfer/11_demo/theory_ml_starrynight_6.png", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("st theory", "/Users/gene/bin/style-transfer/11_demo/theory_ml_starrynight_7.png", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("st theory", "/Users/gene/bin/style-transfer/11_demo/theory_ml_starrynight_8.png", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("st theory", "/Users/gene/bin/style-transfer/11_demo/theory_ml_starrynight_9.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Stylenet convergence");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/monalisa.jpg", 0.0, 0.0, 0.5, 0.59);
    s->addImage("Starry night", "/Users/gene/bin/_bin/style-transfer/_inputs/starrynight.jpg", 0.0, 0.6, 0.5, 0.4);
    s->addMovie("ML starry night", "/Users/gene/bin/style-transfer/11_demo/ml_starrynight_iterations.mp4", true, 0.5, 0.02, 0.5, 0.96);
    
    s = slideshow.addSlide("Mona Lisa x Devajyoti Ray");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/devajyoti.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_devajyoti.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Hokusai");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/hokusai.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_hokusai.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Tarsila");
    s->addImage("Mona Lisa", "/Users/gene/bin/_bin/style-transfer/_inputs/tarsilo2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_tarsila.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Roy Liechtenstein");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/liechtenstein.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_liechtenstein.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Wu Guangzhou");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/wu2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_wu2.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Nii Hylton");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/hylton.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_hylton.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Wassily Kandinsky");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/kandinsky2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_kandinsky2.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Sol Lewitt");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/sol1.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_sol1.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Aurora Borealis");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/aurora.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_aurora.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Arabic Calligraphy (1)");
    s->addImage("Mona Lisa", "/Users/gene/bin/_bin/style-transfer/_inputs/caligraphy.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_calligraphy1.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Arabic Calligraphy (2)");
    s->addImage("Mona Lisa", "/Users/gene/bin/_bin/style-transfer/_inputs/caligraphy2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_calligraphy2.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Crab Nebula");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/crab.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_crab.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Egyptian Hieroglyphs (1)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/egypt.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_egypt.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Egyptian Hieroglyphs (2)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/egypt2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_egypt2.jpg", 0.6, 0.0, 0.4, 1.0);
    
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
    
    s = slideshow.addSlide("Mona Lisa x Rosetta Stone (1)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/rosetta1.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_rosetta1_cw12_1000.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x TV Broadcast Signal Intrusion");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/tvnoise.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_tvnoise.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Just style (google maps)");
    s->addImage("deep-texture", "/Users/gene/bin/_bin/style-transfer/_inputs/maps.jpg", 0, 0, 0.6, 0.6);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/maps1.jpg", 0.4, 0.4, 0.6, 0.6);
    
    s = slideshow.addSlide("Just style (google maps)");
    s->addImage("deep-texture", "/Users/gene/bin/_bin/style-transfer/_inputs/maps.jpg", 0, 0, 0.6, 0.6);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/maps2.jpg", 0.4, 0.4, 0.6, 0.6);
    
    s = slideshow.addSlide("Mr. Div x Gustav Klimt");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("Mr. Div x Gustav Klimt", "/Users/gene/bin/style-transfer/05_interpolations/klimt-discoball/klimt-discoball.mp4", true, 0, 0, 1, 1);
    
    //    s = slideshow.addSlide("Picasso x Picasso");
    //    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    //    s->addMovie("Picasso periods", "/Users/gene/bin/style-transfer/05_interpolations/picasso-periods/picasso-periods.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Why is a Raven like a Writing Desk?");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("AliceNet", "/Users/gene/bin/style-transfer/04_alice/Alice-Stylenet.mov", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Video style with optical flow loss term (Ruder et al, 2016)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("video style", "/Users/gene/bin/style-transfer/10_optical_flow/video-style-transfer-x4-reordered.mp4", true, 0, 0, 1, 1);
    
    
    
    ////////////////////////////////////////////////////////
    // GENERATIVE MODELS - autoencoders, DCGAN, DGN, wavenets
    //
    
    s = slideshow.addSlide("Generative models");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder.png", 0, 0.0, 0.4, 0.5);
    s->addImage("DCGAN", "/Users/gene/bin/misc/stock/lsun_bedrooms_five_epochs_interps.png", 0.4, 0.0, 0.62, 1);
    s->addText(h4, ofColor(0), "world's most expensive identity function", 0.025, 0.4, 0.3);
    s->addText(h4, ofColor(0), "Deep convolutional generative adversarial networks", 0.1, 0.75, 0.3);
    s->addText(h4, ofColor(0), "Radford, Metz, Chintala [arxiv.org/abs/1511.06434]", 0.1, 0.85, 0.3);
    
    s = slideshow.addSlide("Autoencoder");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder_net.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Arithmetic on generated faces");
    s->addImage("smiling arithmetic", "/Users/gene/bin/misc/stock/faces_arithmetic_collage1.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Putting on sunglasses");
    s->addImage("sunglasses", "/Users/gene/bin/misc/stock/faces_arithmetic_collage2.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Interpolating the z-space (Alec Radford)");
    s->addMovie("mymov2", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Generating numbers");
    s->addImage("MNIST (real)", "/Users/gene/bin/misc/stock/mnist_real.png", 1./3, 0.05, 2./3, 0.45);
    s->addImage("MNIST (DCGAN)", "/Users/gene/bin/misc/stock/mnist_cond_conv_gan_samples.png", 1./3, 0.55, 2./3, 0.45);
    s->addText(h2, ofColor(0), "MNIST (real)", 0.14, 0.32, 1./3);
    s->addText(h2, ofColor(0), "MNIST (DCGAN)", 0.14, 0.64, 1./3);
    
    s = slideshow.addSlide("\"Interpolating\" numbers");
    s->addMovie("MNIST interpolations", "/Users/gene/bin/dcgan/summary/digits.mov", true, 0.25, 0.2, 0.5, 0.5);
    
    s = slideshow.addSlide("A Book from the Sky");
    s->addMovie("zloops", "/Users/gene/bin/dcgan/summary/zloops.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Character interpolations");
    s->addMovie("interplations", "/Users/gene/bin/dcgan/public/interpolations_3.mp4", true, 0.2, 0.15, 0.6, 0.6);
    
    s = slideshow.addSlide("Radical interpolations");
    s->addText(h3, ofColor(0), "interpolations across characters sharing the same radical often appear to preserve it", 0.1, 0.0, 0.8);
    s->addMovie("radical interpolations", "/Users/gene/bin/dcgan/summary/radinterpolation.mp4", true, 0, 0.2, 1, 0.8);
    
    s = slideshow.addSlide("Deep Generator Networks");
    s->addImage("classvis", "/Users/gene/bin/misc/stock/class-synthesis-deepgen.png", 0.0, 0.2, 1, 0.8);
    s->addText(h4, ofColor(0), "Nguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.15, 0.1, 1.0);
    s->start();
    
    s = slideshow.addSlide("Deep Generator Networks");
    s->addScrollableImage("classvis", "/Users/gene/bin/synthesizing/synthesizing-caffenet-tSNE.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("DGN (Places365)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/new_classes.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("DGN (buttes)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/buttes.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("DGN (boathouses)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/boathouses.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("DGN (people as artifacts)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/people.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("DGN (discotheque)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/discotheque.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("DGN convergence");
    s->addMovie("cheeseburger", "/Users/gene/bin/synthesizing/cheeseburgernew.mov", true, 0.1, 0.1, 0.8, 0.8);
    
    // WAVENETS
    s = slideshow.addSlide("Wavenets");
    // GRUV
    
    
    s = slideshow.addSlide("Recurrent Neural Networks");
    s->addText(h3, ofColor(0), "Feedforward neural net", 0.1, 0.0, 0.4);
    s->addText(h3, ofColor(0), "Recurrent neural net", 0.65, 0.0, 0.4);
    s->addImage("nn_simple", "/Users/gene/bin/misc/stock/rnn/nn_simple.png", 0.0, 0.1, 0.3333, 0.8);
    s->addImage("rnn_simple", "/Users/gene/bin/misc/stock/rnn/rnn_simple.png", 0.5, 0.1, 0.5, 0.8);
    s->addBreakpoint();
    s->addImage("rnn_complex", "/Users/gene/bin/misc/stock/rnn/rnn_complex.png", 0.5, 0.1, 0.5, 0.8);
    
    s = slideshow.addSlide("RNN sequence");
    s->addText(h3, ofColor(0), "Property: not commutative,\nso we can train it on sequenced {x,y}", 0.7, 0.2, 0.3);
    s->addImage("rnn_1", "/Users/gene/bin/misc/stock/rnn/rnn_stacked_1.png", 0.05, 0.1, 0.6, 0.8);
    s->addBreakpoint();
    s->addImage("rnn_2", "/Users/gene/bin/misc/stock/rnn/rnn_stacked_2.png", 0.05, 0.1, 0.6, 0.8);
    s->addBreakpoint();
    s->addImage("rnn_3", "/Users/gene/bin/misc/stock/rnn/rnn_stacked_3.png", 0.05, 0.1, 0.6, 0.8);
    s->addBreakpoint();
    s->addImage("rnn_4", "/Users/gene/bin/misc/stock/rnn/rnn_stacked_4.png", 0.05, 0.1, 0.6, 0.8);
    
    s = slideshow.addSlide("Shakespeare LSTM (Andrej Karpathy)");
    s->addImage("math lstm", "/Users/gene/bin/misc/stock/rnn/lstm_shakespeare.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://karpathy.github.io/2015/05/21/rnn-effectiveness/", 0.01, 0.01, 0.99);
    s = slideshow.addSlide("XML LSTM (Andrej Karpathy)");
    s->addImage("xml lstm", "/Users/gene/bin/misc/stock/rnn/lstm_xml.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://karpathy.github.io/2015/05/21/rnn-effectiveness/", 0.01, 0.01, 0.99);
    s = slideshow.addSlide("Linux LSTM (Andrej Karpathy)");
    s->addImage("linux lstm", "/Users/gene/bin/misc/stock/rnn/lstm_linux.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://karpathy.github.io/2015/05/21/rnn-effectiveness/", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("LaTeX LSTM (Justin Johnson)");
    s->addImage("math lstm", "/Users/gene/bin/misc/stock/rnn/LaTeX-LSTM1.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://karpathy.github.io/2015/05/21/rnn-effectiveness/", 0.01, 0.01, 0.99);
    s = slideshow.addSlide("LaTeX LSTM (Justin Johnson)");
    s->addImage("math lstm", "/Users/gene/bin/misc/stock/rnn/LaTeX-LSTM2.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://karpathy.github.io/2015/05/21/rnn-effectiveness/", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("Deep Drumpf");
    s->addImage("helloworld", "/Users/gene/bin/misc/stock/rnn/deepdrumpf.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Deep Drumpf");
    s->addImage("helloworld", "/Users/gene/bin/misc/stock/rnn/deepdrumpf_t0.png", 0.2, 0.1, 0.6, 0.8);
    s = slideshow.addSlide("Deep Drumpf");
    s->addImage("helloworld", "/Users/gene/bin/misc/stock/rnn/deepdrumpf_t1.png", 0.2, 0.1, 0.6, 0.8);
    
    s = slideshow.addSlide("Mario levels RNN (Adam Geitgey)");
    s->addMovie("Mario RNN", "/Users/gene/bin/misc/stock/rnn/mario_rnn.mp4", true, 0.1, 0.1, 0.8, 0.8);
    s->addText(h4, ofColor(0), "https://medium.com/@ageitgey/machine-learning-is-fun-part-2-a26a10b68df3#.g94ivdoej", 0.01, 0.03, 0.99);
    
    s = slideshow.addSlide("Dense captioning (Li, Karpathy, Johnson)");
    s->addImage("densecap", "/Users/gene/bin/misc/stock/rnn/densecap.png", 0, 0.06, 1, 0.94);
    s->addText(h4, ofColor(0), "http://cs.stanford.edu/people/karpathy/densecap/", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("Dense captioning Atlas, The Next Generation");
    s->addMovie("Attention", "/Users/gene/bin/densecap/atlas.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Dense captioning Deepdream");
    s->addMovie("Attention", "/Users/gene/bin/densecap/deepdream.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Future directions");
    s->addText(h2, ofColor(0), "What happens when these models can be deployed in real-time?", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("Create mappings between sensors and synthesis parameters");
    s->addImage("kinect", "/Users/gene/bin/misc/stock/kinect-skeleton.png", 0, 0, 0.3333, 0.3333);
    s->addImage("leap", "/Users/gene/bin/misc/stock/leap-hands.jpg", 0, 0.33333, 0.3333, 0.33333);
    //    s->addImage("face", "/Users/gene/bin/misc/stock/face-osc.png", 0, 0.66666, 0.3333, 0.33333);
    s->addMovie("faceosc + ableton", "/Users/gene/Desktop/faceosc_ableton.mp4", true, 0, 0.66666, 0.3333, 0.33333);
    s->addImage("arrow", "/Users/gene/bin/misc/stock/arrow.png", 0.4, 0.4, 0.2, 0.3);
    s->addImage("leap", "/Users/gene/bin/misc/stock/ableton-params.png", 0.66666, 0.0, 0.3333, 0.5);
    s->addImage("leap", "/Users/gene/bin/images/vjing/vj_160.jpg", 0.66666, 0.5, 0.3333, 0.5);
    
    CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
    s = slideshow.addSlide("Cubist Mirror");
    s->addAction(cmd);
    
    s = slideshow.addSlide("Machine Learning for Artists @ ITP-NYU, Spring 2016");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("ml4a @ itp 1", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/01.mp4", true, 0, 0.01, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addMovie("ml4a @ itp 2", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/02.mp4", true, 1.01 / 3.0, 0.01, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addMovie("ml4a @ itp 3", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/03.mp4", true, 2.02 / 3.0, 0.01, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addMovie("ml4a @ itp 4", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/04.mp4", true, 0, 0.51, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addMovie("ml4a @ itp 5", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/05.mp4", true, 1.01 / 3.0, 0.51, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addMovie("ml4a @ itp 6", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/06.mp4", true, 2.02 / 3.0, 0.51, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addText(h4, ofColor(255), "3.24 introduction, neural networks", 0.0, 0.0, 1.0/3.0);
    s->addText(h4, ofColor(255), "3.31 wekinator + applications", 1.01/3.0, 0.0, 1.0/3.0);
    s->addText(h4, ofColor(255), "4.7 convolutional neural networks", 2.02/3.0, 0.0, 1.0/3.0);
    s->addText(h4, ofColor(255), "4.14 convnet applications", 0.0, 0.5, 1.0/3.0);
    s->addText(h4, ofColor(255), "4.21 recurrent neural networks", 1.01/3.0, 0.5, 1.0/3.0);
    s->addText(h4, ofColor(255), "4.28 game AI, reinforcement learning", 2.02/3.0, 0.5, 1.0/3.0);
    s->loadAssets();
    
    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.2, 0.2, 0.6, 0.6);
    
    s = slideshow.addSlide("alt-AI");
    s->addMovie("alt-AI", "/Users/gene/bin/alt-ai/lisa-oculus-convnet.mp4", true, 0, 0, 0.5, 0.5);
    s->addMovie("alt-AI", "/Users/gene/bin/alt-ai/D90A8726.mp4", true, 0.5, 0, 0.5, 0.5);
    s->addMovie("alt-AI", "/Users/gene/bin/alt-ai/D90A8627.mp4", true, 0, 0.5, 0.5, 0.5);
    s->addMovie("alt-AI", "/Users/gene/bin/alt-ai/cubistmirror_v1.mp4", true, 0.5, 0.5, 0.5, 0.5);
    
    s = slideshow.addSlide("The Neural Aesthetic");
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
    
    
}



void ofApp::Retune() {
    
    /*
     end with games + RL -> last line = "i will do my best to play a beautiful interesting game"
     wavenets? (deeptex notes)
     the unicorn cluster
     */
    
    
    // Glass Bead Game + AlphaGo
    // Convnets
    //  - demo + class visualization
    //  - t-SNE + similarity demo
    // Machines dream
    //  - DGNs
    //  - deepdream + stylenet
    //  - wavenets + GRUV
    // Adversarial Nets
    //  - wavenets + closed-captioning
    //  - densecap
    // Coda
    //  - tue=mon+wed/2
    //  - cubist mirror
    // ml4a
    //  - ml4a (classes + guides)
    //  - alt-AI
    //  - i will do my best to play beautiful & interesting
    //===========================================================
    // Unsorted
    //  - DCGANs + a book from the sky + gen models
    // RNNs
    //  - LSTMs producing text
    //  - densecap
    //
    
    
    
    s = slideshow.addSlide("");
    s->addText(h3, ofColor(0,0,20), "Es konnte ein Spiel zum Beispiel ausgehen von einer gegebenen astronomischen Konfiguration, oder vom Thema einer Bachfuge, oder von einem Satz des Leibniz oder der Upanishaden, und es konnte von diesem Thema aus, je nach Absicht und Begabung des Spielers, die wachgerufene Leitidee entweder weiterführen und ausbauen oder auch durch Anklänge an »erwandte Vorstellungen ihren Ausdruck bereichern.... Es bedeutete eine erlesene, symbolhafte Form des Suchens nach dem Vollkommenen, eine sublime Alchimie, ein Sichannähern an den über allen Bildern und Vielheiten in sich einigen Geist, also an Gott.", 0.05, 0.05, 0.75);
    s->addText(h3, ofColor(150), "A Game, for example, might start from a given astronomical configuration, or from the actual theme of a Bach fugue, or from a sentence out of Leibniz or the Upanishads, and from this theme, depending on the intentions and talents of the player, it could either further explore and elaborate the initial motif or else enrich its expressiveness by allusions to kindred concepts... It represented an elite, symbolic form of seeking for perfection, a sublime alchemy, an approach to that Mind which beyond all images and multiplicities is one within itself -- in other words, to God.", 0.05, 0.52, 0.75);

    s = slideshow.addSlide("The Glass Bead Game");
    s->addImage("glass bead game", "/Users/gene/bin/misc/glassbead.jpg", 0.0, 0.0, 1, 1);

    
    s = slideshow.addSlide("Lee Se-dol vs. AlphaGo");
    s->addImage("go", "/Users/gene/bin/misc/stock/alphago-vs-leesedol.jpg", 0, 0.3, 0.8, 0.7);
    s->addImage("go", "/Users/gene/bin/misc/stock/leesedol.jpg", 0.5, 0.0, 0.5, 0.5);
    s->addText(h2, ofColor(0), "\"I will do my best to play a beautiful and interesting game\"", 0.05, 0.06, 0.44);
    
    s = slideshow.addSlide("\"I felt the board\" 이세돌");
    s->addImage("go", "/Users/gene/bin/misc/stock/Go.jpg", 0, 0, 1, 1);
    s->addRect(ofColor(255,160), 0.005, 0.04, 0.45, 0.26);
    s->addText(h3, ofColor(0), "tic-tac-toe boards: 765", 0.01, 0.05, 0.6);
    s->addText(h3, ofColor(0), "planck times since big bang: 10^62", 0.01, 0.1, 0.6);
    s->addText(h3, ofColor(0), "atoms in universe: 10^80", 0.01, 0.15, 0.6);
    s->addText(h3, ofColor(0), "chess boards: 10^120", 0.01, 0.2, 0.6);
    s->addText(h3, ofColor(0), "go boards: 10^170", 0.01, 0.25, 0.6);
    
    s = slideshow.addSlide("Policy network + Value network");
    s->addImage("gostates", "/Users/gene/bin/misc/stock/alphago-policy-network.jpg", 0, 0.05, 1, 0.8);
    s->addText(h4, ofColor(0), "policy network alone predicts next move 57% of the time!!", 0.2, 0.88, 0.8);
    
    s = slideshow.addSlide("Policy network training");
    s->addImage("gostates", "/Users/gene/bin/misc/stock/alphago-policynet-convnet.png", 0, 0.05, 0.9, 0.9);
    s->addText(h4, ofColor(0), "http://www.slideshare.net/ckmarkohchang/alphago-in-depth (Mark Chang)", 0.2, 0.0, 0.8);
    s->addText(h4, ofColor(0), "generalized techniques, no expert knowledge (AGI?)", 0.2, 0.92, 0.8);
    
    s = slideshow.addSlide("Value network training through self-play");
    s->addImage("gostates", "/Users/gene/bin/misc/stock/alphago-training.png", 0.1, 0.1, 0.8, 0.8);
    s->addText(h4, ofColor(0), "http://www.slideshare.net/ckmarkohchang/alphago-in-depth (Mark Chang)", 0.2, 0.0, 0.8);

    
    s = slideshow.addSlide("DeepBlue : evaluation function + MCTS");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/chess-fritz-analysis.jpg", 0, 0, 0.5, 1);
    s->addMovie("MCTS", "/Users/gene/bin/misc/stock/MCTS.mp4", true, 0.5, 0.0, 0.5, 1);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=pQS7HkfVgOU (J√©r√©mie Decock)", 0.01, 0.0, 0.9);
    s->addText(h4, ofColor(0), "http://chess.stackexchange.com/questions/518/are-there-consumer-level-game-play-analysis-systems-that-overlay-the-analysis-on", 0.01, 0.98, 0.9);


    /*
    s = slideshow.addSlide("Reinforcement learning + Atari games");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/reinforcement_learning.png", 0, 0.05, 1, 0.95);
    s->addText(h4, ofColor(0), "http://www.iclr.cc/lib/exe/fetch.php?media=iclr2015:silver-iclr2015.pdf", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Convnets playing Atari");
    s->addMovie("MCTS", "/Users/gene/bin/misc/stock/Deep Q network learning to play Pong-60pwnLB0DqY.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=60pwnLB0DqY", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Convnets to the rescue");
    s->addImage("joystick + convnet", "/Users/gene/bin/misc/stock/joystick_convnet.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://home.uchicago.edu/~arij/journalclub/papers/2015_Mnih_et_al.pdf", 0.1, 0.0, 0.9);
     */
    
    // creative machines
    s = slideshow.addSlide("Creativity");
    s->addText(h2, ofColor(0), "so can machines be creative?", 0.1, 0.2, 0.7);

    s = slideshow.addSlide("Can machines think?");
    s->addImage("cmt 1", "/Users/gene/bin/misc/turing_cmt_1.png", 0, 0, 1, 1);

    s = slideshow.addSlide("Can machines think?");
    s->addImage("cmt 1", "/Users/gene/bin/misc/turing_cmt_2.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Can machines think?");
    s->addText(h2, ofColor(0), "\"The question of whether a computer can think is no more interesting than the question of whether a submarine can swim.\" - Edsger Dijkstra", 0.1, 0.1, 0.7);

    
    s = slideshow.addSlide("Deep Generator Networks");
    s->addImage("classvis", "/Users/gene/bin/misc/stock/class-synthesis-deepgen.png", 0.0, 0.2, 1, 0.8);
    s->addText(h4, ofColor(0), "Nguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.15, 0.1, 1.0);
    s->start();
    
    s = slideshow.addSlide("DGN convergence");
    ofxPPMovie *mov = s->addMovie("cheeseburger", "/Users/gene/bin/synthesizing/cheeseburgernew.mov", true, 0.1, 0.1, 0.8, 0.8);
    mov->setLoop(false);

    s = slideshow.addSlide("DGN convergence");
    ofxPPMovie *mov2 = s->addMovie("teapot", "/Users/gene/bin/synthesizing/teapotnew.mov", true, 0.1, 0.1, 0.8, 0.8);
    mov2->setLoop(false);
    
    s = slideshow.addSlide("DGN (buttes)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/buttes.png", 0, 0, 1, 1);

    s = slideshow.addSlide("DGN (people as artifacts)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/people.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("DGN (discotheque)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/discotheque.png", 0, 0, 1, 1);

    s = slideshow.addSlide("DGN (boathouses)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/boathouses.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("DGN (Places365)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/new_classes.png", 0, 0, 1, 1);

    s = slideshow.addSlide("Deep Generator Networks");
    s->addScrollableImage("classvis", "/Users/gene/bin/synthesizing/synthesizing-caffenet-tSNE.png", 0, 0, 1, 1);

    // Adversarial nets
    s = slideshow.addSlide("Closed-captioning wavenets");
    //s->addMovie("CC wavenets", "/Users/gene/bin/misc/Closed-captioning WaveNets.mp4", true, 0, 0, 1, 1);
    s->addImage("cc wavenets", "/Users/gene/bin/misc/closedcapwavenets.jpg", 0, 0, 1, 1);

    s = slideshow.addSlide("Adversarial nets");
    s->addImage("perceptrons top", "/Users/gene/bin/misc/stock/nytimes_perceptron_top.png", 0.0, 0.0, 1, 0.24);
    s->addImage("perceptrons", "/Users/gene/bin/misc/stock/nytimes_perceptron.png", 0.0, 0.24, 1, 0.76);

    s = slideshow.addSlide("Adversarial nets");
    s->addImage("inbox", "/Users/gene/Writing/_Talks/S4AD-Pioneerworks/05_sequences/dribnet_monwed2.png", 0.1, 0.1, 0.8, 0.8);

    s = slideshow.addSlide("Dense captioning (Li, Karpathy, Johnson)");
    s->addImage("densecap", "/Users/gene/bin/misc/stock/rnn/densecap.png", 0, 0.06, 1, 0.94);
    s->addText(h4, ofColor(0), "http://cs.stanford.edu/people/karpathy/densecap/", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("Dense captioning Atlas, The Next Generation");
    s->addMovie("densecap", "/Users/gene/bin/densecap/atlas.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Dense captioning Pouff's grocery trip");
    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream_grocery.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "original: https://www.youtube.com/watch?v=DgPaCWJL7XI", 0.01, 0.0, 0.99);
    
    s = slideshow.addSlide("Dense captioning Deepdream");
    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream.mp4", true, 0, 0, 1, 1);
    

    /////////////////////////
    
    s = slideshow.addSlide("Action >> philosophy");
    s->addImage("goboard", "/Users/gene/bin/misc/goboard.jpg", 0, 0.2, 1, 0.8);
    s->addText(h3, ofColor(0), "inner self vs outer world", 0.1, 0.1, 0.8);

    ///////////////
    
    s = slideshow.addSlide("The Neural Aesthetic (brainbow by Katie Matho)");
    s->addImage("neural net", "/Users/gene/bin/misc/stock/brainbow.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Training our neural network");
    s->addMovie("mnist", "/Users/gene/bin/misc/stock/mnist_weights_demo.mp4", true, 0, 0, 1, 1)->setLoop(false);
    
    s = slideshow.addSlide("Reverse image search");
    ReverseImageSearchDemo *risd = new ReverseImageSearchDemo(s, "rims", 0, 0, 1, 1);
    s->addAction(risd);
    s->start();
    
//    s = slideshow.addSlide("t-SNE colors converging in 2d");
//    s->addMovie("t-SNE convergence", "/Users/gene/Downloads/imgs/tsne_manual.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("convnet -> t-SNE");
    s->addScrollableImage("animal t-sne", "/Users/gene/bin/tsne/tsne-animals.png", 0.0, 0.0, 1.0, 1.0);
    
    s = slideshow.addSlide("www.genekogan.com/works/wiki-tSNE");
    s->addScrollableImage("wiki t-SNE", "/Users/gene/bin/tsne/wiki-tSNE.png", 0.0, 0.09, 1.0, 0.9);
    
    s = slideshow.addSlide("Audio t-SNE");
    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0, 0, 1, 1);
    s->addAction(attd);
    
    slideshow.addSlide("t-SNE :: CalTech-256 animals")->addScrollableImage("t-SNE animals", "/Users/gene/bin/tsne/grid_animals2.png", 0, 0, 1, 1);
    slideshow.addSlide("t-SNE :: Ikea catalog (by Golan Levin + Aman Tiwari)")->addScrollableImage("t-SNE ikea", "/Users/gene/bin/tsne/contributions/ikea_golan_aman.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Create mappings between sensors and synthesis parameters");
    s->addImage("kinect", "/Users/gene/bin/misc/stock/kinect-skeleton.png", 0, 0, 0.3333, 0.3333);
    s->addImage("leap", "/Users/gene/bin/misc/stock/leap-hands.jpg", 0, 0.33333, 0.3333, 0.33333);
    //    s->addImage("face", "/Users/gene/bin/misc/stock/face-osc.png", 0, 0.66666, 0.3333, 0.33333);
    s->addMovie("faceosc + ableton", "/Users/gene/Desktop/faceosc_ableton.mp4", true, 0, 0.66666, 0.3333, 0.33333);
    s->addImage("arrow", "/Users/gene/bin/misc/stock/arrow.png", 0.4, 0.4, 0.2, 0.3);
    s->addImage("leap", "/Users/gene/bin/misc/stock/ableton-params.png", 0.66666, 0.0, 0.3333, 0.5);
    s->addImage("leap", "/Users/gene/bin/images/vjing/vj_160.jpg", 0.66666, 0.5, 0.3333, 0.5);
    
    s = slideshow.addSlide("Deepdream: Leonardo Da Vinci");
    s->addImage("Da Vinci", "/Users/gene/bin/deepdream/painters/_davinci.jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("Da Vinci", "/Users/gene/bin/deepdream/painters/davinci_drawing(0)0002_i5_o8_os1.1_j32.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Video style with optical flow loss term (Ruder et al, 2016)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("video style", "/Users/gene/bin/style-transfer/10_optical_flow/video-style-transfer-x4-reordered.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Style Transfer");
    s->addImage("Mona Lisa -> Cubist/Expressionist/Impressionist", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_cubist_expressionist_impressionist.jpg", 0, 0, 1, 1);

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
    
    s = slideshow.addSlide("A Book from the Sky");
    s->addMovie("interplations", "/Users/gene/bin/dcgan/public/interpolations_3.mp4", true, 0.2, 0.15, 0.6, 0.6);
    
    s = slideshow.addSlide("Radical interpolations");
    s->addText(h3, ofColor(0), "interpolations across characters sharing the same radical often appear to preserve it", 0.1, 0.0, 0.8);
    s->addMovie("radical interpolations", "/Users/gene/bin/dcgan/summary/radinterpolation.mp4", true, 0, 0.2, 1, 0.8);

    // THE FUTURE
    // what happens when things go real-time
    

    CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
    s = slideshow.addSlide("Kandinskify");
    s->addAction(cmd);
    cmd->setStyleModel(ofToDataPath("kandinsky_e2_full512.model"));

    
    /////////////////////////
    
    s = slideshow.addSlide("Machine Learning for Artists @ ITP-NYU, Spring 2016");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("ml4a @ itp 1", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/01.mp4", true, 0, 0.01, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addMovie("ml4a @ itp 2", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/02.mp4", true, 1.01 / 3.0, 0.01, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addMovie("ml4a @ itp 3", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/03.mp4", true, 2.02 / 3.0, 0.01, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addMovie("ml4a @ itp 4", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/04.mp4", true, 0, 0.51, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addMovie("ml4a @ itp 5", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/05.mp4", true, 1.01 / 3.0, 0.51, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addMovie("ml4a @ itp 6", "/Users/gene/Teaching/ML4A/ml4a-classes/itp-S16/timelapse/06.mp4", true, 2.02 / 3.0, 0.51, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addText(h4, ofColor(255), "3.24 introduction, neural networks", 0.0, 0.0, 1.0/3.0);
    s->addText(h4, ofColor(255), "3.31 wekinator + applications", 1.01/3.0, 0.0, 1.0/3.0);
    s->addText(h4, ofColor(255), "4.7 convolutional neural networks", 2.02/3.0, 0.0, 1.0/3.0);
    s->addText(h4, ofColor(255), "4.14 convnet applications", 0.0, 0.5, 1.0/3.0);
    s->addText(h4, ofColor(255), "4.21 recurrent neural networks", 1.01/3.0, 0.5, 1.0/3.0);
    s->addText(h4, ofColor(255), "4.28 game AI, reinforcement learning", 2.02/3.0, 0.5, 1.0/3.0);
    s->loadAssets();
    
    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.2, 0.2, 0.6, 0.6);
    
    s = slideshow.addSlide("alt-AI");
    s->addMovie("alt-AI", "/Users/gene/bin/alt-ai/lisa-oculus-convnet.mp4", true, 0, 0, 0.5, 0.5);
    s->addMovie("alt-AI", "/Users/gene/bin/alt-ai/D90A8726.mp4", true, 0.5, 0, 0.5, 0.5);
    s->addMovie("alt-AI", "/Users/gene/bin/alt-ai/D90A8627.mp4", true, 0, 0.5, 0.5, 0.5);
    s->addMovie("alt-AI", "/Users/gene/bin/alt-ai/cubistmirror_v1.mp4", true, 0.5, 0.5, 0.5, 0.5);

    // games
    // mention lee won game 4
    
    s = slideshow.addSlide("I will do my best to play a beautiful and interesting game");
    s->addMovie("t-SNE convergence", "/Users/gene/Downloads/imgs/tsne_manual.mp4", true, 0, 0, 1, 1);
    s->addRect(ofColor(255,160), 0.005, 0.19, 0.33, 0.25);
    s->addRect(ofColor(255,160), 0.595, 0.19, 0.33, 0.25);
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);

    
}

void ofApp::Influencers() {
    s = slideshow.addSlide("The Influencers");
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
    
    s = slideshow.addSlide("Machine Learning for Activists");
    s->addImage("workshop1", "/Users/gene/bin/misc/workshops/influencers1.jpg", 0.0, 0.0, 0.6, 0.6);
    s->addImage("workshop2", "/Users/gene/bin/misc/workshops/influencers3.jpg", 0.4, 0.4, 0.6, 0.6);

    // arts-activism
    
}