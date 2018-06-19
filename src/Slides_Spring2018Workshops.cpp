#include "ofApp.h"



//--------------------------------------------------------------
void ofApp::WorkshopSpektrumAutonomousArtSystems(){
    
    // TODO: the collective unconscious
    // discussion
    // DCGAN tutorial + pix2pix
    // AAA
    // - components, architecture
    
    
    /*
     
     
     /Users/gene/bin/misc/stock/ITMWITH-motherdaughter.mp4
     /Users/gene/bin/misc/stock/ITMWITH-planting.mp4
     
     
     
     
     THE COLLECTIVE UNCONSCIOUS
     
     the collective unconscious
     - cognition as biological function
     - organs of collective unconscious selected for -- they help us live. psychic counterpart of instinct
     
     jungian archetypes
     - birth, death, separation from parents, initiation, marriage, the union of opposites
     - self, hero, mother, god, devil, trickster, wise old man (dumbledore)
     - shadow often represents one's dark side, those aspects of oneself that exist, but which one does not acknowledge or with which one does not identify.
     - archetype vs archetypal figure (like devil)
     - analogy - condensation forming on glass surface
     - psychic mesh
     - fairy tales
     
     the collective imagination
     - what about sample bias
     - cast light on the collective shadow (ou dark side)
     
     
     GENERATIVE MODELS -> GENERATIVE ART
     
     collective art
     - exquisite corpse
     - electric sheep
     - koblin projects
     - shader circle
     
     DCGAN + the law of large numbers
     - color of words
     
     differentiable art
     - DL + differentiable programming
     
     
     
     DECENTRALIZATION
     
     influential projects
     - ipfs
     - openmined
     - numerai
     - ocean
     
     web 3.0
     strength in weakness
     cryptoeconomics
     token engineering models
     
     
     
     
     DECENTRALIZED AI
     
     
     
     AUTONOMOUS ARTIFICIAL ARTIST
     
     
     COMPONENTS
     
     possible architectures
     master plan
     - all of the world's pixels
     
     
     
     
     */
    
    s = slideshow.addSlide("Autonomous Art Systems @ Spektrum");
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.4, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.3, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.4, 0.5);
    s->start();
    
    s = slideshow.addSlide("Synopsis");
    s->addText(h2, ofColor(0), "- two workshops in one\n   - 1) generative models\n   - 2) decentralized AI\n   - 3) 1 + 2\n- practical\n   - 1) DCGAN", 0.05, 0.01, 0.9);
    
    s = slideshow.addSlide("Deep generative models");
    s->addMovie("fb", "/Users/gene/bin/misc/nvidia-progressive-faces.mp4", true, 0, 0.1, 0.5, 0.9);
    s->addMovie("fb", "/Users/gene/bin/misc/DrBeef_landscapes.mp4", true, 0.5, 0.1, 0.5, 0.9);
    s->addText(h4, ofColor(0), "Karras et al (NVIDIA)", 0.01, 0.0, 1.0);
    s->addText(h4, ofColor(0), "Robbie Barrat (@DrBeef_)", 0.51, 0.0, 1.0);
    
    s = slideshow.addSlide("pix2pix -> generative model as a filter");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/jasper-streetview.mp4", true, 0, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump_gene1.mp4", true, 0.5, 0.0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/pix2pix/memo-painting.mp4", true, 0.0, 0.5, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/pix2pix/brannon-kurzweil.mp4", true, 0.5, 0.5, 0.5, 0.5);
    
    s = slideshow.addSlide("From PCA to Puppyslugs");
    s->addImage("pca", "/Users/gene/bin/misc/frompcatopuppyslugs_thumb.png", 0.0, 0.1, 1.0, 0.9);
    s->addText(h3, ofColor(0), "https://ml4a.github.io/classes/misc/01/", 0.01, 0.0, 1.0);
    
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
    // samples left -> right
    
    s = slideshow.addSlide("CNN demo");
    CcvForwardPassDemo *ccvd = new CcvForwardPassDemo(s, "ccv", 0, 0, 1, 1);
    s->addAction(ccvd);
    
    s = slideshow.addSlide("Autoencoders");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder.png", 0, 0, 1, 0.3);
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder_net.png", 0, 0.3, 1, 0.65);
    s->addText(h4, ofColor(0), "world's most expensive identity function", 0.01, 0.93, 0.8);
    // samples left -> right
    
    s = slideshow.addSlide("Reconstructions MNIST");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoders_mnist_reconstruction.png", 0, 0, 1, 1);
    
    // GANS + DCGANs + A book from the sky + Zero Likes + VGAN
    
    s = slideshow.addSlide("Generative adversarial nets (Goodfellow et al)");
    s->addImage("Mona Lisa", "/Users/gene/bin/misc/stock/GANs.png", 0.0, 0.0, 1.0, 1.0);
    
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
    
    s = slideshow.addSlide("Character interpolations");
    s->addMovie("interplations", "/Users/gene/bin/dcgan/summary/interpolations.mp4", true, 0, 0, 1, 1);
    
    //    s = slideshow.addSlide("Radical interpolations");
    //    s->addText(h3, ofColor(0), "interpolations across characters sharing the same radical often appear to preserve it", 0.1, 0.0, 0.8);
    //    s->addMovie("radical interpolations", "/Users/gene/bin/dcgan/summary/radinterpolation.mp4", true, 0, 0.2, 1, 0.8);
    //
    //    s = slideshow.addSlide("Arithmetic tricks");
    //    s->addMovie("arithmetic", "/Users/gene/bin/dcgan/public/arithmetic2.mp4", true, 0.1, 0.2, 0.8, 0.6);
    
    s = slideshow.addSlide("DCGAN flowers");
    s->addImage("flowers", "/Users/gene/bin/dcgan/public/07_flowers.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://twitter.com/vintermann/status/675599478494208000", 0, 0, 1);
    
    s = slideshow.addSlide("DCGAN Manga");
    s->addImage("manga 1", "/Users/gene/bin/dcgan/public/07_manga_sample1.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://github.com/mattya/chainer-DCGAN", 0, 0, 1);
    
    s = slideshow.addSlide("DCGAN Manga interpolations");
    s->addImage("manga 2", "/Users/gene/bin/dcgan/public/07_manga_sample2.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://github.com/mattya/chainer-DCGAN", 0, 0, 1);
    
    s = slideshow.addSlide("@zero_likes (Sam Hains)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addImage("zero_likes", "/Users/gene/bin/dcgan/zero_likes/zero_likes-selfie.png", 0.0, 0.05, 1, 0.9);
    
    // vgan
    s = slideshow.addSlide("Video prediction GANs");
    s->addMovie("Video GANS", "/Users/gene/bin/dcgan/video_gans.mp4", true, 0.0, 0.03, 1, 1);
    s->addText(h4, ofColor(0), "Carl Vondrick (http://web.mit.edu/vondrick/tinyvideo/)", 0.0, 0.0, 0.8);
    
    // DGN
    s = slideshow.addSlide("Deep Generator Networks");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/DGN_architecture.jpg", 0.0, 0.1, 1, 0.41);
    s->addImage("classvis", "/Users/gene/bin/misc/stock/class-synthesis-deepgen.png", 0.0, 0.52, 1, 0.48);
    s->addText(h4, ofColor(0), "Nguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.15, 0.01, 1.0);
    s->start();
    
    
    //    s = slideshow.addSlide("DGN CaffeNet");
    //    s->addScrollableImage("classvis", "/Users/gene/bin/synthesizing/synthesizing-caffenet-tSNE.png", 0, 0, 1, 1);
    //
    //    s = slideshow.addSlide("DGN convergence");
    //    s->addText(h4, ofColor(0), "https://github.com/Evolving-AI-Lab/synthesizing", 0.15, 0.00, 1.0);
    //    ofxPPMovie *mov3 = s->addMovie("macaw", "/Users/gene/bin/synthesizing/macaw.mov", true, 0.05, 0.05, 0.9, 0.9);
    //    mov3->setLoop(false);
    //
    //    s = slideshow.addSlide("DGN convergence");
    //    ofxPPMovie *mov = s->addMovie("cheeseburger", "/Users/gene/bin/synthesizing/teapotnew.mov", true, 0.02, 0.1, 0.46, 0.8);
    //    mov->setLoop(false);
    //    ofxPPMovie *mov2 = s->addMovie("teapot", "/Users/gene/bin/synthesizing/cheeseburgernew.mov", true, 0.52, 0.1, 0.46, 0.8);
    //    mov2->setLoop(false);
    
    s = slideshow.addSlide("DGN (people)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/people.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("DGN (boathouses)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/boathouses.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("BEGAN");
    s->addImage("BEGAN", "/Users/gene/bin/misc/stock/BEGAN.png", 0.1, 0.3, 0.8, 0.6);
    s->addText(h3, ofColor(0), "Boundary Equilibrium GANs (BEGAN)\nBerthelot et al (https://arxiv.org/abs/1703.10717)", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("DiscoGAN");
    s->addText(h3, ofColor(255), "Discover Cross-Domain Relations (DiscoGAN)\nKim et al (https://arxiv.org/abs/1703.05192)", 0.1, 0.0, 0.8);
    s->addImage("DiscoGAN", "/Users/gene/bin/misc/stock/DiscoGAN.png", 0.0, 0.09, 1.0, 0.32);
    s->addImage("DiscoGAN", "/Users/gene/bin/misc/stock/DiscoGAN-gender1.png", 0.0, 0.425, 1.0, 0.29);
    s->addImage("DiscoGAN", "/Users/gene/bin/misc/stock/DiscoGAN-gender2.png", 0.0, 0.715, 1.0, 0.29);
    
    s = slideshow.addSlide("Progressive Growing of GANs for Improved Quality, Stability, and Variation");
    s->addMovie("pgan", "/Users/gene/bin/misc/nvidia-progressive-faces.mp4", true, 0, 0, 1, 1)->setLoop(true);
    s->addText(h4, ofColor(255), "Karras et al (NVIDIA), 2017\nhttp://research.nvidia.com/publication/2017-10_Progressive-Growing-of", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("lol");
    s->addImage("joke", "/Users/gene/bin/misc/DoppelGAN/highlights/rock-zelwegger.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("PointCloud generation");
    s->addText(h3, ofColor(255), "Representation Learning and Adversarial Generation of 3D Point Clouds\nAchlioptas et all (https://arxiv.org/abs/1707.02392", 0.1, 0.0, 0.8);
    s->addImage("PointCloud", "/Users/gene/bin/misc/stock/pointcloud-GAN.png", 0.0, 0.15, 1.0, 0.8);
    
    s = slideshow.addSlide("Natural language generation");
    s->addImage("fb", "/Users/gene/bin/misc/stock/neural-storyteller.png", 0, 0.2, 1, 0.6);
    s->addText(h3, ofColor(255), "https://github.com/ryankiros/neural-storyteller", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("Plug & Play Generative Networks");
    s->addImage("PPGN", "/Users/gene/bin/misc/ppgn_image_captioning.jpg", 0, 0.05, 1, 0.97);
    s->addText(h4, ofColor(0), "http://www.evolvingai.org/ppgn", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("StackGAN");
    s->addText(h3, ofColor(255), "Text to Photo-realistic Image Synthesis with Stacked GANs\nZhang et al (https://arxiv.org/abs/1612.03242)", 0.1, 0.0, 0.8);
    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-bird2.jpg", 0.0, 0.12, 1.0, 0.4);
    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-flower1.jpg", 0.0, 0.53, 1.0, 0.4);
    s = slideshow.addSlide("StackGAN");
    s->addText(h3, ofColor(255), "Text to Photo-realistic Image Synthesis with Stacked GANs\nZhang et al (https://arxiv.org/abs/1612.03242)", 0.1, 0.0, 0.8);
    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-bird_interp.png", 0.0, 0.15, 1.0, 0.8);
    
    s = slideshow.addSlide("Image Generation from Scene Graphs");
    s->addImage("", "/Users/gene/bin/misc/jcjhnson_scenegraph_gan.jpg", 0.0, 0.15, 1.0, 0.8);
    s->addText(h3, ofColor(255), "Johnson et al (https://arxiv.org/abs/1804.01622)", 0.1, 0.0, 0.8);
    
    
    slideshow.setPage(s);
    
    s = slideshow.addSlide("Image-to-Image Translation with Conditional Adversarial Nets");
    s->addImage("fb", "/Users/gene/bin/pix2pix/teaser_v3a.png", 0.0, 0.04, 1.0, 0.96);
    s->addText(h3, ofColor(100), "phillipi.github.io/pix2pix/", 0.02, 0.00, 0.8);
    
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
    
    s = slideshow.addSlide("sketch to pokemon");
    s->addMovie("p2p", "/Users/gene/bin/misc/stock/pix2pix-pokemon.mp4", true, 0.0, 0, 1, 1);
    
        s = slideshow.addSlide("Ildar Iakubov - animations");
        s->addMovie("fb", "/Users/gene/bin/strelka/ildar-pix2pix.mp4", false, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Anna Riddler - Fall of the house of usher");
    s->addImage("Anna", "/Users/gene/bin/misc/stock/annariddler - fothou.jpg", 0, 0, 0.67, 0.7);
    s->addMovie("Anna", "/Users/gene/bin/misc/stock/annariddler - fothou.mp4", true, 0.4, 0.35, 0.74, 0.65);
    
    s = slideshow.addSlide("Pix2Pix streetview (Jasper van Loenen)");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/jasper-streetview.mp4", false, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Golan Levin - pix2pix + hands");
    s->addImage("p2p", "/Users/gene/bin/misc/stock/golan-hands-pix2pix.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Pix2Pix person-to-person (Brannon Dorsey)");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/brannon-kurzweil.mp4", false, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("pix2pix + OpenPose (@quasimondo)");
    s->addImage("p2p", "/Users/gene/bin/misc/stock/pix2pix-openpose.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Kinect depth -> RGB (or vice-versa)");
    s->addImage("p2p", "/Users/gene/bin/misc/stock/pix2pix-depthmap.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Spiderman");
    s->addMovie("p2p", "/Users/gene/bin/misc/stock/pix2pix-spiderman.mp4", true, 0.0, 0, 1, 1);
    
    s = slideshow.addSlide("Pix2Pix + FaceTracker");
    s->addMovie("mario", "/Users/gene/bin/pix2pix/quasimondo_facepix2pix.mp4", true, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Mario Klingemann - Alternative face");
    s->addMovie("p2p", "/Users/gene/bin/misc/stock/mario-altface.mp4", true, 0.0, 0, 1, 1);
    
    s = slideshow.addSlide("Meat puppet");
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/trump_face_train.png", 0.0, 0.0, 0.45, 1.0);
    s->addImage("fb", "/Users/gene/bin/misc/stock/arrow.png", 0.46, 0.0, 0.08, 1.0);
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/gene_face_test.png", 0.55, 0.0, 0.45, 1.0);
    
    s = slideshow.addSlide("Meat puppet");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump_gene1.mp4", false, 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("pix2pix Angela Merkel");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/dattran-merkel-pix2pix.mp4", true, 0.05, 0.05, 0.9, 0.9)->setLoop(true);
    
    // s = slideshow.addSlide("Pix2Pix + webcam (Memo Akten)");
    // s->addMovie("fb", "/Users/gene/bin/pix2pix/memo-painting.mp4", true, 0.05, 0.05, 0.9, 0.9);
    s = slideshow.addSlide("Pix2Pix + webcam (Memo Akten)");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/memo-learningtosee2.mp4", true, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Pix2Pix HD!");
    s->addMovie("fb", "/Users/gene/bin/misc/High-Resolution Image Synthesis and Semantic Manipulation with Conditional GANs.mp4", true, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("CycleGAN");
    s->addImage("fb", "/Users/gene/bin/misc/cyclegan/cyclegan.jpg", 0.0, 0.07, 1, 0.95);
    s->addText(h3, ofColor(100), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("CycleGAN");
    s->addMovie("fb", "/Users/gene/bin/misc/cyclegan/cyclegan_zebra.mp4", true, 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(100), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("Helena Sarin (@glagolista)");
    s->addImage("helana", "/Users/gene/bin/misc/stock/helena - cyclegan.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Feedback & ping-ponging (Mario Klingemann)");
    s->addMovie("mario", "/Users/gene/bin/misc/stock/quasimondo - Face Feedback III - Faces in 1024x1024 generated by neural networks.mp4", true, 0, 0, 0.5, 1);
    s->addMovie("mario", "/Users/gene/bin/misc/stock/quasimondo - cyclegan-feedback.mp4", true, 0.52, 0, 0.48, 1);
    
    s = slideshow.addSlide("Next-frame prediction");
    s->addMovie("p2p", "/Users/gene/bin/misc/stock/mario-fireworks-feedback-pix2pix.mp4", true, 0.0, 0, 1, 1);
    
    s = slideshow.addSlide("Uncanny Mirror");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/quasimondo_uncannymirror.mp4", true, 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "Mario Klingemann (@quasimondo)", 0.01, 0.0, 1.0);
    
    
    
    
    s = slideshow.addSlide("Decentralized AI");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/decentralizedAI.png", 0.0, 0.0, 1, 1);
    
    s = slideshow.addSlide("Decentralization technology");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/levelsofdcai.png", 0.0, 0.0, 1, 1);
    
    s = slideshow.addSlide("Decentralization is more complicated than this");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/cent-dec-dist.jpg", 0.0, 0.1, 1, 0.9);
    
    s = slideshow.addSlide("Bitcoin");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bitcoin_protocol/frame13.png", 0, 0, 1.0, 0.69);
    
    s = slideshow.addSlide("How Bitcoin is secured");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bitcoin_protocol/frame14.png", 0, 0, 1.0, 0.69);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bitcoin_protocol/bitcoin_blockchain.png", 0, 0.7, 1.0, 0.3);
    
    s = slideshow.addSlide("Peer-to-peer networks");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/p2p.jpeg", 0.0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "", 0.01, 0.0, 0.9);
    
    s = slideshow.addSlide("Peer-to-peer networks");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bittorrent.png", 0.0, 0.5, 0.5, 0.5);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/diaspora.jpg", 0.72, 0.0, 0.28, 0.5);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/mastodon.png", 0.5, 0.0, 0.22, 0.5);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/napster.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/Freifunk.net.svg.png", 0.5, 0.5, 0.5, 0.5);
    
    s = slideshow.addSlide("IPFS (Inter-Planetary File Systems)");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/openmined/ipfs-advantages.png", 0.0, 0, 1.0, 0.6);
    s->addText(h2, ofColor(0), " - Network of peer nodes hosting and serving content\n - User (content creator) in control via crypto\n - Websites/services/apps have no central origin / central point of failure\n - Security is built into the protocol", 0.01, 0.65, 0.9);
    
    s = slideshow.addSlide("Decentralized web");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/Steemit.png", 0.0, 0.0, 0.5, 0.42);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/openbazaar.jpg", 0.5, 0.0, 0.5, 0.42);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/res(0)nate.png", 0.0, 0.5, 0.5, 0.42);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/iota.png", 0.5, 0.5, 0.5, 0.42);
    s->addText(h4, ofColor(0), "Steemit (social media, i.e. Reddit+Facebook)", 0.01, 0.43, 0.4);
    s->addText(h4, ofColor(0), "OpenBazaar (i.e. Amazon)", 0.51, 0.43, 0.4);
    s->addText(h4, ofColor(0), "Resonate (music streaming/hosting, i.e. SoundCloud)", 0.01, 0.93, 0.4);
    s->addText(h4, ofColor(0), "IOTA (tokenize IOT devices)", 0.51, 0.93, 0.4);
    
    s = slideshow.addSlide("Decentralized storage");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/filecoin.png", 0.0, 0.0, 0.5, 0.48);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/storj-logo.jpg", 0.5, 0.0, 0.5, 0.48);
    s->addText(h2, ofColor(0), "Decentralized file storage (i.e. Dropbox)", 0.1, 0.6, 0.9);
    
    s = slideshow.addSlide("Decentralized computation");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/golem1.png", 0.0, 0.0, 1.0, 0.4);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/truebit.png", 0.0, 0.41, 1.0, 0.4);
    s->addText(h2, ofColor(0), "Distributed computation (i.e. Amazon AWS)", 0.1, 0.85, 0.9);
    
    
    s = slideshow.addSlide("Basic Attention Token + Brave");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/advertising-model.png", 0.0, 0.0, 0.6, 0.6);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/BAT-model.png", 0.4, 0.4, 0.6, 0.6);
    s->addText(h3, ofColor(0), "", 0.11, 0.9, 0.5);
    
    s = slideshow.addSlide("Ocean Protocol");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/ocean-protocol.png", 0.15, 0.1, 0.7, 0.45);
    s->addText(h3, ofColor(0), "https://oceanprotocol.com/", 0.01, 0.0, 0.9);
    s->addText(h3, ofColor(0), "Benefits of decentralized databases\n - data consortium / sharding among companies\n - banks share user records for better credit card fraud\n - global data commons\n - no one controls infrastructure\n - fine-grained control over IP, usage rights, DRM that can be worked into the protocol\n - asset/token exchange\n - IoT licenses personal data in exchange for token/electricity", 0.1, 0.58, 0.8);
    
    s = slideshow.addSlide("Decentralization ecosystem");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/blockchainecosystem.png", 0.0, 0.0, 1, 1);
    
    //    s = slideshow.addSlide("Computing infrastructure");
    //    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/centralized-vs-decentralized.png", 0.05, 0.1, 0.9, 0.9);
    //    s->addText(h3, ofColor(0), "Trent McConaghy, BigChainDB\nhttps://blog.bigchaindb.com/blockchain-infrastructure-landscape-a-first-principles-framing-92cc5549bafe", 0.01, 0.0, 0.9);
    
    
    
    
    s = slideshow.addSlide("Smart contracts");
    s->addText(h3, ofColor(0), "Nick Szabo, 1993/1996", 0.01, 0.0, 0.9);
    s->addImage("watercycle", "/Users/gene/bin/decentralizedAI/smartcontract.png", 0.0, 0.1, 0.5, 0.9);
    s->addImage("watercycle", "/Users/gene/bin/decentralizedAI/vendingmachine.jpg", 0.5, 0.1, 0.5, 0.9);
    
    s = slideshow.addSlide("Ethereum");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/ethereum.jpg", 0.1, 0.0, 0.8, 0.3);
    s->addText(h2, ofColor(0), "Own blockchain", 0.1, 0.35, 0.9);
    s->addText(h2, ofColor(0), "Turing complete language + virtual machine", 0.1, 0.45, 0.9);
    s->addText(h2, ofColor(0), "Platform for decentralized apps (dapps)", 0.1, 0.55, 0.9);
    
    
    s = slideshow.addSlide("Smart contract (in Ethereum)");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/DAO_SC.png", 0.0, 0.1, 1.0, 0.9);
    
    s = slideshow.addSlide("Decentralized application");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/DAO_DA.png", 0.0, 0.0, 1, 1);
    
    s = slideshow.addSlide("Decentralized (autonomous) organization");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/DAO_DO.png", 0.0, 0.0, 1, 1);
    // difference from SC: unbounded number of participants
    
    s = slideshow.addSlide("Decentralized autonomous organization");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/DAO_SCx.png", 0.0, 0.0, 1, 1);
    s->addText(h3, ofColor(0), "smart contracts can interact with each other", 0.01, 0.0, 0.9);
    
    s = slideshow.addSlide("Decentralized autonomous organization");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/dao-quadrants.jpg", 0.1, 0.2, 0.8, 0.7);
    s->addText(h3, ofColor(0), "https://blog.ethereum.org/2014/05/06/daos-dacs-das-and-more-an-incomplete-terminology-guide/", 0.01, 0.0, 0.9);
    
    s = slideshow.addSlide("Decentralized applications & DAOs");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/car2go.jpg", 0.0, 0.00, 0.5, 0.5);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/hoteldoor.jpg", 0.0, 0.5, 0.5, 0.5);
    s->addText(h2, ofColor(0), "Use cases:\n - Kickstarter\n - Market / exchange\n - Insurance co-op\n - Mutual fund\n - Prediction market\n - Futarchy\n - Liquid governance", 0.51, 0.1, 0.5);
    
    s = slideshow.addSlide("Decentralized autonomous corporations");
    s->addText(h2, ofColor(0), "Perceived benefits: collusion resistance, transparency, inclusiveness", 0.1, 0.1, 0.9);
    s->addText(h2, ofColor(0), "Perceived dangers: lack of accountability, externalities", 0.1, 0.4, 0.9);
    
    s = slideshow.addSlide("AI DAOs");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/car2go.jpg", 0.0, 0.05, 0.5, 0.6);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/hoteldoor.jpg", 0.51, 0.05, 0.5, 0.6);
    s->addText(h2, ofColor(0), "smart properties which own and operate themselves?\ni.e. look for clients, manage own resources, comply with law, no markup, no sleep", 0.1, 0.67, 0.9);
    
    s = slideshow.addSlide("Numerai");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/numerai.png", 0.7, 0.0, 0.3, 0.3);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/numerai-idea.png", 0.0, 0.0, 0.68, 0.5);
    s->addText(h2, ofColor(0), "Hedge fund + data scientists", 0.1, 0.65, 0.9);
    s->addText(h2, ofColor(0), "AI combines to make bets, rewards best performers", 0.1, 0.75, 0.9);
    s->addText(h2, ofColor(0), "Homomorphic encryption makes whole process secure and blind", 0.1, 0.85, 0.9);
    
    s = slideshow.addSlide("(Some) problems with machine learning");
    s->addText(h2, ofColor(0), " - Privacy / convenience tradeoff", 0.01, 0.2, 0.9);
    s->addText(h2, ofColor(0), " - Lost natural income", 0.01, 0.3, 0.9);
    s->addText(h2, ofColor(0), " - Data aggregated into silos", 0.01, 0.4, 0.9);
    s->addText(h2, ofColor(0), " - Some products are too sensitive", 0.01, 0.5, 0.9);
    
    s = slideshow.addSlide("How OpenMined works");
    s->addImage("mnist1", "/Users/gene/bin/decentralizedAI/openmined.png", 0.1, 0.1, 0.8, 0.8);
    s->addText(h2, ofColor(0), "openmined.org", 0.01, 0.0, 0.9);
    
    string omTitle = "Centralized machine learning";
    for (int i=0; i<71; i++) {
        s = slideshow.addSlide(omTitle);
        s->addImage("openmined", "/Users/gene/bin/decentralizedAI/openmined_protocol/frame"+ofToString(i)+".png", 0, 0, 1, 1);
        
        if (i==6) {
            s = slideshow.addSlide("+/-");
            s->addText(h2, ofColor(200, 0, 0), " - Data silo", 0.01, 0.2, 0.9);
            s->addText(h2, ofColor(200, 0, 0), " - Privacy", 0.01, 0.3, 0.9);
            s->addText(h2, ofColor(200, 0, 0), " - Lost natural income", 0.01, 0.4, 0.9);
            s->addText(h2, ofColor(0, 200, 0), " + Model is secure", 0.01, 0.5, 0.9);
            omTitle = "Federated learning";
        }
        if (i==14) {
            s = slideshow.addSlide("+/-");
            s->addText(h2, ofColor(0, 200, 0), " + Users maintain data... sort of", 0.01, 0.2, 0.9);
            s->addText(h2, ofColor(200, 0, 0), " - Privacy still an issue because of gradients", 0.01, 0.3, 0.9);
            s->addText(h2, ofColor(200, 0, 0), " - Lost natural income", 0.01, 0.4, 0.9);
            s->addText(h2, ofColor(200, 0, 0), " - Model is insecure from theft", 0.01, 0.5, 0.9);
            omTitle = "Federated learning + homomorphic encryption";
            
            s = slideshow.addSlide("Homomorphic encryption");
            s->addImage("dcai", "/Users/gene/bin/decentralizedAI/homomorphic-encryption.png", 0.0, 0.1, 1.0, 0.9);
            s->addText(h3, ofColor(0), "https://iamtrask.github.io/2017/03/17/safe-ai/", 0.01, 0.0, 0.9);
        }
        if (i==25) {
            s = slideshow.addSlide("+/-");
            s->addText(h2, ofColor(0, 200, 0), " + Users maintain data... sort of", 0.01, 0.2, 0.9);
            s->addText(h2, ofColor(0, 200, 0), " + Privacy maintained... sort of", 0.01, 0.3, 0.9);
            s->addText(h2, ofColor(200, 0, 0), " - Malicious AI Inc could still steal the data", 0.01, 0.4, 0.9);
            s->addText(h2, ofColor(0, 200, 0), " + Model is secure from theft", 0.01, 0.5, 0.9);
            s->addText(h2, ofColor(200, 0, 0), " - Lost natural income", 0.01, 0.6, 0.9);
            omTitle = "Federated learning + homomorphic encryption + smart contract";
        }
        if (i==43) {
            s = slideshow.addSlide("+/-");
            s->addText(h2, ofColor(0, 200, 0), " + Users maintain data", 0.01, 0.2, 0.9);
            s->addText(h2, ofColor(0, 200, 0), " + Privacy maintained", 0.01, 0.3, 0.9);
            s->addText(h2, ofColor(0, 200, 0), " + Users are compensated for data (incentives)", 0.01, 0.4, 0.9);
            s->addText(h2, ofColor(0, 200, 0), " + Model is secure from theft", 0.01, 0.5, 0.9);
            s->addText(h2, ofColor(200, 0, 0), " - Who holds the keys?", 0.01, 0.6, 0.9);
            omTitle = "Federated learning + homomorphic encryption + smart contract + oracle";
        }
        if (i==70) {
            s = slideshow.addSlide("+/-");
            s->addText(h2, ofColor(0, 200, 0), " + Users maintain data", 0.01, 0.2, 0.9);
            s->addText(h2, ofColor(0, 200, 0), " + Privacy maintained", 0.01, 0.3, 0.9);
            s->addText(h2, ofColor(0, 200, 0), " + Users are compensated for data (incentives)", 0.01, 0.4, 0.9);
            s->addText(h2, ofColor(0, 200, 0), " + Model is secure from theft", 0.01, 0.5, 0.9);
            s->addText(h2, ofColor(0, 200, 0), " + Keys are secure", 0.01, 0.6, 0.9);
        }
    }
    
    s = slideshow.addSlide("Decentralized AI");
    s->addText(h2, ofColor(0), " - What if the users = AI Inc?", 0.01, 0.2, 0.9);
    s->addText(h2, ofColor(0), " - Could a model be a shared secret?", 0.01, 0.3, 0.9);
    s->addText(h2, ofColor(0), " - Could models run autonomously?", 0.01, 0.4, 0.9);
    s->addText(h2, ofColor(0), " - Could models control their own re$ources?", 0.01, 0.5, 0.9);
    
    s = slideshow.addSlide("Art DAOs?");
    s->addMovie("dcgan", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0.026, 0.5, 0.47);
    s->addImage("deepdream", "/Users/gene/bin/misc/stock/building-dreams.png", 0, 0.515, 0.5, 0.48);
    s->addImage("stylenet", "/Users/gene/bin/misc/stock/stylenet-original.png", 0.5, 0.53, 0.5, 0.47);
    s->addImage("synthesizing original", "/Users/gene/bin/misc/stock/synthesizing-original.jpg", 0.5, 0.025, 0.5, 0.48);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=QYcKCGdZvq4", 0.01, 0.0, 1.0);
    s->addText(h5, ofColor(0), "research.googleblog.com/2015/06/inceptionism-going-deeper-into-neural.html", 0.002, 0.475, 1.0);
    s->addText(h4, ofColor(0), "https://arxiv.org/abs/1508.06576", 0.6, 0.51, 1.0);
    s->addText(h4, ofColor(0), "http://www.evolvingai.org/synthesizing", 0.6, 0.0, 1.0);
    
    s = slideshow.addSlide("Art DAO recipe");
    s->addText(h2, ofColor(0), "1) Create generative art, make multiple editions", 0.05, 0.1, 1.0);
    s->addText(h2, ofColor(0), "2) Timestamp on blockchain (ascribe)", 0.05, 0.25, 1.0);
    s->addText(h2, ofColor(0), "3) Sell them on Getty/Shoppify/OpenBazaar", 0.05, 0.4, 1.0);
    s->addText(h2, ofColor(0), "4) Transfer rights to buyers", 0.05, 0.55, 1.0);
    s->addText(h2, ofColor(0), "5) Pay for computation from proceeds", 0.05, 0.7, 1.0);
    s->addText(h2, ofColor(0), "6) Step 1", 0.05, 0.85, 1.0);
    s->addText(h4, ofColor(0), "Trent McConaghy\nhttps://blog.bigchaindb.com/ai-daos-and-three-paths-to-get-there-cfa0a4cc37b8", 0.01, 0.0, 1.0);
    
    s = slideshow.addSlide("Could an AI be a corporation?");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/Zug_Zytturm_1.jpg", 0.0, 0.0, 0.6, 0.7);
    s->addText(h2, ofColor(0), "Corporations = people?\n\nWhat about corporations with 0 people?\n\nZug, Switzerland = \"Crypto Valley\"", 0.61, 0.1, 0.3);
    
    
    
}




