#include "ofApp.h"

void ofApp::newMTCMessage(MTCEventArgs& _args)
{
    // If you need the time as millis
    currentMillis = _args.timeAsMillis;
}

//--------------------------------------------------------------
void ofApp::setup(){

    // init with a midi driver name
    MTCReceiver.init( "NANOSYNCS HD" );

    // Subscribe to the timecode event
    ofAddListener( MTCReceiver.MTCEvent, this, &ofApp::newMTCMessage  );
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofDrawBitmapString(ofxTimecode::timecodeForMillis(currentMillis), 10, 50);
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
