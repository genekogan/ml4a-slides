#include "ofApp.h"

void ofApp::NeuralNets(){
    s = slideshow.addSlide("Supervised and unsupervised learning");
    ClassifierDemo *cd = new ClassifierDemo(s, "classifier", 0.0, 0.1, 0.5, 0.5);
    RegressionDemo *rd = new RegressionDemo(s, "regression", 0.5, 0.0, 0.5, 0.5);
    ClusteringDemo *cld = new ClusteringDemo(s, "clustering", 0.4, 0.5, 0.5, 0.5);
    s->addAction(cd);
    s->addAction(rd);
    s->addAction(cld);
    s->addText(h3, ofColor(0), "Classification", 0.03, 0.0, 0.5);
    s->addText(h3, ofColor(0), "Regression", 0.7, 0.05, 0.3);
    s->addText(h3, ofColor(0), "Clustering", 0.22, 0.75, 0.28);
    
    // S) a linear classifier 1) rain, 2) e-mail spam
 
    /////////////////////////////////
    // neural networks
    
    s = slideshow.addSlide("Neural networks");
    s->addImage("neural net", "/Users/gene/bin/misc/stock/myoblast.jpg", 0, 0, 1, 1);
    s->addText(h3, ofColor(0,255,0), "(myoblasts not neurons, via Matt Kraushar)", 0.3, 0.1, 1.0);
    
    s = slideshow.addSlide("Actual neurons (via Matt Kraushar)");
    s->addImage("neural net", "/Users/gene/bin/misc/stock/beauty_IUEP CAG-GFP primary 20x.tif", 0, 0.1, 0.495, 0.9);
    s->addImage("neural net", "/Users/gene/bin/misc/stock/549 AcTubulin Hippocampal InVitro 60X 7.20.11.jpg", 0.505, 0.1, 0.495, 0.9);
    s->addText(h4, ofColor(0), "primary hippocampal neuron culture from mouse, anti-acetylated tubulin immunocytochemistry (2012)", 0.0, 0.01, 0.5);
    s->addText(h4, ofColor(0), "primary neocortical neuron culture from mouse after in utero electroporation with a fluorescent reporter plasmid (GFP), anti-GFP immunocytochemistry (2014)", 0.5, 0.01, 0.4);
    
    s = slideshow.addSlide("\"A calculus of the nervous system\"");
    s->addImage("ada", "/Users/gene/bin/misc/stock/ada_portrait.jpg", 0.0, 0.0, 0.33, 0.7);
    s->addText(h4, ofColor(0), "\"It were much to be desired, that when mathematical processes pass through the human brain instead of through the medium of inanimate mechanism, it were equally a necessity of things that the reasonings connected with operations should hold the same just place as a clear and well-defined branch of the subject of analysis, a fundamental but yet independent ingredient in the science, which they must do in studying the engine.\"  - Ada Lovelace", 0.4, 0.1, 0.5);
    s->addImage("bernoulli", "/Users/gene/bin/misc/stock/ada_bernoulli.jpg", 0.5, 0.5, 0.5, 0.5);
    s->addImage("analytical", "/Users/gene/bin/misc/stock/analytical_engine.jpg", 0.0, 0.65, 0.5, 0.35);
    
    s = slideshow.addSlide("Perceptrons");
    s->addImage("perceptrons top", "/Users/gene/bin/misc/stock/nytimes_perceptron_top.png", 0.0, 0.0, 1, 0.24);
    s->addImage("perceptrons", "/Users/gene/bin/misc/stock/nytimes_perceptron.png", 0.0, 0.24, 1, 0.76);
    //s->addText(h3, ofColor(0), "page 23 ->", 0.17, 0.5, 0.2);
    
    s = slideshow.addSlide("How to annoy a neuroscientist 101");
    s->addImage("neural net", "/Users/gene/bin/misc/stock/neuron_anatomy.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("neural net", "/Users/gene/bin/misc/stock/neuron-simple.jpg", 0.5, 0.3, 0.5, 0.5);
    s->addImage("neural net", "/Users/gene/bin/misc/stock/artificial_neuron.png", 0.0, 0.5, 0.5, 0.5);
    s->addText(h4, ofColor(0), "askabiologist.asu.edu/neuron-anatomy]", 0.0, 0.0, 0.5);
    s->addText(h4, ofColor(0), "aishack.in/tutorials/biological-neurons/]", 0.5, 0.3, 0.5);
    s->addText(h3, ofColor(0), "[Forward pass demo]", 0.0, 0.5, 0.5);
    
    // Demo) small forward pass demo
    
    s = slideshow.addSlide("Input MNIST into a neural net");
    s->addImage("MNIST", "/Users/gene/bin/misc/stock/mnist_unrolled.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("MNIST demo");
    s->addImage("MNIST", "/Users/gene/bin/misc/stock/mnist_demo.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("MNIST first layer weights");
    s->addImage("MNIST weights", "/Users/gene/bin/misc/stock/mnist_weights.png", 0, 0, 1, 1);
    
    // S) gradient descent + training (alec rad)
    
    /////////////////////////////////
    // wekinator
    
    s = slideshow.addSlide("Wekinator (wekinator.org)");
    s->addImage("wekinator", "/Users/gene/bin/misc/stock/wekinator.png", 0, 0, 0.5, 0.5);
    s->addMovie("faceosc + ableton", "/Users/gene/bin/misc/faceosc_ableton.mp4", true, 0.4, 0.4, 0.6, 0.6);
    s->addText(h3, ofColor(0), "Machine learning for musicians + artists", 0.5, 0.1, 0.5);
    s->addText(h3, ofColor(0), "by Rebecca Fiebrink, @Princeton->@Goldsmiths", 0.5, 0.2, 0.5);
    s->addText(h3, ofColor(0), "Osc interface for your favorite apps", 0.5, 0.3, 0.5);
}

void ofApp::FeedforwardNeuralNets(){
    s = slideshow.addSlide("MNIST demo");
    s->addImage("MNIST", "/Users/gene/bin/misc/stock/mnist_demo.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("MNIST first layer weights");
    s->addImage("MNIST weights", "/Users/gene/bin/misc/stock/mnist_weights.png", 0, 0, 1, 1);
    
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
    
    s = slideshow.addSlide("Visualizing convnets (Zeiler + Fergus 2013)");
    s->addScrollableImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf.png", 0.0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://arxiv.org/abs/1311.2901", 0.0, 0.01, 1);
    
    s = slideshow.addSlide("Which pixels affect the activations?");
    s->addImage("ZF activation strength", "/Users/gene/bin/misc/stock/activation_strength.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://arxiv.org/abs/1311.2901", 0.0, 0.01, 1);
    
    s = slideshow.addSlide("Deepdream");
    s->addImage("Ibis", "/Users/gene/bin/deepdream/paper/ibis.png", 0.0, 0.0, 1.0, 0.65);
    s->addImage("Deepdream prototypes", "/Users/gene/bin/deepdream/paper/Funny-Animals.png", 0.0, 0.66, 1.0, 0.33);
    s->addText(h4, ofColor(0), "googleresearch.blogspot.com/2015/06/inceptionism-going-deeper-into-neural.html]", 0.04, 0.0, 1.0);
    
    s = slideshow.addSlide("Style Transfer");
    s->addImage("Mona Lisa -> Cubist/Expressionist/Impressionist", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_cubist_expressionist_impressionist.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Stylenet theory");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/Stylenet_theory.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("t-SNE (Laurens van der Maaten + Geoff Hinton]");
    s->addImage("t-sne", "/Users/gene/bin/misc/stock/tsne.png", 0.0, 0.1, 1.0, 0.9);
    s->addText(h3, ofColor(0), "[http://www.cs.toronto.edu/~hinton/absps/tsne.pdf]", 0.2, 0.0, 0.8);
    
    slideshow.addSlide("t-SNE :: CalTech-256 animals")->addScrollableImage("t-SNE animals", "/Users/gene/bin/tsne/grid_animals2.png", 0, 0, 1, 1);
}

