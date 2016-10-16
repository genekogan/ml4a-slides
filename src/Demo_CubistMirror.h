#pragma once

#include "ofMain.h"

class ofxPPSlide;


// you may have to change these paths...
// this is the path to chainer-fast-neuralstyle
#define NEURAL_STYLE_PATH "/Users/gene/Learn/chainer-fast-neuralstyle"

// openframeworks overwrites the path so you can't find CUDA.
// if you have the chainer script working, just change this so it matches what
// you get if you run "echo $PATH" in a terminal
#define PATH "/usr/local/bin:/usr/local/sbin:/Developer/NVIDIA/CUDA-7.5/bin:/usr/local/cuda/bin:/opt/local/bin:/opt/local/sbin:/usr/local/bin:/usr/bin:/bin:/usr/sbin:/sbin"

// same thing for "echo $LD_LIBRARY_PATH"
#define LD_LIBRARY_PATH "/usr/local/cuda/lib"

// if you have CUDA and your paths are correct, set this to 1. otherwise set to 0
#define GPU_ENABLED 0


class ThreadedObject: public ofThread
{
public:
    bool isNew;
    bool isAvailable;
    
    string cmd_path;
    string cmd_chainer;
    string model;
    
    ofImage cam_img;
    ofImage chainer_img;
    
    int index;
    
    ThreadedObject(): count(0), isNew(false), shouldThrowTestException(false){
        isNew = false;
        isAvailable = true;
    }
    
    void setIndex(int index) {
        this->index = index;
        setCommands();
    }
    
    void setStyleModel(string model) {
        this->model = model;
        setCommands();
    }
    
    void setCommands() {
        string neuralStylePath = NEURAL_STYLE_PATH;
        string path = PATH;
        string ld_library_path = LD_LIBRARY_PATH;
        cmd_path = "export PATH="+path+"; export LD_LIBRARY_PATH="+ld_library_path+";";
        cmd_chainer = "/usr/local/bin/python "+neuralStylePath+"/generate.py "+ofToDataPath("cam_"+ofToString(index)+".png")+" -m "+model+" -o "+ofToDataPath("chainer_img_"+ofToString(index)+".png")+" --gpu "+(GPU_ENABLED==1?"0":"-1");
    }
    
    bool hasNew() {
        return isNew;
    }
    
    void reset() {
        isNew = false;
    }
    
    void start(){
        isAvailable = false;
        startThread();
    }
    
    void stop(){
        stopThread();
    }
    
    bool available() {
        return isAvailable;
    }
    
    void threadedFunction()
    {
        while(isThreadRunning())
        {
            // Attempt to lock the mutex.  If blocking is turned on,
            if(lock()) {
                unlock();
                
                float t1 = ofGetElapsedTimef();
                string cmd = cmd_path+cmd_chainer;
                string res = ofSystem(cmd);
                float t2 = ofGetElapsedTimef();
                
                count++;
                
                isNew = true;
                isAvailable = true;
                stop();
                
                if(shouldThrowTestException > 0) {
                    shouldThrowTestException = 0;
                    throw Poco::ApplicationException("We just threw a test exception!");
                }
            }
            else {
                ofLogWarning("threadedFunction()") << "Unable to lock mutex.";
            }
        }
    }
    
    int getCount() {
        unique_lock<std::mutex> lock(mutex);
        return count;
    }
    
    void throwTestException() {
        shouldThrowTestException = 1;
    }
    
protected:
    Poco::AtomicCounter shouldThrowTestException;
    int count;
};



class CubistMirrorDemo : public ofxPPElement {
public:
    CubistMirrorDemo(ofxPPSlide *parent, string name, float x, float y, float w, float h) : ofxPPElement(parent, name, x, y, w, h) {
        ready = false;
        active = false;
        styleModel = ofToDataPath("cubist.model");
    }
    
    void start() {
        if (!loaded) {
            setupDemo();
            loaded = true;
            active = true;
        }
        //grab.initGrabber(640, 480);
        grab.initGrabber(320, 240);
        last = 0;
    }
    
    void stop() {
        grab.close();
        active = false;
    }
    
