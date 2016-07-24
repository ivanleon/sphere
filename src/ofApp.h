#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

	    bool bFill;
	    bool bWireframe;
	    bool bDrawNormals;
	    bool bDrawAxes;
	    bool bDrawLights;
	    bool bInfoText;
	    bool bMousePressed;
	    bool bSplitFaces;

	    ofImage texture;
	    ofVideoGrabber vidGrabber;
	    int mode;

	    ofSpherePrimitive sphere_1;

	    ofLight pointlight0;
	    ofLight pointlight1;
	    ofLight pointlight2;
	    ofMaterial mat1;

	    

};