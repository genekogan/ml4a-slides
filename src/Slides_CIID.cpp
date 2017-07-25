#include "ofApp.h"



void ofApp::WorkshopCIIDAboutMe() {
    
    s = slideshow.addSlide("hello CIID :)");
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
    
    //        s = slideshow.addSlide("Nature and simulation");
    //        s->addMovie("simulation", "/Users/gene/bin/images/Flocking-fast.mp4", true, 0, 0, 1, 1);
    //
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
    
    s = slideshow.addSlide("Data visualization");
    s->addImage("genart", "/Users/gene/Web/genekogan.github.io/_site/images/audio-sculpture/audio-sculpture2.jpg", 0, 0, 0.36, 1);
    s->addMovie("genart", "/Users/gene/bin/misc/Tennis rankings 1983-2013-HD.mp4", true, 0.4, 0, 0.61, 1);
    
    s = slideshow.addSlide("Kinect Projector Toolkit");
    s->addMovie("KPT", "/Users/gene/bin/opera-toolkit/colin-ribbons-2_nosound.mp4", true, 0.0, 0, 0.5, 0.6);
    s->addMovie("KPT", "/Users/gene/bin/kinect-projector-toolkit/Silhouettes @ Saigon Ranger 12:5:2014.mp4", true, 0.4, 0.4, 0.64, 0.62);
    
    //        s = slideshow.addSlide("Machine Yearning (2014)");
    //        s->addMovie("machine yearning", "/Users/gene/bin/machine-yearning/machine-yearning-gopro.mp4", true, 0.0, 0, 1, 1);
    
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
    s->addImage("rachel", "/Users/gene/bin/misc/workshops/opendot/30491978563_c7baa100d2_o.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/altai.JPG", 0.5, 0.0, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/influencers3.jpg", 0.0, 0.5, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/opendot1.jpg", 0.5, 0.5, 0.5, 0.48);
    
}


//--------------------------------------------------------------
void ofApp::WorkshopCIIDNeuralNets(){
    s = slideshow.addSlide("ML for interaction design @ CIID");
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
    s->start();
    
    s = slideshow.addSlide("What is machine learning?");
    s->addImage("duck", "/Users/gene/bin/misc/stock/Vaucanson-duck.jpg", 0.0, 0.1, 0.45, 0.8);
    s->addText(h3, ofColor(0), "\"Artificial intelligence is anything computers can't do yet\" - Douglas Hofstadter, re: Tesler theorem", 0.5, 0.1, 0.33);
    s->addText(h3, ofColor(0), "\"The question of whether a computer can think is no more interesting than the question of whether a submarine can swim.\" - Edsger Dijkstra", 0.5, 0.4, 0.33);
    s->addText(h4, ofColor(50), "Vaucanson's Digesting Duck", 0.0, 0.95, 0.5);
    
    s = slideshow.addSlide("Supervised learning");
    s->addImage("imagenet", "/Users/gene/bin/misc/stock/machine-learning.png", 0.0, 0.05, 0.4, 0.9);
    s->addImage("imagenet", "/Users/gene/bin/misc/stock/Linear_regression.png", 0.41, 0.05, 0.6, 0.9);
    
    s = slideshow.addSlide("Neural networks");
    s->addImage("imagenet", "/Users/gene/bin/misc/stock/neural-net-diagram.jpg", 0.2, 0.05, 0.6, 0.6);
    s->addImage("imagenet", "/Users/gene/bin/misc/stock/neural-net-equation.png", 0.3, 0.65, 0.4, 0.15);
    s->addText(h3, ofColor(0), "Solved with gradient descent via backpropagation", 0.1, 0.8, 0.8);
    
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
    
    s = slideshow.addSlide("Tiny history of deep learning");
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
    
    s = slideshow.addSlide("Convolutional neural networks \"in 5 minutes\" (brainbow by Katie Matho)");
    s->addImage("neural net", "/Users/gene/bin/misc/stock/brainbow.jpg", 0, 0, 1, 1);
    
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
    
    
    s = slideshow.addSlide("Activations are valuable");
    s->addMovie("convnetosc", "/Users/gene/bin/misc/wekinator-coffee-croissant.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Art <-> Activism?");
    s->addImage("neural net", "/Users/gene/bin/misc/stock/flow.png", 0.15, 0.15, 0.7, 0.7);
    
    s = slideshow.addSlide("Reverse image search");
    ReverseImageSearchDemo *risd = new ReverseImageSearchDemo(s, "rims", 0, 0, 1, 1);
    s->addAction(risd);
    s->start();
    
    s = slideshow.addSlide("convnet -> t-SNE");
    s->addScrollableImage("animal t-sne", "/Users/gene/bin/tsne/tsne-animals.png", 0.0, 0.0, 1.0, 1.0);
    
    s = slideshow.addSlide("Convnets");
    s->addText(h3, ofColor(0), " - Transfer learning with ConvnetOSC", 0.1, 0.2, 0.8);
    
    s = slideshow.addSlide("What else can we do with neural nets?");
    s->addImage("wekinator", "/Users/gene/bin/misc/stock/wekinator.png", 0, 0, 0.5, 0.5);
    s->addMovie("faceosc + ableton", "/Users/gene/bin/misc/faceosc_ableton.mp4", true, 0.4, 0.4, 0.6, 0.6);
    s->addText(h3, ofColor(0), "Machine learning for musicians + artists", 0.5, 0.1, 0.5);
    s->addText(h3, ofColor(0), "by Rebecca Fiebrink, @Princeton->@Goldsmiths", 0.5, 0.2, 0.5);
    s->addText(h3, ofColor(0), "Osc interface for your favorite apps", 0.5, 0.3, 0.5);
    
    
    
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
    
}


