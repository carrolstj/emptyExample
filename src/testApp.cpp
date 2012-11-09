#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    size=50;
    ofEnableSmoothing();
    ofSetCircleResolution(100);//control the points which used to creat the circle
    ofBackground(100, 100, 40);
    
    ofSetFrameRate(60);//slow down the moving circle which looks more smooth
    
    ofSetVerticalSync(true);//sync the laptop rate and the framerate
}

//--------------------------------------------------------------
void testApp::update(){
    yPos++;
}

//--------------------------------------------------------------
void testApp::draw(){
    ofCircle(mouseX,mouseY , size);
    ofCircle (100,yPos,size );
    ofEllipse(200,100,size,size*2);
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofRect(ofGetWidth()/2, ofGetHeight()/2,50,50);
    
    ofLine(ofGetWidth(),ofGetHeight(), ofGetWidth()/2,ofGetHeight()/2 );
    
   // cout<<size<<endl;
    cout<<"mysize us:"<<size<<endl ;//print in a line
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}