#pragma once

#include "ofMain.h"
#include "ofxOsc.h"
#include "ofxPwrrPoint.h"

#include "Demo_ofxLearn.h"
#include "Demo_ofxCcv.h"
#include "Demo_AudioTSNE.h"
#include "Demo_CubistMirror.h"
#include "Demo_ReverseImageSearch.h"


#define OSC_REMOTE_ENABLED 0
#define USE_SECOND_SCREEN 1


/*
 to-do
 - example: rain + spam
 - more about training
 */


//    http://www.evolvingai.org/content/ai-neuroscience-understanding

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
    
    /*Workshops */
    void WorkshopSpektrum();
    void WorkshopRetune();
    void WorkshopInfluencers();
    void WorkshopKikk();
    
    ////// Assets
    ofxPwrrPoint slideshow;
    ofxPPSlide *s;
    ofTrueTypeFont h1, h2, h3, h4, h5, h6;
    
    ofxOscReceiver osc;
    int idx=0;
};