//--------------------------------------------------------------
void ofApp::WorkshopStrelka_GenModels(){
    
    
    
    s = slideshow.addSlide("The New Normal @ Strelka, 2018");
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.4, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.3, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.4, 0.5);
    s->start();
    

    // ukraine + baby
    ///Users/gene/Documents/Art/boojie project/gene grandpa 2 copy.jpg
    
    s = slideshow.addSlide("About me");
    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
    s->addImage("genre VA", "/Users/gene/bin/misc/sourcetone/genre-AvgVA.jpg", 0.0, 0.4, 0.42, 0.6);
    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
    
    s = slideshow.addSlide("About me");
    s->addImage("tweet", "/Users/gene/Web/genekogan.github.io/_site/images/birl/birl1.jpg", 0.0, 0.0, 1, 0.35);
    s->addImage("tweet", "/Users/gene/bin/misc/Snyderphonics_Manta.jpg", 0.0, 0.365, 1, 0.64);
    
    s = slideshow.addSlide("About me");
    s->addScrollableImage("color of words", "/Users/gene/bin/misc/stock/color-of-words.png", 0, 0, 1, 1);

    s = slideshow.addSlide("About me");
    s->addMovie("KPT", "/Users/gene/bin/opera-toolkit/colin-ribbons-2_nosound.mp4", true, 0.0, 0, 0.5, 0.6);
    s->addMovie("KPT", "/Users/gene/bin/kinect-projector-toolkit/Silhouettes @ Saigon Ranger_nosound.mp4", true, 0.4, 0.4, 0.64, 0.62);
    
    s = slideshow.addSlide("About me");
    s->addMovie("simulation", "/Users/gene/bin/images/Flocking-fast.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("About me");
    s->addMovie("simulation", "/Users/gene/bin/images/VertexFields2_01.29.2012.mov", true, 0, 0, 1, 1);

    s = slideshow.addSlide("About me");
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_hokusai.jpg", 0.0, 0.0, 0.333, 1.0);
    //s->addMovie("video style", "/Users/gene/bin/style-transfer/10_optical_flow/video-style-transfer-x4-reordered.mp4", true, 0.334, 0, 0.67, 1);
    s->addMovie("interplations", "/Users/gene/bin/dcgan/summary/interpolations.mp4", true, 0.334, 0, 0.67, 1);
    
    s = slideshow.addSlide("About me");
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_content/deeptrain2.mp4", true, 0.0, 0.0, 0.6, 0.35);
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_prototypes/testOtherl4_1.mp4", true, 0.0, 0.35, 0.5, 0.65);
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_prototypes/makeMid_blur_2a_imovie.mp4", true, 0.4, 0.0, 0.6, 0.6);
    s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_feedback/theFrame7.mp4", true, 0.5, 0.5, 0.5, 0.5);

    s = slideshow.addSlide("About me");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-guides-index.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("About me");
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/ecal/ecal1.JPG", 0.0, 0.0, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/Pictures/copenhagen/IMG_6195.JPG", 0.5, 0.0, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/nabi1.jpg", 0.0, 0.5, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/IMG_6301.JPG", 0.5, 0.5, 0.5, 0.48);
    
    s = slideshow.addSlide("About me");
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/opendot/30491978563_c7baa100d2_o.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/altai.JPG", 0.5, 0.0, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/influencers3.jpg", 0.0, 0.5, 0.5, 0.48);
    s->addImage("workshop", "/Users/gene/Web/genekogan.github.io/images/workshops/nabi2.jpg", 0.5, 0.5, 0.5, 0.48);
    
    s = slideshow.addSlide("About me");
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/decentralizedAI/dcai7.png", 0, 0.07, 1, 0.94);
    s->addText(h3, ofColor(0), "https://docs.google.com/presentation/d/1RI6BnBsJtTBg3djZbD1hDjuhQagPBAUtAqcqoYWQTxU", 0.01, 0.0, 0.9);
    
    s = slideshow.addSlide("Synopsis");
    s->addText(h3, ofColor(0), "Day 1: Generative models", 0.1, 0.1, 0.8);
    s->addText(h3, ofColor(0), " - PCA for poets", 0.1, 0.2, 0.8);
    s->addText(h3, ofColor(0), " - how generative models work", 0.1, 0.3, 0.8);
    s->addText(h3, ofColor(0), " - practical: DCGAN, BEGAN, pix2pix, CycleGAN", 0.1, 0.4, 0.8);
    s->addText(h3, ofColor(0), "Day 2: Autonomous art", 0.1, 0.5, 0.8);
    s->addText(h3, ofColor(0), " - Fundamentals of decentralization", 0.1, 0.6, 0.8);
    s->addText(h3, ofColor(0), " - Decentralized AI", 0.1, 0.7, 0.8);
    s->addText(h3, ofColor(0), "Day 3: Various", 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(0), " - pix2pix, CycleGAN, neural-synth", 0.1, 0.9, 0.8);
    
    s = slideshow.addSlide("Deep generative models");
    s->addMovie("fb", "/Users/gene/bin/misc/nvidia-progressive-faces.mp4", true, 0, 0.1, 0.5, 0.9);
    s->addMovie("fb", "/Users/gene/bin/misc/DrBeef_landscapes.mp4", true, 0.5, 0.1, 0.5, 0.9);
    s->addText(h4, ofColor(0), "Karras et al (NVIDIA)", 0.01, 0.0, 1.0);
    s->addText(h4, ofColor(0), "Robbie Barrat (@DrBeef_)", 0.51, 0.0, 1.0);
    
    s = slideshow.addSlide("pix2pix -> generative model as a filter");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/jasper-streetview.mp4", true, 0, 0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump_gene1.mp4", true, 0.5, 0.0, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/pix2pix/memo-painting.mp4", true, 0.0, 0.5, 0.5, 0.5);
    s->addMovie("fb", "/Users/gene/bin/pix2pix/brannon-kurzweil.mp4", true, 0.5, 0.5, 0.5, 0.5);
    
    s = slideshow.addSlide("From PCA to Puppyslugs");
    s->addImage("pca", "/Users/gene/bin/misc/frompcatopuppyslugs_thumb.png", 0.0, 0.1, 1.0, 0.9);
    s->addText(h3, ofColor(0), "https://ml4a.github.io/classes/misc/01/", 0.01, 0.0, 1.0);
    
    s = slideshow.addSlide("Attributes are not independent");
    s->addImage("pca", "/Users/gene/bin/misc/stock/GaussianScatterPCA.svg.png", 0.0, 0, 0.5, 1.0);
    s->addBreakpoint();
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
    // samples left -> right
    
    
    ///////////////////
    // Insert neural net stuff
    
    s = slideshow.addSlide("Machine learning");
    s->addImage("imagenet", "/Users/gene/bin/misc/stock/machine-learning.png", 0.0, 0.0, 0.4, 1);
    s->addImage("mnist1", "/Users/gene/bin/misc/stock/mnist-forward-pass-1.png", 0.4, 0, 0.6, 1);
    
    s = slideshow.addSlide("Computer vision 90s-00s -- typical pipeline");
    s->addImage("imagenet", "/Users/gene/bin/misc/stock/image-classification-pipeline.jpg", 0, 0.05, 1.0, 0.5);
    s->addText(h4, ofColor(0), "https://www.learnopencv.com/image-recognition-and-object-detection-part1/", 0.1, 0.0, 0.8);
    s->addText(h3, ofColor(0), "+ Efficient, accurate, interpretable", 0.1, 0.6, 0.8);
    s->addText(h3, ofColor(0), "- Expensive, time-consuming, many hyperparameters", 0.1, 0.66, 0.8);
    s->addText(h3, ofColor(0), "- Non-homogenous code", 0.1, 0.72, 0.8);
    s->addText(h3, ofColor(0), "- Task-specific; does not generalize", 0.1, 0.78, 0.8);
    
    s = slideshow.addSlide("Computer vision -> Deep learning");
    s->addImage("imagenet", "/Users/gene/bin/misc/stock/image-classification-pipeline-new.jpg", 0, 0.05, 1.0, 0.5);
    s->addText(h4, ofColor(0), "https://www.learnopencv.com/image-recognition-and-object-detection-part1/", 0.1, 0.0, 0.8);
    s->addText(h3, ofColor(0), "+ Trained end-to-end", 0.1, 0.6, 0.8);
    s->addText(h3, ofColor(0), "+ Excellent performance", 0.1, 0.66, 0.8);
    s->addText(h3, ofColor(0), "+ Homogenous code, generalizes well to many tasks and domains", 0.1, 0.72, 0.8);
    s->addText(h3, ofColor(0), "- Resource and data-intensive, expensive", 0.1, 0.78, 0.8);
    
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
    
    s = slideshow.addSlide("Convolutional networks");
    s->addImage("lenet", "/Users/gene/bin/misc/stock/lenet.png", 0, 0, 1, 0.4);
    s->addImage("alexnet", "/Users/gene/bin/misc/stock/alexnet2.png", 0, 0.5, 1, 0.4);
    s->addText(h3, ofColor(0), "Lenet (LeCun et al, 1998) [http://yann.lecun.com/exdb/lenet/]", 0.05, 0.4, 0.9);
    s->addText(h3, ofColor(0), "AlexNet 2012 [via https://jeremykarnowski.wordpress.com/2015/07/15/alexnet-visualization/]", 0.05, 0.92, 0.9);
    
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
    
    s = slideshow.addSlide("Convolution layers");
    s->addMovie("convolution", "/Users/gene/bin/misc/stock/convolution_demo.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "ml4a.github.io/dev/demos/demo_convolution.html", 0.1, 0.05, 1);
    
    s = slideshow.addSlide("Convolutional neural networks");
    s->addImage("lenet", "/Users/gene/bin/misc/stock/lenet.png", 0, 0, 1, 0.4);
    s->addMovie("lenet demo", "/Users/gene/bin/misc/stock/lenet_demo.mp4", true, 0, 0.4, 1, 0.6);
    s->addText(h3, ofColor(0), "Lenet (LeCun et al, 1998) [http://yann.lecun.com/exdb/lenet/]", 0, 0.4, 1);
    
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
    
    
    s = slideshow.addSlide("Applications of deep learning");
    s->addImage("karpathy slides", "/Users/gene/bin/misc/stock/karpathy-convnets-slide.png", 0, 0, 1, 0.95);
    s->addText(h5, ofColor(0), "https://www.youtube.com/watch?v=u6aEYuemt0M&t=8s", 0.1, 0.95, 0.9);
    
    s = slideshow.addSlide("Applications of deep learning");
    s->addImage("mitosis", "/Users/gene/bin/misc/stock/mitosis.png", 0, 0, 1, 0.75);
    s->addText(h4, ofColor(0), "Ciresan et al 2013 - Mitosis Detection in Breast Cancer Histology Images", 0.1, 0.8, 0.9);
    s->addText(h4, ofColor(0), "http://people.idsia.ch/~ciresan/data/miccai2013.pdf", 0.1, 0.9, 0.9);
    
    s = slideshow.addSlide("Applications of deep learning");
    s->addImage("speech processing", "/Users/gene/bin/misc/stock/cnn-speech.png", 0.0, 0.0, 0.33, 0.5);
    s->addImage("alphaGo", "/Users/gene/bin/misc/stock/nature-go.jpg", 0.1, 0.52, 0.5, 0.5);
    s->addImage("self-driving car dash", "/Users/gene/bin/misc/stock/sdc-dash.jpg", 0.44, 0.0, 0.4, 0.5);
    s->addImage("self-driving car", "/Users/gene/bin/misc/stock/self-driving-car.jpg", 0.72, 0.31, 0.3, 0.5);
    s->addText(h5, ofColor(0), "http://recognize-speech.com/acoustic-model/knn/comparing-different-architectures/convolutional-neural-networks-cnns", 0.01, 0.08, 0.5);
    s->addText(h5, ofColor(0), "http://www.informationweek.com/it-life/googles-self-driving-car-busted-for-driving-too-slow/d/d-id/1323140", 0.35, 0.1, 0.5);
    s->addText(h5, ofColor(0), "https://infinityleap.com/the-cars-have-eyes-nvidia-unveils-self-driving-car-system-at-ces-2016/", 0.35, 0.12, 0.45);
    s->addText(h5, ofColor(0), "http://www.nature.com/nature/journal/v529/n7587/full/nature16961.html", 0.35, 0.4, 0.5);
    s->addText(h5, ofColor(0), "https://vk.com/doc-44016343_437229031?dl=56ce06e325d42fbc72", 0.35, 0.42, 0.5);

    s = slideshow.addSlide("Backpropaganda");
    s->addImage("invest", "/Users/gene/bin/misc/stock/hype-investment.jpg", 0.42, 0.0, 0.59, 0.7);
    s->addImage("invest", "/Users/gene/bin/misc/stock/ILSVRC.png", 0.0, 0.05, 0.4, 0.4);
    s->addImage("invest", "/Users/gene/bin/misc/ILSVRC-nvidia.png", 0.0, 0.55, 0.4, 0.4);
    s->addText(h3, ofColor(80), "\"Machine learning is a core, transformative way by which we’re rethinking everything we’re doing,\" - Sundar Pichai, Google CEO", 0.45, 0.7, 0.4);
    
    s = slideshow.addSlide("Deep learning community");
    s->addImage("invest", "/Users/gene/bin/misc/stock/arxiv.png", 0.0, 0.0, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/torch.png", 0.0, 0.33, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/keras.png", 0.0, 0.66, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/kaggle.png", 0.5, 0.0, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/twitter.png", 0.5, 0.33, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/reddit-icon.png", 0.5, 0.66, 0.45, 0.3);
    
    // software 2.0
    s = slideshow.addSlide("A new paradigm for computing?");
    s->addImage("invest", "/Users/gene/bin/misc/software2.0.png", 0.0, 0.0, 0.5, 1);
    s->addText(h4, ofColor(80), "Software 1.0 - logic and control-flow", 0.51, 0.2, 0.45);
    s->addText(h4, ofColor(80), "Software 2.0 - differentiable programming", 0.51, 0.6, 0.45);
    
    
    
    //////////////////
    // back to gen models
    
    
    s = slideshow.addSlide("so.... back to Autoencoders");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder.png", 0, 0, 1, 0.3);
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder_net.png", 0, 0.3, 1, 0.65);
    s->addText(h4, ofColor(0), "world's most expensive identity function", 0.01, 0.93, 0.8);
    // samples left -> right
    
    s = slideshow.addSlide("Reconstructions MNIST");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoders_mnist_reconstruction.png", 0, 0, 1, 1);
    
    
    // GANS + DCGANs + A book from the sky + Zero Likes + VGAN
    s = slideshow.addSlide("Autoencoder hallucinations");
    s->addImage("autoencoder", "/Users/gene/bin/autoencoders/_Classes.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Generative adversarial nets (Goodfellow et al)");
    s->addImage("Mona Lisa", "/Users/gene/bin/misc/stock/GANs.png", 0.0, 0.0, 1.0, 1.0);
    
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
    
    s = slideshow.addSlide("HIT-OR3C");
    s->addScrollableImage("Actuals", "/Users/gene/bin/dcgan/summary/actual.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Fake (R) + Real (L)");
    s->addImage("Mona Lisa", "/Users/gene/bin/dcgan/summary/fakereal.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("A Book from the Sky (Dec 2015)");
    s->addMovie("zloops", "/Users/gene/bin/dcgan/summary/zloops.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Character interpolations");
    s->addMovie("interplations", "/Users/gene/bin/dcgan/summary/interpolations.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Radical interpolations");
    s->addText(h3, ofColor(0), "interpolations across characters sharing the same radical often appear to preserve it", 0.1, 0.0, 0.8);
    s->addMovie("radical interpolations", "/Users/gene/bin/dcgan/summary/radinterpolation.mp4", true, 0, 0.2, 1, 0.8);
    
    s = slideshow.addSlide("Arithmetic tricks");
    s->addMovie("arithmetic", "/Users/gene/bin/dcgan/public/arithmetic2.mp4", true, 0.1, 0.2, 0.8, 0.6);
    
    s = slideshow.addSlide("DCGAN flowers");
    s->addImage("flowers", "/Users/gene/bin/dcgan/public/07_flowers.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://twitter.com/vintermann/status/675599478494208000", 0, 0, 1);
    
    s = slideshow.addSlide("DCGAN Manga");
    s->addImage("manga 1", "/Users/gene/bin/dcgan/public/07_manga_sample1.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://github.com/mattya/chainer-DCGAN", 0, 0, 1);
    
    s = slideshow.addSlide("DCGAN Manga interpolations");
    s->addImage("manga 2", "/Users/gene/bin/dcgan/public/07_manga_sample2.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://github.com/mattya/chainer-DCGAN", 0, 0, 1);
    
    
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
    
    
    
    
    
    
    // DGN
    
    s = slideshow.addSlide("Deep Generator Networks");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/DGN_architecture.jpg", 0.0, 0.1, 1, 0.41);
    s->addImage("classvis", "/Users/gene/bin/misc/stock/class-synthesis-deepgen.png", 0.0, 0.52, 1, 0.48);
    s->addText(h4, ofColor(0), "Nguyen, Dosovitskiy, Yosinski, Brox, Clune [arxiv.org/abs/1605.09304v1]", 0.15, 0.01, 1.0);
    s->start();
    
    s = slideshow.addSlide("DGN CaffeNet");
    s->addScrollableImage("classvis", "/Users/gene/bin/synthesizing/synthesizing-caffenet-tSNE.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("DGN convergence");
    s->addText(h4, ofColor(0), "https://github.com/Evolving-AI-Lab/synthesizing", 0.15, 0.00, 1.0);
    ofxPPMovie *mov3 = s->addMovie("macaw", "/Users/gene/bin/synthesizing/macaw.mov", true, 0.05, 0.05, 0.9, 0.9);
    mov3->setLoop(false);
    
    s = slideshow.addSlide("DGN convergence");
    ofxPPMovie *mov = s->addMovie("cheeseburger", "/Users/gene/bin/synthesizing/teapotnew.mov", true, 0.02, 0.1, 0.46, 0.8);
    mov->setLoop(false);
    ofxPPMovie *mov2 = s->addMovie("teapot", "/Users/gene/bin/synthesizing/cheeseburgernew.mov", true, 0.52, 0.1, 0.46, 0.8);
    mov2->setLoop(false);
    
    s = slideshow.addSlide("DGN (people)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/people.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("DGN (boathouses)");
    s->addImage("classvis", "/Users/gene/bin/synthesizing/boathouses.png", 0.025, 0.025, 0.95, 0.95);
    
    s = slideshow.addSlide("BEGAN");
    s->addImage("BEGAN", "/Users/gene/bin/misc/stock/BEGAN.png", 0.1, 0.3, 0.8, 0.6);
    s->addText(h3, ofColor(0), "Boundary Equilibrium GANs (BEGAN)\nBerthelot et al (https://arxiv.org/abs/1703.10717)", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("DiscoGAN");
    s->addText(h3, ofColor(255), "Discover Cross-Domain Relations (DiscoGAN)\nKim et al (https://arxiv.org/abs/1703.05192)", 0.1, 0.0, 0.8);
    s->addImage("DiscoGAN", "/Users/gene/bin/misc/stock/DiscoGAN.png", 0.0, 0.09, 1.0, 0.32);
    s->addImage("DiscoGAN", "/Users/gene/bin/misc/stock/DiscoGAN-gender1.png", 0.0, 0.425, 1.0, 0.29);
    s->addImage("DiscoGAN", "/Users/gene/bin/misc/stock/DiscoGAN-gender2.png", 0.0, 0.715, 1.0, 0.29);
    
    s = slideshow.addSlide("Progressive Growing of GANs for Improved Quality, Stability, and Variation");
    s->addMovie("pgan", "/Users/gene/bin/misc/nvidia-progressive-faces.mp4", true, 0, 0, 1, 1)->setLoop(true);
    s->addText(h4, ofColor(255), "Karras et al (NVIDIA), 2017\nhttp://research.nvidia.com/publication/2017-10_Progressive-Growing-of", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("lol");
    s->addImage("joke", "/Users/gene/bin/misc/DoppelGAN/highlights/rock-zelwegger.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Robbie Barratt");
    s->addMovie("drbeef", "/Users/gene/bin/misc/DrBeef_landscapes.mp4", true, 0, 0, 1, 1);
    
    
    
    s = slideshow.addSlide("PointCloud generation");
    s->addText(h3, ofColor(255), "Representation Learning and Adversarial Generation of 3D Point Clouds\nAchlioptas et all (https://arxiv.org/abs/1707.02392", 0.1, 0.0, 0.8);
    s->addImage("PointCloud", "/Users/gene/bin/misc/stock/pointcloud-GAN.png", 0.0, 0.15, 1.0, 0.8);
    
    s = slideshow.addSlide("Natural language generation");
    s->addImage("fb", "/Users/gene/bin/misc/stock/neural-storyteller.png", 0, 0.2, 1, 0.6);
    s->addText(h3, ofColor(255), "https://github.com/ryankiros/neural-storyteller", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("Dense captioning (Li, Karpathy, Johnson)");
    s->addImage("densecap", "/Users/gene/bin/misc/stock/rnn/densecap.png", 0, 0.06, 1, 0.94);
    s->addText(h4, ofColor(0), "http://cs.stanford.edu/people/karpathy/densecap/", 0.01, 0.01, 0.99);
    
    s = slideshow.addSlide("Dense captioning Atlas, The Next Generation");
    s->addMovie("densecap", "/Users/gene/bin/densecap/atlas.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Dense captioning Pouff's grocery trip");
    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream_grocery.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "original: https://www.youtube.com/watch?v=DgPaCWJL7XI", 0.01, 0.0, 0.99);
    
    
    s = slideshow.addSlide("Plug & Play Generative Networks");
    s->addImage("PPGN", "/Users/gene/bin/misc/ppgn_image_captioning.jpg", 0, 0.05, 1, 0.97);
    s->addText(h4, ofColor(0), "http://www.evolvingai.org/ppgn", 0.1, 0.0, 0.8);
    
    s = slideshow.addSlide("StackGAN");
    s->addText(h3, ofColor(255), "Text to Photo-realistic Image Synthesis with Stacked GANs\nZhang et al (https://arxiv.org/abs/1612.03242)", 0.1, 0.0, 0.8);
    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-bird2.jpg", 0.0, 0.12, 1.0, 0.4);
    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-flower1.jpg", 0.0, 0.53, 1.0, 0.4);
    s = slideshow.addSlide("StackGAN");
    s->addText(h3, ofColor(255), "Text to Photo-realistic Image Synthesis with Stacked GANs\nZhang et al (https://arxiv.org/abs/1612.03242)", 0.1, 0.0, 0.8);
    s->addImage("StackGAN", "/Users/gene/bin/misc/stock/StackGAN-bird_interp.png", 0.0, 0.15, 1.0, 0.8);
    
    s = slideshow.addSlide("Image Generation from Scene Graphs");
    s->addImage("", "/Users/gene/bin/misc/jcjhnson_scenegraph_gan.jpg", 0.0, 0.15, 1.0, 0.8);
    s->addText(h3, ofColor(255), "Johnson et al (https://arxiv.org/abs/1804.01622)", 0.1, 0.0, 0.8);
    
    
    s = slideshow.addSlide("Practical");
    s->addText(h4, ofColor(0), "https://github.com/ml4a/ml4a-guides (experimental branch)", 0.01, 0.1, 0.9);
    s->addText(h4, ofColor(0), "tools = DCGAN/BEGAN", 0.01, 0.2, 0.9);
    s->addText(h4, ofColor(0), "utils = wikiart, instagram scrapers", 0.01, 0.3, 0.9);
    
    s = slideshow.addSlide("GPU Options");
    s->addText(h3, ofColor(0), "EC2, GCC, Azure", 0.1, 0.1, 0.8);
    s->addText(h3, ofColor(0), "FloydHub / Paperspace", 0.1, 0.2, 0.8);
    s->addText(h3, ofColor(0), "Collab", 0.1, 0.3, 0.8);
    s->addText(h3, ofColor(0), "Make your own!", 0.1, 0.4, 0.8);
    
}




//--------------------------------------------------------------
void ofApp::WorkshopStrelka_DecentralizedAI(){
    s = slideshow.addSlide("Decentralized AI");
    s->addImage("workshop", "/Users/gene/bin/misc/workshops/decentralizedAI/dcai7.png", 0, 0.07, 1, 0.94);
    s->addText(h3, ofColor(255), "https://docs.google.com/presentation/d/1RI6BnBsJtTBg3djZbD1hDjuhQagPBAUtAqcqoYWQTxU", 0.01, 0.0, 0.9);
    
    s = slideshow.addSlide("Decentralized AI");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/decentralizedAI.png", 0.0, 0.0, 1, 1);
    
    s = slideshow.addSlide("Decentralization");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/levelsofdcai.png", 0.0, 0.0, 1, 1);
    
    s = slideshow.addSlide("Why is decentralized tech relevant to AI?");
    s->addText(h2, ofColor(0), "AI gives decentralized applications the ability to carry out more complex, intelligent, and adaptive behavior.", 0.01, 0.1, 0.9);
    s->addBreakpoint();
    s->addText(h2, ofColor(0), "Decentralization technology gives AI autonomy, and access to resources & value-exchange protocols.", 0.01, 0.5, 0.9);
    
    for (int i=0; i<7; i++) {
        s = slideshow.addSlide("Centralized machine learning");
        s->addImage("openmined", "/Users/gene/bin/decentralizedAI/openmined_protocol/frame"+ofToString(i)+".png", 0, 0, 1, 1);
    }
    
    s = slideshow.addSlide("(Some) problems with centralized machine learning");
    s->addText(h2, ofColor(0), " - Privacy / convenience tradeoff", 0.01, 0.2, 0.9);
    s->addText(h2, ofColor(0), " - Lost natural income", 0.01, 0.3, 0.9);
    s->addText(h2, ofColor(0), " - Data aggregated into silos", 0.01, 0.4, 0.9);
    s->addText(h2, ofColor(0), " - Some products are too sensitive", 0.01, 0.5, 0.9);
    
    
    s = slideshow.addSlide("Decentralization isn't new");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/arpanet.png", 0.0, 0.0, 0.5, 1);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/internet-protocols.png", 0.5, 0.0, 0.5, 1);
    
    s = slideshow.addSlide("Decentralization centralized");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/internet-companies.jpg", 0.0, 0.0, 1, 0.88);
    s->addText(h3, ofColor(0), "Notable: Ebay, PayPal, Amazon, AirBnB, Uber all were 'supposed to be' applications removing middle-men", 0.02, 0.88, 0.9);
    
    s = slideshow.addSlide("Peer-to-peer networks");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/p2p.jpeg", 0.0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "", 0.01, 0.0, 0.9);
    
    s = slideshow.addSlide("Peer-to-peer networks");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bittorrent.png", 0.0, 0.5, 0.5, 0.5);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/diaspora.jpg", 0.72, 0.0, 0.28, 0.5);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/mastodon.png", 0.5, 0.0, 0.22, 0.5);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/napster.jpg", 0.0, 0.0, 0.5, 0.5);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/Freifunk.net.svg.png", 0.5, 0.5, 0.5, 0.5);
    
    
    s = slideshow.addSlide("Public key cryptography");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/asymmetric-key-encryption.png", 0.05, 0.1, 0.4, 0.9);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/asymmetric-key-signature.png", 0.55, 0.1, 0.4, 0.9);
    s->addText(h2, ofColor(0), "Communication", 0.1, 0.05, 0.5);
    s->addText(h2, ofColor(0), "Signature", 0.6, 0.05, 0.5);
    //    s->addText(h2, ofColor(0), "Etymology of crypto-", 0.1, 0.9, 0.9);
    
    s = slideshow.addSlide("Applications of crypto: PGP");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/pgp_key.png", 0.0, 0.0, 1, 1);
    
    s = slideshow.addSlide("Applications of crypto: SSL/TLS (https)");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/https.png", 0.0, 0.0, 0.7, 0.15);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/ssl.png", 0.1, 0.3, 0.8, 0.6);
    s->addText(h4, ofColor(100), "http://resources.infosecinstitute.com/ssl-dot-net-volume-1-hypothesis/#gref", 0.1, 0.9, 0.9);
    
    s = slideshow.addSlide("Applications of crypto: Onion routing");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/how_tor_works.jpg", 0.0, 0.05, 0.7, 0.9);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/onion_routing_msg.png", 0.71, 0.15, 0.293, 0.8);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/tor.png", 0.71, 0, 0.293, 0.15);
    
    s = slideshow.addSlide("Applications of crypto: VPN (Virtual private network)");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/vpn-graphic-100022486-orig.jpg", 0.05, 0.05, 0.9, 0.9);
    
    
    
    s = slideshow.addSlide("Bitcoin (2008-)");
    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
    s->addText(h3, ofColor(255), "https://bitcoin.org/bitcoin.pdf", 0.1, 0, 0.9);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bitcoin-whitepaper1.png", 0, 0.1, 0.5, 0.89);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bitcoin-whitepaper2.png", 0.51, 0.1, 0.5, 0.41);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bitcoin-whitepaper3.png", 0.51, 0.55, 0.5, 0.41);
    
    
    s = slideshow.addSlide("Bitcoin (2008-)");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/satoshi-2009.png", 0, 0, 1, 0.6);
    s->addText(h4, ofColor(0), "http://p2pfoundation.ning.com/forum/topics/bitcoin-open-source", 0.3, 0.6, 0.7);
    s->addText(h3, ofColor(0), "Nov 2008 - Bitcoin whitepaper", 0.1, 0.7, 0.9);
    s->addText(h3, ofColor(0), "Jan 2009 - Bitcoin software launched", 0.1, 0.78, 0.9);
    s->addText(h3, ofColor(0), "Jan 2009 - first transaction (10 BTC Satoshi Nakamoto -> Hal Finney)", 0.1, 0.86, 0.9);
    
    
    float btcdemoW = 0.6;
    s = slideshow.addSlide("Normal bank");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bitcoin_protocol/frame0.png", 0, 0, btcdemoW, 1.0);
    
    s = slideshow.addSlide("Normal bank");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bitcoin_protocol/frame1.png", 0, 0, btcdemoW, 1.0);
    
    s = slideshow.addSlide("Normal bank");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bitcoin_protocol/frame2.png", 0, 0, btcdemoW, 1.0);
    s->addBreakpoint();
    s->addText(h2, ofColor(225,0,0), "Problem:", btcdemoW+0.015, 0.2, 0.9-btcdemoW);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/monopoly-pig.png", btcdemoW+0.15, 0.1, 0.2, 0.3);
    
    s = slideshow.addSlide("Decentralized ledger");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bitcoin_protocol/frame3.png", 0, 0, btcdemoW, 1.0);
    s->addText(h2, ofColor(225,0,0), "Problem:", btcdemoW+0.015, 0.2, 0.9-btcdemoW);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/monopoly-pig.png", btcdemoW+0.15, 0.1, 0.2, 0.3);
    s->addText(h2, ofColor(0,225,0), "Solution: decentralized bank", btcdemoW+0.015, 0.5, 0.9-btcdemoW);
    
    s = slideshow.addSlide("Decentralized ledger");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bitcoin_protocol/frame4.png", 0, 0, btcdemoW, 1.0);
    
    s = slideshow.addSlide("Decentralized ledger");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bitcoin_protocol/frame5.png", 0, 0, btcdemoW, 1.0);
    s->addText(h2, ofColor(225,0,0), "Problem: forgery", btcdemoW+0.015, 0.1, 0.9-btcdemoW);
    
    s = slideshow.addSlide("Decentralized ledger");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bitcoin_protocol/frame6.png", 0, 0, btcdemoW, 1.0);
    s->addText(h2, ofColor(225,0,0), "Problem: forgery", btcdemoW+0.015, 0.1, 0.9-btcdemoW);
    s->addText(h2, ofColor(0,225,0), "Solution: digital signature", btcdemoW+0.015, 0.3, 0.9-btcdemoW);
    // add image reminder of PKcrypto
    
    s = slideshow.addSlide("Decentralized ledger");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bitcoin_protocol/frame7.png", 0, 0, btcdemoW, 1.0);
    
    s = slideshow.addSlide("Decentralized ledger");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bitcoin_protocol/frame8.png", 0, 0, btcdemoW, 1.0);
    s->addText(h2, ofColor(225,0,0), "Problem: copying signature", btcdemoW+0.015, 0.1, 0.9-btcdemoW);
    
    s = slideshow.addSlide("Decentralized ledger");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bitcoin_protocol/frame9.png", 0, 0, btcdemoW, 1.0);
    s->addText(h2, ofColor(225,0,0), "Problem: copying signature", btcdemoW+0.015, 0.1, 0.9-btcdemoW);
    s->addText(h2, ofColor(0,225,0), "Solution: one-time use transaction ID", btcdemoW+0.015, 0.3, 0.9-btcdemoW);
    
    s = slideshow.addSlide("Decentralized ledger");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bitcoin_protocol/frame10.png", 0, 0, btcdemoW, 1.0);
    
    s = slideshow.addSlide("Decentralized ledger");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bitcoin_protocol/frame11.png", 0, 0, btcdemoW, 1.0);
    
    s = slideshow.addSlide("Decentralized ledger");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bitcoin_protocol/frame12.png", 0, 0, btcdemoW, 1.0);
    s->addText(h2, ofColor(225,0,0), "Problem: double spending", btcdemoW+0.015, 0.1, 0.9-btcdemoW);
    
    s = slideshow.addSlide("Decentralized ledger");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bitcoin_protocol/frame13.png", 0, 0, btcdemoW, 1.0);
    s->addText(h2, ofColor(225,0,0), "Problem: double spending", btcdemoW+0.015, 0.1, 0.9-btcdemoW);
    s->addText(h2, ofColor(0,225,0), "Solution: consensus on order via voting", btcdemoW+0.015, 0.3, 0.9-btcdemoW);
    s->addBreakpoint();
    s->addText(h2, ofColor(225,0,0), "Problem: Sybil attack", btcdemoW+0.015, 0.6, 0.9-btcdemoW);
    
    s = slideshow.addSlide("Two problems, one solution");
    s->addText(h2, ofColor(225,0,0), "Problem: need consensus on transaction order", 0.1, 0.1, 0.3);
    s->addText(h2, ofColor(225,0,0), "Problem: where does money come from?", 0.6, 0.1, 0.3);
    s->addText(h2, ofColor(0,225,0), "Solution: reward nodes for cooperating on consensus", 0.15, 0.45, 0.6);
    s->addText(h2, ofColor(0), " => Bitcoin protocol", 0.15, 0.65, 0.8);
    
    s = slideshow.addSlide("Decentralized ledger");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bitcoin_protocol/frame13.png", 0, 0, btcdemoW, 1.0);
    
    s = slideshow.addSlide("Proof-of-work + mining");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bitcoin_protocol/frame14.png", 0, 0, btcdemoW, 1.0);
    
    s = slideshow.addSlide("Proof-of-work + mining");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bitcoin_protocol/frame15.png", 0, 0, btcdemoW, 1.0);
    s->addText(h2, ofColor(0), "Proof-of-work:\nFind nonce such that\n\nhash(transactions + previousHash + nonce) < target", btcdemoW+0.015, 0.1, 0.9-btcdemoW);
    s->addText(h2, ofColor(0), "Incentive: Winning miner gets some Bitcoin", btcdemoW+0.015, 0.5, 0.9-btcdemoW);
    
    s = slideshow.addSlide("Proof-of-work + mining");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bitcoin_protocol/frame16.png", 0, 0, btcdemoW, 1.0);
    s->addText(h2, ofColor(0), "\"block chain\"", btcdemoW+0.015, 0.4, 0.9-btcdemoW);
    
    
    s = slideshow.addSlide("Proof-of-work + mining");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/bitcoin_protocol/frame17.png", 0, 0, btcdemoW, 1.0);
    s->addText(h2, ofColor(0), "Pseudonimity", btcdemoW+0.015, 0.4, 0.9-btcdemoW);
    s->addText(h2, ofColor(225,0,0), "Linking analysis", btcdemoW+0.015, 0.6, 0.9-btcdemoW);
    s->addText(h2, ofColor(225,0,0), "Deanonymization", btcdemoW+0.015, 0.7, 0.9-btcdemoW);
    
    s = slideshow.addSlide("Double spending / 51% attack");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/block_chain_extended.png", 0.1, 0.15, 0.8, 0.3);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/block_chain_cheating.png", 0.1, 0.65, 0.8, 0.3);
    s->addText(h3, ofColor(0,0,0), "How proof-of-work incentive stabilizes forks", 0.015, 0.05, 0.9-btcdemoW);
    s->addText(h3, ofColor(0,0,0), "Why double spend attacks are hard", 0.015, 0.55, 0.9-btcdemoW);
    s->addText(h3, ofColor(0), "http://www.michaelnielsen.org/ddi/how-the-bitcoin-protocol-actually-works/", 0.1, 0.952, 0.9);
    
    s = slideshow.addSlide("Abstracting Bitcoin");
    //s->addImage("dcai", "/Users/gene/bin/decentralizedAI/DAO_DA.png", 0.0, 0.0, 1, 1);
    // the internet of money
    // multi-player game
    // mass collabration
    
    s = slideshow.addSlide("A few other cryptocurrencies");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/litecoin.png", 0.1, 0.1, 0.2, 0.2);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/primecoin.png", 0.35, 0.1, 0.2, 0.2);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/ripple.png", 0.6, 0.1, 0.2, 0.2);
    s->addText(h2, ofColor(0), "Innovations to Bitcoin / corporate versions", 0.1, 0.03, 0.9);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/zcash.png", 0.1, 0.4, 0.2, 0.2);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/monero.png", 0.35, 0.4, 0.2, 0.2);
    s->addText(h2, ofColor(0), "Privacy/anonymity focused", 0.1, 0.33, 0.9);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/faircoin.png", 0.1, 0.7, 0.2, 0.2);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/gridcoin.png", 0.35, 0.7, 0.2, 0.2);
    s->addText(h2, ofColor(0), "Interesting?", 0.1, 0.63, 0.9);
    
    s = slideshow.addSlide("Innovations to Bitcoin ~2010-2012: Colored coins");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/coloredcoin-1.jpg", 0.05, 0, 0.2, 0.25);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/coloredcoin-2.jpg", 0.05, 0.25, 0.2, 0.25);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/coloredcoin-3.jpg", 0.05, 0.5, 0.2, 0.25);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/coloredcoin-4.jpg", 0.05, 0.75, 0.2, 0.25);
    s->addText(h2, ofColor(0), "assets: stocks, bonds, subscriptions, coupons, artworks", 0.3, 0.05, 0.6);
    s->addText(h2, ofColor(0), "smart properties: home & car rentals, loans and collateral", 0.3, 0.3, 0.6);
    s->addText(h2, ofColor(0), "civic: votes, UBI, community-issued currency", 0.3, 0.55, 0.6);
    s->addText(h2, ofColor(0), "accounting uses: provenance, IP rights, DRM", 0.3, 0.8, 0.6);
    
    
    s = slideshow.addSlide("Smart contracts");
    s->addText(h3, ofColor(0), "Nick Szabo, 1993/1996", 0.01, 0.0, 0.9);
    s->addImage("watercycle", "/Users/gene/bin/decentralizedAI/smartcontract.png", 0.0, 0.1, 0.5, 0.9);
    s->addImage("watercycle", "/Users/gene/bin/decentralizedAI/vendingmachine.jpg", 0.5, 0.1, 0.5, 0.9);
    
    s = slideshow.addSlide("Ethereum (2014) ");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/ethereum.jpg", 0.1, 0.0, 0.8, 0.3);
    s->addText(h2, ofColor(0), "Own blockchain", 0.1, 0.35, 0.9);
    s->addText(h2, ofColor(0), "Turing complete language + virtual machine", 0.1, 0.45, 0.9);
    s->addText(h2, ofColor(0), "Platform for decentralized apps (dapps)", 0.1, 0.55, 0.9);
    
    
    s = slideshow.addSlide("Smart contract (in Ethereum)");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/DAO_SC.png", 0.0, 0.1, 1.0, 0.9);
    // sc is an account -- sends and receives and has ether
    // - code is immutable
    // - allows for changes by encoding laws
    // escrows
    // simplest: employment contract. A puts 10ETH in SC, B does service, sends mmessage to SC, J judges in case of disagreement
    
    s = slideshow.addSlide("Decentralized application");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/DAO_DA.png", 0.0, 0.0, 1, 1);
    
    s = slideshow.addSlide("Decentralized (autonomous) organization");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/DAO_DO.png", 0.0, 0.0, 1, 1);
    // difference from SC: unbounded number of participants
    
    s = slideshow.addSlide("Decentralized (autonomous) organization");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/DAO_DO.png", 0.0, 0.0, 1, 1);
    // difference from SC: unbounded number of participants
    
    s = slideshow.addSlide("Smart properties & DAO ideas");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/car2go.jpg", 0.0, 0.00, 0.5, 0.5);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/hoteldoor.jpg", 0.0, 0.5, 0.5, 0.5);
    s->addText(h2, ofColor(0), "Use cases:\n - Kickstarter\n - Market / exchange\n - Insurance co-op\n - Mutual fund\n - Prediction market\n - Futarchy\n - Liquid governance", 0.51, 0.1, 0.5);
    
    s = slideshow.addSlide("Decentralized autonomous organization");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/DAO_SCx.png", 0.0, 0.0, 1, 1);
    s->addText(h3, ofColor(0), "smart contracts can interact with each other", 0.01, 0.0, 0.9);
    
    s = slideshow.addSlide("Decentralized autonomous organization");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/dao-quadrants.jpg", 0.1, 0.2, 0.8, 0.7);
    s->addText(h3, ofColor(0), "https://blog.ethereum.org/2014/05/06/daos-dacs-das-and-more-an-incomplete-terminology-guide/", 0.01, 0.0, 0.9);
    
    s = slideshow.addSlide("Decentralized applications & DAOs");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/car2go.jpg", 0.0, 0.00, 0.5, 0.5);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/hoteldoor.jpg", 0.0, 0.5, 0.5, 0.5);
    s->addText(h2, ofColor(0), "Use cases:\n - Kickstarter\n - Market / exchange\n - Insurance co-op\n - Mutual fund\n - Prediction market\n - Futarchy\n - Liquid governance", 0.51, 0.1, 0.5);
    
    s = slideshow.addSlide("Decentralized autonomous corporations");
    s->addText(h2, ofColor(0), "Perceived benefits: collusion resistance, transparency, inclusiveness", 0.1, 0.1, 0.9);
    s->addText(h2, ofColor(0), "Perceived dangers: lack of accountability, externalities", 0.1, 0.4, 0.9);
    
    
    s = slideshow.addSlide("Tokens");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/amusementpark.jpg", 0, 0.2, 1.0, 0.8);
    
    s = slideshow.addSlide("Not just blockchains");
    // other technolgoies - state channels, lightning, p2p stuff
    
    s = slideshow.addSlide("Decentralized storage");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/filecoin.png", 0.0, 0.0, 0.5, 0.48);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/storj-logo.jpg", 0.5, 0.0, 0.5, 0.48);
    s->addText(h2, ofColor(0), "Decentralized file storage (i.e. Dropbox)", 0.1, 0.6, 0.9);
    
    s = slideshow.addSlide("Decentralized computation");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/golem1.png", 0.0, 0.0, 1.0, 0.4);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/truebit.png", 0.0, 0.41, 1.0, 0.4);
    s->addText(h2, ofColor(0), "Distributed computation (i.e. Amazon AWS)", 0.1, 0.85, 0.9);
    
    s = slideshow.addSlide("Decentralized web");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/Steemit.png", 0.0, 0.0, 0.5, 0.42);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/openbazaar.jpg", 0.5, 0.0, 0.5, 0.42);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/res(0)nate.png", 0.0, 0.5, 0.5, 0.42);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/iota.png", 0.5, 0.5, 0.5, 0.42);
    s->addText(h4, ofColor(0), "Steemit (social media, i.e. Reddit+Facebook)", 0.01, 0.43, 0.4);
    s->addText(h4, ofColor(0), "OpenBazaar (i.e. Amazon)", 0.51, 0.43, 0.4);
    s->addText(h4, ofColor(0), "Resonate (music streaming/hosting, i.e. SoundCloud)", 0.01, 0.93, 0.4);
    s->addText(h4, ofColor(0), "IOTA (tokenize IOT devices)", 0.51, 0.93, 0.4);
    
    s = slideshow.addSlide("Blockchain ecosystem");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/blockchainecosystem.png", 0.0, 0.1, 1, 0.91);
    s->addText(h4, ofColor(0), "https://medium.com/@awasunyin/a-sneak-peak-into-the-blockchain-ecosystem-after-devcon3-4f2934822d3", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Problems with the web today");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/ipfs-google.png", 0, 0.05, 0.5, 0.45);
    s->addText(h3, ofColor(0), "Slow / inefficient", 0.1, 0.0, 0.4);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/insecure.png", 0.5, 0.05, 0.5, 0.45);
    s->addText(h3, ofColor(0), "Unverifiable / insecure", 0.51, 0.0, 0.4);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/404.png", 0, 0.55, 0.5, 0.45);
    s->addText(h3, ofColor(0), "Unreliable / impermanent", 0.1, 0.5, 0.4);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/Facebook-Data-Center-Project.jpg", 0.5, 0.55, 0.5, 0.45);
    s->addText(h3, ofColor(0), "Power over data", 0.51, 0.5, 0.4);
    
    s = slideshow.addSlide("Sorry HTTP... you are part of the problem");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/server-client.jpeg", 0.0, 0.0, 0.5, 1);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/techcompanies.jpg", 0.5, 0.0, 0.5, 1);
    s->addText(h2, ofColor(0), "Server/client web protocol", 0.01, 0.0, 0.5);
    s->addText(h2, ofColor(0), "Centralization", 0.53, 0.0, 0.5);
    
    s = slideshow.addSlide("IPFS (Inter-Planetary File Systems)");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/openmined/ipfs-advantages.png", 0.0, 0, 1.0, 0.6);
    s->addText(h2, ofColor(0), " - Network of peer nodes hosting and serving content\n - User (content creator) in control via crypto\n - Websites/services/apps have no central origin / central point of failure\n - Security is built into the protocol", 0.01, 0.65, 0.9);
    
    s = slideshow.addSlide("HTTP -> IPFS");
    s->addImage("ipfs", "/Users/gene/bin/decentralizedAI/ipfs-stack.jpg", 0.0, 0.15, 1, 0.85);
    s->addText(h3, ofColor(0), "Like git for the whole internet", 0.1, 0.0, 0.9);
    
    s = slideshow.addSlide("Merkletrees and Merkledags");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/merkletree.png", 0.0, 0.0, 0.5, 1);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/merkledag.png", 0.5, 0.0, 0.5, 1);
    
    s = slideshow.addSlide("Content addressing and DHT");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/DHT_en.svg.png", 0.0, 0.0, 1, 0.6);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/openmined/ipfs-location-address.png", 0.0, 0.7, 1, 0.285);
    
    s = slideshow.addSlide("Basic Attention Token + Brave");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/advertising-model.png", 0.0, 0.0, 0.6, 0.6);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/BAT-model.png", 0.4, 0.4, 0.6, 0.6);
    s->addText(h3, ofColor(0), "", 0.11, 0.9, 0.5);
    
    s = slideshow.addSlide("Decentralized database");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/ocean-protocol.png", 0.15, 0.1, 0.7, 0.45);
    s->addText(h3, ofColor(0), "https://oceanprotocol.com/", 0.01, 0.0, 0.9);
    s->addText(h3, ofColor(0), "Benefits of decentralized databases\n - data consortium / sharding among companies\n - banks share user records for better credit card fraud\n - global data commons\n - no one controls infrastructure\n - fine-grained control over IP, usage rights, DRM that can be worked into the protocol\n - asset/token exchange\n - IoT licenses personal data in exchange for token/electricity", 0.1, 0.58, 0.8);
    
    
    
    
    s = slideshow.addSlide("Token ecology");
    s->addImage("watercycle", "/Users/gene/bin/decentralizedAI/stock/watercycle.jpg", 0, 0, 1, 0.7);
    s->addText(h3, ofColor(0), "Tokens can be created and distributed freely up-front", 0.01, 0.75, 0.9);
    s->addText(h3, ofColor(0), "Tokens can be sold through an ICO", 0.01, 0.83, 0.9);
    s->addText(h3, ofColor(0), "Tokens can be created through transactions (like Bitcoin)", 0.01, 0.91, 0.9);
    
    s = slideshow.addSlide("Token schemes");
    // curation markets - token curated lists
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    s = slideshow.addSlide("Decentralized autonomous corporations");
    s->addText(h2, ofColor(0), "Perceived benefits: collusion resistance, transparency, inclusiveness", 0.1, 0.1, 0.9);
    s->addText(h2, ofColor(0), "Perceived dangers: lack of accountability, externalities", 0.1, 0.4, 0.9);
    
    
    s = slideshow.addSlide("Could an AI be a corporation?");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/Zug_Zytturm_1.jpg", 0.0, 0.0, 0.6, 0.7);
    s->addText(h2, ofColor(0), "Corporations = people?\n\nWhat about corporations with 0 people?\n\nZug, Switzerland = \"Crypto Valley\"", 0.61, 0.1, 0.3);
    
    s = slideshow.addSlide("AI DAOs");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/car2go.jpg", 0.0, 0.05, 0.5, 0.6);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/hoteldoor.jpg", 0.51, 0.05, 0.5, 0.6);
    s->addText(h2, ofColor(0), "smart properties which own and operate themselves?\ni.e. look for clients, manage own resources, comply with law, no markup, no sleep", 0.1, 0.67, 0.9);
    
    s = slideshow.addSlide("Numerai");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/numerai.png", 0.7, 0.0, 0.3, 0.3);
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/stock/numerai-idea.png", 0.0, 0.0, 0.68, 0.5);
    s->addText(h2, ofColor(0), "Hedge fund + data scientists", 0.1, 0.65, 0.9);
    s->addText(h2, ofColor(0), "AI combines to make bets, rewards best performers", 0.1, 0.75, 0.9);
    s->addText(h2, ofColor(0), "Homomorphic encryption makes whole process secure and blind", 0.1, 0.85, 0.9);
    
    s = slideshow.addSlide("(Some) problems with machine learning");
    s->addText(h2, ofColor(0), " - Privacy / convenience tradeoff", 0.01, 0.2, 0.9);
    s->addText(h2, ofColor(0), " - Lost natural income", 0.01, 0.3, 0.9);
    s->addText(h2, ofColor(0), " - Data aggregated into silos", 0.01, 0.4, 0.9);
    s->addText(h2, ofColor(0), " - Some products are too sensitive", 0.01, 0.5, 0.9);
    
    s = slideshow.addSlide("How OpenMined works");
    s->addImage("mnist1", "/Users/gene/bin/decentralizedAI/openmined.png", 0.1, 0.1, 0.8, 0.8);
    s->addText(h2, ofColor(0), "openmined.org", 0.01, 0.0, 0.9);
    
    string omTitle = "Centralized machine learning";
    for (int i=0; i<71; i++) {
        s = slideshow.addSlide(omTitle);
        s->addImage("openmined", "/Users/gene/bin/decentralizedAI/openmined_protocol/frame"+ofToString(i)+".png", 0, 0, 1, 1);
        
        if (i==6) {
            s = slideshow.addSlide("+/-");
            s->addText(h2, ofColor(200, 0, 0), " - Data silo", 0.01, 0.2, 0.9);
            s->addText(h2, ofColor(200, 0, 0), " - Privacy", 0.01, 0.3, 0.9);
            s->addText(h2, ofColor(200, 0, 0), " - Lost natural income", 0.01, 0.4, 0.9);
            s->addText(h2, ofColor(0, 200, 0), " + Model is secure", 0.01, 0.5, 0.9);
            omTitle = "Federated learning";
        }
        if (i==14) {
            s = slideshow.addSlide("+/-");
            s->addText(h2, ofColor(0, 200, 0), " + Users maintain data... sort of", 0.01, 0.2, 0.9);
            s->addText(h2, ofColor(200, 0, 0), " - Privacy still an issue because of gradients", 0.01, 0.3, 0.9);
            s->addText(h2, ofColor(200, 0, 0), " - Lost natural income", 0.01, 0.4, 0.9);
            s->addText(h2, ofColor(200, 0, 0), " - Model is insecure from theft", 0.01, 0.5, 0.9);
            omTitle = "Federated learning + homomorphic encryption";
            
            s = slideshow.addSlide("Homomorphic encryption");
            s->addImage("dcai", "/Users/gene/bin/decentralizedAI/homomorphic-encryption.png", 0.0, 0.1, 1.0, 0.9);
            s->addText(h3, ofColor(0), "https://iamtrask.github.io/2017/03/17/safe-ai/", 0.01, 0.0, 0.9);
        }
        if (i==25) {
            s = slideshow.addSlide("+/-");
            s->addText(h2, ofColor(0, 200, 0), " + Users maintain data... sort of", 0.01, 0.2, 0.9);
            s->addText(h2, ofColor(0, 200, 0), " + Privacy maintained... sort of", 0.01, 0.3, 0.9);
            s->addText(h2, ofColor(200, 0, 0), " - Malicious AI Inc could still steal the data", 0.01, 0.4, 0.9);
            s->addText(h2, ofColor(0, 200, 0), " + Model is secure from theft", 0.01, 0.5, 0.9);
            s->addText(h2, ofColor(200, 0, 0), " - Lost natural income", 0.01, 0.6, 0.9);
            omTitle = "Federated learning + homomorphic encryption + smart contract";
        }
        if (i==43) {
            s = slideshow.addSlide("+/-");
            s->addText(h2, ofColor(0, 200, 0), " + Users maintain data", 0.01, 0.2, 0.9);
            s->addText(h2, ofColor(0, 200, 0), " + Privacy maintained", 0.01, 0.3, 0.9);
            s->addText(h2, ofColor(0, 200, 0), " + Users are compensated for data (incentives)", 0.01, 0.4, 0.9);
            s->addText(h2, ofColor(0, 200, 0), " + Model is secure from theft", 0.01, 0.5, 0.9);
            s->addText(h2, ofColor(200, 0, 0), " - Who holds the keys?", 0.01, 0.6, 0.9);
            omTitle = "Federated learning + homomorphic encryption + smart contract + oracle";
        }
        if (i==70) {
            s = slideshow.addSlide("+/-");
            s->addText(h2, ofColor(0, 200, 0), " + Users maintain data", 0.01, 0.2, 0.9);
            s->addText(h2, ofColor(0, 200, 0), " + Privacy maintained", 0.01, 0.3, 0.9);
            s->addText(h2, ofColor(0, 200, 0), " + Users are compensated for data (incentives)", 0.01, 0.4, 0.9);
            s->addText(h2, ofColor(0, 200, 0), " + Model is secure from theft", 0.01, 0.5, 0.9);
            s->addText(h2, ofColor(0, 200, 0), " + Keys are secure", 0.01, 0.6, 0.9);
        }
    }
    
    s = slideshow.addSlide("Decentralized AI");
    s->addText(h2, ofColor(0), " - What if the users = AI Inc?", 0.01, 0.2, 0.9);
    s->addText(h2, ofColor(0), " - Could a model be a shared secret?", 0.01, 0.3, 0.9);
    s->addText(h2, ofColor(0), " - Could models run autonomously?", 0.01, 0.4, 0.9);
    s->addText(h2, ofColor(0), " - Could models control their own re$ources?", 0.01, 0.5, 0.9);
    
    s = slideshow.addSlide("Art DAOs?");
    s->addMovie("dcgan", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0.026, 0.5, 0.47);
    s->addImage("deepdream", "/Users/gene/bin/misc/stock/building-dreams.png", 0, 0.515, 0.5, 0.48);
    s->addImage("stylenet", "/Users/gene/bin/misc/stock/stylenet-original.png", 0.5, 0.53, 0.5, 0.47);
    s->addImage("synthesizing original", "/Users/gene/bin/misc/stock/synthesizing-original.jpg", 0.5, 0.025, 0.5, 0.48);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=QYcKCGdZvq4", 0.01, 0.0, 1.0);
    s->addText(h5, ofColor(0), "research.googleblog.com/2015/06/inceptionism-going-deeper-into-neural.html", 0.002, 0.475, 1.0);
    s->addText(h4, ofColor(0), "https://arxiv.org/abs/1508.06576", 0.6, 0.51, 1.0);
    s->addText(h4, ofColor(0), "http://www.evolvingai.org/synthesizing", 0.6, 0.0, 1.0);
    
    s = slideshow.addSlide("Art DAO recipe");
    s->addText(h2, ofColor(0), "1) Create generative art, make multiple editions", 0.05, 0.1, 1.0);
    s->addText(h2, ofColor(0), "2) Timestamp on blockchain (ascribe)", 0.05, 0.25, 1.0);
    s->addText(h2, ofColor(0), "3) Sell them on Getty/Shoppify/OpenBazaar", 0.05, 0.4, 1.0);
    s->addText(h2, ofColor(0), "4) Transfer rights to buyers", 0.05, 0.55, 1.0);
    s->addText(h2, ofColor(0), "5) Pay for computation from proceeds", 0.05, 0.7, 1.0);
    s->addText(h2, ofColor(0), "6) Step 1", 0.05, 0.85, 1.0);
    s->addText(h4, ofColor(0), "Trent McConaghy\nhttps://blog.bigchaindb.com/ai-daos-and-three-paths-to-get-there-cfa0a4cc37b8", 0.01, 0.0, 1.0);
    
    s = slideshow.addSlide("DAOs interacting with DAOs");
    s->addImage("dcai", "/Users/gene/bin/decentralizedAI/DAO_SCx.png", 0.0, 0.0, 1, 1);

}

