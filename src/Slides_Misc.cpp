#include "ofApp.h"

void ofApp::Misc() {
    
    s = slideshow.addSlide("Inbox?");
    s->addImage("inbox", "/Users/gene/Writing/_Talks/S4AD-Pioneerworks/05_sequences/dribnet_monwed.png", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Face2Face");
    s->addMovie("Face2Face", "/Users/gene/bin/misc/stock/Face2Face - Real-time Face Capture and Reenactment of RGB Videos (CVPR 2016 Oral)-ohmajJTcpNk.mp4", true, 0.1, 0.1, 0.8, 0.8);
    s->addText(h4, ofColor(0), "graphics.stanford.edu/~niessner/thies2016face.html", 0.2, 0.05, 0.8);

    s = slideshow.addSlide("Face2Face");
    s->addMovie("Face2Face", "/Users/gene/bin/misc/AI vs. AI. Two chatbots talking to each other.mp4", true, 0.1, 0.1, 0.8, 0.8);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=WnzlbyTZsQY", 0.2, 0.05, 0.8);

    // learning features for convnets
    // https://drive.google.com/file/d/0B_wzP_JlVFcKYXZKTkJWUWE2NjA/view
    // Russ Salakhutdinov, Machine Learning Department, Carnegie Mellon University, Canadian Institute for Advanced Research
    // /Users/gene/bin/misc/stock/learn-features.png
    
    s = slideshow.addSlide("Super-resolution => Deblurring");
    s->addImage("deblur", "/Users/gene/bin/misc/super-resolution-ground-truth.jpg", 0.0, 0.2, 1.0, 0.75);
    s->addText(h3, ofColor(0), "https://arxiv.org/abs/1702.00783", 0.1, 0.01, 0.8);
    
    s = slideshow.addSlide("Plug & Play Generative Networks");
    s->addImage("PPGN", "/Users/gene/bin/misc/ppgn_image_captioning.jpg", 0, 0.05, 1, 0.97);
    s->addText(h4, ofColor(0), "http://www.evolvingai.org/ppgn", 0.1, 0.0, 0.8);

}

void ofApp::Background(){
    // S) art + science + culture
    // S) MIR + sourcetone
    
    s = slideshow.addSlide("Prentis Hall (~2006)");
    s->addImage("butler", "/Users/gene/bin/misc/stock/columbia.jpg", 0.0, 0.0, 0.6, 0.6);
    s->addImage("prentis", "/Users/gene/bin/misc/stock/prentis.jpg", 0.4, 0.3, 0.6, 0.7);
    
    s = slideshow.addSlide("Milton Babbitt + RCA Mark II");
    s->addImage("event detection", "/Users/gene/bin/misc/stock/milton.jpg", 0.0, 0.0, 1, 1);
    
    s = slideshow.addSlide("Meapsoft");
    s->addImage("event detection", "/Users/gene/bin/misc/stock/meapsoft.png", 0.0, 0.0, 1, 1);
    
    s = slideshow.addSlide("music information retrieval");
    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
    //    s->addImage("wekinator", "/Users/gene/Downloads/wkshps/rebecca_3_wekinator.png", 0.0, 0.4, 0.4, 0.6);
    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
    
    s = slideshow.addSlide("color of words (2011)");
    s->addScrollableImage("color of words", "/Users/gene/bin/misc/stock/color-of-words.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("processing + openframeworks");
    s->addMovie("KPT", "/Users/gene/bin/opera-toolkit/colin-ribbons-2.mp4", true, 0.0, 0, 0.5, 0.5);
    s->addMovie("machine yearning", "/Users/gene/bin/machine-yearning/machine-yearning-gopro.mp4", true, 0.5, 0.5, 0.5, 0.5);
    s->addMovie("flocking", "/Users/gene/bin/images/Flocking-fast.mp4", true, 0.0, 0.5, 0.5, 0.5);
    s->addImage("ecohack", "/Users/gene/Writing/_Talks/BabyCastles/ecohack/_mg_7093_14926714478_o.jpg", 0.5, 0.0, 0.5, 0.5);
    
}

void ofApp::Archive() {
    s = slideshow.addSlide("introduction (under construction)");
    s->addImage("gene_vrae", "/Users/gene/bin/misc/stock/gene_vrae.jpg", 0.1, 0.1, 0.8, 0.8);
    s->addText(h2, ofColor(0), "i'm @genekogan", 0.2, 0.0, 0.6);
    s->addText(h3, ofColor(0), "by tom white (@dribnet)", 0.2, 0.91, 0.6);
    s->start();
}

void ofApp::GoogleMLArtExperiments() {
    
    s = slideshow.addSlide("What neural networks see");
    s->addImage("deepdream", "/Users/gene/bin/misc/stock/building-dreams.png", 0, 0.5, 0.5, 0.5);
    s->addImage("stylenet", "/Users/gene/bin/misc/stock/stylenet-original.png", 0.5, 0.53, 0.5, 0.47);
    s->addImage("synthesizing original", "/Users/gene/bin/misc/stock/synthesizing-original.jpg", 0.5, 0.025, 0.5, 0.48);
    s->addText(h5, ofColor(0), "research.googleblog.com/2015/06/inceptionism-going-deeper-into-neural.html", 0.002, 0.475, 1.0);
    s->addText(h4, ofColor(0), "https://arxiv.org/abs/1508.06576", 0.6, 0.51, 1.0);
    s->addText(h4, ofColor(0), "http://www.evolvingai.org/synthesizing", 0.6, 0.0, 1.0);
    s->start();

    s = slideshow.addSlide("What neural networks see");
    CcvForwardPassDemo *ccvd = new CcvForwardPassDemo(s, "ccv", 0, 0, 1, 1);
    // CcvForwardPassDemoThreaded *ccvd = new CcvForwardPassDemo(s, "ccv", 0, 0, 1, 1);
    s->addAction(ccvd);
    
    s = slideshow.addSlide("Visualizing convnets");
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l3.png", 0.4, 0.04, 0.6, 0.55);
    s->addImage("DeepVisToolbox", "/Users/gene/bin/misc/stock/deepvis_freckles_small.jpg", 0.0, 0.64, 1, 0.36);
    s->addText(h4, ofColor(0), "Zeiler + Fergus 2013 | arxiv.org/abs/1311.2901", 0.45, 0.0, 1.0);
    s->addText(h4, ofColor(0), "DeepVis Toolbox | yosinski.com/deepvis", 0.2, 0.6, 1.0);
    
    // ml4a
    s = slideshow.addSlide("What neural networks see");
    s->addText(h2, ofColor(0), "@genekogan", 0.35, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.35, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.67, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.67, 0.3, 0.5);

}


void ofApp::SoundResearch() {
    s = slideshow.addSlide("Visually indicated sounds");
    s->addMovie("flocking", "/Users/gene/bin/misc/visually_indicated_sounds.mp4", true, 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(50), "Owens et al (http://vis.csail.mit.edu)", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("Sound clasification (SoundNet)");
    s->addMovie("flocking", "/Users/gene/bin/misc/soundnet.mp4", true, 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(50), "Aytar, Vondrick, Torralba (NIPS 2016)", 0.1, 0.0, 0.8);
    s->addText(h4, ofColor(50), "http://projects.csail.mit.edu/soundnet/", 0.1, 0.92, 0.8);
    
}

void ofApp::Pix2Pix() {
    
    
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
    
    
    
    s = slideshow.addSlide("Autoencoders");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder.png", 0, 0, 1, 0.3);
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder_net.png", 0, 0.3, 1, 0.65);
    s->addText(h4, ofColor(0), "world's most expensive identity function", 0.01, 0.93, 0.8);
    // samples left -> right
    
    s = slideshow.addSlide("MNIST variational autoencoder");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/mnist_VAE.png", 0, 0.1, 1, 0.8);
    s->addText(h4, ofColor(0), "https://jmetzen.github.io/2015-11-27/vae.html", 0.01, 0.0, 0.9);
    
    //    s = slideshow.addSlide("Autoencoders trained on celebrities faces");
    //    s->addImage("autoencoder", "/Users/gene/bin/autoencoders/_Classes.png", 0, 0, 1, 1);
    //    s->addBreakpoint();
    //    s->addImage("autoencoder", "/Users/gene/bin/autoencoders/_Attractive.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Deep convolutional generative adversarial network");
    s->addImage("Mona Lisa", "/Users/gene/bin/misc/stock/lsun_bedrooms_five_epoch_samples.png", 0.0, 0.2, 1.0, 0.8);
    s->addText(h4, ofColor(0), "Alec Radford, Luke Metz, Soumith Chintala", 0.1, 0.11, 0.8);
    s->addText(h4, ofColor(0), "arxiv.org/abs/1511.06434]", 0.1, 0.05, 0.8);
    s->addText(h4, ofColor(0), "these bedrooms aren't real", 0.1, 0.95, 0.8);
    
    s = slideshow.addSlide("Deep convolutional generative adversarial network");
    s->addImage("Mona Lisa", "/Users/gene/bin/misc/stock/lsun_bedrooms_five_epochs_interps.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Deep convolutional generative adversarial network");
    s->addImage("Mona Lisa", "/Users/gene/bin/misc/stock/googsearch_dcgan.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Bedroom hallucination");
    s->addImage("Soumith bedrooms", "/Users/gene/bin/misc/stock/dcgan_soumith_bedrooms.png", 0, 0.1, 1, 0.9);
    s->addText(h4, ofColor(0), "[twitter.com/amiconfusediam/status/673642977781293056]", 0.1, 0, 1);
    
    s = slideshow.addSlide("Deep convolutional generative adversarial network");
    s->addImage("Mona Lisa", "/Users/gene/bin/misc/stock/faces_128_filter_samples.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Arithmetic on generated faces");
    s->addImage("smiling arithmetic", "/Users/gene/bin/misc/stock/faces_arithmetic_collage1.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Putting on sunglasses");
    s->addImage("sunglasses", "/Users/gene/bin/misc/stock/faces_arithmetic_collage2.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Interpolating faces");
    s->addMovie("mymov2", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Generating numbers");
    s->addImage("MNIST (real)", "/Users/gene/bin/misc/stock/mnist_real.png", 0, 0.05, 1, 0.45);
    s->addImage("MNIST (DCGAN)", "/Users/gene/bin/misc/stock/mnist_cond_conv_gan_samples.png", 0, 0.55, 1, 0.45);
    s->addText(h4, ofColor(0), "MNIST (real)", 0.2, 0.0, 0.8);
    s->addText(h4, ofColor(0), "MNIST (DCGAN)", 0.2, 0.5, 0.8);
    
    s = slideshow.addSlide("Interpolating numbers");
    s->addMovie("MNIST interpolations", "/Users/gene/bin/dcgan/summary/digits.mov", true, 0.2, 0.1, 0.6, 0.6);
    
    s = slideshow.addSlide("A Book from the Sky");
    s->addMovie("matrix", "/Users/gene/bin/dcgan/summary/matrix.mp4", true, 0.44, 0.4, 0.7, 0.6);
    s->addImage("xu bing", "/Users/gene/bin/dcgan/summary/a_book_from_the_sky.jpg", 0.0, 0.0, 0.45, 0.8);
    s->addMovie("loop", "/Users/gene/bin/dcgan/summary/longloop.mp4", true, 0.5, 0.0, 0.5, 0.5);
    
    s = slideshow.addSlide("Actuals");
    s->addScrollableImage("Actuals", "/Users/gene/bin/dcgan/summary/actual.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Fake (R) + Real (L)");
    s->addImage("Mona Lisa", "/Users/gene/bin/dcgan/summary/fakereal.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Generated characters");
    s->addScrollableImage("Mona Lisa", "/Users/gene/bin/dcgan/summary/long_gen_all_chars.png", 0.25, 0.0, 0.5, 1.0);
    
    s = slideshow.addSlide("Class conditional space");
    s->addScrollableImage("Interpolating characters", "/Users/gene/Web/Home/images/a-book-from-the-sky/banner.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Loops around latent space");
    s->addMovie("zloops", "/Users/gene/bin/dcgan/summary/zloops.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Character interpolations");
    s->addMovie("interplations", "/Users/gene/bin/dcgan/summary/interpolations.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Radical interpolations");
    s->addText(h3, ofColor(0), "interpolations across characters sharing the same radical often appear to preserve it", 0.1, 0.0, 0.8);
    s->addMovie("radical interpolations", "/Users/gene/bin/dcgan/summary/radinterpolation.mp4", true, 0, 0.2, 1, 0.8);
    
    s = slideshow.addSlide("DCGAN flowers");
    s->addImage("flowers", "/Users/gene/bin/dcgan/public/07_flowers.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://twitter.com/vintermann/status/675599478494208000", 0, 0, 1);
    
    s = slideshow.addSlide("DCGAN Manga");
    s->addImage("manga 1", "/Users/gene/bin/dcgan/public/07_manga_sample1.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://github.com/mattya/chainer-DCGAN", 0, 0, 1);
    
    s = slideshow.addSlide("DCGAN Manga interpolations");
    s->addImage("manga 2", "/Users/gene/bin/dcgan/public/07_manga_sample2.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://github.com/mattya/chainer-DCGAN", 0, 0, 1);
    
    
    s = slideshow.addSlide("Super-resolution => Deblurring");
    s->addImage("deblur", "/Users/gene/bin/misc/super-resolution-ground-truth.jpg", 0.0, 0.2, 1.0, 0.75);
    s->addText(h3, ofColor(0), "https://arxiv.org/abs/1702.00783", 0.1, 0.01, 0.8);
    
    
    s = slideshow.addSlide("Deep Generator Networks");
    s->addImage("classvis", "/Users/gene/bin/misc/stock/class-synthesis-deepgen.png", 0.0, 0.2, 1, 0.8);
    s->addText(h4, ofColor(0), "Nguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.15, 0.1, 1.0);
    s->start();
    
    s = slideshow.addSlide("Deep Generator Networks (Places365)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/new_classes.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("DGN (buttes)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/buttes.png", 0.025, 0.025, 0.95, 0.95);
    
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
    
    s = slideshow.addSlide("Super-resolution => Deblurring");
    s->addImage("deblur", "/Users/gene/bin/misc/super-resolution-ground-truth.jpg", 0.0, 0.2, 1.0, 0.75);
    s->addText(h3, ofColor(0), "https://arxiv.org/abs/1702.00783", 0.1, 0.01, 0.8);
    
    s = slideshow.addSlide("Colorization");
    s->addImage("Colorization", "/Users/gene/bin/misc/colorization/example_results.png", 0, 0.1, 1, 0.9);
    s->addText(h4, ofColor(0), "http://hi.cs.waseda.ac.jp/~iizuka/projects/colorization/en/", 0.1, 0.0, 0.8);
    
    
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
    
    s = slideshow.addSlide("Generating images from captions (Mansimov et al)");
    s->addImage("attention", "/Users/gene/bin/misc/stock/rnn/caption_to_image.png", 0, 0, 1, 0.5);
    s->addImage("attention", "/Users/gene/bin/misc/stock/rnn/caption_to_image_architecture.png", 0, 0.5, 1, 0.5);
    s->addText(h4, ofColor(0), "http://arxiv.org/abs/1511.02793", 0.01, 0.0, 0.99);
    
    s = slideshow.addSlide("Plug & Play Generative Networks");
    s->addImage("PPGN", "/Users/gene/bin/misc/ppgn_image_captioning.jpg", 0, 0.05, 1, 0.97);
    s->addText(h4, ofColor(0), "http://www.evolvingai.org/ppgn", 0.1, 0.0, 0.8);
    
    
}



void ofApp::ArtProjects() {
    // alt-AI + ml4a projects + other
    // sketch2cat
}
