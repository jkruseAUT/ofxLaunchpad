#pragma once

#include "ofMain.h"
#include "ofxLaunchpad.h"

class testApp : public ofBaseApp, public ofxLaunchpadListener {
public:
	void setup();
	void update();
	void draw();
	
	void keyPressed(int key);
	void keyReleased(int key);
	
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased();
	
	void automapButtonPressed(int col);
	void automapButtonReleased(int col);
	void gridButtonPressed(int col, int row);
	void gridButtonReleased(int col, int row);
	
	ofxLaunchpad launchpad;
	ofVideoGrabber camera;
	ofImage pix;
};
