//
// Copyright (c) 2010 Christopher Baker <https://christopherbaker.net>
//
// SPDX-License-Identifier:	GPL
//


#pragma once


#include "ofMain.h"
#include "ofxTouchPad.h"
#include "ofxPointer.h"


class ofApp: public ofBaseApp
{
public:
    void setup() override;
    void draw() override;
    void exit() override;

    void keyPressed(int key) override;

    void onPointerEvent(ofx::PointerEventArgs& evt);

};
