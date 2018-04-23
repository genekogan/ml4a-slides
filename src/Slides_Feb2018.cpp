#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::DattackRiga(){
    ITPFeb2018();
}

//--------------------------------------------------------------
void ofApp::ITPFeb2018(){
    
    ////////////////////////////////////////////////////////////////////////
    /////////  ABOUT ME
    
    
    //s = slideshow.addSlide("hello ITP :)");
    s = slideshow.addSlide("Dattack, Staro Riga 2018 projektu darbnīca");
    s->addText(h2, ofColor(255), "@genekogan", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(255), "genekogan.com", 0.1, 0.4, 0.5);
    s->addText(h2, ofColor(255), "ml4a.github.io", 0.6, 0.3, 0.5);
    s->addText(h2, ofColor(255), "@ml4a_", 0.6, 0.4, 0.5);
    //s->addText(h3, ofColor(200), "12 Feb 2018", 0.88, 0.0, 0.9);
    s->addText(h3, ofColor(200), "3 Mar 2018", 0.88, 0.0, 0.9);
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
    
    s = slideshow.addSlide("Nature and simulation");
    s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/listening-to-the-ocean-10.jpg", 0.505, 0, 0.5, 1);
    s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/generator5.png", 0, 0, 0.5, 1);
    s->addText(h3, ofColor(255), "Listening to the Ocean (w/ Phillip Stearns & Dan Tesene)", 0.1, 0.0, 0.9);
    
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
    
    
    ////////////////////////////////////////////////////////////////////////
    /////////  DEEP LEARNING PROJECTS
    
    
    // DCGAN + a book from the sky
    
    s = slideshow.addSlide("Deep convolutional generative adversarial network (DCGAN)");
    s->addImage("Mona Lisa", "/Users/gene/bin/dcgan/public/dcgan-glasses.png", 0.0, 0.06, 1.0, 0.94);
    s->addText(h4, ofColor(255), "Radford, Metz, Chintala 2015 (https://arxiv.org/abs/1511.06434)", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("HIT-OR3C dataset (Harbin University)");
    s->addScrollableImage("Actuals", "/Users/gene/bin/dcgan/summary/actual.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Fake (R) vs. Real (L)");
    s->addImage("Mona Lisa", "/Users/gene/bin/dcgan/summary/fakereal.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("A Book from the Sky");
    s->addMovie("zloops", "/Users/gene/bin/dcgan/summary/zloops.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Character interpolations");
    s->addMovie("interplations", "/Users/gene/bin/dcgan/public/interpolations_3.mp4", true, 0.2, 0.15, 0.6, 0.6);
    
    s = slideshow.addSlide("Radical interpolations");
    s->addText(h3, ofColor(255), "interpolations across characters sharing the same radical often appear to preserve it", 0.1, 0.0, 0.8);
    s->addMovie("radical interpolations", "/Users/gene/bin/dcgan/summary/radinterpolation.mp4", true, 0, 0.2, 1, 0.8);
    
    s = slideshow.addSlide("Arithmetic (this is really stretching it)");
    s->addMovie("arithmetic", "/Users/gene/bin/dcgan/summary/arithmetic2.mp4", true, 0, 0, 1, 1);
    
    // pix2pix + Invisible Cities + meat puppet
    
    s = slideshow.addSlide("Image-to-Image Translation with Conditional Adversarial Nets");
    s->addImage("fb", "/Users/gene/bin/pix2pix/teaser_v3a.png", 0.0, 0.04, 1.0, 0.96);
    s->addText(h3, ofColor(100), "phillipi.github.io/pix2pix/", 0.02, 0.00, 0.8);
    s->start();
    
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
    
    s = slideshow.addSlide("Cubist Mirror");
    s->addMovie("altai mirror", "/Users/gene/bin/alt-ai/cubistmirror_v1.mp4", true, 0, 0, 0.61, 0.67);
    s->addMovie("nabi mirror", "/Users/gene/bin/alt-ai/cubistmirror-nabi.mp4", true, 0.55, 0.2, 0.455, 0.8);
    
    s = slideshow.addSlide("Neural synthesis / Deepdream");
    s->addImage("ns", "/Users/gene/bin/lapnorm/initial_experiments/frame0010 (2).png", 0, 0, 1, 1);
    s = slideshow.addSlide("Neural synthesis / Deepdream");
    s->addImage("ns", "/Users/gene/bin/lapnorm/initial_experiments/eureka.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients / Deepdream");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F6-34+G2-139_n11_o08_r1.33_cr4_b0.60.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Neural synthesis / Deepdream");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G3-283+F3-26+H1-54_n11_o08_r1.33_cr0_b0.75.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Neural synthesis / Deepdream");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G3-45+G1-36+H6-23_n15_o08_r1.33_cr5_b0.21.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Neural synthesis / Deepdream");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/nips/NIPS_GeneKogan_new.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Body Language (Nancy Nowacek, Morgan Hille-Refakis, David Sheinkopf, Caitlin Sikora, Gene Kogan)");
    s->addMovie("body language", "/Users/gene/bin/misc/morgan-gesture-classifier.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Nabi hackathon project");
    s->addImage("fb", "/Users/gene/bin/ml4a/nabimusic2.png", 0.0, 0.00, 1.0, 1.0);
    
    s = slideshow.addSlide("DoodleTunes");
    s->addMovie("fb", "/Users/gene/bin/ml4a/Doodle Tunes-small.mp4", true, 0.0, 0.00, 1.0, 1.0);
    
    s = slideshow.addSlide("DoodleClassifier");
    s->addMovie("fb", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, 0.0, 0.00, 1.0, 1.0);
    
    CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
    s = slideshow.addSlide("What happens when it's real-time?");
    s->addAction(cmd);
    // cmd->setStyleModel("/Users/gene/bin/style-transfer/models/kandinsky_e2_full512.model");
    cmd->setStyleModel("/Users/gene/bin/style-transfer/models/cubist.model");
    
    s = slideshow.addSlide("Cubist Mirror");
    s->addMovie("altai mirror", "/Users/gene/bin/alt-ai/cubistmirror_v1.mp4", true, 0, 0, 0.61, 0.67);
    s->addMovie("nabi mirror", "/Users/gene/bin/alt-ai/cubistmirror-nabi.mp4", true, 0.55, 0.2, 0.455, 0.8);
    
    s = slideshow.addSlide("Cubist Mirror @ TIFF");
    s->addImage("fb", "/Users/gene/bin/style-transfer/cubist-mirror/cubist-mirror-tiff.jpg", 0.0, 0.00, 1.0, 1.0);
    
    s = slideshow.addSlide("Cubist Mirror @ TIFF");
    s->addMovie("nabi mirror", "/Users/gene/bin/alt-ai/cubistmirror-nabi.mp4", true, 0.55, 0.2, 0.455, 0.8);

    
    ////////////////////////////////////////////////////////////////////////
    /////////  ML4A, workshops/guides
    
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
    
    s = slideshow.addSlide("t-SNE :: CalTech-256 animals");
    s->addScrollableImage("t-SNE animals", "/Users/gene/bin/tsne/grid_animals2.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("ml4a-ofx");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-ofx.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
    s->addImage("yolo", "/Users/gene/bin/ml4a/ReverseImageSearch/yolo-screen1.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Wekinator + Interactivity");
    s->addMovie("transfer learning", "/Users/gene/bin/misc/wekinator-coffee-croissant.mp4", true, 0, 0, 1, 1);
    // ableton demo
    
    s = slideshow.addSlide("Audio + Text t-SNEs");
    s->setBackgroundFunction(this, &ofApp::drawBgWhite);
    s->addScrollableImage("wiki t-SNE", "/Users/gene/bin/tsne/wiki-tSNE.png", -0.05, 0.0, 0.72, 0.76);
    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0.48, 0.39, 0.54, 0.63);
    attd->setTsnePath("/Users/gene/Teaching/ML4A/ml4a-guides/data/example-audio-tSNE-drums.json");
    s->addAction(attd);
    attd->start();
    s->addText(h4, ofColor(255), "www.genekogan.com/works/wiki-tSNE", 0.03, 0.8, 0.7);
    s->addText(h4, ofColor(255), "github.com/ml4a/ml4a-ofx", 0.67, 0.3, 0.7);
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-nn.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-hnnat.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Machine Learning for Artists @ ITP, Spring 2016");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("ml4a @ itp", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/ml4a @ itp-nyu -- timelapse_crop.mp4", true, 0, 0, 1, 1)->setPositionRandom();
    s->loadAssets();

    
    ////////////////////////////////////////////////////////////////////////
    /////////  PROJECTS BY OTHERS
    
    
    
    /*
     s = slideshow.addSlide("Chino Kim - Beta blockers");
     s->addMovie("beta blockers", "/Users/gene/bin/alt-ai/betablockers.mp4", true, 0, 0, 1, 1);
     
     s = slideshow.addSlide("Corbin Ordel & Aaron Montoya-Moraga - Piano Die Hard");
     s->addImage("pdh", "/Users/gene/Web/alt-AI/images/exhibit-corbin.jpg", 0, 0, 0.7, 1);
     s->addMovie("pdh", "/Users/gene/bin/misc/stock/pianodiehard.mp4", true, 0.7, 0, 0.3, 1);
     
     s = slideshow.addSlide("Melanie Hoff + Dhruv Mehrotra - Doppelcam");
     s->addImage("doppelcam", "/Users/gene/Web/alt-AI/images/exhibit-melanie.jpg", 0, 0.15, 1, 0.85);
     s->addText(h4, ofColor(255), "https://doppel.camera", 0.01, 0.0, 0.99);
     
     s = slideshow.addSlide("Seth Kranzler - Neural Recycle");
     s->addImage("assisted visions", "/Users/gene/Web/alt-AI/images/exhibit-seth.jpg", 0, 0, 1, 1);
     
     s = slideshow.addSlide("Marcela Nowak - Instagram mosaics");
     s->addScrollableImage("mosaic", "/Users/gene/bin/misc/stock/marcela-balloons3.png", 0, 0, 1, 1);
     s = slideshow.addSlide("Marcela Nowak - Instagram mosaics");
     s->addScrollableImage("mosaic", "/Users/gene/bin/misc/stock/marcela-toucan.png", 0, 0, 1, 1);
     
     s = slideshow.addSlide("Bjoern Karmann - Objectifier");
     s->addImage("objectifier", "/Users/gene/bin/misc/prototype_objectifier.jpg", 0, 0, 0.6, 0.55);
     s->addMovie("objectifier", "/Users/gene/bin/misc/prototype_objectifier.mp4", true, 0.32, 0.4, 0.7, 0.6);
     s->addText(h4, ofColor(0), "bjoernkarmann.dk/objectifier", 0.65, 0.0, 0.4);
     s->start();
     
     s = slideshow.addSlide("Sam Hains - @zero_likes");
     s->setBackgroundFunction(this, &ofApp::drawBgBlack);
     s->addImage("zero_likes", "/Users/gene/bin/dcgan/zero_likes/zero_likes-selfie.png", 0.0, 0.05, 1, 0.9);
     
     s = slideshow.addSlide("Sam Hains - @zero_likes");
     s->setBackgroundFunction(this, &ofApp::drawBgBlack);
     s->addImage("zero_likes", "/Users/gene/bin/dcgan/zero_likes/zero_likes-doglooks.png", 0.0, 0.05, 1, 0.9);
     
     s = slideshow.addSlide("Sam Hains - @zero_likes");
     s->setBackgroundFunction(this, &ofApp::drawBgBlack);
     s->addImage("zero_likes", "/Users/gene/bin/dcgan/zero_likes/zero_likes-sandwich.png", 0.0, 0.05, 1, 0.9);
     
     s = slideshow.addSlide("Hannah Davis - TransProse");
     s->addMovie("transprose", "/Users/gene/bin/misc/TransProse - 2 Pieces-ItWLLzMislM.mp4", true, 0, 0, 1, 1);
     s->addText(h4, ofColor(255), "http://www.musicfromtext.com/", 0.01, 0.0, 0.99);
     
     s = slideshow.addSlide("Cassie Tarakajian - Visualizing Neural Networks");
     s->addMovie("visualizing neural nets", "/Users/gene/bin/alt-ai/lisa-oculus-convnet.mp4", true, 0, 0, 1, 1);
     
     s = slideshow.addSlide("Sougwen Chung - Drawing operations");
     s->addImage("visualizing neural nets", "/Users/gene/bin/misc/stock/sougwen-robot.png", 0, 0, 1, 1);
     */
    
    ////////////////////////////////////////////////////////////////////////
    /////////  FRONTIERS
    
    s = slideshow.addSlide("So so many GANs");
    s->addImage("classvis", "/Users/gene/bin/misc/stock/GANpublications.png", 0, 0, 1, 0.87);
    s->addText(h3, ofColor(255), "Graph by Bruno Gavranovic, via https://deephunt.in/the-gan-zoo-79597dc8c347", 0.1, 0.9, 0.8);
    
    s = slideshow.addSlide("BEGAN");
    s->addImage("BEGAN", "/Users/gene/bin/misc/stock/BEGAN.png", 0.1, 0.3, 0.8, 0.6);
    s->addText(h3, ofColor(255), "Boundary Equilibrium GANs (BEGAN)\nBerthelot et al (https://arxiv.org/abs/1703.10717)", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("Progressive Growing of GANs for Improved Quality, Stability, and Variation");
    s->addMovie("pgan", "/Users/gene/bin/misc/nvidia-progressive-faces.mp4", true, 0, 0.075, 1, 0.93)->setLoop(true);
    s->addText(h4, ofColor(255), "Karras et al (NVIDIA), 2017\nhttp://research.nvidia.com/publication/2017-10_Progressive-Growing-of", 0.01, 0.0, 0.99);
    
    s = slideshow.addSlide("...");
    s->addImage("joke", "/Users/gene/bin/misc/DoppelGAN/highlights/rock-zelwegger.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("InfoGAN");
    s->addImage("InfoGAN", "/Users/gene/bin/misc/stock/InfoGAN1.png", 0.0, 0.07, 1.0, 0.4);
    s->addImage("InfoGAN", "/Users/gene/bin/misc/stock/InfoGAN2.png", 0.0, 0.47, 1.0, 0.53);
    s->addText(h3, ofColor(255), "Information maximizing GAN (InfoGAN)\nChen et al (https://arxiv.org/abs/1606.03657)", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("Natural language generation");
    s->addImage("fb", "/Users/gene/bin/misc/stock/neural-storyteller.png", 0, 0.2, 1, 0.6);
    s->addText(h3, ofColor(255), "https://github.com/ryankiros/neural-storyteller", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("Dense captioning Deepdream");
    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream.mp4", true, 0, 0, 1, 1);
    
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
void ofApp::MLLiteracySFPC(){
    
    ////////////////////////////////////////////////////////////////////////
    /////////  ABOUT ME
    
    s = slideshow.addSlide("Machine Learning Literacy @ SFPC");
    s->addText(h2, ofColor(255), "@genekogan", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(255), "genekogan.com", 0.1, 0.4, 0.5);
    s->addText(h2, ofColor(255), "ml4a.github.io", 0.6, 0.3, 0.5);
    s->addText(h2, ofColor(255), "@ml4a_", 0.6, 0.4, 0.5);
    s->addText(h3, ofColor(200), "12 Feb 2018", 0.88, 0.0, 0.9);
    s->start();
    
    
    // about me
    s = slideshow.addSlide("Music information retrieval (~2008-2011)");
    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
    s->addImage("genre VA", "/Users/gene/bin/misc/sourcetone/genre-AvgVA.jpg", 0.0, 0.4, 0.42, 0.6);
    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
    
    s = slideshow.addSlide("Musical instruments (w/ Jeff Snyder) ~2014");
    s->addImage("tweet", "/Users/gene/Web/genekogan.github.io/_site/images/birl/birl1.jpg", 0.0, 0.0, 1, 0.35);
    s->addImage("tweet", "/Users/gene/bin/misc/Snyderphonics_Manta.jpg", 0.0, 0.365, 1, 0.64);
    
    // s = slideshow.addSlide("Media arts / creative tech");
    // s->addMovie("simulation", "/Users/gene/bin/images/VertexFields2_01.29.2012.mov", true, 0, 0, 1, 1);
    //
    // s = slideshow.addSlide("Nature and simulation");
    // s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/listening-to-the-ocean-10.jpg", 0.505, 0, 0.5, 1);
    // s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/generator5.png", 0, 0, 0.5, 1);
    // s->addText(h3, ofColor(255), "Listening to the Ocean (w/ Phillip Stearns & Dan Tesene)", 0.1, 0.0, 0.9);
    //
    // s = slideshow.addSlide("Kinect Projector Toolkit");
    // s->addMovie("KPT", "/Users/gene/bin/opera-toolkit/colin-ribbons-2_nosound.mp4", true, 0.0, 0, 0.5, 0.6);
    // s->addMovie("KPT", "/Users/gene/bin/kinect-projector-toolkit/Silhouettes @ Saigon Ranger_nosound.mp4", true, 0.4, 0.4, 0.64, 0.62);
    //
    // s = slideshow.addSlide("Machine Yearning (2014)");
    // s->addMovie("machine yearning", "/Users/gene/bin/machine-yearning/machine-yearning-gopro.mp4", true, 0.0, 0, 1, 1);
    
    //        s = slideshow.addSlide("Mass collaboration: EcoHacker-Build");
    //        s->addImage("ecohack", "/Users/gene/bin/ecohacker-build/_mg_7093_14926714478_o.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("ML + visual art (2015->)");
    s->addMovie("dcgan", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0.026, 0.5, 0.47);
    s->addImage("deepdream", "/Users/gene/bin/misc/stock/building-dreams.png", 0, 0.515, 0.5, 0.48);
    s->addImage("stylenet", "/Users/gene/bin/misc/stock/stylenet-original.png", 0.5, 0.53, 0.5, 0.47);
    s->addImage("synthesizing original", "/Users/gene/bin/misc/stock/synthesizing-original.jpg", 0.5, 0.025, 0.5, 0.48);
    s->addText(h4, ofColor(255), "https://www.youtube.com/watch?v=QYcKCGdZvq4", 0.01, 0.0, 1.0);
    s->addText(h5, ofColor(255), "research.googleblog.com/2015/06/inceptionism-going-deeper-into-neural.html", 0.002, 0.475, 1.0);
    s->addText(h4, ofColor(255), "https://arxiv.org/abs/1508.06576", 0.6, 0.51, 1.0);
    s->addText(h4, ofColor(255), "http://www.evolvingai.org/synthesizing", 0.6, 0.0, 1.0);
    
    
    ////////////////////////////////////////////////////////////////////////
    /////////  DEEP LEARNING PROJECTS
    
    
    // DCGAN + a book from the sky
    
    // s = slideshow.addSlide("Deep convolutional generative adversarial network (DCGAN)");
    // s->addImage("Mona Lisa", "/Users/gene/bin/dcgan/public/dcgan-glasses.png", 0.0, 0.06, 1.0, 0.94);
    // s->addText(h4, ofColor(255), "Radford, Metz, Chintala 2015 (https://arxiv.org/abs/1511.06434)", 0.1, 0.0, 0.8);
    //
    // s = slideshow.addSlide("HIT-OR3C dataset (Harbin University)");
    // s->addScrollableImage("Actuals", "/Users/gene/bin/dcgan/summary/actual.png", 0, 0, 1, 1);
    //
    // s = slideshow.addSlide("Fake (R) vs. Real (L)");
    // s->addImage("Mona Lisa", "/Users/gene/bin/dcgan/summary/fakereal.png", 0, 0, 1, 1);
    //
    // s = slideshow.addSlide("A Book from the Sky");
    // s->addMovie("zloops", "/Users/gene/bin/dcgan/summary/zloops.mp4", true, 0, 0, 1, 1);
    //
    // s = slideshow.addSlide("Character interpolations");
    // s->addMovie("interplations", "/Users/gene/bin/dcgan/public/interpolations_3.mp4", true, 0.2, 0.15, 0.6, 0.6);
    //
    // s = slideshow.addSlide("Radical interpolations");
    // s->addText(h3, ofColor(255), "interpolations across characters sharing the same radical often appear to preserve it", 0.1, 0.0, 0.8);
    // s->addMovie("radical interpolations", "/Users/gene/bin/dcgan/summary/radinterpolation.mp4", true, 0, 0.2, 1, 0.8);
    //
    // s = slideshow.addSlide("Arithmetic (this is really stretching it)");
    // s->addMovie("arithmetic", "/Users/gene/bin/dcgan/summary/arithmetic2.mp4", true, 0, 0, 1, 1);
    
    // pix2pix + Invisible Cities + meat puppet
    
    s = slideshow.addSlide("Image-to-Image Translation with Conditional Adversarial Nets");
    s->addImage("fb", "/Users/gene/bin/pix2pix/teaser_v3a.png", 0.0, 0.04, 1.0, 0.96);
    s->addText(h3, ofColor(100), "phillipi.github.io/pix2pix/", 0.02, 0.00, 0.8);
    s->start();
    
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
    
    //    s = slideshow.addSlide("Cubist Mirror");
    //    s->addMovie("altai mirror", "/Users/gene/bin/alt-ai/cubistmirror_v1.mp4", true, 0, 0, 0.61, 0.67);
    //    s->addMovie("nabi mirror", "/Users/gene/bin/alt-ai/cubistmirror-nabi.mp4", true, 0.55, 0.2, 0.455, 0.8);
    //
    s = slideshow.addSlide("Neural synthesis / Deepdream");
    s->addImage("ns", "/Users/gene/bin/lapnorm/initial_experiments/frame0010 (2).png", 0, 0, 1, 1);
    s = slideshow.addSlide("Neural synthesis / Deepdream");
    s->addImage("ns", "/Users/gene/bin/lapnorm/initial_experiments/eureka.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients / Deepdream");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F6-34+G2-139_n11_o08_r1.33_cr4_b0.60.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Neural synthesis / Deepdream");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G3-283+F3-26+H1-54_n11_o08_r1.33_cr0_b0.75.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Neural synthesis / Deepdream");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G3-45+G1-36+H6-23_n15_o08_r1.33_cr5_b0.21.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Neural synthesis / Deepdream");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/nips/NIPS_GeneKogan_new.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Body Language (Nancy Nowacek, Morgan Hille-Refakis, David Sheinkopf, Caitlin Sikora, Gene Kogan)");
    s->addMovie("body language", "/Users/gene/bin/misc/morgan-gesture-classifier.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Nabi hackathon project");
    s->addImage("fb", "/Users/gene/bin/ml4a/nabimusic2.png", 0.0, 0.00, 1.0, 1.0);
    
    s = slideshow.addSlide("DoodleTunes");
    s->addMovie("fb", "/Users/gene/bin/ml4a/Doodle Tunes-small.mp4", true, 0.0, 0.00, 1.0, 1.0);
    
    s = slideshow.addSlide("DoodleClassifier");
    s->addMovie("fb", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, 0.0, 0.00, 1.0, 1.0);
    
    CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
    s = slideshow.addSlide("What happens when it's real-time?");
    s->addAction(cmd);
    // cmd->setStyleModel("/Users/gene/bin/style-transfer/models/kandinsky_e2_full512.model");
    cmd->setStyleModel("/Users/gene/bin/style-transfer/models/cubist.model");
    
    s = slideshow.addSlide("Cubist Mirror");
    s->addMovie("altai mirror", "/Users/gene/bin/alt-ai/cubistmirror_v1.mp4", true, 0, 0, 0.61, 0.67);
    s->addMovie("nabi mirror", "/Users/gene/bin/alt-ai/cubistmirror-nabi.mp4", true, 0.55, 0.2, 0.455, 0.8);
    
    s = slideshow.addSlide("Cubist Mirror @ TIFF");
    s->addImage("fb", "/Users/gene/bin/style-transfer/cubist-mirror/cubist-mirror-tiff.jpg", 0.0, 0.00, 1.0, 1.0);
    
    
    ////////////////////////////////////////////////////////////////////////
    /////////  ML4A, workshops/guides
    
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
    
    s = slideshow.addSlide("t-SNE :: CalTech-256 animals");
    s->addScrollableImage("t-SNE animals", "/Users/gene/bin/tsne/grid_animals2.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("ml4a-ofx");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-ofx.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
    s->addImage("yolo", "/Users/gene/bin/ml4a/ReverseImageSearch/yolo-screen1.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Wekinator + Interactivity");
    s->addMovie("transfer learning", "/Users/gene/bin/misc/wekinator-coffee-croissant.mp4", true, 0, 0, 1, 1);
    // ableton demo
    
    s = slideshow.addSlide("Audio + Text t-SNEs");
    s->setBackgroundFunction(this, &ofApp::drawBgWhite);
    s->addScrollableImage("wiki t-SNE", "/Users/gene/bin/tsne/wiki-tSNE.png", -0.05, 0.0, 0.72, 0.76);
    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0.48, 0.39, 0.54, 0.63);
    attd->setTsnePath("/Users/gene/Teaching/ML4A/ml4a-guides/data/example-audio-tSNE-drums.json");
    s->addAction(attd);
    attd->start();
    s->addText(h4, ofColor(255), "www.genekogan.com/works/wiki-tSNE", 0.03, 0.8, 0.7);
    s->addText(h4, ofColor(255), "github.com/ml4a/ml4a-ofx", 0.67, 0.3, 0.7);
    
    s = slideshow.addSlide("ml4a.github.io/classes");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("ml4a @ itp", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/ml4a @ itp-nyu -- timelapse_crop.mp4", true, 0, 0, 1, 1)->setPositionRandom();
    s->loadAssets();
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-nn.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-hnnat.png", 0, 0, 1, 1);
    
    
    ////////////////////////////////////////////////////////////////////////
    /////////  PROJECTS BY OTHERS
    
    
    
    /*
     s = slideshow.addSlide("Chino Kim - Beta blockers");
     s->addMovie("beta blockers", "/Users/gene/bin/alt-ai/betablockers.mp4", true, 0, 0, 1, 1);
     
     s = slideshow.addSlide("Corbin Ordel & Aaron Montoya-Moraga - Piano Die Hard");
     s->addImage("pdh", "/Users/gene/Web/alt-AI/images/exhibit-corbin.jpg", 0, 0, 0.7, 1);
     s->addMovie("pdh", "/Users/gene/bin/misc/stock/pianodiehard.mp4", true, 0.7, 0, 0.3, 1);
     
     s = slideshow.addSlide("Melanie Hoff + Dhruv Mehrotra - Doppelcam");
     s->addImage("doppelcam", "/Users/gene/Web/alt-AI/images/exhibit-melanie.jpg", 0, 0.15, 1, 0.85);
     s->addText(h4, ofColor(255), "https://doppel.camera", 0.01, 0.0, 0.99);
     
     s = slideshow.addSlide("Seth Kranzler - Neural Recycle");
     s->addImage("assisted visions", "/Users/gene/Web/alt-AI/images/exhibit-seth.jpg", 0, 0, 1, 1);
     
     s = slideshow.addSlide("Marcela Nowak - Instagram mosaics");
     s->addScrollableImage("mosaic", "/Users/gene/bin/misc/stock/marcela-balloons3.png", 0, 0, 1, 1);
     s = slideshow.addSlide("Marcela Nowak - Instagram mosaics");
     s->addScrollableImage("mosaic", "/Users/gene/bin/misc/stock/marcela-toucan.png", 0, 0, 1, 1);
     
     s = slideshow.addSlide("Bjoern Karmann - Objectifier");
     s->addImage("objectifier", "/Users/gene/bin/misc/prototype_objectifier.jpg", 0, 0, 0.6, 0.55);
     s->addMovie("objectifier", "/Users/gene/bin/misc/prototype_objectifier.mp4", true, 0.32, 0.4, 0.7, 0.6);
     s->addText(h4, ofColor(0), "bjoernkarmann.dk/objectifier", 0.65, 0.0, 0.4);
     s->start();
     
     s = slideshow.addSlide("Sam Hains - @zero_likes");
     s->setBackgroundFunction(this, &ofApp::drawBgBlack);
     s->addImage("zero_likes", "/Users/gene/bin/dcgan/zero_likes/zero_likes-selfie.png", 0.0, 0.05, 1, 0.9);
     
     s = slideshow.addSlide("Sam Hains - @zero_likes");
     s->setBackgroundFunction(this, &ofApp::drawBgBlack);
     s->addImage("zero_likes", "/Users/gene/bin/dcgan/zero_likes/zero_likes-doglooks.png", 0.0, 0.05, 1, 0.9);
     
     s = slideshow.addSlide("Sam Hains - @zero_likes");
     s->setBackgroundFunction(this, &ofApp::drawBgBlack);
     s->addImage("zero_likes", "/Users/gene/bin/dcgan/zero_likes/zero_likes-sandwich.png", 0.0, 0.05, 1, 0.9);
     
     s = slideshow.addSlide("Hannah Davis - TransProse");
     s->addMovie("transprose", "/Users/gene/bin/misc/TransProse - 2 Pieces-ItWLLzMislM.mp4", true, 0, 0, 1, 1);
     s->addText(h4, ofColor(255), "http://www.musicfromtext.com/", 0.01, 0.0, 0.99);
     
     s = slideshow.addSlide("Cassie Tarakajian - Visualizing Neural Networks");
     s->addMovie("visualizing neural nets", "/Users/gene/bin/alt-ai/lisa-oculus-convnet.mp4", true, 0, 0, 1, 1);
     
     s = slideshow.addSlide("Sougwen Chung - Drawing operations");
     s->addImage("visualizing neural nets", "/Users/gene/bin/misc/stock/sougwen-robot.png", 0, 0, 1, 1);
     */
    
    ////////////////////////////////////////////////////////////////////////
    /////////  FRONTIERS
    
    s = slideshow.addSlide("So so many GANs");
    s->addImage("classvis", "/Users/gene/bin/misc/stock/GANpublications.png", 0, 0, 1, 0.87);
    s->addText(h3, ofColor(255), "Graph by Bruno Gavranovic, via https://deephunt.in/the-gan-zoo-79597dc8c347", 0.1, 0.9, 0.8);
    
    s = slideshow.addSlide("BEGAN");
    s->addImage("BEGAN", "/Users/gene/bin/misc/stock/BEGAN.png", 0.1, 0.3, 0.8, 0.6);
    s->addText(h3, ofColor(255), "Boundary Equilibrium GANs (BEGAN)\nBerthelot et al (https://arxiv.org/abs/1703.10717)", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("Progressive Growing of GANs for Improved Quality, Stability, and Variation");
    s->addMovie("pgan", "/Users/gene/bin/misc/nvidia-progressive-faces.mp4", true, 0, 0.075, 1, 0.93)->setLoop(true);
    s->addText(h4, ofColor(255), "Karras et al (NVIDIA), 2017\nhttp://research.nvidia.com/publication/2017-10_Progressive-Growing-of", 0.01, 0.0, 0.99);
    
    s = slideshow.addSlide("...");
    s->addImage("joke", "/Users/gene/bin/misc/DoppelGAN/highlights/rock-zelwegger.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("InfoGAN");
    s->addImage("InfoGAN", "/Users/gene/bin/misc/stock/InfoGAN1.png", 0.0, 0.07, 1.0, 0.4);
    s->addImage("InfoGAN", "/Users/gene/bin/misc/stock/InfoGAN2.png", 0.0, 0.47, 1.0, 0.53);
    s->addText(h3, ofColor(255), "Information maximizing GAN (InfoGAN)\nChen et al (https://arxiv.org/abs/1606.03657)", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("Natural language generation");
    s->addImage("fb", "/Users/gene/bin/misc/stock/neural-storyteller.png", 0, 0.2, 1, 0.6);
    s->addText(h3, ofColor(255), "https://github.com/ryankiros/neural-storyteller", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("Dense captioning Deepdream");
    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream.mp4", true, 0, 0, 1, 1);
    
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



void ofApp::ArsIncognita() {
    
    
    s = slideshow.addSlide("Ars Incognita, 16 Mar 2018");
    s->addText(h2, ofColor(255), "@genekogan", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(255), "genekogan.com", 0.1, 0.4, 0.5);
    s->addText(h2, ofColor(255), "ml4a.github.io", 0.6, 0.3, 0.5);
    s->addText(h2, ofColor(255), "@ml4a_", 0.6, 0.4, 0.5);
    s->start();
    
    s = slideshow.addSlide("Media arts / creative tech");
    s->addMovie("simulation", "/Users/gene/bin/images/VertexFields2_01.29.2012.mov", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Nature and simulation");
    s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/listening-to-the-ocean-10.jpg", 0.505, 0, 0.5, 1);
    s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/generator5.png", 0, 0, 0.5, 1);
    s->addText(h3, ofColor(255), "Listening to the Ocean (w/ Phillip Stearns & Dan Tesene)", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Kinect Projector Toolkit");
    s->addMovie("KPT", "/Users/gene/bin/opera-toolkit/colin-ribbons-2_nosound.mp4", true, 0.0, 0, 0.5, 0.6);
    s->addMovie("KPT", "/Users/gene/bin/kinect-projector-toolkit/Silhouettes @ Saigon Ranger_nosound.mp4", true, 0.4, 0.4, 0.64, 0.62);
    
    s = slideshow.addSlide("Machine Yearning (2014)");
    s->addMovie("machine yearning", "/Users/gene/bin/machine-yearning/machine-yearning-gopro.mp4", true, 0.0, 0, 1, 1);
    
    //        s = slideshow.addSlide("Mass collaboration: EcoHacker-Build");
    //        s->addImage("ecohack", "/Users/gene/bin/ecohacker-build/_mg_7093_14926714478_o.jpg", 0, 0, 1, 1);
    
    // about me
    s = slideshow.addSlide("Music information retrieval (~2008-2011)");
    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
    s->addImage("genre VA", "/Users/gene/bin/misc/sourcetone/genre-AvgVA.jpg", 0.0, 0.4, 0.42, 0.6);
    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
    
    s = slideshow.addSlide("Musical instruments (w/ Jeff Snyder) ~2014");
    s->addImage("tweet", "/Users/gene/Web/genekogan.github.io/_site/images/birl/birl1.jpg", 0.0, 0.0, 1, 0.35);
    s->addImage("tweet", "/Users/gene/bin/misc/Snyderphonics_Manta.jpg", 0.0, 0.365, 1, 0.64);
    
    s = slideshow.addSlide("Color of Words (2011)");
    s->addScrollableImage("color of words", "/Users/gene/bin/misc/stock/color-of-words.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Body Language (Nancy Nowacek, Morgan Hille-Refakis, David Sheinkopf, Caitlin Sikora, Gene Kogan)");
    s->addMovie("body language", "/Users/gene/bin/misc/morgan-gesture-classifier.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Generative models");
    s->addMovie("dcgan", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0.026, 0.5, 0.47);
    s->addImage("deepdream", "/Users/gene/bin/misc/stock/building-dreams.png", 0, 0.515, 0.5, 0.48);
    s->addImage("stylenet", "/Users/gene/bin/misc/stock/stylenet-original.png", 0.5, 0.53, 0.5, 0.47);
    s->addImage("synthesizing original", "/Users/gene/bin/misc/stock/synthesizing-original.jpg", 0.5, 0.025, 0.5, 0.48);
    s->addText(h4, ofColor(255), "https://www.youtube.com/watch?v=QYcKCGdZvq4", 0.01, 0.0, 1.0);
    s->addText(h5, ofColor(255), "research.googleblog.com/2015/06/inceptionism-going-deeper-into-neural.html", 0.002, 0.475, 1.0);
    s->addText(h4, ofColor(255), "https://arxiv.org/abs/1508.06576", 0.6, 0.51, 1.0);
    s->addText(h4, ofColor(255), "http://www.evolvingai.org/synthesizing", 0.6, 0.0, 1.0);
    
    
    ////////////////////////////////////////////////////////////////////////
    /////////  DEEP LEARNING PROJECTS
    
    
    // DCGAN + a book from the sky
    
    s = slideshow.addSlide("Deep convolutional generative adversarial network (DCGAN)");
    s->addImage("Mona Lisa", "/Users/gene/bin/dcgan/public/dcgan-glasses.png", 0.0, 0.06, 1.0, 0.94);
    s->addText(h4, ofColor(255), "Radford, Metz, Chintala 2015 (https://arxiv.org/abs/1511.06434)", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("HIT-OR3C dataset (Harbin University)");
    s->addScrollableImage("Actuals", "/Users/gene/bin/dcgan/summary/actual.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Fake (R) vs. Real (L)");
    s->addImage("Mona Lisa", "/Users/gene/bin/dcgan/summary/fakereal.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("A Book from the Sky");
    s->addMovie("zloops", "/Users/gene/bin/dcgan/summary/zloops.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Character interpolations");
    s->addMovie("interplations", "/Users/gene/bin/dcgan/public/interpolations_3.mp4", true, 0.2, 0.15, 0.6, 0.6);
    
    s = slideshow.addSlide("Radical interpolations");
    s->addText(h3, ofColor(255), "interpolations across characters sharing the same radical often appear to preserve it", 0.1, 0.0, 0.8);
    s->addMovie("radical interpolations", "/Users/gene/bin/dcgan/summary/radinterpolation.mp4", true, 0, 0.2, 1, 0.8);
    
    s = slideshow.addSlide("Arithmetic (this is really stretching it)");
    s->addMovie("arithmetic", "/Users/gene/bin/dcgan/summary/arithmetic2.mp4", true, 0, 0, 1, 1);
    
    // pix2pix + Invisible Cities + meat puppet
    
    //    s = slideshow.addSlide("Cubist Mirror");
    //    s->addMovie("altai mirror", "/Users/gene/bin/alt-ai/cubistmirror_v1.mp4", true, 0, 0, 0.61, 0.67);
    //    s->addMovie("nabi mirror", "/Users/gene/bin/alt-ai/cubistmirror-nabi.mp4", true, 0.55, 0.2, 0.455, 0.8);
    
    CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
    s = slideshow.addSlide("Cubist Mirror");
    s->addAction(cmd);
    // cmd->setStyleModel("/Users/gene/bin/style-transfer/models/kandinsky_e2_full512.model");
    cmd->setStyleModel("/Users/gene/bin/style-transfer/models/cubist.model");
    
    s = slideshow.addSlide("Cubist Mirror @ TIFF");
    s->addImage("fb", "/Users/gene/bin/style-transfer/cubist-mirror/cubist-mirror-tiff.jpg", 0.0, 0.00, 1.0, 1.0);
    
    s = slideshow.addSlide("Cubist Mirror @ TIFF");
    s->addMovie("nabi mirror", "/Users/gene/bin/style-transfer/cubist-mirror/cubist-mirror-tiff.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Image-to-Image Translation with Conditional Adversarial Nets");
    s->addImage("fb", "/Users/gene/bin/pix2pix/teaser_v3a.png", 0.0, 0.04, 1.0, 0.96);
    s->addText(h3, ofColor(100), "phillipi.github.io/pix2pix/", 0.02, 0.00, 0.8);
    s->start();
    
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
    
    //    s = slideshow.addSlide("Pix2Pix + FaceTracker");
    //    s->addMovie("mario", "/Users/gene/bin/pix2pix/quasimondo_facepix2pix.mp4", true, 0.05, 0.05, 0.9, 0.9);
    //
    //    s = slideshow.addSlide("Meat puppet");
    //    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/trump_face_train.png", 0.0, 0.0, 0.45, 1.0);
    //    s->addImage("fb", "/Users/gene/bin/misc/stock/arrow.png", 0.46, 0.0, 0.08, 1.0);
    //    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/gene_face_test.png", 0.55, 0.0, 0.45, 1.0);
    //
    //    s = slideshow.addSlide("Meat puppet");
    //    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump_gene1.mp4", true, 0.1, 0.1, 0.8, 0.8);
    //
    //    s = slideshow.addSlide("Meat puppet @ ECAL");
    //    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump-meatpuppet-pix2pix-ecal.mp4", true, 0.0, 0.0, 1.0, 1.0)->setPosition(0.25);
    
    s = slideshow.addSlide("What neural networks see");
    CcvForwardPassDemo *ccvd = new CcvForwardPassDemo(s, "ccv", 0, 0, 1, 1);
    s->addAction(ccvd);
    
    s = slideshow.addSlide("What neural networks see");
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l1_nofilter.png", 0.0, 0.1, 1, 0.8);
    s->addText(h4, ofColor(255), "What neural nets look for\nVisualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]", 0.02, 0.0, 1.0);
    
    s = slideshow.addSlide("What neural networks see");
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l2.png", 0.01, 0.15, 0.45, 0.7);
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l3.png", 0.47, 0.15, 0.52, 0.7);
    s->addText(h4, ofColor(255), "Visualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]", 0.02, 0.0, 1.0);
    
    s = slideshow.addSlide("Neural synthesis / Deepdream");
    s->addImage("ns", "/Users/gene/bin/lapnorm/initial_experiments/frame0010 (2).png", 0, 0, 1, 1);
    s = slideshow.addSlide("Neural synthesis / Deepdream");
    s->addImage("ns", "/Users/gene/bin/lapnorm/initial_experiments/eureka.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Mixing gradients / Deepdream");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/F6-34+G2-139_n11_o08_r1.33_cr4_b0.60.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Neural synthesis / Deepdream");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G3-283+F3-26+H1-54_n11_o08_r1.33_cr0_b0.75.png", 0, 0, 1, 1);
    s = slideshow.addSlide("Neural synthesis / Deepdream");
    s->addImage("ns", "/Users/gene/bin/lapnorm/_bin/mixed_grad/G3-45+G1-36+H6-23_n15_o08_r1.33_cr5_b0.21.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Neural synthesis / Deepdream");
    s->addMovie("class synth", "/Users/gene/bin/lapnorm/nips/NIPS_GeneKogan_new.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Having fun :)");
    s->addMovie("densecap", "/Users/gene/bin/densecap/atlas.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Densecap Deepdream");
    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream.mp4", true, 0, 0, 1, 1);
    
    
    
    
    
    ////////////////////////////////////////////////////////////////////////
    /////////  FRONTIERS
    
    //    s = slideshow.addSlide("So so many GANs");
    //    s->addImage("classvis", "/Users/gene/bin/misc/stock/GANpublications.png", 0, 0, 1, 0.87);
    //    s->addText(h3, ofColor(255), "Graph by Bruno Gavranovic, via https://deephunt.in/the-gan-zoo-79597dc8c347", 0.1, 0.9, 0.8);
    //
    //    s = slideshow.addSlide("BEGAN");
    //    s->addImage("BEGAN", "/Users/gene/bin/misc/stock/BEGAN.png", 0.1, 0.3, 0.8, 0.6);
    //    s->addText(h3, ofColor(255), "Boundary Equilibrium GANs (BEGAN)\nBerthelot et al (https://arxiv.org/abs/1703.10717)", 0.1, 0.0, 0.8);
    //
    //    s = slideshow.addSlide("Progressive Growing of GANs for Improved Quality, Stability, and Variation");
    //    s->addMovie("pgan", "/Users/gene/bin/misc/nvidia-progressive-faces.mp4", true, 0, 0.075, 1, 0.93)->setLoop(true);
    //    s->addText(h4, ofColor(255), "Karras et al (NVIDIA), 2017\nhttp://research.nvidia.com/publication/2017-10_Progressive-Growing-of", 0.01, 0.0, 0.99);
    //
    //    s = slideshow.addSlide("...");
    //    s->addImage("joke", "/Users/gene/bin/misc/DoppelGAN/highlights/rock-zelwegger.png", 0, 0, 1, 1);
    //
    //    s = slideshow.addSlide("InfoGAN");
    //    s->addImage("InfoGAN", "/Users/gene/bin/misc/stock/InfoGAN1.png", 0.0, 0.07, 1.0, 0.4);
    //    s->addImage("InfoGAN", "/Users/gene/bin/misc/stock/InfoGAN2.png", 0.0, 0.47, 1.0, 0.53);
    //    s->addText(h3, ofColor(255), "Information maximizing GAN (InfoGAN)\nChen et al (https://arxiv.org/abs/1606.03657)", 0.1, 0.0, 0.8);
    //
    //    s = slideshow.addSlide("Natural language generation");
    //    s->addImage("fb", "/Users/gene/bin/misc/stock/neural-storyteller.png", 0, 0.2, 1, 0.6);
    //    s->addText(h3, ofColor(255), "https://github.com/ryankiros/neural-storyteller", 0.02, 0.00, 0.8);
    //
    //
    //    s = slideshow.addSlide("StackGAN");
    //    s->addText(h3, ofColor(255), "Text to Photo-realistic Image Synthesis with Stacked GANs\nZhang et al (https://arxiv.org/abs/1612.03242)", 0.1, 0.0, 0.8);
    //    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-bird2.jpg", 0.0, 0.12, 1.0, 0.4);
    //    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-flower1.jpg", 0.0, 0.53, 1.0, 0.4);
    //    s = slideshow.addSlide("StackGAN");
    //    s->addText(h3, ofColor(255), "Text to Photo-realistic Image Synthesis with Stacked GANs\nZhang et al (https://arxiv.org/abs/1612.03242)", 0.1, 0.0, 0.8);
    //    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-bird_interp.png", 0.0, 0.15, 1.0, 0.8);
    //
    //    s = slideshow.addSlide("PointCloud generation");
    //    s->addText(h3, ofColor(255), "Representation Learning and Adversarial Generation of 3D Point Clouds\nAchlioptas et all (https://arxiv.org/abs/1707.02392", 0.1, 0.0, 0.8);
    //    s->addImage("PointCloud", "/Users/gene/bin/misc/stock/pointcloud-GAN.png", 0.0, 0.15, 1.0, 0.8);
    //
    
    
    
    ////////////////////////////////////////////////////////////////////////
    /////////  ML4A, workshops/guides
    
    // sam hains, chino, roland, marcela, bjoern
    
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
    
    s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
    s->addImage("yolo", "/Users/gene/bin/ml4a/ReverseImageSearch/yolo-screen1.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("t-SNE :: CalTech-256 animals");
    s->addScrollableImage("t-SNE animals", "/Users/gene/bin/tsne/grid_animals2.png", 0, 0, 1, 1);
    
    //    s = slideshow.addSlide("YOLO x ScreenGrab");
    //    DarknetScreenGrabDemo *dnsgd = new DarknetScreenGrabDemo(s, "Darknet Demo", 0, 0, 1, 1);
    //    dnsgd->setDarknetReference(&darknet);
    //    s->addAction(dnsgd);
    
    s = slideshow.addSlide("Audio + Text t-SNEs");
    s->setBackgroundFunction(this, &ofApp::drawBgWhite);
    s->addScrollableImage("wiki t-SNE", "/Users/gene/bin/tsne/wiki-tSNE.png", -0.05, 0.0, 0.72, 0.76);
    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0.48, 0.39, 0.54, 0.63);
    attd->setTsnePath("/Users/gene/Teaching/ML4A/ml4a-guides/data/example-audio-tSNE-drums.json");
    s->addAction(attd);
    attd->start();
    s->addText(h4, ofColor(255), "www.genekogan.com/works/wiki-tSNE", 0.03, 0.8, 0.7);
    s->addText(h4, ofColor(255), "github.com/ml4a/ml4a-ofx", 0.67, 0.3, 0.7);
    
    s = slideshow.addSlide("ml4a.github.io/classes");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addMovie("ml4a @ itp", "/Users/gene/bin/ml4a-classes/itp-S16/timelapse/ml4a @ itp-nyu -- timelapse_crop.mp4", true, 0, 0, 1, 1)->setPositionRandom();
    s->loadAssets();
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-nn.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-hnnat.png", 0, 0, 1, 1);
    
    
    //////////////////////////////////////////////////////////////
    //////  DEMOS
    
    s = slideshow.addSlide("Demos");
    s->addMovie("transfer learning", "/Users/gene/bin/misc/wekinator-coffee-croissant.mp4", true, 0, 0, 1, 1);
    
    // ableton demo
    // t-rex, mario kart, tetris
    
    s = slideshow.addSlide("Wolfenstein Controlled by Sound");
    s->addMovie("wolfenstein", "/Users/gene/bin/ml4a/Wolfenstein 3D controlled by sound.mp4", false, 0, 0.05, 1, 0.96);
    s->addText(h4, ofColor(100), "Støj (Andreas Refsgaard & Lasse Korsgaard) https://vimeo.com/207831279", 0.00, 0.00, 0.8);
    s->start();
    
    
    
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
