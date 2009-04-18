/*
 *  �PROJECTNAME� - �PROJECTNAME�.h
 *  Created by �FULLUSERNAME� on �DATE�
 *  Copyright (c) �YEAR� �ORGANIZATIONNAME�, All rights reserved
 */

#ifndef __�PROJECTNAMEASIDENTIFIER�_H
#define __�PROJECTNAMEASIDENTIFIER�_H

#ifndef __audioeffect__
#include "audioeffectx.h"
#endif

#ifndef __defaults_h__
#include "defaults.h"
#endif

class �PROJECTNAMEASIDENTIFIER� : public AudioEffectX {
public:
  �PROJECTNAMEASIDENTIFIER�(audioMasterCallback audioMaster);
  ~�PROJECTNAMEASIDENTIFIER�();
  
  virtual VstInt32 canDo(char *text);
  virtual bool getEffectName(char* name);
  
  virtual float getParameter(VstInt32 index);
  virtual void getParameterDisplay(VstInt32 index, char *text);
  virtual void getParameterLabel(VstInt32 index, char *label);
  virtual void getParameterName(VstInt32 index, char *text);
  virtual VstPlugCategory getPlugCategory();
  
  virtual bool getProductString(char* text);
  virtual void getProgramName(char *name);
  virtual bool getVendorString(char* text);
  virtual VstInt32 getVendorVersion();
  
  virtual void processReplacing(float **inputs, float **outputs, VstInt32 sampleFrames);
  
  virtual void setParameter(VstInt32 index, float value);
  virtual void setProgramName(char *name);
  
private:
  char mProgramName[kProgramNameSize];
};

#endif