    void setStyleModel(string styleModel) {
        this->styleModel = styleModel;
        worker1.setStyleModel(styleModel);
        worker2.setStyleModel(styleModel);
        worker3.setStyleModel(styleModel);
        worker4.setStyleModel(styleModel);
        worker1.setIndex(1);
        worker2.setIndex(2);
        worker3.setIndex(3);
        worker4.setIndex(4);
    }

    void setupDemo() {
        //setStyleModel(ofToDataPath("cubist.model"));
        setStyleModel(styleModel);
        min_lapse = 0.6;
    }
    
    void update() {
        grab.update();
        
        t = ofGetElapsedTimef() - last;
        
        if (grab.isFrameNew()) {
            if (worker1.available() && t > min_lapse) {
                cam_img.setFromPixels(grab.getPixels());
                cam_img.save("cam_1.png");
                worker1.start();
                last = ofGetElapsedTimef();
            }
            else if (worker2.available() && t > min_lapse) {
                cam_img.setFromPixels(grab.getPixels());
                cam_img.save("cam_2.png");
                worker2.start();
                last = ofGetElapsedTimef();
            }
            else if (worker3.available() && t > min_lapse) {
                cam_img.setFromPixels(grab.getPixels());
                cam_img.save("cam_3.png");
                worker3.start();
                last = ofGetElapsedTimef();
            }
            else if (worker4.available() && t > min_lapse) {
                cam_img.setFromPixels(grab.getPixels());
                cam_img.save("cam_4.png");
                worker4.start();
                last = ofGetElapsedTimef();
            }
        }
        
        if (worker1.hasNew()) {
            chainer_img.load(ofToDataPath("chainer_img_1.png"));
            worker1.reset();
            ready = true;
        }
        if (worker2.hasNew()) {
            chainer_img.load(ofToDataPath("chainer_img_2.png"));
            worker2.reset();
            ready = true;
        }
        if (worker3.hasNew()) {
            chainer_img.load(ofToDataPath("chainer_img_3.png"));
            worker3.reset();
            ready = true;
        }
        if (worker4.hasNew()) {
            chainer_img.load(ofToDataPath("chainer_img_4.png"));
            worker4.reset();
            ready = true;
        }
    }
    
    void draw() {
        update();
        
        ofPushMatrix();
        ofTranslate(box.getX(), box.getY());
        
        if (ready) {
            chainer_img.draw(0, 0, box.getWidth(), box.getHeight());
        }
        else {
            grab.draw(0, 0, box.getWidth(), box.getHeight());
        }

        ofPopMatrix();
    }
    
    void keyPressed(int key) {
        if (!active) return;
        cout << key << endl;
        if      (key=='1') {
            setStyleModel(ofToDataPath("cubist.model"));
        }
        else if (key=='2') {
            setStyleModel(ofToDataPath("cubist2.model"));
        }
        else if (key=='3') {
            setStyleModel(ofToDataPath("edtaonisl.model"));
        }
        else if (key=='4') {
            setStyleModel(ofToDataPath("hokusai.model"));
        }
        else if (key=='5') {
            setStyleModel(ofToDataPath("hokusai2.model"));
        }
        else if (key=='6') {
            setStyleModel(ofToDataPath("hundertwasser.model"));
        }
        else if (key=='7') {
            setStyleModel(ofToDataPath("kandinsky_e2_crop512.model"));
        }
        else if (key=='8') {
            setStyleModel(ofToDataPath("kandinsky_e2_full512.model"));
        }
        else if (key=='9') {
            setStyleModel(ofToDataPath("composition.model"));
        }
        else if (key=='0') {
            setStyleModel(ofToDataPath("smokefog.model"));
        }
        else if (key=='-') {
            setStyleModel(ofToDataPath("rami_bianco.model"));
        }
        else if (key=='=') {
            setStyleModel(ofToDataPath("palm.model"));
        }
    }
    
    // these are hardcoded since you can't put threads in a vector
    ThreadedObject worker1, worker2, worker3, worker4;
    
    ofVideoGrabber grab;
    
    ofImage cam_img;
    ofImage chainer_img;
    
    float last, t;
    float min_lapse;
    
    string styleModel;

    bool ready;
    bool active;
};


