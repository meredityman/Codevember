#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofSetBackgroundAuto(true);
}

//--------------------------------------------------------------
void ofApp::update(){
	if (iterator == 1) { 
		increment = 1; 
		loopCount++;
	}
	if (iterator == 400) { increment = -1; }
	iterator += increment;


	if (loopCount < 2) {
		ofImage     img;
		img.grabScreen(0, 0, ofGetWidth(), ofGetHeight());
		img.save("frame_" + ofToString(ofGetFrameNum()) + ".jpg");
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetBackgroundColor(50, 250);
	ofColor a = ofColor().black;
	ofColor b = ofColor().white;


	ofSetLineWidth(sqrt(iterator));
	for (int i = 1; i <= ofGetWindowHeight(); i+= ceil(iterator/2) + 1 ) {
		ofSetColor( a.lerp(b, (float)i / ofGetWindowHeight()));

		float len = (float)ofGetWindowWidth() / i;
		int index = i;

		for (int j = 0; j <= index; j++) {
			if (j % 3 == 0) {
				ofDrawLine(j * len, index, (j + 1) * len, index);
			}
			if (j % 3 == 0) {
				ofDrawLine(ofGetWindowWidth() - (j * len), index, ofGetWindowWidth() -((j + 1) * len), index);
			}
			if (j % 3 == 0) {
				ofDrawLine(j * len, ofGetWindowHeight() - index, (j + 1) * len, ofGetWindowHeight() - index);
			}
			if (j % 3 == 0) {
				ofDrawLine(ofGetWindowWidth() - (j * len), ofGetWindowHeight() - index, ofGetWindowWidth() - ((j + 1) * len), ofGetWindowHeight() - index);
			}

		}

	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
