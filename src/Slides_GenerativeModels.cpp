#include "ofApp.h"

/////////////////////////////////
// Autoencoders
//--------------------------------------------------------------
void ofApp::Autoencoders(){
    s = slideshow.addSlide("Autoencoders");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder.png", 0, 0, 1, 0.3);
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/autoencoder_net.png", 0, 0.3, 1, 0.65);
    s->addText(h4, ofColor(0), "world's most expensive identity function", 0.01, 0.93, 0.8);
    // samples left -> right
    
    s = slideshow.addSlide("MNIST variational autoencoder");
    s->addImage("autoencoder", "/Users/gene/bin/misc/stock/mnist_VAE.png", 0, 0.1, 1, 0.8);
    s->addText(h4, ofColor(0), "https://jmetzen.github.io/2015-11-27/vae.html", 0.01, 0.0, 0.9);
    
    s = slideshow.addSlide("Stick figures (Tom White, @dribnet)");
    s->addImage("autoencoder", "/Users/gene/bin/autoencoders/_dribnet_stickfigures.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Autoencoders trained on celebrities faces");
    s->addImage("autoencoder", "/Users/gene/bin/autoencoders/_Classes.png", 0, 0, 1, 1);
    s->addBreakpoint();
    s->addImage("autoencoder", "/Users/gene/bin/autoencoders/_Attractive.png", 0, 0, 1, 1);
}

/////////////////////////////////
// DCGANs
//--------------------------------------------------------------
void ofApp::DCGAN(){
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
    
    s = slideshow.addSlide("Arithmetic (this is really stretching it)");
    s->addMovie("arithmetic", "/Users/gene/bin/dcgan/summary/arithmetic2.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("DCGAN flowers");
    s->addImage("flowers", "/Users/gene/bin/dcgan/public/07_flowers.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://twitter.com/vintermann/status/675599478494208000", 0, 0, 1);
    
    s = slideshow.addSlide("DCGAN Manga");
    s->addImage("manga 1", "/Users/gene/bin/dcgan/public/07_manga_sample1.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://github.com/mattya/chainer-DCGAN", 0, 0, 1);
    
    s = slideshow.addSlide("DCGAN Manga interpolations");
    s->addImage("manga 2", "/Users/gene/bin/dcgan/public/07_manga_sample2.png", 0, 0.1, 1, 0.9);
    s->addText(h3, ofColor(0), "https://github.com/mattya/chainer-DCGAN", 0, 0, 1);
    
    s = slideshow.addSlide("GAN + VAE on MNIST numbers (@hardmaru)");
    s->addMovie("numbers", "/Users/gene/bin/misc/stock/hardmaru_vaegan_mnist.mp4", true, 0.1, 0.1, 0.8, 0.8);
    s->addText(h3, ofColor(0), "http://blog.otoro.net/2016/04/01/generating-large-images-from-latent-vectors/", 0, 0, 1);


}
