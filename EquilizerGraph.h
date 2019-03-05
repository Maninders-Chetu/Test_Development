/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.4.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "JuceLibraryCode/JuceHeader.h"
#include "Source/EQCurve.h"
//#include "Source/EQRoutingComponent.h"
//#include"Theme.h"
//[/Headers]

#include "DraggableGraphController.h"
#include "DraggableGraphController.h"
#include "DraggableGraphController.h"
#include "DraggableGraphController.h"
#include "DraggableGraphController.h"
#include "DraggableGraphController.h"
#include "DraggableGraphController.h"
#include "DraggableGraphController.h"
#include "DraggableGraphController.h"
#include "DraggableGraphController.h"


//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class EquilizerGraph  : public Component
{
public:
    //==============================================================================
    EquilizerGraph ();
    ~EquilizerGraph();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
	void resetGraph();
	void setGrapthControllerValue(int value, String sliderName);
	void setGrapthControllerPosition(float value, String textEditorName);
	uint8_t makeFilters(T_EQGroup);
	void	drawCurve(void);
	void preparePoints();
	void updateGraphData(String sliderName, int x, int y);
	float calculateFrequency(int x);
	float calculateGain(int y);
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void mouseDown (const MouseEvent& e) override;
    void mouseDrag (const MouseEvent& e) override;
    void mouseUp (const MouseEvent& e) override;

    // Binary resources:
    static const char* dw_eq_jpg;
    static const int dw_eq_jpgSize;
    static const char* dw_eq_jpg2;
    static const int dw_eq_jpg2Size;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	float phase = 0.0f;
	float phaseDelta = 0.0f;
	float frequency = 5000.0f;
	float amplitude = 0.2f;
	Point<float> lastMousePosition;

	double sampleRate = 0.0;
public:
	T_EQGroup EQG;
    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<DraggableGraphController> fGraphController1;
    std::unique_ptr<DraggableGraphController> fGraphController2;
    std::unique_ptr<DraggableGraphController> fGraphController3;
    std::unique_ptr<DraggableGraphController> fGraphController4;
    std::unique_ptr<DraggableGraphController> fGraphController5;
    std::unique_ptr<DraggableGraphController> fGraphController6;
    std::unique_ptr<DraggableGraphController> fGraphController7;
    std::unique_ptr<DraggableGraphController> fGraphController8;
    std::unique_ptr<DraggableGraphController> fGraphController9;
    std::unique_ptr<DraggableGraphController> fGraphController10;
    std::unique_ptr<Label> flable30;
    std::unique_ptr<Label> flable50;
    std::unique_ptr<Label> flable40;
    std::unique_ptr<Label> flable60;
    std::unique_ptr<Label> flable70;
    std::unique_ptr<Label> flable80;
    std::unique_ptr<Label> flable100;
    std::unique_ptr<Label> flable200;
    std::unique_ptr<Label> flable300;
    std::unique_ptr<Label> flable400;
    std::unique_ptr<Label> flable500;
    std::unique_ptr<Label> flable700;
    std::unique_ptr<Label> flable1k;
    std::unique_ptr<Label> flable2k;
    std::unique_ptr<Label> flable3k;
    std::unique_ptr<Label> flable4k;
    std::unique_ptr<Label> flable5k;
    std::unique_ptr<Label> flable6k;
    std::unique_ptr<Label> flable7k;
    std::unique_ptr<Label> flable8k;
    std::unique_ptr<Label> flable10k;
    std::unique_ptr<Label> flable20k;
    std::unique_ptr<Label> flable30k;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (EquilizerGraph)
};

//[EndFile] You can add extra defines here...
//[/EndFile]