void ofApp::WorkshopStrelka_Pix2Pix() {
    
    
    s = slideshow.addSlide("Image-to-Image Translation with Conditional Adversarial Nets");
    s->addImage("fb", "/Users/gene/bin/pix2pix/teaser_v3a.png", 0.0, 0.04, 1.0, 0.96);
    s->addText(h3, ofColor(100), "phillipi.github.io/pix2pix/", 0.02, 0.00, 0.8);
    
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
    
    s = slideshow.addSlide("sketch to pokemon");
    s->addMovie("p2p", "/Users/gene/bin/misc/stock/pix2pix-pokemon.mp4", true, 0.0, 0, 1, 1);
    
    s = slideshow.addSlide("Ildar Iakubov - animations");
    s->addMovie("fb", "/Users/gene/bin/strelka/ildar-pix2pix.mp4", false, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Anna Riddler - Fall of the house of usher");
    s->addImage("Anna", "/Users/gene/bin/misc/stock/annariddler - fothou.jpg", 0, 0, 0.67, 0.7);
    s->addMovie("Anna", "/Users/gene/bin/misc/stock/annariddler - fothou.mp4", true, 0.4, 0.35, 0.74, 0.65);
    
    s = slideshow.addSlide("Pix2Pix streetview (Jasper van Loenen)");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/jasper-streetview.mp4", false, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Golan Levin - pix2pix + hands");
    s->addImage("p2p", "/Users/gene/bin/misc/stock/golan-hands-pix2pix.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Pix2Pix person-to-person (Brannon Dorsey)");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/brannon-kurzweil.mp4", false, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("pix2pix + OpenPose (@quasimondo)");
    s->addImage("p2p", "/Users/gene/bin/misc/stock/pix2pix-openpose.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Kinect depth -> RGB (or vice-versa)");
    s->addImage("p2p", "/Users/gene/bin/misc/stock/pix2pix-depthmap.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Spiderman");
    s->addMovie("p2p", "/Users/gene/bin/misc/stock/pix2pix-spiderman.mp4", true, 0.0, 0, 1, 1);
    
    s = slideshow.addSlide("Pix2Pix + FaceTracker");
    s->addMovie("mario", "/Users/gene/bin/pix2pix/quasimondo_facepix2pix.mp4", true, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Mario Klingemann - Alternative face");
    s->addMovie("p2p", "/Users/gene/bin/misc/stock/mario-altface.mp4", true, 0.0, 0, 1, 1);
    
    s = slideshow.addSlide("Meat puppet");
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/trump_face_train.png", 0.0, 0.0, 0.45, 1.0);
    s->addImage("fb", "/Users/gene/bin/misc/stock/arrow.png", 0.46, 0.0, 0.08, 1.0);
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/gene_face_test.png", 0.55, 0.0, 0.45, 1.0);
    
    s = slideshow.addSlide("Meat puppet");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump_gene1.mp4", false, 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("pix2pix Angela Merkel");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/dattran-merkel-pix2pix.mp4", true, 0.05, 0.05, 0.9, 0.9)->setLoop(true);
    
    // s = slideshow.addSlide("Pix2Pix + webcam (Memo Akten)");
    // s->addMovie("fb", "/Users/gene/bin/pix2pix/memo-painting.mp4", true, 0.05, 0.05, 0.9, 0.9);
    s = slideshow.addSlide("Pix2Pix + webcam (Memo Akten)");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/memo-learningtosee2.mp4", true, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("Pix2Pix HD!");
    s->addMovie("fb", "/Users/gene/bin/misc/High-Resolution Image Synthesis and Semantic Manipulation with Conditional GANs.mp4", true, 0.05, 0.05, 0.9, 0.9);
    
    s = slideshow.addSlide("CycleGAN");
    s->addImage("fb", "/Users/gene/bin/misc/cyclegan/cyclegan.jpg", 0.0, 0.07, 1, 0.95);
    s->addText(h3, ofColor(100), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("CycleGAN");
    s->addMovie("fb", "/Users/gene/bin/misc/cyclegan/cyclegan_zebra.mp4", true, 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(100), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
    
    s = slideshow.addSlide("Helena Sarin (@glagolista)");
    s->addImage("helana", "/Users/gene/bin/misc/stock/helena - cyclegan.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Feedback & ping-ponging (Mario Klingemann)");
    s->addMovie("mario", "/Users/gene/bin/misc/stock/quasimondo - Face Feedback III - Faces in 1024x1024 generated by neural networks.mp4", true, 0, 0, 0.5, 1);
    s->addMovie("mario", "/Users/gene/bin/misc/stock/quasimondo - cyclegan-feedback.mp4", true, 0.52, 0, 0.48, 1);
    
    s = slideshow.addSlide("Next-frame prediction");
    s->addMovie("p2p", "/Users/gene/bin/misc/stock/mario-fireworks-feedback-pix2pix.mp4", true, 0.0, 0, 1, 1);
    
    s = slideshow.addSlide("Uncanny Mirror");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/quasimondo_uncannymirror.mp4", true, 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "Mario Klingemann (@quasimondo)", 0.01, 0.0, 1.0);
    

}



void ofApp::WorkshopMapping() {
    
    s = slideshow.addSlide("hello :)");
    s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
    s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
    s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
    s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
    s->start();
    
    s = slideshow.addSlide("music information retrieval");
    s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
    s->addImage("genre VA", "/Users/gene/bin/misc/sourcetone/genre-AvgVA.jpg", 0.0, 0.4, 0.42, 0.6);
    s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
    
    s = slideshow.addSlide("Musical instruments (w/ Jeff Snyder)");
    s->addImage("tweet", "/Users/gene/Web/genekogan.github.io/_site/images/birl/birl1.jpg", 0.0, 0.0, 1, 0.35);
    s->addImage("tweet", "/Users/gene/bin/misc/Snyderphonics_Manta.jpg", 0.0, 0.365, 1, 0.64);
    
    s = slideshow.addSlide("Kinect Projector Toolkit");
    s->addMovie("KPT", "/Users/gene/bin/opera-toolkit/colin-ribbons-2_nosound.mp4", true, 0.0, 0, 0.5, 0.6);
    s->addMovie("KPT", "/Users/gene/bin/kinect-projector-toolkit/Silhouettes @ Saigon Ranger 12:5:2014.mp4", true, 0.4, 0.4, 0.64, 0.62);
    
    s = slideshow.addSlide("Neural nets hallucinating");
    s->addMovie("dcgan", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0.026, 0.5, 0.47);
    s->addImage("deepdream", "/Users/gene/bin/misc/stock/building-dreams.png", 0, 0.515, 0.5, 0.48);
    s->addImage("stylenet", "/Users/gene/bin/misc/stock/stylenet-original.png", 0.5, 0.53, 0.5, 0.47);
    s->addImage("synthesizing original", "/Users/gene/bin/misc/stock/synthesizing-original.jpg", 0.5, 0.025, 0.5, 0.48);
    s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=QYcKCGdZvq4", 0.01, 0.0, 1.0);
    s->addText(h5, ofColor(0), "research.googleblog.com/2015/06/inceptionism-going-deeper-into-neural.html", 0.002, 0.475, 1.0);
    s->addText(h4, ofColor(0), "https://arxiv.org/abs/1508.06576", 0.6, 0.51, 1.0);
    s->addText(h4, ofColor(0), "http://www.evolvingai.org/synthesizing", 0.6, 0.0, 1.0);
    
    s = slideshow.addSlide("ml4a.github.io");
    s->addImage("pyramid", "/Users/gene/bin/misc/stock/pyramid.png", 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("ml4a-ofx");
    s->addMovie("andreas", "/Users/gene/bin/misc/workshops/andreas-ml4a-ofx.mp4", true, 0.0, 0.0, 0.7, 0.5);
    s->addMovie("andreas", "/Users/gene/bin/misc/workshops/andreas-pig-classifier.mp4", true, 0.36, 0.4, 0.7, 0.6);
    
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
    
    s = slideshow.addSlide("python notebooks");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-guide-RIS.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-nn.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Writing");
    s->addImage("workshop", "/Users/gene/bin/ml4a/ml4a-hnnat.png", 0, 0, 1, 1);
    
    
    s = slideshow.addSlide("Mapping Fesitval");
    s->addText(h3, ofColor(0), "Agenda", 0.1, 0.1, 0.5);
    s->addText(h3, ofColor(0), " - setup (mappingfestival@runwayml.com)", 0.1, 0.17, 0.5);
    s->addText(h3, ofColor(0), " - tour of creative projects", 0.1, 0.24, 0.5);
    s->addText(h3, ofColor(0), " - neural nets", 0.1, 0.31, 0.5);
    s->addText(h3, ofColor(0), " - teachable machines demo", 0.1, 0.38, 0.5);
    s->addText(h3, ofColor(0), " - runway demo", 0.1, 0.45, 0.5);
    s->addText(h3, ofColor(0), " - ml4a-ofx demo", 0.1, 0.52, 0.5);
    s->addText(h3, ofColor(0), " - practice", 0.1, 0.59, 0.5);
    
    
    ////////////////// Projects
    
    s = slideshow.addSlide("Nabi hackathon project");
    s->addImage("fb", "/Users/gene/bin/ml4a/nabimusic2.png", 0.0, 0.00, 1.0, 1.0);
    
    s = slideshow.addSlide("DoodleTunes");
    s->addMovie("fb", "/Users/gene/bin/ml4a/Doodle Tunes-small.mp4", true, 0.0, 0.00, 1.0, 1.0);
    
    s = slideshow.addSlide("DoodleClassifier");
    s->addMovie("fb", "/Users/gene/bin/misc/DoodleClassifier_tutorial.mp4", true, 0.0, 0.00, 1.0, 1.0);
    
    CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
    s = slideshow.addSlide("Cubist Mirror");
    s->addAction(cmd);
    
    s = slideshow.addSlide("Cubist Mirror @ TIFF");
    s->addImage("fb", "/Users/gene/bin/style-transfer/cubist-mirror/cubist-mirror-tiff.jpg", 0.0, 0.00, 0.6, 0.7);
    s->addMovie("nabi mirror", "/Users/gene/bin/alt-ai/cubistmirror-nabi.mp4", true, 0.55, 0.2, 0.455, 0.8);
    
    s = slideshow.addSlide("A Book from the Sky");
    s->addMovie("zloops", "/Users/gene/bin/dcgan/summary/zloops.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Character interpolations");
    s->addMovie("interplations", "/Users/gene/bin/dcgan/public/interpolations_3.mp4", true, 0.2, 0.15, 0.6, 0.6);
    
    s = slideshow.addSlide("Audio t-SNE");
    AudioTSNEDemo *attd = new AudioTSNEDemo(s, "audio t-sne", 0, 0, 1, 1);
    s->addAction(attd);
    
    s = slideshow.addSlide("Dense captioning Deepdream");
    s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Invisible Cities");
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/milan_style_transfer_x4.jpg", 0.0, 0.04, 1, 0.96);
    s->addText(h3, ofColor(100), "opendot.github.io/ml4a-invisible-cities/", 0.02, 0.00, 0.8);
    
    s = slideshow.addSlide("City style transfer");
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/milan_x_venice_la.jpg", 0.0, 0.0, 1.0, 1.0);
    
    s = slideshow.addSlide("Handrawn satellite imagery");
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/handdrawn1.jpg", 0.0, 0.0, 1.0, 0.5);
    s->addImage("fb", "/Users/gene/bin/pix2pix/invisible_cities/handdrawn2.jpg", 0.0, 0.5, 1.0, 0.5);
    
    s = slideshow.addSlide("Meat puppet");
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/trump_face_train.png", 0.0, 0.0, 0.45, 1.0);
    s->addImage("fb", "/Users/gene/bin/misc/stock/arrow.png", 0.46, 0.0, 0.08, 1.0);
    s->addImage("fb", "/Users/gene/bin/pix2pix/trump/gene_face_test.png", 0.55, 0.0, 0.45, 1.0);
    
    s = slideshow.addSlide("Meat puppet");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump_gene1.mp4", false, 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Objectifier (Bjoern Karmann, CIID)");
    s->addImage("objectifier", "/Users/gene/bin/misc/prototype_objectifier.jpg", 0, 0, 0.6, 0.55);
    s->addMovie("objectifier", "/Users/gene/bin/misc/prototype_objectifier.mp4", true, 0.32, 0.4, 0.7, 0.6);
    s->addText(h4, ofColor(0), "bjoernkarmann.dk/objectifier", 0.65, 0.0, 0.4);
    s->start();
    
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
    
    s = slideshow.addSlide("ai experiments");
    s->addText(h4, ofColor(0), "https://aiexperiments.withgoogle.com/", 0.01, 0.002, 0.9);
    s->addImage("ai experiments", "/Users/gene/bin/misc/stock/aiexperiments.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("The samples never end (Jason Levine)");
    s->addMovie("jason", "/Users/gene/bin/misc/stock/altaivibez4.mp4", true, 0, 0, 1, 1)->setPositionRandom();
    
    s = slideshow.addSlide("Visualizing Neural Networks (Cassie Tarakajian)");
    s->addMovie("visualizing neural nets", "/Users/gene/bin/alt-ai/lisa-oculus-convnet.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("TransProse (Hannah Davis)");
    s->addMovie("transprose", "/Users/gene/bin/misc/TransProse - 2 Pieces-ItWLLzMislM.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "http://www.musicfromtext.com/", 0.01, 0.0, 0.99);
    
    s = slideshow.addSlide("Body Language (Nancy Nowacek, Morgan Hille-Refakis, David Sheinkopf, Caitlin Sikora, Gene Kogan)");
    s->addMovie("body language", "/Users/gene/bin/misc/morgan-gesture-classifier.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Anna Riddler - Fall of the house of usher");
    s->addImage("Anna", "/Users/gene/bin/misc/stock/annariddler - fothou.jpg", 0, 0, 0.67, 0.7);
    s->addMovie("Anna", "/Users/gene/bin/misc/stock/annariddler - fothou.mp4", true, 0.4, 0.35, 0.74, 0.65);
    
    s = slideshow.addSlide("Meat puppet");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump_gene1.mp4", false, 0.1, 0.1, 0.8, 0.8);
    
    s = slideshow.addSlide("Helena Sarin (@glagolista)");
    s->addImage("helana", "/Users/gene/bin/misc/stock/helena - cyclegan.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Feedback & ping-ponging (Mario Klingemann)");
    s->addMovie("mario", "/Users/gene/bin/misc/stock/quasimondo - Face Feedback III - Faces in 1024x1024 generated by neural networks.mp4", true, 0, 0, 0.5, 1);
    s->addMovie("mario", "/Users/gene/bin/misc/stock/quasimondo - cyclegan-feedback.mp4", true, 0.52, 0, 0.48, 1);
    
    s = slideshow.addSlide("Uncanny Mirror");
    s->addMovie("fb", "/Users/gene/bin/pix2pix/quasimondo_uncannymirror.mp4", true, 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "Mario Klingemann (@quasimondo)", 0.01, 0.0, 1.0);
    
    
    
    /////// ML
    
    s = slideshow.addSlide("Machine learning");
    s->addImage("imagenet", "/Users/gene/bin/misc/stock/machine-learning.png", 0.0, 0.0, 0.4, 1);
    s->addImage("mnist1", "/Users/gene/bin/misc/stock/mnist-forward-pass-1.png", 0.4, 0, 0.6, 1);
    
    s = slideshow.addSlide("Neural network");
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
    
    s = slideshow.addSlide("Convolutional networks");
    s->addImage("lenet", "/Users/gene/bin/misc/stock/lenet.png", 0, 0, 1, 0.4);
    s->addImage("alexnet", "/Users/gene/bin/misc/stock/alexnet2.png", 0, 0.5, 1, 0.4);
    s->addText(h3, ofColor(0), "Lenet (LeCun et al, 1998) [http://yann.lecun.com/exdb/lenet/]", 0.05, 0.4, 0.9);
    s->addText(h3, ofColor(0), "AlexNet 2012 [via https://jeremykarnowski.wordpress.com/2015/07/15/alexnet-visualization/]", 0.05, 0.92, 0.9);
    
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
    
    s = slideshow.addSlide("Convolution layers");
    s->addMovie("convolution", "/Users/gene/bin/misc/stock/convolution_demo.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "ml4a.github.io/dev/demos/demo_convolution.html", 0.1, 0.05, 1);
    
    s = slideshow.addSlide("Convolutional neural networks");
    s->addImage("lenet", "/Users/gene/bin/misc/stock/lenet.png", 0, 0, 1, 0.4);
    s->addMovie("lenet demo", "/Users/gene/bin/misc/stock/lenet_demo.mp4", true, 0, 0.4, 1, 0.6);
    s->addText(h3, ofColor(0), "Lenet (LeCun et al, 1998) [http://yann.lecun.com/exdb/lenet/]", 0, 0.4, 1);
    
    s = slideshow.addSlide("Convnet geometry (volume interpretation)");
    s->addImage("volumes", "/Users/gene/bin/misc/stock/cnn_volumes.jpg", 0.0, 0.0, 1.0, 1.0);
    s->addText(h4, ofColor(0), "http://cs231n.stanford.edu/slides/winter1516_lecture2.pdf", 0.1, 0.05, 1);
    
    s = slideshow.addSlide("Convolution layers");
    s->addMovie("convolution", "/Users/gene/bin/misc/stock/convolution_demo.mp4", true, 0, 0, 1, 1);
    s->addText(h4, ofColor(0), "ml4a.github.io/dev/demos/demo_convolution.html", 0.1, 0.05, 1);
    //
    // s = slideshow.addSlide("Pooling layers");
    // s->addImage("pooling", "/Users/gene/bin/misc/stock/cnn_pool.jpg", 0.0, 0.2, 0.5, 0.7);
    // s->addImage("Max-pooling", "/Users/gene/bin/misc/stock/cnn_maxpool.jpg", 0.5, 0.2, 0.5, 0.7);
    // s->addText(h4, ofColor(0), "http://cs231n.github.io/convolutional-networks/", 0.1, 0.01, 0.99);
    //
    s = slideshow.addSlide("CNN demo");
    CcvForwardPassDemo *ccvd = new CcvForwardPassDemo(s, "ccv", 0, 0, 1, 1);
    s->addAction(ccvd);
    
    s = slideshow.addSlide("What neural networks see");
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l1_nofilter.png", 0.0, 0.1, 1, 0.8);
    s->addText(h4, ofColor(255), "What neural nets look for\nVisualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]", 0.02, 0.0, 1.0);
    
    s = slideshow.addSlide("What neural networks see");
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l2.png", 0.01, 0.15, 0.45, 0.7);
    s->addImage("ZF visualizing convnets", "/Users/gene/bin/misc/stock/visualizing-convnets-zf_l3.png", 0.47, 0.15, 0.52, 0.7);
    s->addText(h4, ofColor(255), "Visualizing convnets (Zeiler + Fergus 2013) [ arxiv.org/abs/1311.2901 ]", 0.02, 0.0, 1.0);
    
    s = slideshow.addSlide("Applications of deep learning");
    s->addImage("karpathy slides", "/Users/gene/bin/misc/stock/karpathy-convnets-slide.png", 0, 0, 1, 0.95);
    s->addText(h5, ofColor(0), "https://www.youtube.com/watch?v=u6aEYuemt0M&t=8s", 0.1, 0.95, 0.9);
    
    s = slideshow.addSlide("Applications of deep learning");
    s->addImage("mitosis", "/Users/gene/bin/misc/stock/mitosis.png", 0, 0, 1, 0.75);
    s->addText(h4, ofColor(0), "Ciresan et al 2013 - Mitosis Detection in Breast Cancer Histology Images", 0.1, 0.8, 0.9);
    s->addText(h4, ofColor(0), "http://people.idsia.ch/~ciresan/data/miccai2013.pdf", 0.1, 0.9, 0.9);
    
    s = slideshow.addSlide("Applications of deep learning");
    s->addImage("speech processing", "/Users/gene/bin/misc/stock/cnn-speech.png", 0.0, 0.0, 0.33, 0.5);
    s->addImage("alphaGo", "/Users/gene/bin/misc/stock/nature-go.jpg", 0.1, 0.52, 0.5, 0.5);
    s->addImage("self-driving car dash", "/Users/gene/bin/misc/stock/sdc-dash.jpg", 0.44, 0.0, 0.4, 0.5);
    s->addImage("self-driving car", "/Users/gene/bin/misc/stock/self-driving-car.jpg", 0.72, 0.31, 0.3, 0.5);
    s->addText(h5, ofColor(0), "http://recognize-speech.com/acoustic-model/knn/comparing-different-architectures/convolutional-neural-networks-cnns", 0.01, 0.08, 0.5);
    s->addText(h5, ofColor(0), "http://www.informationweek.com/it-life/googles-self-driving-car-busted-for-driving-too-slow/d/d-id/1323140", 0.35, 0.1, 0.5);
    s->addText(h5, ofColor(0), "https://infinityleap.com/the-cars-have-eyes-nvidia-unveils-self-driving-car-system-at-ces-2016/", 0.35, 0.12, 0.45);
    s->addText(h5, ofColor(0), "http://www.nature.com/nature/journal/v529/n7587/full/nature16961.html", 0.35, 0.4, 0.5);
    s->addText(h5, ofColor(0), "https://vk.com/doc-44016343_437229031?dl=56ce06e325d42fbc72", 0.35, 0.42, 0.5);
    
    s = slideshow.addSlide("Backpropaganda");
    s->addImage("invest", "/Users/gene/bin/misc/stock/hype-investment.jpg", 0.42, 0.0, 0.59, 0.7);
    s->addImage("invest", "/Users/gene/bin/misc/stock/ILSVRC.png", 0.0, 0.05, 0.4, 0.4);
    s->addImage("invest", "/Users/gene/bin/misc/ILSVRC-nvidia.png", 0.0, 0.55, 0.4, 0.4);
    s->addText(h3, ofColor(80), "\"Machine learning is a core, transformative way by which we’re rethinking everything we’re doing,\" - Sundar Pichai, Google CEO", 0.45, 0.7, 0.4);
    
    s = slideshow.addSlide("Deep learning community");
    s->addImage("invest", "/Users/gene/bin/misc/stock/arxiv.png", 0.0, 0.0, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/torch.png", 0.0, 0.33, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/keras.png", 0.0, 0.66, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/kaggle.png", 0.5, 0.0, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/twitter.png", 0.5, 0.33, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/reddit-icon.png", 0.5, 0.66, 0.45, 0.3);
    
    // software 2.0
    s = slideshow.addSlide("A new paradigm for computing?");
    s->addImage("invest", "/Users/gene/bin/misc/software2.0.png", 0.0, 0.0, 0.5, 1);
    s->addText(h4, ofColor(80), "Software 1.0 - logic and control-flow", 0.51, 0.2, 0.45);
    s->addText(h4, ofColor(80), "Software 2.0 - differentiable programming", 0.51, 0.6, 0.45);
    
}
