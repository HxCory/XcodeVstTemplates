/*
 *  �PROJECTNAME� - �PROJECTNAME�.cpp
 *  Created by �FULLUSERNAME� on �DATE�
 *  Copyright (c) �YEAR� �ORGANIZATIONNAME�, All rights reserved
 */

#ifndef __�PROJECTNAMEASIDENTIFIER�_H
#include "�PROJECTNAME�.h"
#endif

AudioEffect* createEffectInstance(audioMasterCallback audioMaster) {
	return new �PROJECTNAMEASIDENTIFIER�(audioMaster);
}

�PROJECTNAMEASIDENTIFIER�::�PROJECTNAMEASIDENTIFIER�(audioMasterCallback audioMaster)
  : AudioEffectX(audioMaster, NUM_PROGRAMS, NUM_PARAMS) {
  setNumInputs(kNumInputs);
  setNumOutputs(kNumOutputs);
  setUniqueID(kUniqueId);
  
  strncpy(mProgramName, "Default", kProgramNameSize); // default program name
}

�PROJECTNAMEASIDENTIFIER�::~�PROJECTNAMEASIDENTIFIER�() {
}

VstInt32 �PROJECTNAMEASIDENTIFIER�::canDo(char *text) {
  // TODO: Fill in according to your plugin's capabilities
  return 0;
}

bool �PROJECTNAMEASIDENTIFIER�::getEffectName(char* name) {
  strncpy(name, "�PROJECTNAMEASIDENTIFIER�", kProgramNameSize);
  return true;
}

float �PROJECTNAMEASIDENTIFIER�::getParameter(VstInt32 index) {
  switch(index) {
    default:
      return 0.0;
  }
}

void �PROJECTNAMEASIDENTIFIER�::getParameterDisplay(VstInt32 index, char *text) {
  switch(index) {
    default:
      strcpy(text, "ERROR");
      break;
  }
}

void �PROJECTNAMEASIDENTIFIER�::getParameterLabel(VstInt32 index, char *text) {
  switch(index) {
    default:
      strcpy(text, "ERROR");
      break;
  }
}

void �PROJECTNAMEASIDENTIFIER�::getParameterName(VstInt32 index, char *text) {
  switch(index) {
    default:
      strcpy(text, "ERROR");
      break;
  }
}

VstPlugCategory �PROJECTNAMEASIDENTIFIER� ::getPlugCategory() {
  return kPlugCategEffect;
}

bool �PROJECTNAMEASIDENTIFIER�::getProductString(char* text) {
  strcpy(text, "�PROJECTNAMEASIDENTIFIER�");
  return true;
}

void �PROJECTNAMEASIDENTIFIER�::getProgramName(char *name) {
  strncpy(name, mProgramName, kProgramNameSize);
}

bool �PROJECTNAMEASIDENTIFIER�::getVendorString(char* text) {
  strcpy(text, "�ORGANIZATIONNAME�");
  return true;
}

VstInt32 �PROJECTNAMEASIDENTIFIER�::getVendorVersion() {
  return 1000;
}

void �PROJECTNAMEASIDENTIFIER�::setParameter(VstInt32 index, float value) {
  switch(index) {
    default:
      break;
  }
}

void �PROJECTNAMEASIDENTIFIER�::setProgramName(char *name) {
  strcpy(mProgramName, name, kProgramNameSize);
}