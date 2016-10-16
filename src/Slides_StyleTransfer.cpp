#include "ofApp.h"

void ofApp::StyleTransfer() {
    
    s = slideshow.addSlide("Style Transfer");
    s->addImage("Mona Lisa -> Cubist/Expressionist/Impressionist", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_cubist_expressionist_impressionist.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("A neural algorithm of artistic style");
    s->addScrollableImage("arxiv style paper", "/Users/gene/bin/style-transfer/00_paper/arxiv_page.png", 0.0, 0.3, 0.45, 0.7);
    s->addScrollableImage("gatys et al", "/Users/gene/bin/style-transfer/00_paper/figure1.png", 0.5, 0.0, 0.5, 1.0);
    s->addText(h3, ofColor(0), "Gatys, Ecker, Bethge", 0.01, 0.04, 0.48);
    s->addText(h3, ofColor(0), "published Aug 26, 2015", 0.01, 0.12, 0.48);
    s->addText(h3, ofColor(0), "[arxiv.org/abs/1508.06576]", 0.01, 0.2, 0.48);
    
    s = slideshow.addSlide("Stylenet theory");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/Stylenet_theory.png", 0, 0, 1, 1);
    
    // S) implementations
    // S) slide: how does it work
    
    s = slideshow.addSlide("Mona Lisa x Devajyoti Ray");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/devajyoti.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_devajyoti.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Manjit Bawa");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/bawa.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_bawa.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Hokusai");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/hokusai.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_hokusai.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Raja Ravi Varma");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/rajaravivarma.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_rajaravivarma.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Tarsila");
    s->addImage("Mona Lisa", "/Users/gene/bin/_bin/style-transfer/_inputs/tarsilo2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_tarsila.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Roy Liechtenstein");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/liechtenstein.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_liechtenstein.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Wu Guangzhou (1)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/wu2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_wu2.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Wu Guangzhou (2)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/wu4.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_wu4.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Nii Hylton");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/hylton.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_hylton.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Wassily Kandinsky");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/kandinsky2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_kandinsky2.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Sol Lewitt");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/sol1.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_sol1.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x F.N. Souza");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/souza3.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_souza3.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Aurora Borealis");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/aurora.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_aurora.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Arabic Calligraphy (1)");
    s->addImage("Mona Lisa", "/Users/gene/bin/_bin/style-transfer/_inputs/caligraphy.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_calligraphy1.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Arabic Calligraphy (2)");
    s->addImage("Mona Lisa", "/Users/gene/bin/_bin/style-transfer/_inputs/caligraphy2.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_calligraphy2.jpg", 0.6, 0.0, 0.4, 1.0);
    
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
    
    s = slideshow.addSlide("Mona Lisa x QR Code");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/qrcode.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_qrcode.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Rosetta Stone (1)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/rosetta1.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_rosetta1_cw12_1000.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Rosetta Stone (2)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/rosetta1.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_rosetta1_cw50.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Rosetta Stone (3)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/rosetta1.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_rosetta1.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Rosetta Stone (4)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/rosetta2.png", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_rosetta2_sw5e3.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Rosetta Stone (5)");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/rosetta2.png", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_rosetta2.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x Ryoji Ikeda");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/ryoji3.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_ryoji3.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Mona Lisa x TV Broadcast Signal Intrusion");
    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/tvnoise.jpg", 0.0, 0.0, 0.55, 1.0);
    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_tvnoise.jpg", 0.6, 0.0, 0.4, 1.0);
    
    s = slideshow.addSlide("Stylenet x Alice in Wonderland");
    //s->addMovie("AliceNet", "/Users/gene/bin/style-transfer/04_alice/Alice-Stylenet.mov", true, 0, 0, 1, 1);
    s->addMovie("AliceNet", "/Users/gene/bin/style-transfer/04_alice/Alice-grid2.mov", true, 0, 0, 1, 1);
    
    // S) alice net + yann tweet + hearts
    s = slideshow.addSlide("<3");
    s->addImage("yan", "/Users/gene/Writing/_Talks/KitchenTableCoders+CIS/3_stylenet/yann-lecun.png", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Style Transfer");
    s->addMovie("tree + hokusai", "/Users/gene/bin/style-transfer/07_hires/tree_hokusai_big.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Tree x Hokusai");
    s->addScrollableImage("Tree Hokusai", "/Users/gene/bin/style-transfer/07_hires/tree_hokusai.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Style Transfer");
    s->addMovie("tree + calligraphy", "/Users/gene/bin/style-transfer/07_hires/tree_calligraphy_big.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Tree x Arabic Calligraphy");
    s->addScrollableImage("Tree calligraphy", "/Users/gene/bin/style-transfer/07_hires/tree_calligraphy2_2.jpg", 0, 0, 1, 1);
    
    s = slideshow.addSlide("Mr. Div x Gustav Klimt");
    s->addMovie("Mr. Div x Gustav Klimt", "/Users/gene/bin/style-transfer/05_interpolations/klimt-discoball/klimt-discoball.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Picasso x Picasso");
    s->addMovie("Picasso periods", "/Users/gene/bin/style-transfer/05_interpolations/picasso-periods/picasso-periods.mp4", true, 0, 0, 1, 1);
    
    s = slideshow.addSlide("Stylenet feedback loop");
    s->addMovie("Styledust", "/Users/gene/bin/style-transfer/05_interpolations/styledust.mp4", true, 0, 0, 1, 1);
    
    // S) deep forger, twitter, kyle walking through sand + starry night in nyc
    
    s = slideshow.addSlide("Just style (Persian style)");
    s->addImage("deep-texture", "/Users/gene/bin/_bin/style-transfer/_inputs/persian.jpg", 0, 0, 1, 0.5);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/persian.jpg", 0, 0.5, 1, 0.5);
    
    s = slideshow.addSlide("Just style (Arabic calligraphy)");
    s->addImage("deep-texture", "/Users/gene/Learn/DeepTextures/Images/arabic.jpg", 0, 0, 1, 0.5);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/arabic.jpg", 0, 0.5, 1, 0.5);
    
    s = slideshow.addSlide("Just style (Basquiat)");
    s->addImage("deep-texture", "/Users/gene/bin/_bin/style-transfer/_inputs/basquiat2.jpg", 0, 0, 1, 0.5);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/basquiat.jpg", 0, 0.5, 1, 0.5);
    
    s = slideshow.addSlide("Just style (google maps)");
    s->addImage("deep-texture", "/Users/gene/bin/_bin/style-transfer/_inputs/maps.jpg", 0, 0, 1, 0.5);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/maps1.jpg", 0, 0.5, 1, 0.5);
    
    s = slideshow.addSlide("Just style (google maps)");
    s->addImage("deep-texture", "/Users/gene/bin/_bin/style-transfer/_inputs/maps.jpg", 0, 0, 1, 0.5);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/maps2.jpg", 0, 0.5, 1, 0.5);
    
    s = slideshow.addSlide("Just style (google maps)");
    s->addImage("deep-texture", "/Users/gene/bin/_bin/style-transfer/_inputs/maps.jpg", 0, 0, 1, 0.5);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/maps3.jpg", 0, 0.5, 1, 0.5);
    
    s = slideshow.addSlide("Just style (Crab nebula)");
    s->addImage("deep-texture", "/Users/gene/bin/_bin/style-transfer/_inputs/crab.jpg", 0, 0, 1, 0.5);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/crab.jpg", 0, 0.5, 1, 0.5);
    
    s = slideshow.addSlide("Just style (Hieroglyphs)");
    s->addImage("deep-texture", "/Users/gene/bin/_bin/style-transfer/_inputs/egypt.jpg", 0, 0, 1, 0.5);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/egypt.jpg", 0, 0.5, 1, 0.5);
    
    s = slideshow.addSlide("Just style (Hokusai)");
    s->addImage("deep-texture", "/Users/gene/bin/_bin/style-transfer/_inputs/hokusai.jpg", 0, 0, 1, 0.5);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/hokusai.jpg", 0, 0.5, 1, 0.5);
    
    s = slideshow.addSlide("Just style (Kandinsky)");
    s->addImage("deep-texture", "/Users/gene/bin/_bin/style-transfer/_inputs/kandinsky2.jpg", 0, 0, 1, 0.5);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/kandinsky.jpg", 0, 0.5, 1, 0.5);
    
    s = slideshow.addSlide("Just style (Tarsila)");
    s->addImage("deep-texture", "/Users/gene/bin/_bin/style-transfer/_inputs/tarsilo2.jpg", 0, 0, 1, 0.5);
    s->addImage("deep-texture", "/Users/gene/bin/deep-texture/tarsila.jpg", 0, 0.5, 1, 0.5);
}
