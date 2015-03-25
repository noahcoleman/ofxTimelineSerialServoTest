#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    timeline.setup(); //registers events
    timeline.setDurationInSeconds(10); //sets time
    timeline.setLoopType(OF_LOOP_NORMAL); //turns the timeline to loop
    
    //add a tracks, etc
    timeline.addLFO("xPosition", ofRange(0,ofGetWidth()));
    timeline.addLFO("yPosition", ofRange(0, ofGetHeight()));
    
    serial.setup("/dev/tty.usbmodem1411",57600);

}

//--------------------------------------------------------------
void ofApp::update(){
    
//    serial.writeByte(scaledMouseX);
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    //the value of changingRadius will be different depending on the timeline
    float xPos = timeline.getValue("xPosition");
    float yPos = timeline.getValue("yPosition");
    
    ofCircle(xPos, yPos, 40);
    //don't forget to draw your timeline so you can edit it.
    timeline.draw();
    
    cout <<xPos<<", "<<yPos<<endl;
    

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