void ofApp::WorkshopCIIDArtProjects() {

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

    
    s = slideshow.addSlide("alt-AI");
    s->addMovie("alt-AI", "/Users/gene/bin/alt-ai/lisa-oculus-convnet.mp4", true, 0, 0, 0.5, 0.5);
    s->addMovie("alt-AI", "/Users/gene/bin/alt-ai/D90A8726.mp4", true, 0.5, 0, 0.5, 0.5);
    s->addMovie("alt-AI", "/Users/gene/bin/alt-ai/D90A8627.mp4", true, 0, 0.5, 0.5, 0.5);
    s->addMovie("alt-AI", "/Users/gene/bin/alt-ai/cubistmirror_v1.mp4", true, 0.5, 0.5, 0.5, 0.5);
    
    s = slideshow.addSlide("The samples never end (Jason Levine)");
    s->addMovie("jason", "/Users/gene/bin/misc/stock/altaivibez4.mp4", true, 0, 0, 1, 1)->setPositionRandom();
    
    s = slideshow.addSlide("Visualizing Neural Networks (Cassie Tarakajian)");
    s->addMovie("visualizing neural nets", "/Users/gene/bin/alt-ai/lisa-oculus-convnet.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("TransProse (Hannah Davis)");
    s->addMovie("transprose", "/Users/gene/bin/misc/TransProse - 2 Pieces-ItWLLzMislM.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://www.musicfromtext.com/", 0.01, 0.0, 0.99);
    
    s = slideshow.addSlide("Artificial Analog Neural Network (Phillip Stearns)");
    s->addMovie("aann", "/Users/gene/bin/alt-ai/aann.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Body Language (Nancy Nowacek, Morgan Hille-Refakis, David Sheinkopf, Caitlin Sikora, Gene Kogan)");
    s->addMovie("body language", "/Users/gene/bin/misc/morgan-gesture-classifier.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Animal Parade (Mike Tyka)");
    s->addMovie("animal parade", "/Users/gene/bin/alt-ai/animal_morph1.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Deepdream");
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_content/deeptrain2.mp4", true, 0.0, 0.0, 0.6, 0.35);
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_prototypes/testOtherl4_1.mp4", true, 0.0, 0.35, 0.5, 0.65);
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_prototypes/makeMid_blur_2a_imovie.mp4", true, 0.4, 0.0, 0.6, 0.6);
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_feedback/theFrame7.mp4", true, 0.5, 0.5, 0.5, 0.5);
    
    s = slideshow.addSlide("Style transfer");
    s->addImage("Mona Lisa -> Cubist/Expressionist/Impressionist", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_cubist_expressionist_impressionist.jpg", 0, 0.15, 1, 0.85);
    s->addText(h4, ofColor(0), "Gatys et al, 2015 (arxiv.org/abs/1508.06576)", 0.002, 0, 1.0);
    s->addText(h4, ofColor(0), "Justin Johnson's neural-style (https://github.com/jcjohnson/neural-style)", 0.002, 0.075, 1.0);

    s = slideshow.addSlide("Cubist Mirror");
    s->addMovie("cubist mirror", "/Users/gene/bin/alt-ai/cubistmirror_v1.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Neural net generated fonts (Erik Bernhardsson)");
    s->addMovie("generative fonts", "/Users/gene/bin/misc/erikbernhardsson_genfonts.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "https://erikbern.com/2016/01/21/analyzing-50k-fonts-using-deep-neural-networks/", 0.01, 0.0, 0.99);
    
    s = slideshow.addSlide("LSTM Sci-fi assistant (Robin Sloan)");
    s->addMovie("LSTM helper", "/Users/gene/bin/misc/stock/robinsloan-lstm-author.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "https://twitter.com/robinsloan/status/725068953383362560", 0.01, 0.0, 0.99);
    
    s = slideshow.addSlide("Deep Drumpf");
    s->addImage("helloworld", "/Users/gene/bin/misc/stock/rnn/deepdrumpf.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Deep Drumpf");
    s->addImage("helloworld", "/Users/gene/bin/misc/stock/rnn/deepdrumpf_t0.png", 0.2, 0.1, 0.6, 0.8);
    s = slideshow.addSlide("Deep Drumpf");
    s->addImage("helloworld", "/Users/gene/bin/misc/stock/rnn/deepdrumpf_t1.png", 0.2, 0.1, 0.6, 0.8);
    
    s = slideshow.addSlide("Benjamin (Ross Goodwin)");
    s->addImage("LSTM helper", "/Users/gene/bin/misc/stock/benjamin_rossgoodwin.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://rossgoodwin.com/wordsynth/", 0.01, 0.0, 0.99);
    
    s = slideshow.addSlide("RNN draws fake Kanji");
    s->addImage("kanji", "/Users/gene/bin/misc/stock/hardmaru_kanji.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://blog.otoro.net/2015/12/28/recurrent-net-dreams-up-fake-chinese-characters-in-vector-format-with-tensorflow/", 0.01, 0.9, 0.99);
    
    s = slideshow.addSlide("sketch-rnn by @hardmaru");
    s->addImage("kanji", "/Users/gene/bin/misc/stock/sketchrnn.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://blog.otoro.net/2017/05/19/teaching-machines-to-draw/", 0.01, 0.9, 0.99);

    s = slideshow.addSlide("Invisible Cities");
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
    
    s = slideshow.addSlide("Pix2Pix experiment + FaceTracker");
    s->addMovie("mario", "/Users/gene/bin/pix2pix/quasimondo_facepix2pix.mp4", true, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Meat puppet");
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/trump_face_train.png", 0.0, 0.0, 0.45, 1.0);
    s->addImage("fb", "/Users/gene/bin/misc/stock/arrow.png", 0.46, 0.0, 0.08, 1.0);
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/gene_face_test.png", 0.55, 0.0, 0.45, 1.0);
    
    s = slideshow.addSlide("Meat puppet");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump_gene1.mp4", false, 0.1, 0.1, 0.8, 0.8);

    s = slideshow.addSlide("@zero_likes (Sam Hains)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addImage("zero_likes", "/Users/gene/bin/dcgan/zero_likes/zero_likes-selfie.png", 0.0, 0.05, 1, 0.9);
    
    s = slideshow.addSlide("@zero_likes (Sam Hains)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addImage("zero_likes", "/Users/gene/bin/dcgan/zero_likes/zero_likes-doglooks.png", 0.0, 0.05, 1, 0.9);
    
    s = slideshow.addSlide("@zero_likes (Sam Hains)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addImage("zero_likes", "/Users/gene/bin/dcgan/zero_likes/zero_likes-sandwich.png", 0.0, 0.05, 1, 0.9);

    
}

void ofApp::WorkshopCIIDDeepLearning() {
    
    s = slideshow.addSlide("Neural nets hallucinating");
    s->addMovie("dcgan", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0.026, 0.5, 0.47);
    s->addImage("deepdream", "/Users/gene/bin/misc/stock/building-dreams.png", 0, 0.515, 0.5, 0.48);
    s->addImage("stylenet", "/Users/gene/bin/misc/stock/stylenet-original.png", 0.5, 0.53, 0.5, 0.47);
    s->addImage("synthesizing original", "/Users/gene/bin/misc/stock/synthesizing-original.jpg", 0.5, 0.025, 0.5, 0.48);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=QYcKCGdZvq4", 0.01, 0.0, 1.0);
    s->addText(h5, ofColor(0), "research.googleblog.com/2015/06/inceptionism-going-deeper-into-neural.html", 0.002, 0.475, 1.0);
    s->addText(h4, ofColor(0), "https://arxiv.org/abs/1508.06576", 0.6, 0.51, 1.0);
    s->addText(h4, ofColor(0), "http://www.evolvingai.org/synthesizing", 0.6, 0.0, 1.0);
    s->start();
    
    s = slideshow.addSlide("Computer vision then vs now");
    s->addImage("imagenet", "/Users/gene/bin/misc/stock/image-classification-pipeline.jpg", 0, 0.05, 1, 0.45);
    s->addImage("imagenet", "/Users/gene/bin/misc/stock/image-classification-pipeline-new.jpg", 0, 0.55, 1, 0.45);
    s->addText(h2, ofColor(0), "1990s + 2000s", 0.4, 0.02, 0.4);
    s->addText(h2, ofColor(0), "2010s", 0.4, 0.52, 0.4);

    s = slideshow.addSlide("CNN demo");
    CcvForwardPassDemo *ccvd = new CcvForwardPassDemo(s, "ccv", 0, 0, 1, 1);
    s->addAction(ccvd);

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
    
    

	s = slideshow.addSlide("ML generative models");
    s->addImage("pca", "/Users/gene/bin/misc/stock/GaussianScatterPCA.svg.png", 0.0, 0, 0.5, 1.0);
    s->addImage("arrow", "/Users/gene/bin/misc/stock/arrow.png", 0.47, 0.0, 0.06, 1.0);
    s->addImage("deepdream", "/Users/gene/bin/misc/stock/building-dreams.png", 0.48, 0.3, 0.63, 0.5);
    s->addMovie("dcgan", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0.4, 0.0, 0.25, 0.33);
    s->addMovie("Deepzoom", "/Users/gene/bin/strelka/out2.mp4", true, 0.4, 0.67, 0.31, 0.34);
    s->addImage("synthesizing original", "/Users/gene/bin/misc/stock/synthesizing-original.jpg", 0.71, 0.66, 0.3, 0.35);
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_content/deeptrain2.mp4", true, 0.66, 0.0, 0.35, 0.35);
    
    s = slideshow.addSlide("Generative models");
    RandPixDemo *randDemo = new RandPixDemo(s, "randdemo", 0.25, 0.1, 0.5, 0.5);
    s->addAction(randDemo);
    s->addText(h4, ofColor(0), "Curse of dimensionality", 0.1, 0.5, 0.8);
    s->addText(h4, ofColor(0), "1024 ^ (256 * 256 * 256) possible images", 0.1, 0.6, 0.8);
    
    s = slideshow.addSlide("Principal component analysis");
    s->addImage("pca", "/Users/gene/bin/misc/stock/fig_pca_principal_component_analysis.png", 0.0, 0.0, 1, 1);
    s->addText(h4, ofColor(0), "http://www.nlpca.org/pca_principal_component_analysis.html", 0.1, 0, 0.8);
    
    s = slideshow.addSlide("Eigenfaces");
    s->addImage("eigenface", "/Users/gene/bin/misc/stock/eigenface_reconstruction_opencv.png", 0.15, 0.1, 0.7, 0.8);
    s->addText(h4, ofColor(0), "http://docs.opencv.org/2.4/modules/contrib/doc/facerec/facerec_tutorial.html", 0.05, 0.93, 0.7);
    
    s = slideshow.addSlide("Autoencoders");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder.png", 0, 0, 1, 0.3);
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder_net.png", 0, 0.3, 1, 0.65);
    s->addText(h4, ofColor(0), "world's most expensive identity function", 0.01, 0.93, 0.8);
    
    s = slideshow.addSlide("Reconstructions MNIST");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoders_mnist_reconstruction.png", 0, 0, 1, 1);
    
    
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
    
    s = slideshow.addSlide("A Book from the Sky (Dec 2015)");
    s->addMovie("zloops", "/Users/gene/bin/dcgan/summary/zloops.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Radical interpolations");
    s->addText(h3, ofColor(0), "interpolations across characters sharing the same radical often appear to preserve it", 0.1, 0.0, 0.8);
    s->addMovie("radical interpolations", "/Users/gene/bin/dcgan/summary/radinterpolation.mp4", true, 0, 0.2, 1, 0.8);
        
    s = slideshow.addSlide("Deep Generator Networks");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/DGN_architecture.jpg", 0.0, 0.1, 1, 0.41);
    s->addImage("classvis", "/Users/gene/bin/misc/stock/class-synthesis-deepgen.png", 0.0, 0.52, 1, 0.48);
    s->addText(h4, ofColor(0), "Nguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.15, 0.01, 1.0);
    
    s = slideshow.addSlide("DGN CaffeNet");
    s->addScrollableImage("classvis", "/Users/gene/bin/synthesizing/synthesizing-caffenet-tSNE.png", 0, 0, 1, 1);
    
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
    
    
    // deepdream + stylenet
    
    s = slideshow.addSlide("Deepdream");
    s->addMovie("bel", "/Users/gene/bin/images/instagram/JTrain-instagram_start75.mp4", true, 0.0, 0, 0.5, 1);
    s->addMovie("bel", "/Users/gene/bin/deepdream/darknet/out_jt_13_3x12_oct4_11.mp4", true, 0.505, 0, 0.5, 1);
    
    s = slideshow.addSlide("Deepdream");
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_content/deeptrain2.mp4", true, 0.0, 0.0, 0.6, 0.35);
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_prototypes/testOtherl4_1.mp4", true, 0.0, 0.35, 0.5, 0.65);
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_prototypes/makeMid_blur_2a_imovie.mp4", true, 0.4, 0.0, 0.6, 0.6);
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_feedback/theFrame7.mp4", true, 0.5, 0.5, 0.5, 0.5);
    
    s = slideshow.addSlide("Style transfer");
    s->addImage("Mona Lisa -> Cubist/Expressionist/Impressionist", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_cubist_expressionist_impressionist.jpg", 0, 0.15, 1, 0.85);
    s->addText(h4, ofColor(0), "Gatys et al, 2015 (arxiv.org/abs/1508.06576)", 0.002, 0, 1.0);
    s->addText(h4, ofColor(0), "Justin Johnson's neural-style (https://github.com/jcjohnson/neural-style)", 0.002, 0.075, 1.0);
    
    s = slideshow.addSlide("Image-to-Image Translation with Conditional Adversarial Nets");
    s->addImage("fb", "/Users/gene/bin/pix2pix/teaser_v3a.png", 0.0, 0.04, 1.0, 0.96);
    s->addText(h3, ofColor(100), "phillipi.github.io/pix2pix/", 0.02, 0.00, 0.8);
    s->start();
    
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
    
//    s = slideshow.addSlide("Online drawing tool");
//    s->addMovie("fb", "/Users/gene/bin/pix2pix/invisible_cities/invisible_cities-draw.mp4", false, 0.05, 0.05, 0.9, 0.9);
//    s->addText(h3, ofColor(100), "github.com/genekogan/InvisibleCities/", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("Tiltbrush -> Pix2Pix experiment w/ Sougwen Chung");
    s->addMovie("fb", "/Users/gene/bin/strelka/tiltbrush-venice.mp4", false, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Pix2Pix experiment (Ildar Iakubov)");
    s->addMovie("fb", "/Users/gene/bin/strelka/ildar-pix2pix.mp4", false, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Pix2Pix streetview (Jasper van Loenen)");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/jasper-streetview.mp4", false, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Meat puppet");
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/trump_face_train.png", 0.0, 0.0, 0.45, 1.0);
    s->addImage("fb", "/Users/gene/bin/misc/stock/arrow.png", 0.46, 0.0, 0.08, 1.0);
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/gene_face_test.png", 0.55, 0.0, 0.45, 1.0);
    
    s = slideshow.addSlide("Meat puppet");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump_gene1.mp4", false, 0.1, 0.1, 0.8, 0.8);
    
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
       
}


void ofApp::WorkshopCIIDDeepLearning2() {
    
    s = slideshow.addSlide("Neural nets hallucinating");
    s->addMovie("dcgan", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0.026, 0.5, 0.47);
    s->addImage("deepdream", "/Users/gene/bin/misc/stock/building-dreams.png", 0, 0.515, 0.5, 0.48);
    s->addImage("stylenet", "/Users/gene/bin/misc/stock/stylenet-original.png", 0.5, 0.53, 0.5, 0.47);
    s->addImage("synthesizing original", "/Users/gene/bin/misc/stock/synthesizing-original.jpg", 0.5, 0.025, 0.5, 0.48);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=QYcKCGdZvq4", 0.01, 0.0, 1.0);
    s->addText(h5, ofColor(0), "research.googleblog.com/2015/06/inceptionism-going-deeper-into-neural.html", 0.002, 0.475, 1.0);
    s->addText(h4, ofColor(0), "https://arxiv.org/abs/1508.06576", 0.6, 0.51, 1.0);
    s->addText(h4, ofColor(0), "http://www.evolvingai.org/synthesizing", 0.6, 0.0, 1.0);
    s->start();
    
    s = slideshow.addSlide("Computer vision then vs now");
    s->addImage("imagenet", "/Users/gene/bin/misc/stock/image-classification-pipeline.jpg", 0, 0.05, 1, 0.45);
    s->addImage("imagenet", "/Users/gene/bin/misc/stock/image-classification-pipeline-new.jpg", 0, 0.55, 1, 0.45);
    s->addText(h2, ofColor(0), "1990s + 2000s", 0.4, 0.02, 0.4);
    s->addText(h2, ofColor(0), "2010s", 0.4, 0.52, 0.4);
    
    s = slideshow.addSlide("CNN demo");
    CcvForwardPassDemo *ccvd = new CcvForwardPassDemo(s, "ccv", 0, 0, 1, 1);
    s->addAction(ccvd);
    
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
    

    s = slideshow.addSlide("What are generative models?");
    s->addImage("pixelspace", "/Users/gene/bin/misc/stock/GenerativeModels.png", 0.0, 0.2, 1, 0.75);
    s->addText(h2, ofColor(0), "Discriminative model:   P(y|x)\n\nGenerative model:   P(x,y) or P(x)", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("The curse of dimensionality");
    RandPixDemo *randDemo = new RandPixDemo(s, "randdemo", 0.25, 0.1, 0.5, 0.5);
    s->addAction(randDemo);
    s->addText(h3, ofColor(0), "grains of sand on earth: 10^20", 0.1, 0.55, 0.6);
    s->addText(h3, ofColor(0), "planck times since big bang: 10^62", 0.1, 0.6, 0.6);
    s->addText(h3, ofColor(0), "atoms in universe: 10^80", 0.1, 0.65, 0.6);
    s->addText(h3, ofColor(0), "chess boards: 10^120", 0.1, 0.7, 0.6);
    s->addText(h3, ofColor(0), "go boards: 10^170", 0.1, 0.75, 0.6);
    s->addText(h3, ofColor(0), "32 x 32 RGB images: 10^7400", 0.1, 0.8, 0.6);
    
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
    
    // GANS
    s = slideshow.addSlide("Generative adversarial networks");
    s->addText(h4, ofColor(0), "Goodfellow et al, 2014 https://arxiv.org/abs/1406.2661", 0.1, 0.0, 0.8);
    s->addImage("GANs", "/Users/gene/bin/misc/stock/GANs.png", 0.0, 0.1, 1.0, 0.9);
    
    
    s = slideshow.addSlide("Deep convolutional generative adversarial network");
    s->addImage("Mona Lisa", "/Users/gene/bin/misc/stock/faces_128_filter_samples.png", 0.0, 0.06, 1.0, 0.935);
    s->addText(h4, ofColor(0), "Radford, Metz, Chintala 2015 (https://arxiv.org/abs/1511.06434)", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("Deep convolutional generative adversarial network");
    s->addImage("smiling arithmetic", "/Users/gene/bin/misc/stock/faces_arithmetic_collage1.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "Radford, Metz, Chintala (arxiv.org/abs/1511.06434)", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("Interpolating faces");
    s->addMovie("mymov2", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "Radford, Metz, Chintala (arxiv.org/abs/1511.06434)", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("\"Interpolating\" numbers");
    s->addText(h4, ofColor(0), "made with https://github.com/Newmu/dcgan_code", 0.1, 0, 0.8);
    s->addMovie("MNIST interpolations", "/Users/gene/bin/dcgan/summary/digits.mov", true, 0.2, 0.1, 0.6, 0.6);
    
    s = slideshow.addSlide("HIT-OR3C");
    s->addImage("Mona Lisa", "/Users/gene/bin/dcgan/summary/fakereal.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("A Book from the Sky (Dec 2015)");
    s->addMovie("zloops", "/Users/gene/bin/dcgan/summary/zloops.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Character interpolations");
    s->addMovie("interplations", "/Users/gene/bin/dcgan/summary/interpolations.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Radical interpolations");
    s->addText(h3, ofColor(0), "interpolations across characters sharing the same radical often appear to preserve it", 0.1, 0.0, 0.8);
    s->addMovie("radical interpolations", "/Users/gene/bin/dcgan/summary/radinterpolation.mp4", true, 0, 0.2, 1, 0.8);
    
    s = slideshow.addSlide("DCGAN Manga");
    s->addImage("manga 1", "/Users/gene/bin/dcgan/public/07_manga_sample1.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://github.com/mattya/chainer-DCGAN", 0, 0, 1);
    
    s = slideshow.addSlide("DCGAN Manga interpolations");
    s->addImage("manga 2", "/Users/gene/bin/dcgan/public/07_manga_sample2.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://github.com/mattya/chainer-DCGAN", 0, 0, 1);
    
    
    s = slideshow.addSlide("So many GANs");
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
    
    s = slideshow.addSlide("Creative GAN");
    s->addImage("classvis", "/Users/gene/bin/misc/stock/Creative-GAN.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "Creative Adversarial Networks, deviating from Style Norms\nAhmed Elgammal et al (https://arxiv.org/pdf/1706.07068.pdf)", 0.1, 0.0, 0.8);

    s = slideshow.addSlide("Deep Generator Networks");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/DGN_architecture.jpg", 0.0, 0.1, 1, 0.41);
    s->addImage("classvis", "/Users/gene/bin/misc/stock/class-synthesis-deepgen.png", 0.0, 0.52, 1, 0.48);
    s->addText(h4, ofColor(0), "Nguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.15, 0.01, 1.0);
    
    s = slideshow.addSlide("DGN CaffeNet");
    s->addScrollableImage("classvis", "/Users/gene/bin/synthesizing/synthesizing-caffenet-tSNE.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("DGN (buttes)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/buttes.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("DGN (boathouses)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/boathouses.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("DGN (discotheque)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/discotheque.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("DGN convergence");
    ofxPPMovie *mov = s->addMovie("cheeseburger", "/Users/gene/bin/synthesizing/cheeseburgernew.mov", false, 0.02, 0.1, 0.46, 0.8);
    mov->setLoop(false);
    ofxPPMovie *mov2 = s->addMovie("teapot", "/Users/gene/bin/synthesizing/teapotnew.mov", false, 0.52, 0.1, 0.46, 0.8);
    mov2->setLoop(false);
    
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
    
    
    // pix2pix + CycleGAN
    
    s = slideshow.addSlide("Image-to-Image Translation with Conditional Adversarial Nets");
    s->addImage("fb", "/Users/gene/bin/pix2pix/teaser_v3a.png", 0.0, 0.04, 1.0, 0.96);
    s->addText(h3, ofColor(100), "phillipi.github.io/pix2pix/", 0.02, 0.00, 0.8);
    s->start();
    
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
    
    s = slideshow.addSlide("Edges2Cat + FotoGenerator");
    s->addImage("sketch2cat", "/Users/gene/bin/pix2pix/foto-generator.png", 0.45, 0.495, 0.55, 0.52);
    s->addImage("sketch2cat", "/Users/gene/bin/pix2pix/edges2cat.png", 0.0, 0.05, 0.55, 0.53);
    s->addText(h3, ofColor(100), "Interface by Christopher Hesse (https://affinelayer.com/pixsrv/)", 0.1, 0, 0.8);
    
    s = slideshow.addSlide("Tiltbrush -> Pix2Pix experiment w/ Sougwen Chung");
    s->addMovie("fb", "/Users/gene/bin/strelka/tiltbrush-venice.mp4", false, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Pix2Pix experiment (Ildar Iakubov)");
    s->addMovie("fb", "/Users/gene/bin/strelka/ildar-pix2pix.mp4", false, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Pix2Pix streetview (Jasper van Loenen)");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/jasper-streetview.mp4", false, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Pix2Pix person-to-person (Brannon Dorsey)");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/brannon-kurzweil.mp4", false, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Pix2Pix + FaceTracker");
    s->addMovie("mario", "/Users/gene/bin/pix2pix/quasimondo_facepix2pix.mp4", true, 0.05, 0.05, 0.9, 0.9);
    
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
    
    s = slideshow.addSlide("CycleGAN");
    s->addImage("fb", "/Users/gene/bin/misc/cyclegan/cyclegan.jpg", 0.0, 0.07, 1, 0.95);
    s->addText(h3, ofColor(100), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("CycleGAN");
    s->addMovie("fb", "/Users/gene/bin/misc/cyclegan/cyclegan_zebra.mp4", true, 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(100), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("CycleGAN fail");
    s->addImage("fb", "/Users/gene/bin/misc/cyclegan/putin_zebra.jpeg", 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(100), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    
    
    s = slideshow.addSlide("Generative models in other domains");
    s->addText(h3, ofColor(100), "Skip-thought vectors\n\nKiros et al, https://arxiv.org/abs/1506.06726", 0.1, 0, 0.8);
    s->addImage("fb", "/Users/gene/bin/misc/stock/skip-thought-vectors.png", 0, 0.2, 1, 0.6);
    
    s = slideshow.addSlide("Neural storyteller");
    s->addImage("fb", "/Users/gene/bin/misc/stock/neural-storyteller.png", 0, 0.2, 1, 0.6);
    s->addText(h3, ofColor(100), "https://github.com/ryankiros/neural-storyteller", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("Neural Taylor Swift");
    s->addImage("fb", "/Users/gene/bin/misc/stock/samim-neural-storyteller.jpg", 0, 0.06, 1, 0.95);
    s->addText(h3, ofColor(100), "https://medium.com/@samim/generating-stories-about-images-d163ba41e4ed", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("Pointcloud GAN");
    s->addImage("classvis", "/Users/gene/bin/misc/stock/pointcloud-GAN.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "Representation Learning and Adversarial Generation of 3D Point Clouds\nPanos Achlioptas et al (https://arxiv.org/abs/1707.02392v1)", 0.1, 0.0, 0.8);

    
    s = slideshow.addSlide("WaveNet");
    s->addText(h3, ofColor(0), "https://deepmind.com/blog/wavenet-generative-model-raw-audio/", 0.05, 0.01, 0.9);
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
    
    s = slideshow.addSlide("Reverse-engineering WaveNet");
    s->addText(h3, ofColor(0), "https://github.com/ibab/tensorflow-wavenet", 0.05, 0.01, 0.9);
    s->addImage("ibab", "/Users/gene/bin/wavenet/blogpost/ibab-tensorflow.png", 0.1, 0.1, 0.8, 0.5);
    s->addSound("Il Barbiere di Siviglia wavenet", "/Users/gene/bin/wavenet/barber_25525_fadein.wav", h4, false, false, 0.25, 0.7, 0.5, 0.1);
    s->addText(h4, ofColor(0), "https://soundcloud.com/genekogan/il-barbiere-di-siviglia-wavenet", 0.26, 0.825, 0.8);
    
    s = slideshow.addSlide("Closed-captioning WaveNet");
    s->addMovie("CC wavenets", "/Users/gene/bin/wavenet/blogpost/wavenet-closedcaps-record.mp4", false, 0, 0, 1, 1);
    
    s = slideshow.addSlide("NSynth: Neural Audio Synthesis");
    s->addText(h4, ofColor(0), "https://magenta.tensorflow.org/nsynth", 0.1, 0.0, 0.8);
    s->addImage("ns", "/Users/gene/bin/misc/stock/NSynth_blog_figs_InterpolateZ.png", 0, 0.04, 1.0, 0.36);
    s->addImage("ns", "/Users/gene/bin/misc/stock/NSynth_blog_figs_Three_Reconstructions.png", 0, 0.405, 1.0, 0.61);
    
    s = slideshow.addSlide("Google Inceptionism classvis");
    s->addImage("Deepdream classvis", "/Users/gene/bin/deepdream/paper/classvis.png", 0.0, 0.2, 1, 0.8);
    s->addText(h4, ofColor(0), "Going deeper with Inceptionism (Mordvintsev, Olah, Tyka)", 0.2, 0.0, 1.0);
    s->addText(h4, ofColor(0), "googleresearch.blogspot.com/2015/06/inceptionism-going-deeper-into-neural.html]", 0.2, 0.1, 1.0);
    
    s = slideshow.addSlide("Deepdream");
    s->addImage("Ibis", "/Users/gene/bin/deepdream/paper/ibis.png", 0.0, 0.0, 1.0, 0.65);
    s->addImage("Deepdream prototypes", "/Users/gene/bin/deepdream/paper/Funny-Animals.png", 0.0, 0.66, 1.0, 0.33);
    s->addText(h4, ofColor(0), "googleresearch.blogspot.com/2015/06/inceptionism-going-deeper-into-neural.html]", 0.04, 0.0, 1.0);
    
    s = slideshow.addSlide("Deepdream: Leonardo Da Vinci");
    s->addImage("Da Vinci", "/Users/gene/bin/deepdream/painters/_davinci.jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("Da Vinci", "/Users/gene/bin/deepdream/painters/davinci_drawing(0)0002_i5_o8_os1.1_j32.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Deepdream noise");
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
    //	E2-78+F2-32+G2-38_n10_o08_r1.33_cr5_b0.33.png
    
    
    
    
    s = slideshow.addSlide("Feedback and gradient interpolation");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/initial_experiments/fullfades/hframes2.mp4", true, 0, 0, 1, 1);
    
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
    

    // Style transfer
    
    s = slideshow.addSlide("Style transfer");
    s->addImage("Mona Lisa -> Cubist/Expressionist/Impressionist", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_cubist_expressionist_impressionist.jpg", 0, 0.15, 1, 0.85);
    s->addText(h4, ofColor(0), "Gatys et al, 2015 (arxiv.org/abs/1508.06576)", 0.002, 0, 1.0);
    s->addText(h4, ofColor(0), "Justin Johnson's neural-style (https://github.com/jcjohnson/neural-style)", 0.002, 0.075, 1.0);
    
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
    s->addImage("Starry night", "/Users/gene/bin/style-transfer/_inputs/starrynight.jpg", 0.0, 0.6, 0.5, 0.4);
    s->addMovie("ML starry night", "/Users/gene/bin/style-transfer/11_demo/ml_starrynight_iterations.mp4", true, 0.5, 0.02, 0.5, 0.96);
    
    s = slideshow.addSlide("Mr. Div x Gustav Klimt");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("Mr. Div x Gustav Klimt", "/Users/gene/bin/style-transfer/05_interpolations/klimt-discoball/klimt-discoball.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Video style transfer x3");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("video style", "/Users/gene/bin/style-transfer/10_optical_flow/video-style-transfer-triptych.mp4", true, 0, 0, 1, 1);
    
    CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
    s = slideshow.addSlide("What happens when it's real-time?");
    s->addAction(cmd);
    cmd->setStyleModel("/Users/gene/bin/style-transfer/models/kandinsky_e2_full512.model");
    
}

void ofApp::CIIDOpenTalk() {
    
    s = slideshow.addSlide("CIID, 13 June 2017");
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
    s->start();
    
    s = slideshow.addSlide("music information retrieval");
    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
    s->addImage("genre VA", "/Users/gene/bin/misc/sourcetone/genre-AvgVA.jpg", 0.0, 0.4, 0.42, 0.6);
    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
    
    //    s = slideshow.addSlide("Color of Words");
    //    s->addScrollableImage("color of words", "/Users/gene/bin/misc/stock/color-of-words.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Musical instruments (w/ Jeff Snyder)");
    s->addImage("tweet", "/Users/gene/Web/genekogan.github.io/_site/images/birl/birl1.jpg", 0.0, 0.0, 1, 0.35);
    s->addImage("tweet", "/Users/gene/bin/misc/Snyderphonics_Manta.jpg", 0.0, 0.365, 1, 0.64);
    //
    //        s = slideshow.addSlide("Generative art");
    //        s->addImage("star", "/Users/gene/bin/images/stars/star-00001.png", 0, 0, 0.25, 0.5);
    //        s->addImage("star", "/Users/gene/bin/images/stars/star-00004.png", 0.25, 0, 0.25, 0.5);
    //        s->addImage("star", "/Users/gene/bin/images/stars/star-00005.png", 0.5, 0, 0.25, 0.5);
    //        s->addImage("star", "/Users/gene/bin/images/stars/star-00010.png", 0.75, 0, 0.25, 0.5);
    //        s->addImage("star", "/Users/gene/bin/images/stars/star-00014.png", 0.25, 0.5, 0.25, 0.5);
    //        s->addImage("star", "/Users/gene/bin/images/stars/star-00016.png", 0.5, 0.5, 0.25, 0.5);
    //        s->addImage("star", "/Users/gene/bin/images/stars/star-00011.png", 0, 0.5, 0.25, 0.5);
    //        s->addImage("star", "/Users/gene/bin/images/stars/star-00022.png", 0.75, 0.5, 0.25, 0.5);
    //
    s = slideshow.addSlide("Generative art");
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
    s->addMovie("KPT", "/Users/gene/bin/kinect-projector-toolkit/Silhouettes @ Saigon Ranger_nosound.mp4", true, 0.4, 0.4, 0.64, 0.62);
    
    s = slideshow.addSlide("Machine Yearning (2014)");
    s->addMovie("machine yearning", "/Users/gene/bin/machine-yearning/machine-yearning-gopro.mp4", true, 0.0, 0, 1, 1);
    
    s = slideshow.addSlide("Opera Toolkit (2015)");
    s->addMovie("KPT", "/Users/gene/bin/opera-toolkit/optk_sarah_v1.mp4", true, 0.0, 0, 1, 1);
    
    s = slideshow.addSlide("Mass collaboration: EcoHacker-Build");
    s->addImage("ecohack", "/Users/gene/bin/ecohacker-build/_mg_7093_14926714478_o.jpg", 0, 0, 1, 1);
    
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
    //    s->addImage("Starry night", "/Users/gene/bin/style-transfer/_inputs/starrynight.jpg", 0.0, 0.6, 0.5, 0.4);
    //    s->addMovie("ML starry night", "/Users/gene/bin/style-transfer/11_demo/ml_starrynight_iterations.mp4", true, 0.5, 0.02, 0.5, 0.96);
    
    
    s = slideshow.addSlide("Deepdream: Leonardo Da Vinci");
    s->addImage("Da Vinci", "/Users/gene/bin/deepdream/painters/_davinci.jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("Da Vinci", "/Users/gene/bin/deepdream/painters/davinci_drawing(0)0002_i5_o8_os1.1_j32.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Deepdream");
    s->addMovie("bel", "/Users/gene/bin/images/instagram/JTrain-instagram_start75.mp4", true, 0.0, 0, 0.5, 1);
    s->addMovie("bel", "/Users/gene/bin/deepdream/darknet/out_jt_13_3x12_oct4_11.mp4", true, 0.505, 0, 0.5, 1);
    
    s = slideshow.addSlide("Deepdream");
    s->addMovie("bel", "/Users/gene/bin/deepdream/darknet/out_bel_13_3x12_oct4_11.mp4", true, 0.0, 0, 0.5, 1);
    s->addMovie("bel", "/Users/gene/bin/deepdream/darknet/out_bel_9_3x12_oct4_11.mp4", true, 0.505, 0, 0.5, 1);
    
    s = slideshow.addSlide("Deepdream");
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_content/deeptrain2.mp4", true, 0.0, 0.0, 0.6, 0.35);
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_prototypes/testOtherl4_1.mp4", true, 0.0, 0.35, 0.5, 0.65);
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_prototypes/makeMid_blur_2a_imovie.mp4", true, 0.4, 0.0, 0.6, 0.6);
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_feedback/theFrame7.mp4", true, 0.5, 0.5, 0.5, 0.5);
    
    s = slideshow.addSlide("Recent experiments");
    s->addImage("Da Vinci", "/Users/gene/bin/lapnorm/initial_experiments/eureka.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Recent experiments");
    s->addMovie("Deepzoom", "/Users/gene/bin/lapnorm/initial_experiments/kframes (4).mp4", true, 0.0, 0.0, 1, 1);
    
    s = slideshow.addSlide("Recent experiments");
    s->addMovie("Deepzoom", "/Users/gene/bin/lapnorm/initial_experiments/testframes9b0.mp4", true, 0.0, 0.0, 1, 1);
    
    
    s = slideshow.addSlide("Style transfer");
    s->addImage("Mona Lisa -> Cubist/Expressionist/Impressionist", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_cubist_expressionist_impressionist.jpg", 0, 0.15, 1, 0.85);
    s->addText(h4, ofColor(0), "Gatys et al, 2015 (arxiv.org/abs/1508.06576)", 0.002, 0, 1.0);
    s->addText(h4, ofColor(0), "Justin Johnson's neural-style (https://github.com/jcjohnson/neural-style)", 0.002, 0.075, 1.0);
    
    //    s = slideshow.addSlide("Mona Lisa x Devajyoti Ray");
    //    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/devajyoti.jpg", 0.0, 0.0, 0.55, 1.0);
    //    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_devajyoti.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Hokusai");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/hokusai.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_hokusai.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Tarsila");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/tarsilo2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_tarsila.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Roy Liechtenstein");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/liechtenstein.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_liechtenstein.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Aurora Borealis");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/aurora.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_aurora.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Crab Nebula");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/crab.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_crab.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Egyptian Hieroglyphs (1)");
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
    
    s = slideshow.addSlide("Mr. Div x Gustav Klimt");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("Mr. Div x Gustav Klimt", "/Users/gene/bin/style-transfer/05_interpolations/klimt-discoball/klimt-discoball.mp4", true, 0, 0, 1, 1);
    
//    s = slideshow.addSlide("Picasso x Picasso");
//    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
//    s->addMovie("Picasso periods", "/Users/gene/bin/style-transfer/05_interpolations/picasso-periods/picasso-periods.mp4", true, 0, 0, 1, 1);

    //    s = slideshow.addSlide("Why is a Raven like a Writing Desk?");
    //    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    //    s->addMovie("AliceNet", "/Users/gene/bin/style-transfer/04_alice/Alice-Stylenet.mov", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Video style with optical flow loss term (Ruder et al, 2016)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("video style", "/Users/gene/bin/style-transfer/10_optical_flow/video-style-transfer-x4-reordered.mp4", true, 0, 0, 1, 1);
    
    CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
    s = slideshow.addSlide("What happens when it's real-time?");
    s->addAction(cmd);
    cmd->setStyleModel("/Users/gene/bin/style-transfer/models/kandinsky_e2_full512.model");
    
    
    s = slideshow.addSlide("Image-to-Image Translation with Conditional Adversarial Nets");
    s->addImage("fb", "/Users/gene/bin/pix2pix/teaser_v3a.png", 0.0, 0.04, 1.0, 0.96);
    s->addText(h4, ofColor(100), "phillipi.github.io/pix2pix/ -> github.com/affinelayer/pix2pix-tensorflow", 0.002, 0.00, 1.0);
    s->start();
    
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
    
    s = slideshow.addSlide("Meat puppet");
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/trump_face_train.png", 0.0, 0.0, 0.45, 1.0);
    s->addImage("fb", "/Users/gene/bin/misc/stock/arrow.png", 0.46, 0.0, 0.08, 1.0);
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/gene_face_test.png", 0.55, 0.0, 0.45, 1.0);
    
    s = slideshow.addSlide("Meat puppet");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump_gene1.mp4", false, 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Meat puppet @ ECAL");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump-meatpuppet-pix2pix-ecal.mp4", true, 0.0, 0.0, 1.0, 1.0)->setPosition(0.25);
    
    
    s = slideshow.addSlide("Having fun");
    s->addImage("densecap", "/Users/gene/bin/densecap/monalisa-densecap.png", 0, 0.03, 1, 0.94);
    
    s = slideshow.addSlide("Dense captioning Atlas, The Next Generation");
    s->addMovie("densecap", "/Users/gene/bin/densecap/atlas.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Dense captioning Deepdream");
    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Dense captioning Pouff's grocery trip");
    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream_grocery.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "original: https://www.youtube.com/watch?v=DgPaCWJL7XI", 0.01, 0.0, 0.99);
    
    s = slideshow.addSlide("YOLO x ScreenGrab");
    DarknetScreenGrabDemo *dnsgd = new DarknetScreenGrabDemo(s, "Darknet Demo", 0, 0, 1, 1);
    dnsgd->setDarknetReference(&darknet);
    s->addAction(dnsgd);
    
    s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
    s->addImage("yolo", "/Users/gene/bin/ml4a/ReverseImageSearch/yolo-screen1.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
    s->addImage("yolo", "/Users/gene/bin/ml4a/ReverseImageSearch/yolo-screen2.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
    s->addImage("yolo", "/Users/gene/bin/ml4a/ReverseImageSearch/yolo-screen3.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Tele-captioning skype");
    s->addImage("skype1", "/Users/gene/bin/misc/densecap-skype_2.png", 0.32, 0.46, 0.7, 0.65);
    s->addImage("skype1", "/Users/gene/bin/misc/densecap-skype_1.png", 0, 0.0, 0.7, 0.65);
    
    
    s = slideshow.addSlide("Demos");
    s->addMovie("transfer learning", "/Users/gene/bin/misc/wekinator-coffee-croissant.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Audio + Text t-SNEs");
    s->addScrollableImage("wiki t-SNE", "/Users/gene/bin/tsne/wiki-tSNE.png", -0.05, 0.0, 0.72, 0.76);
    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0.48, 0.39, 0.54, 0.63);
    s->addAction(attd);
    s->addText(h4, ofColor(80), "www.genekogan.com/works/wiki-tSNE", 0.03, 0.8, 0.7);
    s->addText(h4, ofColor(80), "github.com/ml4a/ml4a-ofx", 0.67, 0.3, 0.7);

    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("ml4a.github.io");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("ml4a @ itp", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/ml4a @ itp-nyu -- timelapse_crop.mp4", true, 0, 0, 1, 1)->setPositionRandom();
    s->loadAssets();
    
    s = slideshow.addSlide("guides, workshops, and code");
    s->addImage("rachel", "/Users/gene/bin/misc/workshops/opendot/30491978563_c7baa100d2_o.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/altai.JPG", 0.5, 0.0, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/influencers3.jpg", 0.0, 0.5, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/Web/genekogan.github.io/images/workshops/nabi2.jpg", 0.5, 0.5, 0.5, 0.48);
    
    
    s = slideshow.addSlide("thanks :)");
    s->addMovie("t-SNE convergence", "/Users/gene/bin/tsne/tsne_manual.mp4", true, 0, 0, 1, 1);
    s->addRect(ofColor(255,160), 0.005, 0.19, 0.33, 0.25);
    s->addRect(ofColor(255,160), 0.595, 0.19, 0.33, 0.25);
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
    
}



void ofApp::WorkshopCIIDCriticalIssues() {

    s = slideshow.addSlide("Who's afraid of the singularity?");
    s->addText(h2, ofColor(0), "\"Will robots inherit the earth? Yes, but they will be our children.\" - Marvin Minsky", 0.1, 0.1, 0.7);
    s->addMovie("millenium fx baby", "/Users/gene/bin/misc/stock/animatronic_baby.mp4", true, 0.1, 0.25, 0.8, 0.7);
    s->start();
    
    s = slideshow.addSlide("AGI is on people's minds?");
    s->addMovie("Seaquest", "/Users/gene/bin/misc/stock/Deep Q network learning to play Seaquest-5WXVJ1A0k6Q.mp4", true, 0, 0, 0.5, 0.5);
    s->addMovie("Pong", "/Users/gene/bin/misc/stock/Deep Q network learning to play Pong-60pwnLB0DqY.mp4", true, 0.5, 0.5, 0.5, 0.5);
    s->addMovie("Breakout", "/Users/gene/bin/misc/stock/Google DeepMind's Deep Q-learning playing Atari Breakout-V1eYniJ0Rnk.mp4", true, 0, 0.5, 0.5, 0.5);
    s->addMovie("Space Invaders", "/Users/gene/bin/misc/stock/Deep Q network playing Space Invaders-ZisFfiEdQ_E.mp4", true, 0.5, 0.0, 0.5, 0.5);
    
    s = slideshow.addSlide("Can machines think?");
    s->addImage("cmt 1", "/Users/gene/bin/misc/turing_cmt_1.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Can machines think?");
    s->addImage("cmt 1", "/Users/gene/bin/misc/turing_cmt_2.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Can machines think?");
    s->addText(h2, ofColor(0), "\"The question of whether a computer can think is no more interesting than the question of whether a submarine can swim.\" - Edsger Dijkstra", 0.1, 0.1, 0.7);
    
    s = slideshow.addSlide("Singularity concerns");
    s->addText(h2, ofColor(0), "\"Worrying about killer robots is like worrying about overpopulation on Mars\" - Andrew Ng", 0.05, 0.15, 0.75);
    s->addText(h2, ofColor(0), "\"Worrying about sentient AI as the ice caps melt is like standing on the tracks as the train rushes in, worrying about being hit by lightning\" - Bret Victor", 0.05, 0.35, 0.75);
    
    // about machine learning and ai
    s = slideshow.addSlide("AI Spring?");
    s->addImage("invest", "/Users/gene/bin/misc/stock/hype-investment.jpg", 0.1, 0.1, 0.8, 0.8);

	s = slideshow.addSlide("Backpropaganda");
 	s->addImage("invest", "/Users/gene/bin/misc/stock/hype-investment.jpg", 0.42, 0.0, 0.59, 0.7);
	s->addImage("invest", "/Users/gene/bin/misc/ilsvrc-top5.png", 0.0, 0.05, 0.4, 0.4);
	s->addImage("invest", "/Users/gene/bin/misc/ILSVRC-nvidia.png", 0.0, 0.55, 0.4, 0.4);
	s->addText(h3, ofColor(80), "\"Machine learning is a core, transformative way by which we’re rethinking everything we’re doing,\" - Sundar Pichai, Google CEO", 0.45, 0.7, 0.4);

    
    s = slideshow.addSlide("Critical issues in AI");
    s->addImage("napalm", "/Users/gene/bin/misc/stock/napalmgirl_censoredfb.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("drones", "/Users/gene/bin/misc/stock/trumpdrone.jpeg", 0.0, 0.5, 0.5, 0.5);
    s->addImage("pred policing", "/Users/gene/bin/misc/propublica-recidivism.png", 0.5, 0.5, 0.5, 0.5);
    s->addImage("flash crash", "/Users/gene/Pictures/Screenshots/flashcrash_tweet.png", 0.5, 0.0, 0.5, 0.5);
    
    s = slideshow.addSlide("Manufacturing mood");
    s->addImage("fb", "/Users/gene/bin/misc/stock/fbthumb.jpg", 0.0, 0.1, 0.5, 0.5);
    s->addText(h3, ofColor(0), "May 2016: suppress conservative news in trending bars", 0.5, 0.2, 0.4);
    s->addText(h3, ofColor(0), "June 2016: secret mood study in 2012 with 700k users", 0.5, 0.3, 0.4);
    s->addText(h3, ofColor(0), "\"We are a tech company, not a media company\" - Mark Zuckerberg", 0.5, 0.4, 0.4);
    s->addText(h3, ofColor(0), "44% of US adults get their news on Facebook (Pew, 2016)", 0.5, 0.5, 0.4);
    
    s = slideshow.addSlide("Algorithmic censorship");
    s->addImage("napalm", "/Users/gene/bin/misc/stock/napalmgirl.jpg", 0.1, 0.1, 0.55, 0.7);
    s->addText(h3, ofColor(0), "Facebook censoring Phan Th·ªã Kim Ph√∫c", 0.15, 0.81, 0.75);
    s->addText(h4, ofColor(0), "https://www.theguardian.com/technology/2016/sep/08/facebook-mark-zuckerberg-napalm-girl-photo-vietnam-war", 0.1, 0.94, 0.8);
    
    s = slideshow.addSlide("Selective advertising");
    s->addText(h3, ofColor(0), "CMU study: women shown fewer high paying job ads on Google", 0.15, 0.21, 0.75);
    s->addText(h3, ofColor(0), "AdFisher - 17k fake profiles", 0.15, 0.31, 0.75);
    s->addText(h3, ofColor(0), "We don't know why -- trade secret", 0.15, 0.41, 0.75);
    s->addText(h3, ofColor(0), "\"How would a woman know to apply for a job she never saw advertised? How might a black community learn that it were being overpoliced by software?\" - Kate Crawford", 0.15, 0.51, 0.75);
    s->addText(h4, ofColor(0), "http://www.cmu.edu/news/stories/archives/2015/july/online-ads-research.html", 0.15, 0.95, 0.75);
    
    s = slideshow.addSlide("Trailblazer");
    s->addImage("binney", "/Users/gene/bin/misc/stock/binney.jpg", 0.2, 0.1, 0.6, 0.6);
    s->addText(h2, ofColor(0), "\"It's better than anything that the KGB, the Stasi, or the Gestapo and SS ever had.\"", 0.05, 0.75, 0.75);

    s = slideshow.addSlide("Terror Tuesdays");
    s->addImage("napalm", "/Users/gene/bin/misc/stock/obama.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("obama terror fun", "/Users/gene/bin/misc/obama-terror.png", 0.5, 0.0, 0.5, 0.5);
    s->addImage("obama terror fun", "/Users/gene/bin/misc/stock/nsa-skynet-slide.jpg", 0.5, 0.5, 0.5, 0.5);
    s->addText(h2, ofColor(0), "NSA Skynet", 0.12, 0.6, 0.82);
    s->addText(h3, ofColor(0), "\"We kill people based on metadata\" - Michael Hayden", 0.02, 0.7, 0.45);
    s->addText(h3, ofColor(0), "\"If you torture the data long enough, it will confess\" - Ronald Coase", 0.02, 0.8, 0.45);
    s->addText(h4, ofColor(0), "https://www.theguardian.com/commentisfree/2016/feb/21/death-from-above-nia-csa-skynet-algorithm-drones-pakistan", 0.05, 0.9, 0.82);
    
    s = slideshow.addSlide("\"Can't we just drone this guy?\"");
    s->addImage("napalm", "/Users/gene/bin/misc/stock/clinton-drones.jpg", 0.0, 0.0, 0.6, 1.0);
    s->addImage("napalm", "/Users/gene/bin/misc/stock/clinton-drone-assange.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Predictive policing");
    s->addImage("pred policing", "/Users/gene/bin/misc/propublica-recidivism.png", 0.0, 0.0, 1.0, 0.7);
    s->addText(h2, ofColor(0), "ProPublica vs. Northpointe re: recidivism", 0.12, 0.75, 0.82);
    s->addText(h3, ofColor(0), "Vicious cycle: more arrests (to meet quotas) make algorithms favor poor areas more", 0.12, 0.82, 0.82);
    s->addText(h4, ofColor(0), "https://www.propublica.org/article/machine-bias-risk-assessments-in-criminal-sentencing", 0.05, 0.9, 0.82);
    
    s = slideshow.addSlide("Criminality prediction");
    s->addImage("phrenology 2", "/Users/gene/bin/misc/ai_phrenology.png", 0.0, 0.1, 0.5, 0.8);
    s->addImage("phrenology 1", "/Users/gene/bin/misc/ai_phrenology_2.png", 0.5, 0.1, 0.5, 0.8);
    s->addText(h3, ofColor(0), "Automated Inference on Criminality using Face Images, 2016\nhttps://arxiv.org/abs/1611.04135", 0.1, 0.0, 0.9);
    s->addText(h5, ofColor(0), "We find some discriminating structural features for predicting criminality, such as lip curvature, eye inner corner distance, and the so-called nose-mouth angle.", 0.02, 0.9, 0.45);
    
    s = slideshow.addSlide("L'uomo delinquente, Cesare Lombroso. 1878");
    s->addImage("l'homme criminel", "/Users/gene/bin/misc/lhommecriminel2.jpg", 0.0, 0.05, 0.5, 0.9);
    s->addImage("l'homme criminel", "/Users/gene/bin/misc/lhommecriminel.jpg", 0.5, 0.05, 0.5, 0.9);

    s = slideshow.addSlide("AP Hacking + Flash crash");
    s->addImage("flash crash", "/Users/gene/Pictures/Screenshots/flashcrash_tweet.png", 0.0, 0.0, 1.0, 0.5);
    s->addText(h3, ofColor(0), "S&P 500 temporarily lost $136B after the hack", 0.15, 0.6, 0.8);
    s->addText(h3, ofColor(0), "stock market algorithms are designed to undercut markets by anticipating and acting quickly to make risky transactions", 0.15, 0.7, 0.8);
    s->addText(h4, ofColor(0), "https://papers.ssrn.com/sol3/papers.cfm?abstract_id=2602857", 0.05, 0.9, 0.82);
    
    s = slideshow.addSlide("Alternatives");
    s->addText(h3, ofColor(0), "\"A social-systems approach could investigate, for instance, how the app AiCure ‚ which tracks patients' adherence to taking prescribed medication and transmits records to physicians ‚Äî is changing the doctor-patient relationship. Such an approach could also explore whether the use of historical data to predict where crimes will happen is driving overpolicing of marginalized communities. Or it could investigate why high-rolling investors are given the right to understand the financial decisions made on their behalf by humans and algorithms, whereas low-income loan seekers are often left to wonder why their requests have been rejected.\" - Kate Crawford, Ryan Calo\n\nhttp://www.nature.com/news/there-is-a-blind-spot-in-ai-research-1.20805", 0.02, 0.05, 0.82);
    
    s = slideshow.addSlide("AI Effect");
    s->addText(h3, ofColor(0), "\"Practical AI successes, computational programs that actually achieved intelligent behavior, were soon assimilated into whatever application domain they were found to be useful in, and became silent partners alongside other problem-solving approaches, which left AI researchers to deal only with the \"failures,\" the tough nuts that couldn't yet be cracked.\" - Pamela McCorduck", 0.05, 0.1, 0.85);
    s->addText(h3, ofColor(0), "\"This paradox resulted from the fact that whenever an AI research project made a useful new discovery, that product usually quickly spun off to form a new scientific or commercial specialty with its own distinctive name. These changes in name led outsiders to ask, Why do we see so little progress in the central field of artificial intelligence?\" - Marvin Minsky", 0.05, 0.5, 0.85);
    
    s = slideshow.addSlide("Self driving cars & Trolley problem (Philippa Foot)");
    s->addImage("trolley", "/Users/gene/bin/misc/stock/trolley.jpg", 0.2, 0.15, 0.6, 0.65);
    
    s = slideshow.addSlide("Animals are machines (Descartes)");
    s->addImage("descartes", "/Users/gene/bin/misc/stock/Descartes.jpg", 0.0, 0.0, 0.4, 1.0);
    s->addImage("duck", "/Users/gene/bin/misc/stock/Vaucanson-duck.jpg", 0.5, 0.45, 0.5, 0.5);
    s->addText(h2, ofColor(70), "\"But the greatest of all the prejudices we have retained from infancy is that of believing that brutes think\"\nRene Descartes, De homine (1662), Les passions de l'ame (1649)", 0.425, 0.1, 0.5);
    s->addText(h4, ofColor(50), "Vaucanson's Digesting Duck", 0.52, 0.95, 0.5);

    s = slideshow.addSlide("Animals are machines");
    s->addText(h4, ofColor(0), "home.cogeco.ca/~drheault/ee_readings/West/Descartes.pdf", 0.01, 0.01, 0.9);
    s->addMovie("aspca", "/Users/gene/bin/misc/stock/Robot Lives Matter (ASPCA Commercial).mp4", true, 0.1, 0.2, 0.8, 0.7);

}




