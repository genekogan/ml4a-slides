#include "ofApp.h"


// Style transfer
//  - quad view of video stylenets
//  - new slide: compare activations from st demo


void ofApp::Kikk() {
    
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
    
    
    s = slideshow.addSlide("Adversarial Nets");
    s->addImage("glass bead game", "/Users/gene/bin/misc/glassbead.jpg", 0.0, 0.05, 0.36, 0.9);
    s->addText(h3, ofColor(0,0,20), "A Game, for example, might start from a given astronomical configuration, or from the actual theme of a Bach fugue, or from a sentence out of Leibniz or the Upanishads, and from this theme, depending on the intentions and talents of the player, it could either further explore and elaborate the initial motif or else enrich its expressiveness by allusions to kindred concepts... It represented an elite, symbolic form of seeking for perfection, a sublime alchemy, an approach to that Mind which beyond all images and multiplicities is one within itself -- in other words, to God.", 0.38, 0.2, 0.5);
    s->addNote("hesse is describing the glass bead game, a game played by an austere order of intellectuals at a monastery-like academy in the highlands of central Europe, centuries into the future. the game is described as this perfect synthesis of art, science, literature, and history. players take turns moving glass stones around the board by making deep connections among the disparate intellectual pursuits of mankind -- for example, finding an analogy between the notes of a mozart sonata to the constellations of the night sky, or contrasting the laws of quantum mechanics with Hegelian economics, and so on.");
    s->addNote("a curious thing about the book is that nowhere in its nearly 600 pages are the actual rules of the game precisely described. it's as if hesse is hinting at something which can't be expressed... our creativity, the vast interconnectedness of our knowledge, even the very essence of human intelligence itself... something which can't be put into words.");
    s->start();
    
    s = slideshow.addSlide("Lee Se-dol vs. AlphaGo");
    s->addImage("go", "/Users/gene/bin/misc/stock/alphago-vs-leesedol.jpg", 0, 0.3, 0.8, 0.7);
    s->addImage("go", "/Users/gene/bin/misc/stock/leesedol.jpg", 0.5, 0.0, 0.5, 0.5);
    s->addText(h2, ofColor(0), "\"I will do my best to play a beautiful and interesting game\"", 0.05, 0.06, 0.44);
    s->addNote("i was reminded of the glass bead game during the match between AlphaGo and Lee Se-dol. for those who don't know, in March of this year, the group DeepMind created an AI which defeated the world's top-ranked Go player, a landmark moment in the history of AI, for reasons that i will return to in just a bit.");
    s->addNote("Go is a 2-player strategy board game, which is played with stone pieces rather than glass ones, but the similarities between it and the glass bead game go deeper than that. in much the same way as the glass bead game, Go is also described by its players only in abstract, almost Platonic, terms by its top players, again as if its nature can't be put into words. i was struck by this when i saw an interview with Lee in which he said i will do my best to play a beautiful and interesting game. this really resonated with me. as if to Lee the challenge was an aesthetic one, rather than a purely competitive one.");
    
    s = slideshow.addSlide("\"I felt the board\" 이세돌");
    s->addImage("go", "/Users/gene/bin/misc/stock/Go.jpg", 0, 0, 1, 1);
    s->addRect(ofColor(255,160), 0.005, 0.04, 0.45, 0.26);
    s->addText(h3, ofColor(0), "tic-tac-toe boards: 765", 0.01, 0.05, 0.6);
    s->addText(h3, ofColor(0), "planck times since big bang: 10^62", 0.01, 0.1, 0.6);
    s->addText(h3, ofColor(0), "atoms in universe: 10^80", 0.01, 0.15, 0.6);
    s->addText(h3, ofColor(0), "chess boards: 10^120", 0.01, 0.2, 0.6);
    s->addText(h3, ofColor(0), "go boards: 10^170", 0.01, 0.25, 0.6);
    
    // include reference to nature papers
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
    
    
    
    
    
    
    
    
    
    
    s = slideshow.addSlide("Neural nets hallucinating");
    s->addImage("deepdream", "/Users/gene/bin/misc/stock/building-dreams.png", 0, 0.5, 0.5, 0.5);
    s->addImage("stylenet", "/Users/gene/bin/misc/stock/stylenet-original.png", 0.5, 0.53, 0.5, 0.47);
    s->addImage("synthesizing original", "/Users/gene/bin/misc/stock/synthesizing-original.jpg", 0.5, 0.025, 0.5, 0.48);
    s->addText(h5, ofColor(0), "research.googleblog.com/2015/06/inceptionism-going-deeper-into-neural.html", 0.002, 0.475, 1.0);
    s->addText(h4, ofColor(0), "https://arxiv.org/abs/1508.06576", 0.6, 0.51, 1.0);
    s->addText(h4, ofColor(0), "http://www.evolvingai.org/synthesizing", 0.6, 0.0, 1.0);
    s->start();

    
    
    
    
    
    
    
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
    
    
    
    
    
    
    
    
    s = slideshow.addSlide("Generative models");
    s->addMovie("MNIST interpolations", "/Users/gene/bin/dcgan/summary/digits.mov", true, 0.55, 0.05, 0.3, 0.3);
    s->addMovie("interpolations", "/Users/gene/bin/dcgan/public/interpolations.mp4", true, 0.0, 0.4, 1.0, 0.6);
    s->addText(h2, ofColor(0), "Deep Convolutional Generative Adversarial Networks", 0.1, 0.05, 0.35);
    s->addText(h3, ofColor(0), "arxiv.org/abs/1511.06434", 0.1, 0.2, 0.4);
    s->addText(h2, ofColor(0), "A Book from the Sky", 0.1, 0.3, 1.0);
    s->addText(h3, ofColor(0), "genekogan.com/works/a-book-from-the-sky.html", 0.1, 0.36, 1.0);

    
    
    
    
    
    
    
    
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

    
    
    
//    slideshow.setPage(s);
    
    
    
    
    
    
    
    s = slideshow.addSlide("Training our neural network");
    s->addMovie("mnist", "/Users/gene/bin/misc/stock/mnist_weights_demo.mp4", true, 0, 0, 1, 1)->setLoop(false);
    
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
    
    slideshow.addSlide("t-SNE :: CalTech-256 animals")->addScrollableImage("t-SNE animals", "/Users/gene/bin/tsne/grid_animals2.png", 0, 0, 1, 1);
    slideshow.addSlide("t-SNE :: Ikea catalog (by Golan Levin + Aman Tiwari)")->addScrollableImage("t-SNE ikea", "/Users/gene/bin/tsne/contributions/ikea_golan_aman.jpg", 0, 0, 1, 1);
    

    
    
    
    
    
    
    
    
    
    s = slideshow.addSlide("Style Transfer");
    s->addImage("Mona Lisa -> Cubist/Expressionist/Impressionist", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_cubist_expressionist_impressionist.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Video style transfer");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("video style", "/Users/gene/bin/style-transfer/10_optical_flow/video-style-transfer-x4-reordered.mp4", true, 0, 0, 1, 1);
    
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
    
    s = slideshow.addSlide("WaveNets");
    s->addText(h3, ofColor(0), "https://ibab", 0.05, 0.01, 0.9);
    s->addSound("il barbere de sevilla", "/Users/gene/bin/wavenet/barber_25525.wav", h4, false, false, 0.05, 0.6, 0.25, 0.04);


    s = slideshow.addSlide("Closed-captioning wavenets");
    //s->addMovie("CC wavenets", "/Users/gene/bin/misc/Closed-captioning WaveNets.mp4", true, 0, 0, 1, 1);
    s->addImage("cc wavenets", "/Users/gene/bin/misc/closedcapwavenets.jpg", 0, 0, 1, 1);

    
    
    
    // ADVERSARIAL NETS
    
    
    s = slideshow.addSlide("Visual Semantic Alignment (Li, Karpathy)");
    s->addImage("visual semantic alignment", "/Users/gene/bin/misc/stock/rnn/captioning-visual-semantic-align.png", 0, 0, 0.5, 1);
    s->addImage("visual semantic alignment", "/Users/gene/bin/misc/stock/rnn/captioning-architecture.png", 0.5, 0, 0.5, 0.5);
    s->addImage("visual semantic alignment", "/Users/gene/bin/misc/stock/rnn/captioning-visual-semantic-align-architecture.png", 0.5, 0.5, 0.5, 0.5);
    
    s = slideshow.addSlide("Mona Lisa densecap");
    s->addImage("densecap", "/Users/gene/bin/densecap/monalisa-densecap.png", 0, 0.1, 1, 0.8);

    s = slideshow.addSlide("Dense captioning Atlas, The Next Generation");
    s->addMovie("densecap", "/Users/gene/bin/densecap/atlas.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Dense captioning Pouff's grocery trip");
    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream_grocery.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "original: https://www.youtube.com/watch?v=DgPaCWJL7XI", 0.01, 0.0, 0.99);
    
    s = slideshow.addSlide("Dense captioning Deepdream");
    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream.mp4", true, 0, 0, 1, 1);

    
    
    
    
    
    
    
    
    
    
    
    s = slideshow.addSlide("ml4a.github.io");
    //s = slideshow.addSlide("Machine Learning for Artists @ ITP-NYU, Spring 2016");
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
    
    // games
    // mention lee won game 4
    
    
    // issues
    
    
    // deepmind + atari
    
    
    s = slideshow.addSlide("I will do my best to play a beautiful and interesting game");
    s->addMovie("t-SNE convergence", "/Users/gene/Downloads/imgs/tsne_manual.mp4", true, 0, 0, 1, 1);
    s->addRect(ofColor(255,160), 0.005, 0.19, 0.33, 0.25);
    s->addRect(ofColor(255,160), 0.595, 0.19, 0.33, 0.25);
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
    
    
    
    
    
    
    
    
    
    
    
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
    
    
    
    /*
    // creative machines
    s = slideshow.addSlide("Creativity");
    s->addText(h2, ofColor(0), "so can machines be creative?", 0.1, 0.2, 0.7);
    
    s = slideshow.addSlide("Can machines think?");
    s->addImage("cmt 1", "/Users/gene/bin/misc/turing_cmt_1.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Can machines think?");
    s->addImage("cmt 1", "/Users/gene/bin/misc/turing_cmt_2.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Can machines think?");
    s->addText(h2, ofColor(0), "\"The question of whether a computer can think is no more interesting than the question of whether a submarine can swim.\" - Edsger Dijkstra", 0.1, 0.1, 0.7);
    
    
   
    // Adversarial nets
    s = slideshow.addSlide("Closed-captioning wavenets");
    //s->addMovie("CC wavenets", "/Users/gene/bin/misc/Closed-captioning WaveNets.mp4", true, 0, 0, 1, 1);
    s->addImage("cc wavenets", "/Users/gene/bin/misc/closedcapwavenets.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Adversarial nets");
    s->addImage("perceptrons top", "/Users/gene/bin/misc/stock/nytimes_perceptron_top.png", 0.0, 0.0, 1, 0.24);
    s->addImage("perceptrons", "/Users/gene/bin/misc/stock/nytimes_perceptron.png", 0.0, 0.24, 1, 0.76);
    
    s = slideshow.addSlide("Adversarial nets");
    s->addImage("inbox", "/Users/gene/Writing/_Talks/S4AD-Pioneerworks/05_sequences/dribnet_monwed2.png", 0.1, 0.1, 0.8, 0.8);
    
    
    /////////////////////////
    
    s = slideshow.addSlide("Action >> philosophy");
    s->addImage("goboard", "/Users/gene/bin/misc/goboard.jpg", 0, 0.2, 1, 0.8);
    s->addText(h3, ofColor(0), "inner self vs outer world", 0.1, 0.1, 0.8);
    
    ///////////////
    
    s = slideshow.addSlide("The Neural Aesthetic (brainbow by Katie Matho)");
    s->addImage("neural net", "/Users/gene/bin/misc/stock/brainbow.jpg", 0, 0, 1, 1);
    
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
    

    
     */
}