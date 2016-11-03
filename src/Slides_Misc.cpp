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
    s->addMovie("KPT", "/Users/gene/Desktop/colin-ribbons-2.mp4", true, 0.0, 0, 0.5, 0.5);
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
