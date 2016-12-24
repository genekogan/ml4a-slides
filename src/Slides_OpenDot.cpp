#include "ofApp.h"



void ofApp::OpenDot_Intro() {
    
    s = slideshow.addSlide("Machine learning for artists");
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
    s->start();

    // about me
    s = slideshow.addSlide("about me");
    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
    s->addMovie("KPT", "/Users/gene/bin/opera-toolkit/colin-ribbons-2_nosound.mp4", true, 0.0, 0.45, 0.4, 0.55);

    s = slideshow.addSlide("about the class");
    s->addText(h3, ofColor(0), " - Theory, methodology", 0.1, 0.1, 0.8);
    s->addText(h3, ofColor(0), " - Data retrieval applications", 0.1, 0.2, 0.8);
    s->addText(h3, ofColor(0), " - Generative applications of deep learning", 0.1, 0.3, 0.8);
    s->addText(h3, ofColor(0), " - Critical issues and research frontiers", 0.1, 0.4, 0.8);
    s->addText(h3, ofColor(0), " - Morning = theory/discussion", 0.1, 0.6, 0.8);
    s->addText(h3, ofColor(0), " - Afternoon = practical sessions", 0.1, 0.7, 0.8);
    
    s = slideshow.addSlide("Né democratici né dittatoriali: anarchici");
    s->addImage("errico", "/Users/gene/bin/misc/stock/ErricoMalatesta.png", 0.005, 0.35, 0.28, 0.55);
    s->addText(h2, ofColor(0), "Errico Malatesta\n1926", 0.001, 0.1, 0.27);
    s->addText(h3, ofColor(0), "Se vi sono classi e individui privi dei mezzi di produzione e quindi dipendenti da chi quei mezzi ha monopolizzati, il cosiddetto regime democratico non può essere che una menzogna atta a ingannare e render docile la massa dei governati con una larva di supposta sovranità, e così salvare e consolidare il dominio della classe privilegiata e dominante. E tale è, ed è sempre stata, la democrazia in regime capitalistico qualunque sia la forma ch'essa prende, dal governo costituzionale monarchico al preteso governo diretto.\n\n", 0.29, 0.01, 0.6); //Di democrazia, di governo di popolo non ve ne potrebbe essere che in regime socialistico, quando, essendo socializzati i mezzi di produzione e di vita, il diritto di tutti a intervenire nel reggimento della cosa pubblica avesse a base e garanzia l'indipendenza economica  di ciascuno. In questo caso sembrerebbe che il regime democratico fosse quello che meglio risponde a giustizia e meglio armonizza l'indipendenza individuale con le necessità della vita sociale. E tale apparve, in modo più o meno chiaro, a coloro che in tempi di monarchie assolute combatterono, soffrirono e morirono per la libertà.
    s->addText(h3, ofColor(50), "If classes and individuals exist that are deprived of the means of production and therefore dependent on others with a monopoly over those means, the so-called democratic system can only be a lie, and one which serves to deceive the mass of the people and keep them docile with an outward show of sovereignty, while the rule of the privileged and dominant class is in fact salvaged and consolidated. Such is democracy and such it always has been in a capitalist structure, whatever form it takes, from constitutional monarchy to so-called direct rule.\n\n", 0.29, 0.47, 0.6); //There could be no such thing as a democracy, a government of the people, other than in a socialistic regime, when the means of production and of living are socialised and the right of all to intervene in the running of public affairs is based on and guaranteed by the economic independence of every person. In this case it would seem that the democratic system was the one best able to guarantee justice and to harmonise individual independence with the necessities of life in society. And so it seemed, more or less clearly, to those who, in the era of the absolute monarchs, fought, suffered and died for freedom.
    s->addNote("confronting \"democratic socialists\".  you can have formal democratic structures, but without socialism, it's fake");
    s->addNote("catalonia, the anarchists crushed by combined alliance. all agreed someone has to be in charge");
    s->addNote("democratic socialists ancestors of today's modern labour-oriented parties in europe, except US/UK");
    s->addNote("by socialism, he means ownership of the mills, later steel, and so on. 2010s, info-based, like ML");
    
    s = slideshow.addSlide("A short history of AI, ML, DL, and terminology");
    s->addImage("ada", "/Users/gene/bin/misc/stock/ada_portrait.jpg", 0.0, 0.0, 0.33, 0.7);
    s->addText(h4, ofColor(0), "\"It were much to be desired, that when mathematical processes pass through the human brain instead of through the medium of inanimate mechanism, it were equally a necessity of things that the reasonings connected with operations should hold the same just place as a clear and well-defined branch of the subject of analysis, a fundamental but yet independent ingredient in the science, which they must do in studying the engine.\"  - Ada Lovelace", 0.4, 0.1, 0.5);
    s->addImage("bernoulli", "/Users/gene/bin/misc/stock/ada_bernoulli.jpg", 0.5, 0.5, 0.5, 0.5);
    s->addImage("analytical", "/Users/gene/bin/misc/stock/analytical_engine.jpg", 0.0, 0.65, 0.5, 0.35);

    s = slideshow.addSlide("Can machines think?");
    s->addImage("cmt 1", "/Users/gene/bin/misc/turing_cmt_1.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Can machines think?");
    s->addImage("cmt 1", "/Users/gene/bin/misc/turing_cmt_2.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Can machines think?");
    s->addImage("eniac", "/Users/gene/bin/misc/stock/eniac.jpg", 0.05, 0.01, 0.9, 0.7);
    s->addText(h2, ofColor(0), "\"The question of whether a computer can think is no more interesting than the question of whether a submarine can swim.\" - Edsger Dijkstra", 0.1, 0.75, 0.7);

    s = slideshow.addSlide("Mark I perceptron (1958)");
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

    s = slideshow.addSlide("Singularity concerns");
    s->addText(h2, ofColor(0), "\"Worrying about killer robots is like worrying about overpopulation on Mars\" - Andrew Ng", 0.05, 0.15, 0.75);
    s->addText(h2, ofColor(0), "\"Worrying about sentient AI as the ice caps melt is like standing on the tracks as the train rushes in, worrying about being hit by lightning\" - Bret Victor", 0.05, 0.35, 0.75);

    // text, critical issues
    s = slideshow.addSlide("Critical issues in AI");
    s->addImage("napalm", "/Users/gene/bin/misc/stock/napalmgirl_censoredfb.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("drones", "/Users/gene/bin/misc/stock/trumpdrone.jpeg", 0.0, 0.5, 0.5, 0.5);
    s->addImage("pred policing", "/Users/gene/bin/misc/propublica-recidivism.png", 0.5, 0.5, 0.5, 0.5);
    s->addImage("flash crash", "/Users/gene/Pictures/Screenshots/flashcrash_tweet.png", 0.5, 0.0, 0.5, 0.5);
    
    // building blocks of neural nets
    s = slideshow.addSlide("Art <-> Activism?");
    s->addImage("neural net", "/Users/gene/bin/misc/stock/flow.png", 0.15, 0.15, 0.7, 0.7);
    
    // machine learning for artists + activists
    s = slideshow.addSlide("The Neural Aesthetic aka Machine Learning for Artists");
    s->addImage("neural net", "/Users/gene/bin/misc/stock/brainbow.jpg", 0, 0, 1, 1);

    // showcase + alt-AI

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
    
//    s = slideshow.addSlide("Dense captioning Atlas, The Next Generation");
//    s->addMovie("densecap", "/Users/gene/bin/densecap/atlas.mp4", true, 0, 0, 1, 1);
//    
//    s = slideshow.addSlide("Dense captioning Deepdream");
//    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("RNN draws fake Kanji");
    s->addImage("kanji", "/Users/gene/bin/misc/stock/hardmaru_kanji.png", 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://blog.otoro.net/2015/12/28/recurrent-net-dreams-up-fake-chinese-characters-in-vector-format-with-tensorflow/", 0.01, 0.9, 0.99);
    
    // ml4a.github.io
    
    s = slideshow.addSlide("Resources");
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
    
    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.2, 0.2, 0.6, 0.6);

    s = slideshow.addSlide("guides, workshops, and code");
    s->addMovie("andreas", "/Users/gene/bin/misc/workshops/andreas-ml4a-ofx.mp4", true, 0.0, 0.0, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/altai.JPG", 0.5, 0.0, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/influencers3.jpg", 0.0, 0.5, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/guide.png", 0.5, 0.5, 0.5, 0.48);

}


void ofApp::OpenDot_NeuralNetworks() {
    
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
    
    s = slideshow.addSlide("Neural networks");
    s->addImage("neural net", "/Users/gene/bin/misc/stock/myoblast.jpg", 0, 0, 1, 1);
    s->addText(h3, ofColor(0,255,0), "(myoblasts not neurons, via Matt Kraushar)", 0.3, 0.1, 1.0);
    
    s = slideshow.addSlide("Actual neurons (via Matt Kraushar)");
    s->addImage("neural net", "/Users/gene/bin/misc/stock/beauty_IUEP CAG-GFP primary 20x.tif", 0, 0.1, 0.495, 0.9);
    s->addImage("neural net", "/Users/gene/bin/misc/stock/549 AcTubulin Hippocampal InVitro 60X 7.20.11.jpg", 0.505, 0.1, 0.495, 0.9);
    s->addText(h4, ofColor(0), "primary hippocampal neuron culture from mouse, anti-acetylated tubulin immunocytochemistry (2012)", 0.0, 0.01, 0.5);
    s->addText(h4, ofColor(0), "primary neocortical neuron culture from mouse after in utero electroporation with a fluorescent reporter plasmid (GFP), anti-GFP immunocytochemistry (2014)", 0.5, 0.01, 0.4);
    
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

}

void ofApp::OpenDot_Wekinator() {
    
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
    
    s = slideshow.addSlide("Wekinator section");
    s->addText(h3, ofColor(0), " - Basic example", 0.1, 0.2, 0.8);
    s->addText(h3, ofColor(0), " - Triggering sounds", 0.1, 0.3, 0.8);
    s->addText(h3, ofColor(0), " - FaceOSC as input", 0.1, 0.4, 0.8);
    s->addText(h3, ofColor(0), " - Ableton as output", 0.1, 0.5, 0.8);
    s->addText(h3, ofColor(0), " - Kinect as input", 0.1, 0.6, 0.8);

    
}

void ofApp::OpenDot_ConvolutionalNeuralNetworks() {

    s = slideshow.addSlide("Buongiorno");
    s->addText(h2, ofColor(0), "Yesterday recap", 0.05, 0.0, 1);
    s->addText(h2, ofColor(0), " - How fully-connected neural nets work", 0.05, 0.1, 1);
    s->addText(h2, ofColor(0), " - A few wekinator examples", 0.05, 0.2, 1);
    s->addText(h2, ofColor(0), "Today", 0.05, 0.3, 1);
    s->addText(h2, ofColor(0), " - Convnets", 0.05, 0.4, 1);
    s->addText(h2, ofColor(0), " - Feature extraction and querying", 0.05, 0.5, 1);
    s->addText(h2, ofColor(0), " - t-SNE", 0.05, 0.6, 1);
    s->addText(h2, ofColor(0), " - Transfer learning", 0.05, 0.7, 1);
    s->addText(h2, ofColor(0), " - Idea session", 0.05, 0.8, 1);
    s->addText(h2, ofColor(0), "Tomorrow?", 0.05, 0.9, 1);

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

}

void ofApp::OpenDot_ConvnetApplicationsBasic() {
    
    s = slideshow.addSlide("What else can we do with neural nets?");
    s->addImage("wekinator", "/Users/gene/bin/misc/stock/wekinator.png", 0, 0, 0.5, 0.5);
    s->addMovie("faceosc + ableton", "/Users/gene/bin/misc/faceosc_ableton.mp4", true, 0.4, 0.4, 0.6, 0.6);
    s->addText(h3, ofColor(0), "Machine learning for musicians + artists", 0.5, 0.1, 0.5);
    s->addText(h3, ofColor(0), "by Rebecca Fiebrink, @Princeton->@Goldsmiths", 0.5, 0.2, 0.5);
    s->addText(h3, ofColor(0), "Osc interface for your favorite apps", 0.5, 0.3, 0.5);

    s = slideshow.addSlide("Activations are valuable");
    s->addMovie("convnetosc", "/Users/gene/bin/misc/wekinator-coffee-croissant.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Art <-> Activism?");
    s->addImage("neural net", "/Users/gene/bin/misc/stock/flow.png", 0.15, 0.15, 0.7, 0.7);
    
    s = slideshow.addSlide("Reverse image search");
    ReverseImageSearchDemo *risd = new ReverseImageSearchDemo(s, "rims", 0, 0, 1, 1);
    s->addAction(risd);
    s->start();
    
    s = slideshow.addSlide("t-SNE colors converging in 2d");
    s->addMovie("t-SNE convergence", "/Users/gene/bin/tsne/tsne_manual.mp4", true, 0, 0, 1, 1);
    
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
    
    s = slideshow.addSlide("Real time transfer learning");
    s->addText(h3, ofColor(0), " - Transfer learning with ConvnetOSC", 0.1, 0.2, 0.8);

}

void ofApp::OpenDot_ConvnetApplicationsAdvanced() {
    
    s = slideshow.addSlide("\"Image generated by a convolutional neural network\"");
    s->addImage("reddit deepdream post", "/Users/gene/bin/deepdream/reddit.png", 0.0, 0.1, 0.7, 1);
    s->addImage("reddit image", "/Users/gene/bin/deepdream/_slugs.jpg", 0.45, 0, 0.55, 0.4);
    s->addText(h3, ofColor(0), "Mysteriously posted to /r/MachineLearning on June 16, 2015", 0.00, 0.0, 0.38);
    
    //    http://www.evolvingai.org/content/ai-neuroscience-understanding
    
    s = slideshow.addSlide("Google Inceptionism classvis");
    s->addImage("Deepdream classvis", "/Users/gene/bin/deepdream/paper/classvis.png", 0.0, 0.2, 1, 0.8);
    s->addText(h4, ofColor(0), "Going deeper with Inceptionism (Mordvintsev, Olah, Tyka)", 0.2, 0.0, 1.0);
    s->addText(h4, ofColor(0), "googleresearch.blogspot.com/2015/06/inceptionism-going-deeper-into-neural.html]", 0.2, 0.1, 1.0);
    
    s = slideshow.addSlide("Deepdream (2015, Mordvintsev, Tyka, Olah)");
    s->addImage("Ibis", "/Users/gene/bin/deepdream/paper/ibis.png", 0.0, 0.0, 1.0, 0.65);
    s->addImage("Deepdream prototypes", "/Users/gene/bin/deepdream/paper/Funny-Animals.png", 0.0, 0.66, 1.0, 0.33);
    s->addText(h4, ofColor(0), "googleresearch.blogspot.com/2015/06/inceptionism-going-deeper-into-neural.html]", 0.04, 0.0, 1.0);
    
    s = slideshow.addSlide("Deepdream noise");
    s->addImage("Tyka noisedream 1", "/Users/gene/bin/deepdream/paper/building-dreams1.png", 0.0, 0.0, 0.5, 1.0);
    s->addImage("Tyka noisedream 2", "/Users/gene/bin/deepdream/paper/building-dreams2.png", 0.5, 0.0, 0.5, 1.0);
    s->addText(h3, ofColor(0), "Mike Tyka [mtyka.github.io]", 0.15, 0.0, 1.0);
    
    s = slideshow.addSlide("Deepdream: Vishnu");
    s->addImage("vishnu", "/Users/gene/bin/deepdream/gods/_vishnu2.jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("vishnu deepdream", "/Users/gene/bin/deepdream/gods/vishnu(2)__12_3_1.2(1).jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("vishnu deepdream", "/Users/gene/bin/deepdream/gods/vishnu(2)__12_3_1.2(10).jpg", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("vishnu deepdream", "/Users/gene/bin/deepdream/gods/vishnu(2)__12_3_1.2(23).jpg", 0, 0, 1, 1);
    
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
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_feedback/theFrame7.mov", true, 0.5, 0.5, 0.5, 0.5);
    
    s = slideshow.addSlide("Inceptionism class visualizations (Kyle McDonald)");
    s->addScrollableImage("deepdream class vis", "/Users/gene/bin/misc/stock/kcimc_deepdream_classvis1.png", 0, 0.0, 1, 1.0);
    
    s = slideshow.addSlide("Inceptionism class visualizations (Kyle McDonald)");
    s->addScrollableImage("deepdream class vis", "/Users/gene/bin/misc/stock/kcimc_deepdream_classvis2.png", 0, 0.0, 1, 1.0);
    
    s = slideshow.addSlide("Classvis by Mike Tyka (leatherback turtle");
    s->addImage("tyka", "/Users/gene/bin/misc/stock/mtyka_deepdream1_leatherbackturtles.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Classvis by Mike Tyka (pelican");
    s->addImage("tyka", "/Users/gene/bin/misc/stock/mtyka_deepdream_pelican.jpg", 0, 0, 1, 1);

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
    
    s = slideshow.addSlide("Tree x Hokusai");
    s->addScrollableImage("Tree Hokusai", "/Users/gene/bin/style-transfer/07_hires/tree_hokusai.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Tree x Arabic Calligraphy");
    s->addScrollableImage("Tree calligraphy", "/Users/gene/bin/style-transfer/07_hires/tree_calligraphy2_2.jpg", 0, 0, 1, 1);

    s = slideshow.addSlide("Mr. Div x Gustav Klimt");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("Mr. Div x Gustav Klimt", "/Users/gene/bin/style-transfer/05_interpolations/klimt-discoball/klimt-discoball.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Picasso x Picasso");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("Picasso periods", "/Users/gene/bin/style-transfer/05_interpolations/picasso-periods/picasso-periods.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Why is a Raven like a Writing Desk?");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("AliceNet", "/Users/gene/bin/style-transfer/04_alice/Alice-Stylenet.mov", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Video style with optical flow loss term (Ruder et al, 2016)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("video style", "/Users/gene/bin/style-transfer/10_optical_flow/video-style-transfer-x4-reordered.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Video style transfer x3");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("video style", "/Users/gene/bin/style-transfer/10_optical_flow/video-style-transfer-triptych.mp4", true, 0, 0, 1, 1);
    
    CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
    s = slideshow.addSlide("What happens when it's real-time?");
    s->addAction(cmd);
    cmd->setStyleModel("/Users/gene/bin/style-transfer/models/kandinsky_e2_full512.model");

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

    // WAVENETS
    s = slideshow.addSlide("WaveNets");
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
    s->addNote("Neural nets instead of physical models");
    s->addNote("Dilated convolutions");
    s->addNote("Condition on syllables, voices, or other labels");
    s->addNote("Phase problem in audio excited me. but even crazier: model any set of recordings, like jazz");
    
    s = slideshow.addSlide("Reverse-engineering WaveNets");
    s->addText(h3, ofColor(0), "https://github.com/ibab/tensorflow-wavenet", 0.05, 0.01, 0.9);
    s->addImage("ibab", "/Users/gene/bin/wavenet/blogpost/ibab-tensorflow.png", 0.1, 0.1, 0.8, 0.5);
    s->addSound("Il Barbiere di Siviglia wavenet", "/Users/gene/bin/wavenet/barber_25525_fadein.wav", h4, false, false, 0.25, 0.7, 0.5, 0.1);
    s->addText(h4, ofColor(0), "https://soundcloud.com/genekogan/il-barbiere-di-siviglia-wavenet", 0.26, 0.825, 0.8);
    s->addNote("Pattern emerging, reverse-engineer and reimplement");
    s->addNote("Opera");

    // issues
    
    s = slideshow.addSlide("Wavenets closed-captioning");
    s->addMovie("cc wavenets", "/Users/gene/bin/wavenet/blogpost/wavenet-closedcaps-record.mp4", false, 0, 0, 1, 1)->setPosition(0.3);

}

void ofApp::OpenDot_LanguageProcessing(){
    
    s = slideshow.addSlide("Seq 2 seq (language translation)");
    s->addImage("RNN seq2seq", "/Users/gene/bin/misc/stock/rnn/yoda_seq2seq.jpg", 0, 0, 1, 0.5);
    s->addImage("RNN seq2seq", "/Users/gene/bin/misc/stock/rnn/grammar_tree.png", 0, 0.6, 1, 0.4);
    s->addText(h3, ofColor(0), "instead of...", 0.2, 0.5, 0.6);

    s = slideshow.addSlide("Word/phrase/doc embeddings");
    s->addImage("NLP", "/Users/gene/bin/misc/stock/analogies.png", 0.1, 0.0, 0.8, 0.5);
    s->addImage("NLP", "/Users/gene/bin/misc/stock/analogies2.png", 0.1, 0.6, 0.8, 0.5);
    
    s = slideshow.addSlide("wiki-t-SNE [www.genekogan.com/works/wiki-tSNE]");
    s->addScrollableImage("wiki t-SNE", "/Users/gene/bin/tsne/wiki-tSNE.png", 0.0, 0.09, 1.0, 0.9);
    
    // skip thoughts
    s = slideshow.addSlide("NLP applications");
    s->addText(h2, ofColor(0), "- language translation\n- question-answering (fact checking?)\n- anomaly detection\n- de-anonymization", 0.1, 0.25, 0.82);
    
    s = slideshow.addSlide("Data science");
    s->addText(h3, ofColor(0), " - Reverse image search", 0.1, 0.2, 0.8);
    s->addText(h3, ofColor(0), " - Reverse text search", 0.1, 0.3, 0.8);
    s->addText(h3, ofColor(0), " - Image t-SNE", 0.1, 0.4, 0.8);
    s->addText(h3, ofColor(0), " - Audio t-SNE", 0.1, 0.5, 0.8);
    slideshow.setPage(s);

}

void ofApp::OpenDot_RecurrentNeuralNetworks() {
    
    s = slideshow.addSlide("Recurrent Neural Networks");
    s->addText(h3, ofColor(0), "Feedforward neural net", 0.1, 0.0, 0.4);
    s->addText(h3, ofColor(0), "Recurrent neural net", 0.65, 0.0, 0.4);
    s->addImage("nn_simple", "/Users/gene/bin/misc/stock/rnn/nn_simple.png", 0.0, 0.1, 0.3333, 0.8);
    s->addImage("rnn_simple", "/Users/gene/bin/misc/stock/rnn/rnn_simple.png", 0.5, 0.1, 0.5, 0.8);
    
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
    
    s = slideshow.addSlide("Deep Drumpf");
    s->addImage("helloworld", "/Users/gene/bin/misc/stock/rnn/deepdrumpf.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Deep Drumpf");
    s->addImage("helloworld", "/Users/gene/bin/misc/stock/rnn/deepdrumpf_t0.png", 0.2, 0.1, 0.6, 0.8);
    s = slideshow.addSlide("Deep Drumpf");
    s->addImage("helloworld", "/Users/gene/bin/misc/stock/rnn/deepdrumpf_t1.png", 0.2, 0.1, 0.6, 0.8);
    
    
    s = slideshow.addSlide("Dense captioning (Li, Karpathy, Johnson)");
    s->addImage("densecap", "/Users/gene/bin/misc/stock/rnn/densecap.png", 0, 0.06, 1, 0.94);
    s->addText(h4, ofColor(0), "http://cs.stanford.edu/people/karpathy/densecap/", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("Mona Lisa densecap");
    s->addImage("densecap", "/Users/gene/bin/densecap/monalisa-densecap.png", 0, 0.03, 1, 0.94);

    s = slideshow.addSlide("Dense captioning Atlas, The Next Generation");
    s->addMovie("densecap", "/Users/gene/bin/densecap/atlas.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Dense captioning Pouff's grocery trip");
    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream_grocery.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "original: https://www.youtube.com/watch?v=DgPaCWJL7XI", 0.01, 0.0, 0.99);
    
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

}

void ofApp::OpenDot_GenerativeModels() {
    
    Autoencoders();
    DCGAN();
    
    
    s = slideshow.addSlide("Deep Generator Networks");
    s->addImage("classvis", "/Users/gene/bin/misc/stock/class-synthesis-deepgen.png", 0.0, 0.2, 1, 0.8);
    s->addText(h4, ofColor(0), "Nguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.15, 0.1, 1.0);
    s->addNote("Best so far for generating samples. These are all generative, yet nearly photorealistic");
    s->addNote("DGNs trained on millions of images in classes, and learns how to generate ones");
    s->addNote("you can think of an image as being a sample from probability distribution over all the pixels");
    s->addNote("with enough examples, the network learns to model that probability distribution");
    s->addNote("the network holds this distribution in memory, and takes in an \"input code\" which propagates through the network to generate the image");
    s->addNote("goal for synthesizing image of a class is finding an input code which maximally activates that part of the network");
    
    s = slideshow.addSlide("DGN convergence");
    ofxPPMovie *mov = s->addMovie("cheeseburger", "/Users/gene/bin/synthesizing/cheeseburgernew.mov", false, 0.02, 0.1, 0.46, 0.8);
    mov->setLoop(false);
    ofxPPMovie *mov2 = s->addMovie("teapot", "/Users/gene/bin/synthesizing/teapotnew.mov", false, 0.52, 0.1, 0.46, 0.8);
    mov2->setLoop(false);
    s->addNote("i made some animations of the process of finding input code");
    s->addNote("jostles wildly making generative samples until it converges on cheeseburger + teapot");
    
    s = slideshow.addSlide("DGN (buttes)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/buttes.png", 0.025, 0.025, 0.95, 0.95);
    s->addNote("different every time");
    s->addNote("brings new meaning to uncanny valley");
    
    
    s = slideshow.addSlide("DGN (people as artifacts)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/people.png", 0.025, 0.025, 0.95, 0.95);
    s->addNote("presidential candidate");
    s->addNote("white hair, floral patterns");
    s->addNote("presidential candidate");
    
    s = slideshow.addSlide("DGN (discotheque)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/discotheque.png", 0.025, 0.025, 0.95, 0.95);
    s->addNote("discotheque tonight");
    
    s = slideshow.addSlide("DGN (boathouses)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/boathouses.png", 0.025, 0.025, 0.95, 0.95);
    s->addNote("the network remembers reflections, like a horror movie");
    
    s = slideshow.addSlide("DGN (Places365)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/new_classes.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("Deep Generator Networks");
    s->addScrollableImage("classvis", "/Users/gene/bin/synthesizing/synthesizing-caffenet-tSNE.png", 0, 0, 1, 1);
    s->addNote("t-SNE by input codes");
}

void ofApp::OpenDot_ReinforcementLearning() {
    
    ReinforcementLearning();
}

void ofApp::OpenDot_CriticalIssues() {
    CriticalIssues();
}