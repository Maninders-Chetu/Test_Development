/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.4.3

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "JuceLibraryCode/JuceHeader.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class DraggableVerticalLine  : public Component
{
public:
    //==============================================================================
    DraggableVerticalLine ();
    ~DraggableVerticalLine();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
	void setLimit(int y, int l, int r);
	static void setMainComponent(Component * maincomponent);
	void mouseDown(const MouseEvent& e) override;
	void mouseDrag(const MouseEvent& e) override;

    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	ComponentDragger myDragger;
	int leftLimit;
	int topPositionY;
	int rightLimit;
	Component *mainParentComponent;
    //[/UserVariables]

    //==============================================================================


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DraggableVerticalLine)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

