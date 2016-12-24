#include "ofApp.h"


void ofApp::TSNE() {
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
    s->addMovie("t-SNE convergence", "/Users/gene/bin/tsne/tsne_manual.mp4", true, 0, 0, 1, 1);
    
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
