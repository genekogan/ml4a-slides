#include "ofApp.h"



void ofApp::NeuralAesthetic1() {
    
    s = slideshow.addSlide("The Neural Aesthetic");
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
    s->start();
    
    s = slideshow.addSlide("Policies ++ expectations");
    s->addImage("policies", "/Users/gene/bin/misc/policy.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Neural Aesthetic aspirations, Summer 2016");
    s->addImage("talks", "/Users/gene/bin/misc/genetalksclasstalks.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Tradeoffs");
    s->addText(h2, ofColor(0), "Theoretical vs. applied", 0.1, 0.1, 0.9);
    s->addText(h2, ofColor(0), "Fundamental vs. creative", 0.1, 0.3, 0.9);

    s = slideshow.addSlide("Seat of our pants");
    s->addImage("talks", "/Users/gene/bin/misc/eccentricities.png", 0, 0, 1, 1);

    s = slideshow.addSlide("ml4a");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.2, 0.2, 0.6, 0.6);
    
    s = slideshow.addSlide("Machine Learning for Artists @ ITP-NYU, Spring 2016");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("ml4a @ itp 1", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/01.mp4", true, 0, 0.01, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addMovie("ml4a @ itp 2", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/02.mp4", true, 1.01 / 3.0, 0.01, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addMovie("ml4a @ itp 3", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/03.mp4", true, 2.02 / 3.0, 0.01, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addMovie("ml4a @ itp 4", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/04.mp4", true, 0, 0.51, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addMovie("ml4a @ itp 5", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/05.mp4", true, 1.01 / 3.0, 0.51, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addMovie("ml4a @ itp 6", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/06.mp4", true, 2.02 / 3.0, 0.51, 0.98 / 3.0, 0.5)->setPositionRandom();
    s->addText(h4, ofColor(255), "3.24 introduction, neural networks", 0.0, 0.0, 1.0/3.0);
    s->addText(h4, ofColor(255), "3.31 wekinator + applications", 1.01/3.0, 0.0, 1.0/3.0);
    s->addText(h4, ofColor(255), "4.7 convolutional neural networks", 2.02/3.0, 0.0, 1.0/3.0);
    s->addText(h4, ofColor(255), "4.14 convnet applications", 0.0, 0.5, 1.0/3.0);
    s->addText(h4, ofColor(255), "4.21 recurrent neural networks", 1.01/3.0, 0.5, 1.0/3.0);
    s->addText(h4, ofColor(255), "4.28 game AI, reinforcement learning", 2.02/3.0, 0.5, 1.0/3.0);
    s->loadAssets();

    s = slideshow.addSlide("A very rough syllabus");
    s->addText(h2, ofColor(0), "Week 1: convolutional neural networks", 0.1, 0.15, 0.8);
    s->addText(h2, ofColor(0), "Week 2: wekinator + applications (++ Rebecca Fiebrink)", 0.1, 0.3, 0.8);
    s->addText(h2, ofColor(0), "Week 3: applications of deep neural nets", 0.1, 0.45, 0.8);
    s->addText(h2, ofColor(0), "Week 4: special topics + make-believe", 0.1, 0.6, 0.8);
    s->addText(h2, ofColor(0), "Guests: Samim Winiger, Memo Akten, ?", 0.1, 0.85, 0.8);

    s = slideshow.addSlide("Structure");
    s->addImage("structure", "/Users/gene/bin/misc/structure.png", 0, 0, 1, 1);

    s = slideshow.addSlide("Today ++ tomorrow");
    s->addText(h2, ofColor(0), "Today", 0.1, 0.1, 0.8);
    s->addText(h2, ofColor(0), " - Introductions", 0.1, 0.2, 0.8);
    s->addText(h2, ofColor(0), " - About the field", 0.1, 0.3, 0.8);
    s->addText(h2, ofColor(0), " - Artworks + hacks", 0.1, 0.4, 0.8);
    
    s->addText(h2, ofColor(0), "Tomorrow", 0.1, 0.6, 0.8);
    s->addText(h2, ofColor(0), " - Neural networks", 0.1, 0.7, 0.8);
    
    Background();

    /////////////////////////////////
    // What is machine learning
    
    // machine learning
    s = slideshow.addSlide("What is machine learning?");
    ClassifierDemo *cd = new ClassifierDemo(s, "classifier", 0.0, 0.1, 0.5, 0.5);
    RegressionDemo *rd = new RegressionDemo(s, "regression", 0.5, 0.0, 0.5, 0.5);
    ClusteringDemo *cld = new ClusteringDemo(s, "clustering", 0.4, 0.5, 0.5, 0.5);
    s->addAction(cd);
    s->addAction(rd);
    s->addAction(cld);
    s->addText(h3, ofColor(0), "Classification", 0.03, 0.0, 0.5);
    s->addText(h3, ofColor(0), "Regression", 0.7, 0.05, 0.3);
    s->addText(h3, ofColor(0), "Clustering", 0.22, 0.75, 0.28);
    
    s = slideshow.addSlide("Hype");
    s->addImage("perceptrons top", "/Users/gene/bin/misc/stock/nytimes_perceptron_top.png", 0.0, 0.0, 1, 0.24);
    s->addImage("perceptrons", "/Users/gene/bin/misc/stock/nytimes_perceptron.png", 0.0, 0.24, 1, 0.76);
    
    s = slideshow.addSlide("Can machines think?");
    s->addText(h2, ofColor(0), "\"The question of whether a computer can think is no more interesting than the question of whether a submarine can swim.\" - Edsger Dijkstra", 0.1, 0.1, 0.7);
    
    s = slideshow.addSlide("What are machine's objectives? (Hal, open the pod bay doors)");
    s->addMovie("faceosc + ableton", "/Users/gene/bin/misc/2001-- A Space Odyssey (HD) -- Best Scene with Hal and Dave -- 'Hal open the pod bay doors'-qDrDUmuUBTo.mp4", true, 0, 0, 1, 1);
    
    /////////////////////////////////
    // Gallery
    
    s = slideshow.addSlide("What can we do with neural nets?");
    s->addImage("wekinator", "/Users/gene/bin/misc/stock/wekinator.png", 0, 0, 0.5, 0.5);
    s->addMovie("faceosc + ableton", "/Users/gene/bin/misc/faceosc_ableton.mp4", true, 0.4, 0.4, 0.6, 0.6);
    s->addText(h3, ofColor(0), "Machine learning for musicians + artists", 0.5, 0.1, 0.5);
    s->addText(h3, ofColor(0), "by Rebecca Fiebrink, @Princeton->@Goldsmiths", 0.5, 0.2, 0.5);
    s->addText(h3, ofColor(0), "Osc interface for your favorite apps", 0.5, 0.3, 0.5);

    s = slideshow.addSlide("Deepdream: Jaaga");
    s->addImage("Jaaga", "/Users/gene/bin/deepdream/jaaga/_jaaga.jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("Jaaga", "/Users/gene/bin/deepdream/jaaga/jaaga_1_8_4_1.4(13).jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("Jaaga", "/Users/gene/bin/deepdream/jaaga/jaaga(2)__10_4_1.4(5).jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("Jaaga", "/Users/gene/bin/deepdream/jaaga/jaaga(2)__16_5_1.2(11).jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Deepzoom");
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_feedback/deepzoom.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Style Transfer");
    s->addImage("Mona Lisa -> Cubist/Expressionist/Impressionist", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_cubist_expressionist_impressionist.jpg", 0, 0, 1, 1);

    s = slideshow.addSlide("convnet -> t-SNE");
    s->addScrollableImage("animal t-sne", "/Users/gene/bin/tsne/tsne-animals.png", 0.0, 0.0, 1.0, 1.0);

    s = slideshow.addSlide("alt-AI");
    s->addMovie("alt-AI", "/Users/gene/bin/alt-ai/lisa-oculus-convnet.mp4", true, 0, 0, 0.5, 0.5);
    s->addMovie("alt-AI", "/Users/gene/bin/alt-ai/D90A8726.mp4", true, 0.5, 0, 0.5, 0.5);
    s->addMovie("alt-AI", "/Users/gene/bin/alt-ai/D90A8627.mp4", true, 0, 0.5, 0.5, 0.5);
    s->addMovie("alt-AI", "/Users/gene/bin/alt-ai/cubistmirror_v1.mp4", true, 0.5, 0.5, 0.5, 0.5);

    s = slideshow.addSlide("The samples never end (Jason Levine)");
    s->addMovie("jason", "/Users/gene/bin/misc/stock/altaivibez4.mp4", true, 0, 0, 1, 1)->setPositionRandom();
    
    s = slideshow.addSlide("Visualizing Neural Networks (Cassie Tarakajian)");
    s->addMovie("visualizing neural nets", "/Users/gene/bin/alt-ai/lisa-oculus-convnet.mp4", true, 0, 0, 1, 1);

    s = slideshow.addSlide("Terrapattern");
    s->addText(h4, ofColor(0), "Golan Levin, David Newberry, Kyle McDonald, Irene Alvarado, Aman Tiwari, Manzil Zaheer", 0.01, 0.01, 0.9);
    s->addImage("Terrapattern", "/Users/gene/bin/misc/stock/terrapattern.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("TransProse (Hannah Davis)");
    s->addMovie("transprose", "/Users/gene/bin/misc/TransProse - 2 Pieces-ItWLLzMislM.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://www.musicfromtext.com/", 0.01, 0.0, 0.99);

    s = slideshow.addSlide("Artificial Analog Neural Network (Phillip Stearns)");
    s->addMovie("aann", "/Users/gene/bin/alt-ai/aann.mp4", true, 0, 0, 1, 1);

    s = slideshow.addSlide("Doppelcam (Melanie Hoff + Dhruv Mehrotra)");
    s->addImage("doppelcam", "/Users/gene/Web/alt-AI/images/exhibit-melanie.jpg", 0, 0.15, 1, 0.85);
    s->addText(h4, ofColor(0), "https://doppel.camera", 0.01, 0.0, 0.99);

    s = slideshow.addSlide("Beta blockers (Chino Kim)");
    s->addMovie("beta blockers", "/Users/gene/bin/alt-ai/betablockers.mp4", true, 0, 0, 1, 1);

    s = slideshow.addSlide("Instagram mosaics (Marcela Nowak)");
    s->addImage("beta blockers", "/Users/gene/Web/alt-AI/images/exhibit-marcela.jpg", 0, 0, 1, 1);

    s = slideshow.addSlide("Assisted Visions (Lisa Kori)");
    s->addImage("assisted visions", "/Users/gene/Web/alt-AI/images/exhibit-lisa.jpg", 0, 0, 1, 1);

    s = slideshow.addSlide("Piano Die Hard (Corbin Ordel & Aaron Montoya-Moraga)");
    s->addImage("pdh", "/Users/gene/Web/alt-AI/images/exhibit-corbin.jpg", 0, 0, 0.7, 1);
    s->addMovie("pdh", "/Users/gene/bin/misc/stock/pianodiehard.mp4", true, 0.7, 0, 0.3, 1);

    s = slideshow.addSlide("Neural Recycle (Seth Kranzler)");
    s->addImage("assisted visions", "/Users/gene/Web/alt-AI/images/exhibit-seth.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Body Language (Nancy Nowacek, Morgan Hille-Refakis, David Sheinkopf, Caitlin Sikora, Gene Kogan)");
    s->addMovie("body language", "/Users/gene/bin/misc/morgan-gesture-classifier.mp4", true, 0, 0, 1, 1);

    s = slideshow.addSlide("Sebastian Zimmerhackl, Julie Peters, Julius Voigt (Marcel Schwittlick)");
    s->addMovie("marcel", "/Users/gene/bin/misc/marcel-altai.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Animal Parade (Mike Tyka)");
    s->addMovie("animal parade", "/Users/gene/bin/alt-ai/animal_morph1.mp4", true, 0, 0, 1, 1);

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

    s = slideshow.addSlide("Dense captioning Atlas, The Next Generation");
    s->addMovie("densecap", "/Users/gene/bin/densecap/atlas.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Dense captioning Deepdream");
    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream.mp4", true, 0, 0, 1, 1);

    s = slideshow.addSlide("RNN draws fake Kanji");
    s->addImage("kanji", "/Users/gene/bin/misc/stock/hardmaru_kanji.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://blog.otoro.net/2015/12/28/recurrent-net-dreams-up-fake-chinese-characters-in-vector-format-with-tensorflow/", 0.01, 0.9, 0.99);
}

/////////////////////////////////
// neural networks
void ofApp::NeuralAesthetic2() {
    
    s = slideshow.addSlide("Neural networks");
    s->addImage("neural net", "/Users/gene/bin/misc/stock/myoblast.jpg", 0, 0, 1, 1);
    s->addText(h3, ofColor(0,255,0), "(myoblasts not neurons, via Matt Kraushar)", 0.3, 0.1, 1.0);
    s->start();
    
    s = slideshow.addSlide("\"Visualizing neural nets\"-- brainbow by Katie Matho");
    s->addImage("neural net", "/Users/gene/bin/misc/stock/brainbow.jpg", 0, 0, 1, 1);

    s = slideshow.addSlide("How to annoy a neuroscientist 101");
    s->addImage("neural net", "/Users/gene/bin/misc/stock/neuron_anatomy.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("neural net", "/Users/gene/bin/misc/stock/neuron-simple.jpg", 0.5, 0.3, 0.5, 0.5);
    s->addImage("neural net", "/Users/gene/bin/misc/stock/artificial_neuron.png", 0.0, 0.5, 0.5, 0.5);
    s->addText(h4, ofColor(0), "askabiologist.asu.edu/neuron-anatomy]", 0.0, 0.0, 0.5);
    s->addText(h4, ofColor(0), "aishack.in/tutorials/biological-neurons/]", 0.5, 0.3, 0.5);
    s->addText(h3, ofColor(0), "artificial neuron", 0.0, 0.5, 0.5);

    s = slideshow.addSlide("\"A calculus of the nervous system\"");
    s->addImage("ada", "/Users/gene/bin/misc/stock/ada_portrait.jpg", 0.0, 0.0, 0.33, 0.7);
    s->addText(h4, ofColor(0), "\"It were much to be desired, that when mathematical processes pass through the human brain instead of through the medium of inanimate mechanism, it were equally a necessity of things that the reasonings connected with operations should hold the same just place as a clear and well-defined branch of the subject of analysis, a fundamental but yet independent ingredient in the science, which they must do in studying the engine.\"  - Ada Lovelace", 0.4, 0.1, 0.5);
    s->addImage("bernoulli", "/Users/gene/bin/misc/stock/ada_bernoulli.jpg", 0.5, 0.5, 0.5, 0.5);
    s->addImage("analytical", "/Users/gene/bin/misc/stock/analytical_engine.jpg", 0.0, 0.65, 0.5, 0.35);

    s = slideshow.addSlide("Actual neurons");
    s->addImage("neural net", "/Users/gene/bin/misc/stock/beauty_IUEP CAG-GFP primary 20x.tif", 0, 0.1, 1./3, 0.5);
    s->addImage("neural net", "/Users/gene/bin/misc/stock/549 AcTubulin Hippocampal InVitro 60X 7.20.11.jpg", 1./3, 0.1, 1./3, 0.5);
    s->addImage("neuron", "/Users/gene/bin/misc/virginia-brainporn.png", 2./3, 0.1, 1./3, 0.5);
    s->addText(h4, ofColor(0), "primary hippocampal neuron culture from mouse, anti-acetylated tubulin immunocytochemistry (2012) [by Matt Kraushar]", 0.0, 0.7, 1./3);
    s->addText(h4, ofColor(0), "primary neocortical neuron culture from mouse after in utero electroporation with a fluorescent reporter plasmid (GFP), anti-GFP immunocytochemistry (2014)", 1./3, 0.85, 1./3);
    s->addText(h4, ofColor(0), "GFAP + hippocampal astrocytes [by Virginia Gao]", 2./3, 0.7, 1./3);
    
    s = slideshow.addSlide("Perceptrons");
    s->addImage("perceptrons top", "/Users/gene/bin/misc/stock/nytimes_perceptron_top.png", 0.0, 0.0, 1, 0.24);
    s->addImage("perceptrons", "/Users/gene/bin/misc/stock/nytimes_perceptron.png", 0.0, 0.24, 1, 0.76);
    
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

    s = slideshow.addSlide("The big picture");
    s->addText(h4, ofColor(0), "Neural networks map one \"volume\" of information to another", 0.1, 0.1, 0.8);
    s->addText(h4, ofColor(0), "Simple use cases", 0.1, 0.2, 0.8);
    s->addText(h4, ofColor(0), " - Prediction / categorization", 0.1, 0.25, 0.8);
    s->addText(h4, ofColor(0), " - Compressing low-value information to high-value (unsupervised)", 0.1, 0.3, 0.8);
    s->addText(h4, ofColor(0), " - Mapping events + actions in media art", 0.1, 0.35, 0.8);
    s->addText(h4, ofColor(0), "More complex (later)", 0.1, 0.5, 0.8);
    s->addText(h4, ofColor(0), " - Encoding/decoding", 0.1, 0.55, 0.8);
    s->addText(h4, ofColor(0), " - Generative (small -> large)", 0.1, 0.6, 0.8);
    
    s = slideshow.addSlide("Create mappings between sensors and synthesis parameters");
    s->addImage("kinect", "/Users/gene/bin/misc/stock/kinect-skeleton.png", 0, 0, 0.3333, 0.3333);
    s->addImage("leap", "/Users/gene/bin/misc/stock/leap-hands.jpg", 0, 0.33333, 0.3333, 0.33333);
    s->addImage("face", "/Users/gene/bin/misc/stock/face-osc.png", 0, 0.66666, 0.3333, 0.33333);
    s->addImage("arrow", "/Users/gene/bin/misc/stock/arrow.png", 0.4, 0.4, 0.2, 0.3);
    s->addImage("leap", "/Users/gene/bin/misc/stock/ableton-params.png", 0.66666, 0.0, 0.3333, 0.5);
    s->addImage("leap", "/Users/gene/bin/images/vjing/vj_160.jpg", 0.66666, 0.5, 0.3333, 0.5);
    
    s = slideshow.addSlide("Wekinator (wekinator.org)");
    s->addImage("wekinator", "/Users/gene/bin/misc/stock/wekinator.png", 0, 0, 0.5, 0.5);
    s->addMovie("faceosc + ableton", "/Users/gene/bin/misc/faceosc_ableton.mp4", true, 0.4, 0.4, 0.6, 0.6);
    s->addText(h3, ofColor(0), "Machine learning for musicians + artists", 0.5, 0.1, 0.5);
    s->addText(h3, ofColor(0), "by Rebecca Fiebrink, @Princeton->@Goldsmiths", 0.5, 0.2, 0.5);
    s->addText(h3, ofColor(0), "Osc interface for your favorite apps", 0.5, 0.3, 0.5);

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
    
    ///////////////////////////////
    // VISUALIZATION
    
    s = slideshow.addSlide("Which pixels affect the activations?");
    s->addImage("ZF activation strength", "/Users/gene/bin/misc/stock/activation_strength.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://arxiv.org/abs/1311.2901", 0.0, 0.01, 1);

    s = slideshow.addSlide("Convnet Occlusion Demo");
    CcvOcclusionDemo *ccvod = new CcvOcclusionDemo(s, "ccv occlusion demo", 0, 0, 1, 1);
    s->addAction(ccvod);

    s = slideshow.addSlide("Visualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]");
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l1.png", 0.0, 0.1, 1, 0.8);
    s->addText(h3, ofColor(0), "Image patches which respond most to filters", 0.2, 0.0, 1.0);
    
    s = slideshow.addSlide("Visualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]");
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l2.png", 0.0, 0.0, 0.5, 1);
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l3.png", 0.5, 0.0, 0.5, 1);
    s->addText(h3, ofColor(0), "Image patches which respond most to filters", 0.2, 0.0, 1.0);
    
    s = slideshow.addSlide("Deepdream: Leonardo Da Vinci");
    s->addImage("Da Vinci", "/Users/gene/bin/deepdream/painters/_davinci.jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("Da Vinci", "/Users/gene/bin/deepdream/painters/davinci_drawing(0)0002_i5_o8_os1.1_j32.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Class visualization");
    s->addImage("Deepdream classvis", "/Users/gene/bin/deepdream/paper/classvis.png", 0.0, 0.05, 1, 0.42);
    s->addImage("classvis", "/Users/gene/bin/misc/stock/class-synthesis-deepgen.png", 0.0, 0.5, 1, 0.5);
    s->addText(h4, ofColor(0), "Going deeper with Inceptionism (Mordvintsev, Olah, Tyka)", 0.2, 0.0, 1.0);
    //    s->addText(h4, ofColor(0), "googleresearch.blogspot.com/2015/06/inceptionism-going-deeper-into-neural.html]", 0.2, 0.1, 1.0);
    s->addText(h4, ofColor(0), "Nguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.15, 0.48, 1.0);
    
    s = slideshow.addSlide("Deep visualization (Yosinski, Clune)");
    s->addScrollableImage("deep vis", "/Users/gene/bin/misc/stock/deepvis.png", 0, 0.1, 1, 0.9);
    s->addText(h4, ofColor(0), "http://arxiv.org/pdf/1602.03616.pdf", 0.0, 0, 1);

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

    s = slideshow.addSlide("Deepdream noise");
    s->addImage("Tyka noisedream 1", "/Users/gene/bin/deepdream/paper/building-dreams1.png", 0.0, 0.0, 0.5, 1.0);
    s->addImage("Tyka noisedream 2", "/Users/gene/bin/deepdream/paper/building-dreams2.png", 0.5, 0.0, 0.5, 1.0);
    s->addText(h3, ofColor(0), "Mike Tyka [mtyka.github.io]", 0.15, 0.0, 1.0);

    s = slideshow.addSlide("Deepzoom");
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_feedback/deepzoom.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Oscillating which layer to enhance");
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_content/deeptrain2.mp4", true, 0.0, 0.0, 0.6, 0.35);
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_prototypes/testOtherl4_1.mp4", true, 0.0, 0.35, 0.5, 0.65);
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_prototypes/makeMid_blur_2a_imovie.mp4", true, 0.4, 0.0, 0.6, 0.6);
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_feedback/theFrame7.mov", true, 0.5, 0.5, 0.5, 0.5);
    
    slideshow.addSlide("Make it stop")->addImage("cappucinno", "/Users/gene/bin/deepdream/cappucinno/composite_cappucinno2a.png", 0.05, 0.05, 0.9, 0.9);
    
    
    //////////////////////////
    // STYLE TRANSFER
    
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
    
    s = slideshow.addSlide("Mona Lisa x Hokusai");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/hokusai.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_hokusai.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Devajyoti Ray");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/devajyoti.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_devajyoti.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Tarsila");
    s->addImage("Mona Lisa", "/Users/gene/bin/_bin/style-transfer/_inputs/tarsilo2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_tarsila.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Roy Liechtenstein");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/liechtenstein.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_liechtenstein.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Wu Guangzhou (2)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/wu4.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_wu4.jpg", 0.6, 0.0, 0.4, 1.0);
    
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
    
    s = slideshow.addSlide("Mona Lisa x Rosetta Stone (1)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/rosetta1.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_rosetta1_cw12_1000.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x TV Broadcast Signal Intrusion");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/tvnoise.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_tvnoise.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Why is a Raven like a Writing Desk?");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("AliceNet", "/Users/gene/bin/style-transfer/04_alice/Alice-Stylenet.mov", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Mr. Div x Gustav Klimt");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("Mr. Div x Gustav Klimt", "/Users/gene/bin/style-transfer/05_interpolations/klimt-discoball/klimt-discoball.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Picasso x Picasso");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("Picasso periods", "/Users/gene/bin/style-transfer/05_interpolations/picasso-periods/picasso-periods.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Video style with optical flow loss term (Ruder et al, 2016)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("video style", "/Users/gene/bin/style-transfer/10_optical_flow/video-style-transfer-x4-reordered.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Just style (google maps)");
    s->addImage("deep-texture", "/Users/gene/bin/_bin/style-transfer/_inputs/maps.jpg", 0, 0, 0.6, 0.6);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/maps1.jpg", 0.4, 0.4, 0.6, 0.6);
    
    s = slideshow.addSlide("Just style (google maps)");
    s->addImage("deep-texture", "/Users/gene/bin/_bin/style-transfer/_inputs/maps.jpg", 0, 0, 0.6, 0.6);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/maps2.jpg", 0.4, 0.4, 0.6, 0.6);
    
    CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
    s = slideshow.addSlide("Cubist Mirror");
    s->addAction(cmd);
}

/////////////////////////////////
// t-SNE
void ofApp::NeuralAesthetic3() {
    // review convnets
    s = slideshow.addSlide("Who's afraid of the singularity?");
    s->addText(h2, ofColor(0), "\"Will robots inherit the earth? Yes, but they will be our children.\" - Marvin Minsky", 0.1, 0.1, 0.7);
    s->addMovie("millenium fx baby", "/Users/gene/bin/misc/stock/animatronic_baby.mp4", true, 0.1, 0.25, 0.8, 0.7);
    
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
    
    s = slideshow.addSlide("Classifying handwritten numbers");
    s->addImage("mnist", "/Users/gene/bin/misc/mnist-net.png", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("The big picture");
    s->addText(h4, ofColor(0), "Neural networks map one \"volume\" of information to another", 0.1, 0.1, 0.8);
    s->addText(h4, ofColor(0), "Simple use cases", 0.1, 0.2, 0.8);
    s->addText(h4, ofColor(0), " - Prediction / categorization", 0.1, 0.25, 0.8);
    s->addText(h4, ofColor(0), " - Compressing low-value information to high-value (unsupervised)", 0.1, 0.3, 0.8);
    s->addText(h4, ofColor(0), " - Mapping events + actions in media art", 0.1, 0.35, 0.8);
    s->addText(h4, ofColor(0), "More complex (later)", 0.1, 0.5, 0.8);
    s->addText(h4, ofColor(0), " - Encoding/decoding", 0.1, 0.55, 0.8);
    s->addText(h4, ofColor(0), " - Generative (small -> large)", 0.1, 0.6, 0.8);
    
    s = slideshow.addSlide("Create mappings between sensors and synthesis parameters");
    s->addImage("kinect", "/Users/gene/bin/misc/stock/kinect-skeleton.png", 0, 0, 0.3333, 0.3333);
    s->addImage("leap", "/Users/gene/bin/misc/stock/leap-hands.jpg", 0, 0.33333, 0.3333, 0.33333);
    s->addImage("face", "/Users/gene/bin/misc/stock/face-osc.png", 0, 0.66666, 0.3333, 0.33333);
    s->addImage("arrow", "/Users/gene/bin/misc/stock/arrow.png", 0.4, 0.4, 0.2, 0.3);
    s->addImage("leap", "/Users/gene/bin/misc/stock/ableton-params.png", 0.66666, 0.0, 0.3333, 0.5);
    s->addImage("leap", "/Users/gene/bin/images/vjing/vj_160.jpg", 0.66666, 0.5, 0.3333, 0.5);
    
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
    
    s = slideshow.addSlide("Convolution layers");
    s->addText(h4, ofColor(0), "ml4a.github.io/dev/demos/demo_convolution_all.html", 0.1, 0.05, 1);
    s->addImage("convolution", "/Users/gene/bin/misc/stock/convolution_demo_all_1.png", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("convolution", "/Users/gene/bin/misc/stock/convolution_demo_all_2.png", 0, 0, 1, 1);

    s = slideshow.addSlide("Confusion matrix");
    s->addImage("wig2", "/Users/gene/bin/misc/stock/cifar_confusion.png", 0.0, 0.05, 1, 0.95);
    s->addText(h4, ofColor(0), "ml4a.github.io/dev/demos/cifar_confusion.html", 0.0, 0.01, 1);
    
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
    
    s = slideshow.addSlide("Stylenet convergence");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/monalisa.jpg", 0.0, 0.0, 0.5, 0.59);
    s->addImage("Starry night", "/Users/gene/bin/_bin/style-transfer/_inputs/starrynight.jpg", 0.0, 0.6, 0.5, 0.4);
    s->addMovie("ML starry night", "/Users/gene/bin/style-transfer/11_demo/ml_starrynight_iterations.mp4", true, 0.5, 0.02, 0.5, 0.96);
    
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
    
    CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
    s = slideshow.addSlide("Cubist Mirror");
    s->addAction(cmd);
    
    s = slideshow.addSlide("Autoencoders");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder_net.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Smile vectors");
    s->addImage("gene_vrae", "/Users/gene/bin/misc/stock/gene_vrae.jpg", 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(0), "by tom white (@dribnet)", 0.2, 0.91, 0.6);

    s = slideshow.addSlide("Recurrent Neural Networks");
    s->addText(h3, ofColor(0), "Feedforward neural net", 0.1, 0.0, 0.4);
    s->addText(h3, ofColor(0), "Recurrent neural net", 0.65, 0.0, 0.4);
    s->addImage("nn_simple", "/Users/gene/bin/misc/stock/rnn/nn_simple.png", 0.0, 0.1, 0.3333, 0.8);
    s->addImage("rnn_complex", "/Users/gene/bin/misc/stock/rnn/rnn_complex.png", 0.5, 0.1, 0.5, 0.8);
    s->addBreakpoint();
    s->addImage("rnn_simple", "/Users/gene/bin/misc/stock/rnn/rnn_simple.png", 0.5, 0.1, 0.5, 0.8);

    s = slideshow.addSlide("char-rnn / torch-rnn -> Deep Drumpf + Sunspring");
    s->addImage("deepdrumpf", "/Users/gene/bin/misc/stock/rnn/deepdrumpf_t0.png", 0.0, 0.0, 0.6, 0.6);
    s->addImage("helloworld", "/Users/gene/bin/misc/stock/rnn/sunspring.jpg", 0.4, 0.4, 0.6, 0.6);
    
    
    //////////////////////////
    // T-SNE
    
    s = slideshow.addSlide("t-SNE (Laurens van der Maaten + Geoff Hinton]");
    s->addImage("t-sne", "/Users/gene/bin/misc/stock/tsne.png", 0.0, 0.1, 1.0, 0.9);
    s->addText(h3, ofColor(0), "[http://www.cs.toronto.edu/~hinton/absps/tsne.pdf]", 0.2, 0.0, 0.8);
    
    s = slideshow.addSlide("t-SNE reduces data dimensions");
    s->addImage("t-sne", "/Users/gene/bin/misc/stock/dataset.png", 0.0, 0.15, 1.0, 0.8);
    s->addText(h2, ofColor(0), "i.e. convert to 2 or 3 columns\nwith same interpoint distances", 0.1, 0, 0.9);
    
    s = slideshow.addSlide("convnet -> t-SNE");
    s->addScrollableImage("animal t-sne", "/Users/gene/bin/tsne/tsne-animals.png", 0.0, 0.0, 1.0, 1.0);
    
    s = slideshow.addSlide("www.genekogan.com/works/wiki-tSNE");
    s->addScrollableImage("wiki t-SNE", "/Users/gene/bin/tsne/wiki-tSNE.png", 0.0, 0.09, 1.0, 0.9);
    
    s = slideshow.addSlide("Audio t-SNE");
    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0, 0, 1, 1);
    s->addAction(attd);
    
    s = slideshow.addSlide("t-SNE colors converging in 2d");
    s->addMovie("t-SNE convergence", "/Users/gene/Downloads/imgs/tsne_manual.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("reassign t-SNE to grid");
    s->addMovie("grid mario", "/Users/gene/bin/misc/stock/assignment_rasterfairy.mp4", true, 0, 0.05, 0.5, 0.95);
    s->addMovie("grid kyle", "/Users/gene/bin/misc/stock/assignment_ofx.mp4", true, 0.5, 0.05, 0.5, 0.95);
    s->addText(h3, ofColor(0), "RasterFairy (Mario Klingemann)", 0.05, 0, 0.45);
    s->addText(h3, ofColor(0), "ofxAssignment (Kyle McDonald)", 0.55, 0, 0.45);
    
    slideshow.addSlide("t-SNE :: CalTech-256 animals")->addScrollableImage("t-SNE animals", "/Users/gene/bin/tsne/grid_animals2.png", 0, 0, 1, 1);
    slideshow.addSlide("t-SNE :: Flowers")->addScrollableImage("t-SNE flowers", "/Users/gene/bin/tsne/grid_flowers.png", 0, 0, 1, 1);
    slideshow.addSlide("t-SNE :: Ikea catalog (by Golan Levin + Aman Tiwari)")->addScrollableImage("t-SNE ikea", "/Users/gene/bin/tsne/contributions/ikea_golan_aman.jpg", 0, 0, 1, 1);
    slideshow.addSlide("t-SNE :: Bogota bricks (by Olivia Jack)")->addScrollableImage("t-SNE bogota", "/Users/gene/bin/tsne/contributions/bogota-brick-p50.png", 0, 0, 1, 1);
    slideshow.addSlide("t-SNE :: Impressionist paintings (by Moritz Stefaner)")->addScrollableImage("t-SNE impressionism", "/Users/gene/bin/tsne/contributions/impressionism_moritz.jpg", 0, 0, 1, 1);
    slideshow.addSlide("t-SNE :: Sattelite images (by Zach Lieberman)")->addScrollableImage("t-SNE sattelite images", "/Users/gene/bin/tsne/contributions/sattelite_images_zach.png", 0, 0, 1, 1);
    slideshow.addSlide("t-SNE :: 10k grocery store items (by Blair Neal)")->addScrollableImage("t-SNE grocery store", "/Users/gene/bin/tsne/contributions/grocery_blair.png", 0, 0, 1, 1);
    slideshow.addSlide("t-SNE :: CalTech-256 (30k items!)")->addScrollableImage("t-SNE grocery store", "/Users/gene/bin/tsne/grid_caltech256_small.png", 0, 0, 1, 1);
    
}

void ofApp::NeuralAestheticMisc() {

    /////////////////////////////////////////////////////////
    /// GENERATIVE MODELS + ABFTS
    
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
    

    ////////////////////////////////////
    // RECURRENT NEURAL NETS
    
    s = slideshow.addSlide("Recurrent Neural Networks");
    s->addText(h3, ofColor(0), "Feedforward neural net", 0.1, 0.0, 0.4);
    s->addText(h3, ofColor(0), "Recurrent neural net", 0.65, 0.0, 0.4);
    s->addImage("nn_simple", "/Users/gene/bin/misc/stock/rnn/nn_simple.png", 0.0, 0.1, 0.3333, 0.8);
    s->addImage("rnn_complex", "/Users/gene/bin/misc/stock/rnn/rnn_complex.png", 0.5, 0.1, 0.5, 0.8);
    s->addBreakpoint();
    s->addImage("rnn_simple", "/Users/gene/bin/misc/stock/rnn/rnn_simple.png", 0.5, 0.1, 0.5, 0.8);
    
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
    
    s = slideshow.addSlide("LSTM Sci-fi assistant (Robin Sloan)");
    s->addMovie("LSTM helper", "/Users/gene/bin/misc/stock/robinsloan-lstm-author.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "https://twitter.com/robinsloan/status/725068953383362560", 0.01, 0.0, 0.99);
    
    s = slideshow.addSlide("Benjamin (Ross Goodwin)");
    s->addImage("LSTM helper", "/Users/gene/bin/misc/stock/benjamin_rossgoodwin.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://rossgoodwin.com/wordsynth/", 0.01, 0.0, 0.99);
    
    s = slideshow.addSlide("Sunspring");
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=LY7x2Ihqjmc", 0.01, 0.0, 0.99);
    s->addImage("sunspring", "/Users/gene/bin/misc/stock/rnn/sunspring.jpg", 0, 0.07, 1, 0.93);

    s = slideshow.addSlide("RNN (unit to sequence)");
    s->addImage("RNN unit2seq", "/Users/gene/bin/misc/stock/rnn/rnn_unit_seq.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Image captioning (Li, Karpathy)");
    s->addImage("captioning", "/Users/gene/bin/misc/stock/rnn/captioning-architecture.png", 0.5, 0.0, 0.5, 0.5);
    s->addImage("captioning", "/Users/gene/bin/misc/stock/rnn/captioning-visual-semantic-alignment.png", 0, 0.5, 1, 0.5);
    s->addText(h3, ofColor(0), "+ localization for each predicted word", 0.01, 0.4, 0.5);
    s->addText(h4, ofColor(0), "http://cs.stanford.edu/people/karpathy/deepimagesent/", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("Image captioning (Li, Karpathy)");
    s->addImage("captioning", "/Users/gene/bin/misc/stock/rnn/captioning-examples.png", 0, 0.06, 1, 0.94);
    s->addText(h4, ofColor(0), "http://cs.stanford.edu/people/karpathy/deepimagesent/", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("Dense captioning (Li, Karpathy, Johnson)");
    s->addImage("densecap", "/Users/gene/bin/misc/stock/rnn/densecap.png", 0, 0.06, 1, 0.94);
    s->addText(h4, ofColor(0), "http://cs.stanford.edu/people/karpathy/densecap/", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("Dense captioning (Li, Karpathy, Johnson)");
    s->addImage("densecap", "/Users/gene/bin/misc/stock/rnn/densecap.png", 0, 0.06, 1, 0.94);
    s->addText(h4, ofColor(0), "http://cs.stanford.edu/people/karpathy/densecap/", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("Dense captioning Atlas, The Next Generation");
    s->addMovie("Attention", "/Users/gene/bin/densecap/atlas.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Dense captioning Deepdream");
    s->addMovie("Attention", "/Users/gene/bin/densecap/deepdream.mp4", true, 0, 0, 1, 1);

    s = slideshow.addSlide("Dense captioning Pouff's Grocery Trip");
    s->addMovie("Attention", "/Users/gene/bin/densecap/deepdream_grocery.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("RNN (sequence to unit)");
    s->addImage("RNN seq2unit", "/Users/gene/bin/misc/stock/rnn/rnn_seq_unit.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Generating images from captions (Mansimov et al)");
    s->addImage("attention", "/Users/gene/bin/misc/stock/rnn/caption_to_image.png", 0, 0, 1, 0.5);
    s->addImage("attention", "/Users/gene/bin/misc/stock/rnn/caption_to_image_architecture.png", 0, 0.5, 1, 0.5);
    s->addText(h4, ofColor(0), "http://arxiv.org/abs/1511.02793", 0.01, 0.0, 0.99);
    
    s = slideshow.addSlide("RNN (sequence to sequence, synced)");
    s->addImage("RNN seq2seq synced", "/Users/gene/bin/misc/stock/rnn/rnn_seq_seq_sync.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("RNN draws fake Kanji");
    s->addImage("kanji", "/Users/gene/bin/misc/stock/hardmaru_kanji.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://blog.otoro.net/2015/12/28/recurrent-net-dreams-up-fake-chinese-characters-in-vector-format-with-tensorflow/", 0.01, 0.9, 0.99);
    
    
    ////////////////////////////////////
    // REINFORCEMENT LEARNING
    
    s = slideshow.addSlide("Reinforcement learning");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/reinforcement-learning2.jpg", 0.1, 0.1, 0.8, 0.8);

    s = slideshow.addSlide("Applications of reinforcement learning");
    s->addImage("dog", "/Users/gene/bin/misc/stock/ai_dog.jpg", 0.0, 0.0, 0.5, 0.4);
    s->addImage("robot", "/Users/gene/bin/misc/stock/robotics_rl.png", 0.0, 0.5, 0.5, 0.6);
    s->addText(h4, ofColor(0), "http://robotics.naist.jp/~akihiko-y/researches.php", 0.1, 0.0, 0.9);
    s->addText(h2, ofColor(0), "Robotics\nOperations management\nFinance\nGames", 0.52, 0.2, 0.5);

    s = slideshow.addSlide("Lee Se-dol");
    s->addText(h3, ofColor(0), "I will do my best to play a beautiful and interesting game.", 0.05, 0.4, 0.95);
    
    s = slideshow.addSlide("Reinforcement learning + Atari games");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/reinforcement_learning.png", 0, 0.05, 1, 0.95);
    s->addText(h4, ofColor(0), "http://www.iclr.cc/lib/exe/fetch.php?media=iclr2015:silver-iclr2015.pdf", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Learning to play Atari Games");
    s->addMovie("Seaquest", "/Users/gene/bin/misc/stock/Deep Q network learning to play Seaquest-5WXVJ1A0k6Q.mp4", true, 0, 0, 0.5, 0.5);
    s->addMovie("Pong", "/Users/gene/bin/misc/stock/Deep Q network learning to play Pong-60pwnLB0DqY.mp4", true, 0.5, 0.5, 0.5, 0.5);
    s->addMovie("Breakout", "/Users/gene/bin/misc/stock/Google DeepMind's Deep Q-learning playing Atari Breakout-V1eYniJ0Rnk.mp4", true, 0, 0.5, 0.5, 0.5);
    s->addMovie("Space Invaders", "/Users/gene/bin/misc/stock/Deep Q network playing Space Invaders-ZisFfiEdQ_E.mp4", true, 0.5, 0.0, 0.5, 0.5);
    
    s = slideshow.addSlide("Deep Q Learning + Breakout");
    s->addMovie("MCTS", "/Users/gene/bin/misc/stock/Google DeepMind's Deep Q-learning playing Atari Breakout-V1eYniJ0Rnk.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=V1eYniJ0Rnk", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Convnets to the rescue");
    s->addImage("joystick + convnet", "/Users/gene/bin/misc/stock/joystick_convnet.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://home.uchicago.edu/~arij/journalclub/papers/2015_Mnih_et_al.pdf", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Deep Blue vs. Gary Kasparov (1996-97)");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/kasparov.jpg", 0, 0, 0.7, 0.5);
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/kasparov-facepalm.jpg", 0, 0.51, 0.7, 0.48);
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/deep-blue-rack.jpg", 0.7, 0, 0.3, 1);
    
    s = slideshow.addSlide("Chess game tree + score (1)");
    s->addImage("Chess game tree", "/Users/gene/bin/misc/stock/chess-tree2.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "https://kevinbinz.com/2015/02/28/the-chess-supertree/", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("AlphaGo vs. Lee Se-dol");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/alphago-vs-leesedol.jpg", 0, 0.3, 0.8, 0.7);
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/leesedol.jpg", 0.5, 0.0, 0.5, 0.5);
    
    s = slideshow.addSlide("Go rules");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/Go.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Why is Go hard??");
    s->addText(h2, ofColor(0), "tic-tac-toe boards: 765", 0.2, 0.1, 0.8);
    s->addText(h2, ofColor(0), "planck times since big bang: 10^62", 0.2, 0.17, 0.8);
    s->addText(h2, ofColor(0), "atoms in universe: 10^80", 0.2, 0.24, 0.8);
    s->addText(h2, ofColor(0), "chess boards: 10^120", 0.2, 0.31, 0.8);
    s->addText(h2, ofColor(0), "go boards: 10^760", 0.2, 0.38, 0.8);
    s->addImage("gostates", "/Users/gene/bin/misc/stock/alphagogamestates.jpg", 0.4, 0.47, 0.6, 0.5);
    
    s = slideshow.addSlide("It gets harder");
    s->addImage("doom", "/Users/gene/bin/misc/stock/doom.jpg", 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(0), "http://thenewstack.io/google-ai-beats-human-champion-complex-game-ever-invented/", 0.1, 0.0, 0.9);

    
    ///////////////////////////////
    // AUTOENCODERS + RNNs
    
    s = slideshow.addSlide("Generative models");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder.png", 0, 0.0, 0.4, 0.5);
    s->addImage("DCGAN", "/Users/gene/bin/misc/stock/lsun_bedrooms_five_epochs_interps.png", 0.4, 0.0, 0.62, 1);
    s->addText(h4, ofColor(0), "world's most expensive identity function", 0.025, 0.4, 0.3);
    s->addText(h4, ofColor(0), "Deep convolutional generative adversarial networks", 0.1, 0.75, 0.3);
    s->addText(h4, ofColor(0), "Radford, Metz, Chintala [arxiv.org/abs/1511.06434]", 0.1, 0.85, 0.3);
    
    s = slideshow.addSlide("Autoencoders");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder_net.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Recurrent Neural Networks");
    s->addText(h3, ofColor(0), "Feedforward neural net", 0.1, 0.0, 0.4);
    s->addText(h3, ofColor(0), "Recurrent neural net", 0.65, 0.0, 0.4);
    s->addImage("nn_simple", "/Users/gene/bin/misc/stock/rnn/nn_simple.png", 0.0, 0.1, 0.3333, 0.8);
    s->addImage("rnn_complex", "/Users/gene/bin/misc/stock/rnn/rnn_complex.png", 0.5, 0.1, 0.5, 0.8);
    s->addBreakpoint();
    s->addImage("rnn_simple", "/Users/gene/bin/misc/stock/rnn/rnn_simple.png", 0.5, 0.1, 0.5, 0.8);
    
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

}

//////////////////////////
// critical
void ofApp::NeuralAesthetic4() {
    s = slideshow.addSlide("Who's afraid of the singularity?");
    s->addText(h2, ofColor(0), "\"Will robots inherit the earth? Yes, but they will be our children.\" - Marvin Minsky", 0.1, 0.1, 0.7);
    s->addMovie("millenium fx baby", "/Users/gene/bin/misc/stock/animatronic_baby.mp4", true, 0.1, 0.25, 0.8, 0.7);
    s->start();
    
    s = slideshow.addSlide("Trolley problem (Philippa Foot)");
    s->addImage("trolley", "/Users/gene/bin/misc/stock/trolley.jpg", 0.2, 0.15, 0.6, 0.65);

    s = slideshow.addSlide("Trolley problem variatons (via Nick Hubbard)");
    s->addImage("trolley", "/Users/gene/bin/misc/stock/trolley_variant.png", 0, 0, 1, 1);

    s = slideshow.addSlide("Animals are machines (Descartes)");
    s->addText(h4, ofColor(0), "home.cogeco.ca/~drheault/ee_readings/West/Descartes.pdf", 0.01, 0.01, 0.9);
    s->addMovie("aspca", "/Users/gene/bin/misc/stock/Robot Lives Matter (ASPCA Commercial).mp4", true, 0.1, 0.2, 0.8, 0.7);
}


void ofApp::NeuralAesthetic5() {
    
    s = slideshow.addSlide("Create mappings between sensors and synthesis parameters");
    s->addImage("kinect", "/Users/gene/bin/misc/stock/kinect-skeleton.png", 0, 0, 0.3333, 0.3333);
    s->addImage("leap", "/Users/gene/bin/misc/stock/leap-hands.jpg", 0, 0.33333, 0.3333, 0.33333);
    s->addImage("face", "/Users/gene/bin/misc/stock/face-osc.png", 0, 0.66666, 0.3333, 0.33333);
    s->addImage("arrow", "/Users/gene/bin/misc/stock/arrow.png", 0.4, 0.4, 0.2, 0.3);
    s->addImage("leap", "/Users/gene/bin/misc/stock/ableton-params.png", 0.66666, 0.0, 0.3333, 0.5);
    s->addImage("leap", "/Users/gene/bin/images/vjing/vj_160.jpg", 0.66666, 0.5, 0.3333, 0.5);
    s->start();
    
    s = slideshow.addSlide("Wekinator (wekinator.org)");
    s->addImage("wekinator", "/Users/gene/bin/misc/stock/wekinator.png", 0, 0, 0.5, 0.5);
    s->addMovie("faceosc + ableton", "/Users/gene/bin/misc/faceosc_ableton.mp4", true, 0.4, 0.4, 0.6, 0.6);
    s->addText(h3, ofColor(0), "Machine learning for musicians + artists", 0.5, 0.1, 0.5);
    s->addText(h3, ofColor(0), "by Rebecca Fiebrink, @Princeton->@Goldsmiths", 0.5, 0.2, 0.5);
    s->addText(h3, ofColor(0), "Osc interface for your favorite apps", 0.5, 0.3, 0.5);

    s = slideshow.addSlide("The big picture");
    s->addText(h4, ofColor(0), "Neural networks map one \"volume\" of information to another", 0.1, 0.1, 0.8);
    s->addText(h4, ofColor(0), "Simple use cases", 0.1, 0.2, 0.8);
    s->addText(h4, ofColor(0), " - Prediction / categorization", 0.1, 0.25, 0.8);
    s->addText(h4, ofColor(0), " - Compressing low-value information to high-value (unsupervised)", 0.1, 0.3, 0.8);
    s->addText(h4, ofColor(0), " - Mapping events + actions in media art", 0.1, 0.35, 0.8);
    s->addText(h4, ofColor(0), "Deep learning (tomorrow)", 0.1, 0.5, 0.8);
    s->addText(h4, ofColor(0), " - Encoding/decoding", 0.1, 0.55, 0.8);
    s->addText(h4, ofColor(0), " - Generative (small -> large)", 0.1, 0.6, 0.8);
    
    s = slideshow.addSlide("Mapping");
    ClassifierDemo *cd = new ClassifierDemo(s, "classifier", 0.0, 0.0, 0.55, 0.6);
    RegressionDemo *rd = new RegressionDemo(s, "regression", 0.45, 0.3, 0.58, 0.7);
    s->addAction(cd);
    s->addAction(rd);
    
    s = slideshow.addSlide("Mapping volumes");
    s->addImage("volumes", "/Users/gene/bin/misc/stock/cnn_volumes.jpg", 0.0, 0.0, 1.0, 1.0);
    s->addText(h4, ofColor(0), "http://cs231n.stanford.edu/slides/winter1516_lecture2.pdf", 0.1, 0.05, 1);

    s = slideshow.addSlide("Inputs");
    s->addImage("kinect", "/Users/gene/bin/misc/stock/kinect-skeleton.png", 0, 0, 0.3333, 0.45);
    s->addImage("leap", "/Users/gene/bin/misc/stock/leap-hands.jpg", 1./3, 0, 0.3333, 0.45);
    s->addImage("face", "/Users/gene/bin/misc/stock/face-osc.png", 2./3, 0, 0.3333, 0.45);
    s->addImage("face", "/Users/gene/bin/misc/stock/mfcc.png", 0, 0.5, 0.3333, 0.45);
    s->addMovie("convnetosc", "/Users/gene/bin/misc/wekinator-coffee-croissant.mp4", true, 1./3, 0.5, 0.3333, 0.45);
    s->addText(h3, ofColor(0), "{openframeworks, processing, max, arduino}->osc\n - stock market data?\n - twitter hashtags?\n - the weather?\n - eye tracker?", 2.1/3, 0.5, 0.3);

    s = slideshow.addSlide("Ouptuts");
    s->addImage("leap", "/Users/gene/bin/misc/stock/ableton-params.png", 0.0, 0.2, 0.3333, 0.55);
    s->addImage("leap", "/Users/gene/bin/images/vjing/vj_160.jpg", 0.3333, 0.2, 0.3333, 0.55);
    s->addImage("leap", "/Users/gene/bin/misc/stock/aalto.png", 0.66666, 0.2, 0.3333, 0.55);

    s = slideshow.addSlide("Transfer learning");
    s->addMovie("convnetosc", "/Users/gene/bin/misc/wekinator-coffee-croissant.mp4", true, 0, 0, 1, 1);
}

void ofApp::NeuralAesthetic6() {
    
    // alphago
    
    s = slideshow.addSlide("Convolutional neural networks");
    s->addImage("lenet", "/Users/gene/bin/misc/stock/lenet.png", 0, 0, 1, 0.4);
    s->addMovie("lenet demo", "/Users/gene/bin/misc/stock/lenet_demo.mp4", true, 0, 0.4, 1, 0.6);
    s->addText(h3, ofColor(0), "Lenet (LeCun et al, 1998) [http://yann.lecun.com/exdb/lenet/]", 0, 0.4, 1);
    s->start();
    
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
    
    s = slideshow.addSlide("Difficulties with images");
    s->addImage("CIFAR cats", "/Users/gene/bin/misc/stock/cifar-cats.png", 0.0, 0.02, 1, 0.48);
    s->addImage("CIFAR-10 linear classifier", "/Users/gene/bin/misc/stock/cifar_weights_linclassifier_cs231n.png", 0.0, 0.52, 1.0, 0.25);
    s->addText(h4, ofColor(0), "CIFAR-10 linear classifier [ cs231n.stanford.edu/slides/winter1516_lecture2.pdf ]", 0.10, 0.8, 1);

    s = slideshow.addSlide("Convolution layers");
    s->addMovie("convolution", "/Users/gene/bin/misc/stock/convolution_demo.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "ml4a.github.io/dev/demos/demo_convolution.html", 0.1, 0.05, 1);
    
    s = slideshow.addSlide("Convolution layers");
    s->addText(h4, ofColor(0), "ml4a.github.io/dev/demos/demo_convolution_all.html", 0.1, 0.05, 1);
    s->addImage("convolution", "/Users/gene/bin/misc/stock/convolution_demo_all_1.png", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("convolution", "/Users/gene/bin/misc/stock/convolution_demo_all_2.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Pooling layers");
    s->addImage("pooling", "/Users/gene/bin/misc/stock/cnn_pool.jpg", 0.0, 0.2, 0.5, 0.7);
    s->addImage("Max-pooling", "/Users/gene/bin/misc/stock/cnn_maxpool.jpg", 0.5, 0.2, 0.5, 0.7);
    s->addText(h4, ofColor(0), "http://cs231n.github.io/convolutional-networks/", 0.1, 0.01, 0.99);
    
    s = slideshow.addSlide("CNN demo");
    CcvForwardPassDemo *ccvd = new CcvForwardPassDemo(s, "ccv", 0, 0, 1, 1);
    s->addAction(ccvd);
    
    s = slideshow.addSlide("Volumes");
    s->addImage("volumes", "/Users/gene/bin/misc/stock/cnn_volumes.jpg", 0.0, 0.0, 1.0, 1.0);
    s->addText(h4, ofColor(0), "http://cs231n.stanford.edu/slides/winter1516_lecture2.pdf", 0.1, 0.05, 1);

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

    s = slideshow.addSlide("Activations are valuable");
    s->addMovie("convnetosc", "/Users/gene/bin/misc/wekinator-coffee-croissant.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("t-SNE (Laurens van der Maaten + Geoff Hinton]");
    s->addImage("t-sne", "/Users/gene/bin/misc/stock/tsne.png", 0.0, 0.1, 1.0, 0.9);
    s->addText(h3, ofColor(0), "[http://www.cs.toronto.edu/~hinton/absps/tsne.pdf]", 0.2, 0.0, 0.8);
    
    s = slideshow.addSlide("convnet -> t-SNE");
    s->addScrollableImage("animal t-sne", "/Users/gene/bin/tsne/tsne-animals.png", 0.0, 0.0, 1.0, 1.0);

    slideshow.addSlide("t-SNE :: CalTech-256 animals")->addScrollableImage("t-SNE animals", "/Users/gene/bin/tsne/grid_animals2.png", 0, 0, 1, 1);
    slideshow.addSlide("t-SNE :: Flowers")->addScrollableImage("t-SNE flowers", "/Users/gene/bin/tsne/grid_flowers.png", 0, 0, 1, 1);
    slideshow.addSlide("t-SNE :: Ikea catalog (by Golan Levin + Aman Tiwari)")->addScrollableImage("t-SNE ikea", "/Users/gene/bin/tsne/contributions/ikea_golan_aman.jpg", 0, 0, 1, 1);

    
    // DEEPDREAM
    
    s = slideshow.addSlide("\"Image generated by a convolutional neural network\"");
    s->addImage("reddit deepdream post", "/Users/gene/bin/deepdream/reddit.png", 0.0, 0.1, 0.7, 1);
    s->addImage("reddit image", "/Users/gene/bin/_bin/deepdream/_slugs.jpg", 0.45, 0, 0.55, 0.4);
    s->addText(h3, ofColor(0), "Mysteriously posted to /r/MachineLearning on June 16, 2015", 0.00, 0.0, 0.38);
    
    //    http://www.evolvingai.org/content/ai-neuroscience-understanding
    
    s = slideshow.addSlide("Class visualization");
    s->addImage("Deepdream classvis", "/Users/gene/bin/deepdream/paper/classvis.png", 0.0, 0.05, 1, 0.42);
    s->addImage("classvis", "/Users/gene/bin/misc/stock/class-synthesis-deepgen.png", 0.0, 0.5, 1, 0.5);
    s->addText(h4, ofColor(0), "Going deeper with Inceptionism (Mordvintsev, Olah, Tyka)", 0.2, 0.0, 1.0);
    //    s->addText(h4, ofColor(0), "googleresearch.blogspot.com/2015/06/inceptionism-going-deeper-into-neural.html]", 0.2, 0.1, 1.0);
    s->addText(h4, ofColor(0), "Nguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.15, 0.48, 1.0);
    
    s = slideshow.addSlide("Deep visualization (Yosinski, Clune)");
    s->addScrollableImage("deep vis", "/Users/gene/bin/misc/stock/deepvis.png", 0, 0.1, 1, 0.9);
    s->addText(h4, ofColor(0), "http://arxiv.org/pdf/1602.03616.pdf", 0.0, 0, 1);

    s = slideshow.addSlide("Deepdream");
    s->addImage("Ibis", "/Users/gene/bin/deepdream/paper/ibis.png", 0.0, 0.0, 1.0, 0.65);
    s->addImage("Deepdream prototypes", "/Users/gene/bin/deepdream/paper/Funny-Animals.png", 0.0, 0.66, 1.0, 0.33);
    s->addText(h4, ofColor(0), "googleresearch.blogspot.com/2015/06/inceptionism-going-deeper-into-neural.html]", 0.04, 0.0, 1.0);
    
    s = slideshow.addSlide("Deepdream noise");
    s->addImage("Tyka noisedream 1", "/Users/gene/bin/deepdream/paper/building-dreams1.png", 0.0, 0.0, 0.5, 1.0);
    s->addImage("Tyka noisedream 2", "/Users/gene/bin/deepdream/paper/building-dreams2.png", 0.5, 0.0, 0.5, 1.0);
    s->addText(h3, ofColor(0), "Mike Tyka [mtyka.github.io]", 0.15, 0.0, 1.0);
    
    s = slideshow.addSlide("Deepdream: Edvard Munch");
    s->addImage("Munch", "/Users/gene/bin/deepdream/painters/_scream.jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("Munch", "/Users/gene/bin/deepdream/painters/scream_0029_i10_o4_os1.4_j32.png", 0, 0, 1, 1);
    
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
    
    s = slideshow.addSlide("Classvis by Mike Tyka (leatherback turtle)");
    s->addImage("tyka", "/Users/gene/bin/misc/stock/mtyka_deepdream1_leatherbackturtles.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Classvis by Mike Tyka (pelican)");
    s->addImage("tyka", "/Users/gene/bin/misc/stock/mtyka_deepdream_pelican.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Animal Parade (Mike Tyka)");
    s->addMovie("animal parade", "/Users/gene/bin/alt-ai/animal_morph1.mp4", true, 0, 0, 1, 1);

    //slideshow.addSlide("Make it stop")->addImage("cappucinno", "/Users/gene/bin/deepdream/cappucinno/composite_cappucinno2a.png", 0.05, 0.05, 0.9, 0.9);
    
    // STYLE TRANSFER
    
    s = slideshow.addSlide("A neural algorithm of artistic style");
    s->addScrollableImage("arxiv style paper", "/Users/gene/bin/style-transfer/00_paper/arxiv_page.png", 0.0, 0.3, 0.45, 0.7);
    s->addScrollableImage("gatys et al", "/Users/gene/bin/style-transfer/00_paper/figure1.png", 0.5, 0.0, 0.5, 1.0);
    s->addText(h3, ofColor(0), "Gatys, Ecker, Bethge", 0.01, 0.04, 0.48);
    s->addText(h3, ofColor(0), "published Aug 26, 2015", 0.01, 0.12, 0.48);
    s->addText(h3, ofColor(0), "[arxiv.org/abs/1508.06576]", 0.01, 0.2, 0.48);
    
    s = slideshow.addSlide("Style Transfer");
    s->addImage("Mona Lisa -> Cubist/Expressionist/Impressionist", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_cubist_expressionist_impressionist.jpg", 0, 0, 1, 1);
    
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
    
    s = slideshow.addSlide("Mona Lisa x Manjit Bawa");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/bawa.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_bawa.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Hokusai");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/hokusai.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_hokusai.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Raja Ravi Varma");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/rajaravivarma.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_rajaravivarma.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Tarsila");
    s->addImage("Mona Lisa", "/Users/gene/bin/_bin/style-transfer/_inputs/tarsilo2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_tarsila.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Roy Liechtenstein");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/liechtenstein.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_liechtenstein.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Wu Guangzhou (1)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/wu2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_wu2.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Wu Guangzhou (2)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/wu4.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_wu4.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Nii Hylton");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/hylton.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_hylton.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Wassily Kandinsky");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/kandinsky2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_kandinsky2.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Sol Lewitt");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/sol1.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_sol1.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x F.N. Souza");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/souza3.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_souza3.jpg", 0.6, 0.0, 0.4, 1.0);
    
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
    
    s = slideshow.addSlide("Mona Lisa x QR Code");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/qrcode.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_qrcode.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Rosetta Stone (1)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/rosetta1.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_rosetta1_cw12_1000.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Rosetta Stone (2)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/rosetta1.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_rosetta1_cw50.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Rosetta Stone (3)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/rosetta1.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_rosetta1.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Rosetta Stone (4)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/rosetta2.png", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_rosetta2_sw5e3.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Rosetta Stone (5)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/rosetta2.png", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_rosetta2.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Ryoji Ikeda");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/ryoji3.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_ryoji3.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x TV Broadcast Signal Intrusion");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/tvnoise.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_tvnoise.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Tree x Hokusai");
    s->addScrollableImage("Tree Hokusai", "/Users/gene/bin/style-transfer/07_hires/tree_hokusai.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Tree x Arabic Calligraphy");
    s->addScrollableImage("Tree calligraphy", "/Users/gene/bin/style-transfer/07_hires/tree_calligraphy2_2.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Stylenet feedback loop");
    s->addMovie("Styledust", "/Users/gene/bin/style-transfer/05_interpolations/styledust.mp4", true, 0, 0, 1, 1);

    s = slideshow.addSlide("Just style (Persian style)");
    s->addImage("deep-texture", "/Users/gene/bin/_bin/style-transfer/_inputs/persian.jpg", 0, 0, 0.6, 0.6);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/persian.jpg", 0.4, 0.4, 0.6, 0.6);

    s = slideshow.addSlide("Just style (Basquiat)");
    s->addImage("deep-texture", "/Users/gene/bin/_bin/style-transfer/_inputs/basquiat2.jpg", 0, 0, 0.6, 0.6);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/basquiat.jpg", 0.4, 0.4, 0.6, 0.6);

    s = slideshow.addSlide("Just style (google maps)");
    s->addImage("deep-texture", "/Users/gene/bin/_bin/style-transfer/_inputs/maps.jpg", 0, 0, 0.6, 0.6);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/maps1.jpg", 0.4, 0.4, 0.6, 0.6);

    s = slideshow.addSlide("Just style (google maps)");
    s->addImage("deep-texture", "/Users/gene/bin/_bin/style-transfer/_inputs/maps.jpg", 0, 0, 0.6, 0.6);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/maps2.jpg", 0.4, 0.4, 0.6, 0.6);

    s = slideshow.addSlide("Just style (google maps)");
    s->addImage("deep-texture", "/Users/gene/bin/_bin/style-transfer/_inputs/maps.jpg", 0, 0, 0.6, 0.6);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/maps3.jpg", 0.4, 0.4, 0.6, 0.6);

    s = slideshow.addSlide("Just style (Crab nebula)");
    s->addImage("deep-texture", "/Users/gene/bin/_bin/style-transfer/_inputs/crab.jpg", 0, 0, 0.6, 0.6);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/crab.jpg", 0.4, 0.4, 0.6, 0.6);

    s = slideshow.addSlide("Just style (Hieroglyphs)");
    s->addImage("deep-texture", "/Users/gene/bin/_bin/style-transfer/_inputs/egypt.jpg", 0, 0, 0.6, 0.6);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/egypt.jpg", 0.4, 0.4, 0.6, 0.6);

    s = slideshow.addSlide("Just style (Hokusai)");
    s->addImage("deep-texture", "/Users/gene/bin/_bin/style-transfer/_inputs/hokusai.jpg", 0, 0, 0.6, 0.6);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/hokusai.jpg", 0.4, 0.4, 0.6, 0.6);

    s = slideshow.addSlide("Just style (Kandinsky)");
    s->addImage("deep-texture", "/Users/gene/bin/_bin/style-transfer/_inputs/kandinsky2.jpg", 0, 0, 0.6, 0.6);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/kandinsky.jpg", 0.4, 0.4, 0.6, 0.6);
    
    s = slideshow.addSlide("Mr. Div x Gustav Klimt");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("Mr. Div x Gustav Klimt", "/Users/gene/bin/style-transfer/05_interpolations/klimt-discoball/klimt-discoball.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Picasso x Picasso");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("Picasso periods", "/Users/gene/bin/style-transfer/05_interpolations/picasso-periods/picasso-periods.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Video style with optical flow loss term (Ruder et al, 2016)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("video style", "/Users/gene/bin/style-transfer/10_optical_flow/video-style-transfer-x4-reordered.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(255), "https://github.com/manuelruder/artistic-videos", 0.1, 0.0, 0.8);

    // STYLE TRANSFER SPECIAL CASES
    CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
    s = slideshow.addSlide("Cubist Mirror");
    s->addAction(cmd);

    s = slideshow.addSlide("Colorless style transfer");
    s->addImage("colorless st", "/Users/gene/bin/misc/colorization/colorless-style-transfer.png", 0, 0.1, 1, 0.9);
    s->addText(h4, ofColor(0), "http://arxiv.org/abs/1606.05897v1", 0.1, 0.0, 0.8);

    // IMAGE TO IMAGE
    
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
    
    s = slideshow.addSlide("Stylit");
    s->addMovie("Stylit", "/Users/gene/bin/misc/stock/stylit.mp4", true, 0, 0.1, 1, 0.9);
    s->addText(h4, ofColor(0), "http://dcgi.fel.cvut.cz/home/sykorad/stylit", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("Colorization");
    s->addImage("Colorization", "/Users/gene/Learn/siggraph2016_colorization/example_results.png", 0, 0.1, 1, 0.9);
    s->addText(h4, ofColor(0), "http://hi.cs.waseda.ac.jp/~iizuka/projects/colorization/en/", 0.1, 0.0, 0.8);

    s = slideshow.addSlide("Coloring baby photos");
    s->addImage("Colorization", "/Users/gene/bin/misc/colorization/colorize-gene-original.jpg", 0, 0, 0.5, 1);
    s->addImage("Colorization", "/Users/gene/bin/misc/colorization/colorize-gene.png", 0.5, 0, 0.5, 1);
    
    s = slideshow.addSlide("Deep convolutional generative adversarial network");
    s->addImage("Mona Lisa", "/Users/gene/bin/misc/stock/lsun_bedrooms_five_epoch_samples.png", 0.0, 0.2, 1.0, 0.8);
    s->addText(h4, ofColor(0), "Alec Radford, Luke Metz, Soumith Chintala", 0.1, 0.11, 0.8);
    s->addText(h4, ofColor(0), "arxiv.org/abs/1511.06434]", 0.1, 0.05, 0.8);
    s->addText(h4, ofColor(0), "these bedrooms aren't real", 0.1, 0.95, 0.8);
    
    s = slideshow.addSlide("Deep convolutional generative adversarial network");
    s->addImage("Mona Lisa", "/Users/gene/bin/misc/stock/lsun_bedrooms_five_epochs_interps.png", 0, 0, 1, 1);

    s = slideshow.addSlide("A Book from the Sky");
    s->addMovie("zloops", "/Users/gene/bin/dcgan/summary/zloops.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Character interpolations");
    s->addMovie("interplations", "/Users/gene/bin/dcgan/public/interpolations_3.mp4", true, 0.2, 0.15, 0.6, 0.6);

    s = slideshow.addSlide("Interpolating numbers");
    s->addMovie("MNIST interpolations", "/Users/gene/bin/dcgan/summary/digits.mov", true, 0.2, 0.1, 0.6, 0.6);
    
    s = slideshow.addSlide("DCGAN flowers");
    s->addImage("flowers", "/Users/gene/bin/dcgan/public/07_flowers.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://twitter.com/vintermann/status/675599478494208000", 0, 0, 1);
    
    s = slideshow.addSlide("DCGAN Manga");
    s->addImage("manga 1", "/Users/gene/bin/dcgan/public/07_manga_sample1.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://github.com/mattya/chainer-DCGAN", 0, 0, 1);
    
    s = slideshow.addSlide("DCGAN Manga interpolations");
    s->addImage("manga 2", "/Users/gene/bin/dcgan/public/07_manga_sample2.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://github.com/mattya/chainer-DCGAN", 0, 0, 1);
    
}

void ofApp::NeuralAesthetic7() {
    s = slideshow.addSlide("Recurrent Neural Networks");
    s->addText(h3, ofColor(0), "Feedforward neural net", 0.1, 0.0, 0.4);
    s->addText(h3, ofColor(0), "Recurrent neural net", 0.65, 0.0, 0.4);
    s->addImage("nn_simple", "/Users/gene/bin/misc/stock/rnn/nn_simple.png", 0.0, 0.1, 0.3333, 0.8);
    s->addImage("rnn_simple", "/Users/gene/bin/misc/stock/rnn/rnn_simple.png", 0.5, 0.1, 0.5, 0.8);
    s->start();
    
    // FEEDFORWARD VS RECURRENT
    s = slideshow.addSlide("Feedforward Neural Networks");
    s->addImage("nn_multilayer", "/Users/gene/bin/misc/stock/rnn/multilayer_feedforward.png", 0.0, 0.0, 0.65, 0.5);
    s->addImage("nn_lenet", "/Users/gene/bin/misc/stock/lenet.png", 0.0, 0.5, 0.65, 0.5);
    s->addImage("nn_simple", "/Users/gene/bin/misc/stock/rnn/nn_simple.png", 0.66, 0.0, 0.34, 0.7);
    s->addText(h3, ofColor(0), "Training optimizes prediction/association\nFixed inputs & outputs\nInternally static\nActivations can be useful", 0.7, 0.7, 0.3);
    
    s = slideshow.addSlide("Recurrent Neural Networks");
    s->addText(h3, ofColor(0), "Feedforward neural net", 0.1, 0.0, 0.4);
    s->addText(h3, ofColor(0), "Recurrent neural net", 0.65, 0.0, 0.4);
    s->addImage("nn_simple", "/Users/gene/bin/misc/stock/rnn/nn_simple.png", 0.0, 0.1, 0.3333, 0.8);
    s->addImage("rnn_complex", "/Users/gene/bin/misc/stock/rnn/rnn_simple.png", 0.5, 0.1, 0.5, 0.8);
    s->addBreakpoint();
    s->addImage("rnn_simple", "/Users/gene/bin/misc/stock/rnn/rnn_complex.png", 0.5, 0.1, 0.5, 0.8);
    
    s = slideshow.addSlide("RNN sequence");
    s->addText(h3, ofColor(0), "Property: not commutative,\nso we can train it on sequenced {x,y}", 0.7, 0.2, 0.3);
    s->addImage("rnn_1", "/Users/gene/bin/misc/stock/rnn/rnn_stacked_1.png", 0.05, 0.1, 0.6, 0.8);
    s->addBreakpoint();
    s->addImage("rnn_2", "/Users/gene/bin/misc/stock/rnn/rnn_stacked_2.png", 0.05, 0.1, 0.6, 0.8);
    s->addBreakpoint();
    s->addImage("rnn_3", "/Users/gene/bin/misc/stock/rnn/rnn_stacked_3.png", 0.05, 0.1, 0.6, 0.8);
    s->addBreakpoint();
    s->addImage("rnn_4", "/Users/gene/bin/misc/stock/rnn/rnn_stacked_4.png", 0.05, 0.1, 0.6, 0.8);
    
    s = slideshow.addSlide("RNN trained on hello world");
    for (int i=0; i<10; i++){
        s->addImage("helloworld_"+ofToString(i), "/Users/gene/bin/misc/stock/rnn/rnn_text_hw_"+ofToString(i)+".png", 0, 0, 1, 1);
        s->addBreakpoint();
    }
    
    s = slideshow.addSlide("Sequences of text");
    s->addImage("helloworld", "/Users/gene/bin/misc/stock/rnn/rnn_stacked_helloworld.png", 0, 0.2, 1, 0.8);
    s->addText(h3, ofColor(0), "Training on 'hello world'", 0.1, 0.05, 0.9);
    s->addText(h3, ofColor(0), "Can sample text from the RNN!", 0.1, 0.15, 0.9);
    
    s = slideshow.addSlide("LSTM (Hochreiter and Schmidhuber)");
    s->addImage("LSTM", "/Users/gene/bin/misc/stock/rnn/LSTM.png", 0, 0, 1, 1);
    
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
    
    s = slideshow.addSlide("TED-rnn (Samim)");
    s->addImage("lexiconjure", "/Users/gene/bin/misc/stock/rnn/ted-rnn.png", 0, 0.05, 1, 0.95);
    s->addText(h4, ofColor(0), "https://medium.com/@samim/ted-rnn-machine-generated-ted-talks-3dd682b894c0#.2g8iufb8j", 0.01, 0.0, 0.99);

    s = slideshow.addSlide("Deep Drumpf");
    s->addImage("helloworld", "/Users/gene/bin/misc/stock/rnn/deepdrumpf.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Deep Drumpf");
    s->addImage("helloworld", "/Users/gene/bin/misc/stock/rnn/deepdrumpf_t0.png", 0.2, 0.1, 0.6, 0.8);
    s = slideshow.addSlide("Deep Drumpf");
    s->addImage("helloworld", "/Users/gene/bin/misc/stock/rnn/deepdrumpf_t1.png", 0.2, 0.1, 0.6, 0.8);
    
    s = slideshow.addSlide("From:kogan.gene@gmail.com");
    s->addImage("gmail lstm", "/Users/gene/bin/text-learning/results/gmail.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("War and Peace (Tolstoy)");
    s->addImage("war and peace lstm", "/Users/gene/bin/text-learning/results/warandpeace.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Emojis (Kyle McDonald)");
    s->addImage("emojis", "/Users/gene/bin/text-learning/results/kcimc_emoji1.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Emojis (Kyle McDonald)");
    s->addImage("emojis", "/Users/gene/bin/text-learning/results/kcimc_emoji2.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Mario levels RNN (Adam Geitgey)");
    s->addMovie("Mario RNN", "/Users/gene/bin/misc/stock/rnn/mario_rnn.mp4", true, 0.1, 0.1, 0.8, 0.8);
    s->addText(h4, ofColor(0), "https://medium.com/@ageitgey/machine-learning-is-fun-part-2-a26a10b68df3#.g94ivdoej", 0.01, 0.03, 0.99);
    
    s = slideshow.addSlide("LSTM Sci-fi assistant (Robin Sloan)");
    s->addMovie("LSTM helper", "/Users/gene/bin/misc/stock/robinsloan-lstm-author.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "https://twitter.com/robinsloan/status/725068953383362560", 0.01, 0.0, 0.99);
    
    s = slideshow.addSlide("Benjamin (Ross Goodwin)");
    s->addImage("LSTM helper", "/Users/gene/bin/misc/stock/benjamin_rossgoodwin.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://rossgoodwin.com/wordsynth/", 0.01, 0.0, 0.99);
    
    s = slideshow.addSlide("Lexiconjure (Ross Goodwin)");
    s->addImage("lexiconjure", "/Users/gene/bin/misc/stock/rnn/lexiconjure.png", 0, 0.05, 1, 0.95);
    s->addText(h4, ofColor(0), "http://lexiconjure.tumblr.com/", 0.01, 0.0, 0.99);
    
    s = slideshow.addSlide("RNN (sequence to sequence)");
    s->addImage("RNN seq2seq", "/Users/gene/bin/misc/stock/rnn/rnn_seq_seq.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Seq 2 seq (language translation)");
    s->addImage("RNN seq2seq", "/Users/gene/bin/misc/stock/rnn/yoda_seq2seq.jpg", 0, 0, 1, 0.5);
    s->addImage("RNN seq2seq", "/Users/gene/bin/misc/stock/rnn/grammar_tree.png", 0, 0.6, 1, 0.4);
    s->addText(h3, ofColor(0), "instead of...", 0.2, 0.5, 0.6);
    
    // UNIT TO SEQ
    s = slideshow.addSlide("RNN (unit to sequence)");
    s->addImage("RNN unit2seq", "/Users/gene/bin/misc/stock/rnn/rnn_unit_seq.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Image captioning (Li, Karpathy)");
    s->addImage("captioning", "/Users/gene/bin/misc/stock/rnn/captioning-architecture.png", 0.5, 0.0, 0.5, 0.5);
    s->addImage("captioning", "/Users/gene/bin/misc/stock/rnn/captioning-visual-semantic-alignment.png", 0, 0.5, 1, 0.5);
    s->addText(h3, ofColor(0), "+ localization for each predicted word", 0.01, 0.4, 0.5);
    s->addText(h4, ofColor(0), "http://cs.stanford.edu/people/karpathy/deepimagesent/", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("Image captioning (Li, Karpathy)");
    s->addImage("captioning", "/Users/gene/bin/misc/stock/rnn/captioning-examples.png", 0, 0.06, 1, 0.94);
    s->addText(h4, ofColor(0), "http://cs.stanford.edu/people/karpathy/deepimagesent/", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("NeuralTalk and Walk (Kyle McDonald)");
    s->addMovie("NeuralTalk and Walk", "/Users/gene/bin/misc/stock/rnn/NeuralTalk and Walk-HD.mp4", true, 0.0, 0.1, 1.0, 0.8);
    s->addText(h4, ofColor(0), "https://vimeo.com/146492001", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("neural-storyteller (Ryan Kiros)");
    s->addImage("neural-storyteller", "/Users/gene/bin/misc/stock/neural-storyteller.jpg", 0, 0, 0.5, 1);
    s->addText(h3, ofColor(0), "We were barely able to catch the breeze at the beach , and it felt as if someone stepped out of my mind . She was in love with him for the first time in months , so she had no intention of escaping . The sun had risen from the ocean , making her feel more alive than normal . She 's beautiful , but the truth is that I do n't know what to do . The sun was just starting to fade away , leaving people scattered around the Atlantic Ocean . I d seen the men in his life , who guided me at the beach once more .", 0.55, 0.25, 0.41);
    s->addText(h4, ofColor(0), "https://github.com/ryankiros/neural-storyteller", 0.01, 0.01, 0.99);

    s = slideshow.addSlide("Generating Stories about Images (Samim)");
    s->addImage("neural-storyteller", "/Users/gene/bin/misc/stock/neural-storyteller2.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "https://medium.com/@samim/generating-stories-about-images-d163ba41e4ed#.nue0lvdzx", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("Visual Semantic Alignment (Li, Karpathy)");
    s->addImage("visual semantic alignment", "/Users/gene/bin/misc/stock/rnn/captioning-visual-semantic-align.png", 0, 0, 0.5, 1);
    s->addImage("visual semantic alignment", "/Users/gene/bin/misc/stock/rnn/captioning-architecture.png", 0.5, 0, 0.5, 0.5);
    s->addImage("visual semantic alignment", "/Users/gene/bin/misc/stock/rnn/captioning-visual-semantic-align-architecture.png", 0.5, 0.5, 0.5, 0.5);
    
    s = slideshow.addSlide("Dense captioning (Li, Karpathy, Johnson)");
    s->addImage("densecap", "/Users/gene/bin/misc/stock/rnn/densecap.png", 0, 0.06, 1, 0.94);
    s->addText(h4, ofColor(0), "http://cs.stanford.edu/people/karpathy/densecap/", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("Dense captioning (Li, Karpathy, Johnson)");
    s->addImage("densecap", "/Users/gene/bin/misc/stock/rnn/densecap_architecture.png", 0, 0.06, 1, 0.94);
    s->addText(h4, ofColor(0), "http://cs.stanford.edu/people/karpathy/densecap/", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("Dense captioning Atlas, The Next Generation");
    s->addMovie("densecap", "/Users/gene/bin/densecap/atlas.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Dense captioning Deepdream");
    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream.mp4", true, 0, 0, 1, 1);

    s = slideshow.addSlide("Semantic object parsing (http://arxiv.org/abs/1603.07063)");
    s->addImage("lstm", "/Users/gene/bin/misc/stock/rnn/semantic-object-parsing.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Handwriting LSTM (http://arxiv.org/abs/1308.0850)");
    s->addImage("lstm", "/Users/gene/bin/misc/stock/rnn/handwriting-lstm.png", 0, 0, 1, 1);
    
    // SEQUENCE TO UNIT
    s = slideshow.addSlide("RNN (sequence to unit)");
    s->addImage("RNN seq2unit", "/Users/gene/bin/misc/stock/rnn/rnn_seq_unit.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Generating images from captions (Mansimov et al)");
    s->addImage("attention", "/Users/gene/bin/misc/stock/rnn/caption_to_image.png", 0, 0, 1, 0.5);
    s->addImage("attention", "/Users/gene/bin/misc/stock/rnn/caption_to_image_architecture.png", 0, 0.5, 1, 0.5);
    s->addText(h4, ofColor(0), "http://arxiv.org/abs/1511.02793", 0.01, 0.0, 0.99);
    
    // vis attention
    s = slideshow.addSlide("Visual Attention (Ba, Mnih, Kavukcuoglu)");
    s->addImage("attention", "/Users/gene/bin/misc/stock/rnn/attention.png", 0, 0, 1, 0.21);
    s->addText(h4, ofColor(0), "http://arxiv.org/abs/1412.7755", 0.01, 0.9, 0.99);
    s->addMovie("Attention", "/Users/gene/bin/misc/stock/rnn/attention.mp4", true, 0.0, 0.22, 1.0, 0.78);
    
    s = slideshow.addSlide("DRAW (Gregor et al)");
    s->addText(h4, ofColor(0), "http://arxiv.org/abs/1502.04623", 0.01, 0.00, 0.99);
    s->addMovie("DRAW", "/Users/gene/bin/misc/stock/rnn/DRAW.mp4", true, 0.0, 0.1, 1.0, 0.8);
    
    s = slideshow.addSlide("RNN (sequence to sequence, synced)");
    s->addImage("RNN seq2seq synced", "/Users/gene/bin/misc/stock/rnn/rnn_seq_seq_sync.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("RNN draws fake Kanji");
    s->addImage("kanji", "/Users/gene/bin/misc/stock/hardmaru_kanji.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://blog.otoro.net/2015/12/28/recurrent-net-dreams-up-fake-chinese-characters-in-vector-format-with-tensorflow/", 0.01, 0.9, 0.99);

    s = slideshow.addSlide("LSTM on audio");
    s->addText(h4, ofColor(0), "John Glover, Sound-RNN", 0.1, 0.2, 0.99);
    s->addText(h4, ofColor(0), "http://www.johnglover.net/blog/generating-sound-with-rnns.html", 0.12, 0.25, 0.99);
    s->addText(h4, ofColor(0), "https://github.com/johnglover/sound-rnn", 0.12, 0.3, 0.99);
    s->addText(h4, ofColor(0), "Matt Vitelli, GRUV", 0.1, 0.45, 0.99);
    s->addText(h4, ofColor(0), "https://cs224d.stanford.edu/reports/NayebiAran.pdf", 0.12, 0.5, 0.99);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=0VTI1BBLydE", 0.12, 0.55, 0.99);
    
    s = slideshow.addSlide("Composing MIDI with LSTMs");
    s->addImage("midi-lstm", "/Users/gene/bin/misc/stock/lstm-midi.png", 0, 0, 1, 0.5);
    s->addText(h4, ofColor(0), "Composing music with recurrent neural nets (Daniel Johnson)", 0.1, 0.55, 0.99);
    s->addText(h4, ofColor(0), "http://www.hexahedria.com/2015/08/03/composing-music-with-recurrent-neural-networks/", 0.1, 0.6, 0.99);
    s->addText(h4, ofColor(0), "LSTM Realbook: Generation Jazz chord progressions (Keunwoo Choi)", 0.1, 0.7, 0.99);
    s->addText(h4, ofColor(0), "https://keunwoochoi.wordpress.com/2016/02/19/lstm-realbook/", 0.1, 0.75, 0.99);
}

void ofApp::NeuralAesthetic8() {
    s = slideshow.addSlide("The Glass Bead Game / Das Glasperlenspiel");
    s->addText(h3, ofColor(0), "A Game, for example, might start from a given astronomical configuration, or from the actual theme of a Bach fugue, or from a sentence out of Leibniz or the Upanishads, and from this theme, depending on the intentions and talents of the player, it could either further explore and elaborate the initial motif or else enrich its expressiveness by allusions to kindred concepts... It represented an elite, symbolic form of seeking for perfection, a sublime alchemy, an approach to that Mind which beyond all images and multiplicities is one within itself -- in other words, to God.", 0.1, 0.2, 0.65);
    s->addText(h2, ofColor(0), "Hermann Hesse, 1943", 0.66, 0.85, 0.3);
    
    s = slideshow.addSlide("Lee Se-dol");
    s->addImage("lee", "/Users/gene/bin/misc/stock/leesedol.jpg", 0.5, 0.0, 0.5, 1);
    s->addText(h2, ofColor(0), "I will do my best to play a beautiful and interesting game.", 0.05, 0.45, 0.4);
    
    s = slideshow.addSlide("Reinforcement learning");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/reinforcement-learning2.jpg", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("RL is the cherry on the cake");
    s->addImage("lecun RL", "/Users/gene/bin/misc/stock/yann_lecun_RL.png", 0, 0.05, 1, 0.95);
    s->addText(h4, ofColor(0), "https://www.facebook.com/yann.lecun/posts/10153426023477143", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Applications of reinforcement learning");
    s->addImage("dog", "/Users/gene/bin/misc/stock/ai_dog.jpg", 0.0, 0.0, 0.5, 0.4);
    s->addImage("robot", "/Users/gene/bin/misc/stock/robotics_rl.png", 0.0, 0.5, 0.5, 0.6);
    s->addText(h4, ofColor(0), "http://robotics.naist.jp/~akihiko-y/researches.php", 0.1, 0.0, 0.9);
    s->addText(h2, ofColor(0), "Robotics\nOperations management\nFinance\nGames", 0.52, 0.2, 0.5);
    
    // VIDEO GAMES
    s = slideshow.addSlide("Reinforcement learning + Atari games");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/reinforcement_learning.png", 0, 0.05, 1, 0.95);
    s->addText(h4, ofColor(0), "http://www.iclr.cc/lib/exe/fetch.php?media=iclr2015:silver-iclr2015.pdf", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Learning to play Atari Games");
    s->addMovie("Seaquest", "/Users/gene/bin/misc/stock/Deep Q network learning to play Seaquest-5WXVJ1A0k6Q.mp4", true, 0, 0, 0.5, 0.5);
    s->addMovie("Pong", "/Users/gene/bin/misc/stock/Deep Q network learning to play Pong-60pwnLB0DqY.mp4", true, 0.5, 0.5, 0.5, 0.5);
    s->addMovie("Breakout", "/Users/gene/bin/misc/stock/Google DeepMind's Deep Q-learning playing Atari Breakout-V1eYniJ0Rnk.mp4", true, 0, 0.5, 0.5, 0.5);
    s->addMovie("Space Invaders", "/Users/gene/bin/misc/stock/Deep Q network playing Space Invaders-ZisFfiEdQ_E.mp4", true, 0.5, 0.0, 0.5, 0.5);
    
    s = slideshow.addSlide("Deep Q Learning + Pong");
    s->addMovie("MCTS", "/Users/gene/bin/misc/stock/Deep Q network learning to play Pong-60pwnLB0DqY.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=60pwnLB0DqY", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Deep Q Learning + Breakout");
    s->addMovie("MCTS", "/Users/gene/bin/misc/stock/Google DeepMind's Deep Q-learning playing Atari Breakout-V1eYniJ0Rnk.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=V1eYniJ0Rnk", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Deep Q Learning + Seaquest");
    s->addMovie("MCTS", "/Users/gene/bin/misc/stock/Deep Q network learning to play Seaquest-5WXVJ1A0k6Q.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=5WXVJ1A0k6Q", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Deep Q Learning + Space Invaders");
    s->addMovie("MCTS", "/Users/gene/bin/misc/stock/Deep Q network playing Space Invaders-ZisFfiEdQ_E.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=ZisFfiEdQ_E", 0.1, 0.0, 0.9);
    
    // HOW TO STRUCTURE IT
    s = slideshow.addSlide("Markov Decision Process");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/markov_decision_process.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Challenges");
    s->addText(h2, ofColor(0), "dynamical system", 0.2, 0.1, 0.8);
    s->addText(h2, ofColor(0), "time matters", 0.2, 0.2, 0.8);
    s->addText(h2, ofColor(0), "delayed reward / credit assignment problem", 0.2, 0.3, 0.8);
    s->addText(h2, ofColor(0), "low quality information", 0.2, 0.4, 0.8);
    s->addText(h1, ofColor(10, 200, 10), "Deep Q-learning", 0.2, 0.55, 0.8);
    
    s = slideshow.addSlide("Convnets to the rescue");
    s->addImage("joystick + convnet", "/Users/gene/bin/misc/stock/joystick_convnet.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://home.uchicago.edu/~arij/journalclub/papers/2015_Mnih_et_al.pdf", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("t-SNE of Space Invader game states ");
    s->addImage("atari t-SNE", "/Users/gene/bin/misc/stock/atari-t-SNE.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://home.uchicago.edu/~arij/journalclub/papers/2015_Mnih_et_al.pdf", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Super Mario craziness");
    s->addMovie("Mario", "/Users/gene/bin/misc/stock/Super mario impossível level expert-r4LbPv6nMzs.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=pQS7HkfVgOU", 0.1, 0.0, 0.9);
    //https://www.youtube.com/watch?v=auklT6q9WMs
    
    s = slideshow.addSlide("RL Robotics irl");
    s->addMovie("Mario", "/Users/gene/bin/misc/stock/swingbot-reinforcement-learning.mp4", true, 0, 0.05, 1, 0.9);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=Lt-KLtkDlh8", 0.1, 0.0, 0.9);
    
    // tic tac toe
    s = slideshow.addSlide("Tic tac toe");
    s->addImage("tic tac toe", "/Users/gene/bin/misc/stock/tic-tac-toe.jpg", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://www.devx.com/dotnet/Article/34912", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("What about chess? too many nodes!");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/chess-game-tree.jpg", 0, 0.04, 1, 0.96);
    s->addText(h4, ofColor(0), "https://www.flickr.com/photos/quadralectics/4391267493", 0.01, 0.0, 0.8);
    
    s = slideshow.addSlide("Deep Blue vs. Gary Kasparov (1996-97)");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/kasparov.jpg", 0, 0, 0.7, 0.5);
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/kasparov-facepalm.jpg", 0, 0.51, 0.7, 0.48);
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/deep-blue-rack.jpg", 0.7, 0, 0.3, 1);
    
    s = slideshow.addSlide("Chess game tree + score (1)");
    s->addImage("Chess game tree", "/Users/gene/bin/misc/stock/chess-tree2.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "https://kevinbinz.com/2015/02/28/the-chess-supertree/", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Chess game tree + score (2)");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/chess-tree.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://neo4j.com/blog/graphgist-of-the-week-september-5-2014/", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Monte Carlo Tree Search");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/mcts.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://stackoverflow.com/questions/23803186/monte-carlo-tree-search-implementation-for-tic-tac-toe", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Exploration vs exploitation");
    s->addImage("multi armed bandit", "/Users/gene/bin/misc/stock/MultiArmedBandit.jpg", 0.1, 0.1, 0.8, 0.8);
    s->addText(h4, ofColor(0), "http://research.microsoft.com/en-us/projects/bandits/", 0.01, 0.0, 0.9);
    
    s = slideshow.addSlide("Expanding large search trees");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/game-tree.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://thenewstack.io/google-ai-beats-human-champion-complex-game-ever-invented/", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("DeepBlue : evaluation function + MCTS");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/chess-fritz-analysis.jpg", 0, 0, 0.5, 1);
    s->addMovie("MCTS", "/Users/gene/bin/misc/stock/MCTS.mp4", true, 0.5, 0.0, 0.5, 1);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=pQS7HkfVgOU (J√©r√©mie Decock)", 0.01, 0.0, 0.9);
    s->addText(h4, ofColor(0), "http://chess.stackexchange.com/questions/518/are-there-consumer-level-game-play-analysis-systems-that-overlay-the-analysis-on", 0.01, 0.98, 0.9);
    
    
    // GO!
    s = slideshow.addSlide("AlphaGo vs. Lee Se-dol");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/alphago-vs-leesedol.jpg", 0, 0.3, 0.8, 0.7);
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/leesedol.jpg", 0.5, 0.0, 0.5, 0.5);
    
    s = slideshow.addSlide("Go rules");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/Go.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Why is Go hard??");
    s->addText(h2, ofColor(0), "tic-tac-toe boards: 765", 0.2, 0.1, 0.8);
    s->addText(h2, ofColor(0), "planck times since big bang: 10^62", 0.2, 0.17, 0.8);
    s->addText(h2, ofColor(0), "atoms in universe: 10^80", 0.2, 0.24, 0.8);
    s->addText(h2, ofColor(0), "chess boards: 10^120", 0.2, 0.31, 0.8);
    s->addText(h2, ofColor(0), "go boards: 10^760", 0.2, 0.38, 0.8);
    s->addImage("gostates", "/Users/gene/bin/misc/stock/alphagogamestates.jpg", 0.4, 0.47, 0.6, 0.5);
    
    s = slideshow.addSlide("Policy network + Value network");
    s->addImage("gostates", "/Users/gene/bin/misc/stock/alphago-policy-network.jpg", 0, 0.05, 1, 0.8);
    s->addText(h4, ofColor(0), "policy network alone predicts next move 57% of the time!!", 0.2, 0.88, 0.8);
    s->addText(h4, ofColor(0), ".... \"an interesting game?\"", 0.2, 0.95, 0.8);
    
    s = slideshow.addSlide("Policy network training");
    s->addImage("gostates", "/Users/gene/bin/misc/stock/alphago-policynet-convnet.png", 0, 0.05, 0.9, 0.9);
    s->addText(h4, ofColor(0), "http://www.slideshare.net/ckmarkohchang/alphago-in-depth (Mark Chang)", 0.2, 0.0, 0.8);
    s->addText(h4, ofColor(0), "generalized techniques, no expert knowledge (AGI?)", 0.2, 0.92, 0.8);
    
    s = slideshow.addSlide("Value network training through self-play");
    s->addImage("gostates", "/Users/gene/bin/misc/stock/alphago-training.png", 0.1, 0.1, 0.8, 0.8);
    s->addText(h4, ofColor(0), "http://www.slideshare.net/ckmarkohchang/alphago-in-depth (Mark Chang)", 0.2, 0.0, 0.8);
    
    // IT GETS HARDER
    s = slideshow.addSlide("It gets harder");
    s->addImage("doom", "/Users/gene/bin/misc/stock/doom.jpg", 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(0), "http://thenewstack.io/google-ai-beats-human-champion-complex-game-ever-invented/", 0.1, 0.0, 0.9);
}


/*
 DISCUSSIONS
 - trolley problem
 - descartes + aspca robots
 - bias in ML (gorillas, squint)
 - can machines be programmed to reduce harm
 - copyright?
 

 
 //https://re-publica.de/16/session/know-your-terrorist-credit-score
*/
