#include "ofApp.h"


//-----------
void ofApp::Eyeo2() {

    // based on CreativeAILondon();

	s = slideshow.addSlide("");
	s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
	s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
	s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
	s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
	s->start();

	s = slideshow.addSlide("Starving computer scientist");
	s->addImage("skeleton", "/Users/gene/bin/misc/stock/skeleton-computer.jpg", 0.25, 0.1, 0.65, 0.8);
	s->addText(h2, ofColor(0), "How to not make money with machine learning", 0.005, 0.01, 0.8);
	s->addText(h3, ofColor(0), "genekogan.com | @genekogan | ml4a.github.io | @ml4a_", 0.05, 0.94, 0.8);



    
    s = slideshow.addSlide("");
    s->addImage("duckduckgo", "/Users/gene/bin/misc/yolo/darknet-duckduckgo.png", 0.05, 0.05, 0.9, 0.9);

    s = slideshow.addSlide("Deep learning community");
    s->addImage("invest", "/Users/gene/bin/misc/stock/arxiv.png", 0.0, 0.0, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/pytorch.png", 0.0, 0.33, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/keras.png", 0.0, 0.66, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/kaggle.png", 0.5, 0.0, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/twitter.png", 0.5, 0.33, 0.45, 0.3);
    s->addImage("invest", "/Users/gene/bin/misc/stock/reddit-icon.png", 0.5, 0.66, 0.45, 0.3);



	// DARKNET
	/*
	contributors + PR
	YOLO license
	inscrutable commit logs
	resume ponies
	darknet logos + twitter account

	something before duckduckgo joke
	duckduckgo joke
    
	object detection demo
	 - detection + screengrabber (taxonomy of objects)
	 - reverse object search
	go + image-classification + rnn
	darknet-deepdream on webcam

	*/


	// DEEPDREAM
	/*
	deepdream 2015
	 - wakeup call (combined art and ml)

	convnet demo	
	 - deepvis toolbox

	channel visualization
	 - animation from noise to class
	 - swatches of low layer acts
	 - swatches of high layer acts
     - "probing imagination"
     
	feedback animations of single swatches

	mixing gradients
	 - stills of horizontal gradient changes

	feedback animations of mixed gradients
	 - full body interpolations
	 - horizontal, vertical, circled oriented
	 - step_size > 0

	mixing in camera noise, edge effects

	high-resolution

	ml4a notebooks
	
	*/
	

    
    // Eyeo
    // - what i've learned from a year of workshops
    // - ml4a
    //   - ml4a is older than tensorflow
    // - started in 2015, deepdream/style transfer
    // - inspired by blogs, frnsys ai notes, neural nets + deep learn
    //   - also book of shaders
    // --------
    // - Invisible Cities
    //   - check interview with Greg Noone
    // - narrowing of the pipeline
    // --------
    // New Slides
    // - educational materials (gradient descent visuals)
    // ML for musicians and artists (with andreas)
    // - screenshots of guides
    // - DoodleTunes and DoodleClassifier
    // - Wekinator + ConvnetOSC
    
    
    
    
	// @@ make free software
    //  4 disappoint family and friends
    //  - commit logs, resume ponies, not mocking him, feel kinship
    //  - respond to my emails, andyou are the renaissance man of SCSs
	//  - what does darknet do? not illegally buying drugs on the internet
	//
    // darknet demo
    // 3 object detection
    // - reverse object search
    // - RNN + GAN, deepdream demo
    
    // @@ make art
    // 5 deepdream
    //   - 2015 + mtyka shoutout
	//   - 2017 new experiments
    // 3 Generative models
	//   - DGN (caffenet t-SNE + macaws/others?)
    //   - a book from the sky
    // 2 style transfer 	
	//   - real-time demo
	//	 - as a general technique, other papers
    // 4 pix2pix experiments
    //   - invisible cities
    //   - mario + others(jasper + memo)
    //   - meat puppet + ecal
    // 1 CycleGAN, which leads it to make some pretty fun mistakes
    
    // @@ make fun
	//  1 zebrafail
    //  1 deepdream + densecap (GANs are )
	//  1 CC wavenets (?)
	//
	// demos (one way of having fun, t-SNE splash)
	//  1 cnn demo
	//  5 ableton demo 
    //    - mention doodle tunes (nabi project demo)
    //  1 andreas wolfenstein demo
    //  7 audience trains audio classifier
    //    - audience plays t-rex
    //    - audience plays tetris
    //  1 making demos more accessible & why, which leads me to:

    // @@ teach + ml4a
	//  4 ml4a.github.io for itp, started giving workshops
	//  - precursors: ai notes, book of shaders, neural nets & deep learning
	//    - +blogs, david ha (p5js cookbooks)
	//	- tons of workshops (mention frnsys)
	//    - image from gk.com/cv
	//    - talks + workshops
	//  - ml4a-ofx repository
	//    - apps + classifiers/regressors
	//    - osc modules + wekinator apps
	//    - ROSF + RISF
    //  - guides + demos + videos
 	//    - as you can tell, i take documentation very seriously
	//    - new guides page
	//	  - t-SNE in a browser
    //    - videos + from pixels to paragraphs
	//  - twitter, imminently!, outro
    
    
}


void ofApp::FromPCAtoPuppySlugs() {
	
	// PCA slides
	//  - http://setosa.io/ev/principal-component-analysis/
	// eigenfaces
	//  - slide: rows = facs, cols = pixels. -> convert to 2 cols
	//  - project back
	// autoencoders + denoising
	
	
	// end with deepdream lapnorm
}

void ofApp::NYCMLMeetup() {
	
	// AudioClassifier -> KeyboardOSC (T-rex + dinosaurs)
}
