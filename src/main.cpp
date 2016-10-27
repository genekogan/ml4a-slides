
#include "ofMain.h"
#include "ofApp.h"
#include "ofAppGLFWWindow.h"

//========================================================================
int main( ){
    
    if (USE_SECOND_SCREEN) {
        ofGLFWWindowSettings settings;
        settings.width = 600;
        settings.height = 600;
        settings.setPosition(ofVec2f(300,0));
        settings.resizable = true;
        shared_ptr<ofAppBaseWindow> mainWindow = ofCreateWindow(settings);
        
        settings.width = 300;
        settings.height = 300;
        settings.setPosition(ofVec2f(0,0));
        settings.resizable = true;
        // uncomment next line to share main's OpenGL resources with gui
        //settings.shareContextWith = mainWindow;
        shared_ptr<ofAppBaseWindow> guiWindow = ofCreateWindow(settings);
        guiWindow->setVerticalSync(false);
        
        shared_ptr<ofApp> mainApp(new ofApp);
        mainApp->setupGui();
        ofAddListener(guiWindow->events().draw,mainApp.get(),&ofApp::drawGui);
        
        ofRunApp(mainWindow, mainApp);
        ofRunMainLoop();
    }
    else {
        ofSetupOpenGL(1024, 768, OF_WINDOW);
        ofRunApp(new ofApp());
    }
}
