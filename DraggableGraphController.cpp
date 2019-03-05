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

//[Headers] You can add your own extra header files here...
#include "EquilizerGraph.h"
//[/Headers]

#include "DraggableGraphController.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...

//[/MiscUserDefs]

//==============================================================================
DraggableGraphController::DraggableGraphController ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]


    //[UserPreSize]
    //[/UserPreSize]

    setSize (10, 10);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

DraggableGraphController::~DraggableGraphController()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void DraggableGraphController::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
	g.fillAll(Colours::transparentBlack);

	if(false)
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    {
        float x = 0.0f, y = 0.0f, width = 10.0f, height = 10.0f;
        Colour fillColour = Colour (0xff2aa558);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillEllipse (x, y, width, height);
    }

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void DraggableGraphController::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void DraggableGraphController::mouseDown (const MouseEvent& e)
{
    //[UserCode_mouseDown] -- Add your code here...
	myDragger.startDraggingComponent(this, e);

    //[/UserCode_mouseDown]
}

void DraggableGraphController::mouseDrag (const MouseEvent& e)
{
    //[UserCode_mouseDrag] -- Add your code here...
	myDragger.dragComponent(this, e, nullptr);

	int Y = getY();
	int X = getX();

	if (Y > getParentComponent()->getHeight()-getHeight())
		Y = getParentComponent()->getHeight() - getHeight();

	if (Y < 0)
		Y = 1;

	if (X > getParentComponent()->getWidth()-getWidth())
		X = getParentComponent()->getWidth() - getWidth();

	if (X < 0)
		X = 1;


	EquilizerGraph* cc = findParentComponentOfClass<EquilizerGraph>();
	cc->updateGraphData(this->getName(),getX(),getY());

	setTopLeftPosition(X, Y);



    //[/UserCode_mouseDrag]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="DraggableGraphController"
                 componentName="" parentClasses="public Component" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.33" fixedSize="1" initialWidth="10" initialHeight="10">
  <METHODS>
    <METHOD name="mouseDown (const MouseEvent&amp; e)"/>
    <METHOD name="mouseDrag (const MouseEvent&amp; e)"/>
  </METHODS>
  <BACKGROUND backgroundColour="ff323e44">
    <ELLIPSE pos="0 0 10 10" fill="solid: ff2aa558" hasStroke="0"/>
  </BACKGROUND>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
