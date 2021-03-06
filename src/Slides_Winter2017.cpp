#include "ofApp.h"



void ofApp::ITPxStory(){
    s = slideshow.addSlide("Machine relearning");
    s->addImage("tweet", "/Users/gene/bin/misc/stock/rnn/tweet_hurry.png", 0.15, 0.1, 0.7, 0.6);
    s->addText(h3, ofColor(0), "genekogan.com", 0.1, 0.7, 0.5);
    s->addText(h3, ofColor(0), "@genekogan", 0.1, 0.75, 0.5);
    s->addText(h3, ofColor(0), "ml4a.github.io", 0.1, 0.8, 0.5);
    s->addText(h3, ofColor(0), "@ml4a_", 0.1, 0.85, 0.5);
    s->start();
    
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
    
    
    /////////////////////////////////////////////////////////////////
    // ML4A
    
    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("guides, workshops, and code");
    s->addImage("rachel", "/Users/gene/bin/misc/workshops/opendot/30491978563_c7baa100d2_o.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/altai.JPG", 0.5, 0.0, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/influencers3.jpg", 0.0, 0.5, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/Web/genekogan.github.io/images/workshops/nabi2.jpg", 0.5, 0.5, 0.5, 0.48);
    
    
    s = slideshow.addSlide("guides, workshops, and code");
    s->addMovie("andreas", "/Users/gene/bin/misc/workshops/andreas-ml4a-ofx.mp4", true, 0.0, 0.0, 0.7, 0.5);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/guide.png", 0.0, 0.5, 0.45, 0.5);
    s->addMovie("andreas", "/Users/gene/bin/misc/workshops/andreas-pig-classifier.mp4", true, 0.36, 0.4, 0.7, 0.6);
    
    
    
    /////////////////////////////////////////////////////////////////
    // ML4A TOOLS
    
    s = slideshow.addSlide("ML4A demos + tools");
    
    s = slideshow.addSlide("CNN demo");
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
    
    s = slideshow.addSlide("Transfer learning is fun");
    s->addMovie("convnetosc", "/Users/gene/bin/misc/wekinator-coffee-croissant.mp4", true, 0, 0, 1, 1);
    
    
    /////////////////////////////////////////////////////////////////
    // ML4A PROJECTS
    
    s = slideshow.addSlide("Projects made with ml4a tools");
    
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
    
    //    s = slideshow.addSlide("Boston x Venice (by Andrej Boleslavsky)");
    //    s->addText(h4, ofColor(100), "youtube.com/watch?v=kvjuuoqerV0", 0.03, 0.00, 0.8);
    //    s->addMovie("fb", "/Users/gene/bin/pix2pix/invisible_cities/boston_x_venice_animation.mp4", true, 0.0, 0.03, 1.0, 1.0);
    
    s = slideshow.addSlide("DoodleClassifier");
    s->addMovie("fb", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, 0.0, 0.00, 1.0, 1.0);
    
    s = slideshow.addSlide("Project with Andreas Refsgaard");
    s->addImage("fb", "/Users/gene/bin/ml4a/nabimusic2.png", 0.0, 0.00, 1.0, 1.0);
    
    s = slideshow.addSlide("DoodleTunes");
    s->addMovie("fb", "/Users/gene/bin/ml4a/Doodle Tunes-HD.mp4", true, 0.0, 0.00, 1.0, 1.0);
    
    s = slideshow.addSlide("Objectifier (Bjoern Karmann, CIID)");
    s->addImage("objectifier", "/Users/gene/bin/misc/prototype_objectifier.jpg", 0, 0, 0.6, 0.55);
    s->addMovie("objectifier", "/Users/gene/bin/misc/prototype_objectifier.mp4", true, 0.32, 0.4, 0.7, 0.6);
    s->addText(h4, ofColor(0), "bjoernkarmann.dk/objectifier", 0.65, 0.0, 0.4);
    
    s = slideshow.addSlide("Tele-captioning skype");
    s->addImage("skype1", "/Users/gene/bin/misc/densecap-skype_2.png", 0.32, 0.46, 0.7, 0.65);
    s->addImage("skype1", "/Users/gene/bin/misc/densecap-skype_1.png", 0, 0.0, 0.7, 0.65);

    
    /////////////////////////////////////////////////////////////////
    // RESEARCH
    
    s = slideshow.addSlide("Since ML4A @ ITP");
    
    s = slideshow.addSlide("Video style transfer");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("video style", "/Users/gene/bin/style-transfer/10_optical_flow/video-style-transfer-x4-reordered.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Video style transfer x3");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("video style", "/Users/gene/bin/style-transfer/10_optical_flow/video-style-transfer-triptych.mp4", true, 0, 0, 1, 1)->setPosition(0.25);
    
    CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
    s = slideshow.addSlide("What happens when it's real-time?");
    s->addAction(cmd);
    cmd->setStyleModel("/Users/gene/bin/style-transfer/models/kandinsky_e2_full512.model");
    
    s = slideshow.addSlide("DGN (buttes)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/buttes.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("DGN (people as artifacts)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/people.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("DGN convergence");
    ofxPPMovie *mov = s->addMovie("cheeseburger", "/Users/gene/bin/synthesizing/cheeseburgernew.mov", true, 0.1, 0.1, 0.8, 0.8);
    mov->setLoop(false);
    
    s = slideshow.addSlide("Mona Lisa densecap");
    s->addImage("densecap", "/Users/gene/bin/densecap/monalisa-densecap.png", 0, 0.03, 1, 0.94);
    
    s = slideshow.addSlide("Dense captioning Pouff's grocery trip");
    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream_grocery.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "original: https://www.youtube.com/watch?v=DgPaCWJL7XI", 0.01, 0.0, 0.99);
    
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
    //s->addMovie("CC wavenets", "/Users/gene/bin/misc/Closed-captioning WaveNets.mp4", true, 0, 0, 1, 1);
    s->addImage("cc wavenets", "/Users/gene/bin/misc/closedcapwavenets.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Plug & Play Generative Networks");
    s->addImage("PPGN", "/Users/gene/bin/misc/ppgn_image_captioning.jpg", 0, 0.05, 1, 0.97);
    s->addText(h4, ofColor(0), "http://www.evolvingai.org/ppgn", 0.1, 0.0, 0.8);
    
    
    /////////////////////////////////////////////////////////////////
    // END
    
    s = slideshow.addSlide("AI for activists");
    s->addImage("napalm", "/Users/gene/bin/misc/stock/napalmgirl_censoredfb.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("drones", "/Users/gene/bin/misc/stock/trumpdrone.jpeg", 0.0, 0.5, 0.5, 0.5);
    s->addImage("pred policing", "/Users/gene/bin/misc/propublica-recidivism.png", 0.5, 0.5, 0.5, 0.5);
    s->addImage("flash crash", "/Users/gene/bin/misc/flashcrash_tweet.png", 0.5, 0.0, 0.5, 0.5);
    
    s = slideshow.addSlide("Animals are machines");
    s->addImage("descartes", "/Users/gene/bin/misc/stock/Descartes.jpg", 0.0, 0.0, 0.4, 1.0);
    s->addImage("duck", "/Users/gene/bin/misc/stock/Vaucanson-duck.jpg", 0.5, 0.45, 0.5, 0.5);
    s->addText(h2, ofColor(70), "\"But the greatest of all the prejudices we have retained from infancy is that of believing that brutes think\"\nRene Descartes, De homine (1662), Les passions de l'ame (1649)", 0.425, 0.1, 0.5);
    s->addText(h4, ofColor(50), "Vaucanson's Digesting Duck", 0.52, 0.95, 0.5);
    
    s = slideshow.addSlide("Backpropaganda");
    s->addImage("invest", "/Users/gene/bin/misc/stock/hype-investment.jpg", 0.42, 0.0, 0.59, 0.7);
    s->addImage("invest", "/Users/gene/bin/misc/ilsvrc-top5.png", 0.0, 0.05, 0.4, 0.4);
    s->addImage("invest", "/Users/gene/bin/misc/ILSVRC-nvidia.png", 0.0, 0.55, 0.4, 0.4);
    s->addText(h3, ofColor(80), "\"Machine learning is a core, transformative way by which we’re rethinking everything we’re doing,\" - Sundar Pichai, Google CEO", 0.45, 0.7, 0.4);
    
    //    s = slideshow.addSlide("Election fake news epidemic");
    //    s->addImage("trolley", "/Users/gene/bin/misc/politics/craigsilverman_graph.png", 0, 0, 0.5, 1);
    //    s->addImage("trolley", "/Users/gene/bin/misc/politics/trump_pope.jpg", 0.52, 0.1, 0.48, 0.9);
    //    s->addText(h4, ofColor(0), "https://www.buzzfeed.com/craigsilverman/viral-fake-election-news-outperformed-real-news-on-facebook", 0.01, 0.01, 0.9);
    //
    //    s = slideshow.addSlide("What is fake news?");
    //    s->addImage("fake", "/Users/gene/bin/misc/politics/sauron.png", 0.0, 0.03, 1.0, 0.97);
    //    s->addText(h4, ofColor(0), "www.reelnewsnetwork.com/sauron-endorses-donald-trump-for-president/", 0.01, 0.0, 0.9);
    
    s = slideshow.addSlide("AI for everyone");
    s->addMovie("alt-AI", "/Users/gene/bin/alt-ai/lisa-oculus-convnet.mp4", true, 0, 0, 0.5, 0.5);
    s->addMovie("alt-AI", "/Users/gene/bin/alt-ai/D90A8726.mp4", true, 0.5, 0, 0.5, 0.5);
    s->addMovie("alt-AI", "/Users/gene/bin/alt-ai/D90A8627.mp4", true, 0, 0.5, 0.5, 0.5);
    s->addMovie("alt-AI", "/Users/gene/bin/alt-ai/cubistmirror_v1.mp4", true, 0.5, 0.5, 0.5, 0.5);
    
    s = slideshow.addSlide("Thanks!");
    s->addMovie("t-SNE convergence", "/Users/gene/bin/tsne/tsne_manual.mp4", true, 0, 0, 1, 1);
    s->addRect(ofColor(255,160), 0.005, 0.19, 0.33, 0.25);
    s->addRect(ofColor(255,160), 0.595, 0.19, 0.33, 0.25);
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
    
}

void ofApp::CreativeAILondon(){
    
//    s = slideshow.addSlide("Plug & Play Generative Networks");
//    s->addImage("PPGN", "/Users/gene/bin/misc/ppgn_image_captioning.jpg", 0, 0.05, 1, 0.97);
//    s->addText(h4, ofColor(0), "http://www.evolvingai.org/ppgn", 0.1, 0.0, 0.8);

    
    // face prediction / criminality (opendot)
    // cut down on slides (stylenet)
    

    s = slideshow.addSlide("");
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
    s->start();

    // nice to be in ldn
    // slide about memo + ofx + fluids

//    s = slideshow.addSlide("about me");
//    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
//    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
//    s->addMovie("KPT", "/Users/gene/bin/opera-toolkit//colin-ribbons-2.mp4", true, 0.0, 0.45, 0.4, 0.55);

    s = slideshow.addSlide("about me");
    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
    s->addImage("genre VA", "/Users/gene/bin/misc/sourcetone/genre-AvgVA.jpg", 0.0, 0.4, 0.42, 0.6);
    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);

    s = slideshow.addSlide("about me");
    s->addMovie("KPT", "/Users/gene/bin/opera-toolkit/colin-ribbons-2_nosound.mp4", true, 0.0, 0, 0.5, 0.5);
    s->addMovie("machine yearning", "/Users/gene/bin/machine-yearning/machine-yearning-gopro.mp4", true, 0.5, 0.5, 0.5, 0.5);
    s->addMovie("flocking", "/Users/gene/bin/images/Flocking-fast.mp4", true, 0.0, 0.5, 0.5, 0.5);
    s->addImage("ecohack", "/Users/gene/bin/ecohacker-build/_mg_7093_14926714478_o.jpg", 0.5, 0.0, 0.5, 0.5);
    
    // no computer science background, one formal class in ML, told us neural nets were evil
    
    s = slideshow.addSlide("Starving computer scientist");
    s->addImage("skeleton", "/Users/gene/bin/misc/stock/skeleton-computer.jpg", 0.25, 0.1, 0.65, 0.8);
    s->addText(h2, ofColor(0), "How to not make money with machine learning", 0.005, 0.01, 0.8);
    s->addText(h3, ofColor(0), "genekogan.com | @genekogan | ml4a.github.io | @ml4a_", 0.05, 0.94, 0.8);
    
    // this talk is called __
    // because i know in this meeting lots of people are already proficient with ML
    // and are thinking to themselves, you know: "how can i make the most financially
    // suboptimal use of my machine learning skills?"
    // because you know, in this environment where there's new multi-million dollar
    // startups every day, huge amounts of money being thrown around at ML scientists
    // every year, how can i disappoint my family and friends and everyone around me
    // let me tell you my ways
    

    
    s = slideshow.addSlide("Rules");
    s->addText(h2, ofColor(0), "#1: Make free software", 0.1, 0.1, 0.8);
    s->addText(h2, ofColor(0), "#2: Make art", 0.1, 0.25, 0.8);
    s->addText(h2, ofColor(0), "#3: Make fun", 0.1, 0.4, 0.8);
    s->addText(h2, ofColor(0), "#4: Teach", 0.1, 0.55, 0.8);

    
    // Rule #1 : make free software
    // the beauty of free software is no one will ever want to pay you for it
    
    // yolo
    // - pj reddie
    // - yolo demo
    // - yolo + screengrab + youtube
    
    s = slideshow.addSlide("Rule #1: Make free software");
    s->addImage("darknet", "/Users/gene/bin/misc/stock/github-darknet.png", 0, 0, 1, 1);

    s = slideshow.addSlide("YOLO license");
    s->addImage("yolo license", "/Users/gene/bin/misc/yolo/yolo_license.png", 0, 0, 1, 1);

    s = slideshow.addSlide("Unemployable");
    s->addImage("yolo commits", "/Users/gene/bin/misc/yolo/yolo_commits.png", 0, 0, 1, 1);

    s = slideshow.addSlide("???");
    s->addImage("pj resume", "/Users/gene/bin/misc/yolo/pjreddie_resume.png", 0, 0, 1, 1);

    
    
    
    // darknet is not... surprising
    // because that's actually how i found it in first place
    
//    s = slideshow.addSlide("");
//    s->addImage("pj about", "/Users/gene/bin/misc/yolo/pjreddie_about.png", 0, 0, 1, 1);

    s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
    DarknetScreenGrabDemo *dnsgd = new DarknetScreenGrabDemo(s, "Darknet Demo", 0, 0, 1, 1);
    dnsgd->setDarknetReference(&darknet);
    s->addAction(dnsgd);


    s = slideshow.addSlide("Tele-captioning skype");
    s->addImage("skype1", "/Users/gene/bin/misc/densecap-skype_2.png", 0.32, 0.46, 0.7, 0.65);
    s->addImage("skype1", "/Users/gene/bin/misc/densecap-skype_1.png", 0, 0.0, 0.7, 0.65);

    
    
    
    // Rule #2 : Make art
    // - stylenet
    // - deepdream
    // - DGN
    // - mario's work
    
    // memo will back me up on this. there is no more economically unviable way to make
    // use of your ML skills than to make art. i know you hear every day, that
    // TechCrunch reports that company X is making the latest residual adversarial
    // thingamabob.
    

    
    // Make Art / stylenet/cubist mirror
    
    s = slideshow.addSlide("Rule #2: Make art");
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
    
    s = slideshow.addSlide("Style transfer");
    s->addImage("Mona Lisa -> Cubist/Expressionist/Impressionist", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_cubist_expressionist_impressionist.jpg", 0, 0.15, 1, 0.85);
    s->addText(h4, ofColor(0), "Gatys et al, 2015 (arxiv.org/abs/1508.06576)", 0.002, 0, 1.0);
    s->addText(h4, ofColor(0), "Justin Johnson's neural-style (https://github.com/jcjohnson/neural-style)", 0.002, 0.075, 1.0);
    
    s = slideshow.addSlide("Style transfer versatility");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/tvnoise.jpg", 0.33333, 0.0, 0.33, 0.3);
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_tvnoise.jpg", 0.33333, 0.31, 0.33, 0.7);
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/egypt.jpg", 0, 0.0, 0.33, 0.3);
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_egypt.jpg", 0, 0.31, 0.33, 0.7);
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/crab.jpg", 0.66666, 0.0, 0.33, 0.3);
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_crab.jpg", 0.66666, 0.31, 0.33, 0.7);
    
    
    s = slideshow.addSlide("Mona Lisa x Google Maps");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps3.jpg", 0.0, 0.0, 0.5, 0.3);
    s->addImage("Mona Lisa maps", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps3_cw08.jpg", 0.0, 0.31, 0.5, 0.7);
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps2.jpg", 0.5, 0.0, 0.5, 0.3);
    s->addImage("Mona Lisa maps", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps2.jpg", 0.5, 0.31, 0.5, 0.7);
    
    s = slideshow.addSlide("Stylenet videos");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("Mr. Div x Gustav Klimt", "/Users/gene/bin/style-transfer/05_interpolations/klimt-discoball/klimt-discoball.mp4", true, -0.07, 0, 0.48, 0.46);
    s->addMovie("AliceNet", "/Users/gene/bin/style-transfer/04_alice/Alice-Stylenet_nosound.mov", true, 0.3, 0.38, 0.76, 0.63)->setPosition(0.15);
    
    s = slideshow.addSlide("Video style transfer (Ruder et al 2016)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("video style", "/Users/gene/bin/style-transfer/10_optical_flow/video-style-transfer-triptych.mp4", true, 0, 0, 1, 1)->setPosition(0.25);
    
    CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
    s = slideshow.addSlide("What happens when it's real-time?");
    s->addAction(cmd);
    cmd->setStyleModel("/Users/gene/bin/style-transfer/models/kandinsky_e2_full512.model");

    
    
    
    
    
    ////////////////////////////////
    // Invisible Cities
    
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

    
    
    //////////////////////////////
    // DoodleTunes
    
    s = slideshow.addSlide("Nabi hackathon project");
    s->addImage("fb", "/Users/gene/bin/ml4a/nabimusic2.png", 0.0, 0.00, 1.0, 1.0);
    
    s = slideshow.addSlide("DoodleTunes");
//    s->addMovie("fb", "/Users/gene/bin/ml4a/Doodle Tunes-small.mp4", true, 0.0, 0.00, 1.0, 1.0);

    
    
    
    // Style transfer / Cubist mirror
    // DGNs, a book from the sky
    
    s = slideshow.addSlide("Generative models");
    s->addMovie("MNIST interpolations", "/Users/gene/bin/dcgan/summary/digits.mov", true, 0.55, 0.05, 0.3, 0.3);
    s->addMovie("interpolations", "/Users/gene/bin/dcgan/public/interpolations.mp4", true, 0.0, 0.4, 1.0, 0.6);
    s->addText(h2, ofColor(0), "Deep Convolutional Generative Adversarial Networks", 0.1, 0.05, 0.35);
    s->addText(h3, ofColor(0), "Radford et al (arxiv.org/abs/1511.06434)", 0.1, 0.2, 0.4);
    s->addText(h2, ofColor(0), "A Book from the Sky", 0.1, 0.3, 1.0);
    s->addText(h3, ofColor(0), "genekogan.com/works/a-book-from-the-sky.html", 0.1, 0.36, 1.0);

//    s = slideshow.addSlide("Radical interpolations");
//    s->addText(h3, ofColor(0), "interpolations across characters sharing the same radical often appear to preserve it", 0.1, 0.0, 0.8);
//    s->addMovie("radical interpolations", "/Users/gene/bin/dcgan/summary/radinterpolation.mp4", true, 0, 0.2, 1, 0.8);
//    
//    s = slideshow.addSlide("Arithmetic tricks");
//    s->addMovie("arithmetic", "/Users/gene/bin/dcgan/public/arithmetic2.mp4", true, 0.1, 0.2, 0.8, 0.6);
//    
    s = slideshow.addSlide("Deep Generator Networks");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/DGN_architecture.jpg", 0.0, 0.1, 1, 0.41);
    s->addImage("classvis", "/Users/gene/bin/misc/stock/class-synthesis-deepgen.png", 0.0, 0.52, 1, 0.48);
    s->addText(h4, ofColor(0), "Nguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.15, 0.01, 1.0);

    s = slideshow.addSlide("DGN convergence");
    ofxPPMovie *mov = s->addMovie("cheeseburger", "/Users/gene/bin/synthesizing/cheeseburgernew.mov", false, 0.02, 0.1, 0.46, 0.8);
    mov->setLoop(false);
    ofxPPMovie *mov2 = s->addMovie("teapot", "/Users/gene/bin/synthesizing/teapotnew.mov", false, 0.52, 0.1, 0.46, 0.8);
    mov2->setLoop(false);
    
    s = slideshow.addSlide("DGN (buttes)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/buttes.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("DGN (people as artifacts)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/people.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("DGN (boathouses)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/boathouses.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("DGN CaffeNet");
    s->addScrollableImage("classvis", "/Users/gene/bin/synthesizing/synthesizing-caffenet-tSNE.png", 0, 0, 1, 1);
    
//    s = slideshow.addSlide("Deepdream oscillations");
//    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_content/deeptrain2.mp4", true, 0.0, 0.0, 0.6, 0.35);
//    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_prototypes/testOtherl4_1.mp4", true, 0.0, 0.35, 0.5, 0.65);
//    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_prototypes/makeMid_blur_2a_imovie.mp4", true, 0.4, 0.0, 0.6, 0.6);
//    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_feedback/theFrame7.mp4", true, 0.5, 0.5, 0.5, 0.5);

    
    
    // Rule #3 : Make fun
    // - deepdream + densecap
    // - closed-captioning wavenets
    
    s = slideshow.addSlide("Rule #3: Make fun");
    s->addImage("densecap", "/Users/gene/bin/densecap/monalisa-densecap.png", 0, 0.03, 1, 0.94);

    s = slideshow.addSlide("Original AI prankster");
    s->addImage("cmt 1", "/Users/gene/bin/misc/turing_cmt_1_2.png", 0, 0, 1.0, 1.0);

    s = slideshow.addSlide("Dense captioning Pouff's grocery trip");
    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream_grocery.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "original: https://www.youtube.com/watch?v=DgPaCWJL7XI", 0.01, 0.0, 0.99);

    s = slideshow.addSlide("Dense captioning Deepdream");
    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream.mp4", true, 0, 0, 1, 1);

    s = slideshow.addSlide("Dense captioning Atlas, The Next Generation");
    s->addMovie("densecap", "/Users/gene/bin/densecap/atlas.mp4", true, 0, 0, 1, 1);

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
    
    s = slideshow.addSlide("\"Adversarial nets\"");
    s->addMovie("cc wavenets", "/Users/gene/bin/wavenet/blogpost/wavenet-closedcaps-record.mp4", false, 0, 0, 1, 1)->setPosition(0.3);

    
    
    // Rule #4 : Educate
    // - ml4a
    // - workshops
    // - warnings
    
    
    /////////////////////////////////////////////////////////////////
    // ML4A
    
    s = slideshow.addSlide("Rule #4: Teach");
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


    s = slideshow.addSlide("guides, workshops, and code");
    s->addImage("rachel", "/Users/gene/bin/misc/workshops/opendot/30491978563_c7baa100d2_o.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/altai.JPG", 0.5, 0.0, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/influencers3.jpg", 0.0, 0.5, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/Web/genekogan.github.io/images/workshops/nabi2.jpg", 0.5, 0.5, 0.5, 0.48);
    
    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.1, 0.1, 0.8, 0.8);

    s = slideshow.addSlide("guides, workshops, and code");
    s->addMovie("andreas", "/Users/gene/bin/misc/workshops/andreas-ml4a-ofx.mp4", true, 0.0, 0.0, 0.7, 0.5);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/guide.png", 0.0, 0.5, 0.45, 0.5);
    s->addMovie("andreas", "/Users/gene/bin/misc/workshops/andreas-pig-classifier.mp4", true, 0.36, 0.4, 0.7, 0.6);
    

    // ML4A TOOLS

    s = slideshow.addSlide("ML4A demos");
    s->addMovie("mnist", "/Users/gene/bin/misc/stock/mnist_weights_demo.mp4", true, -0.025, 0, 0.65, 0.9);
    s->addMovie("convolution", "/Users/gene/bin/misc/stock/convolution_demo.mp4", true, 0.35, 0.6, 0.72, 0.4);

    s = slideshow.addSlide("CNN demo");
    CcvForwardPassDemo *ccvd = new CcvForwardPassDemo(s, "ccv", 0, 0, 1, 1);
    s->addAction(ccvd);
    
    s = slideshow.addSlide("Reverse image search");
    ReverseImageSearchDemo *risd = new ReverseImageSearchDemo(s, "rims", 0, 0, 1, 1);
    s->addAction(risd);
    s->start();
    
    if (REVIMGFAST) {
        s = slideshow.addSlide("Reverse Image Search Fast");
        ReverseImageSearchFastDemo *risfd = new ReverseImageSearchFastDemo(s, "Reverse Image Search Fast", 0, 0, 1, 1);
        risfd->setCcvReference(&ccv);
        risfd->load("/Users/gene/bin/ml4a/ReverseImageSearch/data_small.dat");
//        risfd->load("/Users/gene/bin/ml4a/ReverseImageSearch/data_vecs50k.dat");
//        risfd->load("/Users/gene/bin/ml4a/ReverseImageSearch/data_vecs145k.dat");
        risfd->runKDTree();
        s->setBackgroundFunction(this, &ofApp::drawBgBlack);
        s->addAction(risfd);
    }
    
    s = slideshow.addSlide("Audio + Text t-SNEs");
    s->addScrollableImage("wiki t-SNE", "/Users/gene/bin/tsne/wiki-tSNE.png", -0.05, 0.0, 0.72, 0.76);
    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0.48, 0.39, 0.54, 0.63);
    s->addAction(attd);
    s->addText(h4, ofColor(80), "www.genekogan.com/works/wiki-tSNE", 0.03, 0.8, 0.7);
    s->addText(h4, ofColor(80), "github.com/ml4a/ml4a-ofx", 0.67, 0.3, 0.7);
    
    slideshow.addSlide("t-SNE :: CalTech-256 animals")->addScrollableImage("t-SNE animals", "/Users/gene/bin/tsne/grid_animals2.png", 0, 0, 1, 1);
    slideshow.addSlide("t-SNE :: Ikea catalog (by Golan Levin + Aman Tiwari)")->addScrollableImage("t-SNE ikea", "/Users/gene/bin/tsne/contributions/ikea_golan_aman.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Wekinator modules");
    s->addMovie("convnetosc", "/Users/gene/bin/misc/wekinator-coffee-croissant.mp4", true, 0, 0, 1, 1);

    s = slideshow.addSlide("Wekinator modules");
    s->addImage("kinect", "/Users/gene/bin/misc/stock/kinect-skeleton.png", 0, 0, 0.3333, 0.3333);
    s->addImage("leap", "/Users/gene/bin/misc/stock/leap-hands.jpg", 0, 0.33333, 0.3333, 0.33333);
    s->addImage("face", "/Users/gene/bin/misc/stock/face-osc.png", 0, 0.66666, 0.3333, 0.33333);
    s->addImage("arrow", "/Users/gene/bin/misc/stock/arrow.png", 0.4, 0.4, 0.2, 0.3);
    s->addImage("leap", "/Users/gene/bin/misc/stock/ableton-params.png", 0.66666, 0.0, 0.3333, 0.5);
    s->addImage("leap", "/Users/gene/bin/images/vjing/vj_160.jpg", 0.66666, 0.5, 0.3333, 0.5);

    s = slideshow.addSlide("DoodleClassifier");
    s->addMovie("fb", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, 0.0, 0.00, 1.0, 1.0);

    s = slideshow.addSlide("Objectifier (Bjoern Karmann, CIID)");
    s->addImage("objectifier", "/Users/gene/bin/misc/prototype_objectifier.jpg", 0, 0, 0.6, 0.55);
    s->addMovie("objectifier", "/Users/gene/bin/misc/prototype_objectifier.mp4", true, 0.32, 0.4, 0.7, 0.6);
    s->addText(h4, ofColor(0), "bjoernkarmann.dk/objectifier", 0.65, 0.0, 0.4);


    s = slideshow.addSlide("Backpropaganda");
    s->addImage("invest", "/Users/gene/bin/misc/stock/hype-investment.jpg", 0.42, 0.0, 0.59, 0.7);
    s->addImage("invest", "/Users/gene/bin/misc/ilsvrc-top5.png", 0.0, 0.05, 0.4, 0.4);
    s->addImage("invest", "/Users/gene/bin/misc/ILSVRC-nvidia.png", 0.0, 0.55, 0.4, 0.4);
    s->addText(h3, ofColor(80), "\"Machine learning is a core, transformative way by which we’re rethinking everything we’re doing,\" - Sundar Pichai, Google CEO", 0.45, 0.7, 0.4);
    
    s = slideshow.addSlide("ML for activists");
    s->addImage("napalm", "/Users/gene/bin/misc/stock/napalmgirl_censoredfb.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("drones", "/Users/gene/bin/misc/stock/trumpdrone.jpeg", 0.0, 0.5, 0.5, 0.5);
    s->addImage("pred policing", "/Users/gene/bin/misc/propublica-recidivism.png", 0.5, 0.5, 0.5, 0.5);
    s->addImage("flash crash", "/Users/gene/bin/misc/flashcrash_tweet.png", 0.5, 0.0, 0.5, 0.5);

    s = slideshow.addSlide("");
    s->addMovie("t-SNE convergence", "/Users/gene/bin/tsne/tsne_manual.mp4", true, 0, 0, 1, 1);
    s->addRect(ofColor(255,160), 0.005, 0.19, 0.33, 0.25);
    s->addRect(ofColor(255,160), 0.595, 0.19, 0.33, 0.25);
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);

}








void ofApp::WorkshopMachinesRoom() {
    
    
    /////////////////////////////////////////////////
    // INTRO / ABOUT ME
    
    s = slideshow.addSlide("Machine Learning for Artists @ Machines Room");
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
    s->start();
    
    s = slideshow.addSlide("what we will cover");
    s->addText(h3, ofColor(0), " - Theory, methodology", 0.1, 0.1, 0.8);
    s->addText(h3, ofColor(0), " - Neural nets + real-time", 0.1, 0.2, 0.8);
    s->addText(h3, ofColor(0), " - Data retrieval applications", 0.1, 0.3, 0.8);
    s->addText(h3, ofColor(0), " ? Generative applications of deep learning", 0.1, 0.4, 0.8);
    s->addText(h3, ofColor(0), " ? Critical issues and research frontiers", 0.1, 0.5, 0.8);

    s = slideshow.addSlide("about the class");
    s->addText(h3, ofColor(0), " + Breadth vs. depth", 0.1, 0.1, 0.8);
    s->addText(h3, ofColor(0), " - This workshop will create more questions than answers", 0.1, 0.2, 0.8);
    
    s = slideshow.addSlide("About me");
    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
    s->addImage("genre VA", "/Users/gene/bin/misc/sourcetone/genre-AvgVA.jpg", 0.0, 0.4, 0.42, 0.6);
    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
    
    s = slideshow.addSlide("Color of Words");
    s->addScrollableImage("color of words", "/Users/gene/bin/misc/stock/color-of-words.png", 0, 0, 1, 1);
    
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
//    
//    s = slideshow.addSlide("Kinect Projector Toolkit");
//    s->addMovie("KPT", "/Users/gene/bin/opera-toolkit/colin-ribbons-2_nosound.mp4", true, 0.0, 0, 0.5, 0.6);
//    s->addMovie("KPT", "/Users/gene/bin/kinect-projector-toolkit/Silhouettes @ Saigon Ranger 12:5:2014.mp4", true, 0.4, 0.4, 0.64, 0.62);
    
    s = slideshow.addSlide("Musical instruments (w/ Jeff Snyder)");
    s->addImage("tweet", "/Users/gene/Web/genekogan.github.io/_site/images/birl/birl1.jpg", 0.0, 0.0, 1, 0.35);
    s->addImage("tweet", "/Users/gene/bin/misc/Snyderphonics_Manta.jpg", 0.0, 0.365, 1, 0.64);
    
    s = slideshow.addSlide("Neural nets hallucinating");
    s->addMovie("dcgan", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0.026, 0.5, 0.47);
    s->addImage("deepdream", "/Users/gene/bin/misc/stock/building-dreams.png", 0, 0.515, 0.5, 0.48);
    s->addImage("stylenet", "/Users/gene/bin/misc/stock/stylenet-original.png", 0.5, 0.53, 0.5, 0.47);
    s->addImage("synthesizing original", "/Users/gene/bin/misc/stock/synthesizing-original.jpg", 0.5, 0.025, 0.5, 0.48);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=QYcKCGdZvq4", 0.01, 0.0, 1.0);
    s->addText(h5, ofColor(0), "research.googleblog.com/2015/06/inceptionism-going-deeper-into-neural.html", 0.002, 0.475, 1.0);
    s->addText(h4, ofColor(0), "https://arxiv.org/abs/1508.06576", 0.6, 0.51, 1.0);
    s->addText(h4, ofColor(0), "http://www.evolvingai.org/synthesizing", 0.6, 0.0, 1.0);
    
    
    
    
    
    
    
    
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
    
    s = slideshow.addSlide("Can machines think?");
    s->addImage("cmt 1", "/Users/gene/bin/misc/turing_cmt_1.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Can machines think?");
    s->addImage("cmt 1", "/Users/gene/bin/misc/turing_cmt_2.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Can machines think?");
    s->addText(h2, ofColor(0), "\"The question of whether a computer can think is no more interesting than the question of whether a submarine can swim.\" - Edsger Dijkstra", 0.1, 0.1, 0.7);
    
    s = slideshow.addSlide("Singularity concerns");
    s->addText(h2, ofColor(0), "\"Worrying about killer robots is like worrying about overpopulation on Mars\" - Andrew Ng", 0.05, 0.15, 0.75);
    s->addText(h2, ofColor(0), "\"Worrying about sentient AI as the ice caps melt is like standing on the tracks as the train rushes in, worrying about being hit by lightning\" - Bret Victor", 0.05, 0.35, 0.75);
    
    s = slideshow.addSlide("Critical issues in AI");
    s->addImage("napalm", "/Users/gene/bin/misc/stock/napalmgirl_censoredfb.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("drones", "/Users/gene/bin/misc/stock/trumpdrone.jpeg", 0.0, 0.5, 0.5, 0.5);
    s->addImage("pred policing", "/Users/gene/bin/misc/propublica-recidivism.png", 0.5, 0.5, 0.5, 0.5);
    s->addImage("flash crash", "/Users/gene/Pictures/Screenshots/flashcrash_tweet.png", 0.5, 0.0, 0.5, 0.5);
    
    s = slideshow.addSlide("Art <-> Activism?");
    s->addImage("neural net", "/Users/gene/bin/misc/stock/flow.png", 0.15, 0.15, 0.7, 0.7);
    
    
    
    
    /////////////////////////////////////////////////
    // RESOURCES / ML4A
    
    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("ml4a.github.io");
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
    
    s = slideshow.addSlide("Workshops");
    s->addImage("rachel", "/Users/gene/bin/misc/workshops/opendot/30491978563_c7baa100d2_o.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/altai.JPG", 0.5, 0.0, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/influencers3.jpg", 0.0, 0.5, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/opendot1.jpg", 0.5, 0.5, 0.5, 0.48);
    
    s = slideshow.addSlide("ml4a-ofx");
    s->addMovie("andreas", "/Users/gene/bin/misc/workshops/andreas-ml4a-ofx.mp4", true, 0.0, 0.0, 0.7, 0.5);
    s->addMovie("andreas", "/Users/gene/bin/misc/workshops/andreas-pig-classifier.mp4", true, 0.36, 0.4, 0.7, 0.6);
    
    // INCLUDED APPS ON ML4A
    
    s = slideshow.addSlide("ConvnetViewer");
    CcvForwardPassDemo *ccvd = new CcvForwardPassDemo(s, "ccv", 0, 0, 1, 1);
    s->addAction(ccvd);
    
    s = slideshow.addSlide("ConvnetOSC");
    s->addMovie("convnetosc", "/Users/gene/bin/misc/wekinator-coffee-croissant.mp4", true, 0, 0, 1, 1);
    
    if (REVIMGFAST) {
        s = slideshow.addSlide("Reverse Image Search Fast");
        ReverseImageSearchFastDemo *risfd = new ReverseImageSearchFastDemo(s, "Reverse Image Search Fast", 0, 0, 1, 1);
        risfd->setCcvReference(&ccv);
        risfd->load("/Users/gene/bin/ml4a/ReverseImageSearch/data_small.dat");
//        risfd->load("/Users/gene/bin/ml4a/ReverseImageSearch/data_vecs50k.dat");
//        risfd->load("/Users/gene/bin/ml4a/ReverseImageSearch/data_vecs145k.dat");
        risfd->runKDTree();
        s->setBackgroundFunction(this, &ofApp::drawBgBlack);
        s->addAction(risfd);
    }

    s = slideshow.addSlide("Image t-SNE");
    s->addScrollableImage("animal t-sne", "/Users/gene/bin/tsne/tsne-animals.png", 0.0, 0.0, 1.0, 1.0);
    
    s = slideshow.addSlide("Audio t-SNE");
    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0, 0, 1, 1);
    s->addAction(attd);

    s = slideshow.addSlide("Audio t-SNE in Processing");
    s->addImage("wekinator", "/Users/gene/bin/misc/workshops/jogja_workshop_audiotsne.png", 0, 0, 1, 1);

    s = slideshow.addSlide("DoodleClassifier");
    s->addMovie("fb", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, 0.0, 0.00, 1.0, 1.0);
    
    s = slideshow.addSlide("Convnet classifier");
    s->addMovie("andreas", "/Users/gene/bin/misc/workshops/andreas-ml4a-ofx.mp4", true, 0.0, 0.0, 0.7, 0.5);
    s->addMovie("andreas", "/Users/gene/bin/misc/workshops/andreas-pig-classifier.mp4", true, 0.36, 0.4, 0.7, 0.6);
    
    s = slideshow.addSlide("Face classifier/regression/DTW");
    s->addMovie("faceosc + ableton", "/Users/gene/bin/misc/faceosc_ableton.mp4", true, 0.1, 0.1, 0.8, 0.6);

    s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
    DarknetScreenGrabDemo *dnsgd = new DarknetScreenGrabDemo(s, "Darknet Demo", 0, 0, 1, 1);
    dnsgd->setDarknetReference(&darknet);
    s->addAction(dnsgd);
    
    
    
    
    /////////////////////////////////////////////////
    // NEURAL NETS
    
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
    
    s = slideshow.addSlide("The big picture");
    s->addText(h4, ofColor(0), "Neural networks map one \"volume\" of information to another", 0.1, 0.1, 0.8);
    s->addText(h4, ofColor(0), "Simple use cases", 0.1, 0.2, 0.8);
    s->addText(h4, ofColor(0), " - Prediction / categorization", 0.1, 0.25, 0.8);
    s->addText(h4, ofColor(0), " - Compressing low-value information to high-value (unsupervised)", 0.1, 0.3, 0.8);
    s->addText(h4, ofColor(0), " - Mapping events + actions in media art", 0.1, 0.35, 0.8);
    s->addText(h4, ofColor(0), "More complex (later)", 0.1, 0.5, 0.8);
    s->addText(h4, ofColor(0), " - Encoding/decoding", 0.1, 0.55, 0.8);
    s->addText(h4, ofColor(0), " - Generative (small -> large)", 0.1, 0.6, 0.8);
    
    
   

    
    /////////////////////////
    // WEKINATOR PRACTICAL
    
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
    
    
    
    
    /////////////////////////////////////
    // MORE COMPLEX DATASET + CONVNETS
    
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
    
    
    
    
    ////////////////////////////////////////////
    // APPLICATIONS OF CONVNETS + t-SNE
    
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
    
    s = slideshow.addSlide("What else can we do with neural nets?");
    s->addImage("wekinator", "/Users/gene/bin/misc/stock/wekinator.png", 0, 0, 0.5, 0.5);
    s->addMovie("faceosc + ableton", "/Users/gene/bin/misc/faceosc_ableton.mp4", true, 0.4, 0.4, 0.6, 0.6);
    s->addText(h3, ofColor(0), "Machine learning for musicians + artists", 0.5, 0.1, 0.5);
    s->addText(h3, ofColor(0), "by Rebecca Fiebrink, @Princeton->@Goldsmiths", 0.5, 0.2, 0.5);
    s->addText(h3, ofColor(0), "Osc interface for your favorite apps", 0.5, 0.3, 0.5);
    
    s = slideshow.addSlide("Convnets");
    s->addText(h3, ofColor(0), " - Transfer learning with ConvnetOSC", 0.1, 0.2, 0.8);
    
    
    
    
    /////////////////////////
    // PYTHON PRACTICAL
    
    s = slideshow.addSlide("Data science");
    s->addText(h3, ofColor(0), " - Reverse image search", 0.1, 0.2, 0.8);
    s->addText(h3, ofColor(0), " - Reverse text search", 0.1, 0.3, 0.8);
    s->addText(h3, ofColor(0), " - Image t-SNE", 0.1, 0.4, 0.8);
    s->addText(h3, ofColor(0), " - Audio t-SNE", 0.1, 0.5, 0.8);
    
    
    
    
    /////////////////////////
    // DEEP LEARNING
    
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
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_feedback/theFrame7.mp4", true, 0.5, 0.5, 0.5, 0.5);
    
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
    s->addImage("Starry night", "/Users/gene/bin/style-transfer/_inputs/starrynight.jpg", 0.0, 0.6, 0.5, 0.4);
    s->addMovie("ML starry night", "/Users/gene/bin/style-transfer/11_demo/ml_starrynight_iterations.mp4", true, 0.5, 0.02, 0.5, 0.96);
    
    s = slideshow.addSlide("Mona Lisa x Devajyoti Ray");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/devajyoti.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_devajyoti.jpg", 0.6, 0.0, 0.4, 1.0);
    s = slideshow.addSlide("Mona Lisa x Hokusai");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/hokusai.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_hokusai.jpg", 0.6, 0.0, 0.4, 1.0);
    s = slideshow.addSlide("Mona Lisa x Tarsila");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/tarsilo2.jpg", 0.0, 0.0, 0.55, 1.0);
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
    s->addImage("deep-texture", "/Users/gene/bin/style-transfer/_inputs/maps.jpg", 0, 0, 0.6, 0.6);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/maps1.jpg", 0.4, 0.4, 0.6, 0.6);
    s = slideshow.addSlide("Just style (google maps)");
    s->addImage("deep-texture", "/Users/gene/bin/style-transfer/_inputs/maps.jpg", 0, 0, 0.6, 0.6);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/maps2.jpg", 0.4, 0.4, 0.6, 0.6);
    
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
    s->addImage("Colorization", "/Users/gene/bin/misc/colorization/example_results.png", 0, 0.1, 1, 0.9);
    s->addText(h4, ofColor(0), "http://hi.cs.waseda.ac.jp/~iizuka/projects/colorization/en/", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("Image-to-Image Translation with Conditional Adversarial Nets");
    s->addImage("fb", "/Users/gene/bin/pix2pix/teaser_v3a.png", 0.0, 0.04, 1.0, 0.96);
    s->addText(h3, ofColor(100), "phillipi.github.io/pix2pix/", 0.02, 0.00, 0.8);

    
    s = slideshow.addSlide("Deep Generator Networks (Places365)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/new_classes.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("DGN (buttes)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/buttes.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("DGN (people as artifacts)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/people.png", 0.025, 0.025, 0.95, 0.95);
    s = slideshow.addSlide("DGN convergence");
    ofxPPMovie *mov = s->addMovie("cheeseburger", "/Users/gene/bin/synthesizing/cheeseburgernew.mov", false, 0.02, 0.1, 0.46, 0.8);
    mov->setLoop(false);
    ofxPPMovie *mov2 = s->addMovie("teapot", "/Users/gene/bin/synthesizing/teapotnew.mov", false, 0.52, 0.1, 0.46, 0.8);
    mov2->setLoop(false);
    
    s = slideshow.addSlide("DGN (boathouses)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/boathouses.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("Plug & Play Generative Networks");
    s->addImage("PPGN", "/Users/gene/bin/misc/ppgn_image_captioning.jpg", 0, 0.05, 1, 0.97);
    s->addText(h4, ofColor(0), "http://www.evolvingai.org/ppgn", 0.1, 0.0, 0.8);
    
    
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
    
    
    
    
    
    /////////////////////////
    // RNNs
    
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


void ofApp::MLParis(){
    
    //    s = slideshow.addSlide("Plug & Play Generative Networks");
    //    s->addImage("PPGN", "/Users/gene/bin/misc/ppgn_image_captioning.jpg", 0, 0.05, 1, 0.97);
    //    s->addText(h4, ofColor(0), "http://www.evolvingai.org/ppgn", 0.1, 0.0, 0.8);
    
    // face prediction / criminality (opendot)
    // cut down on slides (stylenet)
    
    s = slideshow.addSlide("Machine learning for artists");
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
    s->start();
    
    // nice to be in ldn
    // slide about memo + ofx + fluids
    
    //    s = slideshow.addSlide("about me");
    //    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
    //    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
    //    s->addMovie("KPT", "/Users/gene/bin/opera-toolkit//colin-ribbons-2.mp4", true, 0.0, 0.45, 0.4, 0.55);
    
    s = slideshow.addSlide("about me");
    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
    s->addImage("genre VA", "/Users/gene/bin/misc/sourcetone/genre-AvgVA.jpg", 0.0, 0.4, 0.42, 0.6);
    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
    
    s = slideshow.addSlide("about me");
    s->addMovie("KPT", "/Users/gene/bin/opera-toolkit/colin-ribbons-2_nosound.mp4", true, 0.0, 0, 0.5, 0.5);
    s->addMovie("machine yearning", "/Users/gene/bin/machine-yearning/machine-yearning-gopro.mp4", true, 0.5, 0.5, 0.5, 0.5);
    s->addMovie("flocking", "/Users/gene/bin/images/Flocking-fast.mp4", true, 0.0, 0.5, 0.5, 0.5);
    s->addImage("ecohack", "/Users/gene/bin/ecohacker-build/_mg_7093_14926714478_o.jpg", 0.5, 0.0, 0.5, 0.5);
    
    // Make Art / stylenet/cubist mirror
    s = slideshow.addSlide("Color of Words (2011)");
    s->addScrollableImage("color of words", "/Users/gene/bin/misc/stock/color-of-words.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Musical instruments (w/ Jeff Snyder) (2014)");
    s->addImage("tweet", "/Users/gene/Web/genekogan.github.io/_site/images/birl/birl1.jpg", 0.0, 0.0, 1, 0.35);
    s->addImage("tweet", "/Users/gene/bin/misc/Snyderphonics_Manta.jpg", 0.0, 0.365, 1, 0.64);
    
    
    s = slideshow.addSlide("Neural nets hallucinating");
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
    
    //    s = slideshow.addSlide("Deepdream oscillations");
    //    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_content/deeptrain2.mp4", true, 0.0, 0.0, 0.6, 0.35);
    //    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_prototypes/testOtherl4_1.mp4", true, 0.0, 0.35, 0.5, 0.65);
    //    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_prototypes/makeMid_blur_2a_imovie.mp4", true, 0.4, 0.0, 0.6, 0.6);
    //    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_feedback/theFrame7.mp4", true, 0.5, 0.5, 0.5, 0.5);
    
    s = slideshow.addSlide("Style transfer");
    s->addImage("Mona Lisa -> Cubist/Expressionist/Impressionist", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_cubist_expressionist_impressionist.jpg", 0, 0.15, 1, 0.85);
    s->addText(h4, ofColor(0), "Gatys et al, 2015 (arxiv.org/abs/1508.06576)", 0.002, 0, 1.0);
    s->addText(h4, ofColor(0), "Justin Johnson's neural-style (https://github.com/jcjohnson/neural-style)", 0.002, 0.075, 1.0);
    
    s = slideshow.addSlide("Style transfer versatility");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/tvnoise.jpg", 0.33333, 0.0, 0.33, 0.3);
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_tvnoise.jpg", 0.33333, 0.31, 0.33, 0.7);
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/egypt.jpg", 0, 0.0, 0.33, 0.3);
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_egypt.jpg", 0, 0.31, 0.33, 0.7);
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/crab.jpg", 0.66666, 0.0, 0.33, 0.3);
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_crab.jpg", 0.66666, 0.31, 0.33, 0.7);
    
    
    s = slideshow.addSlide("Mona Lisa x Google Maps");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps3.jpg", 0.0, 0.0, 0.5, 0.3);
    s->addImage("Mona Lisa maps", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps3_cw08.jpg", 0.0, 0.31, 0.5, 0.7);
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps2.jpg", 0.5, 0.0, 0.5, 0.3);
    s->addImage("Mona Lisa maps", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps2.jpg", 0.5, 0.31, 0.5, 0.7);
    
    s = slideshow.addSlide("Stylenet videos");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("Mr. Div x Gustav Klimt", "/Users/gene/bin/style-transfer/05_interpolations/klimt-discoball/klimt-discoball.mp4", true, -0.07, 0, 0.48, 0.46);
    s->addMovie("AliceNet", "/Users/gene/bin/style-transfer/04_alice/Alice-Stylenet_nosound.mov", true, 0.3, 0.38, 0.76, 0.63)->setPosition(0.15);
    
    s = slideshow.addSlide("Video style transfer (Ruder et al 2016)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("video style", "/Users/gene/bin/style-transfer/10_optical_flow/video-style-transfer-triptych.mp4", true, 0, 0, 1, 1)->setPosition(0.25);
    
    CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
    s = slideshow.addSlide("What happens when it's real-time?");
    s->addAction(cmd);
    cmd->setStyleModel("/Users/gene/bin/style-transfer/models/kandinsky_e2_full512.model");
    
    s = slideshow.addSlide("Generative models");
    s->addMovie("MNIST interpolations", "/Users/gene/bin/dcgan/summary/digits.mov", true, 0.55, 0.05, 0.3, 0.3);
    s->addMovie("interpolations", "/Users/gene/bin/dcgan/public/interpolations.mp4", true, 0.0, 0.4, 1.0, 0.6);
    s->addText(h2, ofColor(0), "Deep Convolutional Generative Adversarial Networks", 0.1, 0.05, 0.35);
    s->addText(h3, ofColor(0), "Radford et al (arxiv.org/abs/1511.06434)", 0.1, 0.2, 0.4);
    s->addText(h2, ofColor(0), "A Book from the Sky", 0.1, 0.3, 1.0);
    s->addText(h3, ofColor(0), "genekogan.com/works/a-book-from-the-sky.html", 0.1, 0.36, 1.0);
    
    s = slideshow.addSlide("Radical interpolations");
    s->addText(h3, ofColor(0), "interpolations across characters sharing the same radical often appear to preserve it", 0.1, 0.0, 0.8);
    s->addMovie("radical interpolations", "/Users/gene/bin/dcgan/summary/radinterpolation.mp4", true, 0, 0.2, 1, 0.8);
    
    s = slideshow.addSlide("Arithmetic tricks");
    s->addMovie("arithmetic", "/Users/gene/bin/dcgan/public/arithmetic2.mp4", true, 0.1, 0.2, 0.8, 0.6);
    
    s = slideshow.addSlide("Deep Generator Networks");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/DGN_architecture.jpg", 0.0, 0.1, 1, 0.41);
    s->addImage("classvis", "/Users/gene/bin/misc/stock/class-synthesis-deepgen.png", 0.0, 0.52, 1, 0.48);
    s->addText(h4, ofColor(0), "Nguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.15, 0.01, 1.0);
    
    s = slideshow.addSlide("DGN convergence");
    ofxPPMovie *mov = s->addMovie("cheeseburger", "/Users/gene/bin/synthesizing/cheeseburgernew.mov", false, 0.02, 0.1, 0.46, 0.8);
    mov->setLoop(false);
    ofxPPMovie *mov2 = s->addMovie("teapot", "/Users/gene/bin/synthesizing/teapotnew.mov", false, 0.52, 0.1, 0.46, 0.8);
    mov2->setLoop(false);
    
    s = slideshow.addSlide("DGN (buttes)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/buttes.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("DGN (people as artifacts)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/people.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("DGN (boathouses)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/boathouses.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("DGN CaffeNet");
    s->addScrollableImage("classvis", "/Users/gene/bin/synthesizing/synthesizing-caffenet-tSNE.png", 0, 0, 1, 1);
    
    
    
    
    ////////////////////////////////
    // Invisible Cities
    
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
    
    
    //////////////////////////////
    // DoodleTunes
    
    s = slideshow.addSlide("Nabi hackathon project");
    s->addImage("fb", "/Users/gene/bin/ml4a/nabimusic2.png", 0.0, 0.00, 1.0, 1.0);
    
    s = slideshow.addSlide("DoodleTunes");
    s->addMovie("fb", "/Users/gene/bin/ml4a/Doodle Tunes-small.mp4", true, 0.0, 0.00, 1.0, 1.0);
    
    
    // Style transfer / Cubist mirror
    // DGNs, a book from the sky
    
    
    s = slideshow.addSlide("Making fun");
    s->addImage("densecap", "/Users/gene/bin/densecap/monalisa-densecap.png", 0, 0.03, 1, 0.94);
    
    s = slideshow.addSlide("Original AI prankster");
    s->addImage("cmt 1", "/Users/gene/bin/misc/turing_cmt_1_2.png", 0, 0, 1.0, 1.0);
    
    s = slideshow.addSlide("Dense captioning Pouff's grocery trip");
    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream_grocery.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "original: https://www.youtube.com/watch?v=DgPaCWJL7XI", 0.01, 0.0, 0.99);
    
    s = slideshow.addSlide("Dense captioning Deepdream");
    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Dense captioning Atlas, The Next Generation");
    s->addMovie("densecap", "/Users/gene/bin/densecap/atlas.mp4", true, 0, 0, 1, 1);
    
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
    
    s = slideshow.addSlide("\"Adversarial nets\"");
    s->addMovie("cc wavenets", "/Users/gene/bin/wavenet/blogpost/wavenet-closedcaps-record.mp4", false, 0, 0, 1, 1)->setPosition(0.3);
    
    
    /////////////////////////////////////////////////////////////////
    // ML4A
    
    s = slideshow.addSlide("Teaching");
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
    
    s = slideshow.addSlide("guides, workshops, and code");
    s->addImage("rachel", "/Users/gene/bin/misc/workshops/opendot/30491978563_c7baa100d2_o.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/altai.JPG", 0.5, 0.0, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/influencers3.jpg", 0.0, 0.5, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/Web/genekogan.github.io/images/workshops/nabi2.jpg", 0.5, 0.5, 0.5, 0.48);
    
    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("guides, workshops, and code");
    s->addMovie("andreas", "/Users/gene/bin/misc/workshops/andreas-ml4a-ofx.mp4", true, 0.0, 0.0, 0.7, 0.5);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/guide.png", 0.0, 0.5, 0.45, 0.5);
    s->addMovie("andreas", "/Users/gene/bin/misc/workshops/andreas-pig-classifier.mp4", true, 0.36, 0.4, 0.7, 0.6);
    
    
    // ML4A TOOLS
    
    s = slideshow.addSlide("ML4A demos");
    s->addMovie("mnist", "/Users/gene/bin/misc/stock/mnist_weights_demo.mp4", true, -0.025, 0, 0.65, 0.9);
    s->addMovie("convolution", "/Users/gene/bin/misc/stock/convolution_demo.mp4", true, 0.35, 0.6, 0.72, 0.4);
    
    s = slideshow.addSlide("CNN demo");
    CcvForwardPassDemo *ccvd = new CcvForwardPassDemo(s, "ccv", 0, 0, 1, 1);
    s->addAction(ccvd);
    
    s = slideshow.addSlide("Reverse image search");
    ReverseImageSearchDemo *risd = new ReverseImageSearchDemo(s, "rims", 0, 0, 1, 1);
    s->addAction(risd);
    s->start();
    
    s = slideshow.addSlide("Reverse Image Search Fast");
    ReverseImageSearchFastDemo *risfd = new ReverseImageSearchFastDemo(s, "Reverse Image Search Fast", 0, 0, 1, 1);
    risfd->setCcvReference(&ccv);
    //    risfd->load("/Users/gene/bin/ml4a/ReverseImageSearch/data_small.dat");
    risfd->load("/Users/gene/bin/ml4a/ReverseImageSearch/data_vecs50k.dat");
    //        risfd->load("/Users/gene/bin/ml4a/ReverseImageSearch/data_vecs145k.dat");
    risfd->runKDTree();
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addAction(risfd);
    
    s = slideshow.addSlide("Audio + Text t-SNEs");
    s->addScrollableImage("wiki t-SNE", "/Users/gene/bin/tsne/wiki-tSNE.png", -0.05, 0.0, 0.72, 0.76);
    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0.48, 0.39, 0.54, 0.63);
    s->addAction(attd);
    s->addText(h4, ofColor(80), "www.genekogan.com/works/wiki-tSNE", 0.03, 0.8, 0.7);
    s->addText(h4, ofColor(80), "github.com/ml4a/ml4a-ofx", 0.67, 0.3, 0.7);
    
    slideshow.addSlide("t-SNE :: CalTech-256 animals")->addScrollableImage("t-SNE animals", "/Users/gene/bin/tsne/grid_animals2.png", 0, 0, 1, 1);
    slideshow.addSlide("t-SNE :: Ikea catalog (by Golan Levin + Aman Tiwari)")->addScrollableImage("t-SNE ikea", "/Users/gene/bin/tsne/contributions/ikea_golan_aman.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Wekinator modules");
    s->addImage("kinect", "/Users/gene/bin/misc/stock/kinect-skeleton.png", 0, 0, 0.3333, 0.3333);
    s->addImage("leap", "/Users/gene/bin/misc/stock/leap-hands.jpg", 0, 0.33333, 0.3333, 0.33333);
    s->addImage("face", "/Users/gene/bin/misc/stock/face-osc.png", 0, 0.66666, 0.3333, 0.33333);
    s->addImage("arrow", "/Users/gene/bin/misc/stock/arrow.png", 0.4, 0.4, 0.2, 0.3);
    s->addImage("leap", "/Users/gene/bin/misc/stock/ableton-params.png", 0.66666, 0.0, 0.3333, 0.5);
    s->addImage("leap", "/Users/gene/bin/images/vjing/vj_160.jpg", 0.66666, 0.5, 0.3333, 0.5);
    
    s = slideshow.addSlide("Wekinator modules");
    s->addMovie("convnetosc", "/Users/gene/bin/misc/wekinator-coffee-croissant.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
    DarknetScreenGrabDemo *dnsgd = new DarknetScreenGrabDemo(s, "Darknet Demo", 0, 0, 1, 1);
    dnsgd->setDarknetReference(&darknet);
    s->addAction(dnsgd);
    
    s = slideshow.addSlide("Tele-captioning skype");
    s->addImage("skype1", "/Users/gene/bin/misc/densecap-skype_2.png", 0.32, 0.46, 0.7, 0.65);
    s->addImage("skype1", "/Users/gene/bin/misc/densecap-skype_1.png", 0, 0.0, 0.7, 0.65);
    
    s = slideshow.addSlide("Reverse Object Search Fast");
    ReverseObjectSearchFastDemo *rosd = new ReverseObjectSearchFastDemo(s, "Reverse Object Search Fast", 0, 0, 1, 1);
    rosd->setDarknetReference(&darknet);
    rosd->load("/Users/gene/Teaching/ML4A/ml4a-ofx/data/feature_vectors/mscoco_objects_145k_rp32.dat", "/Users/gene/Teaching/ML4A/ml4a-ofx/data/mscoco");
    rosd->runKDTree();
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addAction(rosd);
    
    s = slideshow.addSlide("DoodleClassifier");
    s->addMovie("fb", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, 0.0, 0.00, 1.0, 1.0);
    
    s = slideshow.addSlide("Objectifier (Bjoern Karmann, CIID)");
    s->addImage("objectifier", "/Users/gene/bin/misc/prototype_objectifier.jpg", 0, 0, 0.6, 0.55);
    s->addMovie("objectifier", "/Users/gene/bin/misc/prototype_objectifier.mp4", true, 0.32, 0.4, 0.7, 0.6);
    s->addText(h4, ofColor(0), "bjoernkarmann.dk/objectifier", 0.65, 0.0, 0.4);
    
    s = slideshow.addSlide("Backpropaganda");
    s->addImage("invest", "/Users/gene/bin/misc/stock/hype-investment.jpg", 0.42, 0.0, 0.59, 0.7);
    s->addImage("invest", "/Users/gene/bin/misc/ilsvrc-top5.png", 0.0, 0.05, 0.4, 0.4);
    s->addImage("invest", "/Users/gene/bin/misc/ILSVRC-nvidia.png", 0.0, 0.55, 0.4, 0.4);
    s->addText(h3, ofColor(80), "\"Machine learning is a core, transformative way by which we’re rethinking everything we’re doing,\" - Sundar Pichai, Google CEO", 0.45, 0.7, 0.4);
    
    s = slideshow.addSlide("ML for activists");
    s->addImage("napalm", "/Users/gene/bin/misc/stock/napalmgirl_censoredfb.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("drones", "/Users/gene/bin/misc/stock/trumpdrone.jpeg", 0.0, 0.5, 0.5, 0.5);
    s->addImage("pred policing", "/Users/gene/bin/misc/propublica-recidivism.png", 0.5, 0.5, 0.5, 0.5);
    s->addImage("flash crash", "/Users/gene/bin/misc/flashcrash_tweet.png", 0.5, 0.0, 0.5, 0.5);
    
    s = slideshow.addSlide("");
    s->addMovie("t-SNE convergence", "/Users/gene/bin/tsne/tsne_manual.mp4", true, 0, 0, 1, 1);
    s->addRect(ofColor(255,160), 0.005, 0.19, 0.33, 0.25);
    s->addRect(ofColor(255,160), 0.595, 0.19, 0.33, 0.25);
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
    
}


void ofApp::MattTalk() {
    
    s = slideshow.addSlide("");
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
    s->start();

    s = slideshow.addSlide("Supervised learning");
    s->addImage("imagenet", "/Users/gene/bin/misc/stock/machine-learning.png", 0.0, 0.05, 0.4, 0.9);
    s->addImage("imagenet", "/Users/gene/bin/misc/stock/Linear_regression.png", 0.41, 0.05, 0.6, 0.9);
    
    s = slideshow.addSlide("Neural networks");
    s->addImage("imagenet", "/Users/gene/bin/misc/stock/neural-net-diagram.jpg", 0.2, 0.05, 0.6, 0.6);
    s->addImage("imagenet", "/Users/gene/bin/misc/stock/neural-net-equation.png", 0.3, 0.65, 0.4, 0.15);
    s->addText(h3, ofColor(0), "Solved with gradient descent via backpropagation", 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Computer vision 90s-00s -- typical pipeline");
    s->addImage("imagenet", "/Users/gene/bin/misc/stock/image-classification-pipeline.jpg", 0, 0.05, 1.0, 0.5);
    s->addText(h4, ofColor(0), "https://www.learnopencv.com/image-recognition-and-object-detection-part1/", 0.1, 0.0, 0.8);
    s->addText(h3, ofColor(0), "+ Efficient, accurate, interpretable", 0.1, 0.6, 0.8);
    s->addText(h3, ofColor(0), "- Expensive, time-consuming, many hyperparameters", 0.1, 0.66, 0.8);
    s->addText(h3, ofColor(0), "- Non-homogenous code", 0.1, 0.72, 0.8);
    s->addText(h3, ofColor(0), "- Task-specific; does not generalize", 0.1, 0.78, 0.8);
    
    s = slideshow.addSlide("Hubel/Wiesel (1959, 1962, 1968)");
    s->addImage("hubel wiesel", "/Users/gene/bin/misc/hubel1.jpg", 0.0, 0.05, 1.0, 0.5);
    s->addImage("hubel wiesel", "/Users/gene/bin/misc/hubel2.jpg", 0.0, 0.57, 1.0, 0.36);
    s->addText(h4, ofColor(0), "Hubel, Wiesel 1962: Receptive fields, binocular interaction and functional architecture in the cat's visual cortex", 0.01, 0.0, 0.9);
    s->addText(h4, ofColor(0), "Wang et al: On the Oirigin of Deep Learning arxiv.org/pdf/1702.07800.pdf", 0.01, 0.95, 0.9);
    
    s = slideshow.addSlide("Fukushima's Neocognitron (1980)");
    s->addImage("neocognitron", "/Users/gene/bin/misc/neocognitron1.png", 0, 0.1, 1.0, 0.5);
    s->addImage("neocognitron", "/Users/gene/bin/misc/neocognitron3.png", 0, 0.6, 1.0, 0.4);
    s->addText(h4, ofColor(0), "Neocognitron: A Self-organizing Neural Network Model for a Mechanism of Pattern Recognition Unaffected by Shift in Position", 0.01, 0.0, 0.75);
    s->addText(h4, ofColor(0), "but no backprop yet", 0.1, 0.95, 0.8);
    
    s = slideshow.addSlide("Convolutional networks");
    s->addImage("lenet", "/Users/gene/bin/misc/stock/lenet.png", 0, 0, 1, 0.4);
    s->addImage("alexnet", "/Users/gene/bin/misc/stock/alexnet2.png", 0, 0.5, 1, 0.4);
    s->addText(h3, ofColor(0), "Lenet (LeCun et al, 1998) [http://yann.lecun.com/exdb/lenet/]", 0.05, 0.4, 0.9);
    s->addText(h3, ofColor(0), "AlexNet 2012 [via https://jeremykarnowski.wordpress.com/2015/07/15/alexnet-visualization/]", 0.05, 0.92, 0.9);

    s = slideshow.addSlide("Convolution layers	");
    s->addMovie("convolution", "/Users/gene/bin/misc/stock/convolution_demo.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "ml4a.github.io/dev/demos/demo_convolution.html", 0.1, 0.05, 1);
    
    s = slideshow.addSlide("CNN demo");
    CcvForwardPassDemo *ccvd = new CcvForwardPassDemo(s, "ccv", 0, 0, 1, 1);
    s->addAction(ccvd);
    
    s = slideshow.addSlide("Visualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]");
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/alexnet-firstlayer-filters.jpg", 0.0, 0.1, 1, 0.8);
    s->addText(h3, ofColor(0), "first layer filters", 0.2, 0.0, 1.0);
    
    s = slideshow.addSlide("");
    s->addImage("alexnet filters", "/Users/gene/bin/misc/stock/alexnet-firstlayer-filters.jpg", 0, 0, 0.5, 1);
    s->addImage("alexnet filters", "/Users/gene/bin/misc/stock/alexnet-conv5-filters.jpg", 0.5, 0, 0.5, 1);

    s = slideshow.addSlide("Visualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]");
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l2.png", 0.0, 0.0, 0.5, 1);
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l3.png", 0.5, 0.0, 0.5, 1);
    s->addText(h3, ofColor(0), "Image patches which respond most to filters", 0.2, 0.0, 1.0);
    
    //  - Diagram deep learning vs machine learning

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

    s = slideshow.addSlide("Applications of convnets");
    s->addImage("mitosis", "/Users/gene/bin/misc/stock/mitosis.png", 0, 0, 1, 0.75);
    s->addText(h4, ofColor(0), "Ciresan et al 2013 - Mitosis Detection in Breast Cancer Histology Images", 0.1, 0.8, 0.9);
    s->addText(h4, ofColor(0), "http://people.idsia.ch/~ciresan/data/miccai2013.pdf", 0.1, 0.9, 0.9);
    
    s = slideshow.addSlide("Object detection (YOLO)");
    DarknetScreenGrabDemo *dnsgd = new DarknetScreenGrabDemo(s, "Darknet Demo", 0, 0, 1, 1);
    dnsgd->setDarknetReference(&darknet);
    s->addAction(dnsgd);

    s = slideshow.addSlide("Art");
    s->addMovie("dcgan", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0.026, 0.5, 0.47);
    s->addImage("deepdream", "/Users/gene/bin/misc/stock/building-dreams.png", 0, 0.515, 0.5, 0.48);
    s->addImage("stylenet", "/Users/gene/bin/misc/stock/stylenet-original.png", 0.5, 0.53, 0.5, 0.47);
    s->addImage("synthesizing original", "/Users/gene/bin/misc/stock/synthesizing-original.jpg", 0.5, 0.025, 0.5, 0.48);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=QYcKCGdZvq4", 0.01, 0.0, 1.0);
    s->addText(h5, ofColor(0), "research.googleblog.com/2015/06/inceptionism-going-deeper-into-neural.html", 0.002, 0.475, 1.0);
    s->addText(h4, ofColor(0), "https://arxiv.org/abs/1508.06576", 0.6, 0.51, 1.0);
    s->addText(h4, ofColor(0), "http://www.evolvingai.org/synthesizing", 0.6, 0.0, 1.0);

    s = slideshow.addSlide("Recurrent neural networks");
    s->addText(h3, ofColor(0), "Feedforward neural net", 0.1, 0.0, 0.4);
    s->addText(h3, ofColor(0), "Recurrent neural net", 0.65, 0.0, 0.4);
    s->addImage("nn_simple", "/Users/gene/bin/misc/stock/rnn/nn_simple.png", 0.0, 0.1, 0.3333, 0.8);
    s->addImage("rnn_complex", "/Users/gene/bin/misc/stock/rnn/rnn_complex.png", 0.5, 0.1, 0.5, 0.8);
    s->addBreakpoint();
    s->addImage("rnn_simple", "/Users/gene/bin/misc/stock/rnn/rnn_simple.png", 0.5, 0.1, 0.5, 0.8);
    
    s = slideshow.addSlide("RNN sequence");
    s->addText(h3, ofColor(0), "Property: not commutative,\nso we can train it on sequenced {x,y}", 0.7, 0.2, 0.3);
    s->addImage("rnn_4", "/Users/gene/bin/misc/stock/rnn/rnn_stacked_4.png", 0.05, 0.1, 0.6, 0.8);

    s = slideshow.addSlide("Dense captioning (Li, Karpathy, Johnson)");
    s->addImage("densecap", "/Users/gene/bin/misc/stock/rnn/densecap.png", 0, 0.06, 1, 0.94);
    s->addText(h4, ofColor(0), "http://cs.stanford.edu/people/karpathy/densecap/", 0.01, 0.01, 0.99);

    s = slideshow.addSlide("Residual networks");
    s->addImage("deblur", "/Users/gene/bin/misc/residual_building_block.png", 0.05, 0.3, 0.4, 0.4);
    s->addImage("deblur", "/Users/gene/bin/misc/resnet.png", 0.7, 0.0, 0.305, 1.0);
    s->addText(h3, ofColor(0), "He et al (Microsoft Research, 2015)\narxiv.org/pdf/1512.03385.pdf", 0.01, 0.0, 0.6);
    
    s = slideshow.addSlide("Deep learning community");
    s->addImage("invest", "/Users/gene/bin/misc/stock/arxiv.png", 0.0, 0.0, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/torch.png", 0.0, 0.33, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/keras.png", 0.0, 0.66, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/kaggle.png", 0.5, 0.0, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/twitter.png", 0.5, 0.33, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/reddit-icon.png", 0.5, 0.66, 0.45, 0.3);

    s = slideshow.addSlide("Limitations / weaknesses / criticisms");
    s->addText(h3, ofColor(0), "- data hungry", 0.1, 0.2, 0.8);
    s->addText(h3, ofColor(0), "- resource hungry", 0.1, 0.3, 0.8);
    s->addText(h3, ofColor(0), "- theory lagging", 0.1, 0.4, 0.8);
    s->addText(h3, ofColor(0), "- opacity", 0.1, 0.5, 0.8);
    
    s = slideshow.addSlide("Research frontiers");
    s->addText(h3, ofColor(0), "- use less data / one-shot learning", 0.1, 0.2, 0.8);
    s->addText(h3, ofColor(0), "- compression / smaller networks", 0.1, 0.3, 0.8);
    s->addText(h3, ofColor(0), "- adversarial training", 0.1, 0.4, 0.8);
    s->addText(h3, ofColor(0), "- reinforcement learning / deep-Q nets", 0.1, 0.5, 0.8);
    
    
}


//--------------------------------------------------------------
void ofApp::ScopeSessions(){
    
    s = slideshow.addSlide("Scope Sessions, 9 Mar 2017");
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
    
    s = slideshow.addSlide("Nature and simulation");
    s->addMovie("simulation", "/Users/gene/bin/images/Flocking-fast.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Nature and simulation");
    s->addMovie("simulation", "/Users/gene/bin/images/VertexFields2_01.29.2012.mov", true, 0, 0, 1, 1);
    
        s = slideshow.addSlide("Nature and simulation");
        s->addMovie("simulation", "/Users/gene/bin/images/Tree.mov", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Nature and simulation");
    s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/listening-to-the-ocean-20.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Nature and simulation");
    s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/listening-to-the-ocean-10.jpg", 0.505, 0, 0.5, 1);
    s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/generator5.png", 0, 0, 0.5, 1);
    
    s = slideshow.addSlide("Visual instruments");
    s->addMovie("genart", "/Users/gene/bin/images/instagram/bits.mp4", true, 0, 0, 0.333333, 0.5);
    s->addMovie("genart", "/Users/gene/bin/images/instagram/constellations.mp4", true, 0.3333, 0, 0.33333, 0.5);
    s->addMovie("genart", "/Users/gene/bin/images/instagram/subdivision_2.mp4", true, 0.66666, 0.0, 0.3333, 0.5);
    s->addMovie("genart", "/Users/gene/bin/images/instagram/old/vert1.mp4", true, 0, 0.5, 0.333333, 0.5);
    s->addMovie("genart", "/Users/gene/bin/images/instagram/video/cubes.mp4", true, 0.33333, 0.5, 0.333333, 0.5);
    s->addMovie("genart", "/Users/gene/bin/images/instagram/old/polar_glitch2.mp4", true, 0.66666, 0.5, 0.333333, 0.5);
    
    s = slideshow.addSlide("Data visualization");
    s->addImage("genart", "/Users/gene/Web/genekogan.github.io/_site/images/audio-sculpture/audio-sculpture2.jpg", 0, 0, 0.36, 1);
    s->addMovie("genart", "/Users/gene/bin/misc/Tennis rankings 1983-2013-HD.mp4", true, 0.4, 0, 0.61, 1);
    
    s = slideshow.addSlide("Kinect Projector Toolkit");
    s->addMovie("KPT", "/Users/gene/bin/opera-toolkit/colin-ribbons-2_nosound.mp4", true, 0.0, 0, 0.5, 0.6);
    s->addMovie("KPT", "/Users/gene/bin/kinect-projector-toolkit/Silhouettes @ Saigon Ranger 12:5:2014.mp4", true, 0.4, 0.4, 0.64, 0.62);
    
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
    
    s = slideshow.addSlide("Deepdream");
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_content/deeptrain2.mp4", true, 0.0, 0.0, 0.6, 0.35);
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_prototypes/testOtherl4_1.mp4", true, 0.0, 0.35, 0.5, 0.65);
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_prototypes/makeMid_blur_2a_imovie.mp4", true, 0.4, 0.0, 0.6, 0.6);
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_feedback/theFrame7.mp4", true, 0.5, 0.5, 0.5, 0.5);
    
    s = slideshow.addSlide("Style transfer");
    s->addImage("Mona Lisa -> Cubist/Expressionist/Impressionist", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_cubist_expressionist_impressionist.jpg", 0, 0.15, 1, 0.85);
    s->addText(h4, ofColor(0), "Gatys et al, 2015 (arxiv.org/abs/1508.06576)", 0.002, 0, 1.0);
    s->addText(h4, ofColor(0), "Justin Johnson's neural-style (https://github.com/jcjohnson/neural-style)", 0.002, 0.075, 1.0);
    
    
    s = slideshow.addSlide("Mona Lisa x Devajyoti Ray");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/devajyoti.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_devajyoti.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Hokusai");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/hokusai.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_hokusai.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Tarsila");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/tarsilo2.jpg", 0.0, 0.0, 0.55, 1.0);
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
    s->addImage("deep-texture", "/Users/gene/bin/style-transfer/_inputs/maps.jpg", 0, 0, 0.6, 0.6);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/maps1.jpg", 0.4, 0.4, 0.6, 0.6);
    
    s = slideshow.addSlide("Just style (google maps)");
    s->addImage("deep-texture", "/Users/gene/bin/style-transfer/_inputs/maps.jpg", 0, 0, 0.6, 0.6);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/maps2.jpg", 0.4, 0.4, 0.6, 0.6);
    
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
    
    //    s = slideshow.addSlide("Style transfer versatility");
    //    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/tvnoise.jpg", 0.33333, 0.0, 0.33, 0.3);
    //    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_tvnoise.jpg", 0.33333, 0.31, 0.33, 0.7);
    //    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/egypt.jpg", 0, 0.0, 0.33, 0.3);
    //    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_egypt.jpg", 0, 0.31, 0.33, 0.7);
    //    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/crab.jpg", 0.66666, 0.0, 0.33, 0.3);
    //    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_crab.jpg", 0.66666, 0.31, 0.33, 0.7);
    //
    //
    //    s = slideshow.addSlide("Mona Lisa x Google Maps");
    //    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps3.jpg", 0.0, 0.0, 0.5, 0.3);
    //    s->addImage("Mona Lisa maps", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps3_cw08.jpg", 0.0, 0.31, 0.5, 0.7);
    //    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/maps2.jpg", 0.5, 0.0, 0.5, 0.3);
    //    s->addImage("Mona Lisa maps", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_maps2.jpg", 0.5, 0.31, 0.5, 0.7);
    
    //    s = slideshow.addSlide("Stylenet videos");
    //    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    //    s->addMovie("Mr. Div x Gustav Klimt", "/Users/gene/bin/style-transfer/05_interpolations/klimt-discoball/klimt-discoball.mp4", true, -0.07, 0, 0.48, 0.46);
    //    s->addMovie("AliceNet", "/Users/gene/bin/style-transfer/04_alice/Alice-Stylenet_nosound.mov", true, 0.3, 0.38, 0.76, 0.63)->setPosition(0.15);
    //
    //    s = slideshow.addSlide("Video style transfer (Ruder et al 2016)");
    //    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    //    s->addMovie("video style", "/Users/gene/bin/style-transfer/10_optical_flow/video-style-transfer-triptych.mp4", true, 0, 0, 1, 1)->setPosition(0.25);
    
    CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
    s = slideshow.addSlide("What happens when it's real-time?");
    s->addAction(cmd);
    cmd->setStyleModel("/Users/gene/bin/style-transfer/models/kandinsky_e2_full512.model");
    
    s = slideshow.addSlide("Generative models");
    s->addMovie("MNIST interpolations", "/Users/gene/bin/dcgan/summary/digits.mov", true, 0.55, 0.05, 0.3, 0.3);
    s->addMovie("interpolations", "/Users/gene/bin/dcgan/public/interpolations.mp4", true, 0.0, 0.4, 1.0, 0.6);
    s->addText(h2, ofColor(0), "Deep Convolutional Generative Adversarial Networks", 0.1, 0.05, 0.35);
    s->addText(h3, ofColor(0), "Radford et al (arxiv.org/abs/1511.06434)", 0.1, 0.2, 0.4);
    s->addText(h2, ofColor(0), "A Book from the Sky", 0.1, 0.3, 1.0);
    s->addText(h3, ofColor(0), "genekogan.com/works/a-book-from-the-sky.html", 0.1, 0.36, 1.0);
    
    s = slideshow.addSlide("Radical interpolations");
    s->addText(h3, ofColor(0), "interpolations across characters sharing the same radical often appear to preserve it", 0.1, 0.0, 0.8);
    s->addMovie("radical interpolations", "/Users/gene/bin/dcgan/summary/radinterpolation.mp4", true, 0, 0.2, 1, 0.8);
    
    //
    //s = slideshow.addSlide("Arithmetic tricks");
    //s->addMovie("arithmetic", "/Users/gene/bin/dcgan/public/arithmetic2.mp4", true, 0.1, 0.2, 0.8, 0.6);
    //
    
    s = slideshow.addSlide("Deep Generator Networks");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/DGN_architecture.jpg", 0.0, 0.1, 1, 0.41);
    s->addImage("classvis", "/Users/gene/bin/misc/stock/class-synthesis-deepgen.png", 0.0, 0.52, 1, 0.48);
    s->addText(h4, ofColor(0), "Nguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.15, 0.01, 1.0);
    
    s = slideshow.addSlide("DGN convergence");
    ofxPPMovie *mov = s->addMovie("cheeseburger", "/Users/gene/bin/synthesizing/cheeseburgernew.mov", false, 0.02, 0.1, 0.46, 0.8);
    mov->setLoop(false);
    ofxPPMovie *mov2 = s->addMovie("teapot", "/Users/gene/bin/synthesizing/teapotnew.mov", false, 0.52, 0.1, 0.46, 0.8);
    mov2->setLoop(false);
    
    s = slideshow.addSlide("DGN (buttes)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/buttes.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("DGN (boathouses)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/boathouses.png", 0.025, 0.025, 0.95, 0.95);
    
    
    //////////////////////////////
    // CAPTIONING
    
    s = slideshow.addSlide("Dense captioning Pouff's grocery trip");
    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream_grocery.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "original: https://www.youtube.com/watch?v=DgPaCWJL7XI", 0.01, 0.0, 0.99);
    
    s = slideshow.addSlide("Dense captioning Deepdream");
    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Dense captioning Atlas, The Next Generation");
    s->addMovie("densecap", "/Users/gene/bin/densecap/atlas.mp4", true, 0, 0, 1, 1);
    
    
    ////////////////////////////////
    // Invisible Cities
    
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
    
    
    
    //////////////////////////////
    // DoodleTunes
    
    s = slideshow.addSlide("Nabi hackathon project");
    s->addImage("fb", "/Users/gene/bin/ml4a/nabimusic2.png", 0.0, 0.00, 1.0, 1.0);
    
    s = slideshow.addSlide("DoodleTunes");
    s->addMovie("fb", "/Users/gene/bin/ml4a/Doodle Tunes-small.mp4", true, 0.0, 0.00, 1.0, 1.0);
    
    
    /////////////////////////////////////////////////////////////////
    // ML4A
    
    s = slideshow.addSlide("ml4a.github.io");
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
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("guides, workshops, and code");
    s->addImage("rachel", "/Users/gene/bin/misc/workshops/opendot/30491978563_c7baa100d2_o.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/altai.JPG", 0.5, 0.0, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/influencers3.jpg", 0.0, 0.5, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/Web/genekogan.github.io/images/workshops/nabi2.jpg", 0.5, 0.5, 0.5, 0.48);
    
    s = slideshow.addSlide("guides, workshops, and code");
    s->addMovie("andreas", "/Users/gene/bin/misc/workshops/andreas-ml4a-ofx.mp4", true, 0.0, 0.0, 0.7, 0.5);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/guide.png", 0.0, 0.5, 0.45, 0.5);
    s->addMovie("andreas", "/Users/gene/bin/misc/workshops/andreas-pig-classifier.mp4", true, 0.36, 0.4, 0.7, 0.6);
    
    
    // ML4A TOOLS
    
    s = slideshow.addSlide("ML4A demos");
    s->addMovie("mnist", "/Users/gene/bin/misc/stock/mnist_weights_demo.mp4", true, -0.025, 0, 0.65, 0.9);
    s->addMovie("convolution", "/Users/gene/bin/misc/stock/convolution_demo.mp4", true, 0.35, 0.6, 0.72, 0.4);
    
    s = slideshow.addSlide("Reverse image search");
    ReverseImageSearchDemo *risd = new ReverseImageSearchDemo(s, "rims", 0, 0, 1, 1);
    s->addAction(risd);
    s->start();
    
    //    if (REVIMGFAST) {
    //        s = slideshow.addSlide("Reverse Image Search Fast");
    //        ReverseImageSearchFastDemo *risfd = new ReverseImageSearchFastDemo(s, "Reverse Image Search Fast", 0, 0, 1, 1);
    //        risfd->setCcvReference(&ccv);
    //        risfd->load("/Users/gene/bin/ml4a/ReverseImageSearch/data_small.dat");
    //        //        risfd->load("/Users/gene/bin/ml4a/ReverseImageSearch/data_vecs50k.dat");
    //        //        risfd->load("/Users/gene/bin/ml4a/ReverseImageSearch/data_vecs145k.dat");
    //        risfd->runKDTree();
    //        s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    //        s->addAction(risfd);
    //    }
    
    s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
    DarknetScreenGrabDemo *dnsgd = new DarknetScreenGrabDemo(s, "Darknet Demo", 0, 0, 1, 1);
    dnsgd->setDarknetReference(&darknet);
    s->addAction(dnsgd);
    
    s = slideshow.addSlide("Tele-captioning skype");
    s->addImage("skype1", "/Users/gene/bin/misc/densecap-skype_2.png", 0.32, 0.46, 0.7, 0.65);
    s->addImage("skype1", "/Users/gene/bin/misc/densecap-skype_1.png", 0, 0.0, 0.7, 0.65);
    
    s = slideshow.addSlide("Reverse Object Search Fast");
    ReverseObjectSearchFastDemo *rosd = new ReverseObjectSearchFastDemo(s, "Reverse Object Search Fast", 0, 0, 1, 1);
    rosd->setDarknetReference(&darknet);
    rosd->load("/Users/gene/Teaching/ML4A/ml4a-ofx/data/feature_vectors/mscoco_objects_145k_rp32.dat", "/Users/gene/Teaching/ML4A/ml4a-ofx/data/mscoco");
//    rosd->load("/Users/gene/Teaching/ML4A/ml4a-ofx/models/mscoco_145k_rp32.dat", "/Users/gene/Teaching/ML4A/ml4a-ofx/apps/ReverseImageSearchFast/bin/data/mscoco");
    rosd->runKDTree();
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addAction(rosd);
    
    slideshow.addSlide("t-SNE :: CalTech-256 animals")->addScrollableImage("t-SNE animals", "/Users/gene/bin/tsne/grid_animals2.png", 0, 0, 1, 1);
    slideshow.addSlide("t-SNE :: Ikea catalog (by Golan Levin + Aman Tiwari)")->addScrollableImage("t-SNE ikea", "/Users/gene/bin/tsne/contributions/ikea_golan_aman.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Audio + Text t-SNEs");
    s->addScrollableImage("wiki t-SNE", "/Users/gene/bin/tsne/wiki-tSNE.png", -0.05, 0.0, 0.72, 0.76);
    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0.48, 0.39, 0.54, 0.63);
    s->addAction(attd);
    s->addText(h4, ofColor(80), "www.genekogan.com/works/wiki-tSNE", 0.03, 0.8, 0.7);
    s->addText(h4, ofColor(80), "github.com/ml4a/ml4a-ofx", 0.67, 0.3, 0.7);
    
    
    //    s = slideshow.addSlide("Wekinator modules");
    //    s->addMovie("convnetosc", "/Users/gene/bin/misc/wekinator-coffee-croissant.mp4", true, 0, 0, 1, 1);
    //
    //    s = slideshow.addSlide("Wekinator modules");
    //    s->addImage("kinect", "/Users/gene/bin/misc/stock/kinect-skeleton.png", 0, 0, 0.3333, 0.3333);
    //    s->addImage("leap", "/Users/gene/bin/misc/stock/leap-hands.jpg", 0, 0.33333, 0.3333, 0.33333);
    //    s->addImage("face", "/Users/gene/bin/misc/stock/face-osc.png", 0, 0.66666, 0.3333, 0.33333);
    //    s->addImage("arrow", "/Users/gene/bin/misc/stock/arrow.png", 0.4, 0.4, 0.2, 0.3);
    //    s->addImage("leap", "/Users/gene/bin/misc/stock/ableton-params.png", 0.66666, 0.0, 0.3333, 0.5);
    //    s->addImage("leap", "/Users/gene/bin/images/vjing/vj_160.jpg", 0.66666, 0.5, 0.3333, 0.5);
    //
    //    s = slideshow.addSlide("DoodleClassifier");
    //    s->addMovie("fb", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, 0.0, 0.00, 1.0, 1.0);
    
    //    s = slideshow.addSlide("Objectifier (Bjoern Karmann, CIID)");
    //    s->addImage("objectifier", "/Users/gene/bin/misc/prototype_objectifier.jpg", 0, 0, 0.6, 0.55);
    //    s->addMovie("objectifier", "/Users/gene/bin/misc/prototype_objectifier.mp4", true, 0.32, 0.4, 0.7, 0.6);
    //    s->addText(h4, ofColor(0), "bjoernkarmann.dk/objectifier", 0.65, 0.0, 0.4);
    
    
    //    s = slideshow.addSlide("Backpropaganda");
    //    s->addImage("invest", "/Users/gene/bin/misc/stock/hype-investment.jpg", 0.42, 0.0, 0.59, 0.7);
    //    s->addImage("invest", "/Users/gene/bin/misc/ilsvrc-top5.png", 0.0, 0.05, 0.4, 0.4);
    //    s->addImage("invest", "/Users/gene/bin/misc/ILSVRC-nvidia.png", 0.0, 0.55, 0.4, 0.4);
    //    s->addText(h3, ofColor(80), "\"Machine learning is a core, transformative way by which we’re rethinking everything we’re doing,\" - Sundar Pichai, Google CEO", 0.45, 0.7, 0.4);
    //
    //    s = slideshow.addSlide("ML for activists");
    //    s->addImage("napalm", "/Users/gene/bin/misc/stock/napalmgirl_censoredfb.jpg", 0.0, 0.0, 0.5, 0.5);
    //    s->addImage("drones", "/Users/gene/bin/misc/stock/trumpdrone.jpeg", 0.0, 0.5, 0.5, 0.5);
    //    s->addImage("pred policing", "/Users/gene/bin/misc/propublica-recidivism.png", 0.5, 0.5, 0.5, 0.5);
    //    s->addImage("flash crash", "/Users/gene/bin/misc/flashcrash_tweet.png", 0.5, 0.0, 0.5, 0.5);
    
    s = slideshow.addSlide("thanks :)");
    s->addMovie("t-SNE convergence", "/Users/gene/bin/tsne/tsne_manual.mp4", true, 0, 0, 1, 1);
    s->addRect(ofColor(255,160), 0.005, 0.19, 0.33, 0.25);
    s->addRect(ofColor(255,160), 0.595, 0.19, 0.33, 0.25);
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
    
}

