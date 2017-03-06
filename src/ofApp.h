#pragma once

#define IS_PROJECTING false
#define HIDE_CURSOR false
#define USE_SECOND_SCREEN false
#define REVIMGFAST true


#include "ofMain.h"
#include "ofxDarknet.h"
#include "ofxPwrrPoint.h"
//#include "ofxOsc.h"

#include "Demo_ofxLearn.h"
#include "Demo_ofxCcv.h"
#include "Demo_Darknet.h"
#include "Demo_AudioTSNE.h"
#include "Demo_CubistMirror.h"
#include "Demo_ReverseImageSearch.h"
#include "Demo_ReverseImageSearchFast.h"
#include "Demo_ReverseObjectSearchFast.h"

class ofApp : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    void checkRemoteControl();
    
    void drawBgWhite(ofxPPSlide * & slide);
    void drawBgBlack(ofxPPSlide * & slide);
    
    /* Gui */
    void setupGui();
    void drawGui(ofEventArgs & args);
    void keyPressedGui(ofKeyEventArgs & args);
    void mouseScrolled(ofMouseEventArgs & args);
    
    /* Content */
    void NeuralNets();
    void FeedforwardNeuralNets();
    void Convnets();
    void DeepDream();
    void StyleTransfer();
    void Autoencoders();
    void DCGAN();
    void TSNE();
    void RNNs();
    void ReinforcementLearning();
    void CriticalIssues();
    void SoundResearch();
    void Pix2Pix();

    /* Meta */
    void ML4A();
    void AboutAltAI();

    /* Slides_Misc */
    void Misc();
    void Background();
    void Archive();
    
    /* Special */
    void AltAI();
    void ITPCamp();
    void Eyeo();
    void IXDS();
    void NetzpolitischerAbend();
    void GoogleMLArtExperiments();
    void WithTheBest();
    void Retune();
    void TechCode();
    void Influencers();
    void Kikk();
    void Betahaus();
    void OpenDotTalk();
    void HowDeepIsYourDream();
    void ArtCenterNabi();
    void RecurseCenter();
    void ITPxStory();
    void CreativeAILondon();
    void MLParis();
    void MattTalk();
    
    /* SchoolOfMaaa */
    void NeuralAesthetic1();
    void NeuralAesthetic2();
    void NeuralAesthetic3();
    void NeuralAesthetic4();
    void NeuralAesthetic5();
    void NeuralAesthetic6();
    void NeuralAesthetic7();
    void NeuralAesthetic8();
    void NeuralAestheticMisc();
    
    /* OpenDot */
    void OpenDot_Intro();
    void OpenDot_NeuralNetworks();
    void OpenDot_Wekinator();
    void OpenDot_ConvolutionalNeuralNetworks();
    void OpenDot_ConvnetApplicationsBasic();
    void OpenDot_ConvnetApplicationsAdvanced();
    void OpenDot_GenerativeModels();
    void OpenDot_RecurrentNeuralNetworks();
    void OpenDot_LanguageProcessing();
    void OpenDot_ReinforcementLearning();
    void OpenDot_CriticalIssues();
    
    /* Short Workshops */
    void WorkshopSpektrum();
    void WorkshopRetune();
    void WorkshopInfluencers();
    void WorkshopKikk();
    void WorkshopArtCenterNabi();
    void WorkshopJogja();
    void WorkshopRecurseCenter();
    void WorkshopRecurseCenterDeepLearning();
    void WorkshopMachinesRoom();
    void WorkshopParsons();
    
    ////// Assets
    ofxPwrrPoint slideshow;
    ofxPPSlide *s;
    ofTrueTypeFont h1, h2, h3, h4, h5, h6;
    bool isPaused;
    
    // Shared
    ofxDarknet darknet;
    ofxCcv ccv;
    
    //ofxOscReceiver osc;
    //int idx=0;
    
    
    void ArtProjects() {
        //alt-AI + ml4a projects + other
        // sketch2cat
    }
    
    void UnsortedSlides() {
        

        // biomedical applications
        // Mitosis Detection in Breast Cancer Histology Images with Deep Neural Networks
        // people.idsia.ch/~ciresan/data/miccai2013.pdf
        // deep learning + bio list https://followthedata.wordpress.com/2015/12/21/list-of-deep-learning-implementations-in-biology/
        // and https://arxiv.org/pdf/1603.06430.pdf
     
        // applications
        //  - self-driving cars
        // - semantic segmentation https://pdfs.semanticscholar.org/ac28/805da20e06ffc51307683d2dc90841a206d8.pdf
        // - face identification https://www.cs.toronto.edu/~ranzato/publications/taigman_cvpr14.pdf
        // - image captioning
        // - wavenets
        // - galaxy challenge https://arxiv.org/abs/1503.07077
        // - aerial image labeling https://www.cs.toronto.edu/~vmnih/docs/Mnih_Volodymyr_PhD_Thesis.pdf
        // - alphago/atari/doom/starcraft and DQL
        
        // image applications
        // - superresolution / debluring / enhancement
        // - depth estimation
        // - others
        
        // /Users/gene/Downloads/karpathy-slides/IMG_4633.PNG
        // active research in architecture
        // densely connected convnets, huang et al
        // resnets
        // deeply fused nets
        
        
        // tasks in CV
        // - classification
        // - localization
        // - classification + localization = object detection
        // - segmentation / semantic segmentation
        // - dense captioning
        
        // meta
        // - resnets of resnets multilevel residual networks zhang et al
        // - learning gradient descent by gradient descent
        // - attention/memory - learning copy/paste
        
        
        // batch norm
        
        
        
        s = slideshow.addSlide("Computer vision pre-deep learning");
        
        
        
        s = slideshow.addSlide("Residual networks");
        s->addImage("deblur", "/Users/gene/bin/misc/residual_building_block.png", 0.05, 0.3, 0.4, 0.4);
        s->addImage("deblur", "/Users/gene/bin/misc/resnet.png", 0.7, 0.0, 0.305, 1.0);
        s->addText(h3, ofColor(0), "He et al (Microsoft Research, 2015)\narxiv.org/pdf/1512.03385.pdf", 0.01, 0.0, 0.6);
        
        
        s = slideshow.addSlide("Super-resolution => Deblurring");
        s->addImage("deblur", "/Users/gene/bin/misc/super-resolution-ground-truth.jpg", 0.0, 0.2, 1.0, 0.75);
        s->addText(h3, ofColor(0), "https://arxiv.org/abs/1702.00783", 0.1, 0.01, 0.8);
        
        s = slideshow.addSlide("Plug & Play Generative Networks");
        s->addImage("PPGN", "/Users/gene/bin/misc/ppgn_image_captioning.jpg", 0, 0.05, 1, 0.97);
        s->addText(h4, ofColor(0), "http://www.evolvingai.org/ppgn", 0.1, 0.0, 0.8);
        
        s = slideshow.addSlide("Objectifier (Bjoern Karmann, CIID)");
        s->addImage("objectifier", "/Users/gene/bin/misc/prototype_objectifier.jpg", 0, 0, 0.6, 0.55);
        s->addMovie("objectifier", "/Users/gene/bin/misc/prototype_objectifier.mp4", true, 0.32, 0.4, 0.7, 0.6);
        s->addText(h4, ofColor(0), "bjoernkarmann.dk/objectifier", 0.65, 0.0, 0.4);
        
        s = slideshow.addSlide("Fukushima's Neocognitron (1982) and Hubel/Wiesel");
        s->addImage("hubel wiesel", "/Users/gene/bin/misc/neocognitron.png", 0, 0.1, 0.5, 0.5);
        s->addImage("hubel wiesel", "/Users/gene/bin/misc/hubel1.jpg", 0.5, 0.05, 0.5, 1);
        s->addImage("hubel wiesel", "/Users/gene/bin/misc/hubel2.jpg", 0, 0.6, 0.5, 0.4);
        s->addText(h4, ofColor(0), "Hubel, Wiesel 1962: Receptive fields, binocular interaction and functional architecture in the cat's visual cortex", 0.51, 0.0, 0.4);
        
        s = slideshow.addSlide("Tele-captioning skype");
        s->addImage("skype1", "/Users/gene/bin/misc/densecap-skype_2.png", 0.32, 0.46, 0.7, 0.65);
        s->addImage("skype1", "/Users/gene/bin/misc/densecap-skype_1.png", 0, 0.0, 0.7, 0.65);
        
        s = slideshow.addSlide("");
        s->addImage("alexnet filters", "/Users/gene/bin/misc/stock/alexnet-firstlayer-filters.jpg", 0, 0, 0.5, 1);
        s->addImage("alexnet filters", "/Users/gene/bin/misc/stock/alexnet-conv5-filters.jpg", 0.5, 0, 0.5, 1);
        

        // nsfw
        // - obscene machine

        
    }
};



