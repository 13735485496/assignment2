#include "ofApp.h"


/*
Loads in the same 3D penguin model in various file types. Demonstrates how to load in a model using both ofMesh and ofxAssimpModelLoader.
*/

//--------------------------------------------------------------
void ofApp::setup() {
	
	
	
	ofBackground(255, 255, 255);

	// load the first model
	model.loadModel("penguin.dae", 20);

	
	model.setPosition(0, 0,0);
	
	model.setRotation(0, 180, 1, 0, -0.69);
	model.setScale(0.8, 0.8, 0.8);

	
	light.setPosition(0, 0, 500);


	
	cam.disableMouseInput();
	cam.setPosition(ofVec3f(0,0, 500));
	//set help text to display by default



	
}

//--------------------------------------------------------------
void ofApp::update() {
	//cameraOrbit += ofGetLastFrameTime() * 20.; // 20 degrees per second;//被注释掉之后就不会旋转
	//cam.orbitDeg(cameraOrbit, 0., cam.getDistance(), { 0., 0., 0. });
}

//--------------------------------------------------------------
void ofApp::draw() {
	// so the model isn't see through.



	ofEnableDepthTest();

	light.enable();

	cam.begin();
	ofColor(255, 255);
	
		model.drawFaces();
	
	cam.end();

	light.disable();

	ofDisableDepthTest();

	// display help text if it is enable
	
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
