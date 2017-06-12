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
    void Goldsmiths();
    void BellLabs();
    void PyData();
    void RetuneStudioVisitLacunaLab();
    void CreativeAIStockholm();
    void HEADGeneva();
    void DahoAm();
    void FromPCAtoPuppySlugs();
    void NYCMLMeetup();
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
    void WorkshopHEAD();
    void WorkshopPhotographersGallery();
    void WorkshopSpektrum3();
    void WorkshopSoundCloud();
    void WorkshopHEAD2();
    
    /* ECAL workshop */
    void WorkshopECAL1();
    void WorkshopECAL2();
    void WorkshopECAL3();
    
    /* Strelka */
    void WorkshopStrelkaIntro();
    void WorkshopStrelkaOverviewML();
    void WorkshopStrelkaNeuralNets();
    void WorkshopStrelkaNeuralGenerativeModels();
    
    /* CIID workshop */
    void WorkshopCIIDAboutMe();
    void WorkshopCIIDNeuralNets();
    void WorkshopCIIDArtProjects();
    void WorkshopCIIDDeepLearning();
    void WorkshopCIIDCriticalIssues();
    
    void CIIDOpenTalk() {
        
        
        s = slideshow.addSlide("CIID, 13 June 2017");
        s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
        s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
        s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
        s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
        s->start();
        
        s = slideshow.addSlide("music information retrieval");
        s->addImage("event detection", "/Users/gene/bin/misc/sourcetone/event_detection.png", 0.0, 0.0, 0.4, 0.38);
        s->addImage("genre VA", "/Users/gene/bin/misc/sourcetone/genre-AvgVA.jpg", 0.0, 0.4, 0.42, 0.6);
        s->addImage("LSA tags", "/Users/gene/bin/misc/sourcetone/LSA-tagsSmall-rank10-clust5.jpg", 0.41, 0, 0.59, 1.0);
        
        //    s = slideshow.addSlide("Color of Words");
        //    s->addScrollableImage("color of words", "/Users/gene/bin/misc/stock/color-of-words.png", 0, 0, 1, 1);
        
        s = slideshow.addSlide("Musical instruments (w/ Jeff Snyder)");
        s->addImage("tweet", "/Users/gene/Web/genekogan.github.io/_site/images/birl/birl1.jpg", 0.0, 0.0, 1, 0.35);
        s->addImage("tweet", "/Users/gene/bin/misc/Snyderphonics_Manta.jpg", 0.0, 0.365, 1, 0.64);
//        
//        s = slideshow.addSlide("Generative art");
//        s->addImage("star", "/Users/gene/bin/images/stars/star-00001.png", 0, 0, 0.25, 0.5);
//        s->addImage("star", "/Users/gene/bin/images/stars/star-00004.png", 0.25, 0, 0.25, 0.5);
//        s->addImage("star", "/Users/gene/bin/images/stars/star-00005.png", 0.5, 0, 0.25, 0.5);
//        s->addImage("star", "/Users/gene/bin/images/stars/star-00010.png", 0.75, 0, 0.25, 0.5);
//        s->addImage("star", "/Users/gene/bin/images/stars/star-00014.png", 0.25, 0.5, 0.25, 0.5);
//        s->addImage("star", "/Users/gene/bin/images/stars/star-00016.png", 0.5, 0.5, 0.25, 0.5);
//        s->addImage("star", "/Users/gene/bin/images/stars/star-00011.png", 0, 0.5, 0.25, 0.5);
//        s->addImage("star", "/Users/gene/bin/images/stars/star-00022.png", 0.75, 0.5, 0.25, 0.5);
//        
        s = slideshow.addSlide("Generative art");
        s->addImage("interference", "/Users/gene/bin/images/interference/interference11.png", 0.0, 0, 0.33, 1);
        s->addImage("interference", "/Users/gene/bin/images/interference/interference14.png", 0.3333, 0, 0.33, 1);
        s->addImage("interference", "/Users/gene/bin/images/interference/interference12.png", 0.6666, 0, 0.33, 1);
        
        s = slideshow.addSlide("Nature and simulation");
        s->addMovie("simulation", "/Users/gene/bin/images/Flocking-fast.mp4", true, 0, 0, 1, 1);
        
        s = slideshow.addSlide("Nature and simulation");
        s->addMovie("simulation", "/Users/gene/bin/images/VertexFields2_01.29.2012.mov", true, 0, 0, 1, 1);
        
        //    s = slideshow.addSlide("Nature and simulation");
        //    s->addMovie("simulation", "/Users/gene/bin/images/Tree.mov", true, 0, 0, 1, 1);
        
        s = slideshow.addSlide("Nature and simulation");
        s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/listening-to-the-ocean-20.jpg", 0, 0, 1, 1);
    
        s = slideshow.addSlide("Nature and simulation");
        s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/listening-to-the-ocean-10.jpg", 0.505, 0, 0.5, 1);
        s->addImage("simulation", "/Users/gene/bin/listening-to-the-ocean/generator5.png", 0, 0, 0.5, 1);
        
        //    s = slideshow.addSlide("Visual instruments");
        //    s->addMovie("genart", "/Users/gene/bin/images/instagram/bits.mp4", true, 0, 0, 0.333333, 0.5);
        //    s->addMovie("genart", "/Users/gene/bin/images/instagram/constellations.mp4", true, 0.3333, 0, 0.33333, 0.5);
        //    s->addMovie("genart", "/Users/gene/bin/images/instagram/subdivision_2.mp4", true, 0.66666, 0.0, 0.3333, 0.5);
        //    s->addMovie("genart", "/Users/gene/bin/images/instagram/old/vert1.mp4", true, 0, 0.5, 0.333333, 0.5);
        //    s->addMovie("genart", "/Users/gene/bin/images/instagram/video/cubes.mp4", true, 0.33333, 0.5, 0.333333, 0.5);
        //    s->addMovie("genart", "/Users/gene/bin/images/instagram/old/polar_glitch2.mp4", true, 0.66666, 0.5, 0.333333, 0.5);
        
        //    s = slideshow.addSlide("Data visualization");
        //    s->addImage("genart", "/Users/gene/Web/genekogan.github.io/_site/images/audio-sculpture/audio-sculpture2.jpg", 0, 0, 0.36, 1);
        //    s->addMovie("genart", "/Users/gene/bin/misc/Tennis rankings 1983-2013-HD.mp4", true, 0.4, 0, 0.61, 1);
        
        s = slideshow.addSlide("Kinect Projector Toolkit");
        s->addMovie("KPT", "/Users/gene/bin/opera-toolkit/colin-ribbons-2_nosound.mp4", true, 0.0, 0, 0.5, 0.6);
        s->addMovie("KPT", "/Users/gene/bin/kinect-projector-toolkit/Silhouettes @ Saigon Ranger_nosound.mp4", true, 0.4, 0.4, 0.64, 0.62);
        
        s = slideshow.addSlide("Machine Yearning (2014)");
        s->addMovie("machine yearning", "/Users/gene/bin/machine-yearning/machine-yearning-gopro.mp4", true, 0.0, 0, 1, 1);
        
        s = slideshow.addSlide("Opera Toolkit (2015)");
        s->addMovie("KPT", "/Users/gene/bin/opera-toolkit/optk_sarah_v1.mp4", true, 0.0, 0, 1, 1);
        
        s = slideshow.addSlide("Mass collaboration: EcoHacker-Build");
        s->addImage("ecohack", "/Users/gene/bin/ecohacker-build/_mg_7093_14926714478_o.jpg", 0, 0, 1, 1);
        
        s = slideshow.addSlide("Deep learning + art");
        s->addMovie("dcgan", "/Users/gene/bin/autoencoders/_AlecRad_Faces.mp4", true, 0, 0.026, 0.5, 0.47);
        s->addImage("deepdream", "/Users/gene/bin/misc/stock/building-dreams.png", 0, 0.515, 0.5, 0.48);
        s->addImage("stylenet", "/Users/gene/bin/misc/stock/stylenet-original.png", 0.5, 0.53, 0.5, 0.47);
        s->addImage("synthesizing original", "/Users/gene/bin/misc/stock/synthesizing-original.jpg", 0.5, 0.025, 0.5, 0.48);
        s->addText(h4, ofColor(0), "https://www.youtube.com/watch?v=QYcKCGdZvq4", 0.01, 0.0, 1.0);
        s->addText(h5, ofColor(0), "research.googleblog.com/2015/06/inceptionism-going-deeper-into-neural.html", 0.002, 0.475, 1.0);
        s->addText(h4, ofColor(0), "https://arxiv.org/abs/1508.06576", 0.6, 0.51, 1.0);
        s->addText(h4, ofColor(0), "http://www.evolvingai.org/synthesizing", 0.6, 0.0, 1.0);
        //    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/monalisa.jpg", 0.0, 0.0, 0.5, 0.59);
        //    s->addImage("Starry night", "/Users/gene/bin/style-transfer/_inputs/starrynight.jpg", 0.0, 0.6, 0.5, 0.4);
        //    s->addMovie("ML starry night", "/Users/gene/bin/style-transfer/11_demo/ml_starrynight_iterations.mp4", true, 0.5, 0.02, 0.5, 0.96);
        
        
        s = slideshow.addSlide("Deepdream: Leonardo Da Vinci");
        s->addImage("Da Vinci", "/Users/gene/bin/deepdream/painters/_davinci.jpg", 0, 0, 1, 1);
        s->addBreakpoint();
        s->addImage("Da Vinci", "/Users/gene/bin/deepdream/painters/davinci_drawing(0)0002_i5_o8_os1.1_j32.png", 0, 0, 1, 1);
        
        s = slideshow.addSlide("Deepdream");
        s->addMovie("bel", "/Users/gene/bin/images/instagram/JTrain-instagram_start75.mp4", true, 0.0, 0, 0.5, 1);
        s->addMovie("bel", "/Users/gene/bin/deepdream/darknet/out_jt_13_3x12_oct4_11.mp4", true, 0.505, 0, 0.5, 1);
        
        s = slideshow.addSlide("Deepdream");
        s->addMovie("bel", "/Users/gene/bin/deepdream/darknet/out_bel_13_3x12_oct4_11.mp4", true, 0.0, 0, 0.5, 1);
        s->addMovie("bel", "/Users/gene/bin/deepdream/darknet/out_bel_9_3x12_oct4_11.mp4", true, 0.505, 0, 0.5, 1);
        
        s = slideshow.addSlide("Deepdream");
        s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_content/deeptrain2.mp4", true, 0.0, 0.0, 0.6, 0.35);
        s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_prototypes/testOtherl4_1.mp4", true, 0.0, 0.35, 0.5, 0.65);
        s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_prototypes/makeMid_blur_2a_imovie.mp4", true, 0.4, 0.0, 0.6, 0.6);
        s->addMovie("Deepzoom", "/Users/gene/bin/deepdream/video_feedback/theFrame7.mp4", true, 0.5, 0.5, 0.5, 0.5);

        s = slideshow.addSlide("Recent experiments");
        s->addImage("Da Vinci", "/Users/gene/bin/lapnorm/initial_experiments/eureka.png", 0, 0, 1, 1);
        
        s = slideshow.addSlide("Recent experiments");
        s->addMovie("Deepzoom", "/Users/gene/bin/lapnorm/initial_experiments/kframes (4).mp4", true, 0.0, 0.0, 1, 1);
        
        s = slideshow.addSlide("Recent experiments");
        s->addMovie("Deepzoom", "/Users/gene/bin/lapnorm/initial_experiments/testframes9b0.mp4", true, 0.0, 0.0, 1, 1);

        
        s = slideshow.addSlide("Style transfer");
        s->addImage("Mona Lisa -> Cubist/Expressionist/Impressionist", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_cubist_expressionist_impressionist.jpg", 0, 0.15, 1, 0.85);
        s->addText(h4, ofColor(0), "Gatys et al, 2015 (arxiv.org/abs/1508.06576)", 0.002, 0, 1.0);
        s->addText(h4, ofColor(0), "Justin Johnson's neural-style (https://github.com/jcjohnson/neural-style)", 0.002, 0.075, 1.0);
        
        //    s = slideshow.addSlide("Mona Lisa x Devajyoti Ray");
        //    s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/devajyoti.jpg", 0.0, 0.0, 0.55, 1.0);
        //    s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_devajyoti.jpg", 0.6, 0.0, 0.4, 1.0);
        
        s = slideshow.addSlide("Mona Lisa x Hokusai");
        s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/hokusai.jpg", 0.0, 0.0, 0.55, 1.0);
        s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_hokusai.jpg", 0.6, 0.0, 0.4, 1.0);
        
        s = slideshow.addSlide("Mona Lisa x Tarsila");
        s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/tarsilo2.jpg", 0.0, 0.0, 0.55, 1.0);
        s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_tarsila.jpg", 0.6, 0.0, 0.4, 1.0);
        
        s = slideshow.addSlide("Mona Lisa x Roy Liechtenstein");
        s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/liechtenstein.jpg", 0.0, 0.0, 0.55, 1.0);
        s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/02_mona-lisa-paintings/ml_liechtenstein.jpg", 0.6, 0.0, 0.4, 1.0);
        
        s = slideshow.addSlide("Mona Lisa x Aurora Borealis");
        s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/aurora.jpg", 0.0, 0.0, 0.55, 1.0);
        s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_aurora.jpg", 0.6, 0.0, 0.4, 1.0);
        
        s = slideshow.addSlide("Mona Lisa x Crab Nebula");
        s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/crab.jpg", 0.0, 0.0, 0.55, 1.0);
        s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_crab.jpg", 0.6, 0.0, 0.4, 1.0);
        
        s = slideshow.addSlide("Mona Lisa x Egyptian Hieroglyphs (1)");
        s->addImage("Mona Lisa", "/Users/gene/bin/style-transfer/_inputs/egypt.jpg", 0.0, 0.0, 0.55, 1.0);
        s->addImage("Mona Lisa TV noise", "/Users/gene/bin/style-transfer/03_mona-lisa-etc/ml_egypt.jpg", 0.6, 0.0, 0.4, 1.0);
        
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
        
        s = slideshow.addSlide("Mr. Div x Gustav Klimt");
        s->setBackgroundFunction(this, &ofApp::drawBgBlack);
        s->addMovie("Mr. Div x Gustav Klimt", "/Users/gene/bin/style-transfer/05_interpolations/klimt-discoball/klimt-discoball.mp4", true, 0, 0, 1, 1);
        
        //    s = slideshow.addSlide("Picasso x Picasso");
        //    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
        //    s->addMovie("Picasso periods", "/Users/gene/bin/style-transfer/05_interpolations/picasso-periods/picasso-periods.mp4", true, 0, 0, 1, 1);
        
        //    s = slideshow.addSlide("Why is a Raven like a Writing Desk?");
        //    s->setBackgroundFunction(this, &ofApp::drawBgBlack);
        //    s->addMovie("AliceNet", "/Users/gene/bin/style-transfer/04_alice/Alice-Stylenet.mov", true, 0, 0, 1, 1);
        
        s = slideshow.addSlide("Video style with optical flow loss term (Ruder et al, 2016)");
        s->setBackgroundFunction(this, &ofApp::drawBgBlack);
        s->addMovie("video style", "/Users/gene/bin/style-transfer/10_optical_flow/video-style-transfer-x4-reordered.mp4", true, 0, 0, 1, 1);
        
        CubistMirrorDemo *cmd = new CubistMirrorDemo(s, "classifier", 0, 0, 1, 1);
        s = slideshow.addSlide("What happens when it's real-time?");
        s->addAction(cmd);
        cmd->setStyleModel("/Users/gene/bin/style-transfer/models/kandinsky_e2_full512.model");
        
        
        s = slideshow.addSlide("Image-to-Image Translation with Conditional Adversarial Nets");
        s->addImage("fb", "/Users/gene/bin/pix2pix/teaser_v3a.png", 0.0, 0.04, 1.0, 0.96);
        s->addText(h4, ofColor(100), "phillipi.github.io/pix2pix/ -> github.com/affinelayer/pix2pix-tensorflow", 0.002, 0.00, 1.0);
        s->start();
        
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
        
        s = slideshow.addSlide("Meat puppet");
        s->addImage("fb", "/Users/gene/bin/pix2pix/trump/trump_face_train.png", 0.0, 0.0, 0.45, 1.0);
        s->addImage("fb", "/Users/gene/bin/misc/stock/arrow.png", 0.46, 0.0, 0.08, 1.0);
        s->addImage("fb", "/Users/gene/bin/pix2pix/trump/gene_face_test.png", 0.55, 0.0, 0.45, 1.0);
        
        s = slideshow.addSlide("Meat puppet");
        s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump_gene1.mp4", false, 0.1, 0.1, 0.8, 0.8);
        
        s = slideshow.addSlide("Meat puppet @ ECAL");
        s->addMovie("fb", "/Users/gene/bin/pix2pix/trump/trump-meatpuppet-pix2pix-ecal.mp4", true, 0.0, 0.0, 1.0, 1.0)->setPosition(0.25);
        
        s = slideshow.addSlide("CycleGAN");
        s->addImage("fb", "/Users/gene/bin/misc/cyclegan/cyclegan.jpg", 0.0, 0.07, 1, 0.95);
        s->addText(h3, ofColor(100), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
        
        s = slideshow.addSlide("CycleGAN");
        s->addMovie("fb", "/Users/gene/bin/misc/cyclegan/cyclegan_zebra.mp4", true, 0.1, 0.1, 0.8, 0.8);
        s->addText(h3, ofColor(100), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
        
        s = slideshow.addSlide("CycleGAN fail");
        s->addImage("fb", "/Users/gene/bin/misc/cyclegan/putin_zebra.jpeg", 0.1, 0.1, 0.8, 0.8);
        s->addText(h3, ofColor(100), "Zhu, Park, Isola, Efros (https://junyanz.github.io/CycleGAN/)", 0.00, 0.00, 0.8);
        
        
        s = slideshow.addSlide("Having fun");
        s->addImage("densecap", "/Users/gene/bin/densecap/monalisa-densecap.png", 0, 0.03, 1, 0.94);
        
        s = slideshow.addSlide("Dense captioning Atlas, The Next Generation");
        s->addMovie("densecap", "/Users/gene/bin/densecap/atlas.mp4", true, 0, 0, 1, 1);
        
        s = slideshow.addSlide("Dense captioning Deepdream");
        s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream.mp4", true, 0, 0, 1, 1);
        
        s = slideshow.addSlide("Dense captioning Pouff's grocery trip");
        s->addMovie("densecap", "/Users/gene/bin/densecap/deepdream_grocery.mp4", true, 0, 0, 1, 1);
        s->addText(h4, ofColor(0), "original: https://www.youtube.com/watch?v=DgPaCWJL7XI", 0.01, 0.0, 0.99);
        
        s = slideshow.addSlide("YOLO x ScreenGrab");
        DarknetScreenGrabDemo *dnsgd = new DarknetScreenGrabDemo(s, "Darknet Demo", 0, 0, 1, 1);
        dnsgd->setDarknetReference(&darknet);
        s->addAction(dnsgd);
        
        s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
        s->addImage("yolo", "/Users/gene/bin/ml4a/ReverseImageSearch/yolo-screen1.png", 0, 0, 1, 1);
        s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
        s->addImage("yolo", "/Users/gene/bin/ml4a/ReverseImageSearch/yolo-screen2.png", 0, 0, 1, 1);
        s = slideshow.addSlide("Darknet-YOLO x ScreenGrab");
        s->addImage("yolo", "/Users/gene/bin/ml4a/ReverseImageSearch/yolo-screen3.png", 0, 0, 1, 1);
        
        s = slideshow.addSlide("Tele-captioning skype");
        s->addImage("skype1", "/Users/gene/bin/misc/densecap-skype_2.png", 0.32, 0.46, 0.7, 0.65);
        s->addImage("skype1", "/Users/gene/bin/misc/densecap-skype_1.png", 0, 0.0, 0.7, 0.65);
        
        
        s = slideshow.addSlide("Demos");
        
        
        s = slideshow.addSlide("thanks :)");
        s->addMovie("t-SNE convergence", "/Users/gene/bin/tsne/tsne_manual.mp4", true, 0, 0, 1, 1);
        s->addRect(ofColor(255,160), 0.005, 0.19, 0.33, 0.25);
        s->addRect(ofColor(255,160), 0.595, 0.19, 0.33, 0.25);
        s->addText(h2, ofColor(0), "@genekogan", 0.1, 0.2, 0.5);
        s->addText(h2, ofColor(0), "genekogan.com", 0.1, 0.3, 0.5);
        s->addText(h2, ofColor(0), "ml4a.github.io", 0.6, 0.2, 0.5);
        s->addText(h2, ofColor(0), "@ml4a_", 0.6, 0.3, 0.5);
        
    }

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
        
        // meta
        // - resnets of resnets multilevel residual networks zhang et al
        // - learning gradient descent by gradient descent
        // - attention/memory - learning copy/paste
        
    }
    

};


