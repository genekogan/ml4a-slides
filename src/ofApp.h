#pragma once

#define IS_PROJECTING true
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

// fix segment


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
    void checkIfCorrectCam();
    
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
    void ArtProjects();
    
    /* Talks */
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
    void ScopeSessions();
    void CCAmsterdam();
    void Resonate();
    void ECALausanne();
    void Sensorium();
    void HEADGeneva();
    void Goldsmiths();
    void PyData();
    void Eyeo2();
    
    /* SchoolOfMaaa Neural Aesthetic */
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
    void WorkshopSpektrum2();
    void WorkshopMediaMonks();
    void WorkshopResonate1();
    void WorkshopResonate2();
    void WorkshopResonate3();
    void WorkshopSensorium();
    
    /* ECAL workshop */
    void WorkshopECAL1();
    void WorkshopECAL2();
    void WorkshopECAL3();
    
    /* Strelka */
    void WorkshopStrelkaIntro();
    void WorkshopStrelkaOverviewML();
    void WorkshopStrelkaNeuralNets();
    void WorkshopStrelkaNeuralGenerativeModels();
    
    
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
    
    void UnsortedSlides() {
        

        // biomedical applications
        // Mitosis Detection in Breast Cancer Histology Images with Deep Neural Networks
        // people.idsia.ch/~ciresan/data/miccai2013.pdf
        // deep learning + bio list https://followthedata.wordpress.com/2015/12/21/list-of-deep-learning-implementations-in-biology/
        // and https://arxiv.org/pdf/1603.06430.pdf
     
        // applications
        // - self-driving cars
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
        
        // meta
        // - resnets of resnets multilevel residual networks zhang et al
        // - learning gradient descent by gradient descent
        // - attention/memory - learning copy/paste
        
        // batch norm
        

        

        // nsfw
        // - obscene machine

        
        
        
        
    }
};



