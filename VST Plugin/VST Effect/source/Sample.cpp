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
: AudioEffectX(audioMaster, kNumPrograms, kNumParameters) {
  setNumInputs(kNumInputs);
  setNumOutputs(kNumOutputs);
  setUniqueID(kUniqueId);
}

�PROJECTNAMEASIDENTIFIER�::~�PROJECTNAMEASIDENTIFIER�() {
}

VstInt32 �PROJECTNAMEASIDENTIFIER�::canDo(char *text) {
  // TODO: Fill in according to your plugin's capabilities
  return 0;
}

bool �PROJECTNAMEASIDENTIFIER�::getEffectName(char* name) {
  strncpy(name, "�PROJECTNAMEASIDENTIFIER�", kVstMaxProductStrLen);
  return true;
}

float �PROJECTNAMEASIDENTIFIER�::getParameter(VstInt32 index) {
  // TODO: Get parameter value for index
  return 0.0;
}

void �PROJECTNAMEASIDENTIFIER�::getParameterDisplay(VstInt32 index, char *text) {
  // TODO: Get parameter name for index
}

void �PROJECTNAMEASIDENTIFIER�::getParameterLabel(VstInt32 index, char *text) {
  // TODO: Get parameter value label for index
}

void �PROJECTNAMEASIDENTIFIER�::getParameterName(VstInt32 index, char *text) {
  // TODO: Get parameter name for index
}

VstPlugCategory �PROJECTNAMEASIDENTIFIER�::getPlugCategory() {
  return kPlugCategEffect;
}

bool �PROJECTNAMEASIDENTIFIER�::getProductString(char* text) {
  strcpy(text, "�PROJECTNAMEASIDENTIFIER�");
  return true;
}

void �PROJECTNAMEASIDENTIFIER�::getProgramName(char *name) {
  // TODO: Get the current program name
}

bool �PROJECTNAMEASIDENTIFIER�::getVendorString(char* text) {
  strcpy(text, "�ORGANIZATIONNAME�");
  return true;
}

VstInt32 �PROJECTNAMEASIDENTIFIER�::getVendorVersion() {
  // TODO: Get plugin version
  return 1000;
}

void �PROJECTNAMEASIDENTIFIER�::setParameter(VstInt32 index, float value) {
  // TODO: Set parameter value for index
}

void �PROJECTNAMEASIDENTIFIER�::setProgramName(char *name) {
  // TODO: Set current program's name
}