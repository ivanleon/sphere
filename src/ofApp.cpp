#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetVerticalSync(true);
	ofBackground(20);

	// GL_REPEAT for texture wrap only works with NON-ARB textures //
    ofDisableArbTex();
    texture.load("of.png");
    texture.getTexture().setTextureWrap( GL_REPEAT, GL_REPEAT );
    vidGrabber.setup(640, 480, true);

    bFill           = true;
    bWireframe      = true;
    bDrawNormals    = false;
    bDrawAxes       = false;
    bDrawLights     = false;
    bInfoText       = true;
    bMousePressed   = false;
    bSplitFaces     = false;

    float width 	= ofGetWidth() * 0.12;
    float height	= ofGetHeight() * 0.12;

    sphere.setRadius ( width );

    mode = 0;
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}