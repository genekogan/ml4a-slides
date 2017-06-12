#include "ofApp.h"



void ofApp::NetzpolitischerAbend () {

    s = slideshow.addSlide("Machine Learning for Activists");
    s->addText(h3, ofColor(0), "Netzpolitischer Abend, C-Base, 2 Aug 2016", 0.0, 0.01, 0.9);
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
    
    s = slideshow.addSlide("Art <-> Activism?");
    s->addImage("neural net", "/Users/gene/bin/misc/stock/flow.png", 0.15, 0.15, 0.7, 0.7);
    
//    s = slideshow.addSlide("What is machine learning?");
//    s->addImage("neural net", "/Users/gene/bin/misc/stock/nytimes_perceptron.png", 0.0, 0.1, 0.45, 0.8);
//    s->addText(h3, ofColor(0), "\"Machine learning is applied computational statistics\" - Chris Wiggins", 0.5, 0.1, 0.33);
//    s->addText(h3, ofColor(0), "\"The question of whether a computer can think is no more interesting than the question of whether a submarine can swim.\" - Edsger Dijkstra", 0.5, 0.4, 0.33);

    s = slideshow.addSlide("Neural networks");
    s->addImage("neuron", "/Users/gene/bin/misc/stock/forwardPassDemo/fp_1.png", 0.1, 0.1, 0.8, 0.8);

    s = slideshow.addSlide("Training our neural network");
    s->addImage("mnist1", "/Users/gene/bin/misc/stock/mnist-forward-pass-1.png", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("mnist3", "/Users/gene/bin/misc/stock/mnist-forward-pass-3.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Training our neural network");
    s->addMovie("mnist", "/Users/gene/bin/misc/stock/mnist_weights_demo.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Convolution layers");
    s->addMovie("convolution", "/Users/gene/bin/misc/stock/convolution_demo.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "ml4a.github.io/dev/demos/demo_convolution.html", 0.1, 0.05, 1);

    s = slideshow.addSlide("CNN demo");
    CcvForwardPassDemo *ccvd = new CcvForwardPassDemo(s, "ccv", 0, 0, 1, 1);
    s->addAction(ccvd);
    
    // RETRIEVAL
    s = slideshow.addSlide("Reverse image search demo");
    
    
    s = slideshow.addSlide("t-SNE (Laurens van der Maaten + Geoff Hinton]");
    s->addImage("t-sne", "/Users/gene/bin/misc/stock/tsne.png", 0.0, 0.1, 1.0, 0.9);
    s->addText(h3, ofColor(0), "[http://www.cs.toronto.edu/~hinton/absps/tsne.pdf]", 0.2, 0.0, 0.8);
    
    s = slideshow.addSlide("convnet -> t-SNE");
    s->addScrollableImage("animal t-sne", "/Users/gene/bin/tsne/tsne-animals.png", 0.0, 0.0, 1.0, 1.0);
    
    s = slideshow.addSlide("Audio t-SNE");
    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0, 0, 1, 1);
    s->addAction(attd);

    s = slideshow.addSlide("Traditional natural language processing");
    s->addImage("NLP", "/Users/gene/bin/misc/stock/rnn/grammar_tree.png", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Word/phrase/doc embeddings");
    s->addImage("NLP", "/Users/gene/bin/misc/stock/analogies.png", 0.1, 0.0, 0.8, 0.5);
    s->addImage("NLP", "/Users/gene/bin/misc/stock/analogies2.png", 0.1, 0.6, 0.8, 0.5);

    s = slideshow.addSlide("wiki-t-SNE [www.genekogan.com/works/wiki-tSNE]");
    s->addScrollableImage("wiki t-SNE", "/Users/gene/bin/tsne/wiki-tSNE.png", 0.0, 0.09, 1.0, 0.9);
    
    // skip thoughts
    s = slideshow.addSlide("NLP applications");
    s->addText(h2, ofColor(0), "- language translation\n- question-answering (fact checking?)\n- anomaly detection\n- de-anonymization", 0.1, 0.25, 0.82);
    
    s = slideshow.addSlide("Recurrent Neural Networks");
    s->addText(h3, ofColor(0), "Feedforward neural net", 0.1, 0.0, 0.4);
    s->addText(h3, ofColor(0), "Recurrent neural net", 0.65, 0.0, 0.4);
    s->addImage("nn_simple", "/Users/gene/bin/misc/stock/rnn/nn_simple.png", 0.0, 0.1, 0.3333, 0.8);
    s->addImage("rnn_simple", "/Users/gene/bin/misc/stock/rnn/rnn_simple.png", 0.5, 0.1, 0.5, 0.8);

    s = slideshow.addSlide("Dense captioning (Li, Karpathy, Johnson)");
    s->addImage("densecap", "/Users/gene/bin/misc/stock/densecap2.png", 0, 0.06, 1, 0.94);
    s->addText(h4, ofColor(0), "http://cs.stanford.edu/people/karpathy/densecap/", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("Dense captioning Atlas, The Next Generation");
    s->addMovie("Attention", "/Users/gene/bin/densecap/atlas.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Dense captioning Pouff's grocery trip");
    s->addMovie("Attention", "/Users/gene/bin/densecap/deepdream_grocery.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Style transfer");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/monalisa.jpg", 0.0, 0.0, 0.5, 0.59);
    s->addImage("Starry night", "/Users/gene/bin/style-transfer/_inputs/starrynight.jpg", 0.0, 0.6, 0.5, 0.4);
    s->addMovie("ML starry night", "/Users/gene/bin/style-transfer/11_demo/ml_starrynight_iterations.mp4", true, 0.5, 0.02, 0.5, 0.96);

    s = slideshow.addSlide("Stylenet theory");
    s->addImage("st theory", "/Users/gene/bin/style-transfer/11_demo/theory_ml_starrynight_9.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Mona Lisa stylenets");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/hokusai.jpg", 0.0, 0.0, 0.33, 0.35);
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/tarsilo2.jpg", 0.335, 0.0, 0.33, 0.35);
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps.jpg", 0.67, 0.0, 0.33, 0.35);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_hokusai.jpg", 0.0, 0.36, 0.33, 0.64);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_tarsila.jpg", 0.335, 0.36, 0.33, 0.64);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps.jpg", 0.67, 0.36, 0.33, 0.64);
    
    s = slideshow.addSlide("Video style with optical flow loss term (Ruder et al, 2016)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("video style", "/Users/gene/bin/style-transfer/10_optical_flow/video-style-transfer-x4-reordered.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Synthesizing preffered inputs (Nguyen, Dosovitsky, Yosinski, Brox, Clune)");
    s->addScrollableImage("synthesis", "/Users/gene/bin/synthesizing/synthesizing-caffenet-tSNE.png", 0.0, 0.0, 1.0, 1.0);
    
    
    CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
    s = slideshow.addSlide("Cubist Mirror");
    s->addAction(cmd);

    
    // ml4a
    s = slideshow.addSlide("ml4a");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.2, 0.2, 0.6, 0.6);
}
    
