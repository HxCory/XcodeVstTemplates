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
  if(audioMaster != NULL) {
    setNumInputs(kNumInputs);
    setNumOutputs(kNumOutputs);
    setUniqueID(kUniqueId);
    canProcessReplacing();
    isSynth();
  }
  
  suspend();
}

�PROJECTNAMEASIDENTIFIER�::~�PROJECTNAMEASIDENTIFIER�() {
}

VstInt32 �PROJECTNAMEASIDENTIFIER�::canDo(char *text) {
  // TODO: Fill in according to your plugin's capabilities
  if(!strcmp(text, "receiveVstEvents")) {
		return 1;
  }
  else if(!strcmp(text, "receiveVstMidiEvent")) {
		return 1;
  }
	else if(!strcmp(text, "midiProgramNames")) {
		return 1;
  }
  
  // -1 => explicitly can't do; 0 => don't know
	return 0;
}

bool �PROJECTNAMEASIDENTIFIER�::copyProgram(long destination) {
  // TODO: Copy program to destination
  return false;
}

VstInt32 �PROJECTNAMEASIDENTIFIER�::getCurrentMidiProgram(VstInt32 channel, MidiProgramName *mpn) {
	VstInt32 prg = 0;
  // TODO: Look up your current MIDI program and fill the MidiProgramName with it
	return prg;
}

bool �PROJECTNAMEASIDENTIFIER�::getEffectName(char* name) {
  strncpy(name, "�PROJECTNAME�", kVstMaxEffectNameLen);
  return true;
}

bool �PROJECTNAMEASIDENTIFIER�::getMidiKeyName(VstInt32 channel, MidiKeyName *key) {
	// TODO: Fill in this information
  // key->thisProgramIndex;		// >= 0. fill struct for this program index.
	// key->thisKeyNumber;			// 0 - 127. fill struct for this key number.
	key->keyName[0] = 0;
	key->reserved = 0;				// zero
	key->flags = 0;					// reserved, none defined yet, zero.
	return true;
}

VstInt32 �PROJECTNAMEASIDENTIFIER�::getMidiProgramCategory(VstInt32 channel, MidiProgramCategory *category) {
  // TODO: Get the MIDI program category
	return 0;
}

VstInt32 �PROJECTNAMEASIDENTIFIER�::getMidiProgramName(VstInt32 channel, MidiProgramName *mpn) {
  // TODO: Return the MIDI program name
  return 0;
}

VstInt32 �PROJECTNAMEASIDENTIFIER�::getNumMidiInputChannels() {
  // TODO: Change this value for polyphonic synths
  return 1;
}

VstInt32 �PROJECTNAMEASIDENTIFIER�::getNumMidiOutputChannels() {
  // TODO: Change this value if you are sending MIDI output back to the host
  return 0;
}

bool �PROJECTNAMEASIDENTIFIER�::getOutputProperties(VstInt32 index, VstPinProperties *properties) {
  if(index < kNumOutputs) {
    sprintf(properties->label, "%1ld Out", index + 1);
		properties->flags = kVstPinIsActive;
		if(index < 2) {
			properties->flags |= kVstPinIsStereo;
    }
    return true;
  }
  return false;
}

float �PROJECTNAMEASIDENTIFIER�::getParameter(VstInt32 index) {
  // TODO: Get parameter value for index
  return 0.0;
}

void �PROJECTNAMEASIDENTIFIER�::getParameterDisplay(VstInt32 index, char *text) {
  // TODO: Get parameter display for index
}

void �PROJECTNAMEASIDENTIFIER�::getParameterLabel(VstInt32 index, char *text) {
  // TODO: Get parameter label for index
}

void �PROJECTNAMEASIDENTIFIER�::getParameterName(VstInt32 index, char *text) {
  // TODO: Get parameter name for index
}

VstPlugCategory �PROJECTNAMEASIDENTIFIER�::getPlugCategory() { 
  return kPlugCategSynth;
}

bool �PROJECTNAMEASIDENTIFIER�::getProductString(char* text) {
  // TODO: Replace with actual description of your synth
  strncpy(text, "�PROJECTNAME�", kVstMaxProductStrLen);
  return true;
}

void �PROJECTNAMEASIDENTIFIER�::getProgramName(char *name) {
  // TODO: Copy active program name into "name" string
}

bool �PROJECTNAMEASIDENTIFIER�::getProgramNameIndexed(VstInt32 category, VstInt32 index, char *text) {
  // TODO: Return program name for index
  return false;
}

bool �PROJECTNAMEASIDENTIFIER�::getVendorString(char* text) {
  strncpy(text, "�ORGANIZATIONNAME�", kVstMaxVendorStrLen);
  return true;
}

VstInt32 �PROJECTNAMEASIDENTIFIER�::getVendorVersion() {
  // TODO: Return actual version of this plugin
  return 1000;
}

bool �PROJECTNAMEASIDENTIFIER�::hasMidiProgramsChanged(VstInt32 channel) {
  // TODO: Return true/false if the MIDI programs have changed
  return false;
}

void �PROJECTNAMEASIDENTIFIER�::setBlockSize(VstInt32 blockSize) {
  // TODO: Handle this call if necessary
	AudioEffectX::setBlockSize(blockSize);
}

void �PROJECTNAMEASIDENTIFIER�::setParameter(VstInt32 index, float value) {
  // TODO: Set parameter value for index
}

void �PROJECTNAMEASIDENTIFIER�::setProgram(VstInt32 index) {
  // TOOD: Set local variables based on program parameters
}

void �PROJECTNAMEASIDENTIFIER�::setProgramName(char *name) {
  // TODO: Set program name
}

void �PROJECTNAMEASIDENTIFIER�::setSampleRate(float sampleRate) {
  // TODO: Handle this call if necessary
	AudioEffectX::setSampleRate(sampleRate);
}