/*
 *  �PROJECTNAME� - �PROJECTNAME�Proc.cpp
 *  Created by �FULLUSERNAME� on �DATE�
 *  Copyright (c) �YEAR� �ORGANIZATIONNAME�, All rights reserved
 */

#ifndef __�PROJECTNAMEASIDENTIFIER�_H
#include "�PROJECTNAME�.h"
#endif

VstInt32 �PROJECTNAMEASIDENTIFIER�::processEvents (VstEvents* ev) {
  // TODO: Add your MIDI handling code here
	return 1;
}

void �PROJECTNAMEASIDENTIFIER�::processReplacing(float **inputs, float **outputs, VstInt32 sampleFrames) {
  float *in_left = inputs[0];
  float *in_right = inputs[1];
  float *out_left = outputs[0];
  float *out_right = outputs[1];
  
  // Processing code goes here
}