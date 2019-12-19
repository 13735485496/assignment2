#include "ofApp.h"
float Xposition,Yposition;
/*
Loads in the same 3D penguin model in various file types. Demonstrates how to load in a model using both ofMesh and ofxAssimpModelLoader.
*/

//--------------------------------------------------------------
void ofApp::setup() {
	ofBackground(255, 255, 255);
	Xposition = 0;
	Yposition = 0;
	model.loadModel("penguin.dae");
	model.setPosition(0, 0, 0);
	model.setRotation(0, 180, 1, 0, -0.6);
	model.setScale(0.9, 0.9, 0.9);
	light.setPosition(0, 0, 500);
	cam.disableMouseInput();
	cam.setPosition(ofVec3f(0, 0, 500));
}

//--------------------------------------------------------------
void ofApp::update() {
	Xposition += 2;
	if (Xposition > 500) {
		Xposition = -500;
	}
	Yposition += 2;
if (Yposition > 0) {
	Yposition = -60;
}

}

//--------------------------------------------------------------
void ofApp::draw() {
	ofEnableDepthTest();
	light.enable();
	cam.begin();
	model.setPosition(Xposition, Yposition, 0);
	model.draw(OF_MESH_FILL);
	cam.end();
	light.disable();
	ofDisableDepthTest();
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
