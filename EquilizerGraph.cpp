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
#include "Source/EQRoutingComponent.h"
//[/Headers]

#include "EquilizerGraph.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
EquilizerGraph::EquilizerGraph ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    fGraphController1.reset (new DraggableGraphController());
    addAndMakeVisible (fGraphController1.get());
    fGraphController1->setBounds (35, 118, 10, 10);

    fGraphController2.reset (new DraggableGraphController());
    addAndMakeVisible (fGraphController2.get());
    fGraphController2->setBounds (109, 118, 10, 10);

    fGraphController3.reset (new DraggableGraphController());
    addAndMakeVisible (fGraphController3.get());
    fGraphController3->setBounds (185, 118, 10, 10);

    fGraphController4.reset (new DraggableGraphController());
    addAndMakeVisible (fGraphController4.get());
    fGraphController4->setBounds (251, 118, 10, 10);

    fGraphController5.reset (new DraggableGraphController());
    addAndMakeVisible (fGraphController5.get());
    fGraphController5->setBounds (316, 118, 10, 10);

    fGraphController6.reset (new DraggableGraphController());
    addAndMakeVisible (fGraphController6.get());
    fGraphController6->setBounds (400, 118, 10, 10);

    fGraphController7.reset (new DraggableGraphController());
    addAndMakeVisible (fGraphController7.get());
    fGraphController7->setBounds (470, 118, 10, 10);

    fGraphController8.reset (new DraggableGraphController());
    addAndMakeVisible (fGraphController8.get());
    fGraphController8->setBounds (533, 118, 10, 10);

    fGraphController9.reset (new DraggableGraphController());
    addAndMakeVisible (fGraphController9.get());
    fGraphController9->setBounds (607, 118, 10, 10);

    fGraphController10.reset (new DraggableGraphController());
    addAndMakeVisible (fGraphController10.get());
    fGraphController10->setBounds (678, 118, 10, 10);

    flable30.reset (new Label ("new label",
                               String()));
    addAndMakeVisible (flable30.get());
    flable30->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    flable30->setJustificationType (Justification::centredLeft);
    flable30->setEditable (false, false, false);
    flable30->setColour (Label::backgroundColourId, Colour (0x00020000));
    flable30->setColour (Label::outlineColourId, Colours::green);
    flable30->setColour (TextEditor::textColourId, Colours::black);
    flable30->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    flable30->setBounds (49, 0, 1, 246);

    flable50.reset (new Label ("new label",
                               String()));
    addAndMakeVisible (flable50.get());
    flable50->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    flable50->setJustificationType (Justification::centredLeft);
    flable50->setEditable (false, false, false);
    flable50->setColour (Label::outlineColourId, Colours::green);
    flable50->setColour (TextEditor::textColourId, Colours::black);
    flable50->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    flable50->setBounds (104, 0, 1, 246);

    flable40.reset (new Label ("new label",
                               String()));
    addAndMakeVisible (flable40.get());
    flable40->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    flable40->setJustificationType (Justification::centredLeft);
    flable40->setEditable (false, false, false);
    flable40->setColour (Label::backgroundColourId, Colour (0x00020000));
    flable40->setColour (Label::outlineColourId, Colours::green);
    flable40->setColour (TextEditor::textColourId, Colours::black);
    flable40->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    flable40->setBounds (80, 0, 1, 246);

    flable60.reset (new Label ("new label",
                               String()));
    addAndMakeVisible (flable60.get());
    flable60->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    flable60->setJustificationType (Justification::centredLeft);
    flable60->setEditable (false, false, false);
    flable60->setColour (Label::outlineColourId, Colours::green);
    flable60->setColour (TextEditor::textColourId, Colours::black);
    flable60->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    flable60->setBounds (125, 0, 1, 246);

    flable70.reset (new Label ("new label",
                               String()));
    addAndMakeVisible (flable70.get());
    flable70->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    flable70->setJustificationType (Justification::centredLeft);
    flable70->setEditable (false, false, false);
    flable70->setColour (Label::outlineColourId, Colours::green);
    flable70->setColour (TextEditor::textColourId, Colours::black);
    flable70->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    flable70->setBounds (141, 0, 1, 246);

    flable80.reset (new Label ("new label",
                               String()));
    addAndMakeVisible (flable80.get());
    flable80->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    flable80->setJustificationType (Justification::centredLeft);
    flable80->setEditable (false, false, false);
    flable80->setColour (Label::outlineColourId, Colours::green);
    flable80->setColour (TextEditor::textColourId, Colours::black);
    flable80->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    flable80->setBounds (156, 0, 1, 246);

    flable100.reset (new Label ("new label",
                                String()));
    addAndMakeVisible (flable100.get());
    flable100->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    flable100->setJustificationType (Justification::centredLeft);
    flable100->setEditable (false, false, false);
    flable100->setColour (Label::outlineColourId, Colours::green);
    flable100->setColour (TextEditor::textColourId, Colours::black);
    flable100->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    flable100->setBounds (180, 0, 1, 246);

    flable200.reset (new Label ("new label",
                                String()));
    addAndMakeVisible (flable200.get());
    flable200->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    flable200->setJustificationType (Justification::centredLeft);
    flable200->setEditable (false, false, false);
    flable200->setColour (Label::outlineColourId, Colours::green);
    flable200->setColour (TextEditor::textColourId, Colours::black);
    flable200->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    flable200->setBounds (255, 0, 1, 246);

    flable300.reset (new Label ("new label",
                                String()));
    addAndMakeVisible (flable300.get());
    flable300->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    flable300->setJustificationType (Justification::centredLeft);
    flable300->setEditable (false, false, false);
    flable300->setColour (Label::outlineColourId, Colours::green);
    flable300->setColour (TextEditor::textColourId, Colours::black);
    flable300->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    flable300->setBounds (298, 0, 1, 246);

    flable400.reset (new Label ("new label",
                                String()));
    addAndMakeVisible (flable400.get());
    flable400->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    flable400->setJustificationType (Justification::centredLeft);
    flable400->setEditable (false, false, false);
    flable400->setColour (Label::outlineColourId, Colours::green);
    flable400->setColour (TextEditor::textColourId, Colours::black);
    flable400->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    flable400->setBounds (329, 0, 1, 246);

    flable500.reset (new Label ("new label",
                                String()));
    addAndMakeVisible (flable500.get());
    flable500->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    flable500->setJustificationType (Justification::centredLeft);
    flable500->setEditable (false, false, false);
    flable500->setColour (Label::outlineColourId, Colours::green);
    flable500->setColour (TextEditor::textColourId, Colours::black);
    flable500->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    flable500->setBounds (353, 0, 1, 246);

    flable700.reset (new Label ("new label",
                                String()));
    addAndMakeVisible (flable700.get());
    flable700->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    flable700->setJustificationType (Justification::centredLeft);
    flable700->setEditable (false, false, false);
    flable700->setColour (Label::outlineColourId, Colours::green);
    flable700->setColour (TextEditor::textColourId, Colours::black);
    flable700->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    flable700->setBounds (389, 0, 1, 246);

    flable1k.reset (new Label ("new label",
                               String()));
    addAndMakeVisible (flable1k.get());
    flable1k->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    flable1k->setJustificationType (Justification::centredLeft);
    flable1k->setEditable (false, false, false);
    flable1k->setColour (Label::outlineColourId, Colours::green);
    flable1k->setColour (TextEditor::textColourId, Colours::black);
    flable1k->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    flable1k->setBounds (429, 0, 1, 246);

    flable2k.reset (new Label ("new label",
                               String()));
    addAndMakeVisible (flable2k.get());
    flable2k->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    flable2k->setJustificationType (Justification::centredLeft);
    flable2k->setEditable (false, false, false);
    flable2k->setColour (Label::outlineColourId, Colours::green);
    flable2k->setColour (TextEditor::textColourId, Colours::black);
    flable2k->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    flable2k->setBounds (502, 0, 1, 246);

    flable3k.reset (new Label ("new label",
                               String()));
    addAndMakeVisible (flable3k.get());
    flable3k->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    flable3k->setJustificationType (Justification::centredLeft);
    flable3k->setEditable (false, false, false);
    flable3k->setColour (Label::outlineColourId, Colours::green);
    flable3k->setColour (TextEditor::textColourId, Colours::black);
    flable3k->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    flable3k->setBounds (545, 0, 1, 246);

    flable4k.reset (new Label ("new label",
                               String()));
    addAndMakeVisible (flable4k.get());
    flable4k->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    flable4k->setJustificationType (Justification::centredLeft);
    flable4k->setEditable (false, false, false);
    flable4k->setColour (Label::outlineColourId, Colours::green);
    flable4k->setColour (TextEditor::textColourId, Colours::black);
    flable4k->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    flable4k->setBounds (576, 0, 1, 246);

    flable5k.reset (new Label ("new label",
                               String()));
    addAndMakeVisible (flable5k.get());
    flable5k->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    flable5k->setJustificationType (Justification::centredLeft);
    flable5k->setEditable (false, false, false);
    flable5k->setColour (Label::outlineColourId, Colours::green);
    flable5k->setColour (TextEditor::textColourId, Colours::black);
    flable5k->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    flable5k->setBounds (602, 0, 1, 246);

    flable6k.reset (new Label ("new label",
                               String()));
    addAndMakeVisible (flable6k.get());
    flable6k->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    flable6k->setJustificationType (Justification::centredLeft);
    flable6k->setEditable (false, false, false);
    flable6k->setColour (Label::outlineColourId, Colours::green);
    flable6k->setColour (TextEditor::textColourId, Colours::black);
    flable6k->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    flable6k->setBounds (623, 0, 1, 246);

    flable7k.reset (new Label ("new label",
                               String()));
    addAndMakeVisible (flable7k.get());
    flable7k->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    flable7k->setJustificationType (Justification::centredLeft);
    flable7k->setEditable (false, false, false);
    flable7k->setColour (Label::outlineColourId, Colours::green);
    flable7k->setColour (TextEditor::textColourId, Colours::black);
    flable7k->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    flable7k->setBounds (639, 0, 1, 246);

    flable8k.reset (new Label ("new label",
                               String()));
    addAndMakeVisible (flable8k.get());
    flable8k->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    flable8k->setJustificationType (Justification::centredLeft);
    flable8k->setEditable (false, false, false);
    flable8k->setColour (Label::outlineColourId, Colours::green);
    flable8k->setColour (TextEditor::textColourId, Colours::black);
    flable8k->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    flable8k->setBounds (654, 0, 1, 246);

    flable10k.reset (new Label ("new label",
                                String()));
    addAndMakeVisible (flable10k.get());
    flable10k->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    flable10k->setJustificationType (Justification::centredLeft);
    flable10k->setEditable (false, false, false);
    flable10k->setColour (Label::outlineColourId, Colours::green);
    flable10k->setColour (TextEditor::textColourId, Colours::black);
    flable10k->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    flable10k->setBounds (678, 0, 1, 246);

    flable20k.reset (new Label ("new label",
                                String()));
    addAndMakeVisible (flable20k.get());
    flable20k->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    flable20k->setJustificationType (Justification::centredLeft);
    flable20k->setEditable (false, false, false);
    flable20k->setColour (Label::outlineColourId, Colours::green);
    flable20k->setColour (TextEditor::textColourId, Colours::black);
    flable20k->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    flable20k->setBounds (754, 0, 1, 246);

    flable30k.reset (new Label ("new label",
                                String()));
    addAndMakeVisible (flable30k.get());
    flable30k->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    flable30k->setJustificationType (Justification::centredLeft);
    flable30k->setEditable (false, false, false);
    flable30k->setColour (Label::outlineColourId, Colours::green);
    flable30k->setColour (TextEditor::textColourId, Colours::black);
    flable30k->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    flable30k->setBounds (773, 0, 1, 246);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (773, 246);


    //[Constructor] You can add your own custom stuff here..
	frequency = 0;
	fGraphController1->setName("fGraphController1");
	fGraphController2->setName("fGraphController2");
	fGraphController3->setName("fGraphController3");
	fGraphController4->setName("fGraphController4");
	fGraphController5->setName("fGraphController5");
	fGraphController6->setName("fGraphController6");
	fGraphController7->setName("fGraphController7");
	fGraphController8->setName("fGraphController8");
	fGraphController9->setName("fGraphController9");
	fGraphController10->setName("fGraphController10");

	preparePoints();
    //[/Constructor]
}

EquilizerGraph::~EquilizerGraph()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    fGraphController1 = nullptr;
    fGraphController2 = nullptr;
    fGraphController3 = nullptr;
    fGraphController4 = nullptr;
    fGraphController5 = nullptr;
    fGraphController6 = nullptr;
    fGraphController7 = nullptr;
    fGraphController8 = nullptr;
    fGraphController9 = nullptr;
    fGraphController10 = nullptr;
    flable30 = nullptr;
    flable50 = nullptr;
    flable40 = nullptr;
    flable60 = nullptr;
    flable70 = nullptr;
    flable80 = nullptr;
    flable100 = nullptr;
    flable200 = nullptr;
    flable300 = nullptr;
    flable400 = nullptr;
    flable500 = nullptr;
    flable700 = nullptr;
    flable1k = nullptr;
    flable2k = nullptr;
    flable3k = nullptr;
    flable4k = nullptr;
    flable5k = nullptr;
    flable6k = nullptr;
    flable7k = nullptr;
    flable8k = nullptr;
    flable10k = nullptr;
    flable20k = nullptr;
    flable30k = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void EquilizerGraph::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..

	// (Our component is opaque, so we must completely fill the background with a solid colour)
	g.fillAll(getLookAndFeel().findColour(ResizableWindow::backgroundColourId));

	auto centreY = getHeight() / 2.0f;
	auto radius = amplitude * 200.0f;
	//makeFilters();
	preparePoints();

	//if (makeFilters() != 0)
	{
		int	iWidth = getWidth();             //Width;
		double *WBF = new double[iWidth];
		uint16_t	l;
		double yPos;
		int gcHight = fGraphController1->getHeight();
		int gcWidth = fGraphController1->getWidth();

		EQG.OutputAbsoluteValue(WBF);
		Path  wavePath;
		wavePath.startNewSubPath(0, getHeight() / 2 - WBF[0] * 8);
		for (l = 1;l<iWidth;l++)
		{

			yPos = getHeight() / 2 - WBF[l] * 8;

			wavePath.lineTo(l, yPos);
			if (yPos >= getHeight() / 2 - gcHight / 2)
				yPos -= gcHight / 2;
			else
				yPos += gcHight / 2;

			if (l == fGraphController1->getX())
			{
				fGraphController1->setTopLeftPosition(l, yPos);
			}
			if (l == fGraphController2->getX())
			{
				fGraphController2->setTopLeftPosition(l, yPos);
			}
			if (l == fGraphController3->getX())
			{
				fGraphController3->setTopLeftPosition(l, yPos);
			}
			if (l == fGraphController4->getX())
			{
				fGraphController4->setTopLeftPosition(l, yPos);

			}
			if (l == fGraphController5->getX())
			{
				fGraphController5->setTopLeftPosition(l, yPos);
			}
			if (l == fGraphController6->getX())
			{
				fGraphController6->setTopLeftPosition(l, yPos);
			}
			if (l == fGraphController7->getX())
			{
				fGraphController7->setTopLeftPosition(l, yPos);

			}
			if (l == fGraphController8->getX())
			{
				fGraphController8->setTopLeftPosition(l, yPos);
			}
			if (l == fGraphController9->getX())
			{
				fGraphController9->setTopLeftPosition(l, yPos);

			}
			if (l == fGraphController10->getX())
			{
				fGraphController10->setTopLeftPosition(l, yPos);
			}

		}

		g.setColour(getLookAndFeel().findColour(Slider::thumbColourId));
		g.strokePath(wavePath, PathStrokeType(2.0f));
		delete WBF;

	}
		//drawCurve();

    //[/UserPaint]
}

void EquilizerGraph::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void EquilizerGraph::mouseDown (const MouseEvent& e)
{
    //[UserCode_mouseDown] -- Add your code here...
	mouseDrag(e);

    //[/UserCode_mouseDown]
}

void EquilizerGraph::mouseDrag (const MouseEvent& e)
{
    //[UserCode_mouseDrag] -- Add your code here...
	/*lastMousePosition = e.position;

	frequency = (getHeight() - e.y) * 10.0f;
	amplitude = jmin(0.9f, 0.2f * e.position.x / getWidth());

	phaseDelta = (float)(MathConstants<double>::twoPi * frequency / sampleRate);

	repaint();*/
    //[/UserCode_mouseDrag]
}

void EquilizerGraph::mouseUp (const MouseEvent& e)
{
    //[UserCode_mouseUp] -- Add your code here...
	//amplitude = 0.0f;
	//repaint();
    //[/UserCode_mouseUp]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
float EquilizerGraph::calculateGain(int y)
{
	float gainValue;
	float halfhight = (getHeight() / 2);
	if (y > halfhight)
	{
		gainValue = (halfhight - y) * 50.0f / halfhight;
		return gainValue;
	}
	else
	{
		gainValue = (halfhight - y) * 50.0f / halfhight;
		return gainValue;
	}
}

float EquilizerGraph::calculateFrequency(int x)
{
	float frequency = 0.0f;
	int fGControllerWidthEffect = fGraphController1->getWidth() / 2;
	if (x >= 0 && x < flable30->getX())
	{
		frequency = 30.0f / flable30->getX() * (x + fGControllerWidthEffect);
	}
	else if (x >= flable30->getX() && x < flable40->getX())
	{
		frequency = 30 + (x + fGControllerWidthEffect - flable30->getX()) * 10.0f / (flable40->getX() - flable30->getX());
	}
	else if (x >= flable40->getX() && x < flable50->getX())
	{
		frequency = 40 + (x + fGControllerWidthEffect - flable40->getX()) * 10.0f / (flable50->getX() - flable40->getX());
	}
	else if (x >= flable50->getX() && x < flable60->getX())
	{
		frequency = 50 + (x + fGControllerWidthEffect - flable50->getX()) * 10.0f / (flable60->getX() - flable50->getX());
	}
	else if (x >= flable60->getX() && x < flable70->getX())
	{
		frequency = 60 + (x + fGControllerWidthEffect - flable60->getX()) * 10.0f / (flable70->getX() - flable60->getX());
	}
	else if (x >= flable70->getX() && x < flable80->getX())
	{
		frequency = 70 + (x + fGControllerWidthEffect - flable70->getX()) * 10.0f / (flable80->getX() - flable70->getX());
	}
	else if (x >= flable80->getX() && x < flable100->getX())
	{
		frequency = 80 + (x + fGControllerWidthEffect - flable80->getX()) * 20.0f / (flable100->getX() - flable80->getX());
	}
	else if (x >= flable100->getX() && x < flable200->getX())
	{
		frequency = 100 + (x + fGControllerWidthEffect - flable100->getX()) * 100.0f / (flable200->getX() - flable100->getX());
	}
	else if (x >= flable200->getX() && x < flable300->getX())
	{
		frequency = 200 + (x + fGControllerWidthEffect - flable200->getX()) * 100.0f / (flable300->getX() - flable200->getX());
	}
	else if (x >= flable300->getX() && x < flable400->getX())
	{
		frequency = 300 + (x + fGControllerWidthEffect - flable300->getX()) * 100.0f / (flable400->getX() - flable300->getX());
	}
	else if (x >= flable400->getX() && x < flable500->getX())
	{
		frequency = 400 + (x + fGControllerWidthEffect - flable400->getX()) * 100.0f / (flable500->getX() - flable400->getX());
	}
	else if (x >= flable500->getX() && x < flable700->getX())
	{
		frequency = 500 + (x + fGControllerWidthEffect - flable500->getX()) * 200.0f / (flable700->getX() - flable500->getX());
	}
	else if (x >= flable700->getX() && x < flable1k->getX())
	{
		frequency = 700 + (x + fGControllerWidthEffect - flable700->getX()) * 300.0f / (flable1k->getX() - flable700->getX());
	}
	else if (x >= flable1k->getX() && x < flable2k->getX())
	{
		frequency = 1000 + (x + fGControllerWidthEffect - flable1k->getX()) * 1000.0f / (flable2k->getX() - flable1k->getX());
	}
	else if (x >= flable2k->getX() && x < flable3k->getX())
	{
		frequency = 2000 + (x + fGControllerWidthEffect - flable2k->getX()) * 1000.0f / (flable3k->getX() - flable2k->getX());
	}
	else if (x >= flable3k->getX() && x < flable4k->getX())
	{
		frequency = 3000 + (x + fGControllerWidthEffect - flable3k->getX()) * 1000.0f / (flable4k->getX() - flable3k->getX());
	}
	else if (x >= flable4k->getX() && x < flable5k->getX())
	{
		frequency = 4000 + (x + fGControllerWidthEffect - flable4k->getX()) * 1000.0f / (flable5k->getX() - flable4k->getX());
	}
	else if (x >= flable5k->getX() && x < flable6k->getX())
	{
		frequency = 5000 + (x + fGControllerWidthEffect - flable5k->getX()) * 1000.0f / (flable6k->getX() - flable5k->getX());
	}
	else if (x >= flable6k->getX() && x < flable7k->getX())
	{
		frequency = 6000 + (x + fGControllerWidthEffect - flable6k->getX()) * 1000.0f / (flable7k->getX() - flable6k->getX());
	}
	else if (x >= flable7k->getX() && x < flable8k->getX())
	{
		frequency = 7000 + (x + fGControllerWidthEffect - flable7k->getX()) * 1000.0f / (flable8k->getX() - flable7k->getX());
	}
	else if (x >= flable8k->getX() && x < flable10k->getX())
	{
		frequency = 8000 + (x + fGControllerWidthEffect - flable8k->getX()) * 2000.0f / (flable10k->getX() - flable8k->getX());
	}
	else if (x >= flable10k->getX() && x < flable20k->getX())
	{
		frequency = 10000 + (x + fGControllerWidthEffect - flable10k->getX()) * 10000.0f / (flable20k->getX() - flable10k->getX());
	}
	else if (x >= flable20k->getX() && x < flable30k->getX())
	{
		frequency = 20000 + (x + fGControllerWidthEffect - flable20k->getX()) * 10000.0f / (flable30k->getX() - flable20k->getX());
	}
	return frequency;
}

void EquilizerGraph::resetGraph()
{
	T_EqualizerUnit EQV;
	/*EQV.Frequency = 0;
	EQV.Gain = 0;
	EQV.Quality = 1;
	EQV.Bypass = 0;
	EQV.Type = T_EqualizerUnit::Filter_Peak;
	EQG.SetFilter(0, &EQV);

	EQV.Frequency = 0;
	EQV.Gain = 0;
	EQV.Quality = 1;
	EQG.SetFilter(1, &EQV);

	EQV.Frequency = 0;
	EQV.Gain = 0;
	EQV.Quality = 1;
	EQG.SetFilter(2, &EQV);

	EQV.Frequency = 0;
	EQV.Gain = 0;
	EQV.Quality = 1;
	EQG.SetFilter(3, &EQV);

	EQV.Frequency = 0;
	EQV.Gain = 0;
	EQV.Quality = 1;
	EQG.SetFilter(4, &EQV);

	EQV.Frequency = 0;
	EQV.Gain = 0;
	EQV.Quality = 1;
	EQG.SetFilter(5, &EQV);

	EQV.Frequency = 0;
	EQV.Gain = 0;
	EQV.Quality = 1;
	EQG.SetFilter(6, &EQV);

	EQV.Frequency = 0;
	EQV.Gain = 0;
	EQV.Quality = 1;
	EQG.SetFilter(7, &EQV);

	EQV.Frequency = 0;
	EQV.Gain = 0;
	EQV.Quality = 1;
	EQG.SetFilter(8, &EQV);

	EQV.Frequency = 0;
	EQV.Gain = 0;
	EQV.Quality = 1;
	EQG.SetFilter(9, &EQV);*/
	makeFilters(EQG);
	repaint();

}

void EquilizerGraph::preparePoints()
{
	int	C = getWidth();
	uint16_t	*FP = new uint16_t[C];

	ProduceFrequencyArray(C, FP);
	EQG.SetXBar(C, FP);

	delete FP;
}

uint8_t EquilizerGraph::makeFilters(T_EQGroup pEQG)
{
	try
	{
		////ShowMessage("In Try MakeFilters(void)Start HERE()--------->");
		T_EqualizerUnit	EQV;
		EQG = pEQG;
		//repaint();
		/*EQV.Frequency = 100;
		EQV.Gain = 0;
		EQV.Quality = 1;
		EQV.Bypass = 0;
		EQV.Type = T_EqualizerUnit::Filter_Peak;
		EQG.SetFilter(0, &EQV);

		EQV.Frequency = 1000;
		EQV.Gain = 6;
		EQV.Quality = 1;
		EQG.SetFilter(1, &EQV);

		EQV.Frequency = 10000;
		EQV.Gain = 6;
		EQV.Quality = 1;
		EQG.SetFilter(2, &EQV);
		/*
		EQV.Frequency = slider1->getValue();
		EQV.Gain = (textEditor->getTextValue().toString()).getFloatValue();
		EQV.Quality = (textEditor2->getTextValue().toString()).getFloatValue();
		EQV.Bypass = 0;
		EQV.Type = T_EqualizerUnit::Filter_Peak;
		EQG.SetFilter(0, &EQV);

		EQV.Frequency = slider2->getValue();
		EQV.Gain = (textEditor3->getTextValue().toString()).getFloatValue();
		EQV.Quality = (textEditor4->getTextValue().toString()).getFloatValue();
		EQG.SetFilter(1, &EQV);

		EQV.Frequency = slider3->getValue();
		EQV.Gain = (textEditor5->getTextValue().toString()).getFloatValue();
		EQV.Quality = (textEditor6->getTextValue().toString()).getFloatValue();
		EQG.SetFilter(2, &EQV);

		EQV.Frequency = slider4->getValue();
		EQV.Gain = (textEditor7->getTextValue().toString()).getFloatValue();
		EQV.Quality = (textEditor8->getTextValue().toString()).getFloatValue();
		EQG.SetFilter(3, &EQV);

		EQV.Frequency = slider5->getValue();
		EQV.Gain = (textEditor9->getTextValue().toString()).getFloatValue();
		EQV.Quality = (textEditor10->getTextValue().toString()).getFloatValue();
		EQG.SetFilter(4, &EQV);

		EQV.Frequency = slider6->getValue();
		EQV.Gain = (textEditor11->getTextValue().toString()).getFloatValue();
		EQV.Quality = (textEditor12->getTextValue().toString()).getFloatValue();
		EQG.SetFilter(5, &EQV);

		EQV.Frequency = slider7->getValue();
		EQV.Gain = (textEditor13->getTextValue().toString()).getFloatValue();
		EQV.Quality = (textEditor14->getTextValue().toString()).getFloatValue();
		EQG.SetFilter(6, &EQV);

		EQV.Frequency = slider8->getValue();
		EQV.Gain = (textEditor15->getTextValue().toString()).getFloatValue();
		EQV.Quality = (textEditor16->getTextValue().toString()).getFloatValue();
		EQG.SetFilter(7, &EQV);

		EQV.Frequency = slider9->getValue();
		EQV.Gain = (textEditor17->getTextValue().toString()).getFloatValue();
		EQV.Quality = (textEditor18->getTextValue().toString()).getFloatValue();
		EQG.SetFilter(8, &EQV);

		EQV.Frequency = slider10->getValue();
		EQV.Gain = (textEditor19->getTextValue().toString()).getFloatValue();
		EQV.Quality = (textEditor20->getTextValue().toString()).getFloatValue();
		EQG.SetFilter(9, &EQV);
		*/

		return	1;
	}
	catch (...)
	{
		return 0;
	}
}

void EquilizerGraph::drawCurve()
{
	int	C = getWidth();             //Width;
	double *WBF = new double[C];
	uint16_t	l;

	EQG.OutputAbsoluteValue(WBF);
	Path  wavePath;
	wavePath.startNewSubPath(0, getHeight() / 2 - WBF[0] * 8);

	for (l = 1;l<C;l++)
	{
		wavePath.lineTo(l, getHeight() / 2 - WBF[l] * 8);

	}


	delete WBF;
}
void EquilizerGraph::setGrapthControllerValue(int value, String sliderName)
{
	float Y = (getHeight() / 2) -  (fGraphController1->getHeight()/2) ;

	 Y = Y +( (Y / 40) * (-value) );
	 if (sliderName.compare("1") == 0)
		 fGraphController1->setTopLeftPosition(fGraphController1->getX(), Y);
	 if (sliderName.compare("2") == 0)
		 fGraphController2->setTopLeftPosition(fGraphController2->getX(), Y);
	 if (sliderName.compare("3") == 0)
		 fGraphController3->setTopLeftPosition(fGraphController3->getX(), Y);
	 if (sliderName.compare("4") == 0)
		 fGraphController4->setTopLeftPosition(fGraphController4->getX(), Y);
	 if (sliderName.compare("5") == 0)
		 fGraphController5->setTopLeftPosition(fGraphController5->getX(), Y);
	 if (sliderName.compare("6") == 0)
		 fGraphController6->setTopLeftPosition(fGraphController6->getX(), Y);
	 if (sliderName.compare("7") == 0)
		 fGraphController7->setTopLeftPosition(fGraphController7->getX(), Y);
	 if (sliderName.compare("8") == 0)
		 fGraphController8->setTopLeftPosition(fGraphController8->getX(), Y);
	 if (sliderName.compare("9") == 0)
		 fGraphController9->setTopLeftPosition(fGraphController9->getX(), Y);
	 if (sliderName.compare("10") == 0)
		 fGraphController10->setTopLeftPosition(fGraphController10->getX(), Y);


	 repaint();
}
void EquilizerGraph::setGrapthControllerPosition(float value, String textEditorName)
{
	float X;
	if (value < 30)
	{
		X = flable30->getX() * value / 30.0f;
	}
	else if (value < 40)
	{
		X = flable30->getX() + (flable40->getX() - flable30->getX()) * (value-30) / 10.0f;
	}
	else if (value < 50)
	{
		X = flable40->getX() + (flable50->getX() - flable40->getX()) * (value - 40) / 10.0f;
	}
	else if (value < 60)
	{
		X = flable50->getX() + (flable60->getX() - flable50->getX()) * (value - 50) / 10.0f;
	}
	else if (value < 70)
	{
		X = flable60->getX() + (flable70->getX() - flable60->getX()) * (value - 60 ) / 10.0f;
	}
	else if (value < 80)
	{
		X = flable70->getX() + (flable80->getX() - flable70->getX()) * (value - 70) / 10.0f;
	}
	else if (value < 100)
	{
		X = flable80->getX() + (flable100->getX() - flable80->getX()) * (value - 80) / 20.0f;
	}
	else if (value < 200)
	{
		X = flable100->getX() + (flable200->getX() - flable100->getX()) * (value - 100) / 100.0f;
	}
	else if (value < 300)
	{
		X = flable200->getX() + (flable300->getX() - flable200->getX()) * (value - 200) / 100.0f;
	}
	else if (value < 400)
	{
		X = flable300->getX() + (flable400->getX() - flable300->getX()) * (value - 300) / 100.0f;
	}
	else if (value < 500)
	{
		X = flable400->getX() + (flable500->getX() - flable400->getX()) * (value - 400) / 100.0f;
	}
	else if (value < 700)
	{
		X = flable500->getX() + (flable700->getX() - flable500->getX()) * (value - 500) / 200.0f;
	}
	else if (value < 1000)
	{
		X = flable700->getX() + (flable1k->getX() - flable700->getX()) * (value - 700) / 300.0f;
	}
	else if (value < 2000)
	{
		X = flable1k->getX() + (flable2k->getX() - flable1k->getX()) * (value - 1000) / 1000.0f;
	}
	else if (value < 3000)
	{
		X = flable2k->getX() + (flable3k->getX() - flable2k->getX()) * (value  - 2000) / 1000.0f;
	}
	else if (value < 4000)
	{
		X = flable3k->getX() + (flable4k->getX() - flable3k->getX()) * (value - 3000) / 1000.0f;
	}
	else if (value < 5000)
	{
		X = flable4k->getX() + (flable5k->getX() - flable4k->getX()) * (value - 4000) / 1000.0f;
	}
	else if (value < 6000)
	{
		X = flable5k->getX() + (flable6k->getX() - flable5k->getX()) * (value  - 5000) / 1000.0f;
	}
	else if (value < 7000)
	{
		X = flable6k->getX() + (flable7k->getX() - flable6k->getX()) * (value - 6000) / 1000.0f;
	}
	else if (value < 8000)
	{
		X = flable7k->getX() + (flable8k->getX() - flable7k->getX()) * (value - 7000) / 1000.0f;
	}
	else if (value < 10000)
	{
		X = flable8k->getX() + (flable10k->getX() - flable8k->getX()) * (value - 8000) / 2000.0f;
	}
	else if (value < 20000)
	{
		X = flable10k->getX() + (flable20k->getX() - flable10k->getX()) * (value - 10000) / 10000.0f;
	}
	else if (value < 30000)
	{
		X = flable20k->getX() + (flable30k->getX() - flable20k->getX()) * (value - 20000) / 10000.0f;
	}

	if (textEditorName.compare("fTextEditorFrequency1") == 0)
	{
			fGraphController1->setTopLeftPosition(X, fGraphController1->getY());
	}
	if (textEditorName.compare("fTextEditorFrequency2") == 0)
	{
		fGraphController2->setTopLeftPosition(X, fGraphController2->getY());
	}
	if (textEditorName.compare("fTextEditorFrequency3") == 0)
	{
		fGraphController3->setTopLeftPosition(X, fGraphController3->getY());
	}
	if (textEditorName.compare("fTextEditorFrequency4") == 0)
	{
		fGraphController4->setTopLeftPosition(X, fGraphController4->getY());
	}
	if (textEditorName.compare("fTextEditorFrequency5") == 0)
	{
		fGraphController5->setTopLeftPosition(X, fGraphController5->getY());
	}
	if (textEditorName.compare("fTextEditorFrequency6") == 0)
	{
		fGraphController6->setTopLeftPosition(X, fGraphController6->getY());
	}
	if (textEditorName.compare("fTextEditorFrequency7") == 0)
	{
		fGraphController7->setTopLeftPosition(X, fGraphController7->getY());
	}
	if (textEditorName.compare("fTextEditorFrequency8") == 0)
	{
		fGraphController8->setTopLeftPosition(X, fGraphController8->getY());
	}
	if (textEditorName.compare("fTextEditorFrequency9") == 0)
	{
		fGraphController9->setTopLeftPosition(X, fGraphController9->getY());
	}
	if (textEditorName.compare("fTextEditorFrequency10") == 0)
	{
		fGraphController10->setTopLeftPosition(X, fGraphController10->getY());
	}
	repaint();
}

void EquilizerGraph::updateGraphData(String sliderName, int x, int y)
{

	float frequency = calculateFrequency(x);
	float gainValue = calculateGain(y);
	EQRoutingComponent* cc = findParentComponentOfClass<EQRoutingComponent>();

	cc->updateGraphData(sliderName, frequency, gainValue);


}



//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="EquilizerGraph" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.33"
                 fixedSize="1" initialWidth="773" initialHeight="246">
  <METHODS>
    <METHOD name="mouseDown (const MouseEvent&amp; e)"/>
    <METHOD name="mouseDrag (const MouseEvent&amp; e)"/>
    <METHOD name="mouseUp (const MouseEvent&amp; e)"/>
  </METHODS>
  <BACKGROUND backgroundColour="ff323e44"/>
  <JUCERCOMP name="fGraphController1" id="501f1bdc25932a54" memberName="fGraphController1"
             virtualName="" explicitFocusOrder="0" pos="35 118 10 10" sourceFile="DraggableGraphController.cpp"
             constructorParams=""/>
  <JUCERCOMP name="fGraphController2" id="9b181610e4fe3e91" memberName="fGraphController2"
             virtualName="" explicitFocusOrder="0" pos="109 118 10 10" sourceFile="DraggableGraphController.cpp"
             constructorParams=""/>
  <JUCERCOMP name="fGraphController3" id="ee7ff9990f14cad3" memberName="fGraphController3"
             virtualName="" explicitFocusOrder="0" pos="185 118 10 10" sourceFile="DraggableGraphController.cpp"
             constructorParams=""/>
  <JUCERCOMP name="fGraphController4" id="d8d5f7c5b83ec25a" memberName="fGraphController4"
             virtualName="" explicitFocusOrder="0" pos="251 118 10 10" sourceFile="DraggableGraphController.cpp"
             constructorParams=""/>
  <JUCERCOMP name="fGraphController5" id="26e5c36cb85a1d0" memberName="fGraphController5"
             virtualName="" explicitFocusOrder="0" pos="316 118 10 10" sourceFile="DraggableGraphController.cpp"
             constructorParams=""/>
  <JUCERCOMP name="fGraphController6" id="b1dbe675702134c0" memberName="fGraphController6"
             virtualName="" explicitFocusOrder="0" pos="400 118 10 10" sourceFile="DraggableGraphController.cpp"
             constructorParams=""/>
  <JUCERCOMP name="fGraphController7" id="cd26f4000c99a1b0" memberName="fGraphController7"
             virtualName="" explicitFocusOrder="0" pos="470 118 10 10" sourceFile="DraggableGraphController.cpp"
             constructorParams=""/>
  <JUCERCOMP name="fGraphController8" id="7c6c0790cc1e906a" memberName="fGraphController8"
             virtualName="" explicitFocusOrder="0" pos="533 118 10 10" sourceFile="DraggableGraphController.cpp"
             constructorParams=""/>
  <JUCERCOMP name="fGraphController9" id="f213be3ee160dbd3" memberName="fGraphController9"
             virtualName="" explicitFocusOrder="0" pos="607 118 10 10" sourceFile="DraggableGraphController.cpp"
             constructorParams=""/>
  <JUCERCOMP name="fGraphController10" id="c674f06af2de5fab" memberName="fGraphController10"
             virtualName="" explicitFocusOrder="0" pos="678 118 10 10" sourceFile="DraggableGraphController.cpp"
             constructorParams=""/>
  <LABEL name="new label" id="e452efd767fe6ebd" memberName="flable30"
         virtualName="" explicitFocusOrder="0" pos="49 0 1 246" bkgCol="20000"
         outlineCol="ff008000" edTextCol="ff000000" edBkgCol="0" labelText=""
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
         italic="0" justification="33"/>
  <LABEL name="new label" id="97ea0cf99ce3517" memberName="flable50" virtualName=""
         explicitFocusOrder="0" pos="104 0 1 246" outlineCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="2ef024cc2929524d" memberName="flable40"
         virtualName="" explicitFocusOrder="0" pos="80 0 1 246" bkgCol="20000"
         outlineCol="ff008000" edTextCol="ff000000" edBkgCol="0" labelText=""
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
         italic="0" justification="33"/>
  <LABEL name="new label" id="e1201939004f61b9" memberName="flable60"
         virtualName="" explicitFocusOrder="0" pos="125 0 1 246" outlineCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="437d249a04a630ce" memberName="flable70"
         virtualName="" explicitFocusOrder="0" pos="141 0 1 246" outlineCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="1b31de8058a4fb1d" memberName="flable80"
         virtualName="" explicitFocusOrder="0" pos="156 0 1 246" outlineCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="18cfb5a27c0a0db7" memberName="flable100"
         virtualName="" explicitFocusOrder="0" pos="180 0 1 246" outlineCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="b4588798263ac2d9" memberName="flable200"
         virtualName="" explicitFocusOrder="0" pos="255 0 1 246" outlineCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="f7d0e6c8e1c50629" memberName="flable300"
         virtualName="" explicitFocusOrder="0" pos="298 0 1 246" outlineCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="55301cd5e923d61c" memberName="flable400"
         virtualName="" explicitFocusOrder="0" pos="329 0 1 246" outlineCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="7b402487ce3f7f09" memberName="flable500"
         virtualName="" explicitFocusOrder="0" pos="353 0 1 246" outlineCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="d7c90d47d5def56f" memberName="flable700"
         virtualName="" explicitFocusOrder="0" pos="389 0 1 246" outlineCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="11911bf222a44838" memberName="flable1k"
         virtualName="" explicitFocusOrder="0" pos="429 0 1 246" outlineCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="e3584309fb978869" memberName="flable2k"
         virtualName="" explicitFocusOrder="0" pos="502 0 1 246" outlineCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="9db494bf64df4f2d" memberName="flable3k"
         virtualName="" explicitFocusOrder="0" pos="545 0 1 246" outlineCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="b2da9fd378ce445e" memberName="flable4k"
         virtualName="" explicitFocusOrder="0" pos="576 0 1 246" outlineCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="282ca43906e511b6" memberName="flable5k"
         virtualName="" explicitFocusOrder="0" pos="602 0 1 246" outlineCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="cccb09948c64d39d" memberName="flable6k"
         virtualName="" explicitFocusOrder="0" pos="623 0 1 246" outlineCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="f7e383dc561d0b02" memberName="flable7k"
         virtualName="" explicitFocusOrder="0" pos="639 0 1 246" outlineCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="12bb5e3a4846586d" memberName="flable8k"
         virtualName="" explicitFocusOrder="0" pos="654 0 1 246" outlineCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="70591036c2e55455" memberName="flable10k"
         virtualName="" explicitFocusOrder="0" pos="678 0 1 246" outlineCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ec4f8113b51218ae" memberName="flable20k"
         virtualName="" explicitFocusOrder="0" pos="754 0 1 246" outlineCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="f56f9d79e2364fc6" memberName="flable30k"
         virtualName="" explicitFocusOrder="0" pos="773 0 1 246" outlineCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: dw_eq_jpg, 63691, "media/Background/Dark/DW_EQ.jpg"
static const unsigned char resource_EquilizerGraph_dw_eq_jpg[] = { 255,216,255,225,0,24,69,120,105,102,0,0,73,73,42,0,8,0,0,0,0,0,0,0,0,0,0,0,255,236,0,17,68,117,99,107,121,0,1,0,4,0,0,0,100,0,0,255,225,
3,115,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,0,60,63,120,112,97,99,107,101,116,32,98,101,103,105,110,61,34,239,187,191,34,32,105,100,61,34,87,
53,77,48,77,112,67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,57,100,34,63,62,32,60,120,58,120,109,112,109,101,116,97,32,120,109,108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,58,109,
101,116,97,47,34,32,120,58,120,109,112,116,107,61,34,65,100,111,98,101,32,88,77,80,32,67,111,114,101,32,53,46,54,45,99,49,51,56,32,55,57,46,49,53,57,56,50,52,44,32,50,48,49,54,47,48,57,47,49,52,45,48,
49,58,48,57,58,48,49,32,32,32,32,32,32,32,32,34,62,32,60,114,100,102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,61,34,104,116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,47,49,57,57,57,
47,48,50,47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,115,35,34,62,32,60,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,32,114,100,102,58,97,98,111,117,116,61,34,34,32,120,109,108,
110,115,58,120,109,112,77,77,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,109,109,47,34,32,120,109,108,110,115,58,115,116,82,101,102,61,34,104,
116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,84,121,112,101,47,82,101,115,111,117,114,99,101,82,101,102,35,34,32,120,109,108,110,115,58,120,109,112,
61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,34,32,120,109,112,77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,61,34,
120,109,112,46,100,105,100,58,50,69,50,54,70,48,51,52,49,56,49,66,69,57,49,49,66,48,70,57,66,68,51,48,52,51,56,56,70,69,67,68,34,32,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,61,34,120,109,
112,46,100,105,100,58,65,53,68,57,53,54,66,49,50,51,50,54,49,49,69,57,65,66,48,65,69,52,50,54,51,51,65,53,67,70,50,56,34,32,120,109,112,77,77,58,73,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,
105,105,100,58,65,53,68,57,53,54,66,48,50,51,50,54,49,49,69,57,65,66,48,65,69,52,50,54,51,51,65,53,67,70,50,56,34,32,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,61,34,65,100,111,98,101,32,
80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,55,32,40,87,105,110,100,111,119,115,41,34,62,32,60,120,109,112,77,77,58,68,101,114,105,118,101,100,70,114,111,109,32,115,116,82,101,102,58,105,110,
115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,68,57,57,49,48,69,49,68,49,70,48,56,49,49,69,57,65,54,56,52,66,55,67,52,57,70,69,55,51,68,52,68,34,32,115,116,82,101,102,58,100,111,99,117,
109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,68,57,57,49,48,69,49,69,49,70,48,56,49,49,69,57,65,54,56,52,66,55,67,52,57,70,69,55,51,68,52,68,34,47,62,32,60,47,114,100,102,58,68,101,115,99,
114,105,112,116,105,111,110,62,32,60,47,114,100,102,58,82,68,70,62,32,60,47,120,58,120,109,112,109,101,116,97,62,32,60,63,120,112,97,99,107,101,116,32,101,110,100,61,34,114,34,63,62,255,238,0,38,65,100,
111,98,101,0,100,192,0,0,0,1,3,0,21,4,3,6,10,13,0,0,51,8,0,0,132,154,0,0,183,219,0,0,248,201,255,219,0,132,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,
2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,1,1,1,1,1,1,1,2,1,1,2,2,2,1,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,255,194,0,17,8,1,211,3,174,3,1,17,
0,2,17,1,3,17,1,255,196,1,29,0,1,1,0,3,1,1,1,1,1,0,0,0,0,0,0,0,0,4,1,5,6,3,7,2,8,9,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,2,3,5,4,6,7,16,0,0,4,3,7,5,1,0,2,2,2,2,3,0,0,0,0,2,3,4,1,19,5,16,18,50,20,52,6,
22,32,48,17,49,23,96,64,21,80,7,128,33,112,37,144,176,35,17,0,0,4,1,4,9,14,12,4,6,2,0,4,7,0,0,1,2,3,4,0,17,18,51,5,16,33,49,50,19,115,147,211,180,32,65,145,209,178,210,35,99,20,52,84,148,212,53,48,97,
129,177,34,82,162,67,36,68,165,6,81,113,21,37,96,66,130,179,195,100,98,83,193,69,149,22,161,114,146,116,164,117,7,18,0,1,2,7,0,1,1,4,6,8,7,0,0,0,0,0,0,2,3,1,162,210,51,163,211,52,17,81,33,18,82,4,176,
49,97,113,50,66,48,96,145,177,34,19,35,5,65,129,161,209,114,178,20,19,0,2,1,2,4,6,1,4,3,1,1,1,1,1,0,0,1,17,0,33,49,16,65,81,97,32,48,240,113,145,161,129,96,177,193,241,64,209,225,80,112,128,176,144,255,
218,0,12,3,1,0,2,17,3,17,0,0,1,255,0,41,190,144,0,120,179,170,153,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,238,244,0,15,22,117,83,32,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,221,222,128,1,226,206,170,100,0,160,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,1,187,189,0,3,197,157,84,200,
26,146,9,66,0,0,0,0,0,1,131,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,97,127,8,0,24,95,115,162,212,64,27,187,208,0,60,89,213,76,143,205,154,41,173,55,29,70,52,0,84,74,4,84,75,72,168,150,
170,150,91,42,150,84,169,101,74,130,203,96,0,0,42,137,69,0,42,205,151,80,10,137,65,81,41,86,108,186,149,102,203,169,84,178,165,84,205,151,80,0,0,8,168,150,128,21,75,45,128,85,155,46,160,171,54,93,74,137,
74,137,74,179,101,178,169,90,146,128,0,0,21,18,149,71,91,211,53,215,71,31,126,197,254,60,233,8,91,211,106,1,187,189,0,3,197,157,84,200,252,154,5,212,113,212,148,160,5,164,64,196,90,71,88,139,72,234,204,
163,210,204,163,210,204,162,171,68,71,160,0,0,44,136,140,208,2,204,163,208,11,72,129,105,17,102,81,233,102,81,233,102,81,233,105,140,163,208,0,0,24,139,72,232,1,102,81,232,5,153,71,160,179,40,244,180,
136,180,136,179,40,244,179,44,233,16,0,0,1,105,17,68,125,7,166,98,175,201,177,142,78,192,150,211,111,96,27,187,208,0,60,89,213,76,143,201,160,93,71,29,73,74,1,22,145,80,196,92,69,88,139,136,170,204,163,
210,204,163,171,34,42,184,196,71,160,0,0,45,136,76,208,2,220,162,208,34,210,42,69,164,85,110,81,105,110,81,105,102,81,213,162,34,208,0,0,24,139,136,168,1,102,81,232,5,185,69,160,183,40,180,182,34,45,34,
45,136,106,232,84,66,128,0,4,90,69,84,71,208,122,102,42,241,58,168,249,245,17,45,214,109,128,55,119,160,0,120,179,170,153,31,147,64,177,113,212,192,3,37,132,64,22,145,2,210,34,200,142,172,137,52,175,40,
234,211,17,29,0,0,2,210,32,0,44,150,59,6,75,8,140,150,17,22,75,29,150,75,29,150,68,149,97,137,99,176,0,0,2,210,32,1,100,71,64,89,44,118,11,37,142,203,72,203,8,202,229,146,202,229,205,145,152,0,0,12,150,
17,30,167,113,215,62,245,211,101,244,9,127,154,55,8,150,235,54,192,27,187,208,0,60,89,213,76,143,201,160,93,71,45,73,64,1,105,16,49,22,145,214,34,210,58,179,40,244,179,40,244,179,40,170,209,17,232,0,0,
11,34,35,52,0,179,40,244,2,210,32,90,68,89,148,122,89,148,122,89,148,122,90,99,40,244,0,0,6,34,210,58,0,89,148,122,1,102,81,232,44,202,61,45,34,45,34,44,202,61,44,203,58,68,0,0,0,90,68,81,31,65,233,152,
171,68,33,96,75,117,155,96,13,221,232,0,30,44,234,166,71,228,208,44,92,117,48,0,22,17,128,90,68,11,72,139,34,74,174,36,170,226,58,180,196,73,88,0,0,11,72,128,0,182,88,172,2,194,48,88,70,91,44,86,91,44,
86,89,18,85,102,101,138,192,0,0,11,72,128,50,87,17,208,22,203,21,130,217,98,178,194,50,194,50,217,98,178,217,113,100,96,0,0,5,132,103,169,220,117,207,189,116,25,191,103,203,249,35,164,194,37,186,205,176,
6,238,244,0,15,22,117,83,35,242,104,23,81,199,81,214,64,5,164,64,196,90,71,88,139,72,234,200,142,172,136,234,200,136,180,17,208,0,0,44,136,140,208,2,200,142,128,180,136,22,145,22,68,117,100,71,86,68,117,
105,136,142,128,0,1,136,180,142,128,22,68,116,5,145,29,11,34,58,180,136,180,136,178,35,171,35,53,16,0,0,1,105,17,65,244,30,153,138,176,123,156,234,96,75,117,155,96,13,221,232,0,30,44,234,166,71,228,208,
46,163,142,164,165,0,139,72,168,98,46,34,172,69,196,85,102,81,233,102,81,213,145,21,92,98,35,208,0,0,22,196,38,104,1,110,81,104,17,105,21,34,210,42,183,40,180,183,40,180,179,40,234,209,17,104,0,0,12,69,
196,84,0,179,40,244,2,220,162,208,91,148,90,91,17,22,145,22,196,53,116,42,33,64,0,2,45,34,170,35,232,61,51,21,121,149,71,57,68,75,117,155,96,13,221,232,0,30,44,234,166,71,228,208,44,92,117,48,0,201,97,
16,5,164,64,180,136,178,35,171,34,77,43,202,58,180,196,71,64,0,0,180,136,0,11,37,142,193,146,194,35,37,132,69,146,199,101,146,199,101,145,37,88,98,88,236,0,0,0,180,136,0,89,17,208,22,75,29,130,201,99,
178,210,50,194,50,185,100,178,185,115,100,102,0,0,3,37,132,71,169,220,117,207,189,116,249,125,82,107,249,83,121,194,37,186,205,176,6,238,244,0,15,22,117,83,35,242,104,23,81,203,82,80,0,90,68,12,69,164,
117,136,180,142,172,202,61,44,202,61,44,202,42,180,68,122,0,0,2,200,136,205,0,44,202,61,0,180,136,22,145,22,101,30,150,101,30,150,101,30,150,152,202,61,0,0,1,136,180,142,128,22,101,30,128,89,148,122,11,
50,143,75,72,139,72,139,50,143,75,50,206,145,0,0,0,22,145,20,71,208,122,102,42,209,38,87,8,18,221,102,216,3,119,122,0,7,139,58,169,145,249,52,11,23,29,76,0,5,132,96,22,145,2,210,34,200,146,171,137,42,
184,142,173,49,18,86,0,0,2,210,32,0,45,150,43,0,176,140,22,17,150,203,21,150,203,21,150,68,149,89,153,98,176,0,0,2,210,32,12,149,196,116,5,178,197,96,182,88,172,176,140,176,140,182,88,172,182,92,89,24,
0,0,1,97,25,234,119,29,115,239,91,184,234,101,248,86,161,18,221,102,216,3,119,122,0,7,139,58,169,145,249,52,11,168,227,168,235,32,2,210,32,98,45,35,172,69,164,117,100,71,86,68,117,100,68,90,8,232,0,0,
22,68,70,104,1,100,71,64,90,68,11,72,139,34,58,178,35,171,34,58,180,196,71,64,0,0,196,90,71,64,11,34,58,2,200,142,133,145,29,90,68,90,68,89,17,213,145,154,136,0,0,0,180,136,160,250,15,76,197,94,6,254,
56,170,34,91,172,219,0,110,239,64,0,241,103,85,50,63,38,129,117,28,181,37,0,5,164,64,196,90,71,88,139,72,234,204,163,210,204,163,210,204,162,171,68,71,160,0,0,44,136,140,208,2,204,163,208,11,72,129,105,
17,102,81,233,102,81,233,102,81,233,105,140,163,208,0,0,24,139,72,232,1,102,81,232,5,153,71,160,179,40,244,180,136,180,136,179,40,244,179,44,233,16,0,0,1,105,17,68,125,7,166,98,175,193,169,60,208,37,186,
205,176,6,238,244,0,15,22,117,83,35,242,104,23,81,203,82,80,0,90,68,12,69,164,117,136,180,142,172,202,61,44,202,61,44,202,42,180,68,122,0,0,2,200,136,205,0,44,202,61,0,180,136,22,145,22,101,30,150,101,
30,150,101,30,150,152,202,61,0,0,1,136,180,142,128,22,101,30,128,89,148,122,11,50,143,75,72,139,72,139,50,143,75,50,206,145,0,0,0,22,145,20,71,208,122,103,222,186,124,222,102,206,54,192,150,235,54,192,
27,187,208,0,60,89,213,76,143,201,160,93,71,45,73,64,1,105,16,49,22,145,214,34,210,58,179,40,244,179,40,244,179,40,170,209,17,232,0,0,11,34,35,52,0,179,40,244,2,210,32,90,68,89,148,122,89,148,122,89,148,
122,90,99,40,244,0,0,6,34,210,58,0,89,148,122,1,102,81,232,44,202,61,45,34,45,34,44,202,61,44,203,58,68,0,0,0,90,68,81,31,65,233,152,171,70,152,0,75,117,155,96,13,221,232,0,30,44,234,166,71,228,208,44,
92,117,48,0,22,17,128,90,68,11,72,139,34,74,174,36,170,226,58,180,196,73,88,0,0,11,72,128,0,182,88,172,2,194,48,88,70,91,44,86,91,44,86,89,18,85,102,101,138,192,0,0,11,72,128,50,87,17,208,22,203,21,130,
217,98,178,194,50,194,50,217,98,178,217,113,100,96,0,0,5,132,103,169,220,117,207,189,106,15,177,229,192,215,1,98,91,172,219,0,110,239,64,0,241,103,85,50,63,38,129,117,28,117,29,100,0,90,68,12,69,164,117,
136,180,142,172,136,234,200,142,172,136,139,65,29,0,0,2,200,136,205,0,44,136,232,11,72,129,105,17,100,71,86,68,117,100,71,86,152,136,232,0,0,24,139,72,232,1,100,71,64,89,17,208,178,35,171,72,139,72,139,
34,58,178,51,81,0,0,0,22,145,20,31,65,233,152,171,68,157,84,179,215,58,137,110,179,108,1,187,189,0,3,197,157,84,200,252,154,5,212,114,212,148,0,22,145,3,17,105,29,98,45,35,171,50,143,75,50,143,75,50,138,
173,17,30,128,0,0,178,34,51,64,11,50,143,64,45,34,5,164,69,153,71,165,153,71,165,153,71,165,166,50,143,64,0,0,98,45,35,160,5,153,71,160,22,101,30,130,204,163,210,210,34,210,34,204,163,210,204,179,164,
64,0,0,5,164,69,17,244,30,153,138,180,73,210,203,5,106,81,45,214,109,128,55,119,160,0,120,179,170,153,31,147,64,177,113,212,192,0,90,68,1,105,16,45,34,45,136,170,216,143,75,50,138,173,17,21,0,0,2,210,
32,0,44,150,59,0,180,136,22,145,22,75,29,150,75,29,150,196,85,105,137,99,176,0,0,2,210,32,1,108,69,64,89,44,118,11,37,142,203,72,139,72,139,37,146,202,229,205,145,0,0,0,22,145,30,167,113,215,62,245,168,
63,166,185,223,139,110,124,210,196,183,89,182,0,221,222,128,1,226,206,170,100,126,77,2,234,56,234,74,80,8,180,138,134,34,226,42,196,92,69,86,101,30,150,101,29,89,17,85,198,34,61,0,0,1,108,66,102,128,22,
101,30,129,22,145,82,45,34,171,50,143,75,50,143,75,50,142,173,49,17,232,0,0,12,69,196,84,0,179,40,244,2,204,163,208,89,148,122,91,17,22,145,22,68,85,108,102,162,20,0,0,34,210,42,162,62,131,211,49,86,137,
10,8,150,235,54,192,27,187,208,0,60,89,213,76,143,201,160,88,184,234,96,0,45,34,0,176,140,22,17,150,68,149,92,73,85,196,117,96,137,43,0,0,1,97,24,0,22,203,21,128,90,68,11,72,139,101,138,203,101,138,203,
34,74,176,75,21,128,0,0,22,17,128,100,174,35,160,45,150,43,5,178,197,101,164,69,164,69,178,197,101,178,172,136,0,0,0,180,136,245,59,142,185,247,174,56,254,131,205,249,149,156,77,137,110,179,108,1,187,
189,54,38,204,208,30,71,139,58,169,145,249,52,11,168,227,169,40,0,44,35,6,34,210,58,196,90,71,86,68,117,100,71,86,68,69,160,142,128,0,1,100,68,102,128,22,68,116,5,132,96,176,140,178,35,171,34,58,178,35,
171,4,71,64,0,0,196,90,71,64,11,34,58,2,200,142,133,145,29,88,70,88,70,89,17,213,144,168,192,0,0,11,8,202,15,160,244,204,85,248,62,147,47,14,156,165,137,110,179,108,1,187,189,58,152,26,154,214,30,44,234,
166,71,228,208,46,163,142,164,165,0,139,8,232,99,43,72,244,198,86,145,233,110,81,85,177,21,91,16,150,153,34,165,0,0,22,101,17,157,0,69,145,30,129,22,17,210,44,35,171,50,142,172,136,234,216,136,178,145,
29,40,0,0,198,86,145,232,2,45,136,180,8,178,35,209,22,68,122,89,17,150,17,150,68,117,100,42,49,64,0,2,44,35,170,35,232,61,51,21,104,140,152,8,150,235,54,192,27,187,211,117,22,156,173,126,207,22,117,83,
35,242,104,22,30,58,240,165,1,136,180,142,134,34,210,58,196,90,71,86,101,29,89,17,213,145,21,90,34,58,80,0,1,100,68,102,128,69,145,30,131,17,105,29,98,45,35,171,50,142,172,136,234,200,142,172,17,29,40,
0,0,196,90,71,64,34,200,143,64,139,34,61,17,100,71,165,145,17,105,17,108,69,86,194,162,51,64,0,6,34,210,58,244,142,183,166,118,70,162,191,177,121,235,224,59,159,30,185,75,117,155,96,13,221,233,210,155,
115,150,53,135,139,58,169,145,249,52,11,168,227,168,235,52,0,180,136,24,139,72,235,17,105,29,89,148,122,89,148,122,89,148,85,104,136,244,0,0,5,145,17,154,0,89,148,122,1,105,16,45,34,44,202,61,44,202,61,
44,202,61,45,49,148,122,0,0,3,17,105,29,0,44,202,61,0,179,40,244,22,101,30,150,145,22,145,22,101,30,150,101,157,34,0,0,0,45,34,40,143,168,244,206,188,229,108,41,2,91,172,219,0,110,239,77,140,123,70,163,
65,226,206,170,100,126,77,1,63,45,234,192,0,216,154,224,13,137,174,6,196,215,27,19,93,91,24,215,86,198,53,198,196,26,224,0,0,22,147,30,96,3,98,107,128,54,38,184,27,19,92,108,77,113,177,53,198,196,215,
86,198,17,174,160,0,0,13,137,174,0,27,19,92,1,177,53,192,216,198,186,173,38,41,38,45,53,198,196,26,224,0,0,3,98,107,141,137,244,46,153,215,156,173,128,4,183,89,182,0,221,222,128,1,226,206,170,100,126,
78,116,238,101,225,168,0,58,104,230,104,14,154,57,154,29,52,115,53,211,71,51,93,52,115,53,211,71,51,93,52,108,227,134,208,0,0,27,216,26,42,3,39,75,28,205,1,211,71,51,89,58,88,230,107,166,142,102,186,104,
230,107,166,142,102,186,104,217,203,195,106,0,0,0,119,57,112,218,1,147,165,142,106,176,100,233,99,153,172,157,44,115,85,178,128,6,204,230,107,166,141,156,112,218,0,0,3,39,75,28,205,119,57,112,212,162,
0,18,221,102,216,3,119,122,0,7,139,58,169,145,131,181,151,184,143,138,215,51,96,29,84,189,28,191,51,212,194,117,242,221,28,22,157,254,111,228,226,108,250,132,188,109,157,20,115,199,110,188,21,159,74,59,
24,145,127,155,245,144,0,27,5,237,243,107,143,150,238,16,125,3,58,216,28,126,167,62,159,68,205,201,202,215,85,45,103,31,169,207,165,107,222,230,213,31,45,220,33,127,160,114,210,215,198,44,0,0,58,57,119,
209,243,237,64,61,23,235,25,191,47,212,141,61,151,233,248,191,47,220,243,62,199,155,242,125,78,211,40,107,200,246,141,153,171,56,221,63,168,242,234,101,254,74,220,212,32,0,15,233,12,235,234,209,252,129,
169,253,79,155,249,63,146,183,53,8,0,23,70,218,128,221,222,128,1,226,206,170,100,110,126,239,31,63,23,171,244,28,244,248,221,105,16,13,226,244,81,192,216,59,73,124,142,70,186,120,247,57,122,238,178,229,
171,104,70,116,103,41,91,211,232,113,230,124,46,192,0,23,175,89,30,135,1,68,29,116,187,35,153,173,50,125,14,89,14,104,220,27,67,153,173,42,122,175,81,27,35,128,162,23,232,113,191,62,59,96,0,1,210,75,176,
56,187,0,245,94,243,55,143,212,215,38,197,123,108,223,159,234,121,29,252,188,125,155,216,26,106,219,199,177,230,114,54,125,126,95,160,199,243,238,154,20,0,12,159,120,151,179,62,12,125,136,174,63,159,116,
208,160,3,11,217,250,30,20,62,127,184,6,238,244,0,15,22,117,83,33,103,214,127,103,252,150,45,99,243,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,99,230,255,0,143,254,
175,63,47,160,13,221,232,0,30,44,234,166,66,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,64,27,187,208,0,60,89,213,76,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,119,122,0,7,139,58,169,144,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,110,239,64,0,241,103,85,50,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,221,232,0,30,44,234,166,64,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,187,189,0,3,197,157,84,200,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,55,119,160,0,120,179,170,153,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,238,244,0,
15,22,117,83,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,221,222,128,1,226,206,170,100,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,27,187,208,0,60,89,213,76,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,119,122,0,7,139,58,169,144,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,110,239,64,0,241,103,85,50,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,221,232,0,30,44,234,166,64,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,187,189,0,3,197,157,84,200,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,55,119,160,0,120,179,170,153,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,238,244,0,15,22,117,83,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,221,222,128,1,226,206,
170,100,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,187,208,0,60,89,213,76,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
3,119,122,0,7,139,58,169,144,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,110,239,64,0,241,103,85,50,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,13,221,232,0,30,44,234,166,64,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,187,189,0,3,197,157,84,200,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,55,119,160,0,120,179,170,153,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,238,244,0,15,22,117,83,32,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,221,222,128,1,226,206,170,100,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,255,218,0,8,1,1,0,1,5,2,233,
83,7,237,84,193,251,85,48,126,213,76,22,170,177,188,220,56,150,113,44,226,89,196,179,137,103,18,206,37,156,75,56,150,113,44,226,89,196,179,137,103,18,206,37,156,92,56,150,113,112,226,89,196,179,137,103,
18,206,46,28,75,56,150,113,44,226,89,196,179,137,103,18,206,37,156,75,56,150,113,44,226,89,196,179,137,103,18,206,37,156,75,56,150,113,44,226,89,196,179,137,103,18,206,37,156,75,56,150,113,44,226,225,
196,179,137,103,18,206,37,156,75,56,150,113,44,226,89,196,179,137,103,18,206,37,156,75,56,150,113,44,226,225,196,179,137,103,18,206,37,156,75,56,150,113,44,226,89,196,179,137,103,18,206,37,156,75,56,150,
113,44,226,89,196,179,137,103,18,206,37,156,75,56,150,113,44,226,89,196,179,137,103,18,206,37,156,75,56,187,17,118,34,236,69,216,139,177,23,98,10,225,68,187,74,96,178,62,161,136,166,80,206,47,44,47,44,
47,44,47,44,47,44,22,138,176,53,229,133,229,133,229,130,241,84,171,94,88,94,88,47,21,74,181,229,132,34,172,155,203,8,69,89,55,150,17,138,178,111,44,23,138,165,90,17,86,77,229,133,229,133,229,133,229,133,
229,133,229,133,229,133,229,130,17,84,203,94,88,94,88,94,88,94,88,94,88,41,21,96,91,203,11,203,11,203,5,162,172,13,121,97,121,96,180,85,129,175,44,19,138,177,45,229,130,113,86,37,188,176,132,85,147,121,
96,180,85,129,147,138,177,45,229,133,229,133,229,133,229,133,229,133,229,133,229,133,229,133,229,130,241,84,171,94,88,94,88,94,88,94,88,70,42,201,188,176,188,176,188,176,82,42,192,183,150,23,150,10,69,
88,22,242,193,24,171,19,94,88,35,21,98,107,203,4,226,172,75,121,96,164,85,129,81,138,177,53,229,133,229,133,229,133,229,133,229,133,229,133,229,133,229,133,229,130,209,86,6,188,176,64,202,207,69,147,199,
134,61,34,172,153,40,116,70,245,52,106,251,102,149,80,53,172,227,255,0,229,216,83,5,145,244,92,73,234,122,87,199,107,141,69,142,53,2,26,113,13,56,142,156,56,212,67,79,216,111,168,233,87,5,171,227,177,
124,97,44,1,44,2,26,112,190,52,176,118,92,106,58,35,167,181,92,22,43,128,33,140,33,140,37,128,43,129,12,125,149,241,132,53,12,26,230,77,80,111,150,89,141,74,163,75,86,21,234,228,16,181,167,174,194,152,
44,143,162,226,79,83,210,190,59,92,234,44,115,168,16,211,136,105,196,116,225,206,162,26,126,195,109,71,74,184,45,95,29,139,227,9,96,9,96,16,211,133,241,165,131,178,231,81,209,29,61,170,224,177,92,1,12,
97,12,97,44,1,92,8,99,236,175,140,33,168,96,215,50,106,131,124,178,204,24,187,169,188,67,107,87,28,35,107,79,93,133,48,89,31,69,196,145,203,152,154,65,52,130,105,4,210,9,164,11,168,75,243,72,38,144,77,
32,112,161,51,19,72,38,144,56,80,153,137,164,16,80,153,121,164,16,80,153,121,164,17,80,153,121,164,14,20,38,98,10,19,47,52,130,105,4,210,9,164,19,72,38,144,77,32,154,64,221,66,102,38,144,77,32,154,65,
52,130,105,2,138,18,228,210,9,164,19,72,23,80,151,230,144,77,32,93,66,95,154,64,154,132,185,52,129,53,9,114,105,4,20,38,94,105,2,234,18,250,106,18,228,210,9,164,19,72,38,144,77,32,154,65,52,130,105,4,
210,7,10,19,49,52,130,105,4,210,9,164,17,80,153,121,164,19,72,38,144,40,161,46,77,32,154,64,162,132,185,52,129,5,9,126,105,2,10,18,252,210,4,212,37,201,164,10,40,75,136,40,75,243,72,38,144,77,32,154,65,
52,130,105,4,210,9,164,19,72,23,80,151,230,144,34,114,197,118,13,115,38,118,147,54,163,105,215,169,244,7,101,221,148,25,182,180,245,216,83,5,145,244,92,73,234,122,87,199,107,141,69,142,53,2,26,113,13,
56,142,156,56,212,67,79,216,111,168,233,87,5,171,227,177,124,97,44,1,44,2,26,112,190,52,176,118,92,106,58,35,167,181,92,22,43,128,33,140,33,140,37,128,43,129,12,125,149,241,132,53,12,26,230,77,80,111,
150,91,165,167,174,194,152,44,143,162,226,69,35,69,196,131,137,7,18,14,36,28,72,56,93,3,223,144,113,32,226,65,195,132,15,152,144,113,32,225,194,7,204,72,56,130,7,203,200,56,130,7,203,200,56,138,7,203,
200,56,112,129,243,16,64,249,121,7,18,14,36,28,72,56,144,113,32,226,65,196,131,134,232,31,49,32,226,65,196,131,137,7,18,14,20,64,247,36,28,72,56,144,112,186,7,191,32,226,65,194,232,30,252,131,132,208,
61,201,7,9,160,123,146,14,32,129,242,242,14,23,64,247,211,64,247,36,28,72,56,144,113,32,226,65,196,131,137,7,18,14,36,28,56,64,249,137,7,18,14,36,28,72,56,138,7,203,200,56,144,113,32,225,68,15,114,65,
196,131,133,16,61,201,7,8,32,123,242,14,16,64,247,228,28,38,129,238,72,56,81,3,220,65,3,223,144,113,32,226,65,196,131,137,7,18,14,36,28,72,56,144,112,186,7,191,32,225,20,140,85,216,53,204,153,221,41,225,
70,215,69,130,142,75,183,40,137,58,181,167,174,194,152,44,143,162,226,79,83,210,190,59,92,234,44,115,168,16,211,136,105,196,116,225,206,162,26,126,195,109,71,74,184,45,95,29,139,227,9,96,9,96,16,211,133,
241,165,131,178,231,81,209,29,61,170,224,177,92,1,12,97,12,97,44,1,92,8,99,236,175,140,33,168,96,215,50,106,131,124,178,204,42,117,42,90,137,214,42,201,33,107,79,93,133,48,89,31,69,196,158,167,165,124,
118,185,212,88,231,80,33,167,16,211,136,233,195,157,68,52,253,134,218,142,149,112,90,190,59,23,198,18,192,18,192,33,167,11,227,75,7,101,206,163,162,58,123,85,193,98,184,2,24,194,24,194,88,2,184,16,199,
217,95,24,67,80,193,174,100,213,6,249,101,152,211,223,212,214,78,143,86,85,11,90,122,236,41,130,200,250,46,36,142,92,196,210,9,164,19,72,38,144,77,32,93,66,95,154,65,52,130,105,3,133,9,152,154,65,52,129,
194,132,204,77,32,130,132,203,205,32,130,132,203,205,32,138,132,203,205,32,112,161,51,16,80,153,121,164,19,72,38,144,77,32,154,65,52,130,105,4,210,6,234,19,49,52,130,105,4,210,9,164,19,72,20,80,151,38,
144,77,32,154,64,186,132,191,52,130,105,2,234,18,252,210,4,212,37,201,164,9,168,75,147,72,32,161,50,243,72,23,80,151,211,80,151,38,144,77,32,154,65,52,130,105,4,210,9,164,19,72,38,144,56,80,153,137,164,
19,72,38,144,77,32,138,132,203,205,32,154,65,52,129,69,9,114,105,4,210,5,20,37,201,164,8,40,75,243,72,16,80,151,230,144,38,161,46,77,32,81,66,92,65,66,95,154,65,52,130,105,4,210,9,164,19,72,38,144,77,
32,154,64,186,132,191,52,129,19,150,43,176,107,153,51,180,153,181,27,85,86,4,81,165,126,156,88,218,211,215,97,76,22,71,209,113,39,169,233,95,29,174,53,22,56,212,8,105,196,52,226,58,112,227,81,13,63,97,
190,163,165,92,22,175,142,197,241,132,176,4,176,8,105,194,248,210,193,217,113,168,232,142,158,213,112,88,174,0,134,48,134,48,150,0,174,4,49,246,87,198,16,212,48,107,153,53,65,190,89,110,150,158,187,10,
96,178,62,139,137,20,141,23,18,14,36,28,72,56,144,113,32,225,116,15,126,65,196,131,137,7,14,16,62,98,65,196,131,135,8,31,49,32,226,8,31,47,32,226,8,31,47,32,226,40,31,47,32,225,194,7,204,65,3,229,228,
28,72,56,144,113,32,226,65,196,131,137,7,18,14,27,160,124,196,131,137,7,18,14,36,28,72,56,81,3,220,144,113,32,226,65,194,232,30,252,131,137,7,11,160,123,242,14,19,64,247,36,28,38,129,238,72,56,130,7,203,
200,56,93,3,223,77,3,220,144,113,32,226,65,196,131,137,7,18,14,36,28,72,56,144,112,225,3,230,36,28,72,56,144,113,32,226,40,31,47,32,226,65,196,131,133,16,61,201,7,18,14,20,64,247,36,28,32,129,239,200,
56,65,3,223,144,112,154,7,185,32,225,68,15,113,4,15,126,65,196,131,137,7,18,14,36,28,72,56,144,113,32,226,65,194,232,30,252,131,132,82,49,87,96,215,50,103,116,167,133,27,82,153,74,171,213,40,155,118,146,
249,141,173,61,118,20,193,100,125,23,18,122,158,149,241,218,231,81,99,157,64,134,156,67,78,35,167,14,117,16,211,246,27,106,58,85,193,106,248,236,95,24,75,0,75,0,134,156,47,141,44,29,151,58,142,136,233,
237,87,5,138,224,8,99,8,99,9,96,10,224,67,31,101,124,97,13,67,6,185,147,84,27,229,150,98,249,213,53,211,45,195,87,167,177,181,167,174,194,152,44,143,162,226,79,83,210,190,59,92,106,44,113,168,16,211,136,
105,196,116,225,198,162,26,126,195,125,71,74,184,45,95,29,139,227,9,96,9,96,16,211,133,241,165,131,178,227,81,209,29,61,170,224,177,92,1,12,97,12,97,44,1,92,8,99,236,175,140,33,168,96,215,50,106,131,124,
178,204,105,213,10,162,198,41,136,107,90,122,236,41,130,200,250,46,36,245,61,43,227,181,198,162,199,26,129,13,56,134,156,71,78,28,106,33,167,236,55,212,116,171,130,213,241,216,190,48,150,0,150,1,13,56,
95,26,88,59,46,53,29,17,211,218,174,11,21,192,16,198,16,198,18,192,21,192,134,62,202,248,194,26,134,13,115,38,118,147,54,163,110,186,101,6,59,137,242,21,58,253,173,61,118,20,193,100,125,23,18,122,158,
149,241,218,227,81,99,141,64,134,156,67,78,35,167,14,53,16,211,246,27,234,58,85,193,106,248,236,95,24,75,0,75,0,134,156,47,141,44,29,151,26,142,136,233,237,87,5,138,224,8,99,8,99,9,96,10,224,67,31,101,
124,97,13,67,6,185,147,84,27,229,150,233,105,235,176,166,11,35,232,184,145,72,209,113,32,226,65,196,131,137,7,18,14,23,64,247,228,28,72,56,144,112,225,3,230,36,28,72,56,112,129,243,18,14,32,129,242,242,
14,32,129,242,242,14,34,129,242,242,14,28,32,124,196,16,62,94,65,196,131,137,7,18,14,36,28,72,56,144,113,32,225,186,7,204,72,56,144,113,32,226,65,196,131,133,16,61,201,7,18,14,36,28,46,129,239,200,56,
144,112,186,7,191,32,225,52,15,114,65,194,104,30,228,131,136,32,124,188,131,133,208,61,244,208,61,201,7,18,14,36,28,72,56,144,113,32,226,65,196,131,137,7,14,16,62,98,65,196,131,137,7,18,14,34,129,242,
242,14,36,28,72,56,81,3,220,144,113,32,225,68,15,114,65,194,8,30,252,131,132,16,61,249,7,9,160,123,146,14,20,64,247,16,64,247,228,28,72,56,144,113,32,226,65,196,131,137,7,18,14,36,28,46,129,239,200,56,
69,35,21,118,13,115,38,119,74,120,80,218,157,80,120,138,123,110,136,233,205,113,141,61,177,44,105,235,176,166,11,35,232,184,147,212,244,175,142,215,58,139,28,234,4,52,226,26,113,29,56,115,168,134,159,
176,219,81,210,174,11,87,199,98,248,194,88,2,88,4,52,225,124,105,96,236,185,212,116,71,79,106,184,44,87,0,67,24,67,24,75,0,87,2,24,251,43,227,8,106,24,53,204,154,160,223,44,176,66,183,84,108,106,149,85,
237,89,91,26,122,236,41,130,200,250,46,36,245,61,43,227,181,198,162,199,26,129,13,56,134,156,71,78,28,106,33,167,236,55,212,116,171,130,213,241,216,190,48,150,0,150,1,13,56,95,26,88,59,46,53,29,17,211,
218,174,11,21,192,16,198,16,198,18,192,21,192,134,62,202,248,194,26,134,13,115,38,168,55,203,44,15,70,172,36,71,172,31,83,87,177,167,174,194,152,44,143,162,226,74,40,230,60,183,30,91,143,45,199,150,226,
243,112,188,80,191,229,184,242,220,121,110,28,69,12,199,150,227,203,112,226,40,102,60,183,16,138,25,127,45,196,34,134,95,203,113,24,161,151,242,220,56,138,25,136,69,12,191,150,227,203,113,229,184,242,
220,121,110,60,183,30,91,143,45,195,120,161,152,242,220,121,110,60,183,30,91,143,45,194,145,111,115,203,113,229,184,188,220,47,20,47,249,110,47,55,11,197,11,254,91,132,226,222,231,150,225,56,183,185,229,
184,132,80,203,222,110,23,138,23,211,139,123,158,91,143,45,199,150,227,203,113,229,184,242,220,121,110,60,183,30,91,135,17,67,49,229,184,242,220,121,110,60,183,17,138,25,127,45,199,150,227,203,112,164,
91,220,242,220,121,110,20,139,123,158,91,132,34,133,251,205,194,17,66,253,230,225,56,183,185,229,184,82,45,238,33,20,47,222,110,60,183,30,91,143,45,199,150,227,203,113,229,184,242,220,94,110,23,138,23,
252,183,8,197,25,236,26,230,76,237,38,109,67,99,211,202,137,43,116,182,15,183,19,150,135,74,198,158,187,10,96,178,62,139,137,61,79,74,248,237,115,168,177,206,160,67,78,33,167,17,211,135,58,136,105,251,
13,181,29,42,224,181,124,118,47,140,37,128,37,128,67,78,23,198,150,14,203,157,71,68,116,246,171,130,197,112,4,49,132,49,132,176,5,112,33,143,178,190,48,134,161,131,92,201,170,13,242,203,116,180,245,216,
83,5,145,244,92,73,34,180,92,101,220,12,187,129,151,112,50,238,6,93,192,93,187,139,249,119,3,46,224,101,220,7,13,220,102,50,238,6,93,192,112,221,198,99,46,224,65,187,140,190,89,192,131,119,25,124,179,
129,22,238,50,249,119,1,195,119,25,136,55,113,151,203,56,25,119,3,46,224,101,220,12,187,129,151,112,50,238,6,93,192,110,221,198,99,46,224,101,220,12,187,129,151,112,50,238,2,141,220,92,203,184,25,119,
3,46,224,46,221,197,252,187,129,151,112,23,110,226,254,93,192,77,187,139,153,119,1,54,238,46,101,220,8,55,113,151,203,56,11,183,113,125,54,238,46,101,220,12,187,129,151,112,50,238,6,93,192,203,184,25,
119,3,46,224,101,220,7,13,220,102,50,238,6,93,192,203,184,25,103,2,45,220,101,242,238,6,93,192,203,184,10,55,113,115,46,224,101,220,5,27,184,185,151,112,16,110,226,254,93,192,65,187,139,249,119,1,54,238,
46,101,220,5,27,184,184,131,119,23,242,238,6,93,192,203,184,25,119,3,46,224,101,220,12,187,129,151,112,50,238,2,237,220,95,203,184,8,162,177,87,96,215,50,103,116,167,133,179,132,55,84,181,154,91,122,124,
44,105,235,161,179,71,46,206,226,145,83,107,3,144,233,156,41,130,200,250,46,36,181,61,43,227,181,206,162,199,58,129,13,56,134,156,71,78,28,234,33,167,236,54,212,116,171,130,213,241,216,190,48,150,0,150,
1,13,56,95,26,88,59,46,117,29,17,211,218,174,11,21,192,16,198,16,198,18,192,21,192,134,62,202,248,194,26,134,13,115,38,168,55,203,44,218,163,80,102,140,55,163,196,99,85,171,30,170,107,26,122,232,126,179,
164,24,80,106,191,211,44,244,178,222,133,48,89,31,69,246,158,167,165,124,118,184,212,88,227,80,33,167,16,211,136,233,195,141,68,52,253,134,250,142,149,112,90,190,59,23,198,18,192,18,192,33,167,11,227,
75,7,101,198,163,162,58,123,85,193,98,184,2,24,194,24,194,88,2,184,16,199,217,95,24,67,80,193,174,100,213,6,249,101,186,90,122,232,111,84,104,147,114,213,168,140,77,11,214,41,130,200,250,46,36,86,90,14,
51,46,6,101,192,204,184,25,151,3,50,224,46,225,197,252,203,129,153,112,51,46,3,135,14,51,25,151,3,50,224,56,112,227,49,153,112,32,225,198,95,50,224,65,195,140,190,101,192,139,135,25,124,203,128,225,195,
140,196,28,56,203,230,92,12,203,129,153,112,51,46,6,101,192,204,184,25,151,3,50,224,55,112,227,49,153,112,51,46,6,101,192,204,184,25,151,1,71,14,46,102,92,12,203,129,153,112,23,112,226,254,101,192,204,
184,11,184,113,127,50,224,38,225,197,204,203,128,155,135,23,51,46,4,28,56,203,230,92,5,220,56,190,155,135,23,51,46,6,101,192,204,184,25,151,3,50,224,102,92,12,203,129,153,112,51,46,3,135,14,51,25,151,
3,50,224,102,92,12,203,129,23,14,50,249,151,3,50,224,102,92,5,28,56,185,153,112,51,46,2,142,28,92,204,184,8,56,113,127,50,224,32,225,197,252,203,128,155,135,23,51,46,2,142,28,92,65,195,139,249,151,3,50,
224,102,92,12,203,129,153,112,51,46,6,101,192,204,184,25,151,1,119,14,47,230,92,4,86,88,203,181,37,52,230,81,26,4,19,108,74,121,145,65,214,218,106,134,239,112,170,230,177,167,174,138,145,163,147,123,24,
242,55,177,242,244,41,130,200,250,46,36,245,61,43,227,181,198,162,199,26,129,13,56,134,156,71,78,28,106,33,167,236,55,212,116,169,130,213,241,216,190,48,158,0,158,1,13,56,95,26,120,59,46,53,29,17,211,
218,166,11,20,192,16,198,16,198,19,192,20,192,134,62,202,248,194,26,138,67,252,145,170,238,243,142,122,90,122,232,78,175,184,218,147,251,237,218,60,168,104,133,48,89,31,80,246,131,55,171,59,203,185,25,
119,35,46,228,101,220,140,187,144,229,155,226,27,46,228,101,220,140,187,144,237,155,228,156,229,220,140,187,144,233,155,226,43,151,114,18,102,249,84,178,238,66,76,223,42,150,93,200,131,55,199,109,151,
114,29,179,124,147,146,51,124,102,217,119,35,46,228,101,220,140,187,145,151,114,50,238,70,93,200,203,185,13,155,59,139,131,180,120,153,178,238,70,93,200,203,185,25,119,33,86,111,160,142,93,200,203,185,
25,119,33,203,55,196,54,93,200,203,185,11,179,125,227,46,228,54,102,249,104,229,220,134,204,223,45,28,187,144,147,55,202,165,151,114,28,179,124,67,32,205,242,133,203,185,25,119,35,46,228,101,220,140,187,
145,151,114,50,238,70,93,200,203,185,14,217,190,73,206,93,200,203,185,25,119,35,46,228,69,155,236,166,93,200,203,185,25,119,33,86,111,160,142,93,200,203,185,7,102,250,45,242,238,67,118,206,226,169,218,
60,76,205,219,59,138,167,104,241,51,54,102,249,104,229,220,133,89,190,130,45,89,190,85,108,187,145,151,114,50,238,70,93,200,203,185,25,119,35,46,228,101,220,140,187,144,187,55,222,50,238,67,54,79,85,117,
72,127,146,141,93,222,113,207,75,79,93,133,48,89,31,67,109,188,110,194,181,211,82,168,255,0,99,209,88,168,255,0,109,81,178,165,81,254,198,202,109,71,250,251,41,181,31,235,236,107,81,203,83,133,98,163,
253,181,69,131,198,232,209,123,20,197,147,111,82,169,172,155,138,151,67,170,142,102,157,109,74,163,253,141,174,170,57,154,112,163,212,127,169,168,138,61,71,250,154,136,166,212,127,175,178,165,81,254,196,
80,222,54,103,218,220,143,27,191,173,116,127,99,255,0,167,181,213,71,51,78,179,251,31,253,56,100,227,38,241,235,140,227,198,78,50,111,30,184,206,60,163,212,127,169,168,135,85,28,205,59,109,188,110,194,
181,217,117,81,204,211,134,219,120,221,133,107,173,167,174,194,152,44,136,217,251,81,222,241,126,255,0,253,97,184,105,233,214,105,15,232,21,75,105,52,244,234,78,9,183,210,137,172,97,73,59,214,142,232,
201,182,104,25,81,72,234,152,238,140,147,102,137,166,117,148,119,182,96,209,227,230,73,50,117,10,51,21,3,218,121,90,186,121,181,200,205,122,139,34,177,91,98,109,86,59,194,179,182,191,215,205,107,212,167,
219,22,158,215,111,245,53,68,139,184,53,21,161,34,93,184,156,28,90,157,16,139,210,207,183,219,205,168,51,77,164,66,59,121,69,91,127,74,211,197,65,164,24,186,45,6,7,165,31,111,55,155,80,102,155,72,132,
96,129,149,53,25,129,34,93,184,156,28,90,93,155,78,54,215,223,91,65,214,206,175,117,211,153,160,241,71,84,51,34,210,210,194,17,49,182,218,69,50,232,40,217,96,154,103,85,67,237,168,146,39,44,72,112,190,
215,73,187,149,208,81,178,212,154,10,149,70,207,41,71,65,149,45,147,23,202,61,165,25,6,116,74,4,43,9,188,165,29,6,67,231,45,156,44,211,253,99,79,168,166,253,146,244,215,157,77,118,45,61,246,220,67,253,
81,69,86,177,87,163,212,40,79,19,255,0,83,183,122,193,167,250,198,159,81,77,251,37,233,175,58,90,122,236,41,130,202,122,69,93,221,46,174,251,109,56,162,127,176,159,209,97,81,116,131,215,150,178,120,86,
145,134,225,119,107,74,243,246,109,93,86,87,116,212,52,170,25,154,46,171,43,186,106,154,135,73,67,238,21,204,171,215,135,124,177,106,235,193,227,138,138,203,188,62,227,112,101,30,188,59,229,182,237,117,
222,217,172,208,255,0,216,21,58,13,33,238,254,168,61,219,253,77,87,131,103,6,174,152,238,9,184,157,149,75,75,87,81,54,138,110,39,39,89,235,211,61,56,142,231,170,24,191,222,171,125,227,181,31,57,78,172,
162,45,84,220,78,78,179,215,166,122,112,72,192,167,37,97,120,57,38,226,118,85,45,109,185,95,53,163,111,13,237,84,223,14,250,233,181,24,211,79,253,218,249,75,72,107,135,134,226,116,145,157,56,205,46,26,
58,93,147,142,83,83,129,148,52,14,164,35,226,48,220,110,209,51,167,25,165,233,245,133,169,228,94,178,233,203,36,29,168,221,37,107,14,87,99,78,173,47,77,77,122,203,167,44,131,29,235,88,167,65,15,246,198,
225,167,60,169,189,37,69,255,0,81,247,217,205,182,212,255,0,110,215,255,0,179,175,86,215,220,53,18,127,179,170,109,72,135,251,99,112,211,158,84,222,146,162,255,0,165,102,145,101,14,194,152,45,255,0,213,
110,100,254,121,186,12,62,115,188,71,206,119,136,249,206,241,31,57,222,35,231,59,196,124,231,120,143,156,239,17,243,157,226,62,115,188,71,206,119,136,249,206,241,31,57,222,35,231,59,196,124,231,120,143,
156,239,17,243,157,226,62,115,188,71,206,119,136,249,206,241,31,57,222,35,231,59,196,124,231,120,143,156,239,17,243,157,226,62,115,188,71,206,119,136,249,206,241,31,57,222,35,231,59,196,124,231,120,143,
156,239,17,243,157,226,62,115,188,71,206,119,136,249,206,241,31,57,222,35,231,59,196,124,231,120,143,156,239,17,243,157,226,62,115,188,71,206,119,136,249,206,241,31,57,222,35,231,59,196,124,231,120,143,
156,239,17,243,157,226,62,115,188,71,206,119,136,249,206,241,31,57,222,35,231,59,196,124,231,120,143,156,239,17,243,157,226,62,115,188,71,206,119,136,249,206,241,31,57,222,35,231,59,196,124,231,120,143,
156,239,17,243,157,226,62,115,188,71,206,119,136,249,206,241,31,57,222,35,231,59,196,124,231,120,143,156,239,17,243,157,226,62,115,188,71,206,119,136,249,206,241,31,57,222,35,231,59,196,124,231,120,143,
156,239,17,243,157,226,62,115,188,71,206,119,136,249,206,241,31,57,222,35,231,59,196,124,231,120,143,156,239,17,243,157,226,62,115,188,71,206,119,136,249,206,241,31,57,222,35,231,59,196,124,231,120,143,
156,239,17,243,157,226,62,115,188,71,206,119,136,249,206,241,31,57,222,35,231,59,196,124,239,118,148,22,157,72,219,97,85,84,93,94,194,152,63,106,166,15,218,169,131,246,170,96,253,170,152,63,106,166,15,
218,169,131,246,170,96,253,170,152,63,106,166,15,218,169,131,246,170,96,253,170,152,63,106,166,15,218,169,131,246,170,96,253,170,152,63,106,166,15,218,169,131,246,170,96,253,170,152,63,106,166,15,218,
169,131,246,170,96,253,170,152,63,97,255,218,0,8,1,2,0,1,5,2,255,0,225,246,29,152,217,30,152,255,0,14,22,195,170,54,67,255,0,62,68,120,255,0,47,14,204,108,143,76,127,135,11,97,213,27,33,255,0,129,163,
255,0,24,163,254,98,29,152,217,30,152,255,0,14,22,195,170,54,67,254,26,67,179,27,35,211,31,225,194,216,117,70,200,126,34,29,152,217,30,152,255,0,14,22,195,170,54,67,248,17,255,0,49,14,204,108,143,76,127,
135,11,97,213,27,33,255,0,13,33,217,141,145,233,143,240,225,108,58,163,100,63,227,159,159,219,120,255,0,47,14,204,108,143,76,127,135,11,97,213,27,33,248,136,118,99,100,122,99,252,56,91,14,168,217,15,225,
67,252,180,59,49,178,61,49,254,28,45,135,84,108,135,248,63,31,226,255,0,239,249,31,247,215,255,0,127,195,255,0,191,228,199,252,172,123,80,254,44,123,145,254,55,158,175,61,94,71,155,60,244,121,183,200,
243,217,243,211,230,223,35,205,158,71,158,159,61,48,236,249,233,243,209,230,223,54,121,233,243,103,158,207,145,230,207,63,196,110,88,40,180,75,24,71,199,103,199,87,139,60,89,226,223,3,199,99,192,241,211,
226,223,3,197,190,58,124,119,188,116,248,232,241,111,139,124,116,120,179,192,241,216,240,60,89,224,120,235,93,57,49,238,66,45,42,112,227,213,72,142,59,89,28,118,176,56,237,96,113,218,192,227,181,129,199,
107,3,142,214,7,29,172,14,59,88,28,118,176,56,237,96,113,218,192,227,181,129,199,107,3,142,214,7,29,172,14,59,88,28,118,176,56,237,96,113,218,192,227,181,129,199,107,3,142,214,7,29,172,14,59,88,28,118,
176,56,237,96,113,218,192,227,181,129,199,107,3,142,214,7,29,172,14,59,88,28,118,176,56,237,96,113,218,192,227,181,129,199,107,3,142,214,7,29,172,14,59,88,28,118,176,56,237,96,113,218,192,227,181,129,
199,107,3,142,214,7,29,172,14,59,88,28,118,176,56,237,96,113,218,192,227,181,129,199,107,3,142,214,7,29,172,14,59,88,28,118,176,56,237,96,113,218,192,227,181,129,199,107,3,142,214,7,29,172,14,59,88,28,
118,176,56,237,96,113,218,192,227,181,129,199,107,3,142,214,7,29,172,14,59,88,28,118,176,56,237,96,113,218,192,227,181,129,199,107,3,142,214,7,29,172,14,59,88,28,118,176,56,237,96,113,218,192,227,181,
129,199,107,3,142,214,7,29,172,14,59,88,28,118,176,56,237,96,113,218,192,227,181,129,199,107,3,142,214,7,29,172,14,59,88,28,118,176,56,237,96,113,218,192,227,181,145,199,170,194,83,58,96,57,204,161,191,
250,226,127,255,218,0,8,1,3,0,1,5,2,233,143,175,218,199,215,237,99,235,246,177,245,251,88,250,253,172,125,126,214,62,191,107,31,95,181,143,175,218,199,215,237,99,235,246,177,245,251,88,250,253,172,125,
126,214,62,191,107,31,95,181,143,175,218,199,215,237,99,235,246,177,245,251,88,250,253,172,125,126,214,62,191,107,31,95,181,143,175,218,199,215,237,99,235,246,177,245,251,88,250,253,172,125,126,214,62,
191,107,31,95,181,143,171,31,170,100,26,144,229,80,159,168,98,227,52,94,196,125,90,98,212,246,233,185,214,219,40,231,187,76,115,221,166,57,238,211,28,247,105,142,123,180,199,61,218,99,158,237,49,207,118,
152,231,187,76,115,221,166,57,238,211,28,247,105,142,123,180,199,61,218,99,158,237,49,207,118,152,231,187,76,115,221,166,57,238,211,28,247,105,142,123,180,199,61,218,99,158,237,49,207,118,152,231,187,
76,115,221,166,57,238,211,28,247,105,142,123,180,199,61,218,99,158,237,49,207,118,152,231,187,76,115,221,166,57,238,211,28,247,105,142,123,180,199,61,218,99,158,237,49,207,118,152,231,187,76,115,221,166,
57,238,211,28,247,105,142,123,180,199,61,218,99,158,237,49,207,118,152,231,187,76,115,221,166,57,238,211,28,247,105,142,123,180,199,61,218,99,158,237,49,207,118,152,231,187,76,115,221,166,57,238,211,28,
247,105,142,123,180,199,61,218,99,158,237,49,207,118,152,231,187,76,115,221,166,57,238,211,28,247,105,142,123,180,199,61,218,99,158,237,49,207,118,152,231,187,76,115,221,166,57,238,211,28,247,105,142,
123,180,199,61,218,99,158,237,49,207,118,152,231,187,76,115,221,166,57,238,211,28,247,105,142,123,180,199,61,218,99,158,237,49,207,118,152,231,187,76,115,221,166,57,238,211,28,247,105,142,123,180,199,
61,218,99,158,237,49,207,118,152,231,187,76,115,221,166,57,238,211,28,247,105,142,123,180,199,59,218,241,25,154,182,226,8,164,154,9,118,35,235,246,177,245,251,88,250,253,172,125,126,214,62,191,107,31,
95,181,143,175,218,199,215,237,99,235,246,177,245,251,88,250,253,172,125,126,214,62,191,107,31,95,181,143,175,218,199,215,237,99,235,246,177,245,251,88,250,253,172,125,126,214,62,191,107,31,95,181,143,
175,218,199,215,237,99,235,246,31,255,218,0,8,1,2,2,6,63,2,250,108,136,55,31,205,236,255,0,56,195,196,63,212,247,85,248,161,250,210,150,227,115,221,246,253,241,246,254,232,195,207,219,250,95,235,174,12,
252,255,0,197,31,192,191,249,124,42,245,143,213,31,188,254,146,18,180,122,193,105,241,251,203,51,34,162,204,200,168,179,50,42,44,204,138,139,51,34,162,204,200,168,179,50,42,44,204,138,139,51,34,162,204,
200,168,179,50,42,44,204,138,139,51,34,162,204,200,168,179,50,42,44,204,138,139,51,34,162,204,200,168,179,50,42,44,204,138,139,51,34,162,204,200,168,179,50,42,44,204,138,139,51,34,162,204,200,168,179,
50,42,44,204,138,139,51,34,162,204,200,168,179,50,42,44,204,138,139,51,34,162,204,200,168,179,50,42,44,204,138,139,51,34,162,204,200,168,179,50,42,44,204,138,139,51,34,162,204,200,168,179,50,42,44,204,
138,139,51,34,162,204,200,168,179,50,42,44,204,138,139,51,34,162,204,200,168,179,50,42,44,204,138,139,51,34,162,204,200,168,179,50,42,44,204,138,139,51,34,162,204,200,168,179,50,42,44,204,138,139,51,34,
162,204,200,168,179,50,42,44,204,138,139,51,34,162,204,200,168,179,50,42,44,204,138,139,51,34,162,204,200,168,179,50,42,44,204,138,139,51,34,162,204,200,168,179,50,42,44,204,138,139,51,34,162,204,200,
168,179,50,42,44,204,138,139,51,34,162,204,200,168,179,50,42,44,204,138,139,51,34,162,204,200,168,179,50,42,44,204,138,139,51,34,162,204,200,168,179,50,42,44,204,138,139,51,34,162,204,200,168,179,50,42,
44,204,138,139,51,34,162,204,200,168,179,50,42,44,204,138,139,51,34,163,248,219,130,83,235,21,35,253,207,230,56,180,191,243,191,224,148,251,80,152,250,170,63,155,199,195,251,72,173,126,213,198,62,126,
142,43,255,218,0,8,1,3,2,6,63,2,250,108,133,62,159,201,225,81,245,247,83,24,69,94,62,223,118,17,240,65,196,71,202,35,15,48,143,175,235,75,159,48,159,107,17,118,62,231,219,4,248,79,159,186,42,130,163,15,
88,120,143,233,99,255,0,141,165,124,223,246,72,199,207,242,211,117,159,88,34,31,157,191,68,253,105,250,161,236,129,227,230,93,113,151,126,21,180,239,152,126,196,196,234,198,246,179,171,27,218,206,172,
111,107,58,177,189,172,234,198,246,179,171,27,218,206,172,111,107,58,177,189,172,234,198,246,179,171,27,218,206,172,111,107,58,177,189,172,234,198,246,179,171,27,218,206,172,111,107,58,177,189,172,234,
198,246,179,171,27,218,206,172,111,107,58,177,189,172,234,198,246,179,171,27,218,206,172,111,107,58,177,189,172,234,198,246,179,171,27,218,206,172,111,107,58,177,189,172,234,198,246,179,171,27,218,206,
172,111,107,58,177,189,172,234,198,246,179,171,27,218,206,172,111,107,58,177,189,172,234,198,246,179,171,27,218,206,172,111,107,58,177,189,172,234,198,246,179,171,27,218,206,172,111,107,58,177,189,172,
234,198,246,179,171,27,218,206,172,111,107,58,177,189,172,234,198,246,179,171,27,218,206,172,111,107,58,177,189,172,234,198,246,179,171,27,218,206,172,111,107,58,177,189,172,234,198,246,179,171,27,218,
206,172,111,107,58,177,189,172,234,198,246,179,171,27,218,206,172,111,107,58,177,189,172,234,198,246,179,171,27,218,206,172,111,107,58,177,189,172,234,198,246,179,171,27,218,206,172,111,107,58,177,189,
172,234,198,246,179,171,27,218,206,172,111,107,58,177,189,172,234,198,246,179,171,27,218,206,172,111,107,58,177,189,172,234,198,246,179,171,27,218,206,172,111,107,58,177,189,172,234,198,246,179,171,27,
218,206,172,111,107,58,177,189,172,234,198,246,179,171,27,218,206,172,111,107,58,177,189,172,234,198,246,179,171,27,218,206,172,111,107,58,177,189,172,234,198,246,179,171,27,218,206,172,111,107,58,177,
189,172,234,198,246,179,195,95,48,165,175,210,13,59,231,254,135,242,88,105,223,146,254,207,31,198,181,255,0,11,206,67,225,109,63,146,17,248,227,237,241,248,125,162,89,106,30,235,72,135,136,67,210,16,250,
161,244,113,95,255,218,0,8,1,1,1,6,63,2,212,143,147,207,252,108,62,79,63,241,176,249,60,255,0,198,195,228,243,234,38,167,107,241,61,223,254,144,185,22,206,190,81,66,255,0,240,40,128,69,243,140,178,219,
232,190,113,150,91,125,23,206,50,203,111,162,249,198,89,109,244,95,56,203,45,190,139,231,25,101,183,209,124,227,44,182,250,47,156,101,150,223,69,243,140,178,219,232,190,113,150,91,125,23,206,50,203,111,
162,249,198,89,109,244,95,56,203,45,190,139,231,25,101,183,209,124,227,44,182,250,47,156,101,150,223,69,243,140,178,219,232,190,113,150,91,125,23,206,50,203,111,162,249,198,89,109,244,95,56,203,45,190,
139,231,25,101,183,209,124,227,44,182,250,47,156,101,150,223,69,243,140,178,219,232,190,113,150,91,125,23,206,50,203,111,162,249,198,89,109,244,95,56,203,45,190,139,231,25,101,183,209,124,227,44,182,250,
47,156,101,150,223,69,243,140,178,219,232,190,113,150,91,125,23,206,50,203,111,162,249,198,89,109,244,95,56,203,45,190,139,231,25,101,183,209,124,227,44,182,250,47,156,101,150,223,69,243,140,178,219,232,
190,113,150,91,125,23,206,50,203,111,162,249,198,89,109,244,95,56,203,45,190,139,231,25,101,183,209,124,227,44,182,250,47,156,101,150,223,69,243,140,178,219,232,190,113,150,91,125,23,206,50,203,111,162,
249,198,89,109,244,95,56,203,45,190,139,231,25,101,183,209,124,227,44,182,250,47,156,101,150,223,69,243,140,178,219,232,190,113,150,91,125,23,206,50,203,111,162,249,198,89,109,244,95,56,203,45,190,139,
231,25,101,183,209,124,227,44,182,250,47,156,101,150,223,69,243,140,178,219,232,190,113,150,91,125,23,206,50,203,111,162,249,198,89,109,244,95,56,203,45,190,139,231,25,101,183,209,124,227,44,182,250,47,
156,101,150,223,69,243,140,178,219,232,190,113,150,91,125,23,206,50,203,111,162,249,198,89,109,244,95,56,203,45,190,139,231,25,101,183,209,124,227,44,182,250,47,156,101,150,223,69,243,140,178,219,232,
190,113,150,91,125,23,206,50,203,111,162,249,198,89,109,244,95,56,203,45,190,139,231,25,101,183,209,124,227,44,182,250,47,156,101,150,223,69,243,140,178,219,232,190,113,150,91,125,23,206,50,203,111,162,
249,198,89,109,244,95,56,203,45,190,139,231,25,101,183,209,124,227,44,182,250,47,156,101,150,223,69,34,217,117,119,241,72,182,93,93,252,82,45,151,87,127,20,139,101,213,223,197,34,217,117,119,241,74,182,
89,79,252,76,33,28,40,225,18,255,0,178,73,14,159,140,192,18,1,137,224,135,201,231,212,7,230,30,120,88,48,135,144,57,84,129,60,210,4,212,213,16,215,214,146,41,84,202,27,110,41,84,202,27,110,41,84,202,27,
110,41,84,202,27,110,41,84,202,27,110,2,69,84,162,64,111,205,252,200,166,97,215,215,17,138,85,50,134,219,138,85,50,134,219,138,85,50,134,219,133,128,21,80,0,21,80,0,39,154,224,24,124,113,74,166,80,219,
113,74,166,80,219,112,176,2,170,0,2,170,0,4,243,92,3,15,142,41,84,202,27,110,20,54,21,73,65,84,66,89,230,215,42,242,235,255,0,198,41,84,202,27,110,20,54,21,73,65,84,66,89,230,215,42,242,235,255,0,198,
41,84,202,27,110,19,54,21,73,69,85,130,89,230,214,42,18,107,255,0,202,41,84,202,27,110,22,0,85,64,0,85,64,0,158,107,128,97,241,194,134,194,169,40,42,136,75,60,218,229,94,93,127,248,197,42,153,67,109,197,
42,153,67,109,197,42,153,67,109,197,42,153,67,109,197,42,153,67,109,197,42,153,67,109,197,42,153,67,109,197,42,153,67,109,194,32,42,168,32,42,166,2,19,205,112,76,30,56,165,83,40,109,184,165,83,40,109,
184,165,83,40,109,184,165,83,40,109,184,165,83,40,109,184,67,133,83,210,72,68,125,51,127,220,177,127,31,192,34,149,76,161,182,226,149,76,161,182,226,149,76,161,182,224,36,85,74,36,6,252,223,204,138,102,
29,125,113,24,165,83,40,109,184,165,83,40,109,184,9,21,82,137,1,191,55,243,34,153,135,95,92,70,41,84,202,27,110,23,225,84,244,82,1,15,76,223,247,34,95,199,240,24,165,83,40,109,184,95,133,83,209,72,4,61,
51,127,220,137,127,31,192,98,149,76,161,182,225,67,97,84,148,21,68,37,158,109,114,175,46,191,252,98,149,76,161,182,224,36,85,74,36,6,252,223,204,138,102,29,125,113,24,95,133,83,209,72,4,61,51,127,220,
137,127,31,192,98,149,76,161,182,226,149,76,161,182,226,149,76,161,182,226,149,76,161,182,226,149,76,161,182,226,149,76,161,182,226,149,76,161,182,226,149,76,161,182,226,149,76,161,182,225,96,5,84,0,5,
84,0,9,230,184,6,31,28,82,169,148,54,220,82,169,148,54,220,82,169,148,54,220,82,169,148,54,220,38,108,42,146,138,171,4,179,205,172,84,36,215,255,0,148,82,169,148,54,220,82,169,148,54,220,82,169,148,54,
220,33,194,169,233,36,34,62,153,191,238,88,191,143,224,17,74,166,80,219,113,74,166,80,219,112,135,10,167,164,144,136,250,102,255,0,185,98,254,63,128,69,42,153,67,109,192,202,170,148,75,141,249,191,149,
21,12,26,250,194,17,74,166,80,219,112,50,170,165,18,227,126,111,229,69,67,6,190,176,132,82,169,148,54,220,47,194,169,232,164,2,30,153,191,238,68,191,143,224,49,76,166,80,219,112,135,10,167,164,144,136,
250,102,255,0,185,98,254,63,128,64,202,170,148,75,141,249,191,149,21,12,26,250,194,17,74,166,80,219,113,74,166,80,219,113,74,166,80,219,113,74,166,80,219,113,74,166,80,219,113,74,166,80,219,113,74,166,
80,219,113,74,166,80,219,113,74,166,80,219,112,18,42,165,18,3,126,111,230,69,51,14,190,184,140,82,169,148,54,220,38,2,161,196,45,202,2,115,8,94,142,180,176,167,36,104,229,214,12,67,9,201,208,85,105,147,
167,77,159,131,41,166,206,154,50,126,80,101,20,171,43,4,211,76,162,115,156,236,156,148,132,33,66,83,28,230,20,192,10,82,133,209,138,197,227,215,174,25,51,171,65,136,40,102,117,127,234,110,148,90,176,116,
13,91,148,141,121,91,32,193,0,202,38,52,251,86,128,0,76,96,8,85,163,115,5,88,248,223,116,255,0,253,5,38,5,109,84,162,102,139,165,85,114,119,105,53,122,233,39,45,212,98,217,178,73,9,82,154,146,224,73,227,
104,165,148,117,19,63,234,57,136,31,252,183,197,15,33,77,224,71,201,231,212,7,230,16,191,228,243,251,75,106,131,18,219,71,75,80,190,57,93,216,217,95,28,174,236,108,43,142,67,112,230,194,184,228,55,14,
108,37,142,95,112,218,194,248,229,119,99,10,227,144,220,57,240,40,99,146,221,134,169,182,36,116,133,245,1,137,109,163,165,100,49,45,180,116,172,57,196,134,144,133,135,56,144,210,16,176,174,57,13,195,155,
1,137,109,163,165,14,113,33,164,33,224,151,199,43,187,29,74,88,229,247,13,181,13,177,35,164,47,101,182,36,116,133,236,14,37,206,142,173,129,196,185,209,213,176,231,18,26,66,22,27,98,71,72,94,7,18,231,
71,87,193,6,37,182,142,149,132,255,0,171,112,104,113,251,109,103,88,204,18,119,113,230,96,103,79,166,253,189,244,184,73,190,141,237,193,187,172,82,114,23,213,124,169,129,176,53,129,167,172,111,72,225,
132,40,242,54,92,16,201,37,232,219,1,183,6,94,172,126,246,174,88,228,20,140,179,23,75,180,84,201,8,129,133,51,40,129,211,48,144,76,80,25,46,90,135,77,130,185,173,129,179,227,172,163,214,225,88,188,4,30,
40,230,94,82,163,164,176,211,28,29,196,190,152,156,4,77,175,168,95,31,254,20,124,8,249,60,250,128,252,194,23,252,158,127,105,109,80,98,91,104,233,106,23,199,43,187,27,43,227,149,221,141,133,113,200,110,
28,216,87,28,134,225,205,132,177,203,238,27,88,95,28,174,236,97,92,114,27,135,62,5,12,114,91,176,213,54,196,142,144,190,160,49,45,180,116,172,134,37,182,142,149,135,56,144,210,16,176,231,18,26,66,22,21,
199,33,184,115,96,49,45,180,116,161,206,36,52,132,60,18,248,229,119,99,169,75,28,190,225,182,161,182,36,116,133,236,182,196,142,144,189,129,196,185,209,213,176,56,151,58,58,182,28,226,67,72,66,195,108,
72,233,11,192,226,92,232,234,248,32,196,182,209,210,176,159,245,110,13,14,63,109,172,235,25,130,78,238,82,102,6,116,250,111,219,223,75,132,155,232,222,220,27,186,197,39,33,124,194,84,192,216,26,192,211,
214,52,166,56,97,10,60,141,151,6,50,73,122,54,192,109,195,106,189,130,7,114,241,226,196,65,186,4,146,114,138,28,100,0,148,194,4,33,67,92,194,32,82,133,177,25,33,218,233,51,41,136,205,103,173,213,40,188,
96,69,206,181,90,150,29,250,109,26,157,201,92,214,2,209,17,156,124,1,84,154,93,66,248,255,0,240,163,224,71,201,231,212,7,230,16,176,96,83,27,78,237,136,173,40,240,75,126,10,128,91,142,108,142,203,140,
252,115,100,118,92,103,227,155,35,178,227,63,28,217,29,151,25,248,230,200,236,184,207,192,124,58,52,45,245,220,116,116,248,248,230,200,236,184,207,199,54,71,101,198,126,57,178,59,46,51,240,191,195,163,
76,166,187,143,92,120,248,230,200,236,184,207,199,54,71,101,198,126,23,248,116,105,148,215,113,235,143,31,28,217,29,151,25,248,83,225,209,166,67,93,199,168,227,143,142,108,142,203,140,252,41,240,232,211,
33,174,227,212,113,199,199,54,71,101,198,126,19,248,116,105,151,215,113,234,55,227,227,155,35,178,227,63,11,252,58,52,202,107,184,245,199,143,133,62,29,26,100,53,220,122,142,56,248,230,200,236,184,207,
199,54,71,101,198,126,57,178,59,46,51,241,205,145,217,113,159,142,108,142,203,140,252,115,100,118,92,103,227,155,35,178,227,63,28,217,29,151,25,248,67,225,209,166,79,93,199,174,28,124,115,100,118,92,103,
227,155,35,178,227,63,28,217,29,151,25,248,230,200,236,184,207,199,54,71,101,198,126,27,252,58,52,35,174,227,164,47,199,199,54,71,101,198,126,57,178,59,46,51,241,205,145,217,113,159,128,248,116,104,91,
235,184,232,233,241,241,205,145,217,113,159,142,108,142,203,140,252,7,195,163,66,223,93,199,71,79,143,142,108,142,203,140,252,56,248,116,104,67,93,199,72,67,143,142,108,142,203,140,252,56,248,116,104,
67,93,199,72,67,143,142,108,142,203,140,252,41,240,232,211,33,174,227,212,113,199,199,54,71,101,198,126,3,225,209,161,111,174,227,163,167,199,195,143,135,70,132,53,220,116,132,56,248,230,200,236,184,207,
199,54,71,101,198,126,57,178,59,46,51,241,205,145,217,113,159,142,108,142,203,140,252,115,100,118,92,103,227,155,35,178,227,63,28,217,29,151,25,248,230,200,236,184,207,194,255,0,14,141,50,154,238,61,113,
227,227,155,35,178,227,63,28,217,29,151,25,248,230,200,236,184,207,199,54,71,101,198,126,19,248,116,105,151,215,113,234,55,227,227,155,35,178,227,63,28,217,29,151,25,248,230,200,236,184,207,195,127,135,
70,132,117,220,116,133,248,248,230,200,236,184,207,199,54,71,101,198,126,27,252,58,52,35,174,227,164,47,199,199,54,71,101,198,126,7,225,209,161,113,174,227,163,169,199,199,54,71,101,198,126,7,225,209,
161,113,174,227,163,169,199,199,54,71,101,198,126,28,124,58,52,33,174,227,164,33,199,199,54,71,101,198,126,27,252,58,52,35,174,227,164,47,199,192,252,58,52,46,53,220,116,117,56,248,230,200,236,184,207,
199,54,71,101,198,126,57,178,59,46,51,241,205,145,217,113,159,142,108,142,203,140,252,115,100,118,92,103,227,155,35,178,227,63,28,217,29,151,25,248,230,200,236,184,207,192,124,58,52,45,245,220,116,116,
248,248,230,200,236,184,207,194,114,34,153,111,173,128,173,45,225,189,101,76,16,227,246,202,206,177,152,36,238,227,204,192,206,159,77,251,123,233,112,147,125,27,219,131,119,88,82,90,170,174,25,184,50,
98,100,129,219,228,139,36,179,138,69,5,19,84,200,157,68,231,151,88,75,44,151,97,87,15,88,60,116,101,121,42,100,114,197,242,44,220,51,64,142,74,179,194,144,171,177,120,69,185,98,100,4,204,18,164,34,148,
226,79,0,56,192,189,4,43,116,92,85,239,126,229,117,84,53,18,179,116,139,146,215,173,166,38,21,139,172,59,67,54,22,238,196,198,54,13,21,103,39,33,46,132,225,178,190,63,252,40,248,17,242,121,245,1,249,132,
47,249,60,254,210,218,160,196,182,209,210,212,47,142,87,118,54,87,199,43,187,27,10,227,144,220,57,176,174,57,13,195,155,9,99,151,220,54,176,190,57,93,216,194,184,228,55,14,124,10,24,228,183,97,170,109,
137,29,33,125,64,98,91,104,233,89,12,75,109,29,43,14,113,33,164,33,97,206,36,52,132,44,43,142,67,112,230,192,98,91,104,233,67,156,72,105,8,120,37,241,202,238,199,82,150,57,125,195,109,67,108,72,233,11,
217,109,137,29,33,123,3,137,115,163,171,96,113,46,116,117,108,57,196,134,144,133,134,216,145,210,23,129,196,185,209,213,240,65,137,109,163,165,97,63,234,220,26,28,126,217,89,214,51,4,157,220,121,152,25,
211,233,191,111,125,46,18,111,163,123,112,110,235,20,156,133,243,9,83,3,96,107,3,79,88,222,145,195,8,81,228,108,184,49,146,75,209,182,3,111,84,190,63,252,40,248,17,242,121,245,1,249,132,44,50,167,108,
29,221,89,16,27,105,43,116,4,242,132,93,71,172,183,206,197,212,122,203,124,236,93,71,172,183,206,197,212,122,203,124,236,93,71,172,183,206,192,91,70,133,191,204,55,232,233,241,145,117,30,178,223,59,23,
81,235,45,243,177,117,30,178,223,59,11,219,70,153,79,152,111,235,143,25,23,81,235,45,243,177,117,30,178,223,59,11,219,70,153,79,152,111,235,143,25,23,81,235,45,243,176,165,180,105,144,249,134,254,163,
142,50,47,145,235,45,243,176,165,180,105,144,249,134,254,163,142,50,47,145,235,45,243,176,157,180,105,151,249,134,254,163,126,50,46,163,214,91,231,97,123,104,211,41,243,13,253,113,227,33,75,104,211,33,
243,13,253,71,28,100,95,35,214,91,231,98,234,61,101,190,118,46,163,214,91,231,98,234,61,101,190,118,46,163,214,91,231,98,234,61,101,190,118,46,163,214,91,231,98,234,61,101,190,118,16,182,141,50,127,48,
223,215,14,50,46,163,214,91,231,98,234,61,101,190,118,46,163,214,91,231,98,234,61,101,190,118,46,163,214,91,231,97,189,180,104,71,230,27,244,133,248,200,186,143,89,111,157,139,168,245,150,249,216,186,
143,89,111,157,128,182,141,11,127,152,111,209,211,227,34,234,61,101,190,118,46,163,214,91,231,96,45,163,66,223,230,27,244,116,248,200,186,143,89,111,157,135,22,209,161,15,152,111,210,16,227,34,234,61,
101,190,118,28,91,70,132,62,97,191,72,67,140,139,168,245,150,249,216,82,218,52,200,124,195,127,81,199,25,23,200,245,150,249,216,11,104,208,183,249,134,253,29,62,50,28,91,70,132,62,97,191,72,67,140,139,
168,245,150,249,216,186,143,89,111,157,139,168,245,150,249,216,186,143,89,111,157,139,168,245,150,249,216,186,143,89,111,157,139,168,245,150,249,216,186,143,89,111,157,139,168,245,150,249,216,94,218,52,
202,124,195,127,92,120,200,186,143,89,111,157,139,168,245,150,249,216,186,143,89,111,157,139,228,122,203,124,236,39,109,26,101,254,97,191,168,223,140,139,168,245,150,249,216,186,143,89,111,157,139,168,
245,150,249,216,111,109,26,17,249,134,253,33,126,50,46,163,214,91,231,98,234,61,101,190,118,27,219,70,132,126,97,191,72,95,140,139,168,245,150,249,216,27,104,208,184,249,134,253,29,78,50,46,163,214,91,
231,96,109,163,66,227,230,27,244,117,56,200,186,143,89,111,157,135,22,209,161,15,152,111,210,16,227,34,234,61,101,190,118,27,219,70,132,126,97,191,72,95,140,129,182,141,11,143,152,111,209,212,227,34,234,
61,101,190,118,46,163,214,91,231,98,234,61,101,190,118,46,163,214,91,231,98,234,61,101,190,118,46,163,214,91,231,98,234,61,101,190,118,46,163,214,91,231,98,234,61,101,190,118,2,218,52,45,254,97,191,71,
79,140,139,168,245,150,249,216,32,136,167,252,215,22,68,195,120,109,98,156,70,28,126,217,89,214,51,4,189,220,121,152,25,216,74,111,219,223,75,132,155,232,222,220,27,186,194,170,53,53,112,213,186,105,137,
149,23,105,170,180,217,179,140,117,5,98,177,102,66,36,4,252,66,212,146,203,10,141,103,87,182,116,211,225,146,51,202,196,245,225,42,202,188,86,92,61,39,1,246,250,66,244,238,29,20,130,154,18,156,137,129,
198,83,75,172,181,92,165,80,115,149,229,113,247,179,64,124,179,183,96,230,163,66,160,110,42,50,72,188,153,216,176,81,84,64,48,171,25,98,170,6,32,218,146,248,108,175,143,255,0,10,62,4,124,158,125,64,126,
97,11,254,79,63,180,182,168,49,45,180,116,181,11,227,149,221,141,149,241,202,238,198,194,184,228,55,14,108,43,142,67,112,230,194,88,229,247,13,172,47,142,87,118,48,174,57,13,195,159,2,134,57,45,216,106,
155,98,71,72,95,80,24,150,218,58,86,67,18,219,71,74,195,156,72,105,8,88,115,137,13,33,11,10,227,144,220,57,176,24,150,218,58,80,231,18,26,66,30,9,124,114,187,177,212,165,142,95,112,219,80,219,18,58,66,
246,91,98,71,72,94,192,226,92,232,234,216,28,75,157,29,91,14,113,33,164,33,97,182,36,116,133,224,113,46,116,117,124,16,98,91,104,233,88,79,250,183,6,135,31,182,86,117,140,193,39,119,30,102,6,116,250,111,
219,223,75,132,155,232,222,220,27,186,197,39,33,125,87,202,152,27,3,88,26,122,198,148,199,12,33,71,145,178,224,198,73,47,70,216,13,184,50,213,101,96,250,174,88,228,193,157,86,14,215,104,169,147,148,13,
48,199,110,162,102,18,74,23,46,67,182,201,86,149,138,77,159,152,231,126,221,55,174,72,131,211,169,105,67,59,72,170,2,110,76,112,186,39,1,151,80,190,63,252,40,248,17,242,121,245,1,249,132,47,249,60,254,
210,218,160,196,182,209,210,212,47,142,87,118,54,87,199,43,187,27,10,227,144,220,57,176,174,57,13,195,155,9,99,151,220,54,176,190,57,93,216,194,184,228,55,14,124,10,24,228,183,97,170,109,137,29,33,125,
64,98,91,104,233,89,12,75,109,29,43,14,113,33,164,33,97,206,36,52,132,44,43,142,67,112,230,192,98,91,104,233,67,156,72,105,8,120,37,241,202,238,199,82,150,57,125,195,109,67,108,72,233,11,217,109,137,29,
33,123,3,137,115,163,171,96,113,46,116,117,108,57,196,134,144,133,134,216,145,210,23,129,196,185,209,213,240,65,137,109,163,165,97,63,234,220,26,28,126,219,89,214,51,4,157,220,164,204,12,233,244,223,183,
190,151,9,55,209,189,184,55,117,138,78,66,249,132,169,129,176,53,129,167,172,105,76,112,194,20,121,27,46,12,100,146,244,109,128,219,142,77,86,177,121,88,56,152,101,48,12,91,44,237,108,25,100,156,124,18,
4,57,230,22,91,99,14,220,165,85,214,42,54,96,99,145,251,132,216,185,58,12,142,157,181,10,237,82,166,36,108,98,5,208,56,132,154,133,241,255,0,225,71,192,143,147,207,168,15,204,33,96,192,166,54,157,219,
17,90,81,224,150,252,21,0,183,28,217,29,151,25,248,230,200,236,184,207,199,54,71,101,198,126,57,178,59,46,51,241,205,145,217,113,159,128,248,116,104,91,235,184,232,233,241,241,205,145,217,113,159,142,
108,142,203,140,252,115,100,118,92,103,225,127,135,70,153,77,119,30,184,241,241,205,145,217,113,159,142,108,142,203,140,252,47,240,232,211,41,174,227,215,30,62,57,178,59,46,51,240,167,195,163,76,134,187,
143,81,199,31,28,217,29,151,25,248,83,225,209,166,67,93,199,168,227,143,142,108,142,203,140,252,39,240,232,211,47,174,227,212,111,199,199,54,71,101,198,126,23,248,116,105,148,215,113,235,143,31,10,124,
58,52,200,107,184,245,28,113,241,205,145,217,113,159,142,108,142,203,140,252,115,100,118,92,103,227,155,35,178,227,63,28,217,29,151,25,248,230,200,236,184,207,199,54,71,101,198,126,57,178,59,46,51,240,
135,195,163,76,158,187,143,92,56,248,230,200,236,184,207,199,54,71,101,198,126,57,178,59,46,51,241,205,145,217,113,159,142,108,142,203,140,252,55,248,116,104,71,93,199,72,95,143,142,108,142,203,140,252,
115,100,118,92,103,227,155,35,178,227,63,1,240,232,208,183,215,113,209,211,227,227,155,35,178,227,63,28,217,29,151,25,248,15,135,70,133,190,187,142,142,159,31,28,217,29,151,25,248,113,240,232,208,134,
187,142,144,135,31,28,217,29,151,25,248,113,240,232,208,134,187,142,144,135,31,28,217,29,151,25,248,83,225,209,166,67,93,199,168,227,143,142,108,142,203,140,252,7,195,163,66,223,93,199,71,79,143,135,31,
14,141,8,107,184,233,8,113,241,205,145,217,113,159,142,108,142,203,140,252,115,100,118,92,103,227,155,35,178,227,63,28,217,29,151,25,248,230,200,236,184,207,199,54,71,101,198,126,57,178,59,46,51,241,205,
145,217,113,159,133,254,29,26,101,53,220,122,227,199,199,54,71,101,198,126,57,178,59,46,51,241,205,145,217,113,159,142,108,142,203,140,252,39,240,232,211,47,174,227,212,111,199,199,54,71,101,198,126,57,
178,59,46,51,241,205,145,217,113,159,134,255,0,14,141,8,235,184,233,11,241,241,205,145,217,113,159,142,108,142,203,140,252,55,248,116,104,71,93,199,72,95,143,142,108,142,203,140,252,15,195,163,66,227,
93,199,71,83,143,142,108,142,203,140,252,15,195,163,66,227,93,199,71,83,143,142,108,142,203,140,252,56,248,116,104,67,93,199,72,67,143,142,108,142,203,140,252,55,248,116,104,71,93,199,72,95,143,129,248,
116,104,92,107,184,232,234,113,241,205,145,217,113,159,142,108,142,203,140,252,115,100,118,92,103,227,155,35,178,227,63,28,217,29,151,25,248,230,200,236,184,207,199,54,71,101,198,126,57,178,59,46,51,241,
205,145,217,113,159,128,248,116,104,91,235,184,232,233,241,241,205,145,217,113,159,132,228,69,50,223,91,1,90,91,195,122,202,152,33,199,237,149,157,99,48,73,221,199,153,129,157,62,155,246,247,210,225,38,
250,55,183,6,238,176,164,181,85,92,51,112,100,196,201,3,183,201,22,73,103,20,138,10,38,169,145,58,137,207,46,176,150,89,46,195,194,214,117,194,85,107,57,173,215,22,138,146,178,2,86,238,90,173,133,104,
213,119,117,83,7,238,218,52,73,110,17,65,40,78,52,208,2,200,105,20,76,143,158,215,173,140,242,175,127,247,115,199,13,154,180,173,65,42,253,90,253,128,21,53,153,9,170,244,72,144,42,184,138,74,3,172,8,149,
32,148,37,189,212,47,143,255,0,10,62,4,124,158,125,64,126,97,11,254,79,63,180,182,168,49,45,180,116,181,11,227,149,221,141,149,241,202,238,198,194,184,228,55,14,108,43,142,67,112,230,194,88,229,247,13,
172,47,142,87,118,48,174,57,13,195,159,2,134,57,45,216,106,155,98,71,72,95,80,24,150,218,58,86,67,18,219,71,74,195,156,72,105,8,88,115,137,13,33,11,10,227,144,220,57,176,24,150,218,58,80,231,18,26,66,
30,9,124,114,187,177,212,165,142,95,112,219,80,219,18,58,66,246,91,98,71,72,94,192,226,92,232,234,216,28,75,157,29,91,14,113,33,164,33,97,182,36,116,133,224,113,46,116,117,124,16,98,91,104,233,88,79,250,
183,6,135,31,182,86,117,140,193,39,119,30,102,6,116,250,111,219,223,75,132,155,232,222,220,27,186,197,39,33,124,194,84,192,216,26,192,211,214,55,164,112,194,20,121,27,46,12,100,146,244,109,128,219,213,
47,143,255,0,10,62,4,124,158,125,64,126,97,11,12,169,219,7,119,86,68,6,218,74,221,1,60,161,23,81,235,45,243,177,117,30,178,223,59,23,81,235,45,243,177,117,30,178,223,59,23,81,235,45,243,176,22,209,161,
111,243,13,250,58,124,100,93,71,172,183,206,197,212,122,203,124,236,93,71,172,183,206,194,246,209,166,83,230,27,250,227,198,69,212,122,203,124,236,93,71,172,183,206,194,246,209,166,83,230,27,250,227,198,
69,212,122,203,124,236,41,109,26,100,62,97,191,168,227,140,139,228,122,203,124,236,41,109,26,100,62,97,191,168,227,140,139,228,122,203,124,236,39,109,26,101,254,97,191,168,223,140,139,168,245,150,249,
216,94,218,52,202,124,195,127,92,120,200,82,218,52,200,124,195,127,81,199,25,23,200,245,150,249,216,186,143,89,111,157,139,168,245,150,249,216,186,143,89,111,157,139,168,245,150,249,216,186,143,89,111,
157,139,168,245,150,249,216,186,143,89,111,157,132,45,163,76,159,204,55,245,195,140,139,168,245,150,249,216,186,143,89,111,157,139,168,245,150,249,216,186,143,89,111,157,139,168,245,150,249,216,111,109,
26,17,249,134,253,33,126,50,46,163,214,91,231,98,234,61,101,190,118,46,163,214,91,231,96,45,163,66,223,230,27,244,116,248,200,186,143,89,111,157,139,168,245,150,249,216,11,104,208,183,249,134,253,29,62,
50,46,163,214,91,231,97,197,180,104,67,230,27,244,132,56,200,186,143,89,111,157,135,22,209,161,15,152,111,210,16,227,34,234,61,101,190,118,20,182,141,50,31,48,223,212,113,198,69,242,61,101,190,118,2,218,
52,45,254,97,191,71,79,140,135,22,209,161,15,152,111,210,16,227,34,234,61,101,190,118,46,163,214,91,231,98,234,61,101,190,118,46,163,214,91,231,98,234,61,101,190,118,46,163,214,91,231,98,234,61,101,190,
118,46,163,214,91,231,98,234,61,101,190,118,23,182,141,50,159,48,223,215,30,50,46,163,214,91,231,98,234,61,101,190,118,46,163,214,91,231,98,249,30,178,223,59,9,219,70,153,127,152,111,234,55,227,34,234,
61,101,190,118,46,163,214,91,231,98,234,61,101,190,118,27,219,70,132,126,97,191,72,95,140,139,168,245,150,249,216,186,143,89,111,157,134,246,209,161,31,152,111,210,23,227,34,234,61,101,190,118,6,218,52,
46,62,97,191,71,83,140,139,168,245,150,249,216,27,104,208,184,249,134,253,29,78,50,46,163,214,91,231,97,197,180,104,67,230,27,244,132,56,200,186,143,89,111,157,134,246,209,161,31,152,111,210,23,227,32,
109,163,66,227,230,27,244,117,56,200,186,143,89,111,157,139,168,245,150,249,216,186,143,89,111,157,139,168,245,150,249,216,186,143,89,111,157,139,168,245,150,249,216,186,143,89,111,157,139,168,245,150,
249,216,186,143,89,111,157,128,182,141,11,127,152,111,209,211,227,34,234,61,101,190,118,8,34,41,255,0,53,197,145,48,222,27,88,167,17,135,31,182,86,117,140,193,47,119,30,102,6,118,18,155,246,247,210,225,
38,250,55,183,6,238,176,170,141,77,92,53,110,154,98,101,69,218,106,173,54,108,227,29,65,88,172,89,144,137,1,63,16,181,36,178,192,85,245,162,181,130,120,116,149,6,156,128,173,173,184,34,102,87,226,21,112,
38,193,34,4,76,111,83,56,152,127,11,177,87,131,195,86,33,88,215,102,175,1,130,173,150,110,70,76,194,168,100,85,147,23,141,213,106,162,206,249,67,153,74,105,138,163,131,37,185,70,230,161,124,127,248,81,
240,35,228,243,234,3,243,8,95,242,121,253,165,181,65,137,109,163,165,168,95,28,174,236,108,175,142,87,118,54,21,199,33,184,115,97,92,114,27,135,54,18,199,47,184,109,97,124,114,187,177,133,113,200,110,
28,248,20,49,201,110,195,84,219,18,58,66,250,128,196,182,209,210,178,24,150,218,58,86,28,226,67,72,66,195,156,72,105,8,88,87,28,134,225,205,128,196,182,209,210,135,56,144,210,16,240,75,227,149,221,142,
165,44,114,251,134,218,134,216,145,210,23,178,219,18,58,66,246,7,18,231,71,86,192,226,92,232,234,216,115,137,13,33,11,13,177,35,164,47,3,137,115,163,171,224,131,18,219,71,74,194,127,213,184,52,56,253,
178,179,172,102,9,59,184,243,48,51,167,211,126,222,250,92,36,223,70,246,224,221,214,41,57,11,234,190,84,192,216,26,192,211,214,52,166,56,97,10,60,141,151,6,50,73,122,54,192,109,194,79,89,43,129,114,140,
236,18,147,19,82,108,242,25,51,122,10,148,228,25,72,113,186,16,181,92,209,201,19,106,183,42,17,3,52,100,178,201,11,214,229,104,240,90,59,93,186,142,217,11,166,196,2,41,129,57,39,20,45,234,23,199,255,0,
133,31,2,62,79,62,160,63,48,133,255,0,39,159,218,91,84,24,150,218,58,90,133,241,202,238,198,202,248,229,119,99,97,92,114,27,135,54,21,199,33,184,115,97,44,114,251,134,214,23,199,43,187,24,87,28,134,225,
207,129,67,28,150,236,53,77,177,35,164,47,168,12,75,109,29,43,33,137,109,163,165,97,206,36,52,132,44,57,196,134,144,133,133,113,200,110,28,216,12,75,109,29,40,115,137,13,33,15,4,190,57,93,216,234,82,199,
47,184,109,168,109,137,29,33,123,45,177,35,164,47,96,113,46,116,117,108,14,37,206,142,173,135,56,144,210,16,176,219,18,58,66,240,56,151,58,58,190,8,49,45,180,116,172,39,253,91,131,67,143,219,107,58,198,
96,147,187,143,51,3,58,125,55,237,239,165,194,77,244,111,110,13,221,98,147,144,190,97,42,96,108,13,96,105,235,26,83,28,48,133,30,70,203,131,25,36,189,27,96,54,224,91,213,140,30,86,46,0,130,168,160,197,
170,238,214,4,138,37,41,148,20,208,34,135,2,20,199,0,150,229,184,49,14,83,16,228,48,148,228,48,9,76,83,20,100,49,76,81,182,6,40,234,23,199,255,0,133,31,2,62,79,62,160,63,48,133,255,0,39,159,218,91,84,
24,150,218,58,90,133,241,202,238,198,202,248,229,119,99,97,92,114,27,135,54,21,199,33,184,115,97,44,114,251,134,214,23,199,43,187,24,87,28,134,225,207,129,67,28,150,236,53,77,177,35,164,47,168,12,75,109,
29,43,33,137,109,163,165,97,206,36,52,132,44,57,196,134,144,133,133,113,200,110,28,216,12,75,109,29,40,115,137,13,33,15,4,190,57,93,216,234,82,199,47,184,109,168,109,137,29,33,123,45,177,35,164,47,96,
113,46,116,117,108,14,37,206,142,173,135,56,144,210,16,176,219,18,58,66,240,56,151,58,58,190,8,49,45,180,116,172,39,253,91,131,66,255,0,182,86,117,140,193,47,119,30,102,6,116,250,111,219,223,75,132,155,
232,222,220,27,186,194,146,213,85,112,205,193,147,19,36,14,223,36,89,37,156,82,40,40,154,166,68,234,39,60,186,194,89,100,187,21,229,88,238,181,10,148,245,129,106,181,16,124,162,47,86,66,86,15,202,186,
136,41,250,114,14,93,148,226,83,97,19,144,130,89,233,4,162,91,67,21,213,98,218,94,78,250,180,124,233,25,192,37,57,146,93,202,138,17,67,148,68,102,168,160,26,113,131,241,29,66,248,255,0,240,163,224,71,
201,231,212,7,230,16,191,228,243,251,75,106,131,18,219,71,75,80,190,57,93,216,217,95,28,174,236,108,43,142,67,112,230,194,184,228,55,14,108,37,142,95,112,218,194,248,229,119,99,10,227,144,220,57,240,40,
99,146,221,134,169,182,36,116,133,245,1,137,109,163,165,100,49,45,180,116,172,57,196,134,144,133,135,56,144,210,16,176,174,57,13,195,155,1,137,109,163,165,14,113,33,164,33,224,151,199,43,187,29,74,88,
229,247,13,181,13,177,35,164,47,101,182,36,116,133,236,14,37,206,142,173,129,196,185,209,213,176,231,18,26,66,22,27,98,71,72,94,7,18,231,71,87,193,6,37,182,142,149,132,255,0,171,112,104,113,251,101,103,
88,204,18,119,113,230,96,103,79,166,253,189,244,184,73,190,141,237,193,187,172,82,114,23,204,37,76,13,129,172,13,61,99,122,71,12,33,71,145,178,224,198,73,47,70,216,13,189,82,248,255,0,240,163,224,71,201,
231,212,7,230,16,176,202,157,176,119,117,100,64,109,164,173,208,19,202,17,117,30,178,223,59,23,81,235,45,243,177,117,30,178,223,59,23,81,235,45,243,177,117,30,178,223,59,1,109,26,22,255,0,48,223,163,167,
198,69,212,122,203,124,236,93,71,172,183,206,197,212,122,203,124,236,47,109,26,101,62,97,191,174,60,100,93,71,172,183,206,197,212,122,203,124,236,47,109,26,101,62,97,191,174,60,100,93,71,172,183,206,194,
150,209,166,67,230,27,250,142,56,200,190,71,172,183,206,194,150,209,166,67,230,27,250,142,56,200,190,71,172,183,206,194,118,209,166,95,230,27,250,141,248,200,186,143,89,111,157,133,237,163,76,167,204,
55,245,199,140,133,45,163,76,135,204,55,245,28,113,145,124,143,89,111,157,139,168,245,150,249,216,186,143,89,111,157,139,168,245,150,249,216,186,143,89,111,157,139,168,245,150,249,216,186,143,89,111,157,
139,168,245,150,249,216,66,218,52,201,252,195,127,92,56,200,186,143,89,111,157,139,168,245,150,249,216,186,143,89,111,157,139,168,245,150,249,216,186,143,89,111,157,134,246,209,161,31,152,111,210,23,227,
34,234,61,101,190,118,46,163,214,91,231,98,234,61,101,190,118,2,218,52,45,254,97,191,71,79,140,139,168,245,150,249,216,186,143,89,111,157,128,182,141,11,127,152,111,209,211,227,34,234,61,101,190,118,28,
91,70,132,62,97,191,72,67,140,139,168,245,150,249,216,113,109,26,16,249,134,253,33,14,50,46,163,214,91,231,97,75,104,211,33,243,13,253,71,28,100,95,35,214,91,231,96,45,163,66,223,230,27,244,116,248,200,
113,109,26,16,249,134,253,33,14,50,46,163,214,91,231,98,234,61,101,190,118,46,163,214,91,231,98,234,61,101,190,118,46,163,214,91,231,98,234,61,101,190,118,46,163,214,91,231,98,234,61,101,190,118,46,163,
214,91,231,97,123,104,211,41,243,13,253,113,227,34,234,61,101,190,118,46,163,214,91,231,98,234,61,101,190,118,47,145,235,45,243,176,157,180,105,151,249,134,254,163,126,50,46,163,214,91,231,98,234,61,101,
190,118,46,163,214,91,231,97,189,180,104,71,230,27,244,133,248,200,186,143,89,111,157,139,168,245,150,249,216,111,109,26,17,249,134,253,33,126,50,46,163,214,91,231,96,109,163,66,227,230,27,244,117,56,
200,186,143,89,111,157,129,182,141,11,143,152,111,209,212,227,34,234,61,101,190,118,28,91,70,132,62,97,191,72,67,140,139,168,245,150,249,216,111,109,26,17,249,134,253,33,126,50,6,218,52,46,62,97,191,71,
83,140,139,168,245,150,249,216,186,143,89,111,157,139,168,245,150,249,216,186,143,89,111,157,139,168,245,150,249,216,186,143,89,111,157,139,168,245,150,249,216,186,143,89,111,157,139,168,245,150,249,216,
11,104,208,183,249,134,253,29,62,50,46,163,214,91,231,96,130,34,159,243,92,89,19,13,225,181,138,113,24,113,251,101,103,88,204,18,247,113,230,96,103,97,41,191,111,125,46,18,111,163,123,112,110,235,10,168,
212,213,195,86,233,166,38,84,93,166,170,211,102,206,49,212,21,138,197,153,8,144,19,241,11,82,75,44,58,112,205,131,199,72,49,76,21,124,187,102,203,46,139,52,132,14,96,81,210,137,16,196,110,152,130,70,182,
105,3,209,31,194,62,210,6,174,107,94,71,92,183,122,181,98,163,130,52,43,159,219,20,92,29,3,36,18,194,38,142,24,173,77,131,158,162,178,8,128,143,225,21,67,218,176,30,38,210,182,171,140,236,27,191,112,131,
167,45,150,66,177,127,87,46,152,184,110,217,153,22,72,198,101,60,134,193,18,250,73,45,89,95,31,254,20,124,8,249,60,250,128,252,194,23,252,158,127,105,109,80,98,91,104,233,106,23,199,43,187,27,43,227,149,
221,141,133,113,200,110,28,216,87,28,134,225,205,132,177,203,238,27,88,95,28,174,236,97,92,114,27,135,62,5,12,114,91,176,213,54,196,142,144,190,160,49,45,180,116,172,134,37,182,142,149,135,56,144,210,
16,176,231,18,26,66,22,21,199,33,184,115,96,49,45,180,116,161,206,36,52,132,60,18,248,229,119,99,169,75,28,190,225,182,161,182,36,116,133,236,182,196,142,144,189,129,196,185,209,213,176,56,151,58,58,182,
28,226,67,72,66,195,108,72,233,11,192,226,92,232,234,248,32,196,182,209,210,176,159,245,110,13,14,63,108,172,235,25,130,78,238,60,204,12,233,244,223,183,190,151,9,55,209,189,184,55,117,138,78,66,250,175,
149,48,54,6,176,52,245,141,41,142,24,66,143,35,101,193,140,146,94,141,176,27,118,42,163,160,236,201,30,165,49,207,86,24,132,72,5,176,170,224,206,84,247,124,49,78,177,134,80,82,112,8,12,151,182,161,37,
159,40,145,140,131,114,53,64,136,53,104,197,186,13,211,49,206,84,80,104,197,6,205,81,79,8,169,141,33,72,18,152,194,55,70,202,248,255,0,240,163,224,71,201,231,212,7,230,16,191,228,243,251,75,106,131,18,
219,71,75,80,190,57,93,216,217,95,28,174,236,108,43,142,67,112,230,194,184,228,55,14,108,37,142,95,112,218,194,248,229,119,99,10,227,144,220,57,240,40,99,146,221,134,169,182,36,116,133,245,1,137,109,163,
165,100,49,45,180,116,172,57,196,134,144,133,135,56,144,210,16,176,174,57,13,195,155,1,137,109,163,165,14,113,33,164,33,224,151,199,43,187,29,74,88,229,247,13,181,13,177,35,164,47,101,182,36,116,133,236,
14,37,206,142,173,129,196,185,209,213,176,231,18,26,66,22,27,98,71,72,94,7,18,231,71,87,193,6,37,182,142,149,132,255,0,171,112,104,113,251,109,103,88,204,18,119,113,230,96,103,79,166,253,189,244,184,73,
190,141,237,193,187,172,82,114,23,204,37,76,13,129,172,13,61,99,74,99,134,16,163,200,217,112,99,36,151,163,108,6,221,134,42,41,85,86,73,146,179,20,194,173,57,216,186,41,43,1,90,110,8,24,152,82,0,118,42,
207,9,179,39,75,44,11,90,197,155,182,14,64,165,48,183,122,221,102,171,129,79,108,134,20,151,33,20,2,152,46,90,178,190,63,252,40,248,17,242,121,245,1,249,132,45,41,20,17,145,220,178,42,80,10,37,101,181,
129,25,34,137,108,185,59,52,81,45,151,39,102,138,37,178,228,236,209,68,182,92,157,154,40,150,203,147,179,64,112,75,80,183,247,228,232,233,255,0,175,20,75,101,201,217,162,137,108,185,59,52,81,45,151,39,
102,133,248,37,169,148,247,228,245,199,253,120,162,91,46,78,205,20,75,101,201,217,161,126,9,106,101,61,249,61,113,255,0,94,40,150,203,147,179,66,156,26,212,200,123,242,122,142,63,215,138,37,178,228,236,
208,167,6,181,50,30,252,158,163,143,245,226,137,108,185,59,52,39,193,173,76,191,191,39,168,223,253,120,162,91,46,78,205,11,240,75,83,41,239,201,235,143,250,240,167,6,181,50,30,252,158,163,143,245,226,
137,108,185,59,52,81,45,151,39,102,138,37,178,228,236,209,68,182,92,157,154,40,150,203,147,179,69,18,217,114,118,104,162,91,46,78,205,20,75,101,201,217,161,14,9,106,100,253,249,61,112,255,0,94,40,150,
203,147,179,69,18,217,114,118,104,162,91,46,78,205,20,75,101,201,217,162,137,108,185,59,52,55,224,214,161,31,126,78,144,191,250,241,68,182,92,157,154,40,150,203,147,179,69,18,217,114,118,104,14,9,106,
22,254,252,157,29,63,245,226,137,108,185,59,52,81,45,151,39,102,128,224,150,161,111,239,201,209,211,255,0,94,40,150,203,147,179,67,142,13,106,16,247,228,233,8,127,175,20,75,101,201,217,161,199,6,181,8,
123,242,116,132,63,215,138,37,178,228,236,208,167,6,181,50,30,252,158,163,143,245,226,137,108,185,59,52,7,4,181,11,127,126,78,142,159,250,240,227,131,90,132,61,249,58,66,31,235,197,18,217,114,118,104,
162,91,46,78,205,20,75,101,201,217,162,137,108,185,59,52,81,45,151,39,102,138,37,178,228,236,209,68,182,92,157,154,40,150,203,147,179,69,18,217,114,118,104,95,130,90,153,79,126,79,92,127,215,138,37,178,
228,236,209,68,182,92,157,154,40,150,203,147,179,69,18,217,114,118,104,79,131,90,153,127,126,79,81,191,250,241,68,182,92,157,154,40,150,203,147,179,69,18,217,114,118,104,111,193,173,66,62,252,157,33,127,
245,226,137,108,185,59,52,81,45,151,39,102,134,252,26,212,35,239,201,210,23,255,0,94,40,150,203,147,179,64,240,75,80,184,247,228,232,234,127,175,20,75,101,201,217,160,120,37,168,92,123,242,116,117,63,
215,138,37,178,228,236,208,227,131,90,132,61,249,58,66,31,235,197,18,217,114,118,120,111,193,173,66,62,252,157,33,127,245,224,120,37,168,92,123,242,116,117,63,215,138,37,178,228,236,209,68,182,92,157,
154,40,150,203,147,179,69,18,217,114,118,104,162,91,46,78,205,20,75,101,201,217,162,137,108,185,59,52,81,45,151,39,102,138,37,178,228,236,208,28,18,212,45,253,249,58,58,127,235,197,18,217,114,118,104,
36,210,40,3,233,91,21,74,96,188,54,176,34,88,113,251,101,103,88,204,18,119,113,230,96,103,79,166,253,189,244,184,73,190,141,237,193,187,172,41,45,85,87,12,220,25,49,50,64,237,242,69,146,89,197,34,130,
137,170,100,78,162,115,203,172,37,150,75,176,232,30,54,120,186,231,76,1,138,141,159,162,213,38,234,200,121,78,233,5,106,231,167,120,156,225,47,162,69,16,27,67,110,221,170,157,64,251,157,189,100,135,234,
134,125,91,60,69,173,116,90,207,151,188,171,149,101,250,129,91,58,170,153,180,110,194,166,41,166,166,146,10,157,83,93,0,189,34,117,11,22,143,211,173,63,73,170,5,154,239,210,77,226,72,168,170,181,165,100,
252,16,110,87,232,182,114,40,53,73,225,74,2,100,201,110,91,82,73,101,124,127,248,81,240,35,228,243,234,3,243,8,95,242,121,253,165,181,65,137,109,163,165,168,95,28,174,236,108,175,142,87,118,54,21,199,
33,184,115,97,92,114,27,135,54,18,199,47,184,109,97,124,114,187,177,133,113,200,110,28,248,20,49,201,110,195,84,219,18,58,66,250,128,196,182,209,210,178,24,150,218,58,86,28,226,67,72,66,195,156,72,105,
8,88,87,28,134,225,205,128,196,182,209,210,135,56,144,210,16,240,75,227,149,221,142,165,44,114,251,134,218,134,216,145,210,23,178,219,18,58,66,246,7,18,231,71,86,192,226,92,232,234,216,115,137,13,33,11,
13,177,35,164,47,3,137,115,163,171,224,131,18,219,71,74,194,127,213,184,52,56,253,178,179,172,102,9,59,184,243,48,51,167,211,126,222,250,92,36,223,70,246,224,221,214,41,57,11,230,18,166,6,192,214,6,158,
177,189,35,134,16,163,200,217,112,99,36,151,163,108,6,222,169,124,127,248,81,240,35,228,243,234,3,243,8,88,65,37,4,4,29,200,32,67,72,50,164,172,146,12,154,241,64,182,72,251,81,64,182,72,251,81,64,182,
72,251,81,64,182,72,251,81,64,182,72,251,80,28,2,212,45,253,217,250,58,126,40,160,91,36,125,168,160,91,36,125,168,160,91,36,125,236,47,192,45,76,167,187,63,174,62,40,160,91,36,125,168,160,91,36,125,236,
47,192,45,76,167,187,63,174,62,40,160,91,36,125,168,87,128,90,153,15,118,127,81,199,138,40,22,201,31,123,10,240,11,83,33,238,207,234,56,241,69,2,217,35,239,97,46,1,106,101,253,217,253,70,254,40,160,91,
36,125,236,47,192,45,76,167,187,63,174,62,40,87,128,90,153,15,118,127,81,199,138,40,22,201,31,123,20,11,100,143,181,20,11,100,143,181,20,11,100,143,181,20,11,100,143,181,20,11,100,143,181,20,11,100,143,
181,20,11,100,143,181,8,112,11,83,39,238,207,235,135,138,40,22,201,31,123,20,11,100,143,181,20,11,100,143,181,20,11,100,143,181,20,11,100,143,181,13,248,5,168,71,221,159,164,47,226,138,5,178,71,218,138,
5,178,71,218,138,5,178,71,218,128,224,22,161,111,238,207,209,211,241,69,2,217,35,237,69,2,217,35,237,64,112,11,80,183,247,103,232,233,248,162,129,108,145,246,161,199,0,181,8,123,179,244,132,60,81,64,182,
72,251,80,227,128,90,132,61,217,250,66,30,40,160,91,36,125,168,87,128,90,153,15,118,127,81,199,138,40,22,201,31,123,1,192,45,66,223,221,159,163,167,226,135,28,2,212,33,238,207,210,16,241,69,2,217,35,237,
69,2,217,35,237,69,2,217,35,237,69,2,217,35,237,69,2,217,35,237,69,2,217,35,237,69,2,217,35,237,69,2,217,35,237,69,2,217,35,239,97,126,1,106,101,61,217,253,113,241,69,2,217,35,237,69,2,217,35,237,69,2,
217,35,237,69,2,217,35,239,97,46,1,106,101,253,217,253,70,254,40,160,91,36,125,168,160,91,36,125,168,160,91,36,125,168,111,192,45,66,62,236,253,33,127,20,80,45,146,62,212,80,45,146,62,212,55,224,22,161,
31,118,126,144,191,138,40,22,201,31,106,7,128,90,133,199,187,63,71,83,197,20,11,100,143,181,3,192,45,66,227,221,159,163,169,226,138,5,178,71,218,135,28,2,212,33,238,207,210,16,241,69,2,217,35,237,67,126,
1,106,17,247,103,233,11,248,160,120,5,168,92,123,179,244,117,60,81,64,182,72,251,81,64,182,72,251,81,64,182,72,251,81,64,182,72,251,81,64,182,72,251,81,64,182,72,251,81,64,182,72,251,81,64,182,72,251,
81,64,182,72,251,80,28,2,212,45,253,217,250,58,126,40,160,91,36,125,168,32,153,37,10,30,149,177,33,128,47,13,248,132,56,253,178,179,172,102,9,123,184,243,48,51,176,148,223,183,190,151,9,55,209,189,184,
55,117,133,84,106,106,225,171,116,211,19,42,46,211,85,105,179,103,24,234,10,197,98,204,132,72,9,248,133,169,37,150,197,78,163,106,225,198,2,180,122,45,185,67,250,149,122,185,35,182,69,144,190,119,90,85,
32,163,181,28,86,172,91,166,81,44,225,77,1,19,205,11,83,162,174,93,147,197,95,48,173,24,139,214,203,174,204,24,46,92,27,199,76,87,110,187,98,186,122,153,21,73,118,131,122,169,192,74,32,54,87,199,255,0,
133,29,78,13,178,10,46,109,112,76,162,51,67,241,48,220,40,126,112,6,93,154,197,40,136,4,224,0,80,37,53,160,1,20,196,224,2,35,6,77,66,137,14,65,18,152,166,9,12,83,5,161,1,1,184,32,54,7,201,231,212,7,230,
16,191,228,243,251,75,106,131,18,219,71,75,80,190,57,93,216,217,95,28,174,236,108,43,142,67,112,230,194,184,228,55,14,108,37,142,95,112,218,194,248,229,119,99,10,227,144,220,57,240,40,99,146,221,134,169,
182,36,116,133,245,1,137,109,163,165,100,49,45,180,116,172,57,196,134,144,133,135,56,144,210,16,176,174,57,13,195,155,1,137,109,163,165,14,113,33,164,33,224,151,199,43,187,29,74,88,229,247,13,181,13,177,
35,164,47,101,182,36,116,133,236,14,37,206,142,173,129,196,185,209,213,176,231,18,26,66,22,27,98,71,72,94,7,18,231,71,87,193,6,37,182,142,149,132,255,0,171,112,104,113,251,101,103,88,204,18,119,113,230,
96,103,79,166,253,189,244,184,73,190,141,237,193,187,172,82,114,23,213,124,169,129,176,53,129,167,172,105,76,112,194,20,121,27,46,12,100,146,244,109,128,219,135,77,217,190,120,213,7,201,130,79,144,108,
233,100,17,120,144,1,202,9,186,77,35,148,142,19,0,84,214,143,40,122,67,248,195,81,101,85,84,117,112,55,172,147,173,86,77,155,71,32,131,247,73,182,85,152,131,150,203,61,93,186,45,213,108,186,133,50,109,
138,129,61,49,181,114,70,159,8,205,131,118,13,1,147,54,76,1,200,55,65,28,58,238,141,32,188,114,241,202,138,42,225,209,206,99,29,67,8,136,254,22,87,199,255,0,133,29,77,90,197,154,234,180,110,229,168,191,
120,178,2,41,44,233,69,92,44,145,17,21,138,51,129,52,83,70,216,4,146,203,110,48,105,150,176,122,225,219,134,136,20,138,186,80,204,209,108,117,131,148,168,9,137,134,87,114,90,45,173,127,206,87,169,207,
58,152,55,142,211,194,40,97,49,207,49,194,132,156,99,12,162,38,25,44,15,147,207,168,15,204,33,127,201,231,246,150,213,6,37,182,142,150,161,124,114,187,177,178,190,57,93,216,216,87,28,134,225,205,133,113,
200,110,28,216,75,28,190,225,181,133,241,202,238,198,21,199,33,184,115,224,80,199,37,187,13,83,108,72,233,11,234,3,18,219,71,74,200,98,91,104,233,88,115,137,13,33,11,14,113,33,164,33,97,92,114,27,135,
54,3,18,219,71,74,28,226,67,72,67,193,47,142,87,118,58,148,177,203,238,27,106,27,98,71,72,94,203,108,72,233,11,216,28,75,157,29,91,3,137,115,163,171,97,206,36,52,132,44,54,196,142,144,188,14,37,206,142,
175,130,12,75,109,29,43,9,255,0,86,224,208,227,246,202,206,177,152,36,238,227,204,192,206,159,77,251,123,233,112,147,125,27,219,131,119,88,164,228,47,152,74,152,27,3,88,26,122,198,148,199,12,33,71,145,
178,224,198,73,47,70,216,13,189,82,248,255,0,240,163,169,45,95,91,181,114,171,84,212,80,236,223,50,154,103,13,48,198,158,162,42,38,122,68,48,158,150,184,132,97,42,148,95,86,79,195,155,168,237,16,110,201,
169,238,2,167,45,165,20,57,46,128,92,252,174,196,167,52,243,140,166,57,198,233,142,97,156,99,15,230,54,7,201,231,212,7,230,16,176,2,170,0,0,59,144,0,230,0,9,18,86,77,125,104,167,91,42,125,184,167,91,42,
125,184,167,91,42,125,184,167,91,42,125,184,167,91,42,125,184,14,29,106,22,254,240,253,29,63,28,83,173,149,62,220,83,173,149,62,220,83,173,149,62,220,47,195,173,76,167,188,63,174,62,56,167,91,42,125,184,
167,91,42,125,184,95,135,90,153,79,120,127,92,124,113,78,182,84,251,112,167,14,181,50,30,240,254,163,143,28,83,173,149,62,220,41,195,173,76,135,188,63,168,227,199,20,235,101,79,183,9,240,235,83,47,239,
15,234,55,241,197,58,217,83,237,194,252,58,212,202,123,195,250,227,227,133,56,117,169,144,247,135,245,28,120,226,157,108,169,246,226,157,108,169,246,226,157,108,169,246,226,157,108,169,246,226,157,108,
169,246,226,157,108,169,246,226,157,108,169,246,226,157,108,169,246,225,14,29,106,100,253,225,253,112,241,197,58,217,83,237,197,58,217,83,237,197,58,217,83,237,197,58,217,83,237,197,58,217,83,237,195,
126,29,106,17,247,135,233,11,248,226,157,108,169,246,226,157,108,169,246,226,157,108,169,246,224,56,117,168,91,251,195,244,116,252,113,78,182,84,251,113,78,182,84,251,112,28,58,212,45,253,225,250,58,126,
56,167,91,42,125,184,113,195,173,66,30,240,253,33,15,28,83,173,149,62,220,56,225,214,161,15,120,126,144,135,142,41,214,202,159,110,20,225,214,166,67,222,31,212,113,227,138,117,178,167,219,128,225,214,
161,111,239,15,209,211,241,195,142,29,106,16,247,135,233,8,120,226,157,108,169,246,226,157,108,169,246,226,157,108,169,246,226,157,108,169,246,226,157,108,169,246,226,157,108,169,246,226,157,108,169,246,
226,157,108,169,246,226,157,108,169,246,225,126,29,106,101,61,225,253,113,241,197,58,217,83,237,197,58,217,83,237,197,58,217,83,237,197,58,217,83,237,194,124,58,212,203,251,195,250,141,252,113,78,182,
84,251,113,78,182,84,251,113,78,182,84,251,112,223,135,90,132,125,225,250,66,254,56,167,91,42,125,184,167,91,42,125,184,111,195,173,66,62,240,253,33,127,28,83,173,149,62,220,15,14,181,11,143,120,126,142,
167,142,41,214,202,159,110,7,135,90,133,199,188,63,71,83,199,20,235,101,79,183,14,56,117,168,67,222,31,164,33,227,138,117,178,167,219,134,252,58,212,35,239,15,210,23,241,192,240,235,80,184,247,135,232,
234,120,226,157,108,169,246,226,157,108,169,246,226,157,108,169,246,226,157,108,169,246,226,157,108,169,246,226,157,108,169,246,226,157,108,169,246,226,157,108,169,246,226,157,108,169,246,224,56,117,168,
91,251,195,244,116,252,113,78,182,84,251,112,64,50,170,24,6,117,161,57,132,47,13,248,140,45,250,131,167,173,164,16,193,114,58,189,7,211,239,231,225,48,213,157,93,130,155,106,73,39,203,46,182,186,130,141,
101,92,29,80,33,133,34,41,81,178,73,51,169,32,204,42,138,151,238,21,140,153,12,107,166,2,30,79,192,110,67,161,120,229,226,11,149,57,89,38,217,138,46,145,112,172,135,148,142,151,86,177,102,118,105,206,
2,250,68,77,113,182,62,141,171,127,106,32,203,238,10,133,70,245,77,126,235,0,97,70,177,73,192,174,230,170,100,4,173,171,20,223,213,136,2,96,74,230,85,39,159,130,77,16,33,10,99,224,205,37,70,15,95,161,
90,86,232,84,216,42,213,234,15,219,214,128,117,191,83,172,149,106,146,213,131,101,23,73,219,148,42,245,18,41,143,132,61,169,11,47,163,101,124,127,248,81,212,213,31,254,185,65,255,0,243,93,7,254,16,3,254,
245,92,30,203,77,184,123,255,0,222,58,210,20,176,62,79,62,160,63,48,133,255,0,39,159,218,91,84,24,150,218,58,90,133,241,202,238,198,202,248,229,119,99,97,92,114,27,135,54,21,199,33,184,115,97,44,114,251,
134,214,23,199,43,187,24,87,28,134,225,207,129,67,28,150,236,53,77,177,35,164,47,168,12,75,109,29,43,33,137,109,163,165,97,206,36,52,132,44,57,196,134,144,133,133,113,200,110,28,216,12,75,109,29,40,115,
137,13,33,15,4,190,57,93,216,234,82,199,47,184,109,168,109,137,29,33,123,45,177,35,164,47,96,113,46,116,117,108,14,37,206,142,173,135,56,144,210,16,176,219,18,58,66,240,56,151,58,58,190,8,49,45,180,116,
172,39,253,91,131,67,175,222,235,186,159,8,41,247,50,88,78,81,51,11,206,63,119,170,228,193,79,244,47,239,134,230,185,21,253,82,180,173,164,64,164,229,21,186,120,55,36,144,234,27,2,64,253,70,179,224,11,
58,80,244,194,217,135,209,215,29,74,248,255,0,240,163,169,4,25,86,192,131,100,229,193,34,44,153,43,48,4,68,195,233,168,220,199,31,72,117,196,99,191,75,255,0,167,85,221,150,4,234,159,8,169,204,99,168,121,
0,179,212,56,137,142,105,165,0,40,74,97,214,176,62,79,62,160,63,48,131,149,6,234,46,117,121,86,12,137,6,17,67,206,73,91,210,16,68,227,106,40,253,178,111,162,143,219,38,250,40,253,178,111,162,143,219,38,
250,40,253,178,111,161,49,81,178,137,225,27,183,81,60,36,132,194,39,130,41,65,66,78,16,158,153,132,163,32,133,161,138,63,108,155,232,163,246,201,190,138,63,108,155,232,88,170,182,81,19,225,12,97,77,89,
19,80,0,254,153,103,16,226,83,4,226,152,6,40,253,178,111,162,143,219,38,250,4,202,54,81,48,95,226,17,194,72,76,34,42,152,194,154,164,156,33,57,51,235,13,200,163,246,201,190,133,202,147,101,21,18,77,112,
166,14,67,224,209,68,170,130,138,158,104,140,196,201,132,9,68,109,69,31,180,77,244,46,84,155,40,168,146,107,133,48,114,31,6,138,37,84,20,84,243,68,102,38,76,32,74,35,106,40,253,178,111,160,76,70,202,25,
54,234,9,151,80,178,10,104,130,248,34,37,132,56,12,210,97,12,65,0,150,236,81,251,100,223,66,197,85,178,136,159,8,99,10,106,200,154,128,7,244,203,56,135,18,152,39,20,192,48,224,197,108,161,136,146,141,
204,170,133,144,201,164,3,134,33,112,135,1,154,156,243,26,64,150,236,81,251,100,223,69,31,182,77,244,81,251,100,223,69,31,182,77,244,81,251,100,223,69,31,182,77,244,81,251,100,223,69,31,182,77,244,32,
5,68,199,48,172,148,210,18,105,206,99,79,9,10,82,148,68,198,48,141,192,8,50,103,64,196,57,12,36,57,14,37,41,136,98,140,134,41,138,34,2,83,20,110,132,81,251,100,223,69,31,182,77,244,81,251,100,223,69,31,
182,77,244,53,80,205,148,42,103,77,66,166,161,164,42,106,137,23,83,9,131,56,140,213,38,79,9,100,185,20,126,217,55,209,71,237,147,125,20,126,217,55,208,152,168,217,68,240,141,219,168,158,18,66,97,19,193,
20,160,161,39,8,79,76,194,81,144,66,208,197,31,182,77,244,81,251,100,223,66,43,11,101,10,138,201,148,169,42,105,10,154,162,130,100,73,92,25,196,64,167,193,156,36,25,46,69,31,182,77,244,40,138,45,148,89,
85,83,154,154,73,72,162,134,18,168,154,166,154,66,8,152,100,34,98,62,72,163,246,201,190,133,17,69,178,139,42,170,115,83,73,41,20,80,194,85,19,84,211,72,65,19,12,132,76,71,201,20,126,217,55,208,185,82,
108,162,162,73,174,20,193,200,124,26,40,149,80,81,83,205,17,152,153,48,129,40,141,168,163,246,137,190,132,197,70,202,39,132,110,221,68,240,146,19,8,158,8,165,5,9,56,66,122,102,18,140,130,22,134,28,130,
109,148,82,107,113,57,240,114,30,98,105,170,137,142,161,230,136,204,76,160,22,204,54,130,40,253,178,111,162,143,219,38,250,40,253,178,111,162,143,219,38,250,40,253,178,111,162,143,219,38,250,40,253,178,
111,162,143,219,38,250,40,253,178,111,161,98,170,217,68,79,132,49,133,53,100,77,64,3,250,101,156,67,137,76,19,138,96,24,163,246,201,190,138,63,108,155,232,163,246,201,190,138,63,108,155,232,34,188,153,
76,8,56,84,130,181,172,22,16,201,164,96,79,9,44,204,36,210,75,36,178,201,20,126,217,55,209,71,237,147,125,20,126,217,55,208,213,67,54,80,169,157,53,10,154,134,144,169,170,36,93,76,38,12,226,51,84,153,
60,37,146,228,81,251,100,223,69,31,182,77,244,36,183,38,83,2,73,91,138,210,112,88,105,234,173,130,194,75,51,9,131,52,178,93,146,40,253,178,111,160,10,84,76,115,168,85,18,33,9,52,198,57,213,76,201,144,
165,41,68,68,198,49,141,36,25,53,16,49,14,67,9,14,67,137,74,98,24,163,33,138,98,136,202,83,20,117,160,10,84,76,115,168,85,18,33,9,52,198,57,213,76,201,144,165,41,68,68,198,49,141,36,25,53,16,49,14,67,
9,14,67,137,74,98,24,163,33,138,98,136,202,83,20,117,161,68,81,108,162,202,170,156,212,210,74,69,20,48,149,68,213,52,210,16,68,195,33,19,17,242,69,31,182,77,244,53,80,205,148,42,103,77,66,166,161,164,
42,106,137,23,83,9,131,56,140,213,38,79,9,100,185,24,52,91,40,178,135,77,114,145,52,164,81,67,8,160,165,233,8,34,97,147,205,20,126,217,55,209,71,237,147,125,20,126,217,55,209,71,237,147,125,20,126,217,
55,209,71,237,147,125,20,126,217,55,209,71,237,147,125,20,126,217,55,208,138,194,217,66,162,178,101,42,74,154,66,166,168,160,153,18,87,6,113,16,41,240,103,9,6,75,145,71,237,147,125,9,17,54,234,42,113,
159,33,18,12,42,131,34,102,17,154,68,231,28,210,7,138,228,58,253,238,187,169,240,162,159,115,37,133,229,19,48,188,227,247,122,170,76,20,239,66,254,248,110,107,145,95,213,43,74,218,68,10,78,81,91,167,131,
114,73,14,161,176,36,15,212,107,62,0,179,165,15,76,45,152,125,29,113,212,175,143,255,0,10,62,4,124,158,125,75,55,110,212,193,55,75,148,97,20,152,115,205,158,209,116,203,232,166,83,156,101,57,195,91,84,
195,129,192,242,26,177,173,93,73,132,194,242,105,252,53,225,38,79,159,123,110,79,199,80,225,254,7,1,135,193,112,88,76,44,220,18,9,35,127,49,57,211,176,114,220,178,195,129,192,242,26,177,173,93,73,132,
194,242,105,252,53,225,38,79,159,123,110,79,198,195,254,7,13,203,170,199,85,117,38,15,5,202,102,112,215,135,159,50,101,237,169,127,27,15,248,28,55,46,171,29,85,212,152,60,23,41,153,195,94,30,124,201,151,
182,165,252,108,86,149,126,6,127,234,124,139,133,194,77,192,242,53,197,107,201,131,132,194,78,146,232,73,97,195,252,14,3,15,130,224,176,152,89,184,36,18,70,254,98,115,167,96,229,185,21,251,69,20,154,225,
239,233,124,153,57,167,28,39,38,118,117,22,244,128,162,66,76,32,203,233,8,75,173,224,106,247,11,26,98,72,62,104,178,166,144,77,53,52,215,33,206,105,165,1,48,200,80,214,183,21,131,132,77,61,37,223,59,89,
35,72,98,206,77,69,206,114,26,105,128,12,18,148,117,237,234,106,182,24,25,159,166,242,222,23,9,59,13,203,23,5,175,38,6,15,7,36,151,70,93,67,14,7,3,200,106,198,181,117,38,19,11,201,167,240,215,132,153,
62,125,237,185,63,27,53,93,95,129,153,250,111,45,225,112,147,176,220,177,112,90,242,96,96,240,115,100,186,50,216,110,255,0,3,202,48,24,94,11,9,130,159,133,65,84,111,230,41,36,152,73,110,88,110,255,0,3,
202,48,24,94,11,9,130,159,133,65,84,111,230,41,36,152,73,110,88,127,192,225,185,117,88,234,174,164,193,224,185,76,206,26,240,243,230,76,189,181,47,227,97,135,3,129,228,53,99,90,186,147,9,133,228,211,248,
107,194,76,159,62,246,220,159,140,86,252,161,76,31,42,168,235,6,104,122,7,60,247,11,96,176,105,250,5,52,217,211,70,216,200,95,4,241,219,69,48,173,213,228,243,20,154,114,78,152,209,4,205,232,168,82,28,
36,57,4,46,106,127,73,193,127,230,95,168,242,137,255,0,234,242,108,14,10,103,150,116,239,38,162,171,97,129,153,250,111,45,225,112,147,176,220,177,112,90,242,96,96,240,114,73,116,101,179,250,78,11,255,
0,50,253,71,148,79,255,0,87,147,96,112,83,60,179,167,121,44,52,119,51,9,201,92,160,227,7,58,108,252,10,165,82,100,233,13,54,116,219,178,12,59,119,51,7,202,156,174,227,7,58,116,204,58,166,82,100,233,11,
58,108,235,178,4,52,119,51,9,201,92,160,227,7,58,108,252,10,165,82,100,233,13,54,116,219,178,12,59,119,51,7,202,156,174,227,7,58,116,204,58,166,82,100,233,11,58,108,235,178,4,55,127,129,229,24,12,47,5,
132,193,79,194,160,170,55,243,20,146,76,36,183,44,85,108,48,51,63,77,229,188,46,18,118,27,150,46,11,94,76,12,30,14,73,46,140,176,205,219,181,48,77,210,229,24,69,38,156,243,103,180,93,50,250,41,148,231,
25,78,112,11,158,10,171,171,240,51,63,77,229,188,46,18,118,27,150,46,11,94,76,12,30,14,108,151,70,91,12,221,187,83,4,221,46,81,132,82,97,207,54,123,85,211,47,162,153,78,113,148,231,13,111,0,190,63,252,
40,248,17,242,121,245,21,133,90,195,148,25,235,74,138,183,174,26,181,102,197,74,197,213,98,189,88,216,87,78,174,110,221,19,145,81,85,225,189,16,18,129,196,61,83,71,219,73,58,76,181,93,113,247,3,26,205,
241,234,143,185,214,171,254,206,81,129,24,86,134,171,146,76,92,253,207,88,213,169,56,85,233,102,170,153,125,3,136,15,162,83,0,78,135,213,53,104,146,104,86,53,106,230,106,241,20,157,52,122,68,92,39,72,
151,41,98,187,150,170,25,49,180,105,167,52,211,74,3,108,7,80,45,206,171,146,28,64,48,73,51,96,122,193,202,198,19,0,26,106,64,171,114,21,52,73,41,142,97,56,72,1,104,6,20,68,213,136,114,147,57,173,27,49,
42,109,176,173,221,126,150,73,199,85,71,0,224,162,220,142,12,19,73,33,20,183,118,64,178,253,224,172,84,18,102,130,138,39,41,103,25,210,201,76,49,208,72,39,22,64,77,51,202,115,219,155,41,125,96,133,150,
35,193,85,203,64,96,47,155,11,108,26,105,126,160,144,168,76,3,128,93,78,80,40,154,66,158,82,39,108,109,75,97,90,192,206,21,41,200,119,165,35,100,82,100,162,135,43,22,205,220,168,172,215,21,163,39,6,78,
69,237,224,82,90,96,20,68,117,161,85,72,240,85,114,208,42,241,124,216,91,96,211,75,245,4,112,132,192,56,5,212,229,2,136,200,83,202,68,237,141,169,97,52,147,9,78,169,202,153,3,241,57,196,10,80,217,24,42,
7,123,57,177,18,122,163,167,169,36,221,100,211,61,94,156,247,72,32,68,95,168,117,86,33,140,82,205,87,0,121,76,18,148,2,220,32,78,80,117,90,56,69,171,164,220,2,0,85,185,51,130,129,132,69,176,175,51,14,
157,176,155,133,154,34,23,218,240,212,233,86,46,176,43,55,124,241,97,113,87,34,146,200,179,100,81,225,147,69,42,205,192,47,202,22,33,147,32,78,39,164,81,150,212,32,137,28,130,136,58,69,171,132,28,170,
158,2,68,93,20,4,5,116,192,235,96,140,144,136,129,164,49,130,213,216,72,138,60,112,68,68,149,154,139,168,226,174,192,46,68,106,194,148,69,118,237,185,105,249,74,15,4,210,34,105,228,157,226,8,76,169,173,
202,17,93,179,119,104,42,41,224,78,100,156,16,14,0,162,83,213,4,212,32,202,81,0,49,130,213,216,26,157,221,126,149,68,170,141,150,81,140,234,181,221,100,173,96,233,36,204,183,36,72,136,10,45,208,12,10,
70,49,148,89,100,192,36,181,56,70,72,96,229,197,126,122,186,184,175,143,247,25,62,219,170,203,84,114,214,143,127,246,213,90,71,206,13,89,86,97,89,55,61,84,87,138,152,80,70,107,103,35,60,178,152,10,89,
6,29,63,71,238,35,56,175,234,207,183,126,221,251,166,182,168,134,167,20,90,54,169,254,229,113,86,160,203,147,87,63,168,168,103,111,144,45,120,196,234,166,45,82,76,10,227,209,80,194,81,13,90,73,40,185,
27,38,99,112,139,169,122,145,0,4,199,52,129,108,230,2,133,162,255,0,48,218,129,88,245,131,130,177,45,92,221,248,170,53,121,65,232,114,167,60,157,4,5,143,46,152,6,82,144,13,134,154,41,72,58,225,6,106,189,
99,131,89,90,196,245,101,93,131,104,101,72,237,98,164,138,165,81,99,10,201,11,84,79,202,209,11,64,161,165,61,203,90,129,172,17,114,177,212,32,160,67,16,204,76,147,51,46,225,201,91,242,52,107,5,22,12,51,
180,202,160,28,229,4,230,129,101,244,173,65,65,26,200,84,69,55,111,154,62,93,70,66,151,39,53,92,212,207,28,42,138,96,225,81,114,136,160,153,230,202,41,152,68,183,2,27,25,5,204,229,179,198,165,116,130,
167,71,147,171,55,12,187,101,8,170,32,170,229,33,211,112,216,225,104,230,1,146,197,90,177,156,145,37,43,23,165,111,129,18,8,139,118,231,75,12,71,106,140,224,191,72,4,224,73,37,18,72,50,250,65,4,116,90,
197,95,211,5,146,239,12,224,204,64,174,139,201,221,145,136,160,12,249,97,147,49,212,112,178,115,120,96,9,166,148,100,146,14,220,170,225,201,49,186,201,45,48,83,194,160,233,186,78,155,156,83,17,52,195,
25,21,130,80,148,100,29,120,66,176,43,133,14,186,233,225,1,178,105,178,18,164,83,86,10,85,201,138,226,122,208,143,136,153,212,37,248,54,50,126,144,4,183,100,40,35,89,10,136,166,237,243,71,203,168,200,
82,228,230,171,154,139,199,11,34,152,56,84,92,162,40,38,121,178,138,102,17,45,192,134,198,65,115,57,108,241,169,93,32,169,209,228,234,205,195,46,217,66,42,136,42,185,72,116,220,54,56,90,57,128,100,176,
80,114,162,169,35,110,122,136,162,71,10,150,208,201,53,19,174,216,167,148,223,243,44,25,65,172,93,21,170,76,27,189,92,198,171,82,229,105,153,218,197,77,171,112,106,90,204,233,152,202,162,112,86,92,40,
72,65,252,109,65,154,175,88,224,214,86,177,61,89,87,96,218,25,82,59,88,169,34,169,84,88,194,178,66,213,19,242,180,66,208,40,105,79,114,214,162,161,251,145,31,184,72,249,74,203,238,70,255,0,111,214,117,
75,122,185,211,113,170,84,93,37,28,128,13,98,238,98,110,156,114,98,20,68,19,68,201,20,79,126,105,6,43,6,10,36,170,44,63,85,174,144,169,185,107,150,102,172,156,213,117,117,102,187,38,175,221,51,68,83,114,
130,111,19,72,12,154,167,69,36,220,219,50,82,148,45,106,196,174,29,29,184,78,69,52,200,131,110,88,237,194,203,168,9,166,154,13,112,205,231,201,116,195,58,214,180,162,32,16,46,16,55,40,4,30,86,168,58,113,
61,36,218,224,152,157,169,16,58,70,60,223,77,200,172,105,164,156,99,31,249,67,80,80,19,1,0,76,0,39,52,225,41,0,70,248,64,160,99,8,23,196,18,194,56,53,158,174,14,152,214,206,27,38,163,14,64,233,67,176,
110,10,182,80,141,204,171,163,170,205,233,140,19,7,209,49,228,27,64,48,162,11,1,65,84,134,105,192,138,38,168,20,210,74,37,158,145,206,73,197,215,183,104,109,13,187,4,73,34,138,138,40,114,166,153,10,18,
152,231,56,205,41,74,26,226,97,24,116,130,75,11,231,41,213,204,30,35,201,128,160,136,170,233,226,45,214,76,76,105,216,84,16,41,141,194,74,66,218,157,123,6,32,205,17,33,132,163,48,228,80,146,148,100,25,
170,38,38,76,229,252,4,4,64,108,29,177,92,58,120,96,66,183,193,153,20,152,204,81,221,90,220,78,84,83,51,90,198,179,80,76,101,68,179,147,57,18,84,0,66,208,8,218,58,11,1,65,84,198,105,192,138,38,168,20,
210,0,137,103,164,99,146,113,101,182,18,218,27,67,110,28,186,195,96,138,146,169,182,110,145,121,48,174,241,226,165,49,202,221,2,185,120,200,134,52,210,203,32,24,199,25,125,18,154,25,62,76,167,192,44,205,
53,87,81,83,164,82,242,149,29,187,71,2,220,163,48,234,136,38,128,24,74,89,230,40,91,27,80,8,184,120,237,170,162,39,52,169,48,69,202,9,183,73,33,85,87,11,42,122,197,161,200,9,16,166,17,0,33,173,6,184,218,
134,79,145,3,139,101,153,166,170,170,172,100,136,28,161,71,110,209,4,144,40,137,76,160,130,72,1,132,165,158,98,203,40,218,133,79,202,85,75,6,186,72,72,139,78,84,8,130,169,44,167,42,124,110,80,135,36,98,
92,20,130,167,167,111,90,25,62,72,13,128,93,154,106,174,162,170,36,82,242,149,29,59,71,2,220,6,97,149,16,77,0,48,148,179,204,80,182,54,172,127,252,253,42,171,238,118,245,153,62,247,81,194,75,187,45,86,
241,163,106,149,70,11,54,78,178,147,150,29,39,85,137,25,2,167,25,112,72,225,48,126,140,178,128,193,221,84,85,165,107,247,11,74,195,237,10,230,186,251,120,9,85,39,84,86,139,87,53,71,220,12,170,35,213,175,
106,192,117,94,16,200,156,93,79,38,9,196,227,129,203,120,32,37,135,12,29,114,126,80,213,81,69,110,74,241,157,96,223,8,91,224,77,227,5,220,179,92,3,241,33,204,26,181,235,38,63,113,114,186,241,170,21,10,
238,42,164,170,178,254,144,146,191,113,86,229,171,24,85,31,251,144,107,48,15,215,202,145,185,66,141,133,160,20,169,17,73,20,17,73,64,43,86,173,62,227,125,93,49,45,119,247,87,219,21,176,165,84,18,165,118,
133,121,246,247,219,238,107,132,70,174,194,59,174,136,250,172,120,170,19,74,161,202,138,162,4,30,12,178,128,193,170,234,209,34,54,122,153,19,58,205,138,229,171,149,91,10,133,157,128,118,13,87,95,146,60,
78,226,136,41,53,100,141,104,229,40,218,143,182,31,213,159,112,190,85,47,184,107,250,178,162,229,53,159,218,238,106,90,185,82,58,171,156,191,172,171,127,183,156,58,172,78,239,238,26,174,163,22,106,34,
185,185,51,81,21,102,128,7,166,16,119,85,21,105,90,253,194,210,176,251,66,185,174,190,222,2,85,73,213,21,162,213,205,81,247,3,42,136,245,107,218,176,29,87,132,50,39,23,83,201,130,113,56,224,114,203,48,
64,75,14,24,58,228,252,161,170,162,138,220,149,227,58,193,190,16,183,192,155,198,11,185,102,184,7,226,67,152,53,75,227,255,0,194,143,129,31,39,158,202,77,204,32,28,163,8,130,98,97,144,128,186,233,29,38,
226,115,13,162,144,23,49,101,29,96,138,216,16,65,17,82,176,170,43,95,183,221,17,218,106,136,164,218,180,68,205,93,25,50,166,170,34,71,73,22,244,77,41,64,215,74,49,81,23,244,90,134,179,47,219,149,117,111,
87,213,127,168,146,184,34,136,13,114,252,245,130,213,138,110,106,186,230,172,118,218,182,104,162,134,6,203,162,162,70,64,6,112,112,128,83,130,206,155,85,172,170,132,21,18,76,171,170,227,214,42,51,109,
53,50,144,65,19,214,207,235,74,192,65,67,22,120,225,23,83,210,48,201,32,72,1,100,243,153,51,122,83,204,244,93,149,111,64,201,154,113,78,146,173,151,108,225,49,252,100,60,134,11,160,48,185,142,131,53,23,
89,122,193,194,110,78,69,129,102,106,86,100,152,239,146,224,215,34,64,6,11,147,202,121,166,182,22,236,153,153,1,154,136,10,14,16,40,56,96,205,99,166,87,70,3,44,37,88,232,225,132,68,66,225,140,98,248,173,
4,114,99,32,213,49,63,36,229,46,82,42,192,229,231,33,72,81,109,202,4,235,157,31,68,163,110,97,9,56,109,140,182,5,52,218,50,50,210,57,42,79,140,154,160,241,2,187,71,0,176,16,233,46,154,74,122,18,205,194,
17,73,130,35,54,72,228,198,65,170,98,126,73,202,92,164,85,129,203,206,66,136,162,219,148,9,215,58,62,137,70,220,194,18,112,219,25,96,138,166,51,84,72,229,80,134,181,232,156,131,56,163,110,213,161,8,42,
133,101,87,164,156,231,170,56,108,154,110,121,59,195,214,41,2,46,140,228,12,236,202,122,100,40,72,9,152,128,79,229,146,48,199,34,72,129,82,69,4,145,64,14,8,162,138,9,149,36,211,79,8,117,84,144,0,183,76,
97,17,27,112,14,240,77,204,0,215,144,242,51,2,188,144,89,242,110,75,201,230,130,192,180,193,78,220,160,121,211,253,41,101,183,9,60,152,138,38,110,13,138,217,20,138,108,2,4,104,82,21,4,200,85,142,177,204,
80,153,110,113,140,38,27,176,67,3,38,9,164,7,126,162,205,138,87,134,65,209,235,52,202,147,193,92,86,120,170,224,10,20,129,105,51,144,10,33,40,91,128,88,228,73,16,42,72,160,146,40,1,193,20,81,65,50,164,
154,105,225,20,85,73,0,11,116,198,17,17,182,48,206,187,98,155,101,93,49,21,133,36,221,145,67,183,54,29,178,205,77,132,42,42,160,160,200,154,195,36,134,11,112,90,169,10,182,166,118,163,81,174,205,83,214,
239,145,172,15,91,84,35,247,13,94,74,182,180,253,44,237,235,38,204,184,100,9,56,188,161,5,193,37,68,78,73,166,25,96,106,35,85,85,18,42,45,86,85,21,35,234,249,6,207,75,94,86,53,53,66,186,110,42,186,185,
218,135,172,20,171,112,77,142,217,15,77,54,201,172,114,182,72,14,115,1,53,105,46,40,32,231,4,112,62,1,209,76,118,234,73,112,170,144,135,76,78,73,117,165,183,14,87,53,92,192,192,241,57,143,16,57,235,69,
82,114,108,49,23,34,202,25,90,200,238,74,178,103,76,36,18,40,80,146,212,44,177,219,178,93,99,188,81,250,10,42,146,178,177,118,161,1,60,35,48,77,116,202,0,82,148,146,20,224,161,67,6,91,86,181,6,106,147,
70,72,157,68,145,65,87,168,166,177,29,42,146,14,19,116,152,28,1,126,73,60,21,72,190,152,36,10,12,151,97,37,138,209,130,51,28,57,116,178,73,36,182,5,226,239,82,4,29,25,209,21,112,167,162,178,50,150,105,
38,20,0,195,32,4,176,144,224,80,110,154,8,21,186,13,219,130,128,138,41,20,199,82,66,225,149,89,99,9,149,80,198,17,49,140,34,38,176,144,31,144,152,200,188,73,232,42,21,115,52,149,50,136,144,169,148,135,
50,8,165,57,49,33,100,55,243,24,182,165,146,212,22,70,44,10,208,173,21,101,250,112,21,223,35,50,43,175,202,84,156,38,118,103,120,65,113,33,231,2,160,32,37,9,45,4,40,229,66,166,67,30,97,65,52,138,37,73,
36,210,76,136,162,146,101,17,48,130,105,36,152,20,37,17,25,2,5,186,45,89,162,169,145,6,230,126,145,21,77,233,144,7,37,117,48,194,85,193,176,155,8,64,9,248,60,32,148,36,157,36,36,177,90,48,70,99,135,46,
150,73,36,150,192,189,93,234,64,131,163,58,34,174,20,244,86,70,82,205,36,194,128,24,100,0,150,18,28,10,13,211,65,2,183,65,187,112,80,17,69,34,152,234,72,92,50,171,44,97,50,170,24,194,38,49,132,68,214,
10,97,41,84,2,152,4,72,121,211,15,32,203,52,211,12,67,205,54,188,130,3,15,156,46,139,103,129,88,203,202,91,56,5,249,56,240,196,93,57,128,130,232,42,150,0,201,132,201,167,9,165,181,114,22,88,237,217,46,
177,222,40,253,5,21,73,89,88,187,80,128,158,17,152,38,186,101,0,41,74,73,10,112,80,161,131,45,171,90,132,42,52,210,104,45,16,251,133,31,185,72,161,200,176,184,23,200,53,228,100,72,198,5,202,159,36,20,
237,137,102,79,157,252,209,250,141,120,221,129,171,62,80,245,67,86,72,17,217,93,168,213,219,165,93,161,86,172,101,158,46,154,204,170,177,88,196,106,38,40,174,68,100,76,202,24,132,32,23,86,178,133,104,
213,201,149,72,200,206,113,202,138,100,72,123,74,96,20,104,233,170,169,29,66,122,34,32,50,205,148,46,8,193,170,242,182,106,86,6,59,133,57,32,114,163,36,85,23,192,77,80,166,81,209,214,5,27,10,1,131,52,
233,109,152,13,56,162,33,168,33,192,10,34,67,20,192,7,40,28,131,52,101,144,228,48,9,78,81,215,1,187,9,25,155,102,117,126,4,181,134,12,172,193,217,102,41,89,36,68,92,46,67,42,237,101,19,80,10,145,102,1,
68,8,89,47,97,71,2,146,40,153,81,156,114,160,83,17,49,56,223,156,8,99,158,102,16,214,196,2,66,134,176,0,90,176,155,166,198,41,22,74,81,33,140,146,75,20,39,20,72,50,166,185,20,72,222,137,181,194,39,148,
172,146,55,35,65,136,138,12,209,110,6,65,21,211,94,105,200,128,38,153,202,182,14,105,136,32,41,204,17,0,40,75,7,57,83,34,32,99,9,129,36,231,224,211,1,254,66,97,78,162,147,67,198,97,24,1,181,104,101,182,
0,33,107,241,1,148,4,32,166,102,217,149,95,55,151,26,70,69,114,153,112,245,130,37,65,87,37,158,233,76,26,169,144,161,131,2,77,76,154,197,133,28,10,72,162,101,70,113,202,129,76,68,231,141,249,192,134,57,
230,97,13,110,66,200,80,214,0,11,81,131,43,118,142,74,87,41,189,71,149,17,83,114,103,105,20,74,69,210,192,172,132,163,32,219,41,231,144,100,11,80,147,5,202,138,168,32,152,17,9,192,164,244,84,5,150,88,
206,19,28,45,165,149,195,137,79,252,134,40,4,165,148,160,48,233,36,192,159,22,145,80,81,95,75,10,68,65,66,170,114,38,32,96,41,65,97,32,1,173,8,137,109,92,17,149,26,185,98,34,163,102,233,21,54,224,32,172,
228,12,85,86,84,87,72,112,182,150,84,22,18,159,249,12,80,15,70,82,128,192,38,70,237,92,2,110,211,126,128,184,7,19,155,187,72,147,8,178,124,157,203,112,61,175,229,82,121,60,80,147,5,200,130,136,32,153,
72,132,165,80,12,129,193,101,150,50,233,77,80,0,138,171,135,18,158,212,195,20,3,209,148,160,54,62,209,228,164,102,67,125,150,245,227,234,172,226,146,166,23,7,126,241,39,142,81,172,74,43,224,220,54,56,
165,50,105,65,57,83,48,128,203,8,187,168,25,84,223,109,149,165,66,242,160,171,153,212,233,86,92,150,174,66,177,173,139,93,62,118,223,245,26,214,177,114,171,215,79,9,33,240,234,44,136,165,193,224,230,72,
16,233,242,108,24,213,101,116,168,173,200,42,194,56,77,131,97,52,147,202,213,39,78,93,172,146,66,107,115,103,137,75,44,133,144,178,0,106,170,223,183,11,246,207,219,173,203,84,24,206,24,214,205,85,251,
161,173,102,74,204,231,76,202,87,107,36,135,220,196,169,93,215,7,4,138,76,50,204,207,34,69,41,0,0,133,40,3,10,218,175,170,190,223,169,92,178,172,235,202,241,66,213,40,86,200,38,254,189,251,130,173,253,
45,245,112,239,13,92,56,85,55,105,161,109,18,183,50,8,34,113,17,42,118,198,15,90,187,106,201,187,231,4,79,151,170,197,37,16,10,197,232,7,196,86,174,145,50,202,162,71,239,207,233,173,129,42,73,24,254,144,
16,4,70,90,188,42,170,131,237,122,141,70,117,229,81,247,19,149,42,166,47,210,45,109,89,84,173,28,177,106,103,204,151,173,28,85,141,219,170,217,234,192,178,76,144,104,154,184,83,74,16,139,186,129,149,77,
246,217,90,84,47,42,10,185,157,80,149,103,201,106,228,43,26,216,181,211,231,109,255,0,81,173,107,23,74,189,116,240,146,31,14,162,201,10,92,30,14,100,129,14,159,38,193,141,86,87,74,138,220,130,172,35,132,
216,54,19,73,60,173,82,116,229,218,201,36,38,183,54,120,148,178,200,89,11,32,6,165,4,84,9,174,57,57,22,116,77,114,40,224,76,186,100,55,224,161,26,168,152,28,63,148,242,134,183,129,31,39,159,80,80,124,
237,58,162,189,41,64,156,185,192,15,233,213,164,208,154,67,187,57,64,69,155,201,47,148,144,72,121,37,27,99,18,181,106,217,242,95,202,187,90,198,175,50,71,241,148,84,114,153,164,242,71,116,7,254,161,85,
246,216,238,143,168,85,125,182,59,163,234,21,95,109,142,232,250,133,87,219,99,186,62,161,85,246,216,238,143,168,85,125,182,59,163,234,21,95,109,142,232,250,133,87,219,99,186,62,161,85,246,216,238,143,
168,85,125,182,59,163,234,21,95,109,142,232,250,133,87,219,99,186,62,161,85,246,216,238,143,168,85,125,182,59,163,234,21,95,109,142,232,250,133,87,219,99,186,62,161,85,246,216,238,143,168,85,125,182,59,
163,234,21,95,109,142,232,250,133,87,219,99,186,62,161,85,246,216,238,143,168,85,125,182,59,163,234,21,95,109,142,232,250,133,87,219,99,186,62,161,85,246,216,238,143,168,85,125,182,59,163,234,21,95,109,
142,232,250,133,87,219,99,186,62,161,85,246,216,238,143,168,85,125,182,59,163,234,21,95,109,142,232,250,133,87,219,99,186,62,161,85,246,216,238,143,168,85,125,182,59,163,234,21,95,109,142,232,250,133,
87,219,99,186,62,161,85,246,216,238,143,168,85,125,182,59,163,234,21,95,109,142,232,250,133,87,219,99,186,62,161,85,246,216,238,143,168,85,125,182,59,163,234,21,95,109,142,232,250,133,87,219,99,186,62,
161,85,246,216,238,143,168,85,125,182,59,163,234,21,95,109,142,232,250,133,87,219,99,186,62,161,85,246,216,238,143,168,85,125,182,59,163,234,21,95,109,142,232,250,133,87,219,99,186,62,161,85,246,216,238,
143,168,85,125,182,59,163,234,21,95,109,142,232,250,133,87,219,99,186,62,161,85,246,216,238,143,168,85,125,182,59,163,234,21,95,109,142,232,250,133,87,219,99,186,62,161,85,246,216,238,143,168,85,125,182,
59,163,234,21,95,109,142,232,250,133,87,219,99,186,62,161,85,246,216,238,143,168,85,125,182,59,163,234,21,95,109,142,232,250,133,87,219,99,186,62,161,85,246,216,238,143,168,85,125,182,59,163,234,21,95,
109,142,232,250,133,87,219,99,186,62,161,85,246,216,238,143,168,85,125,182,59,163,234,21,95,109,142,232,250,133,87,219,99,186,62,161,85,246,216,238,143,168,85,125,182,59,163,234,21,95,109,142,232,250,
133,87,219,99,186,62,161,85,246,216,238,143,168,85,125,182,59,163,234,21,95,109,142,232,250,133,87,219,99,186,62,161,85,246,216,238,143,168,85,125,182,59,163,234,21,95,109,142,232,250,133,87,219,99,186,
62,161,85,246,216,238,143,168,85,125,182,59,163,234,21,95,109,142,232,250,133,87,219,99,186,62,161,85,246,216,238,143,168,85,125,182,59,163,234,21,95,109,142,232,250,133,87,219,99,186,62,161,85,246,216,
238,143,168,85,125,182,59,163,234,21,95,109,142,232,250,133,87,219,99,186,62,161,85,246,216,149,90,185,36,9,174,162,181,141,90,4,47,140,194,87,102,25,35,148,59,120,210,188,174,9,109,179,22,99,135,170,
153,172,23,171,190,114,32,80,120,116,134,226,37,9,179,131,210,17,8,81,117,142,101,21,88,230,85,85,12,50,152,234,28,194,99,156,195,248,152,195,224,71,201,231,254,54,31,39,159,248,216,124,158,127,227,97,
242,121,255,0,141,135,201,231,254,54,31,39,159,248,216,124,158,127,227,97,242,121,255,0,141,135,201,231,254,54,31,39,159,248,216,124,158,127,227,97,242,121,255,0,141,135,201,231,254,54,31,39,159,248,216,
124,158,127,227,97,242,121,255,0,141,135,201,231,254,54,31,39,159,248,216,124,158,127,227,97,242,121,255,0,141,135,201,231,254,54,31,39,159,248,216,124,158,127,227,97,242,121,255,0,141,135,201,231,254,
49,255,218,0,8,1,1,3,1,63,33,225,232,182,125,109,209,108,250,219,162,217,245,183,69,179,128,210,56,91,128,19,104,131,100,212,190,209,245,36,234,0,240,191,31,241,137,147,38,76,153,50,100,201,147,38,76,
153,50,116,201,211,38,76,153,58,100,201,147,38,76,153,50,100,201,147,38,76,159,252,82,100,201,147,38,76,153,50,100,201,147,39,76,153,50,100,201,147,38,76,153,50,100,201,147,39,76,153,50,100,201,147,39,
252,178,100,201,147,38,76,153,50,100,201,147,38,76,153,50,100,201,147,38,76,209,163,70,141,104,135,119,250,49,226,25,23,228,83,162,26,27,50,0,32,86,176,22,24,32,131,98,42,14,227,110,79,69,179,23,36,1,
69,26,215,241,156,39,213,11,7,136,169,226,60,176,152,160,48,45,56,173,219,183,110,208,28,1,96,58,148,110,99,130,221,187,96,40,36,24,0,192,2,192,0,198,221,176,20,18,12,0,96,1,96,0,97,110,210,1,171,0,224,
6,160,9,15,24,91,180,128,106,192,56,1,168,2,67,198,22,175,32,26,178,14,2,106,32,18,243,133,176,20,18,12,0,96,1,96,0,75,72,6,172,3,128,26,128,36,60,114,109,219,183,110,221,187,118,200,80,72,112,65,144,
69,192,131,197,110,221,187,118,136,64,5,10,185,14,28,197,35,227,130,221,187,64,112,5,128,234,81,185,140,109,218,3,128,44,7,82,141,204,97,108,132,72,88,169,146,224,200,90,62,112,180,66,36,44,84,201,112,
100,45,31,56,90,180,128,106,192,56,1,168,2,67,198,22,128,224,11,1,212,163,115,16,132,72,88,169,146,224,200,90,62,121,86,173,219,183,110,221,187,118,192,80,72,48,1,128,5,128,1,195,110,221,187,119,144,13,
89,7,1,53,16,9,121,224,183,110,209,8,0,161,87,33,195,152,164,124,99,110,209,8,0,161,87,33,195,152,164,124,97,108,14,64,184,61,74,55,49,133,160,57,2,224,245,40,220,198,22,136,68,133,138,153,46,12,133,163,
231,9,68,32,2,133,92,135,14,98,145,241,0,228,11,131,212,163,115,28,171,86,237,219,183,110,221,187,64,112,5,128,234,81,185,140,45,28,103,203,176,71,169,16,164,222,154,205,254,87,194,109,164,42,152,216,
136,103,84,146,20,0,148,188,161,30,225,205,155,144,143,10,12,116,203,96,162,141,138,161,48,53,4,26,131,113,148,35,17,121,137,128,69,61,48,237,201,232,182,99,115,172,231,70,215,234,47,222,189,251,221,187,
119,189,222,215,250,244,189,126,239,75,253,238,94,191,215,165,235,253,122,235,223,38,231,249,33,145,184,41,201,181,205,24,107,37,129,224,212,181,118,110,3,44,64,229,9,188,92,10,64,192,241,87,45,220,216,
58,45,152,220,235,57,209,181,250,139,183,167,110,247,110,220,239,115,181,254,189,47,95,187,210,247,123,151,175,245,233,122,255,0,94,176,247,201,169,254,72,100,120,5,185,11,218,112,214,75,4,240,97,122,
153,72,10,18,16,19,1,222,94,191,26,231,47,144,19,78,108,29,22,204,110,117,156,232,218,136,57,71,7,136,67,31,125,160,56,151,175,94,189,125,211,106,231,81,160,90,220,11,215,175,190,44,210,227,154,80,6,113,
94,190,248,179,75,142,105,64,25,193,123,206,209,72,230,102,97,123,193,123,206,209,72,230,102,97,123,193,123,206,209,72,102,102,101,250,193,125,241,102,151,28,210,128,51,30,118,138,71,51,51,11,223,37,122,
245,235,215,175,94,190,216,179,67,134,104,100,24,226,94,189,122,245,247,205,240,212,16,86,81,240,47,94,190,233,181,115,168,208,45,108,87,175,186,109,92,234,52,11,91,5,246,205,242,212,17,118,85,224,190,
217,190,90,130,46,202,188,23,188,237,20,142,102,102,23,188,23,221,54,174,117,26,5,173,45,155,229,168,34,236,171,229,47,94,189,122,245,235,215,175,190,44,210,227,154,80,6,120,87,175,94,189,231,104,164,
51,51,50,253,112,47,94,190,249,190,26,130,10,202,60,87,175,190,111,134,160,130,178,143,5,246,77,163,149,70,165,123,96,190,201,180,114,168,212,175,108,23,219,55,203,80,69,217,87,130,219,230,248,106,8,43,
40,229,147,104,229,81,169,94,220,165,235,215,175,94,189,122,245,247,77,171,157,70,129,107,96,188,52,92,221,129,161,246,73,239,137,98,72,99,46,145,164,167,126,102,42,160,0,212,18,123,162,234,87,246,71,
142,24,16,66,160,19,79,120,67,157,128,156,218,14,139,102,55,58,206,116,109,126,162,253,235,223,189,219,183,123,221,237,127,175,75,215,238,244,191,222,229,235,253,122,94,191,215,174,61,240,102,201,12,110,
11,114,45,115,78,26,201,97,206,131,162,217,141,206,179,157,27,88,155,33,49,101,20,119,42,192,89,241,122,245,235,215,162,52,102,162,176,115,26,83,231,131,215,171,70,18,241,106,35,186,11,131,143,171,70,
18,241,106,35,186,11,131,135,165,28,227,181,155,75,175,206,26,148,115,142,214,109,46,191,56,74,81,206,59,217,180,186,124,97,104,194,94,45,68,119,65,112,98,142,113,218,205,165,215,231,147,171,215,175,94,
189,122,244,33,45,22,134,59,32,57,60,86,189,122,245,235,72,193,181,153,70,164,87,46,15,94,189,17,163,53,21,131,152,210,159,56,250,244,70,140,212,86,14,99,74,124,225,235,88,193,189,153,84,160,83,60,61,
107,24,55,179,42,148,10,103,135,165,28,227,181,155,75,175,206,26,136,209,154,138,193,204,105,79,153,172,96,222,204,170,80,41,159,43,215,175,94,189,122,245,234,209,132,188,90,136,238,130,224,240,250,245,
235,82,142,113,222,205,165,211,227,131,215,175,90,70,13,172,202,53,34,185,99,235,214,145,131,107,50,141,72,174,88,122,3,70,104,107,135,35,165,126,48,244,6,140,208,215,14,71,74,252,97,235,88,193,189,153,
84,160,83,60,9,105,24,54,179,40,212,138,229,0,209,154,26,225,200,233,95,142,87,175,94,189,122,245,235,215,162,52,102,162,176,115,26,83,231,15,69,145,3,211,65,180,247,192,249,4,49,149,72,83,83,178,195,
5,169,64,161,107,72,38,68,51,54,40,0,34,17,229,235,109,108,176,34,244,151,52,131,162,217,141,206,179,157,27,95,168,191,122,118,239,118,237,206,247,59,95,235,210,245,251,189,47,119,185,122,255,0,94,151,
175,245,235,143,124,11,159,228,134,71,128,211,146,185,167,13,100,176,43,118,26,104,195,70,25,99,80,128,223,32,100,177,208,140,66,252,216,58,45,152,220,235,57,209,181,250,139,183,167,110,247,110,220,239,
115,181,254,189,47,95,187,210,247,123,151,175,245,233,122,255,0,94,176,247,201,169,254,72,100,120,5,185,11,218,112,214,75,12,222,24,181,26,235,4,33,6,32,50,236,9,46,85,99,28,220,216,58,45,152,220,235,
57,209,181,16,114,142,15,16,134,62,251,64,113,47,94,189,122,251,166,213,206,163,64,181,184,23,175,95,124,89,165,199,52,160,12,226,189,125,241,102,151,28,210,128,51,130,247,157,162,145,204,204,194,247,
130,247,157,162,145,204,204,194,247,130,247,157,162,144,204,204,203,245,130,251,226,205,46,57,165,0,102,60,237,20,142,102,102,23,190,74,245,235,215,175,94,189,125,177,102,135,12,208,200,49,196,189,122,
245,235,239,155,225,168,32,172,163,224,94,189,125,211,106,231,81,160,90,216,175,95,116,218,185,212,104,22,182,11,237,155,229,168,34,236,171,193,125,179,124,181,4,93,149,120,47,121,218,41,28,204,204,47,
120,47,186,109,92,234,52,11,90,91,55,203,80,69,217,87,202,94,189,122,245,235,215,175,95,124,89,165,199,52,160,12,240,175,94,189,123,206,209,72,102,102,101,250,224,94,189,125,243,124,53,4,21,148,120,175,
95,124,223,13,65,5,101,30,11,236,155,71,42,141,74,246,193,125,147,104,229,81,169,94,216,47,182,111,150,160,139,178,175,5,183,205,240,212,16,86,81,203,38,209,202,163,82,189,185,75,215,175,94,189,122,245,
235,238,155,87,58,141,2,214,193,120,104,185,187,3,67,236,147,223,18,196,144,198,93,35,73,78,252,204,85,64,1,168,33,114,122,210,84,109,25,105,78,6,130,248,201,82,245,131,160,20,28,200,58,45,152,220,235,
57,209,181,250,139,247,175,126,247,110,221,239,119,181,254,189,47,95,187,210,255,0,123,151,175,245,233,122,255,0,94,184,247,193,155,36,49,184,45,200,181,205,56,107,37,135,58,14,139,102,55,58,206,116,109,
98,108,132,197,148,81,220,171,1,103,197,235,215,175,94,136,209,154,138,193,204,105,79,158,15,94,173,24,75,197,168,142,232,46,14,62,173,24,75,197,168,142,232,46,14,30,148,115,142,214,109,46,191,56,106,
81,206,59,89,180,186,252,225,41,71,56,239,102,210,233,241,133,163,9,120,181,17,221,5,193,138,57,199,107,54,151,95,158,78,175,94,189,122,245,235,208,132,180,90,24,236,128,228,241,90,245,235,215,173,35,
6,214,101,26,145,92,184,61,122,244,70,140,212,86,14,99,74,124,227,235,209,26,51,81,88,57,141,41,243,135,173,99,6,246,101,82,129,76,240,245,172,96,222,204,170,80,41,158,30,148,115,142,214,109,46,191,56,
106,35,70,106,43,7,49,165,62,102,177,131,123,50,169,64,166,124,175,94,189,122,245,235,215,171,70,18,241,106,35,186,11,131,195,235,215,173,74,57,199,123,54,151,79,142,15,94,189,105,24,54,179,40,212,138,
229,143,175,90,70,13,172,202,53,34,185,97,232,13,25,161,174,28,142,149,248,195,208,26,51,67,92,57,29,43,241,135,173,99,6,246,101,82,129,76,240,37,164,96,218,204,163,82,43,148,3,70,104,107,135,35,165,126,
57,94,189,122,245,235,215,175,94,136,209,154,138,193,204,105,79,156,61,22,68,15,77,6,211,223,3,228,16,198,85,33,77,78,203,12,22,165,2,133,7,31,98,252,231,215,5,2,151,6,70,31,173,249,131,8,16,67,165,57,
144,116,91,49,185,214,115,163,107,245,23,239,78,221,238,221,185,222,231,107,253,122,94,191,119,165,238,247,47,95,235,210,245,254,189,113,239,129,115,252,144,200,240,26,114,87,52,225,172,150,12,0,206,168,
217,231,133,68,245,133,65,100,82,108,61,145,106,55,54,14,139,102,55,58,206,116,109,126,162,253,235,223,189,219,183,123,221,237,127,175,75,215,238,244,191,222,229,235,253,122,94,191,215,174,61,242,110,
127,146,25,30,1,110,66,246,156,53,146,192,241,39,80,145,113,18,161,1,152,135,238,12,206,10,64,194,32,134,15,54,14,139,102,55,58,206,116,109,126,162,253,235,223,189,219,183,123,221,237,127,175,75,215,238,
244,191,222,229,235,253,122,94,191,215,174,61,245,60,127,146,25,25,116,141,37,59,243,49,85,0,6,161,84,36,117,101,116,120,168,135,16,128,17,55,156,86,64,25,138,24,115,96,232,182,99,115,172,231,70,215,234,
47,222,189,251,221,187,119,189,222,215,250,244,189,126,239,75,253,238,94,191,215,165,235,253,122,227,223,6,108,144,198,224,183,34,215,52,225,172,150,28,232,58,45,152,220,235,57,209,181,137,178,19,22,81,
71,114,172,5,159,23,175,94,189,122,35,70,106,43,7,49,165,62,120,61,122,180,97,47,22,162,59,160,184,56,250,180,97,47,22,162,59,160,184,56,122,81,206,59,89,180,186,252,225,169,71,56,237,102,210,235,243,
132,165,28,227,189,155,75,167,198,22,140,37,226,212,71,116,23,6,40,231,29,172,218,93,126,121,58,189,122,245,235,215,175,66,18,209,104,99,178,3,147,197,107,215,175,94,180,140,27,89,148,106,69,114,224,245,
235,209,26,51,81,88,57,141,41,243,143,175,68,104,205,69,96,230,52,167,206,30,181,140,27,217,149,74,5,51,195,214,177,131,123,50,169,64,166,120,122,81,206,59,89,180,186,252,225,168,141,25,168,172,28,198,
148,249,154,198,13,236,202,165,2,153,242,189,122,245,235,215,175,94,173,24,75,197,168,142,232,46,15,15,175,94,181,40,231,29,236,218,93,62,56,61,122,245,164,96,218,204,163,82,43,150,62,189,105,24,54,179,
40,212,138,229,135,160,52,102,134,184,114,58,87,227,15,64,104,205,13,112,228,116,175,198,30,181,140,27,217,149,74,5,51,192,150,145,131,107,50,141,72,174,80,13,25,161,174,28,142,149,248,229,122,245,235,
215,175,94,189,122,35,70,106,43,7,49,165,62,112,244,89,16,61,52,27,79,124,15,144,67,25,84,133,53,59,44,48,90,148,10,5,209,228,101,222,210,131,163,80,149,28,181,111,232,186,131,52,154,205,115,111,210,160,
133,163,163,54,50,121,112,116,91,49,185,214,115,163,107,245,23,239,78,221,238,221,185,222,231,107,253,122,94,191,119,165,238,247,47,95,235,210,245,254,189,113,239,129,115,252,144,200,240,26,114,87,52,
225,172,150,17,141,167,141,70,110,169,237,24,104,23,69,62,119,224,137,53,3,33,230,65,209,108,198,231,89,206,141,175,212,95,189,123,247,187,118,239,123,189,175,245,233,122,253,222,151,251,220,189,127,175,
75,215,250,245,199,190,77,207,242,67,35,192,45,200,94,211,134,178,88,65,131,114,233,24,217,11,29,26,108,64,1,115,163,92,100,69,65,22,230,65,209,108,198,231,89,206,141,172,83,171,113,102,73,182,22,169,
92,83,167,78,156,186,175,102,72,41,71,53,135,158,9,211,183,87,132,53,80,43,162,76,140,103,110,175,8,106,160,87,68,153,24,78,203,181,75,142,133,109,3,182,19,178,237,82,227,161,91,64,237,134,236,187,80,
184,234,86,240,123,97,186,188,33,170,129,93,18,100,76,187,84,184,232,86,208,59,114,103,78,157,58,116,233,211,169,192,26,44,149,209,2,79,22,233,211,167,78,237,153,160,134,101,108,190,9,211,151,85,236,201,
5,40,230,176,243,140,229,213,123,50,65,74,57,172,60,225,59,190,102,163,25,20,162,240,157,223,51,81,140,138,81,120,78,203,181,75,142,133,109,3,182,11,170,246,100,130,148,115,88,121,157,243,53,24,200,165,
23,202,157,58,116,233,211,167,78,221,94,16,213,64,174,137,50,56,103,78,157,59,46,212,46,58,149,188,30,220,19,167,78,237,153,160,134,101,108,188,103,78,237,153,160,134,101,108,188,39,81,236,205,37,42,228,
184,241,130,234,61,153,164,165,92,151,30,48,93,223,51,81,140,138,81,120,107,237,153,160,134,101,108,185,71,179,52,148,171,146,227,199,41,116,233,211,167,78,157,57,117,94,204,144,82,142,107,15,56,78,35,
45,192,230,161,35,230,123,226,216,146,24,203,164,105,41,223,153,138,168,0,53,9,219,65,59,146,64,128,0,4,234,100,139,224,115,3,132,85,229,21,97,169,17,115,163,195,253,85,52,243,16,116,91,49,185,214,115,
163,107,245,23,239,78,221,238,221,185,222,231,107,253,122,94,191,119,165,238,247,47,95,235,210,245,254,189,113,239,131,54,72,99,112,91,145,107,154,112,214,75,14,116,29,22,204,110,117,156,232,218,199,159,
204,104,104,24,44,105,175,23,191,126,253,251,33,36,163,67,84,4,141,224,142,15,126,253,28,64,64,74,8,81,5,100,105,56,251,244,113,1,1,40,33,68,21,145,164,225,237,98,163,21,100,26,118,135,131,165,138,140,
85,144,105,218,30,14,150,42,49,86,69,39,105,88,122,56,128,128,148,16,162,10,200,210,98,197,70,42,200,52,237,15,146,235,223,191,126,253,251,246,49,8,0,41,37,64,7,147,164,113,122,247,239,223,189,50,4,229,
22,35,148,163,193,239,223,178,18,74,52,53,64,72,222,8,199,223,178,18,74,52,53,64,72,222,8,195,222,185,2,51,139,16,206,80,195,222,185,2,51,139,16,206,80,195,218,197,70,42,200,52,237,15,7,68,36,148,104,
106,128,145,188,17,53,200,17,156,88,134,114,135,43,223,191,126,253,251,247,239,209,196,4,4,160,133,16,86,70,147,195,239,223,183,75,21,24,171,34,147,180,174,15,126,253,233,144,39,40,177,28,165,28,125,251,
211,32,78,81,98,57,74,56,123,1,160,163,81,84,132,13,228,156,61,128,208,81,168,170,66,6,242,78,30,245,200,17,156,88,134,114,134,28,244,200,19,148,88,142,82,140,1,160,163,81,84,132,13,228,158,87,191,126,
253,251,247,239,223,178,18,74,52,53,64,72,222,8,195,216,70,202,131,218,132,2,123,226,252,130,24,202,164,41,169,217,97,130,212,160,80,138,33,87,247,196,219,112,41,168,11,191,69,25,58,163,219,159,84,129,
199,1,48,84,48,41,45,119,181,32,28,27,92,45,153,166,9,6,153,132,67,87,140,74,112,128,88,116,91,49,185,214,115,163,107,245,19,239,78,221,206,157,57,220,231,107,253,122,94,190,119,165,238,231,47,95,235,
210,245,254,189,113,239,131,119,252,144,200,240,26,114,87,52,225,172,150,1,219,228,37,206,194,129,8,106,33,175,3,132,128,64,221,129,0,16,115,72,189,196,185,234,190,183,32,0,28,112,10,230,166,8,0,5,98,
134,171,66,0,7,237,215,253,186,136,2,67,219,62,129,161,1,43,37,225,209,108,198,231,89,206,157,175,210,125,189,91,183,187,118,235,123,173,175,245,233,122,253,222,151,219,220,189,127,175,75,252,243,215,
250,245,199,190,13,207,242,67,35,192,45,200,94,211,134,178,88,114,160,68,43,55,168,48,10,69,133,66,2,208,96,94,57,178,76,150,85,4,136,185,209,77,162,238,4,110,135,39,14,139,102,55,58,206,116,109,68,200,
127,24,195,0,0,81,77,56,157,187,118,237,216,73,5,93,242,82,119,146,120,29,187,118,16,0,0,8,0,64,0,16,0,180,12,93,187,8,0,0,4,0,32,0,8,0,90,6,14,222,106,33,214,69,129,229,43,7,111,53,16,235,34,192,242,
149,131,183,154,136,117,144,64,121,67,193,216,64,0,0,32,1,0,0,64,2,208,35,205,68,58,200,176,60,165,114,93,187,118,237,219,183,110,202,1,32,33,32,152,16,66,65,23,131,196,237,219,183,110,233,138,133,57,
197,12,231,40,112,59,118,236,36,130,174,249,41,59,201,56,187,118,18,65,87,124,148,157,228,156,29,215,20,10,50,138,24,202,81,193,221,113,64,163,40,161,140,165,28,29,188,212,67,172,139,3,202,86,14,194,72,
42,239,146,147,188,147,43,138,5,25,69,12,101,40,242,157,187,118,237,219,183,110,221,132,0,0,2,0,16,0,4,0,45,3,133,219,183,110,222,106,33,214,65,1,229,15,129,219,183,116,197,66,156,226,134,115,148,49,118,
238,152,168,83,156,80,206,114,134,14,202,105,42,239,130,131,188,17,131,178,154,74,187,224,160,239,4,96,238,184,160,81,148,80,198,82,142,14,233,138,133,57,197,12,231,40,66,154,74,187,224,160,239,4,114,
157,187,118,237,219,183,110,221,132,144,85,223,37,39,121,39,7,117,86,208,189,168,8,38,250,59,220,236,227,174,78,145,3,34,217,154,101,191,160,128,106,13,1,91,234,55,57,20,8,48,6,69,18,161,156,210,94,1,
25,18,134,156,43,202,126,33,235,123,73,125,139,145,1,47,200,110,227,236,167,92,3,91,17,193,138,55,251,32,31,108,58,45,152,220,235,57,209,181,250,139,247,171,118,247,110,221,111,117,189,254,189,111,223,
187,214,251,123,183,239,245,235,126,255,0,94,176,246,87,221,254,174,116,241,229,135,50,53,42,109,42,229,144,10,239,2,18,221,119,41,251,9,253,229,79,198,111,84,79,133,1,165,0,3,33,135,69,179,27,157,103,
58,230,176,99,228,7,49,69,16,27,52,160,169,160,225,239,190,251,223,198,5,90,201,174,127,214,146,40,113,239,189,252,107,61,65,42,189,51,67,1,130,14,29,239,227,97,75,32,39,6,104,130,139,37,135,107,105,48,
24,163,0,138,8,28,221,206,182,147,1,138,48,8,160,129,205,220,97,105,136,4,11,57,89,144,97,73,191,141,103,168,37,87,166,104,96,48,65,131,109,192,128,79,56,164,216,106,7,201,239,190,251,239,190,251,8,184,
8,34,29,45,40,2,73,164,41,175,65,88,91,68,130,6,15,15,125,247,152,214,120,228,20,7,58,7,150,40,215,30,251,223,198,5,90,201,174,127,214,146,40,113,239,176,5,161,64,42,222,138,69,175,135,105,41,97,170,160,
19,84,160,193,154,74,88,106,168,4,213,40,48,102,182,147,1,138,48,8,160,129,205,228,224,85,172,154,231,253,105,34,134,29,86,149,217,215,198,6,84,242,123,239,190,251,239,190,247,241,172,245,4,170,244,205,
12,6,8,60,61,247,223,101,88,45,55,124,209,183,194,92,25,247,152,214,120,228,20,7,58,7,150,40,215,30,243,10,236,198,83,204,98,53,243,48,204,137,224,64,219,245,56,0,42,76,41,143,73,88,91,17,32,144,96,136,
68,240,32,109,250,156,0,21,38,20,199,164,172,45,136,144,72,48,68,73,75,13,85,0,154,165,6,12,198,179,199,32,160,57,208,60,177,70,176,96,74,12,40,164,29,82,133,0,147,65,202,207,190,251,239,190,251,236,1,
104,80,10,183,162,145,107,225,217,157,194,53,73,18,9,37,80,4,218,123,58,34,255,0,115,179,252,148,230,70,165,77,167,92,242,14,139,102,55,58,207,15,22,139,26,125,69,9,54,105,197,212,132,55,224,170,238,14,
135,121,25,176,83,85,190,61,72,67,126,40,174,195,171,8,111,204,85,152,117,97,13,249,138,179,14,134,25,175,239,61,109,135,67,188,140,216,41,170,222,120,57,13,226,200,108,6,60,157,111,10,59,233,90,80,18,
200,77,47,8,35,233,126,80,0,207,135,161,206,127,251,239,75,112,117,33,13,248,42,187,30,134,57,251,239,61,45,135,67,156,12,223,45,45,240,232,115,129,155,229,165,190,29,88,67,126,98,172,195,169,8,111,193,
85,211,160,196,47,162,36,85,35,149,247,180,93,211,192,0,211,20,92,61,62,244,139,102,174,14,135,57,255,0,239,189,45,143,79,189,34,217,171,14,148,28,237,136,176,186,51,164,7,51,114,46,52,19,165,7,59,98,
44,46,140,233,1,204,220,139,141,4,232,115,129,155,229,165,190,29,14,115,255,0,223,122,90,125,173,6,116,243,129,38,205,57,93,12,115,247,222,122,91,15,22,139,27,125,37,9,54,105,252,24,58,45,152,217,72,89,
198,12,134,174,163,227,44,90,130,156,96,161,160,116,134,191,36,39,53,111,192,51,59,107,9,8,49,245,65,166,176,135,53,34,1,4,14,166,34,36,99,73,7,64,113,0,225,195,139,12,0,5,72,49,144,229,74,31,242,171,
43,160,1,114,56,29,232,94,64,97,21,121,1,17,65,16,255,0,164,228,50,186,8,23,35,89,88,166,88,21,144,36,0,243,161,83,9,182,189,47,196,104,232,42,177,101,54,243,130,172,236,142,96,16,224,86,162,214,59,77,
116,66,168,75,214,217,75,112,4,65,57,4,32,14,251,154,52,107,148,195,109,4,195,22,205,143,148,184,228,212,16,148,81,178,157,166,200,184,96,6,99,124,207,2,207,245,98,204,114,91,77,61,133,168,183,246,126,
55,247,51,121,155,216,104,85,84,133,76,53,134,183,14,176,128,23,0,18,80,65,218,231,198,148,40,33,175,193,158,1,26,132,221,96,189,125,169,2,13,26,121,120,204,11,208,26,24,92,12,5,240,55,90,1,208,174,1,
6,168,65,70,140,43,199,121,129,116,125,32,74,96,47,211,8,32,32,90,196,4,1,4,221,147,216,25,239,160,107,145,2,216,174,185,203,101,80,212,224,227,203,198,98,14,128,208,66,224,96,47,129,186,208,14,133,112,
8,53,66,28,99,41,64,231,188,128,90,129,38,169,17,27,27,198,249,97,188,99,177,32,86,185,241,165,74,8,107,240,103,130,146,6,44,83,157,1,64,3,10,18,89,54,7,153,102,15,193,217,200,101,76,167,175,91,177,66,
128,0,40,49,122,147,203,82,46,0,70,1,72,47,17,63,53,0,0,70,208,89,98,88,64,217,125,181,129,58,230,224,64,18,158,76,183,130,14,216,132,48,138,0,129,9,166,211,13,67,106,60,0,204,152,226,85,178,206,98,71,
2,64,122,104,85,201,57,17,6,51,100,81,149,65,34,84,144,0,103,33,169,211,188,81,192,84,52,20,65,26,96,95,217,54,244,31,160,19,8,160,8,10,116,19,2,191,96,120,37,82,96,47,69,246,132,84,198,177,2,179,9,217,
193,118,13,110,219,91,36,130,148,211,121,5,195,23,164,96,166,56,36,173,158,13,109,49,11,69,72,55,107,178,103,242,161,2,179,10,83,114,188,50,99,116,129,229,17,152,108,61,138,122,122,134,35,225,34,45,132,
148,130,89,214,165,122,195,96,241,145,41,19,132,77,68,95,39,143,143,27,201,21,195,252,33,137,48,224,35,83,99,6,246,119,225,211,13,164,83,226,127,254,45,151,17,176,246,33,233,250,26,167,4,69,176,146,144,
75,58,212,175,88,108,30,124,29,22,204,81,235,5,171,65,4,198,163,12,61,106,221,21,6,195,65,90,72,117,67,42,120,216,58,201,70,87,40,13,98,87,176,110,0,23,2,138,162,157,223,184,230,128,3,18,129,93,227,93,
41,133,93,135,47,68,78,37,13,79,122,46,141,178,8,103,64,136,87,17,144,29,115,189,3,13,7,133,155,163,148,184,22,180,195,68,70,18,10,226,50,51,49,94,145,134,132,82,152,160,68,8,96,9,17,141,66,137,179,49,
67,41,186,180,240,192,235,7,193,27,147,200,117,145,35,73,18,76,47,235,224,235,19,20,168,130,243,40,59,39,100,70,4,12,180,4,145,36,197,118,138,136,80,75,68,208,0,3,7,196,238,79,49,150,68,143,36,36,194,
206,103,89,88,174,42,24,139,138,18,223,185,131,250,204,48,130,12,136,70,227,230,162,225,161,15,138,135,24,6,110,110,215,115,16,82,44,44,49,21,11,255,0,82,67,210,68,200,65,49,247,132,247,43,131,55,34,212,
39,130,169,62,129,200,133,114,161,179,171,4,164,250,78,81,100,18,21,243,26,27,172,238,163,17,162,190,162,240,8,200,20,106,190,190,144,172,204,106,100,226,69,7,160,186,164,108,1,4,25,115,169,184,222,106,
1,37,152,26,133,118,80,116,68,169,217,149,16,18,179,249,48,5,150,66,190,99,67,117,157,212,98,52,87,212,94,20,86,131,64,69,76,0,168,67,66,13,96,138,144,11,5,0,188,18,144,103,17,31,120,79,114,184,51,114,
45,66,120,29,213,80,151,44,208,128,42,148,82,6,242,55,101,228,69,58,47,51,132,23,210,186,8,122,34,218,59,32,157,110,107,131,17,28,200,131,92,5,57,147,43,232,68,137,66,128,128,161,137,231,65,3,251,161,
65,194,174,100,88,147,197,83,129,53,218,41,80,66,168,51,82,85,168,73,117,92,85,75,131,160,75,6,140,187,103,132,62,27,196,200,48,76,155,20,171,147,12,38,160,0,34,36,194,116,106,130,8,50,145,100,41,139,
9,115,98,197,146,65,35,128,22,34,163,3,105,185,20,168,20,239,105,226,219,162,204,194,141,74,56,195,40,109,0,171,35,68,150,7,98,112,14,25,208,116,128,22,0,194,184,207,183,205,16,34,145,105,75,112,184,157,
33,132,19,176,101,172,176,160,41,32,121,135,67,174,138,92,8,154,48,175,203,115,223,110,204,83,227,239,61,156,224,213,204,128,161,205,104,217,54,3,27,100,11,143,52,112,11,156,137,206,153,88,241,171,24,
36,208,151,72,220,129,100,202,54,61,241,194,229,91,73,51,21,65,66,255,0,254,180,112,180,194,167,198,223,59,56,193,43,185,1,67,154,209,178,108,6,54,200,23,14,36,0,205,0,169,58,1,156,33,211,148,4,27,227,
83,101,168,11,94,75,162,217,141,171,99,145,204,24,142,187,98,64,4,123,32,72,68,79,126,217,75,34,0,134,161,130,13,156,27,56,54,112,108,224,217,193,179,131,103,6,206,13,156,27,56,54,112,108,224,217,193,
179,131,103,6,206,13,156,27,56,54,112,108,224,217,193,179,131,103,6,206,13,156,27,56,54,112,108,224,217,193,179,131,103,6,206,13,156,27,56,54,112,108,224,217,193,179,131,103,6,206,13,156,27,56,54,112,
108,224,217,193,179,131,103,6,206,13,156,27,56,54,112,108,224,217,193,179,131,103,6,206,13,156,27,56,54,112,108,224,217,193,179,131,103,6,206,13,156,27,56,54,112,108,224,217,193,179,131,103,6,206,13,156,
27,56,54,112,108,224,217,193,179,131,103,6,206,13,156,27,56,54,112,108,224,217,193,179,131,103,6,206,13,156,27,56,54,112,108,224,217,193,179,131,103,6,206,13,156,27,56,54,112,108,224,182,34,220,121,128,
33,176,48,192,168,255,0,84,21,253,59,17,33,53,244,54,34,128,48,73,228,244,91,62,182,232,182,125,109,209,108,250,219,162,217,245,183,69,179,235,110,139,103,214,221,22,207,173,186,45,159,91,116,91,62,182,
232,182,125,109,209,108,250,219,162,217,245,183,69,179,235,110,139,103,214,221,22,207,173,186,45,159,91,116,91,62,182,232,182,125,109,209,108,250,219,162,217,245,183,69,179,235,110,139,103,214,221,22,
207,173,186,45,159,91,116,91,62,177,255,218,0,8,1,2,3,1,63,33,255,0,230,197,20,234,243,171,206,175,58,188,234,243,171,206,175,58,188,234,243,171,206,175,58,188,234,243,171,206,175,58,188,234,243,171,206,
175,58,188,234,243,171,206,175,58,188,234,243,171,206,175,58,188,234,243,171,206,175,58,188,234,243,171,206,175,58,188,234,243,171,206,175,58,188,234,243,171,206,175,58,188,234,243,171,206,175,58,188,
234,243,171,206,175,58,188,234,243,171,206,175,58,188,234,243,171,206,175,58,188,234,243,171,206,175,58,188,234,243,171,206,175,58,188,234,243,171,206,175,58,188,234,243,171,206,175,58,188,234,243,171,
206,175,58,188,234,243,171,206,175,58,188,234,243,171,206,175,58,188,234,243,171,206,175,58,188,234,241,69,20,81,69,20,81,171,243,201,48,19,200,46,7,129,112,60,9,56,18,101,117,48,19,11,129,194,79,36,184,
31,8,39,146,73,192,147,129,38,87,83,129,39,146,92,15,132,19,192,9,196,19,196,73,149,212,192,79,57,224,76,5,112,101,206,78,37,200,54,130,216,27,65,108,14,7,1,13,160,180,60,147,104,45,252,32,121,131,104,
45,194,63,152,7,1,130,24,152,63,142,109,5,176,54,130,216,28,14,2,27,65,104,121,38,208,91,132,114,78,7,3,43,129,228,155,65,110,17,192,49,28,71,1,205,56,8,99,196,193,206,78,40,162,138,40,162,138,17,0,138,
17,0,138,40,162,138,40,68,2,40,162,138,40,162,138,40,68,2,40,162,138,0,226,138,40,162,138,40,161,10,40,66,138,40,162,132,40,162,138,40,162,138,40,68,2,40,162,138,40,162,138,0,226,138,0,226,138,40,162,
132,40,160,14,40,162,138,40,162,138,40,162,138,37,128,128,227,98,96,231,14,73,180,22,192,218,11,96,112,56,8,109,5,161,228,155,65,111,225,3,204,27,65,110,17,252,192,56,14,19,7,57,168,227,142,56,227,142,
56,76,6,56,76,6,56,227,142,56,225,48,24,227,142,56,227,142,56,225,48,24,227,142,56,12,113,199,28,113,199,28,38,56,76,113,199,28,38,56,227,142,56,227,142,19,1,142,56,227,142,56,227,128,199,28,6,56,227,
142,56,76,112,24,227,142,56,227,142,56,227,142,56,222,3,132,96,231,161,192,132,67,19,104,45,129,180,22,192,224,112,16,218,11,67,201,54,130,220,10,12,80,136,96,132,67,3,20,49,67,20,66,24,185,6,208,91,132,
98,160,193,65,130,17,8,132,66,24,160,136,68,57,8,68,56,4,64,197,137,131,248,230,208,91,3,104,45,129,192,224,33,180,22,135,146,109,5,184,71,36,224,112,50,184,30,73,180,22,225,28,3,17,196,112,28,211,128,
193,226,96,231,39,20,81,69,20,81,69,8,128,69,8,128,69,20,81,69,20,34,1,20,81,69,20,81,69,20,34,1,20,81,69,0,113,69,20,81,69,20,80,133,20,33,69,20,81,66,20,81,69,20,81,69,20,34,1,20,81,69,20,81,69,0,113,
69,0,113,69,20,81,66,20,80,7,20,81,69,20,81,69,20,81,69,18,192,96,88,152,57,195,146,109,5,176,54,130,216,28,14,2,27,65,104,121,38,208,91,248,64,243,6,208,91,132,127,48,14,3,132,193,206,106,56,227,142,
56,227,142,19,1,142,19,1,142,56,227,142,56,76,6,56,227,142,56,227,142,56,76,6,56,227,142,3,28,113,199,28,113,199,9,142,19,28,113,199,9,142,56,227,142,56,227,132,192,99,142,56,227,142,56,224,49,199,1,142,
56,227,142,19,28,6,56,227,142,56,227,142,56,227,142,55,128,132,168,241,48,115,208,224,66,33,137,180,22,192,218,11,96,112,56,8,109,5,161,228,155,65,110,5,6,40,68,48,66,33,129,138,24,161,138,33,12,92,131,
104,45,194,49,80,96,160,193,8,132,66,33,12,80,68,34,28,132,34,28,2,94,44,76,28,225,201,54,130,216,27,65,108,14,7,1,13,160,180,60,147,104,45,252,32,121,131,104,45,194,63,152,7,1,15,1,131,156,57,38,208,
91,3,104,45,129,192,224,33,180,22,135,146,109,5,191,132,15,48,109,5,184,71,243,0,224,48,12,76,28,225,201,54,130,216,27,65,108,14,7,1,13,160,180,60,147,104,45,252,32,121,131,104,45,194,63,152,7,1,194,96,
231,53,28,113,199,28,113,199,9,128,199,9,128,199,28,113,199,28,38,3,28,113,199,28,113,199,28,38,3,28,113,199,1,142,56,227,142,56,227,132,199,9,142,56,227,132,199,28,113,199,28,113,194,96,49,199,28,113,
199,28,112,24,227,128,199,28,113,199,9,142,3,28,113,199,28,113,199,28,113,199,27,192,96,204,27,224,96,231,161,192,132,67,19,104,45,129,180,22,192,224,112,16,218,11,67,201,54,130,220,10,12,80,136,96,132,
67,3,20,49,67,20,66,24,185,6,208,91,132,98,160,193,65,130,17,8,132,66,24,160,136,68,57,8,68,56,6,8,64,22,6,14,112,228,155,65,108,13,160,182,7,3,128,134,208,90,30,73,180,22,254,16,60,193,180,22,225,31,
204,3,128,193,193,129,131,157,89,89,89,89,89,89,89,89,89,89,89,89,89,89,89,89,89,89,89,89,89,89,89,89,89,89,89,89,89,89,89,89,89,89,89,89,88,28,172,172,172,172,172,172,172,172,46,86,23,43,43,43,43,11,
149,149,149,149,149,149,149,149,149,149,149,149,149,149,149,149,149,149,129,202,202,192,229,101,101,101,101,97,114,176,57,89,89,89,89,89,89,89,89,89,89,89,89,92,4,174,81,65,129,131,248,230,208,91,3,104,
45,129,192,224,33,180,22,135,146,109,5,184,71,36,224,112,56,158,73,180,22,225,28,3,17,196,112,28,211,128,225,48,115,154,142,56,227,142,56,227,132,192,99,132,192,99,142,56,227,142,19,1,142,56,227,142,56,
227,142,19,1,142,56,227,128,199,28,113,199,28,113,194,99,132,199,28,113,194,99,142,56,227,142,56,225,48,24,227,142,56,227,142,56,12,113,192,99,142,56,227,132,199,1,142,56,227,142,56,227,142,56,227,141,
224,49,12,12,28,244,56,16,136,98,109,5,176,54,130,216,28,14,2,27,65,104,121,38,208,91,129,65,138,17,12,16,136,96,98,134,40,98,136,67,23,32,218,11,112,140,84,24,40,48,66,33,16,136,67,20,17,8,135,33,8,135,
0,139,0,11,3,7,9,172,183,33,168,11,224,37,64,94,38,208,91,3,104,45,129,192,199,85,4,54,130,208,242,77,160,183,1,224,18,160,47,2,84,5,226,24,4,48,152,11,192,57,6,208,91,132,98,113,28,68,168,11,132,168,
11,192,232,240,18,160,47,144,74,128,188,14,3,17,129,131,132,149,30,156,132,226,92,9,196,177,54,130,216,27,65,108,14,6,44,224,134,208,90,30,73,180,22,228,19,137,96,156,75,136,49,68,185,67,104,45,194,57,
34,113,40,156,75,2,203,2,113,46,66,113,44,14,21,194,181,196,96,231,53,1,124,131,104,45,129,180,22,192,224,112,16,218,11,67,201,54,130,223,194,7,152,54,130,220,35,249,128,112,28,38,14,18,242,136,235,200,
48,1,18,186,74,233,43,164,172,172,174,146,186,68,96,106,146,186,68,101,101,116,149,149,149,149,136,196,96,106,145,25,89,93,37,116,149,210,87,73,93,37,116,149,210,86,86,87,73,93,37,116,149,136,229,43,164,
174,146,178,178,186,96,172,174,144,131,156,172,32,231,43,43,43,43,8,50,178,186,74,233,43,164,174,146,186,74,233,43,164,70,6,169,43,164,174,146,186,96,70,86,87,73,88,142,82,186,78,200,1,149,149,149,149,
149,132,28,229,98,57,74,202,202,233,43,164,174,146,186,74,233,43,164,174,152,43,43,164,174,112,193,194,96,231,89,196,2,224,1,98,2,192,135,129,15,2,43,128,10,17,81,201,54,130,220,32,87,128,5,136,21,192,
135,129,15,2,30,0,40,28,171,56,85,95,0,21,197,96,69,32,20,132,82,1,72,67,192,10,203,57,64,87,0,164,92,70,14,105,42,36,28,4,174,1,49,215,2,134,93,30,7,28,120,1,112,149,12,93,198,99,225,58,172,3,19,90,3,
136,48,49,158,17,53,133,200,48,84,184,131,22,225,20,128,194,96,57,66,84,24,141,65,94,58,48,60,12,136,43,196,57,139,2,225,118,97,186,7,12,228,43,12,194,65,17,6,224,139,131,196,33,197,138,69,130,139,16,
11,2,203,5,161,14,39,56,44,0,44,19,2,139,0,11,21,194,85,112,5,200,33,242,132,225,16,226,68,226,171,132,56,141,224,145,37,185,34,88,18,91,138,216,64,72,232,66,35,184,3,64,17,151,52,69,4,47,26,72,123,27,
166,169,119,169,148,187,49,62,191,230,12,178,203,44,178,203,44,178,203,44,178,203,44,178,203,44,178,203,44,178,203,44,178,203,44,178,203,44,178,203,44,178,223,242,214,89,101,150,89,101,150,89,101,150,
89,101,150,89,101,150,89,101,150,89,101,150,89,101,150,89,101,150,89,101,150,89,110,122,203,44,178,203,44,178,203,44,178,203,8,154,236,130,19,96,39,136,153,150,64,163,25,33,43,36,136,155,146,106,73,249,
255,0,243,138,255,218,0,8,1,3,3,1,63,33,255,0,238,0,0,149,245,40,135,131,53,255,0,180,2,250,212,17,255,0,237,96,63,249,136,1,31,254,214,3,255,0,152,128,31,255,0,19,192,7,15,254,214,11,235,97,255,0,237,
160,126,179,15,210,227,193,240,188,31,252,160,67,255,0,80,114,68,63,197,16,242,196,63,203,23,18,139,5,192,176,24,46,106,139,131,60,20,92,11,248,139,129,98,184,148,88,174,66,164,88,40,191,134,9,226,66,
224,25,2,195,50,81,153,164,0,33,64,84,1,12,16,69,193,21,28,111,129,224,227,193,226,227,230,56,248,28,120,184,240,113,240,56,249,207,133,240,60,94,47,23,192,249,14,60,28,124,110,138,41,104,138,27,153,20,
40,40,121,129,245,12,71,32,22,249,100,168,236,240,230,75,185,128,22,209,1,251,255,0,152,97,134,24,97,134,24,97,134,24,97,134,24,97,134,24,97,134,24,97,134,24,97,134,24,97,134,24,97,134,24,97,134,127,203,
48,195,12,48,195,12,48,195,12,48,195,12,48,195,12,48,195,12,48,195,12,48,195,12,48,195,12,48,195,12,48,195,57,230,24,97,134,24,97,134,24,97,134,24,103,106,17,210,236,196,123,159,145,5,168,36,145,104,75,
81,128,128,7,2,48,64,4,13,128,167,52,95,254,111,160,0,0,0,0,0,31,255,218,0,12,3,1,0,2,17,3,17,0,0,16,255,0,254,127,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,
0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,159,255,0,255,0,255,0,255,0,255,
0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,
255,0,255,0,255,0,255,0,255,0,231,255,0,237,182,219,109,182,219,109,182,219,109,182,219,109,182,219,109,182,219,109,182,219,109,182,219,109,182,219,109,182,219,109,182,219,109,182,219,109,182,219,127,
255,0,255,0,249,255,0,248,18,73,36,146,73,36,178,73,36,146,73,36,146,73,36,146,73,36,146,73,36,146,73,36,146,73,36,146,73,36,146,73,36,146,73,21,219,111,3,255,0,255,0,254,127,106,178,73,164,182,91,48,
199,27,132,146,73,45,146,106,36,210,105,85,88,234,164,146,73,108,146,97,53,26,141,52,174,169,36,146,73,180,169,126,227,127,255,0,255,0,159,252,236,146,73,54,155,79,60,251,121,36,146,77,164,147,73,36,146,
105,167,147,73,36,146,109,36,158,73,164,210,73,52,210,73,36,146,73,46,77,254,223,255,0,255,0,231,255,0,59,36,182,77,38,147,207,126,158,73,36,146,105,36,146,91,45,146,73,237,146,73,36,154,73,39,146,73,
36,182,217,229,178,73,36,182,75,130,239,15,255,0,255,0,249,255,0,199,255,0,237,255,0,79,167,255,0,207,167,255,0,255,0,255,0,155,255,0,251,246,251,127,125,251,123,255,0,255,0,254,159,255,0,255,0,253,254,
237,183,158,111,255,0,255,0,237,254,135,51,195,255,0,255,0,254,127,242,146,73,36,218,109,60,243,237,228,146,73,54,146,77,36,146,73,166,158,77,36,146,73,180,146,121,38,147,73,36,211,73,36,146,73,36,249,
55,240,255,0,255,0,255,0,159,252,63,255,0,255,0,244,250,127,125,250,123,255,0,255,0,249,191,254,191,255,0,255,0,215,95,190,191,255,0,255,0,233,255,0,191,255,0,95,175,255,0,235,175,255,0,255,0,255,0,255,
0,248,110,60,63,255,0,255,0,231,255,0,63,109,182,223,239,247,223,127,254,219,109,183,251,109,214,219,109,186,235,237,214,219,109,191,219,111,182,235,117,182,221,117,182,219,109,182,203,146,191,15,255,
0,255,0,249,255,0,206,201,45,147,73,164,243,223,167,146,73,36,154,73,36,150,203,100,146,123,100,146,73,38,146,73,228,146,73,45,182,121,108,146,73,45,146,224,211,195,255,0,255,0,254,127,241,255,0,251,127,
211,233,255,0,243,233,255,0,255,0,255,0,230,255,0,254,253,190,223,223,126,222,255,0,255,0,255,0,167,255,0,255,0,255,0,127,187,109,231,155,255,0,255,0,251,127,160,224,240,255,0,255,0,255,0,159,252,164,
146,73,54,155,79,60,251,121,36,146,77,164,147,73,36,146,105,167,147,73,36,146,109,36,158,73,164,210,73,52,210,73,36,146,73,62,117,252,63,255,0,255,0,231,255,0,15,255,0,255,0,253,62,159,223,126,158,255,
0,255,0,254,111,255,0,175,255,0,255,0,245,215,239,175,255,0,255,0,250,127,239,255,0,215,235,255,0,250,235,255,0,255,0,255,0,255,0,254,20,79,15,255,0,255,0,249,255,0,207,219,109,183,251,253,247,223,255,
0,182,219,109,254,219,117,182,219,110,186,251,117,182,219,111,246,219,237,186,221,109,183,93,109,182,219,109,178,228,251,195,255,0,255,0,254,127,242,146,73,36,218,109,60,243,237,228,146,73,54,146,77,36,
146,73,166,158,77,36,146,73,180,146,121,38,147,73,36,211,73,36,146,73,36,184,39,240,255,0,255,0,255,0,159,252,164,146,73,54,155,79,60,251,121,36,146,77,164,147,73,36,146,105,167,147,73,36,146,109,36,158,
73,164,210,73,52,210,73,36,146,73,40,109,252,63,255,0,255,0,231,255,0,41,36,146,77,166,211,207,62,222,73,36,147,105,36,210,73,36,154,105,228,210,73,36,155,73,39,146,105,52,146,77,52,146,73,36,146,79,143,
255,0,15,255,0,255,0,249,255,0,195,255,0,255,0,255,0,79,167,247,223,167,191,255,0,255,0,155,255,0,235,255,0,255,0,253,117,251,235,255,0,255,0,254,159,251,255,0,245,250,255,0,254,186,255,0,255,0,255,0,
255,0,255,0,128,191,195,255,0,255,0,254,127,243,246,219,109,254,255,0,125,247,255,0,237,182,219,127,182,221,109,182,219,174,190,221,109,182,219,253,182,251,110,183,91,109,215,91,109,182,219,108,185,244,
240,255,0,255,0,255,0,159,252,164,146,73,54,155,79,60,251,121,36,146,77,164,147,73,36,146,105,167,147,73,36,146,109,36,158,73,164,210,73,52,210,73,36,146,73,46,113,60,63,255,0,255,0,231,255,0,31,255,0,
247,253,62,158,251,46,151,255,0,255,0,254,111,255,0,239,251,253,253,247,125,239,255,0,255,0,250,127,253,255,0,247,251,190,254,121,255,0,255,0,255,0,247,250,3,223,15,255,0,255,0,249,255,0,198,201,45,147,
73,164,243,223,167,146,73,36,154,73,52,150,203,102,154,123,116,146,73,38,146,73,228,154,77,45,183,125,108,146,73,45,147,231,147,195,255,0,255,0,254,127,240,255,0,255,0,127,219,237,253,247,237,239,255,
0,255,0,246,255,0,250,255,0,191,223,93,126,218,255,0,255,0,255,0,183,254,255,0,253,126,187,239,174,159,255,0,255,0,255,0,127,161,47,240,255,0,251,223,159,252,237,182,251,127,191,223,125,255,0,251,109,
182,223,237,183,91,125,190,235,175,191,91,109,182,255,0,109,190,219,173,215,223,117,222,219,109,182,251,46,9,188,63,255,0,131,231,255,0,41,36,154,79,231,242,219,47,246,201,36,147,249,37,210,77,38,154,
235,102,214,73,36,159,201,45,146,233,116,211,77,54,146,73,36,154,75,144,79,15,255,0,229,249,255,0,206,201,61,147,73,164,182,219,165,178,73,36,154,73,100,158,207,100,178,217,101,146,73,38,146,75,100,178,
89,47,190,121,124,146,73,61,154,152,3,195,255,0,237,190,127,242,210,73,36,218,109,60,243,237,228,146,73,54,146,77,36,146,73,166,158,77,36,146,73,180,146,121,38,147,73,36,211,73,36,146,73,36,215,247,240,
255,0,248,207,159,255,0,1,37,154,66,36,85,20,1,2,73,36,144,137,36,82,205,44,130,10,199,210,73,36,132,73,32,146,41,52,178,195,28,146,73,36,178,213,255,0,252,63,255,0,255,0,231,255,0,237,146,75,36,210,89,
101,146,111,36,146,72,220,144,9,37,130,73,36,178,201,36,146,75,228,131,8,4,24,109,180,131,217,36,146,9,63,159,255,0,15,255,0,255,0,249,253,27,191,254,46,92,139,0,216,230,207,255,0,252,13,191,210,123,84,
147,193,183,134,127,255,0,255,0,63,252,179,204,5,142,215,220,174,127,255,0,226,4,167,255,0,215,255,0,255,0,254,127,218,15,248,63,218,175,15,142,100,183,255,0,255,0,150,239,217,142,156,76,227,221,242,223,
255,0,255,0,215,255,0,144,251,109,3,32,19,199,31,255,0,221,58,177,255,0,240,255,0,255,0,255,0,159,232,31,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,
255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,223,223,255,0,255,0,231,251,45,182,219,109,182,219,109,182,219,109,182,219,
109,182,219,109,182,219,109,182,219,109,182,219,109,182,219,109,182,219,109,182,219,109,182,219,109,182,219,111,255,0,255,0,249,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,
255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,254,127,255,0,
255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,
0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,159,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,
0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,231,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,
0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,249,255,0,255,0,255,0,255,0,255,
0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,
255,0,255,0,255,0,255,0,255,0,254,127,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,
255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,159,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,
0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,231,255,0,255,0,255,0,255,0,255,0,255,0,255,
0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,
255,0,255,0,255,0,249,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,
0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,254,127,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,
0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,159,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,
0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,
255,0,231,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,
0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,249,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,
0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,254,127,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,
0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,159,255,
0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,
255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,231,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,
0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,249,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,
0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,254,127,255,0,255,0,255,
0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,
255,0,255,0,255,0,255,0,255,0,255,0,255,0,159,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,
0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,231,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,
0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,249,255,0,255,0,255,0,255,0,255,0,255,
0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,
255,0,255,0,255,0,255,0,254,127,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,
255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,159,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,
0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,231,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,
0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,
255,0,255,218,0,8,1,1,3,1,63,16,255,0,221,99,142,51,215,251,180,235,207,214,145,159,143,152,0,37,5,85,193,88,129,10,2,88,5,120,75,36,171,147,9,208,88,91,8,41,58,51,236,124,4,72,145,236,121,254,2,85,206,
136,174,125,189,109,137,18,61,11,246,35,105,185,116,107,191,140,8,244,47,216,141,166,229,209,174,254,48,35,209,3,205,181,194,143,68,15,54,214,119,173,54,31,91,78,136,30,111,172,232,95,177,27,77,203,163,
93,252,78,136,30,109,175,38,137,18,36,72,145,34,71,98,232,211,111,19,161,126,224,109,194,68,137,18,52,51,191,70,191,63,188,8,145,236,121,254,2,85,206,136,174,125,189,109,129,30,199,159,224,37,92,232,138,
231,219,214,216,17,161,157,251,53,248,253,66,52,51,191,102,191,31,168,71,162,7,155,107,59,93,29,202,228,202,185,209,21,207,183,173,165,12,239,217,175,199,235,144,68,137,18,36,72,145,35,208,191,98,54,155,
151,70,187,248,225,34,68,141,30,136,30,111,175,1,18,36,104,103,126,141,126,127,120,17,35,67,59,244,107,243,251,132,122,34,185,118,245,180,236,121,126,66,21,206,136,174,93,189,109,59,30,95,144,133,114,
134,119,236,215,227,245,209,95,49,67,59,244,107,243,251,232,138,229,219,214,211,177,229,249,8,87,200,34,68,137,18,36,72,246,60,255,0,1,42,231,68,87,62,222,182,192,206,160,192,185,176,53,158,226,41,211,
175,1,253,15,208,79,244,67,215,243,128,243,65,158,72,198,228,80,52,36,54,128,242,21,144,65,40,134,93,125,128,1,64,16,0,9,32,2,1,4,4,130,64,211,153,24,49,0,133,5,71,67,102,141,224,13,72,17,129,160,2,54,
0,40,88,133,160,204,1,126,185,156,151,0,171,31,126,29,8,16,32,201,58,98,64,2,97,128,33,153,27,146,89,224,16,33,64,107,88,49,110,8,0,0,0,6,34,20,6,181,131,22,224,128,0,0,0,96,32,178,53,241,87,82,32,134,
1,71,108,12,22,70,190,42,234,68,16,192,40,237,129,144,192,215,197,93,72,128,25,1,149,240,80,26,214,12,91,130,0,0,0,1,11,35,95,21,117,34,8,96,20,118,228,152,16,32,64,129,2,4,22,181,131,22,225,130,0,65,
4,112,168,16,32,70,199,25,107,70,128,70,7,172,15,11,40,6,92,2,4,25,39,76,72,0,76,48,4,51,35,114,75,56,136,50,78,152,144,0,152,96,8,102,70,228,150,112,16,90,209,164,19,129,235,35,192,138,33,156,220,227,
45,104,210,9,192,245,145,224,69,16,206,110,113,150,70,190,42,234,68,16,192,40,237,131,146,116,196,128,4,195,0,67,50,55,36,179,11,90,52,130,112,61,100,120,17,68,51,155,159,37,136,16,32,64,129,2,20,6,181,
131,22,224,128,0,0,0,112,136,16,32,192,96,107,226,174,164,64,12,128,202,248,136,17,177,198,90,209,160,17,129,235,3,194,202,1,150,2,54,56,203,90,52,2,48,61,96,120,89,64,50,192,64,58,96,64,0,33,130,97,24,
27,130,24,192,200,58,96,64,0,33,130,97,24,27,130,24,192,201,107,70,144,78,7,172,143,2,40,134,115,202,254,23,181,66,214,141,0,140,15,88,30,22,80,12,160,58,96,64,0,33,130,97,24,27,130,24,229,25,16,32,64,
129,2,4,25,39,76,72,0,76,48,4,51,35,114,75,51,111,246,74,134,238,62,13,146,192,17,75,206,177,80,191,177,170,70,200,79,225,251,212,54,233,22,36,160,76,49,176,160,113,216,156,126,198,205,119,217,250,81,
172,145,218,197,61,12,0,1,0,8,32,4,129,161,98,196,23,156,161,244,140,146,185,92,88,53,108,28,200,254,211,236,157,23,79,42,61,3,140,83,200,139,18,36,67,204,139,18,40,254,112,90,20,2,133,137,64,41,255,0,
133,22,32,80,180,40,5,11,66,135,185,47,76,193,60,254,224,177,253,13,48,168,160,224,202,211,32,150,249,64,45,232,36,128,72,16,116,173,188,32,90,17,2,78,199,19,61,151,219,251,14,100,127,105,246,70,163,210,
49,236,85,122,121,213,254,243,174,180,224,249,94,127,19,59,216,211,211,143,93,244,31,38,121,4,10,160,131,100,230,48,235,190,131,228,207,32,129,84,16,108,156,198,2,224,31,208,238,63,200,46,1,159,195,74,
191,123,102,244,130,160,29,119,208,124,153,228,16,42,130,13,147,152,130,224,31,208,238,63,206,71,128,66,232,0,23,78,66,117,219,81,240,120,122,15,203,161,199,229,121,252,76,239,99,79,78,31,43,207,226,103,
123,26,122,112,232,63,14,167,14,131,240,234,112,23,0,206,234,215,5,143,14,226,218,204,239,99,79,76,232,63,14,167,147,215,125,7,201,158,65,2,168,32,217,57,142,15,232,247,63,228,21,192,7,65,249,116,56,244,
31,151,67,134,87,177,175,166,124,191,63,153,149,236,107,233,159,47,207,230,116,31,135,83,58,184,254,231,65,249,116,51,43,216,215,211,62,95,159,207,35,229,121,252,76,239,99,79,78,30,239,90,230,121,102,
1,79,148,190,225,99,250,154,239,225,5,193,149,166,129,224,88,115,31,145,26,226,81,185,175,16,73,183,109,2,4,12,233,86,135,231,3,253,207,97,204,35,251,79,179,2,213,220,98,49,146,10,130,44,68,165,196,16,
32,64,129,7,25,37,140,34,137,20,68,37,51,64,50,77,120,2,4,8,24,73,32,101,210,6,117,48,40,1,182,33,2,6,18,72,25,116,129,157,76,10,0,109,128,69,208,0,25,174,9,193,18,66,208,8,129,83,6,138,4,93,0,1,154,224,
156,17,36,45,0,136,21,48,104,179,33,31,68,4,98,184,7,32,64,26,64,178,69,8,10,184,16,48,146,64,203,164,12,234,96,80,3,104,186,0,3,53,193,56,34,72,90,1,16,42,96,209,114,2,4,8,16,32,64,129,11,8,36,140,58,
72,198,166,1,130,54,226,8,16,32,64,143,197,163,0,84,54,66,106,42,137,44,154,164,6,33,2,4,28,100,150,48,138,36,81,16,148,205,0,201,53,196,32,65,198,73,99,8,162,69,17,9,76,208,12,147,92,2,63,4,140,64,80,
221,9,168,40,32,176,42,152,48,35,240,72,196,5,13,208,154,130,130,11,2,169,131,2,46,128,0,205,112,78,8,146,22,128,68,10,152,52,80,32,227,36,177,132,81,34,136,132,166,104,6,73,172,126,9,24,128,161,186,19,
80,80,65,96,85,48,121,33,2,4,8,16,32,64,129,3,9,36,12,186,64,206,166,5,0,54,225,8,16,32,71,209,1,24,174,1,200,16,6,144,44,145,66,2,175,16,129,2,63,22,140,1,80,217,9,168,170,36,178,106,144,24,4,8,252,90,
48,5,67,100,38,162,168,146,201,170,64,64,135,140,18,198,81,68,154,34,16,217,162,81,6,184,4,60,96,150,50,138,36,209,16,134,205,18,136,53,192,35,240,72,196,5,13,208,154,130,130,11,2,169,131,3,63,22,140,
1,80,217,9,168,170,36,178,106,144,7,140,18,198,81,68,154,34,16,217,162,81,6,188,160,129,2,4,8,16,32,64,131,140,146,198,17,68,138,34,18,153,160,25,38,184,4,90,72,130,229,204,92,247,41,221,198,127,187,136,
13,108,49,122,185,81,220,144,160,157,140,17,2,4,6,179,191,34,112,128,59,170,31,144,198,84,82,19,233,81,142,150,7,251,158,195,152,71,246,159,100,232,186,121,81,232,28,98,158,68,88,145,34,30,100,88,145,
71,243,130,208,160,20,44,74,1,79,252,40,177,2,133,161,64,40,90,20,61,201,242,67,29,177,141,139,97,175,143,137,174,87,20,201,112,101,105,223,227,170,155,178,122,80,109,75,30,253,211,176,61,9,215,249,191,
93,132,63,220,246,28,194,63,180,251,34,85,216,241,242,175,216,64,44,225,5,64,96,87,132,176,93,8,241,17,34,68,137,19,88,13,129,6,108,163,9,26,10,65,80,72,56,145,35,250,98,3,5,2,160,137,232,250,160,106,
51,192,143,233,136,12,20,10,130,39,163,234,129,168,207,2,55,170,47,2,4,17,96,97,65,6,234,77,21,184,118,130,245,69,224,64,130,44,12,40,32,221,73,162,188,170,116,159,78,140,189,80,120,128,32,130,33,42,140,
55,67,76,63,211,16,24,40,21,4,79,71,213,3,81,156,189,81,120,16,32,139,3,10,8,55,82,104,173,195,183,32,17,34,68,137,18,36,75,5,18,160,129,234,250,32,42,114,159,182,56,4,72,145,238,89,64,120,133,116,96,
19,116,10,72,200,134,197,193,224,34,68,137,172,6,192,131,54,81,132,141,5,32,168,36,28,72,145,53,128,216,16,102,202,48,145,160,164,21,4,131,129,17,196,105,162,0,27,161,82,70,64,52,46,68,238,89,192,56,141,
52,64,3,116,42,72,200,6,133,200,157,203,56,47,84,94,4,8,34,192,194,130,13,212,154,43,112,189,160,53,128,216,16,102,202,48,145,160,164,21,4,131,7,17,166,136,0,110,133,73,25,0,208,185,19,185,103,200,4,72,
145,34,68,137,31,211,16,24,40,21,4,79,71,213,3,81,159,1,18,36,118,14,240,94,168,60,64,16,65,16,149,70,27,161,166,30,4,72,247,44,160,60,66,186,48,9,186,5,36,100,67,98,224,224,71,185,101,1,226,21,209,128,
77,208,41,35,34,27,23,7,2,38,178,91,2,12,89,70,0,53,20,130,164,128,48,34,107,37,176,32,197,148,96,3,81,72,42,72,3,2,35,136,211,68,0,55,66,164,140,128,104,92,137,79,63,224,213,124,62,28,60,66,186,48,9,
186,5,36,100,67,98,224,195,89,45,129,6,44,163,0,26,138,65,82,64,28,162,36,72,145,34,68,137,18,38,176,27,2,12,217,70,18,52,20,130,160,144,112,34,227,179,32,212,42,182,246,2,116,199,83,15,136,107,227,53,
237,187,251,189,53,21,24,34,23,144,135,78,34,91,2,88,24,80,166,135,185,2,228,252,149,117,253,251,192,255,0,115,216,115,8,254,211,236,157,23,33,94,39,238,51,67,243,193,251,241,110,10,62,168,169,75,211,
189,177,11,234,138,148,189,59,219,16,190,96,48,60,192,67,245,241,164,241,1,15,84,84,165,233,222,216,5,243,1,202,2,251,162,173,109,78,246,224,255,0,15,138,240,5,253,248,182,52,127,126,45,193,68,47,250,
124,215,0,191,233,243,89,230,2,23,245,240,173,227,26,33,127,211,230,188,143,84,84,165,233,222,220,65,124,64,98,127,135,197,113,11,254,31,21,224,11,71,247,230,248,81,253,249,190,1,119,205,183,155,109,247,
120,133,163,251,243,126,71,239,197,177,163,238,122,215,209,198,138,41,71,35,254,228,20,136,206,73,183,225,5,23,7,86,153,62,44,77,215,223,179,200,101,48,33,114,141,84,100,136,214,19,17,24,159,238,123,14,
97,31,218,125,145,168,244,140,123,21,94,158,117,127,188,235,173,56,62,87,159,196,206,246,52,244,227,215,125,7,201,158,65,2,168,32,217,57,140,58,239,160,249,51,200,32,85,4,27,39,49,128,184,7,244,59,143,
242,11,128,103,240,210,175,222,217,189,32,168,7,93,244,31,38,121,4,10,160,131,100,230,32,184,7,244,59,143,243,145,224,16,186,0,5,211,144,157,118,212,124,30,30,131,242,232,113,249,94,127,19,59,216,211,
211,135,202,243,248,153,222,198,158,156,58,15,195,169,195,160,252,58,156,5,192,51,186,181,193,99,195,184,182,179,59,216,211,211,58,15,195,169,228,245,223,65,242,103,144,64,170,8,54,78,99,131,250,61,207,
249,5,112,1,208,126,93,14,61,7,229,208,225,149,236,107,233,159,47,207,230,101,123,26,250,103,203,243,249,157,7,225,212,206,174,63,185,208,126,93,12,202,246,53,244,207,151,231,243,200,249,94,127,19,59,
216,211,211,135,187,214,185,158,89,128,83,229,47,184,88,254,166,187,248,65,112,101,105,150,142,77,16,20,130,213,57,238,53,12,179,148,178,48,229,36,47,81,19,161,215,108,15,247,61,135,48,143,237,62,204,
11,87,113,136,198,72,42,8,177,18,151,16,64,129,2,4,28,100,150,48,138,36,81,16,148,205,0,201,53,224,8,16,32,97,36,129,151,72,25,212,192,160,6,216,132,8,24,73,32,101,210,6,117,48,40,1,182,1,23,64,0,102,
184,39,4,73,11,64,34,5,76,26,40,17,116,0,6,107,130,112,68,144,180,2,32,84,193,162,204,132,125,16,17,138,224,28,129,0,105,2,201,20,32,42,224,64,194,73,3,46,144,51,169,129,64,13,162,232,0,12,215,4,224,137,
33,104,4,64,169,131,69,200,8,16,32,64,129,2,4,44,32,146,48,233,35,26,152,6,8,219,136,32,64,129,2,63,22,140,1,80,217,9,168,170,36,178,106,144,24,132,8,16,113,146,88,194,40,145,68,66,83,52,3,36,215,16,129,
7,25,37,140,34,137,20,68,37,51,64,50,77,112,8,252,18,49,1,67,116,38,160,160,130,192,170,96,192,143,193,35,16,20,55,66,106,10,8,44,10,166,12,8,186,0,3,53,193,56,34,72,90,1,16,42,96,209,64,131,140,146,198,
17,68,138,34,18,153,160,25,38,177,248,36,98,2,134,232,77,65,65,5,129,84,193,228,132,8,16,32,64,129,2,4,12,36,144,50,233,3,58,152,20,0,219,132,32,64,129,31,68,4,98,184,7,32,64,26,64,178,69,8,10,188,66,
4,8,252,90,48,5,67,100,38,162,168,146,201,170,64,96,16,35,241,104,192,21,13,144,154,138,162,75,38,169,1,2,30,48,75,25,69,18,104,136,67,102,137,68,26,224,16,241,130,88,202,40,147,68,66,27,52,74,32,215,
0,143,193,35,16,20,55,66,106,10,8,44,10,166,12,12,252,90,48,5,67,100,38,162,168,146,201,170,64,30,48,75,25,69,18,104,136,67,102,137,68,26,242,130,4,8,16,32,64,129,2,14,50,75,24,69,18,40,136,74,102,128,
100,154,224,17,105,34,11,151,49,115,220,167,119,25,254,238,32,53,176,197,234,229,71,114,66,130,118,48,9,78,53,232,252,32,12,42,48,30,25,5,99,147,124,7,136,117,214,120,31,238,123,14,97,31,218,125,147,162,
233,229,71,160,113,138,121,17,98,68,136,121,145,98,69,31,206,11,66,128,80,177,40,5,63,240,162,196,10,22,133,0,161,104,80,247,39,201,12,118,198,54,45,134,190,62,38,185,92,83,37,193,149,167,253,47,222,189,
101,58,246,199,130,41,166,39,251,158,195,152,71,246,159,100,74,187,30,62,85,251,8,5,156,32,168,12,10,240,150,11,161,30,34,36,72,145,34,107,1,176,32,205,148,97,35,65,72,42,9,7,18,36,127,76,64,96,160,84,
17,61,31,84,13,70,120,17,253,49,1,130,129,80,68,244,125,80,53,25,224,70,245,69,224,64,130,44,12,40,32,221,73,162,183,14,208,94,168,188,8,16,69,129,133,4,27,169,52,87,149,78,147,233,209,151,170,15,16,4,
16,68,37,81,134,232,105,135,250,98,3,5,2,160,137,232,250,160,106,51,151,170,47,2,4,17,96,97,65,6,234,77,21,184,118,228,2,36,72,145,34,68,137,96,162,84,16,61,95,68,5,78,83,246,199,0,137,18,61,203,40,15,
16,174,140,2,110,129,73,25,16,216,184,60,4,72,145,53,128,216,16,102,202,48,145,160,164,21,4,131,137,18,38,176,27,2,12,217,70,18,52,20,130,160,144,112,34,56,141,52,64,3,116,42,72,200,6,133,200,157,203,
56,7,17,166,136,0,110,133,73,25,0,208,185,19,185,103,5,234,139,192,129,4,88,24,80,65,186,147,69,110,23,180,6,176,27,2,12,217,70,18,52,20,130,160,144,96,226,52,209,0,13,208,169,35,32,26,23,34,119,44,249,
0,137,18,36,72,145,35,250,98,3,5,2,160,137,232,250,160,106,51,224,34,68,142,193,222,11,213,7,136,2,8,34,18,168,195,116,52,195,192,137,30,229,148,7,136,87,70,1,55,64,164,140,136,108,92,28,8,247,44,160,
60,66,186,48,9,186,5,36,100,67,98,224,224,68,214,75,96,65,139,40,192,6,162,144,84,144,6,4,77,100,182,4,24,178,140,0,106,41,5,73,0,96,68,113,26,104,128,6,232,84,145,144,13,11,145,41,231,252,26,175,135,
195,135,136,87,70,1,55,64,164,140,136,108,92,24,107,37,176,32,197,148,96,3,81,72,42,72,3,148,68,137,18,36,72,145,34,68,214,3,96,65,155,40,194,70,130,144,84,18,14,4,92,118,100,26,133,86,222,192,78,152,
234,97,241,13,124,102,189,183,127,119,166,162,163,4,86,160,193,16,155,151,248,118,49,64,3,65,238,200,191,162,3,45,47,181,23,93,176,63,220,246,28,194,63,180,251,39,69,200,87,137,251,140,208,252,240,126,
252,91,130,143,170,42,82,244,239,108,66,250,162,165,47,78,246,196,47,152,12,15,48,16,253,124,105,60,64,67,213,21,41,122,119,182,1,124,192,114,128,190,232,171,91,83,189,184,63,195,226,188,1,127,126,45,
141,31,223,139,112,81,11,254,159,53,192,47,250,124,214,121,128,133,253,124,43,120,198,136,95,244,249,175,35,213,21,41,122,119,183,16,95,16,24,159,225,241,92,66,255,0,135,197,120,2,209,253,249,190,20,127,
126,111,128,93,243,109,230,219,125,222,33,104,254,252,223,145,251,241,108,104,251,158,181,244,113,162,138,81,200,255,0,185,5,34,51,146,109,248,65,69,193,213,167,112,197,39,33,221,175,176,32,4,0,58,79,
215,8,106,43,24,6,39,251,158,195,152,71,246,159,100,232,186,121,81,232,28,98,158,68,88,145,34,30,100,88,145,71,243,130,208,160,20,44,74,1,79,252,40,177,2,133,161,64,40,90,20,61,201,250,102,9,231,247,5,
143,234,107,191,132,23,6,86,153,108,237,198,89,202,8,73,197,128,159,83,146,87,17,76,56,34,8,99,19,253,207,97,204,35,251,79,178,116,93,60,168,244,14,49,79,34,44,72,145,15,50,44,72,163,249,193,104,80,10,
22,37,0,167,254,20,88,129,66,208,160,20,45,10,30,228,255,0,45,55,244,242,12,236,49,122,185,81,220,144,160,157,140,0,6,58,224,183,122,64,15,32,112,193,122,196,186,152,0,130,0,12,79,247,61,135,48,143,237,
62,201,209,116,242,163,208,56,197,60,136,177,34,68,60,200,177,34,143,231,5,161,64,40,88,148,2,159,248,81,98,5,11,66,128,80,180,40,123,147,228,134,59,99,27,22,195,95,31,19,92,174,41,146,224,202,211,127,
143,89,156,219,254,173,78,3,253,207,97,204,35,251,79,178,37,93,143,31,42,253,132,2,206,16,84,6,5,120,75,5,208,143,17,18,36,72,145,53,128,216,16,102,202,48,145,160,164,21,4,131,137,18,63,166,32,48,80,42,
8,158,143,170,6,163,60,8,254,152,128,193,64,168,34,122,62,168,26,140,240,35,122,162,240,32,65,22,6,20,16,110,164,209,91,135,104,47,84,94,4,8,34,192,194,130,13,212,154,43,202,167,73,244,232,203,213,7,136,
2,8,34,18,168,195,116,52,195,253,49,1,130,129,80,68,244,125,80,53,25,203,213,23,129,2,8,176,48,160,131,117,38,138,220,59,114,1,18,36,72,145,34,68,176,81,42,8,30,175,162,2,167,41,251,99,128,68,137,30,229,
148,7,136,87,70,1,55,64,164,140,136,108,92,30,2,36,72,154,192,108,8,51,101,24,72,208,82,10,130,65,196,137,19,88,13,129,6,108,163,9,26,10,65,80,72,56,17,28,70,154,32,1,186,21,36,100,3,66,228,78,229,156,
3,136,211,68,0,55,66,164,140,128,104,92,137,220,179,130,245,69,224,64,130,44,12,40,32,221,73,162,183,11,218,3,88,13,129,6,108,163,9,26,10,65,80,72,48,113,26,104,128,6,232,84,145,144,13,11,145,59,150,124,
128,68,137,18,36,72,145,253,49,1,130,129,80,68,244,125,80,53,25,240,17,34,71,96,239,5,234,131,196,1,4,17,9,84,97,186,26,97,224,68,143,114,202,3,196,43,163,0,155,160,82,70,68,54,46,14,4,123,150,80,30,33,
93,24,4,221,2,146,50,33,177,112,112,34,107,37,176,32,197,148,96,3,81,72,42,72,3,2,38,178,91,2,12,89,70,0,53,20,130,164,128,48,34,56,141,52,64,3,116,42,72,200,6,133,200,148,243,254,13,87,195,225,195,196,
43,163,0,155,160,82,70,68,54,46,12,53,146,216,16,98,202,48,1,168,164,21,36,1,202,34,68,137,18,36,72,145,34,107,1,176,32,205,148,97,35,65,72,42,9,7,2,46,59,50,13,66,171,111,96,39,76,117,48,248,134,190,
51,94,219,191,187,211,81,81,130,38,72,228,242,8,102,78,45,162,192,93,94,164,118,90,131,193,16,97,186,62,82,212,252,176,204,24,104,255,0,115,216,115,8,254,211,236,157,23,33,94,39,238,51,67,243,193,251,
241,110,10,62,168,169,75,211,189,177,11,234,138,148,189,59,219,16,190,96,48,60,192,67,245,241,164,241,1,15,84,84,165,233,222,216,5,243,1,202,2,251,162,173,109,78,246,224,255,0,15,138,240,5,253,248,182,
52,127,126,45,193,68,47,250,124,215,0,191,233,243,89,230,2,23,245,240,173,227,26,33,127,211,230,188,143,84,84,165,233,222,220,65,124,64,98,127,135,197,113,11,254,31,21,224,11,71,247,230,248,81,253,249,
190,1,119,205,183,155,109,247,120,133,163,251,243,126,71,239,197,177,163,238,122,215,209,198,138,41,71,35,254,228,20,136,206,73,183,225,5,23,7,86,159,95,125,43,156,23,53,152,49,52,95,243,4,33,135,194,
63,185,156,197,3,124,80,255,0,115,216,115,8,254,211,236,157,23,79,42,61,3,140,83,200,139,18,36,67,204,139,18,40,254,112,90,20,2,133,137,64,41,255,0,133,22,32,80,180,40,5,11,66,135,185,63,76,193,60,254,
224,177,253,77,119,240,130,224,202,211,251,125,183,248,16,208,171,211,148,33,114,65,187,69,62,69,195,90,128,50,21,68,69,112,63,220,246,28,194,63,180,251,39,69,211,6,9,129,40,2,191,168,85,86,2,90,51,241,
214,136,165,120,29,58,116,69,225,7,1,183,0,216,162,137,201,72,38,196,24,0,21,193,211,165,0,65,88,32,230,172,129,9,54,4,146,53,199,165,0,65,88,32,230,172,129,9,54,4,146,53,195,161,180,97,73,229,86,10,0,
2,195,18,72,168,85,156,13,163,10,79,42,176,80,0,22,24,146,69,66,173,101,184,242,61,28,22,172,105,44,42,197,192,2,16,66,8,53,46,146,128,32,172,16,115,86,64,132,155,2,73,26,195,104,194,147,202,172,20,0,
5,134,36,145,80,171,200,225,211,167,78,157,58,116,36,21,130,14,40,201,16,131,112,8,39,94,26,29,58,116,253,241,3,56,226,206,152,72,34,5,73,96,0,136,23,4,227,211,162,47,8,56,13,184,6,197,20,78,74,65,54,
32,192,0,172,58,34,240,131,128,219,128,108,81,68,228,164,19,98,12,0,10,195,161,202,24,187,166,16,8,1,208,89,4,32,69,200,51,245,196,28,161,139,186,97,0,128,29,5,144,66,4,92,131,63,92,65,180,97,73,229,86,
10,0,2,195,18,72,168,85,69,242,55,61,171,7,1,183,0,216,162,137,201,72,38,196,24,0,21,14,80,197,221,48,128,64,14,130,200,33,2,46,65,159,174,57,46,157,58,116,233,211,165,0,65,88,32,230,172,129,9,54,4,146,
53,225,233,211,167,1,106,198,146,194,172,92,0,33,4,32,131,82,233,135,78,159,190,32,103,28,89,211,9,4,64,169,44,0,17,2,224,156,58,126,248,129,156,113,103,76,36,17,2,164,176,0,68,11,130,112,232,120,5,184,
6,133,20,14,11,64,54,34,200,32,40,203,66,30,1,110,1,161,69,3,130,208,13,136,178,8,10,50,208,135,40,98,238,152,64,32,7,65,100,16,129,23,32,206,174,253,127,48,103,28,89,211,9,4,64,169,44,0,17,2,224,152,
120,5,184,6,133,20,14,11,64,54,34,200,32,40,203,114,9,211,167,78,157,58,116,69,225,7,1,183,0,216,162,137,201,72,38,196,24,0,21,135,65,205,219,162,188,50,45,6,119,49,17,183,254,148,53,240,197,234,229,71,
114,66,130,118,48,17,150,5,226,168,41,37,163,65,10,231,141,251,24,5,52,184,80,147,192,113,240,9,192,226,48,113,48,255,0,115,216,115,8,254,211,236,157,23,76,30,17,253,112,17,235,205,49,35,215,154,112,17,
137,215,95,39,8,159,210,84,74,246,87,117,119,194,39,94,105,137,24,157,117,242,121,36,122,241,78,18,120,139,235,18,62,177,34,75,1,73,98,44,74,235,217,81,85,251,62,112,34,75,146,47,94,105,194,71,174,190,
71,12,66,120,138,79,17,72,251,192,143,184,74,10,161,60,5,35,239,145,235,18,62,228,217,33,142,216,198,197,176,215,199,196,215,43,138,100,184,50,180,244,219,223,125,102,215,27,254,117,157,203,192,255,0,
115,216,115,8,254,211,236,157,23,77,109,151,179,72,100,52,134,74,84,140,8,216,133,63,116,124,209,120,42,213,171,213,31,61,176,238,56,16,67,85,112,48,216,17,112,66,56,213,171,226,9,237,246,40,65,248,134,
65,32,16,32,177,182,21,124,65,61,190,197,8,63,16,200,36,2,4,22,54,194,173,0,140,18,25,6,16,32,202,44,216,49,172,232,186,233,80,148,2,48,72,100,24,64,131,40,179,96,198,179,236,91,250,44,202,84,8,73,3,128,
99,0,72,166,141,138,58,79,16,79,111,177,66,15,196,50,9,0,129,5,141,165,0,140,18,25,6,16,32,202,44,216,49,172,232,186,233,80,228,85,171,86,173,90,181,64,63,16,200,36,16,0,23,54,158,32,30,255,0,112,224,
171,86,173,173,78,174,216,96,129,200,168,57,83,67,163,40,162,139,178,198,173,94,168,249,237,135,113,192,130,26,171,129,134,192,139,130,17,194,175,84,124,246,195,184,224,65,13,85,192,195,96,69,193,8,225,
84,65,17,145,82,50,230,199,102,80,101,7,103,47,106,117,118,193,4,70,69,72,203,155,29,153,65,148,29,156,189,169,213,219,40,4,96,144,200,48,129,6,81,102,193,141,97,220,173,167,171,9,104,119,28,8,33,170,
184,24,108,8,184,33,24,32,136,200,169,25,115,99,179,40,50,131,179,151,181,58,187,121,21,106,213,171,86,173,95,16,79,111,177,66,15,196,50,9,0,129,5,141,184,42,213,171,209,117,210,133,42,4,36,129,192,49,
128,36,83,70,197,29,49,171,86,214,167,87,108,48,64,228,84,28,169,161,209,148,81,69,217,97,86,214,167,87,108,48,64,228,84,28,169,161,209,148,81,69,217,97,84,238,56,128,67,85,113,16,152,1,114,74,19,170,
62,123,225,220,113,0,134,170,226,33,48,2,228,148,39,84,124,247,193,4,70,69,72,203,155,29,153,65,148,29,156,202,205,78,149,239,158,223,48,193,3,145,80,114,166,135,70,81,69,23,101,14,227,136,4,53,87,17,
9,128,23,36,161,58,163,231,191,145,86,173,90,181,106,213,234,143,158,216,119,28,8,33,170,184,24,108,8,184,33,28,42,179,215,199,138,24,208,87,88,153,209,41,133,176,215,198,107,219,119,247,122,106,42,48,
71,42,191,242,149,77,231,191,168,26,101,235,112,48,72,87,133,34,161,203,148,191,232,216,230,19,133,159,238,123,14,16,13,140,240,130,64,15,4,14,144,54,64,129,38,248,88,35,137,96,153,16,0,201,80,98,55,110,
176,197,1,2,1,7,134,63,180,251,39,69,165,53,27,137,240,44,237,103,85,197,251,33,242,62,14,131,210,113,232,61,39,10,112,146,153,39,94,223,222,87,132,157,7,164,202,121,50,116,30,145,195,249,235,220,171,
128,95,217,15,145,227,251,33,242,60,40,130,254,58,245,40,130,254,58,245,41,194,79,217,15,145,202,32,191,142,189,114,122,15,73,225,175,25,63,61,123,149,96,47,231,175,114,172,5,253,144,120,22,31,178,15,
2,194,136,46,73,109,241,167,105,84,23,246,65,224,92,175,217,15,145,225,238,117,243,19,36,33,71,161,200,102,164,70,114,77,191,8,40,184,58,180,196,167,193,100,188,110,136,224,32,152,208,72,204,82,132,40,
240,250,183,144,11,110,147,16,67,24,14,63,220,246,28,32,166,105,169,142,77,65,194,84,64,114,110,38,182,122,18,147,173,32,206,82,203,76,73,76,97,72,34,75,36,240,199,246,159,100,187,252,57,105,93,103,169,
186,161,154,118,157,127,138,182,224,248,112,186,65,179,223,19,142,83,142,95,234,58,195,175,243,90,79,234,58,195,250,247,166,173,210,205,207,238,58,192,225,151,250,142,176,235,252,214,156,156,163,131,207,
199,231,128,47,195,133,210,13,158,248,124,56,93,32,217,239,136,95,63,63,140,2,249,249,252,79,234,58,195,225,218,222,198,180,133,210,13,158,248,5,243,243,248,228,30,28,189,127,154,214,127,113,215,19,207,
199,231,16,190,126,63,56,133,46,144,110,246,159,10,23,72,55,123,79,133,128,86,19,94,27,221,233,214,216,5,46,144,110,246,159,11,145,240,225,116,131,103,190,30,228,213,70,232,39,94,65,223,31,212,215,127,
8,46,12,173,58,245,213,225,165,114,221,126,179,157,117,241,93,176,63,220,246,28,32,108,68,100,50,93,156,196,119,32,124,157,146,249,76,172,41,229,172,8,156,204,160,156,88,0,9,21,102,108,56,99,251,79,178,
116,94,163,42,128,245,66,215,238,52,1,64,86,225,2,68,137,22,82,68,14,56,144,0,153,92,171,44,73,185,37,156,72,145,58,20,162,92,203,236,128,32,0,128,24,17,58,20,162,92,203,236,128,32,0,128,24,17,32,179,
8,116,98,226,170,10,44,88,161,129,82,11,48,135,70,46,42,160,162,197,138,18,163,234,175,32,6,35,46,172,92,213,73,77,11,6,97,208,165,18,230,95,100,1,0,4,0,132,22,97,14,140,92,85,65,69,139,20,57,37,72,145,
34,68,137,18,38,92,203,236,128,96,2,136,48,106,92,52,137,18,36,68,56,68,196,12,137,178,180,97,156,128,25,98,68,139,41,34,7,28,72,0,76,174,85,150,36,220,146,206,4,89,73,16,56,226,64,2,101,114,172,177,38,
228,150,112,34,97,202,38,36,228,205,149,179,12,100,72,207,2,38,28,162,98,78,76,217,91,48,198,68,140,240,34,65,102,16,232,197,197,84,20,88,177,66,18,60,238,174,248,7,28,72,0,76,174,85,150,36,220,146,204,
48,229,19,18,114,102,202,217,134,50,36,103,201,34,68,137,18,36,72,145,58,20,162,92,203,236,128,32,0,128,28,36,72,145,42,0,98,50,234,197,205,84,148,208,176,103,128,137,18,34,28,34,98,6,68,217,90,48,206,
64,12,177,34,68,67,132,76,64,200,155,43,70,25,200,1,150,4,64,227,128,0,153,5,206,144,196,27,130,24,136,164,136,28,112,0,19,32,185,210,24,131,112,67,17,20,145,48,229,19,18,114,102,202,217,134,50,36,103,
129,17,14,17,49,3,34,108,173,24,103,32,6,80,14,56,0,9,144,92,233,12,65,184,33,136,138,114,34,68,137,18,36,72,145,101,36,64,227,137,0,9,149,202,178,196,155,146,89,192,138,47,68,120,219,42,120,158,16,251,
20,170,173,172,233,64,243,187,185,98,69,22,20,137,49,161,222,189,20,227,148,9,68,134,102,231,147,209,235,29,137,128,2,234,24,8,231,41,135,17,144,132,63,220,246,28,35,72,237,199,78,18,219,8,188,0,98,0,
48,0,11,144,76,50,94,167,51,73,91,82,25,59,122,128,120,225,143,237,62,201,209,116,225,28,114,8,28,112,158,70,24,16,32,30,102,24,24,71,243,162,144,33,22,44,2,17,79,252,44,48,34,197,32,66,44,82,4,61,217,
253,48,66,249,83,144,110,101,123,153,28,244,186,227,81,143,93,36,190,39,244,186,203,19,253,207,97,194,30,79,57,128,205,67,225,193,160,66,8,6,17,49,171,59,75,32,6,218,90,30,252,131,156,255,0,252,92,128,
0,3,130,63,180,251,33,128,99,96,98,116,0,89,55,160,21,140,14,9,176,45,43,85,57,65,12,220,123,126,69,134,110,34,220,69,184,136,92,40,29,61,130,30,236,37,119,31,0,213,206,72,166,226,45,196,93,3,248,103,
51,39,219,239,208,22,240,101,8,155,136,191,1,246,96,51,53,254,250,16,227,90,72,148,102,226,32,71,164,154,133,87,52,134,204,252,198,191,244,128,143,73,53,10,174,105,13,153,249,138,61,246,86,2,118,231,65,
22,223,8,160,198,29,194,157,58,166,100,251,125,250,2,222,12,161,19,51,61,125,22,85,56,123,64,173,199,78,145,184,139,113,22,226,45,196,91,136,183,17,110,34,39,2,183,42,127,96,96,224,1,36,64,114,45,173,
89,68,164,17,4,49,55,17,110,34,220,69,168,99,167,244,188,101,155,242,28,34,244,24,196,20,77,196,91,136,133,194,129,211,216,33,238,194,87,113,240,13,92,228,138,110,34,220,69,111,182,123,9,80,101,82,16,
145,55,17,16,191,196,212,42,21,237,10,36,128,38,231,167,66,132,47,241,53,10,133,123,66,137,32,9,185,233,208,160,35,210,77,66,171,154,67,102,14,205,127,157,236,74,30,236,37,119,31,0,213,206,72,160,171,
227,180,213,130,239,75,128,4,128,119,95,135,181,66,110,34,220,69,184,139,113,22,226,45,196,91,136,186,7,240,206,102,79,183,223,160,45,224,202,17,55,17,110,34,220,69,184,233,246,128,189,148,150,242,226,
138,145,122,6,110,122,119,77,196,90,134,58,127,75,198,89,191,33,194,47,65,140,65,68,220,69,185,128,219,166,88,170,130,10,92,29,84,64,153,185,233,221,11,56,143,181,144,197,113,2,3,129,105,104,75,45,162,
128,128,97,103,17,246,178,24,174,32,64,112,45,45,9,101,180,80,16,12,33,127,137,168,84,43,218,20,73,0,77,67,239,71,253,237,117,25,102,252,135,8,189,6,49,5,16,206,127,155,113,154,36,229,10,34,17,185,139,
113,22,226,45,196,91,136,183,17,110,34,220,69,184,138,223,108,246,18,160,202,164,33,34,110,34,44,241,4,253,231,178,185,129,1,32,37,0,74,105,9,149,88,171,124,74,63,182,53,227,223,175,13,71,133,63,220,246,
28,194,63,180,251,48,171,252,65,246,107,98,184,0,72,251,11,117,183,7,142,231,251,200,66,254,146,226,253,232,58,97,239,99,95,93,163,199,119,78,164,43,151,217,168,211,170,190,133,103,75,76,86,91,102,177,
73,236,201,178,46,156,16,175,65,53,240,205,191,19,217,147,100,93,56,33,95,20,178,106,148,165,109,248,155,180,191,52,247,224,86,106,17,216,237,125,172,118,202,251,71,142,238,157,72,87,47,179,81,191,182,
61,154,63,56,121,4,75,163,249,228,83,16,222,201,224,190,152,177,16,144,33,132,221,230,28,177,88,56,128,16,71,0,234,167,240,89,159,134,94,74,180,8,237,91,39,23,142,231,251,200,66,254,146,226,253,232,58,
69,151,94,42,251,86,124,180,254,177,78,205,213,186,157,247,191,91,63,187,77,58,86,244,40,2,157,247,191,91,63,187,77,58,86,244,40,2,158,204,155,34,233,193,10,248,86,117,75,187,183,165,11,250,75,139,247,
160,233,84,253,179,77,251,117,22,15,252,204,254,79,34,153,219,204,47,251,133,220,164,247,190,32,17,28,71,207,147,219,243,26,197,103,55,218,107,189,223,196,58,169,252,22,103,225,151,146,173,2,59,86,201,
193,215,238,53,154,206,111,180,213,51,171,63,6,233,160,255,0,116,190,141,130,148,93,72,63,196,37,162,234,33,186,104,63,221,47,163,96,165,23,82,15,241,9,104,186,136,119,222,253,108,254,237,52,3,216,181,
70,121,1,182,87,159,134,94,74,180,8,237,91,38,62,31,248,117,184,217,144,0,145,246,203,181,151,174,66,203,175,21,125,171,62,90,127,88,167,102,234,221,76,223,224,63,70,203,56,0,72,167,198,89,81,181,69,71,
59,83,132,255,0,115,216,115,8,196,147,0,205,214,194,167,192,16,32,123,45,4,90,98,83,33,91,123,130,230,88,8,36,49,3,34,186,125,114,207,216,17,11,28,1,20,74,102,198,210,200,157,213,164,152,14,229,220,180,
177,24,28,1,75,166,15,52,246,220,160,78,130,197,64,116,13,88,7,92,33,44,17,0,76,232,101,209,241,4,136,82,197,162,251,35,8,97,61,32,204,155,36,165,162,32,76,105,131,145,38,249,208,208,14,213,4,86,219,254,
86,233,154,226,166,248,99,30,175,146,142,64,0,80,93,57,153,176,208,52,216,33,131,173,103,224,35,179,210,184,40,67,158,167,10,52,9,14,62,214,169,155,87,223,101,57,5,121,192,147,247,118,55,131,116,142,110,
4,86,21,64,163,31,23,147,98,1,169,199,240,168,67,73,241,137,221,117,83,196,96,82,2,31,194,112,194,80,121,192,38,23,87,53,19,88,42,50,11,61,103,30,0,133,110,99,82,23,215,206,158,240,235,190,221,224,100,
210,190,20,115,19,100,33,83,189,137,12,51,214,68,246,70,211,219,97,122,241,76,41,80,239,110,191,16,82,136,189,254,232,136,208,177,203,162,215,105,142,126,230,84,225,29,214,108,137,145,252,76,112,132,9,
2,134,63,130,1,156,121,117,208,10,123,18,17,223,252,141,168,141,167,182,194,245,226,152,82,176,4,102,80,96,40,43,145,212,201,32,145,197,30,124,108,58,38,144,8,18,30,60,1,0,222,198,173,75,247,213,189,207,
237,252,221,247,114,221,100,34,238,30,62,97,68,140,172,224,59,244,176,246,66,2,115,142,242,41,180,141,53,96,135,111,228,91,15,104,152,52,183,148,241,50,24,213,5,30,174,62,227,19,230,226,160,26,164,8,208,
16,66,81,16,56,51,97,242,60,97,141,32,23,98,55,5,37,231,168,161,129,66,75,102,5,253,34,182,13,13,136,102,185,136,233,128,20,108,65,1,62,187,238,60,124,153,78,101,0,144,8,2,16,0,9,36,40,0,23,34,105,159,
120,68,229,131,97,166,104,237,138,136,23,197,54,2,37,185,160,57,74,134,4,132,203,104,83,161,0,116,135,70,112,124,203,108,68,212,114,18,1,240,236,139,62,200,68,68,76,138,70,164,253,219,227,34,64,71,169,
221,160,110,243,5,168,17,72,89,158,233,106,199,52,221,210,22,183,74,237,231,238,47,25,101,130,21,118,224,179,200,94,55,92,13,119,219,131,153,39,83,202,148,4,182,216,60,104,192,225,252,121,248,129,103,
207,217,84,36,240,146,34,24,123,220,63,20,172,255,0,216,131,238,216,225,74,6,73,208,97,0,17,39,6,163,216,218,103,156,15,230,171,33,170,187,49,60,73,58,158,84,160,37,182,193,227,70,7,1,253,126,179,154,
4,200,142,200,251,142,100,101,33,100,98,147,241,178,36,180,169,114,208,253,80,68,150,0,131,35,129,169,20,65,92,186,147,131,90,211,254,254,43,192,32,190,12,87,78,186,34,133,195,117,228,4,77,157,67,177,
205,22,200,168,133,185,192,216,218,168,180,68,231,148,192,195,98,75,199,132,235,243,143,225,71,84,167,218,2,149,26,216,51,211,138,99,64,56,18,224,179,217,176,227,248,70,21,240,23,67,234,66,1,9,84,17,11,
131,44,136,44,36,8,220,232,119,201,34,35,185,231,61,180,96,59,158,231,90,106,137,69,80,204,15,82,195,253,22,34,100,94,145,34,196,244,50,193,80,78,127,47,134,41,24,23,78,78,100,24,1,231,3,129,26,93,248,
137,65,145,192,64,69,47,105,19,236,8,4,182,220,98,252,55,123,176,124,76,126,120,26,72,157,74,50,73,72,82,162,18,180,175,208,234,65,114,78,179,64,54,231,156,201,79,130,9,121,60,3,33,66,124,59,19,135,122,
197,150,14,232,42,5,32,163,209,124,24,254,237,34,145,1,47,251,252,214,3,177,65,39,28,152,191,11,37,215,5,4,154,114,162,4,29,128,44,178,201,215,196,55,236,103,33,147,17,175,121,2,116,141,232,189,208,213,
178,144,81,232,190,12,127,118,145,72,128,133,23,125,137,109,128,28,173,85,16,19,182,60,25,68,219,0,80,130,100,157,102,128,109,207,57,146,158,49,253,185,164,216,247,131,31,234,161,5,145,86,44,6,177,182,
206,70,88,30,3,14,148,231,69,149,8,141,165,207,224,106,71,49,12,73,18,98,30,170,82,180,164,16,81,72,8,36,65,140,75,75,68,58,210,207,16,36,8,18,65,42,22,35,201,63,13,194,21,173,110,157,130,192,224,10,68,
32,8,6,15,0,96,81,116,28,32,41,33,86,24,236,102,70,19,102,21,85,129,116,134,143,128,143,177,161,149,8,34,144,231,209,31,161,93,73,138,80,10,65,116,218,203,132,216,161,225,248,108,132,228,226,150,86,224,
87,54,67,152,154,183,249,99,9,251,50,53,73,2,121,62,216,35,242,124,178,176,67,206,79,33,84,184,225,174,105,22,164,149,172,203,65,153,200,29,12,10,189,253,80,98,145,106,255,0,128,66,195,29,208,118,188,
58,43,3,32,199,180,186,98,226,194,108,200,145,198,80,17,81,11,207,156,62,71,106,215,42,38,9,14,69,106,130,98,206,191,145,55,255,0,191,33,128,53,221,190,35,38,52,53,124,15,52,197,91,55,215,224,156,9,2,
55,70,56,181,99,140,252,137,28,101,1,21,16,188,249,195,225,237,17,28,6,76,40,84,18,44,37,226,21,107,74,3,206,2,216,129,176,19,153,27,36,0,144,22,6,0,168,32,138,130,19,113,39,175,129,233,40,83,105,16,49,
135,85,62,108,58,249,144,37,17,165,163,127,226,211,102,205,155,54,108,217,179,102,205,155,54,108,217,179,102,205,155,54,108,217,179,102,205,155,54,108,217,179,102,205,155,63,226,236,217,179,102,205,155,
54,108,217,179,102,205,155,54,108,217,179,102,205,155,54,108,217,179,102,205,155,54,108,217,179,102,207,229,236,217,179,102,205,155,54,108,217,179,102,205,155,54,108,217,179,102,205,155,54,108,217,176,
230,55,13,237,145,133,73,41,66,88,48,95,98,204,200,22,104,36,216,76,177,100,135,120,1,60,216,208,235,173,167,93,104,254,167,93,117,175,255,0,152,172,113,199,28,113,199,28,113,199,28,113,199,28,113,199,
28,113,199,31,255,218,0,8,1,2,3,1,63,16,255,0,221,212,81,69,20,81,69,20,81,69,20,81,69,20,81,69,20,81,69,20,81,69,20,81,69,20,81,69,20,81,69,20,81,69,20,81,69,20,81,69,20,81,69,20,81,69,20,81,69,20,81,
69,20,81,69,20,81,69,20,81,69,20,81,69,20,81,69,20,81,69,20,81,69,20,81,69,23,240,11,84,188,220,201,238,162,111,228,255,0,113,13,125,162,26,251,68,53,246,136,107,237,16,215,218,33,175,180,67,95,104,134,
190,209,13,125,162,26,251,68,53,246,136,107,237,16,215,218,33,175,180,67,95,104,134,190,209,13,125,162,26,251,68,53,246,136,107,237,16,215,218,33,175,180,67,95,104,134,190,209,13,125,162,26,251,68,53,
246,136,107,237,16,215,218,33,175,180,67,95,104,134,190,209,13,125,162,26,251,68,53,246,136,107,237,16,215,218,33,175,180,67,95,104,134,190,209,13,125,162,26,251,68,53,246,136,107,237,16,215,218,33,175,
180,67,95,104,134,190,209,13,125,162,26,251,68,53,246,136,107,237,16,215,218,33,175,180,67,95,104,134,190,209,13,125,162,26,251,68,53,246,136,107,237,16,215,218,33,175,180,67,95,104,134,190,209,13,125,
162,26,251,68,53,246,136,107,237,16,215,218,33,175,180,67,95,104,134,190,209,13,125,162,26,251,68,53,246,136,107,237,16,215,218,33,175,180,67,95,104,134,190,209,13,125,162,26,251,68,53,246,136,107,237,
16,215,218,33,175,180,67,95,104,134,190,209,13,125,162,26,251,68,53,246,136,107,237,16,215,218,0,58,249,49,119,242,127,184,187,249,63,220,93,252,159,238,46,254,79,247,23,50,124,159,238,46,254,79,247,44,
64,159,63,220,100,22,77,197,185,130,160,194,106,163,15,120,99,169,140,234,124,152,206,167,201,140,234,124,153,93,79,153,93,79,152,206,167,201,140,234,124,152,64,24,39,201,132,65,146,124,152,206,167,201,
132,1,130,124,152,68,25,39,201,140,234,124,152,1,0,19,228,202,234,124,192,8,0,159,38,116,12,32,144,73,242,97,0,96,159,38,17,6,73,242,96,4,0,79,147,43,169,243,25,212,249,49,157,79,147,25,212,249,49,157,
79,147,25,212,249,49,157,79,147,25,212,249,48,128,48,79,147,8,131,36,249,49,157,79,147,25,212,249,49,157,79,147,43,169,243,12,185,62,76,103,83,228,198,117,62,76,174,167,204,174,167,204,103,83,228,202,
234,124,202,234,124,198,117,62,76,18,196,249,50,186,159,48,75,19,228,202,234,124,192,8,0,159,38,116,12,174,167,204,18,196,249,50,186,159,49,157,79,147,25,212,249,49,157,79,147,25,212,249,49,157,79,147,
25,212,249,49,157,79,147,8,3,4,249,48,136,50,79,147,25,212,249,49,157,79,147,25,212,249,50,186,159,48,130,65,39,201,140,234,124,152,206,167,201,149,212,249,134,92,159,38,51,169,242,101,117,62,97,151,39,
201,140,234,124,153,93,79,153,93,79,153,93,79,153,93,79,152,37,137,242,103,64,195,46,79,147,43,169,243,43,169,243,25,212,249,49,157,79,147,25,212,249,49,157,79,147,25,212,249,49,157,79,147,25,212,249,
50,186,159,50,186,159,48,179,153,235,188,44,17,92,226,10,24,8,54,134,2,153,194,149,70,66,95,182,4,58,109,0,32,31,53,34,58,214,35,61,76,1,103,58,170,225,223,11,135,124,46,61,241,171,135,126,125,102,228,
228,195,38,23,14,248,228,231,213,199,191,6,108,115,113,100,195,55,55,39,120,74,63,48,156,32,27,240,68,143,153,152,104,127,3,154,110,59,192,234,181,129,231,192,94,80,60,249,53,87,9,246,151,9,87,180,184,
227,87,9,246,230,215,107,204,248,151,148,15,60,11,202,7,158,25,103,123,204,179,189,229,194,29,9,64,243,153,103,123,243,107,237,46,56,246,188,207,135,107,204,248,23,148,15,56,94,80,60,230,89,85,188,207,
11,202,7,159,32,188,160,121,225,147,188,37,31,152,78,18,14,17,24,221,230,92,123,254,7,52,220,119,136,207,83,23,120,187,197,222,46,241,119,139,188,93,226,239,0,3,128,33,197,222,0,7,0,67,139,188,32,8,26,
197,222,16,4,13,98,221,151,0,18,70,144,0,56,2,28,32,8,26,197,222,46,241,119,139,188,93,226,239,23,120,187,192,0,224,8,113,119,139,188,93,226,239,1,116,93,226,239,23,120,187,197,222,46,241,119,139,188,
5,145,119,128,178,46,240,128,32,107,23,120,187,192,89,23,120,187,197,222,46,241,119,139,188,93,226,239,0,3,128,33,197,222,46,241,119,139,188,0,73,26,69,222,46,241,119,128,186,46,241,119,128,186,46,241,
119,139,188,93,226,239,1,100,93,224,46,139,188,93,226,239,23,120,187,197,222,46,241,119,139,188,93,226,239,23,120,136,181,16,148,111,156,39,156,45,178,138,215,241,0,243,133,222,101,199,191,224,115,77,
199,121,155,191,62,170,225,223,11,135,124,46,61,241,171,135,126,125,102,228,228,195,38,23,14,248,228,231,213,199,191,6,108,115,113,100,195,55,55,39,120,74,63,48,156,32,27,135,0,210,152,221,230,92,123,
254,7,52,220,119,151,59,152,185,197,222,46,241,119,139,148,92,226,239,23,120,18,20,8,10,46,240,36,40,16,20,93,225,2,65,210,44,32,72,58,69,123,64,0,147,172,9,10,4,5,8,18,14,145,98,239,23,120,187,197,222,
46,241,119,139,188,9,10,4,5,23,120,187,197,222,44,0,139,188,93,226,229,23,56,187,197,202,46,113,119,128,49,96,12,88,64,144,116,132,114,139,156,1,139,23,120,187,197,222,46,241,119,139,188,93,224,72,80,
32,40,187,197,222,46,241,96,0,73,214,46,241,119,139,0,34,239,22,0,69,222,46,81,115,139,148,92,224,12,88,1,23,40,185,197,222,46,241,119,139,188,93,226,239,23,120,185,69,206,46,241,17,106,33,40,223,56,79,
56,192,48,84,103,61,186,251,64,88,194,239,50,227,223,240,57,166,227,188,0,22,245,136,202,33,164,67,72,134,145,153,68,101,16,210,33,164,1,0,33,13,32,8,1,8,105,0,2,34,16,0,34,32,222,112,1,38,0,128,16,0,
17,16,136,105,16,210,33,164,67,72,134,145,13,34,26,64,16,2,16,210,33,164,67,72,154,65,5,196,52,136,105,25,148,70,81,13,35,50,136,202,33,164,16,20,77,32,128,162,105,0,2,33,3,17,148,16,20,77,34,26,68,52,
136,105,16,210,33,164,67,72,134,144,4,0,132,52,136,105,16,210,33,0,18,98,26,68,52,137,164,16,92,67,72,154,65,5,196,52,140,202,35,40,204,162,50,130,2,137,164,16,92,102,81,25,68,52,136,105,16,210,33,164,
67,72,134,145,13,35,50,136,202,33,164,32,4,181,132,163,243,9,195,113,16,223,27,188,203,143,127,192,230,155,142,240,58,173,96,121,240,23,148,15,62,77,85,194,125,165,194,85,237,46,56,213,194,125,185,181,
218,243,62,37,229,3,207,2,242,129,231,134,89,222,243,44,239,121,112,135,66,80,60,230,89,222,252,218,251,75,142,61,175,51,225,218,243,62,5,229,3,206,23,148,15,57,150,85,111,51,194,242,129,231,200,47,40,
30,120,100,239,9,71,230,19,132,168,155,64,243,194,239,50,227,223,240,57,166,227,188,70,122,152,187,197,222,46,241,119,139,188,93,226,239,23,120,0,28,1,14,46,240,0,56,2,28,93,225,0,64,214,46,240,128,32,
107,22,236,184,0,146,52,128,1,192,16,225,0,64,214,46,241,119,139,188,93,226,239,23,120,187,197,222,0,7,0,67,139,188,93,226,239,23,120,11,162,239,23,120,187,197,222,46,241,119,139,188,93,224,44,139,188,
5,145,119,132,1,3,88,187,197,222,2,200,187,197,222,46,241,119,139,188,93,226,239,23,120,0,28,1,14,46,241,119,139,188,93,224,2,72,210,46,241,119,139,188,5,209,119,139,188,5,209,119,139,188,93,226,239,23,
120,11,34,239,1,116,93,226,239,23,120,187,197,222,46,241,119,139,188,93,226,239,23,120,187,196,69,168,132,163,124,225,60,224,21,64,204,40,80,26,65,161,190,23,121,151,30,255,0,129,205,55,29,230,110,252,
250,171,135,124,46,29,240,184,247,198,174,29,249,245,155,147,147,12,152,92,59,227,147,159,87,30,252,25,177,205,197,147,12,220,220,157,225,40,252,194,120,44,110,243,46,61,255,0,3,154,110,59,203,157,204,
92,226,239,23,120,187,197,202,46,113,119,139,188,9,10,4,5,23,120,18,20,8,10,46,240,129,32,233,22,16,36,29,34,189,160,0,73,214,4,133,2,2,132,9,7,72,177,119,139,188,93,226,239,23,120,187,197,222,4,133,2,
2,139,188,93,226,239,22,0,69,222,46,241,114,139,156,93,226,229,23,56,187,192,24,176,6,44,32,72,58,66,57,69,206,0,197,139,188,93,226,239,23,120,187,197,222,46,240,36,40,16,20,93,226,239,23,120,176,0,36,
235,23,120,187,197,128,17,119,139,0,34,239,23,40,185,197,202,46,112,6,44,0,139,148,92,226,239,23,120,187,197,222,46,241,119,139,188,92,162,231,23,120,136,181,16,148,111,156,39,156,48,49,172,38,232,149,
61,192,94,23,121,151,30,255,0,129,205,55,29,224,0,183,172,70,81,13,34,26,68,52,140,202,35,40,134,145,13,32,8,1,8,105,0,64,8,67,72,0,17,16,128,1,17,6,243,128,9,48,4,0,128,0,136,132,67,72,134,145,13,34,
26,68,52,136,105,16,210,0,128,16,134,145,13,34,26,68,210,8,46,33,164,67,72,204,162,50,136,105,25,148,70,81,13,32,128,162,105,4,5,19,72,0,17,8,24,140,160,128,162,105,16,210,33,164,67,72,134,145,13,34,26,
68,52,128,32,4,33,164,67,72,134,145,8,0,147,16,210,33,164,77,32,130,226,26,68,210,8,46,33,164,102,81,25,70,101,17,148,16,20,77,32,130,227,50,136,202,33,164,67,72,134,145,13,34,26,68,52,136,105,25,148,
70,81,13,33,0,37,172,37,31,152,78,16,1,24,68,150,113,187,204,184,247,252,14,105,184,239,51,119,231,213,92,59,225,112,239,133,199,190,53,112,239,207,172,220,156,152,100,194,225,223,28,156,250,184,247,224,
205,142,110,44,152,102,230,228,239,9,71,230,19,132,132,5,215,44,110,243,46,61,255,0,3,154,110,59,204,221,249,245,87,14,248,92,59,225,113,239,141,92,59,243,235,55,39,38,25,48,184,119,199,39,62,174,61,248,
51,99,155,139,38,25,185,185,59,194,81,190,112,158,112,44,96,144,49,187,204,184,247,252,14,105,184,239,51,119,231,213,92,59,225,112,239,133,199,190,53,112,239,207,172,220,156,152,100,194,225,223,28,156,
250,184,247,224,205,142,110,44,152,102,230,228,239,9,71,230,19,134,180,128,32,177,187,204,184,247,252,14,105,184,239,46,119,49,115,139,188,93,226,239,23,40,185,197,222,46,240,36,40,16,20,93,224,72,80,
32,40,187,194,4,131,164,88,64,144,116,138,246,128,1,39,88,18,20,8,10,16,36,29,34,197,222,46,241,119,139,188,93,226,239,23,120,18,20,8,10,46,241,119,139,188,88,1,23,120,187,197,202,46,113,119,139,148,92,
226,239,0,98,192,24,176,129,32,233,8,229,23,56,3,22,46,241,119,139,188,93,226,239,23,120,187,192,144,160,64,81,119,139,188,93,226,192,0,147,172,93,226,239,22,0,69,222,44,0,139,188,92,162,231,23,40,185,
192,24,176,2,46,81,115,139,188,93,226,239,23,120,187,197,222,46,241,114,139,156,93,226,34,212,66,81,190,112,158,112,149,77,97,16,36,170,66,53,8,198,152,93,230,92,123,254,7,52,220,119,128,2,222,177,25,
68,52,136,105,16,210,51,40,140,162,26,68,52,128,32,4,33,164,1,0,33,13,32,0,68,66,0,4,68,27,206,0,36,192,16,2,0,2,34,17,13,34,26,68,52,136,105,16,210,33,164,67,72,2,0,66,26,68,52,136,105,19,72,32,184,134,
145,13,35,50,136,202,33,164,102,81,25,68,52,130,2,137,164,16,20,77,32,0,68,32,98,50,130,2,137,164,67,72,134,145,13,34,26,68,52,136,105,16,210,0,128,16,134,145,13,34,26,68,32,2,76,67,72,134,145,52,130,
11,136,105,19,72,32,184,134,145,153,68,101,25,148,70,80,64,81,52,130,11,140,202,35,40,134,145,13,34,26,68,52,136,105,16,210,33,164,102,81,25,68,52,132,0,150,176,148,126,97,57,188,115,121,192,89,133,222,
101,199,191,224,115,77,199,121,155,191,62,170,225,223,11,135,124,46,61,241,171,135,126,125,102,228,228,195,38,23,14,248,228,231,213,199,191,6,108,115,113,100,195,55,55,39,120,74,63,48,158,11,124,132,39,
133,222,101,199,191,224,115,77,199,121,153,106,99,211,30,152,244,199,166,61,49,233,143,76,122,97,162,162,144,81,65,72,244,195,69,69,32,162,130,145,233,134,160,197,99,210,33,168,49,89,241,130,162,133,97,
162,162,144,81,65,72,106,12,86,61,34,61,49,233,143,76,122,99,211,30,152,244,195,69,69,32,162,130,145,233,143,76,122,99,210,34,45,30,152,244,199,166,61,49,233,143,76,122,99,211,25,120,244,136,203,199,164,
67,80,98,177,233,17,233,140,188,122,68,122,99,211,30,152,244,199,166,61,49,233,134,138,138,65,69,5,35,211,30,152,244,199,164,65,81,66,177,233,143,76,122,68,69,163,211,30,145,17,104,244,199,166,61,49,233,
143,76,101,227,210,34,45,30,152,244,199,166,61,49,233,143,76,122,99,211,30,152,244,199,166,61,51,35,212,66,81,190,112,158,112,236,66,68,20,42,160,144,222,103,11,188,203,143,127,192,230,155,142,240,6,239,
120,2,215,128,135,172,1,107,201,170,184,97,112,138,174,92,113,171,135,62,179,226,67,214,0,181,192,135,172,1,107,134,92,50,225,112,132,60,204,1,107,50,243,234,227,193,159,28,248,16,245,128,45,97,15,88,
2,214,101,138,138,103,132,61,96,11,94,65,15,88,2,215,12,157,225,40,252,194,120,45,96,0,91,11,188,203,143,127,192,230,155,142,242,231,115,23,56,187,197,222,46,241,114,139,156,93,226,239,2,66,129,1,69,222,
4,133,2,2,139,188,32,72,58,69,132,9,7,72,175,104,0,18,117,129,33,64,128,161,2,65,210,44,93,226,239,23,120,187,197,222,46,241,119,129,33,64,128,162,239,23,120,187,197,128,17,119,139,188,92,162,231,23,120,
185,69,206,46,240,6,44,1,139,8,18,14,144,142,81,115,128,49,98,239,23,120,187,197,222,46,241,119,139,188,9,10,4,5,23,120,187,197,222,44,0,9,58,197,222,46,241,96,4,93,226,192,8,187,197,202,46,113,114,139,
156,1,139,0,34,229,23,56,187,197,222,46,241,119,139,188,93,226,239,23,40,185,197,222,34,45,68,37,27,231,9,231,9,80,149,64,21,27,194,36,150,18,194,239,50,227,223,240,56,151,25,184,239,0,5,189,98,50,136,
105,16,210,33,164,102,81,25,68,52,136,105,0,64,8,67,72,2,0,66,26,64,0,136,132,0,8,136,55,156,0,73,128,32,4,0,4,68,34,26,68,52,136,105,16,210,33,164,67,72,134,144,4,0,132,52,136,105,16,210,38,144,65,113,
13,34,26,70,101,17,148,67,72,204,162,50,136,105,4,5,19,72,32,40,154,64,0,136,64,196,101,4,5,19,72,134,145,13,34,26,68,52,136,105,16,210,33,164,1,0,33,13,34,26,68,52,136,64,4,152,134,145,13,34,105,4,23,
16,210,38,144,65,113,13,35,50,136,202,51,40,140,160,128,162,105,4,23,25,148,70,81,13,34,26,68,52,136,105,16,210,33,164,67,72,204,162,50,136,105,8,1,45,97,40,252,194,112,129,188,32,104,73,80,22,97,119,
153,113,239,248,28,32,104,22,128,61,25,227,55,29,225,38,90,152,75,184,9,100,37,220,154,171,135,120,13,72,151,14,241,182,37,199,190,53,112,239,1,169,28,218,36,28,205,137,44,132,187,2,89,9,118,25,33,48,
230,72,76,57,112,239,10,10,132,186,100,132,195,230,209,53,2,92,123,226,72,57,155,2,65,204,216,18,200,75,161,44,132,186,100,141,185,51,66,89,9,119,32,150,66,93,134,78,240,148,126,97,56,91,66,53,8,156,46,
243,46,61,255,0,3,133,138,138,66,39,49,50,193,113,27,142,241,25,234,96,11,56,8,93,0,89,201,170,184,119,138,174,92,59,196,122,165,199,190,53,112,239,21,95,54,136,97,76,216,144,186,0,179,2,23,64,22,97,146,
0,130,153,32,8,41,112,239,8,146,224,11,38,72,2,11,155,74,174,92,123,226,67,10,102,192,134,20,205,129,11,160,11,33,11,160,11,38,72,139,68,205,8,93,0,89,200,33,116,1,102,25,59,202,178,149,250,202,61,35,
175,16,146,45,88,111,34,151,230,53,70,79,11,188,203,143,127,192,230,155,142,240,147,45,76,37,220,234,171,135,124,46,29,240,184,247,198,174,29,249,245,155,147,147,12,152,92,59,227,147,159,87,30,252,25,
177,205,197,147,12,220,220,157,225,12,216,26,231,241,177,128,178,3,183,232,112,221,230,92,123,254,7,8,61,64,78,144,28,131,6,77,165,152,63,17,107,69,173,22,180,90,96,123,7,22,180,90,208,148,36,160,33,24,
139,90,18,132,66,128,34,1,168,181,161,12,9,10,45,48,134,4,133,22,152,0,106,19,237,9,66,167,145,253,192,66,49,9,8,97,120,139,75,17,107,69,173,22,180,90,209,107,69,173,22,180,32,133,66,16,0,20,12,69,173,
22,180,90,209,105,66,0,20,15,228,69,173,22,180,90,96,123,7,22,180,90,20,208,3,49,107,66,44,67,226,45,46,17,98,31,17,105,112,134,4,133,22,154,252,127,112,61,131,132,38,20,90,98,214,139,90,45,104,181,162,
214,139,90,45,104,74,18,80,16,140,69,173,22,180,90,208,132,180,65,52,175,199,249,22,151,22,180,90,80,128,5,3,249,17,107,69,146,1,116,172,90,92,87,144,162,188,7,21,228,40,175,1,194,44,67,226,45,171,227,
251,128,5,3,249,16,160,100,40,180,184,181,162,214,139,90,45,104,181,162,214,139,90,45,10,104,1,152,181,162,36,136,56,14,192,24,11,32,59,112,221,230,92,123,254,7,56,9,65,119,22,186,68,55,136,111,16,222,
37,104,146,49,13,226,27,197,165,226,8,196,55,139,75,202,167,153,113,13,229,18,200,184,181,188,162,89,23,22,183,140,2,50,136,229,249,136,35,8,72,45,16,222,33,188,67,120,134,241,13,226,27,196,55,136,111,
2,165,117,188,10,29,214,241,13,226,27,196,55,138,32,137,206,33,188,67,120,149,162,72,196,55,138,32,137,177,136,111,18,66,45,111,243,18,66,45,111,243,40,150,69,197,158,113,36,97,8,11,89,115,16,222,33,188,
67,120,134,241,13,226,27,196,55,139,77,32,26,13,220,67,120,134,241,13,226,17,119,34,136,111,20,65,19,156,67,120,133,226,183,20,97,13,68,64,13,4,97,13,68,64,13,4,73,8,181,252,196,17,57,192,52,11,184,181,
210,33,188,67,120,134,241,13,226,27,196,55,136,111,20,65,19,99,16,222,57,68,170,135,33,0,2,220,55,121,151,30,255,0,129,204,200,152,27,181,151,180,16,152,163,92,6,6,35,27,12,160,47,4,144,0,112,26,2,16,
49,209,194,34,138,158,224,100,162,133,3,129,195,27,64,68,82,224,168,76,20,70,130,3,68,171,126,32,123,10,211,220,66,183,6,24,24,14,16,26,2,132,106,18,14,125,184,136,129,73,90,164,96,40,50,16,86,184,189,
136,201,170,145,9,189,142,6,228,44,34,11,10,177,24,43,72,205,17,25,90,176,155,216,224,74,40,212,15,131,9,170,8,43,92,9,75,188,168,6,192,56,193,189,249,6,64,164,99,54,224,37,67,67,26,194,117,203,2,85,114,
153,138,142,2,225,42,18,78,153,123,128,186,229,24,81,164,131,172,32,180,105,37,119,30,81,132,141,212,37,107,10,130,242,252,199,2,13,193,30,225,93,151,25,34,168,162,251,66,96,18,178,164,98,24,143,90,90,
40,65,184,35,220,43,178,225,32,19,88,4,55,119,248,28,195,238,4,77,32,0,232,70,128,36,148,102,72,77,41,0,65,2,0,53,4,16,65,23,5,216,210,16,36,150,67,128,32,153,60,26,131,23,82,162,19,120,72,89,112,8,46,
177,81,66,36,182,96,16,91,48,128,66,202,38,240,22,68,74,176,8,23,40,154,159,95,212,2,0,8,194,66,235,0,2,235,198,67,10,209,16,12,210,88,153,139,21,109,151,17,38,102,227,11,151,168,137,169,188,0,2,186,138,
219,46,38,166,110,48,32,27,197,166,210,196,204,88,16,226,182,98,20,13,156,141,65,17,27,101,240,16,226,164,73,95,31,212,0,0,134,4,3,121,73,7,0,80,135,8,27,146,160,10,130,6,42,49,120,66,232,185,142,4,157,
96,2,46,240,36,111,57,73,86,240,0,8,113,220,201,62,191,168,149,110,176,8,42,196,55,36,202,74,183,128,0,67,132,219,40,112,125,222,170,118,236,106,67,82,230,7,113,113,2,2,225,0,211,0,54,21,170,40,17,8,93,
225,109,252,18,163,145,33,234,17,95,198,93,220,59,184,119,112,238,225,221,195,187,135,119,14,238,29,220,59,184,119,112,238,225,221,195,187,135,119,14,238,29,220,59,184,119,112,238,225,221,195,187,135,
119,14,238,29,220,59,184,119,112,238,225,221,195,187,135,119,14,238,29,220,59,184,119,112,238,225,221,195,187,135,119,14,238,29,220,59,184,119,112,238,225,221,195,187,135,119,14,238,29,220,59,184,119,
112,238,225,221,195,187,135,119,14,238,29,220,59,184,119,112,238,225,221,195,187,135,119,14,238,29,220,59,184,119,112,238,225,221,195,187,135,119,14,238,29,220,59,184,119,112,238,225,221,195,187,135,119,
14,238,29,220,59,184,119,112,238,225,221,195,187,135,119,14,238,29,220,59,184,119,112,238,225,221,195,187,135,119,14,238,29,220,59,184,119,112,238,99,125,9,112,66,212,144,103,192,48,45,85,237,222,139,
128,8,168,32,148,100,132,172,101,6,38,195,50,72,147,185,230,53,31,223,161,139,142,56,227,142,56,227,142,56,227,142,56,227,142,56,227,142,56,227,142,56,227,142,56,227,142,56,227,142,56,227,142,56,227,142,
56,227,142,56,227,142,56,227,142,56,227,142,56,227,142,56,227,142,56,227,142,56,227,142,56,227,142,56,227,142,56,227,142,56,227,142,56,227,142,60,94,127,254,98,191,255,218,0,8,1,3,3,1,63,16,225,185,219,
235,107,157,190,182,185,219,133,253,99,115,182,36,129,120,179,203,234,132,237,202,185,219,26,2,137,168,30,72,31,159,16,193,131,142,56,227,142,60,94,47,7,131,225,113,199,28,113,199,30,46,56,227,193,199,
28,113,199,28,120,60,30,14,60,28,113,199,28,113,199,139,142,56,240,113,199,131,143,7,28,113,199,131,193,199,28,113,199,28,113,199,30,25,68,77,161,4,94,0,48,30,59,245,104,234,209,253,62,77,206,216,230,
240,22,255,0,138,121,35,1,194,63,134,113,60,67,3,205,202,0,225,10,53,25,196,70,249,55,59,112,139,127,197,60,145,128,225,31,195,56,158,33,129,230,229,0,112,133,0,113,185,183,59,112,139,71,28,113,199,28,
113,226,241,124,167,28,113,199,28,120,184,227,143,7,28,113,199,28,113,224,240,120,188,28,113,199,28,113,199,139,142,60,92,113,224,227,193,199,28,113,240,56,227,142,56,227,142,56,227,142,27,65,12,32,34,
67,94,101,206,220,57,127,197,60,145,128,225,31,195,56,158,33,129,230,229,0,112,133,207,185,219,132,90,40,162,138,40,162,139,21,138,193,96,184,84,81,69,20,81,69,138,138,40,176,81,69,20,81,69,22,11,5,130,
139,5,20,81,69,20,81,98,162,138,44,20,81,96,162,193,69,20,81,96,176,81,69,20,81,69,20,81,69,20,54,130,24,16,128,185,183,59,112,139,125,65,148,1,194,20,100,90,50,151,54,231,110,17,111,248,167,146,48,28,
35,248,103,19,196,48,60,220,160,14,16,162,136,243,110,118,225,22,142,56,227,142,56,227,197,226,249,78,56,227,142,56,241,113,199,30,14,56,227,142,56,227,193,224,241,120,56,227,142,56,227,143,23,28,120,
184,227,193,199,131,142,56,227,224,113,199,28,113,199,28,113,199,28,54,130,24,74,39,54,231,110,28,191,226,158,72,192,112,143,225,156,79,16,192,243,114,128,56,66,231,220,237,194,45,20,81,69,20,81,69,138,
197,96,176,92,42,40,162,138,40,162,197,69,20,88,40,162,138,40,162,139,5,130,193,69,130,138,40,162,138,40,177,81,69,22,10,40,176,81,96,162,138,40,176,88,40,162,138,40,162,138,40,162,138,27,65,12,6,96,0,
141,249,183,59,112,139,125,65,148,1,194,20,5,64,72,11,155,115,183,14,95,241,79,36,96,56,71,240,206,39,136,96,121,185,64,28,33,69,206,185,219,135,47,248,167,146,48,28,35,248,103,19,196,48,60,220,160,134,
20,60,219,157,184,114,255,0,138,121,35,1,194,63,134,113,60,67,3,205,202,0,225,11,159,115,183,8,180,81,69,20,81,69,22,43,21,130,193,112,168,162,138,40,162,139,21,20,81,96,162,138,40,162,138,44,22,11,5,
22,10,40,162,138,40,162,197,69,20,88,40,162,193,69,130,138,40,162,193,96,162,138,40,162,138,40,162,138,40,109,4,56,33,71,8,93,185,151,59,112,139,125,65,148,1,194,22,14,18,249,151,59,112,229,255,0,20,242,
70,3,132,127,12,226,120,134,7,155,148,1,194,22,8,195,78,101,206,220,34,210,146,146,146,146,146,146,146,152,211,26,114,169,41,41,41,41,41,41,141,37,37,49,164,164,164,164,164,164,164,167,29,49,164,164,164,
164,164,164,166,52,148,148,198,146,152,211,26,74,74,74,74,112,82,82,82,82,82,82,82,82,82,82,82,82,27,65,12,11,56,144,159,50,231,110,17,111,248,167,146,48,28,35,248,103,19,196,48,60,220,160,14,16,185,247,
59,112,139,69,20,81,69,20,81,98,177,88,44,23,10,138,40,162,138,40,177,81,69,22,10,40,162,138,40,162,193,96,176,81,96,162,138,40,162,138,44,84,81,69,130,138,44,20,88,40,162,138,44,22,10,40,162,138,40,162,
138,40,162,134,208,67,129,8,66,237,204,185,219,132,91,234,12,160,14,16,176,120,75,230,92,237,194,45,255,0,20,242,70,3,132,127,12,226,120,134,7,155,148,1,194,23,48,23,141,206,220,34,223,241,79,36,96,56,
71,240,206,39,136,96,121,185,64,179,132,13,112,161,137,108,249,151,59,112,139,127,197,60,145,128,225,31,195,56,158,33,129,230,229,1,89,168,79,55,207,185,219,132,17,104,72,140,70,35,17,136,72,17,136,196,
4,70,35,17,136,72,206,49,1,6,209,136,8,54,140,70,12,4,70,35,17,136,196,98,49,24,140,70,35,16,17,9,17,136,196,98,49,24,140,70,35,16,144,35,17,136,196,98,49,24,140,70,32,32,218,49,9,2,2,50,140,70,35,17,
136,196,98,49,24,128,136,196,98,49,24,137,24,78,36,98,49,24,140,68,140,68,140,70,35,17,136,196,98,49,24,140,70,35,17,136,196,98,49,24,140,70,35,17,130,41,1,80,151,207,185,219,134,234,203,169,194,75,196,
20,92,37,156,73,120,2,176,5,96,12,5,23,9,102,11,30,72,189,97,189,56,73,224,37,226,78,0,168,75,46,2,161,44,184,10,192,151,8,85,242,110,172,186,156,47,46,2,120,65,69,194,89,112,20,92,37,151,1,80,150,92,
38,93,89,117,57,36,224,85,133,90,127,2,231,108,73,93,117,218,38,97,28,33,27,194,0,98,3,132,5,190,1,134,240,160,223,2,157,162,241,16,245,8,155,161,0,90,3,48,6,55,132,0,223,140,6,96,3,56,168,242,224,12,
41,46,172,33,21,130,138,195,8,70,84,41,46,132,34,176,21,49,25,138,143,46,5,71,156,33,21,200,3,56,168,248,82,26,28,70,172,82,26,24,3,132,17,0,117,132,81,192,194,18,24,43,111,14,139,203,113,165,83,36,74,
84,41,61,165,184,108,28,235,174,179,228,220,237,137,107,73,40,15,197,68,33,169,192,84,195,201,184,64,88,152,65,0,64,72,32,130,35,206,18,235,192,10,132,142,32,145,9,16,176,4,2,132,136,88,52,37,199,129,
161,46,2,160,42,50,151,24,42,52,110,0,66,52,37,151,131,70,110,18,224,33,26,18,203,197,175,27,129,209,66,95,32,21,25,46,22,151,192,82,54,47,47,1,34,18,49,199,69,1,8,73,56,63,81,161,47,141,146,141,9,101,
192,64,40,208,151,194,32,116,201,151,38,113,43,34,89,16,158,77,206,216,131,8,134,84,90,190,186,177,29,168,232,93,27,67,66,104,184,193,69,209,215,230,204,45,32,208,163,175,252,195,12,48,195,12,48,195,12,
48,195,12,48,195,12,48,195,12,48,195,12,48,195,12,48,195,12,48,195,12,48,195,12,51,254,89,134,24,97,134,24,97,134,24,97,134,24,97,134,24,97,134,24,97,134,24,97,134,24,97,134,24,97,134,24,97,134,25,207,
48,195,12,48,195,12,48,195,12,48,195,47,5,185,158,64,13,19,147,14,240,131,102,1,131,52,122,16,93,68,2,2,113,87,101,132,228,24,1,144,28,155,157,177,32,27,224,75,234,101,19,188,0,11,91,147,115,183,214,215,
59,125,109,115,183,214,215,59,125,109,115,183,214,215,59,125,109,115,183,214,215,59,125,109,115,183,214,215,59,125,109,115,183,214,215,59,125,109,115,183,214,215,59,125,109,115,183,214,215,59,125,109,
115,183,214,215,59,125,109,115,183,214,215,59,125,109,115,183,214,215,59,125,109,115,183,214,215,59,125,99,255,217,0,0};

const char* EquilizerGraph::dw_eq_jpg = (const char*) resource_EquilizerGraph_dw_eq_jpg;
const int EquilizerGraph::dw_eq_jpgSize = 63691;

// JUCER_RESOURCE: dw_eq_jpg2, 35100, "../../../../../DW_EQ.jpg"
static const unsigned char resource_EquilizerGraph_dw_eq_jpg2[] = { 255,216,255,224,0,16,74,70,73,70,0,1,1,1,0,96,0,96,0,0,255,225,0,34,69,120,105,102,0,0,77,77,0,42,0,0,0,8,0,1,1,18,0,3,0,0,0,1,0,1,0,
0,0,0,0,0,255,236,0,17,68,117,99,107,121,0,1,0,4,0,0,0,100,0,0,255,225,3,132,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,0,60,63,120,112,97,99,107,
101,116,32,98,101,103,105,110,61,34,239,187,191,34,32,105,100,61,34,87,53,77,48,77,112,67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,57,100,34,63,62,13,10,60,120,58,120,109,112,109,101,116,
97,32,120,109,108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,58,109,101,116,97,47,34,32,120,58,120,109,112,116,107,61,34,65,100,111,98,101,32,88,77,80,32,67,111,114,101,32,53,46,54,45,99,49,51,
56,32,55,57,46,49,53,57,56,50,52,44,32,50,48,49,54,47,48,57,47,49,52,45,48,49,58,48,57,58,48,49,32,32,32,32,32,32,32,32,34,62,13,10,9,60,114,100,102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,61,
34,104,116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,47,49,57,57,57,47,48,50,47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,115,35,34,62,13,10,9,9,60,114,100,102,58,68,101,115,99,
114,105,112,116,105,111,110,32,114,100,102,58,97,98,111,117,116,61,34,34,32,120,109,108,110,115,58,120,109,112,77,77,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,
112,47,49,46,48,47,109,109,47,34,32,120,109,108,110,115,58,115,116,82,101,102,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,115,84,121,112,101,
47,82,101,115,111,117,114,99,101,82,101,102,35,34,32,120,109,108,110,115,58,120,109,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,34,32,120,
109,112,77,77,58,79,114,105,103,105,110,97,108,68,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,50,69,50,54,70,48,51,52,49,56,49,66,69,57,49,49,66,48,70,57,66,68,51,48,52,51,56,
56,70,69,67,68,34,32,120,109,112,77,77,58,68,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,65,53,68,57,53,54,66,49,50,51,50,54,49,49,69,57,65,66,48,65,69,52,50,54,51,51,65,53,67,
70,50,56,34,32,120,109,112,77,77,58,73,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,65,53,68,57,53,54,66,48,50,51,50,54,49,49,69,57,65,66,48,65,69,52,50,54,51,51,65,53,67,70,50,
56,34,32,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,61,34,65,100,111,98,101,32,80,104,111,116,111,115,104,111,112,32,67,67,32,50,48,49,55,32,40,87,105,110,100,111,119,115,41,34,62,13,10,9,
9,9,60,120,109,112,77,77,58,68,101,114,105,118,101,100,70,114,111,109,32,115,116,82,101,102,58,105,110,115,116,97,110,99,101,73,68,61,34,120,109,112,46,105,105,100,58,68,57,57,49,48,69,49,68,49,70,48,
56,49,49,69,57,65,54,56,52,66,55,67,52,57,70,69,55,51,68,52,68,34,32,115,116,82,101,102,58,100,111,99,117,109,101,110,116,73,68,61,34,120,109,112,46,100,105,100,58,68,57,57,49,48,69,49,69,49,70,48,56,
49,49,69,57,65,54,56,52,66,55,67,52,57,70,69,55,51,68,52,68,34,47,62,13,10,9,9,60,47,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,62,13,10,9,60,47,114,100,102,58,82,68,70,62,13,10,60,47,120,
58,120,109,112,109,101,116,97,62,13,10,60,63,120,112,97,99,107,101,116,32,101,110,100,61,39,119,39,63,62,255,219,0,67,0,2,1,1,2,1,1,2,2,2,2,2,2,2,2,3,5,3,3,3,3,3,6,4,4,3,5,7,6,7,7,7,6,7,7,8,9,11,9,8,8,
10,8,7,7,10,13,10,10,11,12,12,12,12,7,9,14,15,13,12,14,11,12,12,12,255,219,0,67,1,2,2,2,3,3,3,6,3,3,6,12,8,7,8,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,255,192,0,17,8,0,246,3,45,3,1,34,0,2,17,1,3,17,1,255,196,0,31,0,0,1,5,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,255,196,0,181,16,0,
2,1,3,3,2,4,3,5,5,4,4,0,0,1,125,1,2,3,0,4,17,5,18,33,49,65,6,19,81,97,7,34,113,20,50,129,145,161,8,35,66,177,193,21,82,209,240,36,51,98,114,130,9,10,22,23,24,25,26,37,38,39,40,41,42,52,53,54,55,56,57,
58,67,68,69,70,71,72,73,74,83,84,85,86,87,88,89,90,99,100,101,102,103,104,105,106,115,116,117,118,119,120,121,122,131,132,133,134,135,136,137,138,146,147,148,149,150,151,152,153,154,162,163,164,165,166,
167,168,169,170,178,179,180,181,182,183,184,185,186,194,195,196,197,198,199,200,201,202,210,211,212,213,214,215,216,217,218,225,226,227,228,229,230,231,232,233,234,241,242,243,244,245,246,247,248,249,
250,255,196,0,31,1,0,3,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,255,196,0,181,17,0,2,1,2,4,4,3,4,7,5,4,4,0,1,2,119,0,1,2,3,17,4,5,33,49,6,18,65,81,7,97,113,19,34,50,129,8,20,66,145,161,177,
193,9,35,51,82,240,21,98,114,209,10,22,36,52,225,37,241,23,24,25,26,38,39,40,41,42,53,54,55,56,57,58,67,68,69,70,71,72,73,74,83,84,85,86,87,88,89,90,99,100,101,102,103,104,105,106,115,116,117,118,119,
120,121,122,130,131,132,133,134,135,136,137,138,146,147,148,149,150,151,152,153,154,162,163,164,165,166,167,168,169,170,178,179,180,181,182,183,184,185,186,194,195,196,197,198,199,200,201,202,210,211,
212,213,214,215,216,217,218,226,227,228,229,230,231,232,233,234,242,243,244,245,246,247,248,249,250,255,218,0,12,3,1,0,2,17,3,17,0,63,0,252,100,22,112,91,15,50,73,33,141,164,39,13,35,124,205,248,154,115,
11,120,254,245,213,168,227,56,46,58,86,103,140,147,204,134,199,63,237,255,0,74,135,91,179,81,120,159,245,194,47,253,1,107,89,74,196,242,155,30,109,182,127,227,234,207,254,254,10,60,219,95,249,250,179,
255,0,191,130,185,207,178,45,31,100,90,124,193,202,116,126,109,175,252,253,89,255,0,223,193,71,155,107,255,0,63,86,127,247,240,87,57,246,69,163,236,139,71,48,114,157,26,253,158,71,249,110,173,88,245,192,
113,73,230,218,255,0,207,213,167,253,252,21,147,161,89,43,95,55,253,112,148,255,0,227,141,84,150,205,104,230,14,83,164,243,109,127,231,234,207,254,254,10,60,219,95,249,250,179,255,0,191,130,185,207,178,
45,31,100,90,57,131,148,232,208,219,202,112,183,54,172,113,158,28,82,121,150,191,243,245,103,255,0,127,5,100,232,118,106,111,95,254,184,75,255,0,162,218,169,45,170,226,142,96,229,58,79,54,215,254,126,
172,255,0,239,224,161,13,188,142,21,110,109,89,152,224,0,227,154,231,62,200,181,111,65,179,83,173,217,143,89,148,126,180,185,131,148,215,223,108,63,229,234,207,254,254,10,95,54,215,254,126,172,255,0,239,
224,174,113,173,87,123,125,104,54,139,79,152,57,78,140,125,157,148,183,218,109,118,175,4,249,131,2,143,54,215,254,126,172,255,0,239,224,172,120,108,147,251,2,227,254,187,199,255,0,160,189,84,251,34,226,
151,48,114,157,24,251,59,41,111,180,218,237,94,9,243,6,5,39,155,109,255,0,63,86,127,247,240,86,68,54,73,253,129,113,255,0,93,227,255,0,208,94,170,125,145,104,230,97,202,116,99,236,251,55,125,166,215,104,
56,39,204,24,6,143,54,215,254,126,172,255,0,239,224,172,120,44,147,251,6,231,254,187,199,252,158,169,253,145,66,211,230,14,83,164,127,179,198,223,53,205,170,156,3,130,226,132,251,60,135,106,220,218,177,
198,120,113,210,177,245,219,53,23,203,255,0,92,34,255,0,209,107,70,133,102,141,123,39,253,112,151,255,0,64,106,92,218,7,41,177,230,90,143,249,122,179,255,0,191,130,143,54,215,254,126,172,255,0,239,224,
174,109,109,23,20,191,100,90,124,193,202,116,126,109,175,252,253,89,255,0,223,193,71,155,107,255,0,63,86,127,247,240,87,57,246,69,163,236,139,71,48,114,157,31,155,107,255,0,63,86,127,247,240,81,230,218,
255,0,207,213,159,253,252,21,206,125,145,104,251,34,209,204,28,167,71,230,218,255,0,207,213,159,253,252,20,121,182,191,243,245,103,255,0,127,5,115,159,100,90,62,200,180,115,7,41,209,25,45,79,252,189,89,
255,0,223,193,74,62,206,81,155,237,86,187,65,193,59,199,6,185,179,106,181,114,11,53,254,193,185,63,244,222,33,255,0,142,189,46,96,229,54,60,219,95,249,250,179,255,0,191,130,143,54,215,254,126,172,255,
0,239,224,174,115,236,139,71,217,22,159,48,114,157,31,155,107,255,0,63,86,127,247,240,81,230,218,255,0,207,213,159,253,252,21,206,125,145,105,26,209,113,71,48,114,157,25,146,212,255,0,203,213,167,253,
252,20,174,214,241,190,214,185,181,86,83,130,11,129,131,92,234,217,166,229,250,213,157,118,201,87,92,188,255,0,174,204,63,83,75,152,57,77,159,54,215,254,126,172,255,0,239,224,163,205,181,255,0,159,171,
63,251,248,43,156,251,34,209,246,69,167,204,28,167,70,94,212,255,0,203,213,167,253,252,20,72,214,241,179,43,93,90,171,3,130,11,142,43,157,75,69,222,191,81,86,117,251,37,93,114,240,122,76,223,206,142,96,
229,54,124,219,95,249,250,179,255,0,191,130,131,37,169,31,241,245,103,255,0,127,5,115,159,100,90,67,104,184,163,152,57,78,145,205,188,103,107,92,218,169,32,30,92,116,237,71,155,107,255,0,63,86,127,247,
240,86,62,189,98,171,124,159,245,194,47,253,1,106,167,217,22,142,96,229,58,52,54,242,124,171,115,106,220,19,128,226,144,75,107,143,248,250,179,255,0,191,130,178,52,75,37,107,230,255,0,174,18,255,0,232,
13,84,254,198,155,105,115,7,41,210,70,214,242,48,85,185,181,102,99,128,3,131,154,65,37,168,255,0,151,171,79,251,248,43,27,64,178,67,175,216,251,204,181,93,172,211,115,125,104,230,14,83,162,67,111,41,194,
220,218,177,198,120,113,71,153,106,15,252,125,89,255,0,223,193,88,250,21,146,27,215,255,0,174,18,159,252,134,213,77,109,23,20,115,7,41,210,3,111,176,183,218,109,118,169,0,157,227,0,208,36,182,207,252,
125,90,115,255,0,77,5,100,65,100,167,195,183,77,255,0,79,49,143,252,117,170,146,89,174,241,245,20,249,131,148,233,25,173,227,118,86,185,181,86,83,130,12,131,34,143,54,215,254,126,172,255,0,239,224,172,
109,118,201,23,91,188,31,244,217,135,235,85,5,162,230,151,48,114,157,39,155,107,255,0,63,86,127,247,240,81,230,218,255,0,207,213,159,253,252,21,206,125,145,104,251,34,211,230,14,83,163,243,109,127,231,
234,207,254,254,10,60,219,95,249,250,179,255,0,191,130,185,207,178,45,31,100,90,57,131,148,232,252,219,95,249,250,179,255,0,191,130,143,54,215,254,126,172,255,0,239,224,174,115,236,139,71,217,22,142,96,
229,58,63,54,215,254,126,172,255,0,239,224,161,13,188,167,11,115,106,199,25,225,197,115,159,100,90,185,161,217,169,189,127,250,225,47,254,139,106,92,193,202,107,121,150,191,243,245,103,255,0,127,5,47,
155,107,255,0,63,86,127,247,240,87,54,182,171,138,95,178,45,62,96,229,58,63,54,215,254,126,172,255,0,239,224,163,205,181,255,0,159,171,63,251,248,43,156,251,34,209,246,69,163,152,57,78,143,205,181,63,
242,245,103,255,0,127,5,13,246,120,192,221,115,106,3,12,130,92,114,43,155,54,139,138,185,169,217,39,216,180,255,0,120,15,254,140,106,92,193,202,108,121,182,191,243,245,103,255,0,127,5,30,109,175,252,253,
89,255,0,223,193,92,224,180,90,13,162,226,159,48,114,157,31,155,107,255,0,63,86,127,247,240,83,138,195,28,74,230,226,213,85,254,235,23,24,111,161,174,100,89,166,43,99,89,176,65,225,93,28,240,55,121,188,
255,0,192,169,115,7,41,112,75,106,63,229,234,207,254,254,10,60,219,95,249,250,179,255,0,191,130,185,207,178,45,34,217,165,62,96,229,58,64,109,213,55,125,166,215,107,28,3,188,115,71,155,107,255,0,63,86,
127,247,240,86,60,246,41,253,131,109,211,253,124,159,201,42,167,217,22,151,48,114,157,24,146,216,159,248,250,180,231,254,154,10,27,236,241,187,43,93,90,171,47,4,23,28,26,231,18,205,124,197,250,213,189,
122,201,87,92,188,30,147,55,243,167,204,28,166,191,155,106,63,229,234,211,254,254,10,86,251,60,111,243,93,90,169,235,130,226,185,179,102,181,119,93,178,85,190,95,250,225,17,255,0,199,22,142,96,229,53,
196,182,217,255,0,143,171,63,251,248,40,111,179,198,236,173,117,106,172,14,8,50,0,69,115,130,205,75,175,212,85,173,118,201,23,92,188,30,147,55,79,173,46,96,229,54,83,236,238,255,0,45,205,171,28,19,128,
224,240,41,60,219,108,231,237,86,159,247,240,86,70,137,100,141,122,255,0,245,194,95,253,1,170,151,216,215,30,191,74,57,131,148,233,91,236,234,20,181,213,168,86,25,31,56,228,81,230,218,255,0,207,213,159,
253,252,21,145,169,217,42,217,105,255,0,237,64,127,244,54,170,127,100,90,124,193,202,116,126,109,175,252,253,89,255,0,223,193,71,155,107,255,0,63,86,127,247,240,87,57,246,69,163,236,139,71,48,114,157,
31,155,107,255,0,63,86,127,247,240,81,230,218,255,0,207,213,159,253,252,21,206,125,145,104,251,34,209,204,28,167,71,230,218,255,0,207,213,159,253,252,20,121,182,191,243,245,103,255,0,127,5,115,159,100,
90,62,200,180,115,7,41,209,249,182,191,243,245,103,255,0,127,5,5,237,79,252,189,90,127,223,193,92,231,217,22,149,45,23,122,253,69,28,193,202,116,82,27,120,220,171,93,90,171,41,228,23,28,26,60,203,111,
249,250,179,255,0,191,130,177,181,251,20,93,118,240,127,211,102,254,117,80,89,161,20,115,7,41,211,68,32,184,144,36,119,22,174,237,209,85,193,38,143,43,105,35,104,224,226,176,252,59,2,167,136,173,189,137,
254,70,189,11,192,223,13,255,0,225,63,150,249,191,183,52,45,31,236,172,163,26,141,207,147,230,238,221,247,120,57,198,57,250,138,19,6,142,31,197,223,234,108,127,224,127,204,83,53,191,248,252,79,250,225,
23,254,139,90,119,139,255,0,212,216,255,0,192,255,0,165,55,91,63,233,145,255,0,215,8,127,244,90,212,148,84,162,140,129,70,234,0,40,163,117,27,168,2,230,133,205,243,127,215,9,191,244,91,85,53,233,87,52,
14,111,164,255,0,175,121,191,244,91,85,21,56,20,0,234,40,221,70,234,0,185,161,127,199,243,255,0,215,9,191,244,91,85,48,120,171,154,9,205,251,255,0,215,9,127,244,91,85,21,56,20,0,234,183,160,127,200,118,
203,254,187,167,243,170,155,170,223,135,207,252,79,172,255,0,235,178,127,49,73,236,5,70,63,49,250,154,40,126,36,111,169,163,117,48,46,67,255,0,32,11,175,250,248,139,255,0,65,122,167,154,185,7,58,5,215,
253,124,69,255,0,160,189,81,7,154,0,189,15,252,128,46,191,235,226,47,253,5,234,158,106,228,28,232,23,95,245,241,23,254,130,245,68,145,254,77,0,94,135,254,64,23,95,245,241,23,254,130,245,77,186,85,184,
56,240,253,207,253,119,139,255,0,65,122,166,79,20,116,2,238,186,127,211,151,254,184,67,255,0,162,214,141,11,254,63,155,254,184,77,255,0,162,218,141,127,254,63,227,255,0,174,17,127,232,181,163,65,63,233,
207,255,0,92,38,255,0,209,109,71,64,41,3,197,45,55,56,167,3,64,5,20,110,163,117,0,20,81,186,141,212,0,81,70,234,55,80,1,154,185,15,252,128,46,191,235,226,47,253,5,234,145,57,171,150,255,0,242,46,221,127,
215,196,95,250,11,208,5,74,40,221,70,234,0,40,163,117,27,168,0,95,188,191,81,86,245,255,0,249,14,222,255,0,215,119,254,117,81,78,93,126,162,173,120,128,227,94,188,255,0,174,239,252,205,46,160,85,162,141,
212,110,166,0,167,231,95,168,171,122,255,0,252,135,111,127,235,187,255,0,58,168,135,50,47,78,162,173,120,131,254,67,215,188,255,0,203,119,254,116,1,86,134,60,81,186,154,199,52,1,123,93,255,0,143,228,255,
0,174,16,255,0,232,181,170,117,115,95,227,80,78,127,229,132,63,250,45,106,158,234,0,185,161,127,199,243,255,0,215,9,191,244,91,85,49,210,174,104,39,55,207,255,0,92,38,255,0,209,109,84,148,241,75,168,23,
60,63,255,0,35,13,143,253,118,90,168,223,121,190,166,173,120,120,231,196,54,63,245,217,106,171,28,59,125,77,29,64,185,161,127,199,243,127,215,9,191,244,91,85,32,120,171,186,17,205,243,255,0,215,9,191,
244,91,85,30,130,152,23,173,255,0,228,92,186,255,0,175,168,255,0,244,22,170,99,239,47,212,85,203,127,249,22,174,185,255,0,151,152,255,0,244,22,170,104,126,117,250,138,0,183,175,255,0,200,118,247,254,187,
191,243,170,149,107,95,56,215,175,127,235,187,255,0,58,171,186,128,10,40,221,70,234,0,40,163,117,27,168,0,162,141,212,110,160,2,174,104,95,241,252,255,0,245,194,111,253,22,213,79,117,92,208,78,111,223,
254,184,75,255,0,162,218,144,20,193,226,138,106,156,10,118,234,96,20,81,186,141,212,0,102,174,106,95,241,229,167,255,0,215,185,255,0,209,143,84,65,230,175,106,103,22,90,127,253,123,159,253,24,244,1,78,
138,55,81,186,128,10,216,214,191,228,82,209,127,237,183,254,133,88,251,171,99,91,227,194,58,47,253,182,255,0,208,169,117,3,30,138,55,81,186,152,23,39,63,241,32,181,255,0,175,137,127,244,20,170,117,110,
127,249,23,173,127,235,188,191,250,10,85,64,212,150,192,11,247,151,234,42,222,190,127,226,123,121,255,0,93,223,249,213,69,63,58,253,69,90,241,15,26,253,231,79,245,207,252,233,129,85,186,85,205,119,139,
229,255,0,174,16,255,0,232,181,170,44,114,42,246,191,197,244,127,245,239,15,254,139,90,0,166,62,242,253,69,91,215,255,0,228,59,123,255,0,93,223,249,213,69,57,117,250,138,181,226,3,141,122,243,254,187,
63,243,163,168,14,208,191,227,249,191,235,132,223,250,45,170,152,63,45,92,208,78,111,159,254,184,77,255,0,162,218,168,231,138,0,189,169,255,0,199,150,159,255,0,94,231,255,0,70,61,83,171,154,167,252,120,
105,223,245,192,255,0,232,199,170,123,168,0,162,141,212,110,160,2,138,55,81,186,128,10,40,221,70,234,0,40,83,243,175,212,81,186,132,57,145,122,117,20,1,111,95,255,0,144,237,239,253,119,127,231,85,51,86,
188,65,255,0,33,251,222,127,229,187,255,0,51,85,115,64,22,52,3,255,0,21,13,191,212,255,0,35,93,247,129,244,255,0,183,75,125,255,0,18,189,3,81,218,203,255,0,33,43,239,178,249,127,123,238,126,245,55,103,
191,92,96,116,205,112,58,7,252,140,86,255,0,143,242,53,223,120,31,79,251,116,183,223,241,44,208,53,29,172,191,242,18,190,251,47,151,247,190,231,239,83,118,123,245,198,7,74,168,146,206,51,196,151,207,101,
21,153,69,141,183,111,251,241,134,244,245,21,38,181,174,76,47,19,229,181,255,0,81,17,230,218,63,238,47,181,86,241,119,250,155,47,248,31,243,20,205,107,254,63,19,254,184,67,255,0,162,214,164,161,127,183,
103,254,229,167,254,3,71,254,20,127,110,207,253,203,79,252,6,143,252,42,157,20,1,115,251,118,127,238,90,127,224,52,127,225,71,246,236,255,0,220,180,255,0,192,104,255,0,194,169,209,64,27,26,22,187,49,189,
127,146,215,253,68,167,139,120,199,240,55,181,83,26,252,228,127,171,180,255,0,192,104,255,0,194,141,11,254,63,155,254,184,77,255,0,162,218,169,142,148,1,115,251,118,127,238,90,127,224,52,127,225,71,246,
236,255,0,220,180,255,0,192,104,255,0,194,169,209,64,27,26,22,187,55,219,155,228,181,255,0,81,41,255,0,143,104,255,0,231,155,123,85,33,175,206,127,130,211,255,0,1,163,255,0,10,93,11,254,63,155,254,184,
77,255,0,162,218,169,175,74,64,92,254,221,159,251,150,159,248,13,31,248,85,189,7,92,152,235,150,99,101,175,51,32,226,218,63,95,165,100,85,189,3,254,67,182,95,245,221,63,157,18,216,5,127,16,78,100,111,
221,218,117,63,242,237,31,248,81,253,187,63,247,45,63,240,26,63,240,170,103,239,55,212,209,76,13,136,117,233,142,129,112,118,90,255,0,175,136,127,199,178,99,163,251,85,63,237,217,255,0,185,105,255,0,128,
209,255,0,133,16,159,248,144,93,127,215,196,95,250,11,213,58,0,216,135,94,152,232,23,7,101,175,250,248,135,252,123,38,58,63,181,83,254,221,159,251,182,159,248,13,31,248,81,9,255,0,137,5,215,253,124,69,
255,0,160,189,83,160,13,136,53,217,134,131,114,118,90,255,0,175,136,127,199,178,122,63,108,85,63,237,233,241,247,45,63,240,26,63,240,162,3,255,0,18,11,175,250,248,139,255,0,65,122,166,122,80,6,198,187,
175,76,183,201,242,90,255,0,168,139,254,93,227,254,226,251,81,161,107,211,53,235,252,150,191,234,37,60,91,32,255,0,150,109,237,84,245,223,248,254,79,250,225,15,254,139,90,52,47,248,254,127,250,225,55,
254,139,106,93,0,6,187,62,62,229,167,254,3,71,254,20,127,110,207,253,203,79,252,6,143,252,42,154,244,162,152,23,63,183,103,254,229,167,254,3,71,254,20,127,110,207,253,203,79,252,6,143,252,42,157,20,1,
115,251,118,127,238,90,127,224,52,127,225,71,246,236,255,0,220,180,255,0,192,104,255,0,194,169,209,64,23,63,183,103,254,229,167,254,3,71,254,20,127,110,207,253,203,79,252,6,143,252,42,157,20,1,112,235,
243,143,249,103,105,255,0,128,209,255,0,133,92,131,94,155,251,2,227,228,181,226,120,199,252,123,71,253,215,246,172,122,185,7,252,128,46,191,235,226,47,253,5,232,0,254,221,159,251,150,159,248,13,31,248,
81,253,187,63,247,45,63,240,26,63,240,170,116,80,5,207,237,217,255,0,185,105,255,0,128,209,255,0,133,31,219,179,255,0,114,211,255,0,1,163,255,0,10,167,69,0,93,77,122,112,235,242,90,117,31,242,237,31,248,
85,157,123,93,157,117,203,197,217,107,254,185,135,54,209,250,253,43,36,125,229,250,138,183,175,255,0,200,118,243,254,187,191,243,165,212,5,254,221,159,251,150,159,248,13,31,248,81,253,187,63,247,45,63,
240,26,63,240,170,116,83,2,234,107,211,135,95,146,211,168,255,0,151,104,255,0,194,173,107,218,244,203,174,94,13,150,188,76,221,109,144,247,250,86,66,253,229,250,138,183,175,255,0,200,118,247,254,187,191,
243,160,5,254,221,159,251,150,159,248,13,31,248,80,117,217,192,251,150,159,248,13,31,248,85,58,15,74,0,216,215,117,233,150,249,127,119,107,254,162,46,182,232,127,129,125,170,159,246,236,255,0,220,180,
255,0,192,104,255,0,194,141,119,254,63,151,254,184,67,255,0,162,214,169,208,6,198,133,175,78,215,205,242,90,241,4,191,242,236,159,243,205,189,170,152,215,103,35,238,90,127,224,52,127,225,70,133,255,0,
31,207,255,0,92,38,255,0,209,109,84,215,165,46,160,107,104,26,244,237,226,11,33,178,215,153,148,113,109,31,248,85,103,215,167,46,223,37,167,83,255,0,46,209,255,0,133,55,195,255,0,242,48,216,255,0,215,
101,170,135,239,55,212,209,212,13,141,11,94,152,222,184,217,107,254,162,83,197,178,15,224,111,106,166,53,217,241,247,45,63,240,26,63,240,163,66,255,0,143,231,255,0,174,19,127,232,182,170,106,120,167,212,
13,136,53,217,191,225,29,185,62,93,175,252,124,198,63,227,221,63,186,222,213,77,124,65,57,117,249,45,58,255,0,207,180,127,225,69,183,252,139,151,95,245,245,31,254,130,213,77,126,242,253,69,0,107,235,218,
236,227,92,188,27,45,120,153,135,54,209,158,255,0,74,169,253,187,63,247,45,63,240,26,63,240,164,215,255,0,228,59,123,255,0,93,223,249,213,74,16,23,63,183,103,254,229,167,254,3,71,254,20,127,110,207,253,
203,79,252,6,143,252,42,157,20,1,115,251,118,127,238,90,127,224,52,127,225,71,246,236,255,0,220,180,255,0,192,104,255,0,194,169,209,64,23,63,183,103,254,229,167,254,3,71,254,20,127,110,207,253,203,79,
252,6,143,252,42,157,20,1,115,251,118,127,238,90,127,224,52,127,225,87,52,45,118,111,183,55,201,107,254,162,83,255,0,30,209,255,0,207,54,246,172,122,185,161,127,199,243,127,215,9,191,244,91,82,96,32,215,
231,63,193,105,255,0,128,209,255,0,133,47,246,236,255,0,220,180,255,0,192,104,255,0,194,169,175,74,41,129,115,251,118,127,238,90,127,224,52,127,225,71,246,236,255,0,220,180,255,0,192,104,255,0,194,169,
209,64,23,63,183,103,254,237,167,254,3,71,254,21,115,82,215,166,91,29,63,228,181,230,3,214,221,63,231,163,123,86,61,92,212,207,250,22,159,255,0,94,231,255,0,70,61,0,31,219,179,255,0,114,211,255,0,1,163,
255,0,10,63,183,103,254,229,167,254,3,71,254,21,78,138,0,185,253,187,63,247,45,63,240,26,63,240,173,141,107,93,152,120,83,71,109,150,191,55,155,255,0,46,233,253,239,165,115,117,177,173,127,200,165,162,
255,0,219,111,253,10,151,80,41,255,0,110,206,127,130,211,255,0,1,163,255,0,10,63,183,103,254,229,167,254,3,71,254,21,78,138,96,108,79,175,79,253,129,109,242,90,255,0,175,144,127,199,178,122,39,181,83,
254,222,184,63,193,105,255,0,128,209,255,0,133,19,127,200,2,215,254,190,37,255,0,208,82,169,210,64,92,77,126,112,235,251,187,78,163,254,93,163,255,0,10,183,175,235,147,13,114,240,108,181,226,102,28,219,
70,123,253,43,33,126,242,253,69,91,215,255,0,228,59,123,255,0,93,223,249,211,1,78,191,56,31,234,237,63,240,26,63,240,171,154,238,187,48,189,79,146,215,253,68,71,155,120,207,240,47,181,99,158,149,115,93,
255,0,143,229,255,0,174,16,255,0,232,181,160,1,117,249,195,175,201,107,215,254,125,163,255,0,10,183,175,107,179,141,114,240,108,181,226,102,28,219,70,123,253,43,33,126,242,253,69,91,215,255,0,228,59,121,
255,0,93,223,249,209,212,11,186,22,187,57,189,127,146,215,253,68,189,45,163,254,227,123,85,49,226,9,241,254,174,211,255,0,1,163,255,0,10,52,47,248,254,111,250,225,55,254,139,106,166,58,82,3,99,82,215,
102,251,22,159,242,90,243,1,63,241,239,31,252,244,111,106,167,253,187,63,247,45,63,240,26,63,240,163,82,255,0,143,45,63,254,189,207,254,140,122,167,76,11,159,219,179,255,0,114,211,255,0,1,163,255,0,10,
63,183,103,254,229,167,254,3,71,254,21,78,138,0,185,253,187,63,247,45,63,240,26,63,240,163,251,118,127,238,90,127,224,52,127,225,84,232,160,11,159,219,179,255,0,114,211,255,0,1,163,255,0,10,63,183,103,
254,229,167,254,3,71,254,21,78,138,0,185,253,187,63,247,45,63,240,26,63,240,165,77,122,112,235,242,90,117,31,242,237,31,248,85,42,23,239,47,212,80,6,190,189,175,76,186,229,224,217,107,254,185,135,54,200,
123,253,42,167,246,236,255,0,220,180,255,0,192,104,255,0,194,147,95,255,0,144,237,239,253,119,127,231,85,40,3,67,71,213,165,184,215,109,209,150,223,7,63,118,4,83,208,247,2,187,111,4,105,230,250,91,239,
248,149,232,58,142,214,94,117,43,239,178,249,127,123,238,126,245,55,103,191,92,96,116,174,7,64,255,0,145,134,223,234,127,145,174,243,193,94,26,79,16,205,125,191,195,250,230,185,228,178,224,233,210,236,
242,115,159,189,251,183,235,142,58,116,61,106,162,76,142,59,196,150,77,121,13,150,198,140,109,223,146,242,5,244,245,34,165,214,180,57,154,238,51,190,215,253,68,95,242,243,24,254,5,247,170,190,46,255,0,
83,101,255,0,3,254,98,153,173,140,222,39,253,112,139,255,0,69,173,75,41,11,253,133,63,247,237,63,240,38,63,241,163,251,10,127,239,218,127,224,76,127,227,84,241,70,40,212,11,159,216,83,255,0,126,211,255,
0,2,99,255,0,26,63,176,167,254,253,167,254,4,199,254,53,79,20,98,141,64,216,208,180,57,197,243,124,214,191,234,37,31,241,242,159,220,111,122,167,253,131,56,254,43,79,252,9,143,252,104,208,127,227,250,
79,250,225,55,254,139,106,164,7,20,181,2,239,246,20,255,0,223,180,255,0,192,152,255,0,198,143,236,41,255,0,191,105,255,0,129,49,255,0,141,83,197,24,167,168,27,26,22,133,48,190,111,158,215,253,76,189,46,
99,254,227,123,213,49,160,92,1,247,237,63,240,38,63,241,164,208,120,191,147,254,184,75,255,0,162,218,169,129,197,78,160,93,254,194,159,251,246,159,248,19,31,248,213,173,7,66,152,107,118,103,125,175,19,
47,75,152,253,126,181,146,87,34,173,104,31,242,31,179,255,0,174,201,252,233,244,1,239,160,92,121,141,243,218,117,63,242,243,31,248,210,127,97,79,253,235,79,252,9,143,252,106,155,15,153,190,166,140,83,
212,13,123,125,10,111,236,27,149,223,107,254,190,51,255,0,31,9,232,254,245,80,232,51,255,0,126,211,255,0,2,99,255,0,26,32,31,241,79,221,127,215,196,95,250,11,213,60,82,3,94,223,66,152,232,55,43,230,90,
255,0,175,140,255,0,199,194,122,63,189,84,58,4,255,0,243,210,207,255,0,2,163,255,0,26,32,31,241,79,221,127,215,196,95,250,11,213,60,81,168,26,241,104,83,46,131,114,60,203,94,103,143,254,94,19,209,253,
234,167,246,12,248,251,246,159,248,19,31,248,209,0,255,0,138,126,235,254,190,34,254,79,84,88,96,80,6,214,187,161,76,111,83,231,181,255,0,81,23,91,148,254,226,251,209,161,232,83,45,251,252,246,191,234,
37,31,241,240,159,220,111,122,167,174,140,223,39,253,112,135,255,0,69,173,26,8,255,0,78,127,250,225,55,254,139,106,93,0,6,131,56,31,126,211,255,0,2,99,255,0,26,63,176,174,63,191,105,255,0,129,49,255,0,
141,82,3,138,92,85,1,115,251,10,127,239,218,127,224,76,127,227,71,246,20,255,0,223,180,255,0,192,152,255,0,198,169,226,140,81,168,23,63,176,167,254,253,167,254,4,199,254,52,127,97,79,253,251,79,252,9,
143,252,106,158,40,197,26,129,115,251,10,127,239,218,127,224,76,127,227,71,246,20,255,0,223,180,255,0,192,152,255,0,198,169,226,140,81,168,23,63,176,110,15,241,218,127,224,76,127,227,87,33,208,38,93,2,
224,111,181,255,0,95,25,255,0,143,148,254,235,251,214,62,42,220,60,120,126,235,254,187,197,255,0,160,189,45,64,95,236,41,255,0,191,105,255,0,129,49,255,0,141,31,216,83,255,0,126,211,255,0,2,99,255,0,26,
164,5,46,41,234,5,207,236,41,255,0,191,105,255,0,129,49,255,0,141,31,216,83,255,0,126,211,255,0,2,99,255,0,26,167,138,8,197,26,129,118,61,6,115,34,252,246,157,71,252,188,199,254,53,107,95,208,102,58,229,
227,111,181,255,0,92,223,242,242,158,191,90,200,79,190,191,81,86,181,241,157,118,243,254,187,191,243,169,214,224,59,251,10,127,239,218,127,224,76,127,227,71,246,20,255,0,223,180,255,0,192,152,255,0,198,
169,226,140,85,106,5,213,208,167,46,191,61,167,81,255,0,47,49,255,0,141,90,215,244,41,155,91,188,59,173,121,153,136,255,0,73,65,223,235,89,10,49,34,253,106,222,190,51,174,222,127,215,119,254,116,181,1,
127,176,167,254,253,167,254,4,199,254,52,29,10,114,62,253,167,254,4,199,254,53,79,20,214,20,245,3,107,93,208,166,107,196,249,173,127,212,68,63,227,229,63,231,152,247,170,127,216,83,255,0,126,211,255,0,
2,99,255,0,26,53,222,111,151,254,184,67,255,0,162,214,169,226,150,160,108,104,58,12,203,124,196,189,175,250,137,127,229,229,63,184,222,245,76,104,51,143,227,180,255,0,192,152,255,0,198,141,8,98,249,255,
0,235,132,223,250,45,170,136,233,75,91,129,179,225,237,6,101,215,236,152,181,175,250,224,127,227,229,63,198,170,201,160,206,36,111,158,211,169,255,0,151,152,255,0,198,153,225,239,249,24,108,127,235,178,
213,87,251,237,245,52,107,112,53,244,61,14,101,190,127,158,215,253,68,163,139,132,255,0,158,109,239,85,63,176,39,199,250,203,79,252,9,143,252,104,208,127,227,249,255,0,235,132,223,250,45,170,136,28,83,
3,106,219,66,156,120,122,233,119,90,255,0,199,204,103,254,62,83,251,173,239,84,227,208,38,50,47,207,105,212,127,203,204,127,227,69,184,199,135,46,191,235,230,63,253,5,170,154,143,153,126,162,141,64,215,
241,6,133,49,215,47,8,123,94,102,111,249,121,79,95,173,84,254,194,159,251,246,159,248,19,31,248,211,124,65,206,189,121,255,0,93,223,249,213,65,205,26,129,119,251,10,127,239,218,127,224,76,127,227,71,246,
20,255,0,223,180,255,0,192,152,255,0,198,169,226,140,83,212,11,159,216,83,255,0,126,211,255,0,2,99,255,0,26,63,176,167,254,253,167,254,4,199,254,53,79,20,98,141,64,185,253,133,63,247,237,63,240,38,63,
241,163,251,10,127,239,218,127,224,76,127,227,84,241,70,40,212,11,159,216,83,255,0,126,211,255,0,2,99,255,0,26,185,161,104,83,11,230,249,237,127,212,203,210,230,63,238,55,189,99,227,6,173,232,60,95,201,
255,0,92,37,255,0,209,109,83,168,10,52,11,128,62,253,167,254,4,199,254,52,127,97,79,253,251,79,252,9,143,252,106,144,28,82,226,171,80,46,127,97,79,253,251,79,252,9,143,252,104,254,194,159,251,246,159,
248,19,31,248,213,60,81,138,53,2,231,246,12,231,248,237,63,240,38,63,241,171,122,158,135,49,179,211,198,251,95,150,3,255,0,47,9,255,0,61,31,222,178,49,87,53,49,254,133,167,255,0,215,185,255,0,209,143,
75,80,15,236,41,255,0,189,105,255,0,129,49,255,0,141,31,216,83,255,0,126,211,255,0,2,99,255,0,26,167,138,49,79,80,46,29,10,127,239,218,127,224,76,127,227,91,26,214,133,51,120,83,71,93,214,191,47,155,159,
244,132,254,247,214,185,154,218,214,191,228,82,209,127,237,183,254,133,83,168,20,198,133,62,62,253,167,254,4,199,254,52,29,10,227,251,246,159,248,19,31,248,213,60,83,72,205,86,160,109,77,160,204,116,11,
81,186,215,253,124,159,242,242,158,137,239,84,198,131,56,254,59,79,252,9,143,252,104,155,159,15,218,255,0,215,196,191,250,10,85,60,84,171,129,118,61,6,127,49,126,107,78,191,243,243,31,248,213,173,123,
67,156,235,151,135,117,175,51,49,230,229,61,126,181,144,163,12,191,81,86,188,65,206,189,121,255,0,93,159,249,211,212,7,127,96,207,253,235,79,252,9,143,252,106,230,187,161,206,111,151,230,181,255,0,81,
16,255,0,143,148,254,226,251,214,49,28,85,221,123,254,63,163,255,0,174,16,255,0,232,181,163,80,21,52,9,204,139,243,218,117,31,242,243,31,248,213,173,127,65,152,235,183,135,117,174,12,205,255,0,47,49,250,
253,107,33,71,204,191,81,86,188,64,51,174,222,127,215,119,254,116,1,123,66,208,102,23,210,124,246,191,234,37,31,241,242,159,220,111,122,166,52,9,135,241,90,127,224,76,127,227,70,130,49,124,223,245,194,
111,253,22,213,72,14,40,212,13,157,79,66,159,236,122,127,205,107,196,4,127,199,202,127,125,189,234,159,246,20,255,0,223,180,255,0,192,152,255,0,198,147,84,255,0,143,29,59,254,184,31,253,24,245,83,20,106,
5,207,236,41,255,0,191,105,255,0,129,49,255,0,141,31,216,83,255,0,126,211,255,0,2,99,255,0,26,167,138,49,79,80,46,127,97,79,253,251,79,252,9,143,252,104,254,194,159,251,246,159,248,19,31,248,213,60,81,
138,53,2,231,246,20,255,0,223,180,255,0,192,152,255,0,198,143,236,41,255,0,191,105,255,0,129,49,255,0,141,83,197,24,163,80,46,127,97,79,253,251,79,252,9,143,252,105,87,66,156,186,252,246,157,71,252,188,
199,254,53,75,20,40,196,139,245,163,80,53,245,253,10,102,214,239,14,235,94,102,99,255,0,31,40,59,253,106,167,246,20,255,0,223,180,255,0,192,152,255,0,198,147,95,25,215,111,63,235,187,255,0,58,169,143,
106,90,129,163,163,233,18,219,107,176,59,53,185,3,63,118,116,99,208,246,6,187,111,3,104,63,219,115,95,31,236,61,127,89,242,221,121,211,102,242,252,172,238,251,255,0,187,124,231,28,116,232,122,215,159,
120,127,254,70,43,127,199,255,0,65,53,232,30,6,240,247,246,228,183,223,241,35,215,245,143,45,151,157,54,111,47,202,206,239,191,251,183,206,113,199,78,135,173,92,73,145,195,248,184,254,230,199,254,7,253,
41,186,223,252,126,71,255,0,92,33,255,0,209,107,83,248,146,72,18,43,47,62,57,36,31,62,54,62,220,114,61,141,73,173,77,97,246,196,205,181,214,124,136,186,92,15,238,47,251,53,37,25,3,138,42,231,157,167,255,
0,207,173,231,254,4,47,255,0,19,71,157,167,255,0,207,173,231,254,4,47,255,0,19,70,160,83,162,174,121,218,127,252,250,222,127,224,66,255,0,241,52,121,218,127,252,250,222,127,224,66,255,0,241,52,106,1,160,
127,199,251,227,254,120,77,255,0,162,218,169,47,74,217,208,167,176,251,108,159,232,247,99,247,18,245,156,127,113,191,217,170,98,125,63,31,241,237,121,255,0,129,11,255,0,196,208,5,58,42,231,157,167,255,
0,207,173,231,254,4,47,255,0,19,71,157,167,255,0,207,173,231,254,4,47,255,0,19,70,160,26,8,205,251,255,0,215,9,127,244,91,85,37,233,91,58,20,250,127,219,155,253,26,235,253,68,189,103,7,248,27,253,154,
164,46,52,242,63,227,218,239,255,0,2,23,255,0,137,164,5,74,183,225,255,0,249,15,89,127,215,100,254,116,190,118,159,255,0,62,183,159,248,16,191,252,77,90,208,102,211,255,0,183,44,255,0,209,174,179,231,
46,51,112,167,191,251,180,61,128,201,97,137,27,234,104,171,146,92,105,229,219,253,26,239,169,255,0,151,129,255,0,196,209,231,105,255,0,243,235,121,255,0,129,11,255,0,196,211,0,135,254,64,23,95,245,241,
23,254,130,245,72,117,255,0,60,86,204,19,233,227,64,184,197,189,214,60,248,191,229,184,207,71,255,0,102,169,249,218,127,252,250,222,127,224,66,255,0,241,52,0,67,255,0,32,11,175,250,248,139,255,0,65,122,
164,127,207,181,108,193,62,158,52,11,140,91,221,99,207,139,254,91,140,244,127,246,106,159,157,167,255,0,207,173,231,254,4,47,255,0,19,72,4,131,254,69,251,159,250,248,139,255,0,65,122,168,221,43,98,9,244,
243,160,220,255,0,163,221,99,207,139,143,60,103,163,255,0,179,84,204,250,127,252,251,94,127,224,66,255,0,241,52,0,107,227,253,61,63,235,132,63,250,45,104,208,191,227,249,191,235,132,223,250,45,170,230,
187,62,158,47,99,205,189,215,250,136,191,229,184,254,226,255,0,179,70,133,54,159,246,215,197,189,215,250,137,122,206,167,254,89,183,251,52,116,3,20,127,145,78,21,111,207,211,207,252,186,222,127,224,66,
255,0,241,52,190,118,159,255,0,62,183,159,248,16,191,252,77,48,41,209,87,60,237,63,254,125,111,63,240,33,127,248,154,60,237,63,254,125,111,63,240,33,127,248,154,53,2,157,21,115,206,211,255,0,231,214,243,
255,0,2,23,255,0,137,163,206,211,255,0,231,214,243,255,0,2,23,255,0,137,163,80,41,209,87,60,237,63,254,125,111,63,240,33,127,248,154,60,237,63,254,125,111,63,240,33,127,248,154,53,2,153,171,150,227,254,
41,235,175,250,248,139,255,0,65,122,60,253,60,127,203,181,231,254,4,47,255,0,19,87,32,159,79,255,0,132,126,227,253,30,235,253,124,127,242,220,127,117,255,0,217,164,6,61,21,115,206,211,255,0,231,214,243,
255,0,2,23,255,0,137,163,206,211,255,0,231,214,243,255,0,2,23,255,0,137,167,168,20,232,171,158,118,159,255,0,62,183,159,248,16,191,252,77,30,118,159,255,0,62,183,159,248,16,191,252,77,26,129,76,125,229,
250,138,181,175,255,0,200,122,243,254,187,191,243,167,36,250,120,145,127,209,110,250,143,249,120,95,254,38,173,107,211,233,255,0,219,151,155,173,174,139,121,205,210,224,122,159,246,105,117,3,38,138,185,
231,105,255,0,243,235,121,255,0,129,11,255,0,196,209,231,105,255,0,243,235,121,255,0,129,11,255,0,196,211,212,10,107,254,177,126,162,173,120,131,254,67,215,191,245,221,191,157,62,57,244,241,34,255,0,163,
94,117,31,242,240,191,252,77,90,215,167,211,255,0,183,47,51,111,118,79,156,217,196,227,215,253,218,0,200,164,106,187,231,105,255,0,243,235,121,255,0,129,11,255,0,196,208,103,211,255,0,231,214,243,255,
0,2,23,255,0,137,163,80,13,127,254,63,211,254,184,67,255,0,162,214,169,214,198,187,62,159,246,229,221,111,118,127,113,23,73,199,247,23,253,154,167,231,105,255,0,243,235,121,255,0,129,11,255,0,196,209,
168,6,133,255,0,31,207,255,0,92,38,255,0,209,109,84,199,74,216,208,174,52,255,0,183,62,45,174,191,212,75,156,206,63,184,223,236,213,33,62,159,143,248,245,188,255,0,192,133,255,0,226,105,117,1,60,61,255,
0,35,13,143,253,118,90,170,126,243,125,77,107,120,126,125,63,254,18,11,45,182,215,89,243,151,173,192,255,0,226,106,171,207,167,153,27,253,22,239,169,255,0,151,133,255,0,226,105,117,0,208,191,227,249,191,
235,132,223,250,45,170,136,233,91,90,20,250,127,219,95,22,247,89,242,37,235,56,63,192,223,236,213,63,63,79,35,254,61,111,63,240,33,127,248,154,96,16,103,254,17,187,175,250,249,143,255,0,65,106,166,191,
121,126,162,182,45,231,211,255,0,225,28,184,255,0,71,186,199,218,99,227,207,29,118,183,251,53,77,110,52,255,0,49,127,209,174,250,255,0,207,192,255,0,226,104,1,53,255,0,249,14,222,255,0,215,119,254,117,
82,181,181,249,244,255,0,237,203,207,244,107,172,249,205,156,78,163,191,251,181,87,206,211,255,0,231,214,243,255,0,2,23,255,0,137,166,5,58,42,231,157,167,255,0,207,173,231,254,4,47,255,0,19,71,157,167,
255,0,207,173,231,254,4,47,255,0,19,70,160,83,162,174,121,218,127,252,250,222,127,224,66,255,0,241,52,121,218,127,252,250,222,127,224,66,255,0,241,52,106,5,58,42,231,157,167,255,0,207,173,231,254,4,47,
255,0,19,71,157,167,255,0,207,173,231,254,4,47,255,0,19,70,160,83,171,154,8,205,251,255,0,215,9,127,244,91,81,231,105,255,0,243,235,121,255,0,129,11,255,0,196,213,205,10,125,63,237,205,254,141,117,254,
162,94,179,131,252,13,254,205,38,6,50,244,165,171,98,227,79,35,254,61,174,255,0,240,33,127,248,154,95,59,79,255,0,159,91,207,252,8,95,254,38,152,20,232,171,158,118,159,255,0,62,183,159,248,16,191,252,
77,30,118,159,255,0,62,183,159,248,16,191,252,77,26,129,71,191,249,230,175,106,95,241,229,167,255,0,215,185,255,0,209,143,64,155,79,31,242,235,121,255,0,129,11,255,0,196,213,205,78,125,63,236,90,126,109,
238,191,212,28,98,113,199,239,27,253,154,64,99,209,87,60,237,63,254,125,111,63,240,33,127,248,154,60,237,63,254,125,111,63,240,33,127,248,154,122,129,78,182,53,175,249,20,116,95,251,109,255,0,161,85,63,
59,79,255,0,159,91,207,252,8,95,254,38,182,53,187,139,31,248,68,244,127,244,123,173,191,189,192,243,199,247,191,221,169,3,155,162,174,121,218,127,252,250,222,127,224,66,255,0,241,52,121,218,127,252,250,
222,127,224,66,255,0,241,53,90,128,147,255,0,200,191,107,255,0,95,18,255,0,232,41,85,51,91,19,207,167,255,0,194,63,109,254,143,117,183,207,147,254,91,143,68,255,0,102,169,249,250,121,255,0,151,91,207,
252,8,31,252,77,36,5,49,254,177,126,162,173,120,131,254,67,247,159,245,221,255,0,157,57,39,211,247,47,250,53,231,81,255,0,47,11,255,0,196,213,189,126,123,15,237,203,204,219,221,147,231,54,72,184,30,191,
238,211,212,12,118,233,87,117,255,0,248,255,0,76,255,0,207,8,127,244,90,208,103,211,241,255,0,30,215,159,248,16,191,252,77,92,215,103,176,251,108,127,232,247,103,247,17,116,156,127,113,127,217,160,12,
113,247,215,234,42,214,190,127,226,123,123,255,0,93,223,249,211,146,125,60,58,255,0,162,221,231,63,243,240,63,248,154,181,175,205,167,157,114,243,54,183,89,243,155,56,157,125,127,221,165,212,10,186,17,
255,0,78,127,250,225,55,254,139,106,163,252,53,181,160,207,167,139,217,49,109,117,159,34,94,179,143,238,55,251,53,76,92,105,255,0,243,237,121,255,0,129,3,255,0,137,160,3,84,226,199,78,255,0,175,115,255,
0,163,30,169,214,198,167,62,159,246,29,63,253,30,232,254,224,227,247,227,143,222,55,251,53,79,206,211,255,0,231,214,243,255,0,2,23,255,0,137,167,168,20,232,171,158,118,159,255,0,62,183,159,248,16,191,
252,77,30,118,159,255,0,62,183,159,248,16,191,252,77,26,129,78,138,185,231,105,255,0,243,235,121,255,0,129,11,255,0,196,209,231,105,255,0,243,235,121,255,0,129,11,255,0,196,209,168,20,232,171,158,118,
159,255,0,62,183,159,248,16,191,252,77,30,118,159,255,0,62,183,159,248,16,191,252,77,26,129,78,133,255,0,88,191,81,87,60,237,63,254,125,111,63,240,33,127,248,154,88,231,211,196,139,254,141,121,212,127,
203,194,255,0,241,52,106,3,60,65,255,0,33,251,223,250,238,255,0,204,213,83,205,107,235,211,233,255,0,219,151,153,183,187,45,231,62,113,56,245,255,0,118,170,121,218,127,252,250,222,127,224,66,255,0,241,
52,1,30,128,63,226,162,183,252,127,145,175,66,240,15,252,34,254,109,255,0,252,36,159,240,145,110,220,191,103,254,203,217,211,230,221,191,119,225,140,123,215,11,163,203,102,218,237,184,142,11,133,126,112,
90,96,195,161,237,182,187,111,4,120,131,251,14,91,239,248,158,107,250,63,152,234,113,166,195,230,121,184,221,247,255,0,120,152,199,110,189,79,74,168,147,35,135,241,119,250,155,31,248,31,244,166,107,95,
241,248,159,245,194,31,253,22,181,99,196,150,19,223,69,100,33,134,89,72,223,157,139,187,29,42,93,107,195,215,230,238,60,89,93,31,220,68,56,136,255,0,113,106,74,70,61,21,115,254,17,237,67,254,124,110,255,
0,239,209,163,254,17,237,67,254,124,110,255,0,239,209,160,10,116,85,207,248,71,181,15,249,241,187,255,0,191,70,143,248,71,181,15,249,241,187,255,0,191,70,128,13,11,254,63,159,254,184,77,255,0,162,218,
169,40,226,182,116,63,15,223,173,243,102,198,232,126,226,81,204,71,251,141,84,255,0,225,28,212,7,252,184,221,255,0,223,163,64,20,232,171,159,240,143,106,31,243,227,119,255,0,126,141,31,240,143,106,31,
243,227,119,255,0,126,141,0,26,23,252,127,55,253,112,155,255,0,69,181,82,81,197,108,232,94,30,191,23,205,155,43,161,251,137,71,49,31,238,53,83,30,28,212,0,255,0,143,27,175,251,244,105,1,78,173,232,31,
242,29,178,255,0,174,233,252,233,127,225,30,212,63,231,198,239,254,253,26,181,160,248,123,80,26,229,153,54,87,74,4,202,114,98,62,180,61,128,201,97,243,55,212,209,87,95,195,154,128,145,191,208,110,186,
159,249,100,105,63,225,29,212,63,231,198,239,254,253,26,96,16,127,200,2,235,254,190,34,255,0,208,94,169,214,188,30,29,212,63,176,46,151,236,87,89,243,227,63,234,143,163,213,67,225,205,64,127,203,141,223,
253,250,52,0,65,255,0,32,11,175,250,248,139,255,0,65,122,167,138,215,131,195,186,135,246,5,210,253,138,235,62,124,103,253,81,254,235,213,79,248,70,181,17,255,0,46,55,159,247,232,209,112,8,127,228,1,117,
255,0,95,17,127,232,47,84,207,221,173,120,124,59,168,46,129,114,62,197,117,147,60,120,30,89,244,122,169,255,0,8,238,161,143,248,241,187,255,0,191,70,128,13,116,102,249,63,235,132,63,250,45,104,208,134,
47,159,254,184,77,255,0,162,218,174,107,190,29,212,13,234,17,101,116,127,113,16,255,0,84,127,184,180,104,126,30,212,22,253,243,101,116,63,113,47,252,178,63,220,106,93,0,199,29,40,171,131,195,154,130,175,
252,120,221,255,0,223,163,71,252,35,218,135,252,248,221,255,0,223,163,76,10,116,85,207,248,71,181,15,249,241,187,255,0,191,70,143,248,71,181,15,249,241,187,255,0,191,70,128,41,209,87,63,225,30,212,63,
231,198,239,254,253,26,63,225,30,212,63,231,198,239,254,253,26,0,167,69,92,255,0,132,123,80,255,0,159,27,191,251,244,104,255,0,132,123,80,255,0,159,27,191,251,244,104,2,158,51,87,32,227,64,186,255,0,175,
136,191,244,23,163,254,17,221,67,254,124,110,191,239,209,171,144,248,115,80,93,2,224,125,138,235,38,120,200,30,81,231,135,164,6,61,21,115,254,17,237,67,254,124,110,255,0,239,209,163,254,17,237,67,254,
124,110,255,0,239,209,166,5,58,42,231,252,35,218,135,252,248,221,255,0,223,163,71,252,35,218,135,252,248,221,255,0,223,163,64,20,215,239,47,212,85,189,127,254,67,183,159,245,221,255,0,157,58,63,14,106,
6,69,255,0,65,186,235,255,0,60,141,89,215,188,59,126,218,229,227,45,149,209,95,57,185,242,207,60,210,234,6,77,21,115,254,17,237,67,254,124,110,255,0,239,209,163,254,17,237,67,254,124,110,255,0,239,209,
166,5,53,251,203,245,21,107,95,25,215,111,63,235,187,255,0,58,114,248,119,80,220,191,232,55,125,71,252,178,53,111,95,240,245,251,107,119,132,89,93,96,204,228,17,25,231,154,0,200,160,244,171,159,240,142,
234,31,243,227,119,255,0,126,141,7,195,186,134,63,227,198,239,254,253,26,0,53,222,111,151,254,184,67,255,0,162,214,169,214,198,187,225,235,246,188,66,44,110,191,212,68,50,35,63,243,205,106,159,252,35,
186,135,252,248,221,255,0,223,163,64,6,133,255,0,31,207,255,0,92,38,255,0,209,109,84,199,74,216,208,124,59,126,183,205,186,206,232,102,9,122,198,127,184,213,76,120,119,80,31,242,227,119,255,0,126,141,
46,160,55,195,227,254,42,27,31,250,236,181,85,190,243,125,77,107,120,127,195,183,235,175,217,51,89,221,1,231,3,159,44,241,85,164,240,230,160,36,111,244,27,174,191,243,200,209,212,4,208,191,227,249,255,
0,235,132,223,250,45,170,152,233,91,26,31,135,175,214,249,243,101,116,63,113,47,88,143,252,243,106,167,255,0,8,214,160,7,252,120,221,255,0,223,163,64,5,191,252,139,151,95,245,245,31,254,130,213,77,71,
204,191,81,91,22,222,29,191,30,29,185,95,176,221,110,251,76,103,30,89,254,235,85,52,240,222,160,92,127,160,221,245,31,242,200,211,1,53,255,0,249,14,222,255,0,215,119,254,117,82,181,245,255,0,15,95,157,
114,240,173,149,209,13,51,16,124,163,207,53,83,254,17,237,67,254,124,110,255,0,239,209,160,10,116,85,207,248,71,181,15,249,241,187,255,0,191,70,143,248,71,181,15,249,241,187,255,0,191,70,128,41,209,87,
63,225,30,212,63,231,198,239,254,253,26,63,225,30,212,63,231,198,239,254,253,26,0,167,69,92,255,0,132,123,80,255,0,159,27,191,251,244,104,255,0,132,123,80,255,0,159,27,191,251,244,104,2,157,92,208,191,
227,249,191,235,132,223,250,45,168,255,0,132,123,80,255,0,159,27,191,251,244,106,230,133,225,235,241,124,217,178,186,31,184,148,115,17,254,227,82,96,99,40,226,150,174,15,14,106,0,127,199,141,215,253,250,
52,127,194,61,168,127,207,141,223,253,250,52,192,167,69,92,255,0,132,123,80,255,0,159,27,191,251,244,104,255,0,132,123,80,255,0,159,27,191,251,244,104,2,157,92,212,249,178,211,255,0,235,220,255,0,232,
199,163,254,17,205,64,143,248,241,186,255,0,191,70,173,234,126,29,212,13,158,158,62,197,117,196,7,63,186,60,126,241,233,1,145,69,92,255,0,132,119,80,255,0,159,27,191,251,244,104,255,0,132,123,80,255,0,
159,27,191,251,244,105,129,78,182,53,175,249,20,180,95,251,109,255,0,161,85,51,225,221,67,254,124,110,255,0,239,209,173,141,107,195,215,205,225,93,29,69,157,214,229,243,114,60,179,199,205,244,165,212,
14,110,138,184,60,59,168,99,254,60,110,255,0,239,209,160,248,119,80,255,0,159,27,191,251,244,105,128,79,255,0,32,11,95,250,248,151,255,0,65,74,167,91,19,120,114,248,232,54,171,246,43,189,222,124,135,2,
51,158,137,84,199,135,117,1,255,0,46,55,127,247,232,210,64,83,81,243,47,212,85,189,127,254,67,183,159,245,221,255,0,157,58,63,14,106,5,215,253,6,239,175,252,242,53,103,93,240,253,251,107,151,132,89,93,
16,102,98,8,136,243,205,48,50,8,226,174,235,191,241,252,159,245,194,31,253,22,180,127,194,57,168,31,249,113,187,255,0,191,70,174,107,158,31,191,107,229,197,141,209,253,196,67,136,143,247,22,128,49,199,
222,95,168,171,122,255,0,252,135,111,127,235,187,255,0,58,84,240,230,160,92,127,160,221,245,31,242,200,213,189,127,195,151,205,174,222,17,103,117,180,204,196,17,17,231,154,64,84,208,191,227,249,191,235,
132,223,250,45,170,144,28,86,206,133,225,219,245,189,147,54,119,88,242,37,228,196,127,184,213,76,120,111,80,31,242,227,121,255,0,126,143,248,80,1,169,127,199,150,159,255,0,94,231,255,0,70,61,83,173,141,
79,195,215,255,0,99,211,255,0,208,110,190,88,8,35,203,60,126,241,170,159,252,35,218,135,252,248,221,255,0,223,163,76,10,116,85,207,248,71,181,15,249,241,187,255,0,191,70,143,248,71,181,15,249,241,187,
255,0,191,70,128,41,209,87,63,225,30,212,63,231,198,239,254,253,26,63,225,30,212,63,231,198,239,254,253,26,0,167,69,92,255,0,132,123,80,255,0,159,27,191,251,244,104,255,0,132,123,80,255,0,159,27,191,251,
244,104,2,157,11,247,151,234,42,231,252,35,218,135,252,248,221,255,0,223,163,66,248,119,80,220,191,232,55,125,71,252,178,52,0,221,124,103,93,188,255,0,174,239,252,234,173,107,235,254,30,191,109,110,240,
139,27,172,25,152,130,35,60,243,85,63,225,30,212,63,231,198,239,254,253,26,0,143,64,31,241,81,91,253,79,242,53,223,120,27,94,254,196,150,251,254,39,154,254,143,230,58,241,166,193,230,9,177,159,191,251,
196,198,51,199,94,167,165,113,90,62,137,121,109,174,192,242,90,220,70,139,156,150,66,0,249,77,118,126,13,241,84,126,28,158,251,204,241,6,185,161,249,204,184,26,124,65,252,236,103,239,126,241,58,103,142,
189,79,74,168,147,35,142,241,37,252,214,48,217,249,51,73,22,119,231,99,17,158,149,38,179,226,27,245,187,140,11,219,160,60,136,186,74,127,184,181,91,197,223,234,108,191,224,127,204,83,53,175,248,252,79,
250,225,15,254,139,90,146,144,191,240,144,234,31,243,253,119,255,0,127,77,31,240,144,234,31,243,253,119,255,0,127,77,83,162,139,1,115,254,18,29,67,254,127,174,255,0,239,233,163,254,18,45,67,254,127,174,
255,0,239,233,170,116,81,96,54,52,47,16,223,155,231,205,237,209,253,196,167,153,15,252,243,106,166,60,69,168,17,255,0,31,215,127,247,244,209,161,127,199,243,255,0,215,9,191,244,91,85,49,210,149,144,23,
63,225,33,212,63,231,250,239,254,254,154,63,225,34,212,63,231,250,239,254,254,154,167,69,59,1,177,161,120,139,80,55,206,13,237,209,253,196,167,253,105,255,0,158,109,84,199,136,245,2,63,227,250,239,254,
254,154,52,47,248,254,127,250,225,55,254,139,106,166,58,82,2,225,241,14,161,143,248,254,187,255,0,191,166,173,104,62,34,191,58,237,152,251,109,209,6,101,224,202,125,107,38,173,232,31,242,29,179,255,0,
174,233,252,233,61,128,115,120,143,80,46,223,233,215,125,79,252,181,52,159,240,144,234,31,243,253,119,255,0,127,77,83,111,188,223,83,69,85,128,216,131,196,55,255,0,216,55,39,237,183,89,243,226,25,243,
79,247,94,169,255,0,194,67,168,127,207,245,223,253,253,52,67,255,0,32,11,175,250,248,139,255,0,65,122,167,64,27,16,120,134,255,0,251,6,228,253,182,235,62,124,67,62,105,254,235,213,63,248,72,245,15,249,
254,187,255,0,191,173,254,52,67,255,0,32,11,175,250,248,139,255,0,65,122,167,69,128,216,135,196,55,231,65,184,255,0,77,186,200,158,33,159,52,250,61,83,62,35,212,0,255,0,143,235,191,251,250,104,131,254,
64,23,95,245,241,23,254,130,245,77,186,82,176,27,26,231,136,117,1,122,159,233,183,67,247,17,30,37,63,243,205,104,208,252,67,126,215,205,155,219,163,251,137,122,202,127,231,155,85,61,119,254,63,151,254,
184,67,255,0,162,214,141,11,254,63,159,254,184,77,255,0,162,218,142,128,3,196,90,129,31,241,253,119,255,0,127,77,31,240,144,234,31,243,253,119,255,0,127,77,83,29,40,160,11,159,240,144,234,31,243,253,119,
255,0,127,77,31,240,144,234,31,243,253,119,255,0,127,77,83,162,157,128,185,255,0,9,14,161,255,0,63,215,127,247,244,209,255,0,9,14,161,255,0,63,215,127,247,244,213,58,40,176,23,63,225,33,212,63,231,250,
239,254,254,154,63,225,33,212,63,231,250,239,254,254,154,167,69,22,2,231,252,36,90,135,252,255,0,93,255,0,223,211,87,33,241,22,161,253,131,114,126,219,117,145,60,67,62,105,227,229,122,199,171,144,255,
0,200,2,235,254,190,34,255,0,208,94,149,128,63,225,34,212,15,252,191,93,255,0,223,211,71,252,36,58,135,252,255,0,93,255,0,223,211,84,232,167,96,46,127,194,67,168,127,207,245,223,253,253,52,127,194,69,
168,127,207,245,223,253,253,53,78,142,180,88,11,137,226,61,64,58,255,0,167,93,117,255,0,158,166,173,235,222,33,212,6,183,120,5,237,208,2,103,192,18,159,90,200,81,243,47,212,85,189,127,254,67,183,191,245,
221,255,0,157,79,80,23,254,18,29,67,254,127,174,255,0,239,233,163,254,18,29,67,254,127,174,255,0,239,233,170,116,85,88,11,139,226,45,64,58,255,0,167,93,117,255,0,158,166,173,235,222,33,191,26,229,224,
23,183,74,22,102,0,9,79,173,100,15,188,191,81,86,245,255,0,249,14,222,255,0,215,119,254,116,88,5,255,0,132,135,80,255,0,159,235,191,251,250,104,62,34,212,7,252,191,93,127,223,211,84,232,110,148,88,13,
141,115,196,55,226,245,0,188,186,31,184,136,241,33,255,0,158,107,84,255,0,225,33,212,63,231,250,239,254,254,154,53,223,248,254,95,250,225,15,254,139,90,167,74,200,13,141,15,196,58,129,189,108,222,221,
31,220,74,121,148,255,0,207,54,170,127,240,145,234,7,254,95,174,255,0,239,233,163,66,255,0,143,230,255,0,174,19,127,232,182,170,64,113,75,168,27,30,31,241,21,251,107,246,32,222,221,50,153,135,6,83,85,
31,196,122,129,118,255,0,78,186,235,255,0,61,77,39,135,191,228,97,177,255,0,174,203,85,24,124,205,245,52,117,3,99,67,241,13,251,95,54,111,110,143,238,37,60,202,127,231,155,85,49,226,45,64,143,248,254,
186,255,0,191,166,141,11,139,231,255,0,174,19,127,232,182,170,99,149,167,212,13,139,127,17,106,7,195,215,39,237,183,89,251,76,99,62,97,233,181,170,162,248,139,80,12,63,211,174,250,143,249,106,105,45,191,
228,92,186,255,0,175,168,255,0,244,22,170,107,247,151,234,40,176,26,218,255,0,136,181,1,174,94,1,123,116,0,153,192,30,105,245,170,191,240,145,106,7,254,95,174,255,0,239,233,166,235,227,254,39,215,159,
245,221,255,0,153,170,160,98,139,1,115,254,18,29,67,254,127,174,255,0,239,233,163,254,18,29,67,254,127,174,255,0,239,233,170,116,83,176,23,63,225,33,212,63,231,250,239,254,254,154,63,225,33,212,63,231,
250,239,254,254,154,167,69,22,2,231,252,36,58,135,252,255,0,93,255,0,223,211,71,252,36,58,135,252,255,0,93,255,0,223,211,84,232,162,192,92,255,0,132,139,80,207,252,127,94,127,223,211,87,52,47,17,106,6,
249,193,189,186,63,184,148,255,0,173,63,243,205,171,30,174,104,95,241,252,255,0,245,194,111,253,22,212,172,0,60,71,168,17,255,0,31,215,127,247,244,209,255,0,9,14,161,255,0,63,215,127,247,244,213,49,210,
138,118,2,231,252,36,58,135,252,255,0,93,255,0,223,211,71,252,36,58,135,252,255,0,93,255,0,223,211,84,232,162,192,92,255,0,132,135,80,255,0,159,235,191,251,250,106,230,167,226,27,255,0,177,233,231,237,
183,89,104,9,63,189,60,254,241,171,30,174,106,95,241,229,167,255,0,215,185,255,0,209,143,72,3,254,18,29,67,254,127,174,255,0,239,233,163,254,18,29,67,254,127,174,255,0,239,233,170,116,83,176,23,63,225,
34,212,63,231,250,235,254,254,154,216,214,124,67,126,60,41,163,183,219,46,131,55,155,147,230,28,159,154,185,188,113,91,26,215,252,138,90,47,253,182,255,0,208,170,64,167,255,0,9,14,161,255,0,63,215,127,
247,244,208,124,69,168,127,207,245,215,253,253,53,78,140,85,89,1,177,55,136,245,15,236,27,99,246,219,172,249,242,140,249,167,251,169,84,255,0,225,34,212,63,231,250,239,254,254,154,38,255,0,144,5,175,253,
124,75,255,0,160,165,83,169,64,93,79,17,106,1,215,253,58,235,168,255,0,150,166,172,235,222,33,191,93,114,241,69,237,210,129,51,128,4,167,142,107,37,126,242,253,69,91,215,255,0,228,59,123,255,0,93,223,
249,211,178,1,79,136,181,0,63,227,250,235,254,254,154,185,174,248,134,252,95,38,47,110,135,238,34,60,72,127,231,154,214,57,233,87,53,223,248,254,79,250,225,15,254,139,90,118,1,87,196,122,128,97,254,157,
117,212,127,203,83,86,181,255,0,16,234,3,91,188,2,242,232,5,153,192,196,167,214,178,23,239,47,212,85,189,127,254,67,183,191,245,221,255,0,157,32,46,232,94,34,212,13,227,3,121,117,254,162,83,254,180,255,
0,207,54,170,99,196,90,129,31,241,253,119,255,0,127,77,26,23,252,127,55,253,112,155,255,0,69,181,83,29,40,3,99,83,241,21,248,178,211,255,0,211,46,190,104,9,63,189,60,254,241,234,159,252,36,90,135,252,
255,0,93,127,223,211,70,167,255,0,30,90,127,253,123,159,253,24,245,78,139,32,46,127,194,67,168,127,207,245,223,253,253,52,127,194,67,168,127,207,245,223,253,253,53,78,138,118,2,231,252,36,58,135,252,255,
0,93,255,0,223,211,71,252,36,58,135,252,255,0,93,255,0,223,211,84,232,162,192,92,255,0,132,135,80,255,0,159,235,191,251,250,104,255,0,132,135,80,255,0,159,235,191,251,250,106,157,20,88,11,159,240,144,
234,31,243,253,119,255,0,127,77,11,226,45,64,58,255,0,167,93,117,255,0,158,166,169,208,62,242,253,69,22,3,95,94,241,13,248,215,47,0,189,186,80,179,48,0,74,125,106,167,252,36,90,135,252,255,0,93,255,0,
223,211,73,175,255,0,200,118,247,254,187,191,243,170,148,88,13,13,27,90,188,186,215,173,210,75,171,137,21,179,149,105,9,7,229,53,220,120,15,86,147,76,150,251,110,173,161,105,123,217,114,53,27,31,180,249,
152,221,247,127,116,251,113,223,166,114,58,227,143,63,208,7,252,84,86,255,0,83,252,141,119,222,6,212,191,179,229,190,255,0,137,166,131,167,110,101,255,0,144,149,135,218,188,207,189,247,63,116,251,113,
223,166,114,58,226,170,36,200,225,252,93,254,166,203,254,7,252,197,51,90,255,0,143,196,255,0,174,16,255,0,232,181,167,248,187,253,77,151,252,15,249,138,102,181,255,0,31,137,255,0,92,33,255,0,209,107,82,
81,82,138,40,160,2,138,40,160,11,154,23,252,127,55,253,112,155,255,0,69,181,83,29,42,230,133,255,0,31,205,255,0,92,38,255,0,209,109,84,199,74,0,40,162,138,0,185,161,127,199,243,127,215,9,191,244,91,85,
49,210,174,104,95,241,252,223,245,194,111,253,22,213,76,116,160,2,173,232,31,242,29,178,255,0,174,233,252,234,165,91,208,63,228,59,101,255,0,93,211,249,210,150,192,84,111,188,223,83,69,13,247,155,234,
104,166,5,200,127,228,1,117,255,0,95,17,127,232,47,84,234,228,63,242,0,186,255,0,175,136,191,244,23,170,116,1,114,31,249,0,93,127,215,196,95,250,11,213,58,185,15,252,128,46,191,235,226,47,253,5,234,157,
0,92,135,254,64,23,95,245,241,23,254,130,245,76,244,171,144,255,0,200,2,235,254,190,34,255,0,208,94,169,158,148,116,2,230,187,255,0,31,203,255,0,92,33,255,0,209,107,70,133,255,0,31,205,255,0,92,38,255,
0,209,109,70,187,255,0,31,203,255,0,92,33,255,0,209,107,70,133,255,0,31,205,255,0,92,38,255,0,209,109,71,64,41,142,148,80,58,81,64,5,20,81,64,5,20,81,64,5,20,81,64,5,92,135,254,64,23,95,245,241,23,254,
130,245,78,174,67,255,0,32,11,175,250,248,139,255,0,65,122,0,167,69,20,80,1,69,20,80,0,191,121,126,162,173,235,255,0,242,29,189,255,0,174,239,252,234,162,253,229,250,138,183,175,255,0,200,118,247,254,
187,191,243,165,212,10,148,81,69,48,5,251,203,245,21,111,95,255,0,144,237,239,253,119,127,231,85,23,239,47,212,85,189,127,254,67,183,191,245,221,255,0,157,0,84,160,244,162,131,210,128,46,107,191,241,252,
191,245,194,31,253,22,181,78,174,107,191,241,252,191,245,194,31,253,22,181,78,128,46,104,95,241,252,223,245,194,111,253,22,213,76,116,171,154,23,252,127,55,253,112,155,255,0,69,181,83,29,41,117,2,223,
135,255,0,228,97,177,255,0,174,203,85,27,239,55,212,213,191,15,255,0,200,195,99,255,0,93,150,170,55,222,111,169,163,168,23,52,47,248,254,111,250,225,55,254,139,106,166,58,85,205,11,254,63,155,254,184,
77,255,0,162,218,169,142,148,250,129,114,223,254,69,203,175,250,250,143,255,0,65,106,166,191,121,126,162,174,91,255,0,200,185,117,255,0,95,81,255,0,232,45,84,215,239,47,212,80,5,189,127,254,67,183,191,
245,221,255,0,157,84,171,122,255,0,252,135,111,127,235,187,255,0,58,169,64,5,20,81,64,5,20,81,64,5,20,81,64,5,92,208,191,227,249,191,235,132,223,250,45,170,157,92,208,191,227,249,191,235,132,223,250,45,
168,2,152,233,69,3,165,20,0,81,69,20,0,85,205,75,254,60,180,255,0,250,247,63,250,49,234,157,92,212,191,227,203,79,255,0,175,115,255,0,163,30,128,41,209,69,20,0,86,198,181,255,0,34,150,139,255,0,109,191,
244,42,199,173,141,107,254,69,45,23,254,219,127,232,84,186,129,143,69,20,83,2,228,223,242,0,181,255,0,175,137,127,244,20,170,117,114,111,249,0,90,255,0,215,196,191,250,10,85,58,81,216,1,126,242,253,69,
91,215,255,0,228,59,123,255,0,93,223,249,213,69,251,203,245,21,111,95,255,0,144,237,239,253,119,127,231,76,10,135,165,92,215,127,227,249,127,235,132,63,250,45,106,153,233,87,53,223,248,254,95,250,225,
15,254,139,90,0,166,191,121,126,162,173,235,255,0,242,29,189,255,0,174,239,252,234,162,253,229,250,138,183,175,255,0,200,118,247,254,187,191,243,160,5,208,191,227,249,191,235,132,223,250,45,170,152,233,
87,52,47,248,254,111,250,225,55,254,139,106,166,58,80,5,205,75,254,60,180,255,0,250,247,63,250,49,234,157,92,212,191,227,203,79,255,0,175,115,255,0,163,30,169,208,1,69,20,80,1,69,20,80,1,69,20,80,1,66,
253,229,250,138,40,95,188,191,81,64,22,245,255,0,249,14,222,255,0,215,119,254,117,82,173,235,255,0,242,29,189,255,0,174,239,252,234,165,0,88,208,63,228,97,183,250,159,228,107,190,240,70,161,246,25,111,
191,226,105,160,233,219,153,127,228,37,97,246,175,51,239,125,207,221,62,220,119,233,156,142,184,174,7,64,255,0,145,134,223,234,127,145,175,64,240,35,106,171,45,247,246,106,248,117,190,101,243,63,181,62,
205,145,247,177,179,206,35,223,59,125,179,218,170,36,200,225,124,93,254,166,199,223,127,244,166,107,124,94,71,255,0,92,34,255,0,209,107,86,60,73,122,246,113,89,237,17,182,119,253,248,195,119,30,162,164,
214,181,217,197,220,127,45,175,250,136,186,219,70,127,129,125,170,94,229,35,35,117,27,170,231,246,236,255,0,220,180,255,0,192,104,255,0,194,143,237,217,255,0,185,105,255,0,128,209,255,0,133,0,83,221,70,
234,185,253,187,63,247,45,63,240,26,63,240,163,251,118,127,238,90,127,224,52,127,225,64,6,132,115,126,223,245,194,111,253,22,213,72,55,21,179,161,107,179,27,231,249,45,127,212,74,120,183,79,249,230,222,
213,79,251,122,115,252,22,159,248,13,31,248,82,2,158,234,55,85,207,237,217,255,0,185,105,255,0,128,209,255,0,133,31,219,179,255,0,114,211,255,0,1,99,255,0,10,96,26,9,205,243,255,0,215,9,127,244,91,85,
21,110,43,107,66,215,102,55,175,242,90,255,0,168,148,241,109,31,252,243,111,106,166,53,233,200,251,150,159,248,13,31,248,82,2,158,234,181,160,28,235,182,127,245,217,63,157,56,235,183,24,251,150,159,248,
13,31,248,85,189,7,93,152,235,150,99,101,175,51,40,255,0,143,104,199,127,165,39,176,25,12,112,237,245,52,110,171,207,175,92,23,111,146,211,169,255,0,151,104,255,0,194,155,253,187,63,247,45,63,240,26,63,
240,166,2,64,115,225,251,175,250,248,139,255,0,65,122,167,186,182,96,215,38,26,13,201,219,107,254,190,33,255,0,30,233,232,254,213,79,251,118,224,255,0,13,167,254,3,71,254,20,192,108,7,254,41,251,175,250,
248,139,255,0,65,122,169,186,182,96,215,38,26,13,201,219,107,254,190,33,255,0,30,233,232,254,213,79,251,126,224,255,0,5,167,254,3,71,255,0,196,210,212,6,192,127,226,159,186,255,0,175,136,191,147,213,66,
120,173,152,181,217,219,65,185,59,109,115,231,197,255,0,46,233,232,254,213,79,251,122,112,62,229,175,254,3,71,254,20,106,1,175,28,95,39,253,112,139,255,0,69,173,38,130,127,211,223,254,184,77,255,0,162,
218,174,235,154,236,226,245,6,219,95,245,17,30,109,147,254,121,175,181,26,30,185,49,190,111,150,215,253,68,167,139,116,255,0,158,109,237,71,64,49,129,226,151,117,92,254,222,184,35,238,218,255,0,224,52,
127,225,71,246,236,255,0,220,180,255,0,192,104,255,0,194,152,20,247,81,186,174,127,110,207,253,203,79,252,6,143,252,40,254,221,159,251,150,159,248,13,31,248,80,5,61,212,110,171,159,219,179,255,0,114,211,
255,0,1,163,255,0,10,63,183,103,254,229,167,254,3,71,254,20,1,79,117,27,170,231,246,236,255,0,220,180,255,0,192,104,255,0,194,143,237,217,255,0,185,105,255,0,128,209,255,0,133,0,82,221,87,32,255,0,145,
126,235,254,190,34,255,0,208,94,151,251,118,127,238,90,127,224,52,127,225,87,33,215,167,58,13,207,201,107,196,241,143,248,247,79,238,191,181,32,49,247,81,186,174,127,110,207,253,203,79,252,6,143,252,40,
254,221,159,251,150,159,248,13,31,248,83,2,158,234,55,85,207,237,217,255,0,185,105,255,0,128,209,255,0,133,31,219,179,255,0,118,211,255,0,1,163,255,0,10,0,166,135,50,47,212,85,175,16,28,107,215,159,245,
221,255,0,157,57,53,233,195,175,201,107,215,254,125,163,255,0,10,183,175,107,179,141,110,240,109,181,226,102,235,109,25,239,244,169,234,6,70,234,55,85,207,237,217,255,0,185,105,255,0,128,209,255,0,133,
31,219,179,255,0,114,211,255,0,1,163,255,0,10,160,41,169,249,151,234,42,215,136,15,252,79,111,122,127,174,127,231,78,77,122,112,235,242,90,117,255,0,159,104,255,0,194,174,107,250,236,227,91,188,27,45,
126,89,152,115,110,135,191,210,144,24,251,169,11,113,87,127,183,103,254,229,167,254,3,71,254,20,29,122,113,252,22,159,248,13,31,248,80,1,175,31,244,228,228,127,168,139,255,0,69,173,83,221,91,26,238,187,
48,189,65,178,215,253,68,71,155,116,63,192,190,213,79,251,118,127,238,90,127,224,52,127,225,64,6,129,243,95,191,253,112,155,255,0,69,181,81,7,2,182,180,45,118,115,122,223,45,175,250,137,122,91,32,254,
6,246,170,127,219,211,255,0,114,215,255,0,1,163,255,0,10,64,55,195,167,62,33,177,233,254,185,106,171,156,72,223,83,91,30,31,215,103,58,253,144,217,107,204,192,113,108,131,250,85,55,215,167,46,223,37,175,
95,249,246,143,252,40,234,1,161,31,244,247,255,0,174,19,127,232,182,170,32,241,91,90,30,185,49,190,111,150,215,253,68,167,139,120,255,0,231,155,123,85,49,175,220,17,247,45,127,240,26,63,240,166,2,91,31,
248,167,46,185,255,0,151,152,255,0,244,22,170,138,114,235,245,21,177,109,175,77,255,0,8,245,209,217,107,255,0,31,49,143,248,247,79,238,183,181,84,77,122,112,235,242,90,117,31,242,237,31,248,81,168,12,
241,1,219,175,94,127,215,103,254,117,87,117,107,235,250,236,227,92,188,27,45,120,153,199,54,209,250,253,42,167,246,236,255,0,221,180,255,0,192,104,255,0,194,128,41,238,163,117,92,254,221,159,251,150,159,
248,13,31,248,81,253,187,63,247,45,63,240,26,63,240,166,5,61,212,110,171,159,219,179,255,0,114,211,255,0,1,163,255,0,10,63,183,103,254,229,167,254,3,71,254,20,1,79,117,27,170,231,246,236,255,0,220,180,
255,0,192,104,255,0,194,143,237,217,255,0,185,105,255,0,128,209,255,0,133,0,83,221,87,52,19,155,231,255,0,174,18,255,0,232,182,163,251,118,124,253,219,95,252,5,143,252,42,230,133,174,204,111,95,228,181,
255,0,81,41,226,218,63,249,230,222,213,32,98,171,113,78,221,87,6,189,57,31,114,211,255,0,1,163,255,0,10,63,183,103,254,229,167,254,3,71,254,21,64,83,221,70,234,185,253,187,63,247,45,63,240,26,63,240,163,
251,118,127,238,90,127,224,52,127,225,64,20,183,113,87,53,67,254,133,167,255,0,215,3,255,0,163,30,151,251,122,224,127,13,175,254,3,71,254,21,115,83,215,38,251,30,159,242,218,243,1,255,0,151,116,255,0,
158,143,237,72,12,125,212,110,171,159,219,179,255,0,114,211,255,0,1,163,255,0,10,63,183,103,254,229,167,254,3,71,254,20,192,164,90,182,117,177,143,9,104,191,246,215,255,0,66,170,127,219,211,255,0,114,
215,255,0,1,163,255,0,10,216,214,117,217,135,133,52,118,219,107,243,121,191,242,238,159,222,250,84,129,205,134,226,144,181,93,254,221,159,251,150,159,248,13,31,248,80,117,219,143,238,90,127,224,52,127,
225,84,1,56,255,0,138,126,215,145,254,190,95,228,149,72,55,21,179,54,189,55,246,13,183,201,107,254,190,81,205,178,122,39,181,83,254,221,159,251,182,159,248,13,31,248,82,2,154,28,186,242,58,138,181,175,
159,248,158,222,127,215,119,254,117,34,107,211,171,175,201,107,212,127,203,180,127,225,86,53,237,118,97,174,94,13,150,188,76,195,155,104,253,126,148,1,142,91,131,87,181,211,139,245,255,0,174,16,255,0,
232,181,163,251,122,113,252,22,159,248,13,31,248,85,205,119,93,152,95,39,201,107,254,162,35,205,186,127,207,53,246,160,12,117,57,117,250,138,181,175,255,0,200,126,243,254,187,63,243,167,166,189,56,117,
249,45,58,143,249,118,143,252,42,214,191,174,206,53,187,193,178,215,137,156,127,199,180,126,191,74,0,169,160,255,0,199,252,159,245,194,111,253,22,213,68,31,165,109,104,90,244,230,245,190,75,95,245,18,
159,248,247,143,251,141,237,84,198,189,57,254,11,79,252,6,143,252,41,106,1,169,145,246,45,63,159,249,119,63,250,49,234,158,234,216,212,245,233,190,199,167,252,150,191,52,4,255,0,199,186,127,125,253,170,
159,246,236,255,0,220,180,255,0,192,104,255,0,194,152,20,247,81,186,174,127,110,207,253,203,79,252,6,143,252,40,254,221,159,251,150,159,248,13,31,248,83,2,158,234,55,85,207,237,217,255,0,185,105,255,0,
128,209,255,0,133,31,219,179,255,0,114,211,255,0,1,163,255,0,10,0,167,186,141,213,115,251,118,127,238,90,127,224,52,127,225,71,246,236,255,0,220,180,255,0,192,104,255,0,194,128,41,238,161,79,204,191,81,
87,63,183,103,254,229,167,254,3,71,254,20,38,189,56,117,249,45,58,255,0,207,180,127,225,72,6,248,128,255,0,196,246,243,145,254,185,255,0,157,85,221,91,26,254,187,56,214,239,6,203,95,150,102,28,219,161,
239,244,170,127,219,179,255,0,118,211,255,0,1,163,255,0,10,0,143,64,63,241,81,91,254,63,250,9,174,255,0,192,218,127,219,230,190,255,0,137,94,129,168,237,117,255,0,144,149,255,0,217,76,127,123,238,126,
245,55,103,191,92,96,116,205,113,26,54,175,53,198,187,110,140,182,225,91,57,219,2,41,232,123,129,93,183,129,244,255,0,183,75,125,255,0,18,191,15,234,91,89,121,212,175,254,203,229,253,239,185,251,212,221,
158,253,113,129,211,60,220,73,145,195,248,187,253,77,151,252,15,249,138,102,181,255,0,31,137,255,0,92,33,255,0,209,107,83,248,150,198,107,216,172,252,152,100,151,27,243,181,115,142,69,73,173,104,55,198,
238,61,182,119,45,251,136,135,17,159,238,45,73,70,77,21,111,251,2,251,254,124,174,191,239,217,163,251,2,251,254,124,174,191,239,209,160,10,148,85,191,236,11,239,249,242,186,255,0,191,70,143,236,11,239,
249,242,186,255,0,191,70,128,23,66,255,0,143,247,255,0,174,19,127,232,182,170,99,165,107,232,122,13,240,189,108,217,220,175,238,37,28,198,127,184,213,76,120,126,252,15,248,243,186,255,0,191,102,128,42,
81,86,255,0,176,47,191,231,202,235,254,253,26,63,176,47,191,231,202,235,254,253,26,0,93,8,98,253,255,0,235,132,223,250,45,170,152,233,90,250,30,131,124,47,95,54,119,35,247,18,142,99,63,243,205,170,144,
208,47,192,255,0,143,59,175,251,246,104,2,173,90,208,7,252,79,172,255,0,235,186,127,58,95,236,11,239,249,242,186,255,0,191,70,173,232,58,13,240,215,44,201,179,186,0,76,132,147,25,245,161,236,6,75,125,
230,250,154,42,227,104,23,219,219,253,14,235,169,255,0,150,102,147,251,2,251,254,124,174,191,239,209,160,5,135,254,64,23,95,245,241,23,254,130,245,78,181,225,208,47,134,129,115,254,135,115,147,60,71,30,
89,244,122,167,253,129,125,255,0,62,87,95,247,232,208,2,195,255,0,32,11,175,250,248,139,255,0,65,122,167,90,240,232,23,195,64,185,255,0,67,185,201,158,35,143,44,250,61,83,254,192,190,255,0,159,43,175,
251,246,104,1,96,255,0,144,5,215,253,124,69,255,0,160,189,82,97,145,91,16,120,126,251,251,6,228,125,142,231,62,124,71,30,89,244,122,164,116,11,226,63,227,202,235,254,253,154,16,14,215,127,227,249,127,
235,132,63,250,45,104,208,191,227,249,255,0,235,132,223,250,45,170,222,185,160,223,27,212,197,157,193,253,196,95,242,204,255,0,207,53,163,66,208,47,133,235,147,103,114,63,113,40,255,0,86,127,231,155,81,
208,12,129,210,138,180,52,11,224,63,227,202,235,254,253,154,95,236,11,239,249,242,186,255,0,191,70,128,42,81,86,255,0,176,47,191,231,202,235,254,253,26,63,176,47,191,231,202,235,254,253,26,0,169,69,91,
254,192,190,255,0,159,43,175,251,244,104,254,192,190,255,0,159,43,175,251,244,104,2,165,21,111,251,2,251,254,124,174,191,239,209,163,251,2,251,254,124,174,191,239,209,160,10,149,114,31,249,0,93,127,215,
196,95,250,11,210,127,96,95,127,207,149,215,253,251,53,110,29,2,251,251,6,228,125,142,227,38,120,136,30,89,254,235,208,6,79,74,42,223,246,5,247,252,249,93,127,223,163,71,246,5,247,252,249,93,127,223,163,
64,21,40,60,213,191,236,11,239,249,242,186,255,0,191,70,143,236,11,239,249,242,186,255,0,191,70,128,42,40,249,151,234,42,222,191,255,0,33,219,223,250,238,255,0,206,149,116,11,226,203,254,135,117,212,127,
203,51,86,181,237,6,248,235,151,132,89,221,21,51,49,7,203,60,243,75,168,25,52,85,191,236,11,239,249,242,186,255,0,191,70,143,236,11,239,249,242,186,255,0,191,70,152,21,7,222,95,168,171,122,255,0,252,135,
111,127,235,187,255,0,58,85,208,47,139,175,250,29,215,81,255,0,44,205,90,215,180,11,230,214,239,25,108,238,8,51,49,24,140,243,205,0,100,208,221,42,223,246,5,247,252,249,93,127,223,163,72,116,11,226,63,
227,202,235,254,253,154,0,118,187,255,0,31,203,255,0,92,33,255,0,209,107,84,235,95,92,208,47,154,245,118,217,220,31,220,68,56,140,255,0,113,106,159,246,5,247,252,249,93,127,223,163,64,11,161,127,199,243,
127,215,9,191,244,91,85,32,56,173,141,15,65,190,23,175,155,59,144,60,137,122,198,127,184,213,72,104,23,192,127,199,157,215,253,251,52,186,128,190,30,227,196,54,63,245,217,106,163,15,153,190,166,181,188,
63,160,95,46,191,100,198,206,232,40,148,28,249,102,170,182,129,124,25,191,208,238,186,159,249,102,104,234,1,160,241,124,255,0,245,194,111,253,22,213,76,125,218,215,208,180,11,225,122,228,217,220,129,228,
74,57,140,255,0,207,54,170,67,64,191,199,252,121,221,127,223,179,79,168,14,182,255,0,145,114,235,254,190,99,255,0,208,90,169,175,222,95,168,173,123,125,2,248,120,122,228,125,146,227,113,185,140,227,203,
63,221,106,168,190,31,191,222,191,232,119,93,71,252,179,52,0,221,124,127,196,250,243,254,187,191,243,170,160,98,181,181,237,6,249,181,203,194,44,238,72,51,57,4,70,125,106,167,246,5,247,252,249,93,127,
223,163,66,2,165,21,111,251,2,251,254,124,174,191,239,209,163,251,2,251,254,124,174,191,239,209,160,10,148,85,191,236,11,239,249,242,186,255,0,191,70,143,236,11,239,249,242,186,255,0,191,70,128,42,81,
86,255,0,176,47,191,231,202,235,254,253,26,63,176,47,191,231,202,235,254,253,26,0,169,87,52,33,139,247,255,0,174,19,127,232,182,164,254,192,190,255,0,159,43,175,251,244,106,230,135,160,223,11,215,205,
157,200,253,196,163,152,207,252,243,106,0,200,29,40,171,67,64,191,3,254,60,238,191,239,217,165,254,192,190,255,0,159,43,175,251,244,104,2,165,21,111,251,2,251,254,124,174,191,239,209,163,251,2,251,254,
124,174,191,239,209,160,10,149,115,82,255,0,143,45,63,254,189,207,254,140,122,79,236,11,239,249,242,186,255,0,191,70,174,106,90,5,247,216,180,255,0,244,59,147,182,2,15,238,207,31,188,106,0,200,162,173,
255,0,96,95,127,207,149,215,253,250,52,127,96,95,127,207,149,215,253,250,52,1,79,28,86,206,181,255,0,34,150,139,255,0,109,191,244,42,165,253,129,125,255,0,62,87,95,247,236,214,190,179,161,95,31,10,104,
234,45,46,11,47,155,144,35,60,124,212,152,28,237,24,171,127,216,23,223,243,229,117,255,0,126,141,31,216,23,223,243,229,117,255,0,126,141,48,22,111,249,0,90,255,0,215,196,191,250,10,85,58,214,155,64,190,
254,193,182,31,99,185,207,159,33,35,203,62,137,85,63,176,47,191,231,202,235,254,253,26,72,10,139,247,151,234,42,222,191,255,0,33,235,207,250,238,255,0,206,149,124,63,126,89,127,208,238,122,143,249,102,
106,214,189,160,223,54,185,120,69,157,203,6,153,136,34,51,235,76,12,147,210,174,107,191,241,254,159,245,194,31,253,22,180,135,195,247,228,127,199,157,215,253,251,53,115,92,208,111,141,234,226,206,229,
191,113,16,226,51,253,197,160,12,133,251,203,245,21,111,95,255,0,144,237,239,253,119,127,231,74,190,31,190,46,191,232,87,93,71,252,179,53,107,93,208,47,155,92,188,43,103,112,67,76,228,31,44,250,209,212,
10,186,23,252,127,55,253,112,155,255,0,69,181,83,29,43,95,67,208,111,150,249,247,89,220,143,220,74,63,213,159,238,53,83,30,31,191,199,252,121,221,127,223,179,64,11,169,243,101,167,255,0,215,185,255,0,
209,143,84,235,91,82,208,111,190,199,167,255,0,161,220,157,176,16,113,25,227,247,141,85,63,176,47,191,231,202,235,254,253,26,0,169,69,91,254,192,190,255,0,159,43,175,251,244,104,254,192,190,255,0,159,
43,175,251,244,104,2,165,21,111,251,2,251,254,124,174,191,239,209,163,251,2,251,254,124,174,191,239,209,160,10,148,85,191,236,11,239,249,242,186,255,0,191,70,143,236,11,239,249,242,186,255,0,191,70,128,
42,80,62,242,253,69,91,254,192,190,255,0,159,43,175,251,244,105,87,64,190,46,191,232,119,93,71,252,179,52,0,154,255,0,252,135,111,127,235,187,255,0,58,169,90,218,246,131,124,218,221,227,45,157,193,6,102,
35,17,158,121,170,159,216,23,223,243,229,117,255,0,126,141,0,51,64,31,241,81,91,253,79,254,130,107,189,240,78,151,123,168,203,125,246,79,10,199,226,109,140,187,139,137,79,217,254,246,63,213,186,253,238,
122,231,238,215,21,163,105,23,118,250,245,187,73,109,50,42,228,146,200,70,56,53,219,120,31,64,254,219,150,251,254,36,122,246,179,229,178,243,166,205,229,249,89,221,247,254,70,206,113,199,78,135,173,84,
9,103,15,226,214,34,27,31,248,31,127,165,55,92,98,111,35,229,191,212,69,223,254,153,173,59,197,223,234,108,127,224,127,210,153,174,12,94,71,255,0,92,34,255,0,209,107,83,212,162,166,227,253,230,252,232,
220,125,91,243,160,28,209,64,6,227,234,223,157,27,143,171,126,116,81,64,23,116,23,97,124,255,0,51,127,168,155,191,253,51,106,164,25,177,247,155,243,171,154,15,55,239,255,0,92,38,255,0,209,109,84,148,241,
64,11,184,250,183,231,70,227,234,223,157,20,80,5,237,1,202,223,191,39,253,68,189,255,0,233,155,85,29,204,123,183,231,87,52,47,248,254,111,250,225,55,254,139,106,164,15,20,128,93,199,213,191,58,185,225,
247,35,94,179,229,191,215,39,127,113,84,234,222,129,255,0,33,219,47,250,238,159,206,134,5,105,28,179,183,44,57,61,233,187,143,247,155,243,161,142,24,253,77,6,152,23,45,221,135,135,238,190,102,255,0,95,
23,127,103,170,123,155,213,191,58,183,1,255,0,138,126,235,254,190,34,254,79,85,9,197,0,92,183,118,30,31,186,249,155,253,124,93,253,158,169,239,39,31,49,252,234,220,31,242,47,221,127,215,196,95,201,234,
149,0,94,134,70,62,30,185,249,155,254,62,34,239,254,203,213,61,204,7,222,111,206,173,194,127,226,159,186,255,0,174,241,127,232,47,85,15,221,165,160,23,181,233,9,189,143,175,250,136,187,255,0,211,53,164,
208,93,133,251,124,205,254,162,110,255,0,244,205,169,53,223,248,254,79,250,225,15,254,139,90,52,19,155,231,255,0,174,19,127,232,182,163,160,20,195,55,171,126,116,110,62,173,249,210,15,187,74,58,80,1,184,
250,183,231,70,227,234,223,157,20,83,0,220,125,91,243,163,113,245,111,206,138,40,0,220,125,91,243,163,113,245,111,206,138,40,0,203,103,239,55,231,87,161,144,255,0,194,61,117,215,254,62,34,239,254,203,
213,28,213,200,15,252,72,46,191,235,226,47,253,5,233,1,79,113,245,111,206,141,199,213,191,58,40,166,1,184,250,183,231,70,227,234,223,157,20,80,2,171,48,145,126,102,234,59,213,189,125,155,251,118,243,230,
111,245,239,223,222,169,169,203,47,212,85,173,124,255,0,196,250,243,254,187,191,243,165,212,10,187,143,171,126,116,110,35,187,126,116,81,76,5,70,96,235,243,55,81,222,173,235,236,223,219,183,159,51,127,
175,126,254,245,77,78,93,126,162,173,120,131,141,122,247,254,187,63,243,160,10,187,143,247,155,243,160,179,109,251,205,249,209,72,199,138,0,189,175,59,125,189,126,102,255,0,81,15,127,250,102,181,75,113,
254,243,126,117,115,95,249,111,211,254,184,69,255,0,162,214,169,208,5,221,9,152,95,55,204,223,234,38,239,255,0,76,218,169,43,55,247,155,243,171,154,15,55,207,255,0,92,38,255,0,209,109,84,129,226,144,23,
124,60,204,60,67,99,243,55,250,229,239,85,25,152,200,223,51,117,61,234,207,135,191,228,97,177,255,0,174,203,85,88,225,155,234,104,234,5,221,5,216,95,191,204,223,234,38,239,255,0,76,218,169,7,111,239,55,
231,87,52,35,254,158,255,0,245,194,111,253,22,213,68,116,250,208,5,235,103,99,225,171,143,153,191,227,230,62,255,0,236,181,84,86,109,203,243,55,81,222,173,219,127,200,181,117,255,0,95,49,255,0,232,45,
84,208,229,215,234,41,129,115,196,12,199,94,188,249,155,253,115,247,247,170,123,143,171,126,117,107,95,63,241,61,189,255,0,174,207,252,234,168,164,1,184,250,183,231,70,227,234,223,157,20,83,0,220,125,
91,243,163,113,245,111,206,138,40,0,220,125,91,243,163,113,245,111,206,138,40,0,220,125,91,243,171,218,3,149,191,126,79,250,137,123,255,0,211,54,170,53,115,66,255,0,143,230,255,0,174,19,127,232,182,164,
5,61,204,123,183,231,70,227,234,223,157,32,60,82,211,0,220,125,91,243,163,113,245,111,206,138,40,0,220,217,234,223,157,92,213,29,141,150,159,203,127,199,185,239,255,0,77,30,169,142,149,115,82,255,0,143,
61,59,254,184,31,253,24,244,128,167,184,255,0,121,191,58,55,31,86,252,232,20,83,0,37,191,188,223,157,108,235,110,199,194,90,47,204,223,242,215,191,251,85,140,77,108,107,124,120,71,69,255,0,182,223,250,
21,32,49,247,31,86,252,232,37,191,188,223,157,20,19,205,48,46,76,237,255,0,8,253,175,204,223,235,229,239,254,202,85,61,199,251,205,249,213,201,191,228,95,181,255,0,175,137,127,244,20,170,96,210,1,85,155,
114,252,205,212,119,171,126,32,102,58,245,231,204,223,235,159,191,189,83,83,243,175,212,85,175,16,113,175,94,255,0,215,119,254,116,192,170,93,136,251,205,249,213,221,121,216,223,39,204,223,234,33,239,
255,0,76,214,168,19,197,94,215,184,191,79,250,225,15,254,139,90,0,168,174,119,143,153,186,142,245,111,196,14,199,93,188,249,155,253,115,247,247,170,106,114,235,245,21,107,196,7,254,39,183,159,245,217,
255,0,157,32,29,160,187,125,185,254,102,255,0,81,55,127,250,102,213,76,51,99,239,55,231,87,52,19,155,231,255,0,174,18,255,0,232,182,170,32,224,80,5,237,77,216,217,105,223,51,127,168,61,255,0,233,163,213,
61,199,61,91,243,171,154,167,22,90,119,253,123,159,253,24,245,76,28,211,0,220,125,91,243,163,113,245,111,206,138,40,0,220,125,91,243,163,113,245,111,206,138,40,0,220,125,91,243,163,113,245,111,206,138,
40,0,220,71,118,252,233,81,152,58,252,205,212,119,164,161,78,93,126,162,128,46,107,236,223,219,183,159,51,127,175,126,254,245,79,39,251,205,249,213,175,16,28,107,215,159,245,221,255,0,157,85,160,11,26,
3,55,252,36,54,255,0,49,239,223,216,215,125,224,125,3,251,114,91,239,248,145,248,131,88,242,153,121,211,38,242,252,172,238,251,255,0,187,124,231,28,116,232,122,215,3,160,31,248,168,173,255,0,31,228,107,
190,240,54,129,253,183,53,241,254,195,241,6,179,229,186,243,166,205,229,249,89,207,223,253,219,103,56,227,167,67,214,170,36,200,227,124,74,176,180,54,94,116,146,71,247,241,177,3,103,167,184,167,235,112,
88,125,178,63,244,155,175,245,17,116,128,127,113,127,218,170,222,47,255,0,83,99,255,0,3,254,148,221,112,255,0,166,167,253,112,139,255,0,69,173,75,69,7,147,167,255,0,207,213,231,254,3,175,255,0,21,71,147,
167,255,0,207,213,231,254,3,175,255,0,21,84,243,69,43,1,115,201,211,255,0,231,234,243,255,0,1,215,255,0,138,163,201,211,255,0,231,234,243,255,0,1,215,255,0,138,170,116,81,96,54,52,40,44,62,220,216,185,
188,63,184,151,254,93,199,247,27,253,170,164,32,211,241,255,0,31,87,159,248,14,191,252,85,46,133,255,0,31,207,255,0,92,38,255,0,209,109,84,148,228,81,96,46,249,58,127,252,253,94,127,224,58,255,0,241,84,
121,58,127,252,253,94,127,224,58,255,0,241,85,78,138,44,6,198,131,13,128,190,127,244,139,175,245,18,245,183,95,249,230,223,237,85,63,35,79,199,252,125,94,127,224,58,255,0,241,84,104,95,241,252,223,245,
194,111,253,22,213,76,116,164,5,207,39,79,255,0,159,171,207,252,7,95,254,42,173,232,16,216,13,114,207,253,34,232,159,57,49,155,117,245,255,0,122,178,42,222,129,255,0,33,219,47,250,238,159,206,134,180,
1,210,65,167,239,111,244,171,206,191,243,238,191,252,85,39,147,167,255,0,207,213,231,254,3,175,255,0,21,84,219,239,55,212,209,78,192,108,65,6,159,253,129,115,254,147,119,143,62,63,249,96,188,112,255,0,
237,85,63,35,79,39,254,62,110,255,0,240,29,127,248,170,72,15,252,83,247,95,245,241,23,254,130,245,80,26,44,6,196,16,105,255,0,216,23,63,233,55,120,243,227,255,0,150,11,199,15,254,213,83,242,52,252,255,
0,199,213,215,254,3,143,254,42,146,3,159,15,221,127,215,196,95,250,11,213,64,104,176,27,16,193,167,255,0,96,92,226,234,235,253,124,124,249,11,232,255,0,237,85,63,35,79,31,242,243,119,255,0,128,235,255,
0,197,82,64,127,226,159,186,255,0,175,136,191,244,23,170,135,238,210,3,99,93,135,79,55,209,230,230,236,126,226,46,144,47,247,23,253,170,52,24,116,241,124,223,233,55,127,234,37,235,2,255,0,113,191,218,
170,122,239,252,127,47,253,112,135,255,0,69,173,26,17,255,0,79,127,250,225,55,254,139,106,58,0,121,26,126,63,227,230,239,255,0,1,215,255,0,138,163,200,211,255,0,231,234,243,255,0,1,215,255,0,138,170,42,
120,167,102,157,128,185,228,233,255,0,243,245,121,255,0,128,235,255,0,197,81,228,233,255,0,243,245,121,255,0,128,235,255,0,197,85,58,40,176,23,60,157,63,254,126,175,63,240,29,127,248,170,60,157,63,254,
126,175,63,240,29,127,248,170,167,69,22,2,231,147,167,255,0,207,213,231,254,3,175,255,0,21,71,147,167,255,0,207,213,231,254,3,175,255,0,21,84,232,162,192,92,242,52,255,0,249,250,188,255,0,192,117,255,
0,226,170,228,16,233,227,64,185,255,0,72,186,199,159,30,127,209,215,251,175,254,213,99,213,200,127,228,1,117,255,0,95,17,127,232,47,73,128,121,58,127,252,253,94,127,224,58,255,0,241,84,121,58,127,252,
253,94,127,224,58,255,0,241,85,78,138,118,2,231,147,167,255,0,207,213,231,254,3,175,255,0,21,71,145,167,255,0,207,213,231,254,3,175,255,0,21,84,232,162,192,92,72,52,253,235,254,149,119,212,127,203,186,
255,0,241,85,111,95,131,79,254,220,188,255,0,73,186,207,156,217,197,186,250,255,0,189,89,8,126,113,245,21,111,95,255,0,144,237,239,253,119,127,231,75,168,11,228,233,255,0,243,245,121,255,0,128,235,255,
0,197,81,228,233,255,0,243,245,121,255,0,128,235,255,0,197,85,58,41,216,11,139,6,158,93,127,210,175,58,143,249,119,95,254,42,173,107,214,250,127,246,229,230,235,171,176,124,230,207,238,23,142,127,222,
172,149,251,195,234,42,214,190,127,226,125,123,255,0,93,223,249,210,229,1,222,70,159,255,0,63,87,159,248,14,191,252,85,33,131,79,199,252,125,94,127,224,58,255,0,241,85,82,131,210,157,128,216,215,45,236,
62,218,155,174,174,215,247,17,127,203,5,254,226,255,0,181,84,252,141,63,254,126,175,63,240,29,127,248,170,53,211,254,158,159,245,194,31,253,22,181,78,139,1,177,160,193,167,139,215,255,0,73,186,255,0,81,
47,88,23,251,141,254,213,82,242,52,255,0,249,250,187,255,0,192,117,255,0,226,169,116,47,248,254,111,250,225,55,254,139,106,162,14,105,91,80,54,188,61,6,158,53,251,63,244,155,173,222,104,192,54,235,255,
0,197,85,55,131,79,222,223,233,87,125,79,252,187,175,255,0,21,73,225,239,249,24,108,127,235,178,213,71,63,57,250,154,58,129,177,160,193,167,139,230,197,205,215,250,137,127,229,221,127,231,155,127,181,
84,252,141,63,111,252,125,93,255,0,224,58,255,0,241,84,104,39,253,57,255,0,235,132,223,250,45,170,136,60,83,176,27,86,246,246,31,240,143,93,127,164,222,109,251,76,121,63,103,31,221,111,246,170,164,112,
105,251,215,253,42,239,168,255,0,151,117,255,0,226,169,45,206,60,57,117,255,0,95,49,255,0,232,45,84,215,239,47,212,82,229,3,91,95,131,79,254,220,188,205,205,214,124,230,200,251,58,250,255,0,189,85,124,
141,63,254,126,175,63,240,29,127,248,170,111,136,15,252,79,111,63,235,187,255,0,58,170,40,176,23,60,157,63,254,126,175,63,240,29,127,248,170,60,157,63,254,126,175,63,240,29,127,248,170,167,69,59,1,115,
201,211,255,0,231,234,243,255,0,1,215,255,0,138,163,201,211,255,0,231,234,243,255,0,1,215,255,0,138,170,116,81,96,46,121,58,127,252,253,94,127,224,58,255,0,241,84,121,58,127,252,253,94,127,224,58,255,
0,241,85,78,138,44,5,207,39,79,255,0,159,171,207,252,7,95,254,42,174,104,48,216,11,231,255,0,72,186,255,0,81,47,91,117,255,0,158,109,254,213,99,213,205,11,254,63,155,254,184,77,255,0,162,218,149,128,60,
141,63,31,241,245,121,255,0,128,235,255,0,197,81,228,233,255,0,243,245,121,255,0,128,235,255,0,197,85,49,210,138,118,2,231,147,167,255,0,207,213,231,254,3,175,255,0,21,71,145,167,255,0,207,213,231,254,
3,175,255,0,21,84,232,162,192,92,16,105,255,0,243,243,119,255,0,128,235,255,0,197,85,205,82,13,60,217,105,255,0,233,55,120,242,14,63,112,188,252,239,254,213,99,19,87,53,51,139,45,59,254,189,207,254,140,
122,44,2,249,58,127,252,253,94,127,224,58,255,0,241,84,121,58,127,252,253,94,127,224,58,255,0,241,85,78,138,44,5,191,35,79,255,0,159,171,191,252,7,95,254,42,182,117,168,108,15,132,244,124,220,93,99,247,
184,62,64,57,249,191,222,174,107,56,53,179,173,127,200,165,162,255,0,219,111,253,10,144,20,252,141,63,254,126,111,63,240,29,127,248,170,79,35,79,255,0,159,171,191,252,7,95,254,42,170,82,19,138,118,3,102,
104,52,255,0,248,71,237,191,210,110,177,231,201,255,0,44,23,158,19,253,170,167,228,105,255,0,243,245,121,255,0,128,235,255,0,197,81,55,252,128,45,127,235,226,95,253,5,42,157,36,128,184,150,250,121,117,
255,0,74,188,235,255,0,62,235,255,0,197,85,173,122,11,15,237,203,204,220,222,6,243,155,35,236,227,142,127,222,172,144,126,117,250,138,183,175,255,0,200,118,243,254,187,191,243,167,96,3,111,167,227,254,
62,175,63,240,29,120,255,0,199,170,238,187,5,135,219,151,55,55,131,247,17,127,203,184,254,226,255,0,181,88,204,112,42,238,187,255,0,31,201,255,0,92,33,255,0,209,107,71,40,11,28,26,127,152,191,233,87,157,
71,252,187,175,255,0,21,86,181,235,123,3,174,94,127,164,221,6,243,159,32,64,190,191,239,86,66,253,229,250,138,181,175,159,248,158,222,127,215,119,254,116,172,5,237,6,13,60,95,63,250,77,209,253,204,189,
96,95,238,55,251,85,79,236,250,126,63,227,234,243,255,0,1,215,255,0,138,163,66,255,0,143,231,255,0,174,19,127,232,182,170,64,225,104,176,27,26,156,22,31,99,211,255,0,210,111,63,212,28,127,163,142,126,
119,255,0,106,170,121,58,127,252,253,94,127,224,58,255,0,241,84,106,95,241,229,167,255,0,215,185,255,0,209,143,84,233,216,11,158,78,159,255,0,63,87,159,248,14,191,252,85,30,78,159,255,0,63,87,159,248,
14,191,252,85,83,162,139,1,115,201,211,255,0,231,234,243,255,0,1,215,255,0,138,163,201,211,255,0,231,234,243,255,0,1,215,255,0,138,170,116,81,96,46,121,58,127,252,253,94,127,224,58,255,0,241,84,121,58,
127,252,253,94,127,224,58,255,0,241,85,78,138,44,5,207,39,79,255,0,159,171,207,252,7,95,254,42,133,131,79,46,191,233,87,157,71,252,187,175,255,0,21,84,232,95,188,62,162,142,80,53,181,235,123,15,237,203,
205,215,87,96,249,205,145,246,117,245,255,0,122,170,249,26,127,252,253,94,127,224,58,255,0,241,84,221,124,255,0,196,250,243,254,187,191,243,53,86,139,1,163,163,69,102,186,237,191,151,61,195,63,56,13,8,
80,120,61,78,227,93,54,131,109,166,220,205,117,253,161,123,170,89,237,97,229,253,142,208,79,191,174,119,101,215,24,227,29,115,147,92,134,129,255,0,35,21,191,212,255,0,232,38,187,239,3,107,255,0,216,146,
223,127,196,243,196,26,63,152,235,198,153,15,153,230,227,119,223,249,211,24,207,29,122,154,184,147,35,139,241,45,186,220,71,100,30,120,224,251,252,184,110,121,30,128,212,154,222,153,9,187,143,254,38,22,
163,247,17,117,87,254,226,255,0,179,85,252,93,204,54,95,240,63,233,77,214,255,0,227,242,63,250,225,23,254,139,90,151,171,40,6,153,15,253,4,108,255,0,239,153,63,248,154,63,179,33,255,0,160,133,159,253,
243,39,255,0,19,84,232,160,11,159,217,144,255,0,208,66,207,254,249,147,255,0,137,163,251,50,31,250,8,89,255,0,223,50,127,241,53,78,138,0,216,208,244,200,69,243,127,196,194,213,191,113,47,69,147,254,121,
183,251,53,76,105,112,133,255,0,144,133,159,253,243,39,255,0,19,70,133,255,0,31,239,255,0,92,37,255,0,209,109,84,148,82,2,239,246,100,63,244,16,179,255,0,190,100,255,0,226,104,254,204,135,254,130,22,127,
247,204,159,252,77,83,163,173,48,54,52,45,50,31,182,191,252,76,45,91,247,18,244,89,63,184,223,236,213,63,236,184,66,255,0,200,66,207,254,249,147,255,0,137,163,66,255,0,143,230,255,0,174,19,127,232,182,
170,74,56,165,212,11,191,217,144,255,0,208,66,207,254,249,147,255,0,137,171,90,6,153,15,246,229,159,252,76,45,91,247,203,192,89,57,231,253,218,201,171,122,7,252,135,108,191,235,186,127,58,37,176,15,125,
42,16,205,255,0,19,11,62,167,248,100,255,0,226,105,191,217,144,255,0,208,66,207,254,249,147,255,0,137,170,108,62,118,250,209,76,13,136,52,168,70,131,114,63,180,45,127,215,198,115,182,79,71,255,0,102,169,
127,101,193,255,0,65,11,63,251,230,79,254,38,150,14,60,61,115,255,0,93,226,254,79,84,232,3,98,13,42,31,236,27,145,253,161,107,254,190,51,157,178,122,63,251,53,79,251,54,223,63,242,16,179,227,253,153,63,
248,154,32,227,195,215,63,245,222,47,253,5,234,152,233,64,27,16,233,112,255,0,96,92,15,237,11,94,103,143,157,178,127,117,255,0,217,170,103,76,135,254,130,54,127,247,204,159,252,77,22,231,254,41,235,159,
250,239,23,242,122,165,140,45,32,54,117,189,42,22,190,79,248,152,90,47,238,34,224,135,254,226,255,0,179,70,133,165,194,47,155,254,38,22,167,48,74,48,22,79,238,55,251,53,79,93,255,0,143,248,255,0,235,132,
95,250,45,104,208,56,190,127,250,225,47,254,139,106,58,0,159,217,112,15,249,136,90,127,223,50,127,241,52,191,217,144,255,0,208,66,207,254,249,147,255,0,137,170,106,120,162,152,23,63,179,33,255,0,160,133,
159,253,243,39,255,0,19,71,246,100,63,244,16,179,255,0,190,100,255,0,226,106,157,20,1,115,251,50,31,250,8,89,255,0,223,50,127,241,52,127,102,67,255,0,65,11,63,251,230,79,254,38,169,209,64,23,63,179,33,
255,0,160,133,159,253,243,39,255,0,19,71,246,100,63,244,16,179,255,0,190,100,255,0,226,106,157,20,1,112,105,112,147,255,0,33,11,63,251,230,79,254,38,174,65,166,67,253,129,115,255,0,19,11,95,245,241,243,
182,78,56,127,246,107,28,213,187,126,60,63,115,255,0,95,17,127,232,47,73,128,191,217,144,255,0,208,66,207,254,249,147,255,0,137,163,251,50,31,250,8,89,255,0,223,50,127,241,53,78,138,96,92,254,204,135,
254,130,22,127,247,204,159,252,77,31,217,144,255,0,208,66,207,254,249,147,255,0,137,170,116,80,5,196,211,33,46,191,241,49,180,235,253,217,63,248,154,181,175,105,176,255,0,110,94,127,196,194,213,115,51,
28,21,147,142,127,221,172,149,251,203,245,21,107,196,28,235,215,159,245,217,255,0,157,46,160,59,251,50,31,250,8,89,255,0,223,50,127,241,52,127,102,67,255,0,65,11,63,251,230,79,254,38,169,209,76,11,139,
166,66,89,127,226,97,103,212,127,12,159,252,77,91,215,116,184,91,92,188,255,0,137,133,162,159,57,206,8,126,57,255,0,118,178,23,239,175,212,85,175,16,15,248,159,94,127,215,103,254,116,117,184,14,254,204,
135,254,130,22,127,247,204,159,252,77,33,211,32,35,254,66,22,127,247,204,159,252,77,84,20,30,148,1,177,173,233,112,181,242,127,196,194,213,127,113,23,85,147,254,121,175,251,53,79,251,50,31,250,8,89,255,
0,223,50,127,241,52,107,220,223,71,255,0,92,34,255,0,209,107,84,197,0,108,104,90,100,63,109,127,248,152,90,183,238,37,24,10,255,0,243,205,191,217,170,99,76,132,15,249,8,218,127,223,50,127,241,52,104,28,
95,63,253,112,151,255,0,69,181,83,94,148,186,129,175,225,253,50,17,175,217,31,237,11,86,196,195,128,175,207,254,59,85,31,76,132,59,127,196,198,211,175,247,100,255,0,226,105,60,59,199,136,44,127,235,178,
213,70,251,205,245,52,117,3,99,66,210,225,23,173,255,0,19,11,86,204,18,142,22,79,238,55,251,53,79,251,46,0,63,228,33,105,255,0,124,201,255,0,196,209,160,241,125,39,253,112,151,255,0,69,181,81,3,34,128,
54,173,244,200,127,225,30,186,255,0,137,133,174,62,211,31,59,95,251,173,254,205,84,93,46,29,235,255,0,19,11,62,163,248,100,255,0,226,105,45,255,0,228,92,186,255,0,175,152,255,0,244,22,170,104,48,235,215,
168,166,180,3,91,94,211,33,254,219,188,255,0,137,133,170,230,102,56,42,254,191,238,213,95,236,200,127,232,33,103,255,0,124,201,255,0,196,210,107,255,0,242,29,188,255,0,174,239,252,234,165,37,176,23,63,
179,33,255,0,160,133,159,253,243,39,255,0,19,71,246,100,63,244,16,179,255,0,190,100,255,0,226,106,157,20,192,185,253,153,15,253,4,44,255,0,239,153,63,248,154,63,179,33,255,0,160,133,159,253,243,39,255,
0,19,84,232,160,11,159,217,144,255,0,208,66,207,254,249,147,255,0,137,163,251,50,31,250,8,89,255,0,223,50,127,241,53,78,138,0,185,253,153,15,253,4,44,255,0,239,153,63,248,154,185,161,105,144,253,181,255,
0,226,97,106,223,184,151,162,201,253,198,255,0,102,177,241,154,185,161,127,199,243,127,215,9,191,244,91,82,96,31,217,112,133,255,0,144,133,159,253,243,39,255,0,19,71,246,100,63,244,16,179,255,0,190,100,
255,0,226,106,146,142,41,105,129,115,251,50,31,250,8,89,255,0,223,50,127,241,52,127,102,67,255,0,65,11,63,251,230,79,254,38,169,209,64,23,63,178,225,39,254,66,22,127,247,204,159,252,77,92,212,244,168,
77,158,159,255,0,19,11,65,136,15,37,100,231,231,127,246,107,28,213,205,83,155,29,63,254,189,207,254,140,122,0,63,179,33,255,0,160,133,159,253,243,39,255,0,19,71,246,100,63,244,16,179,255,0,190,100,255,
0,226,106,157,20,1,115,251,50,31,250,8,218,127,223,50,127,241,53,177,173,105,144,255,0,194,41,163,255,0,167,90,174,223,55,4,171,224,252,223,238,215,55,91,26,215,62,17,209,127,237,175,254,133,83,212,10,
127,217,144,255,0,208,66,207,254,249,147,255,0,137,160,105,176,231,254,66,54,159,247,204,159,252,77,83,29,40,170,3,98,109,46,31,236,11,111,248,152,90,255,0,175,144,231,107,243,194,127,179,84,255,0,179,
33,255,0,160,133,159,253,243,39,255,0,19,68,255,0,242,47,219,127,215,121,127,146,85,49,192,165,16,46,174,151,9,101,255,0,137,133,159,95,238,201,255,0,196,213,157,123,76,132,235,151,135,251,66,213,79,156,
252,21,147,142,127,221,172,149,31,58,253,106,222,191,255,0,33,219,207,250,236,255,0,204,211,1,78,151,9,95,249,8,89,255,0,223,50,127,241,53,115,92,211,33,55,203,255,0,19,11,85,253,196,93,86,79,249,230,
191,236,214,49,233,253,42,238,187,255,0,31,233,255,0,92,34,255,0,209,107,64,2,105,144,151,95,248,152,89,245,254,236,159,252,77,90,215,180,200,78,185,121,157,66,213,115,51,100,109,126,57,255,0,118,178,
83,253,98,253,69,91,215,255,0,228,59,121,255,0,93,223,249,210,2,238,135,166,66,47,159,254,38,22,173,251,137,122,43,255,0,207,54,255,0,102,169,141,46,28,127,200,66,207,254,249,147,255,0,137,163,66,255,
0,143,246,255,0,174,18,255,0,232,182,170,56,227,250,80,6,206,167,166,67,246,61,63,254,38,22,163,16,28,101,100,231,247,143,254,205,84,254,204,135,254,130,22,127,247,204,159,252,77,26,159,252,121,105,255,
0,245,192,255,0,232,199,170,116,32,46,127,102,67,255,0,65,11,63,251,230,79,254,38,143,236,200,127,232,33,103,255,0,124,201,255,0,196,213,58,41,129,115,251,50,31,250,8,89,255,0,223,50,127,241,52,127,102,
67,255,0,65,11,63,251,230,79,254,38,169,209,64,23,63,179,33,255,0,160,133,159,253,243,39,255,0,19,71,246,100,63,244,16,179,255,0,190,100,255,0,226,106,157,20,1,115,251,50,31,250,8,89,255,0,223,50,127,
241,52,46,153,9,101,255,0,137,133,159,81,252,50,127,241,53,78,133,251,235,245,20,1,175,175,105,144,157,114,240,255,0,104,90,175,239,152,224,172,156,115,254,237,84,254,204,135,254,130,22,127,247,204,159,
252,77,55,196,3,254,39,183,159,245,217,255,0,157,85,160,13,29,30,198,40,117,219,118,91,203,121,49,159,149,67,228,240,125,69,118,126,10,241,52,126,29,150,251,127,136,53,205,15,206,101,192,211,162,15,231,
99,119,222,253,226,116,207,29,122,158,149,193,232,3,254,42,43,127,199,249,26,245,15,133,9,175,180,154,167,246,43,120,61,70,244,243,191,183,77,150,79,222,219,229,253,164,31,124,237,246,207,106,168,147,
35,205,124,93,254,166,199,254,7,252,197,71,173,182,47,35,255,0,174,16,255,0,232,181,171,218,190,147,30,179,4,1,167,48,152,119,127,6,236,231,255,0,213,91,31,16,254,14,93,120,58,125,37,175,117,11,115,253,
173,166,65,127,15,148,133,177,19,12,40,108,227,159,151,160,169,148,93,198,142,63,117,27,170,247,252,34,75,255,0,63,223,249,8,255,0,141,31,240,137,47,252,255,0,127,228,35,254,52,236,194,232,163,186,141,
213,123,254,17,37,255,0,159,239,252,132,127,198,131,225,21,63,242,253,255,0,144,143,248,209,102,59,141,208,143,250,115,255,0,215,9,127,244,91,85,32,220,87,95,240,187,224,253,215,196,31,26,91,232,250,126,
163,2,221,94,71,40,70,153,10,160,196,108,78,72,201,232,15,106,231,219,193,234,142,203,246,239,186,72,255,0,84,127,198,150,161,114,142,234,55,85,239,248,68,151,254,127,191,242,17,255,0,26,15,132,148,255,
0,203,247,254,66,255,0,235,211,179,21,208,221,8,255,0,167,63,253,112,151,255,0,69,181,81,86,226,187,15,133,191,8,46,124,127,227,91,109,30,195,80,129,110,175,35,149,80,204,133,99,24,141,137,201,25,236,
13,96,63,131,146,55,101,251,127,221,56,255,0,84,127,198,149,152,202,27,170,214,128,223,241,60,179,255,0,174,233,252,234,67,225,37,63,242,253,255,0,144,143,248,212,218,119,134,22,219,80,130,65,123,184,
164,138,64,242,143,60,253,104,113,97,115,45,155,14,223,83,70,234,234,62,34,124,23,186,248,105,227,27,189,22,251,82,183,146,234,215,99,59,66,133,144,239,64,227,4,227,177,21,139,255,0,8,146,255,0,207,247,
254,66,63,227,64,92,100,12,63,176,46,191,235,226,47,253,5,234,158,225,237,249,215,97,224,95,131,183,94,57,178,214,97,179,212,109,227,254,203,179,125,86,115,42,17,152,226,24,33,113,156,183,205,222,185,
223,248,68,99,35,254,63,191,242,23,255,0,94,141,66,227,96,97,253,129,117,255,0,95,17,127,232,47,85,55,87,95,224,95,131,183,94,57,178,214,97,179,212,109,227,254,203,179,125,86,115,42,17,152,226,24,33,113,
156,183,205,222,185,207,248,68,163,63,242,252,63,239,215,255,0,94,141,64,72,88,127,96,93,127,215,196,95,250,11,213,50,217,21,216,120,27,224,229,215,142,172,117,152,44,181,27,116,254,203,178,125,82,115,
42,21,204,113,12,16,49,156,177,221,237,92,225,240,156,101,115,246,238,223,243,203,255,0,175,70,161,113,53,214,2,249,57,255,0,150,17,127,232,181,165,208,143,250,115,255,0,215,9,191,244,91,87,73,241,19,
224,229,215,131,230,210,90,247,81,183,39,86,211,32,191,132,68,133,177,27,12,46,236,227,230,249,121,20,223,133,223,7,238,190,32,120,214,219,71,211,245,24,22,234,242,57,85,12,200,85,6,35,98,114,70,123,3,
218,142,128,114,10,220,82,238,171,205,225,5,141,217,126,221,157,167,7,247,71,252,104,255,0,132,73,127,231,251,255,0,33,31,241,162,204,46,81,221,70,234,189,255,0,8,146,255,0,207,247,254,66,63,227,71,252,
34,75,255,0,63,223,249,8,255,0,141,59,48,185,71,117,27,170,247,252,34,75,255,0,63,223,249,8,255,0,141,31,240,137,47,252,255,0,127,228,35,254,52,89,133,202,59,168,221,87,191,225,18,95,249,254,255,0,200,
71,252,104,255,0,132,73,127,231,251,255,0,33,31,241,162,204,46,81,221,86,224,96,116,11,174,71,252,124,69,255,0,160,189,60,248,73,15,252,191,127,228,35,254,53,209,120,127,224,245,214,187,224,15,16,106,
214,250,133,186,217,232,111,110,247,33,144,137,27,204,44,139,180,116,60,158,114,69,43,48,185,199,110,20,187,170,247,252,34,74,15,252,127,127,228,35,254,52,127,194,36,191,243,253,255,0,144,143,248,209,
102,43,162,142,234,55,85,239,248,68,151,254,127,191,242,17,255,0,26,63,225,18,83,255,0,47,223,249,8,255,0,141,22,99,185,69,78,89,126,162,173,107,236,63,183,111,63,235,179,255,0,58,150,47,8,33,145,127,
211,185,220,0,204,94,255,0,90,222,248,163,240,122,235,192,30,60,212,52,189,67,80,183,123,200,89,100,115,10,22,79,157,67,140,19,131,209,133,22,96,114,91,168,221,87,191,225,18,95,249,254,255,0,200,71,252,
104,62,18,83,255,0,47,223,249,8,255,0,141,59,48,185,69,78,89,126,162,173,107,236,63,183,111,63,235,187,255,0,58,154,31,8,169,145,64,191,229,136,31,234,143,248,214,239,197,47,131,183,95,15,252,119,127,
165,106,26,140,15,119,3,44,142,97,66,201,243,168,113,130,113,217,135,106,64,114,91,169,11,113,87,255,0,225,18,95,249,254,255,0,200,71,252,104,255,0,132,77,127,231,251,255,0,33,31,241,162,204,46,55,93,
111,244,244,255,0,174,16,255,0,232,181,170,123,171,174,241,87,193,219,173,47,194,122,14,189,113,168,91,253,147,94,73,18,221,17,9,117,242,72,70,221,233,147,211,25,174,127,254,17,37,255,0,159,239,252,132,
127,198,141,66,227,116,38,31,110,111,250,225,55,254,139,106,164,15,21,209,120,51,225,236,154,247,138,172,116,251,107,248,197,198,165,40,179,140,188,100,40,105,62,64,73,231,129,154,139,196,223,12,228,240,
167,136,175,244,187,141,66,54,184,211,174,30,218,66,145,18,165,145,138,156,115,211,138,57,117,3,55,195,237,255,0,21,13,143,253,118,90,170,199,230,111,169,173,77,59,195,43,105,168,219,204,183,219,154,57,
1,3,202,235,250,214,175,196,95,130,247,95,13,60,97,119,162,223,234,54,242,93,90,236,46,208,198,89,14,245,14,48,78,59,48,237,71,46,160,97,104,76,62,220,255,0,245,194,111,253,22,213,72,30,43,162,240,103,
195,217,53,255,0,21,88,233,246,215,241,173,198,165,40,179,140,186,16,170,210,124,128,158,188,115,81,120,155,225,147,248,87,196,122,134,151,113,168,70,247,26,117,195,219,72,82,50,84,178,18,167,30,217,20,
91,80,185,159,110,113,225,219,175,250,250,143,255,0,65,106,166,173,150,31,81,93,135,135,190,14,221,120,131,225,223,136,53,120,53,27,117,179,208,230,128,220,135,66,29,139,146,139,180,116,60,158,114,69,
115,209,120,65,76,170,62,221,201,97,143,221,127,245,232,212,8,181,246,198,187,121,255,0,93,223,249,213,93,213,215,124,82,248,61,115,240,255,0,199,122,134,151,168,106,22,237,117,9,89,28,194,133,147,231,
80,227,4,227,179,14,213,207,255,0,194,36,191,243,253,255,0,144,143,248,208,147,11,148,119,81,186,175,127,194,36,191,243,253,255,0,144,143,248,209,255,0,8,146,255,0,207,247,254,66,63,227,78,204,46,81,221,
70,234,189,255,0,8,146,255,0,207,247,254,66,63,227,71,252,34,75,255,0,63,223,249,8,255,0,141,22,97,114,142,234,55,85,239,248,68,151,254,127,191,242,17,255,0,26,63,225,18,95,249,254,255,0,200,71,252,104,
179,11,148,119,85,205,8,255,0,167,63,253,112,151,255,0,69,181,56,248,69,79,252,191,127,228,47,254,189,116,31,11,126,16,93,120,255,0,198,182,218,61,134,161,2,221,94,199,42,161,157,10,198,49,27,19,146,51,
216,26,77,48,185,199,171,113,78,221,87,223,193,201,19,178,253,191,238,156,127,170,63,227,73,255,0,8,146,255,0,207,247,254,66,63,227,78,204,46,81,221,70,234,189,255,0,8,146,255,0,207,247,254,66,63,227,
71,252,34,75,255,0,63,223,249,8,255,0,141,22,98,186,40,238,171,122,153,197,150,159,255,0,94,231,255,0,70,61,63,254,17,37,199,252,127,127,228,47,254,189,116,30,38,248,63,115,163,120,31,195,186,212,218,
133,191,217,53,148,157,45,213,16,151,30,84,132,54,225,208,114,220,96,154,86,99,185,200,238,163,117,94,255,0,132,73,127,231,251,255,0,33,31,241,163,254,17,37,255,0,159,239,252,132,127,198,139,49,93,20,
119,86,198,180,113,225,45,23,254,218,255,0,232,85,84,120,70,63,249,254,255,0,200,95,253,122,237,60,65,240,35,80,180,248,39,161,248,162,93,70,207,251,46,230,234,75,72,85,85,188,237,249,98,73,29,0,249,79,
122,6,121,238,234,55,85,239,248,68,148,127,203,247,254,66,63,227,71,252,34,75,255,0,63,223,249,8,255,0,141,22,98,186,25,57,198,129,107,255,0,95,18,255,0,232,41,85,55,87,97,162,124,29,186,241,31,195,253,
107,86,135,80,129,108,252,54,82,91,128,200,68,143,230,157,163,104,233,198,222,230,185,209,225,53,199,252,127,127,228,35,254,52,36,194,232,162,172,55,175,212,85,173,125,128,215,111,63,235,187,255,0,58,
144,120,77,21,183,125,187,167,63,234,191,250,245,208,124,69,248,55,117,224,235,205,62,107,221,66,221,142,185,101,30,169,8,137,11,108,142,76,224,28,227,230,224,208,59,156,131,54,5,92,215,91,23,201,255,
0,92,33,255,0,209,107,79,255,0,132,69,79,252,191,127,228,47,254,189,116,62,43,248,59,117,165,248,79,66,215,238,53,11,127,178,107,201,34,91,170,33,46,190,73,8,219,187,12,158,152,205,22,11,156,128,111,153,
126,162,173,107,236,63,183,111,63,235,179,255,0,58,144,120,77,84,231,237,221,63,233,151,255,0,94,186,15,136,191,7,110,188,31,123,167,205,123,168,91,177,215,44,163,213,33,17,33,109,177,201,156,6,233,243,
113,206,40,179,3,157,208,152,27,231,228,127,168,151,255,0,69,181,82,13,197,117,255,0,11,254,16,92,248,255,0,198,150,218,62,159,168,91,165,221,228,115,42,52,200,85,6,35,98,114,70,79,64,107,159,127,7,36,
108,203,246,238,84,145,196,71,183,227,69,130,227,53,35,254,133,167,255,0,215,185,255,0,209,143,85,55,87,95,226,111,131,215,90,55,129,252,57,173,77,168,91,155,77,101,39,75,101,68,38,65,229,72,67,110,29,
7,45,198,9,174,123,254,17,37,255,0,159,239,252,132,127,198,141,66,229,29,212,110,171,223,240,137,47,252,255,0,127,228,35,254,52,127,194,36,191,243,253,255,0,144,143,248,211,179,11,148,119,81,186,175,127,
194,36,191,243,253,255,0,144,143,248,209,255,0,8,146,255,0,207,247,254,66,63,227,69,152,92,163,186,141,213,123,254,17,37,255,0,159,239,252,132,127,198,143,248,68,151,254,127,191,242,17,255,0,26,44,194,
229,29,212,41,249,151,234,42,247,252,34,107,255,0,63,223,249,8,255,0,141,31,240,138,42,243,246,238,159,244,200,255,0,141,43,48,185,30,190,195,251,118,243,254,187,191,243,170,187,171,174,248,137,240,114,
235,193,247,218,124,183,186,141,187,29,114,202,61,82,17,18,22,217,28,153,218,27,56,249,184,174,124,248,73,79,252,191,127,228,35,254,52,5,200,116,3,159,16,91,253,79,242,53,233,223,10,180,159,237,57,53,
63,248,145,248,79,89,242,221,57,214,245,111,176,152,115,187,253,95,239,162,221,156,115,215,24,29,51,207,47,240,159,225,13,199,143,62,32,105,250,109,141,244,31,106,152,72,201,231,33,84,249,81,152,228,140,
246,7,181,94,240,215,137,172,124,57,53,223,219,124,59,164,107,222,115,141,134,245,238,23,201,198,115,183,202,145,58,231,156,231,160,233,205,84,73,102,11,114,13,117,31,18,254,34,127,194,196,109,11,253,
15,236,159,216,186,84,58,103,250,205,254,119,151,159,159,160,198,115,211,154,250,211,226,87,252,18,207,73,240,47,139,62,42,77,253,183,27,120,111,193,254,7,131,196,122,80,95,16,88,205,169,181,211,199,106,
196,92,91,38,102,88,65,150,79,249,102,167,1,121,231,159,157,254,53,254,204,43,240,103,225,167,135,188,76,60,117,224,239,18,71,226,102,111,178,88,105,203,123,21,239,148,184,6,118,142,226,8,177,22,126,80,
224,144,196,48,25,193,195,230,65,170,60,182,138,5,20,201,10,9,162,145,168,3,79,194,62,46,212,124,9,226,8,117,77,38,227,236,183,214,193,132,114,108,15,183,114,149,60,48,35,161,34,179,89,139,185,39,171,
28,154,244,175,14,124,46,208,124,91,240,190,125,66,214,77,66,45,90,212,192,142,242,221,68,200,242,73,50,161,30,66,131,34,160,86,4,72,199,4,140,119,170,191,21,126,30,104,94,31,208,100,190,209,14,169,31,
216,117,89,180,139,132,189,145,100,243,153,20,17,34,237,85,218,15,63,41,206,56,230,129,216,243,250,40,163,173,2,52,188,35,226,253,67,192,190,32,135,84,210,174,62,203,125,106,24,71,46,192,219,119,41,83,
193,4,114,9,172,214,37,155,39,169,36,154,245,141,35,246,121,179,127,14,248,117,175,174,175,33,213,53,61,73,97,190,133,20,109,181,129,163,243,2,142,57,148,175,62,131,112,29,65,174,87,226,119,133,52,125,
35,73,208,245,77,19,251,66,27,45,98,57,115,5,236,171,44,177,60,114,20,39,114,170,130,8,193,233,199,35,154,46,51,145,160,54,214,86,29,84,228,82,119,175,79,208,190,19,104,30,33,248,99,103,113,103,118,215,
94,37,150,1,113,117,110,183,219,126,198,134,228,196,27,202,242,72,97,141,164,143,48,31,155,56,197,0,112,94,47,241,110,161,227,191,16,79,170,106,151,31,106,190,184,10,36,151,96,77,219,84,40,225,64,29,0,
21,157,94,129,241,91,225,246,133,225,253,2,75,237,12,234,145,253,135,85,155,73,184,91,217,22,79,57,145,65,18,46,213,93,160,243,242,156,227,142,107,137,240,254,143,39,136,252,65,101,167,196,202,146,95,
78,176,163,55,64,88,208,5,143,12,248,199,82,240,121,190,254,206,184,251,63,246,149,163,216,220,124,138,222,100,47,141,203,200,56,206,58,142,107,47,24,175,102,241,71,192,79,13,232,222,39,221,103,168,93,
106,154,6,155,13,216,190,154,11,145,231,203,61,178,6,120,212,52,96,71,146,87,159,156,99,39,39,165,112,191,17,188,43,165,248,71,197,26,107,90,173,244,186,70,161,103,111,126,32,150,85,23,8,142,1,104,247,
133,198,71,56,109,190,135,20,93,6,166,63,134,124,99,169,120,60,223,127,103,92,125,159,251,74,209,236,110,126,69,111,50,23,198,229,228,28,103,3,145,205,102,31,254,181,122,164,95,14,60,39,127,253,151,50,
218,107,214,11,38,157,115,171,94,90,201,125,28,210,181,188,106,124,173,141,229,40,86,118,7,168,56,92,30,245,141,241,163,225,190,147,224,203,79,14,106,26,60,151,255,0,97,241,5,144,185,242,110,202,188,182,
237,198,70,229,0,48,228,115,129,154,46,130,204,229,252,51,227,29,75,193,255,0,110,254,206,184,251,63,246,149,163,216,220,252,138,222,100,47,141,203,200,227,56,28,142,107,48,142,43,219,245,111,217,191,
66,142,223,70,22,215,26,146,201,113,123,107,5,211,181,204,114,179,71,36,6,87,111,41,84,52,14,8,42,171,33,36,254,21,231,255,0,19,124,39,164,233,26,70,137,170,232,131,80,134,203,88,142,83,228,94,74,178,
203,19,199,33,67,243,42,168,32,128,15,65,142,69,43,160,183,83,15,196,190,49,212,188,96,214,31,218,87,31,104,254,205,181,75,27,111,145,87,203,133,51,181,120,28,227,39,147,205,105,124,33,248,129,255,0,10,
175,226,5,142,189,246,79,183,125,141,100,30,79,153,229,239,223,27,39,222,193,233,187,61,41,191,9,108,188,43,168,120,251,77,143,198,151,186,221,143,135,26,100,23,111,164,91,71,113,118,200,88,2,16,72,234,
160,144,79,39,56,244,53,244,247,196,143,216,147,225,175,194,191,142,223,25,146,242,111,25,106,126,1,248,101,97,166,92,89,219,67,123,4,26,181,228,151,205,110,169,190,83,11,70,21,124,215,39,9,217,71,189,
61,0,249,1,219,123,179,127,121,137,164,175,186,111,191,224,156,95,11,124,1,241,83,254,17,63,17,106,254,59,190,185,241,111,141,165,240,159,134,110,116,211,2,199,166,160,181,183,153,38,188,12,141,230,176,
107,184,84,162,20,225,36,57,29,43,225,171,168,62,203,119,52,91,183,121,82,50,103,29,112,72,207,233,73,59,129,29,20,81,76,65,69,20,80,1,70,104,160,208,0,107,165,240,191,196,63,248,70,254,30,120,159,65,
251,39,157,255,0,9,39,217,207,159,230,237,251,63,148,229,190,238,62,108,231,29,70,43,87,193,62,12,240,230,183,224,77,66,234,242,77,83,237,214,182,210,204,215,41,34,199,107,102,227,136,98,96,202,76,141,
35,103,133,35,3,158,112,113,210,120,151,224,111,135,116,141,38,77,62,25,181,143,237,232,116,52,214,30,225,221,62,202,73,117,86,140,38,221,216,193,56,109,222,156,82,185,73,51,200,122,209,94,133,241,55,
225,206,131,225,221,7,82,147,73,109,80,94,120,127,83,143,75,189,55,78,173,29,211,58,57,223,24,10,10,128,209,183,4,183,4,115,94,123,76,144,162,138,146,205,99,146,242,37,152,200,176,179,129,33,141,119,48,
92,243,129,220,251,80,4,106,219,92,48,251,202,114,43,75,197,222,47,212,60,117,226,9,245,77,86,227,237,87,215,33,68,146,236,9,187,106,133,28,40,3,128,5,122,118,161,240,99,194,254,94,149,169,91,255,0,107,
38,151,53,173,237,221,204,2,250,27,137,153,32,69,100,2,68,93,136,237,184,110,67,146,157,234,173,231,194,207,10,232,98,93,82,243,251,122,109,26,226,27,6,182,182,134,104,214,230,38,185,12,78,247,216,67,
5,216,221,20,110,202,244,165,116,87,43,60,167,52,102,181,60,121,225,207,248,67,124,119,172,104,235,39,156,186,93,219,219,137,8,198,240,189,235,58,218,214,75,235,152,225,134,54,146,105,152,34,34,140,179,
177,224,1,76,145,138,219,88,17,213,78,69,104,248,187,198,26,143,143,60,65,62,169,170,220,125,170,250,224,40,146,93,138,187,130,168,81,194,128,56,0,87,165,223,124,3,209,244,1,163,53,229,214,163,114,23,
79,188,187,213,150,6,84,253,228,31,242,202,34,84,142,14,20,177,200,224,145,197,87,212,62,23,120,79,195,150,55,218,221,247,246,244,250,40,179,179,158,210,210,9,99,91,149,123,133,118,10,242,20,35,106,236,
60,133,231,35,138,87,67,179,60,175,181,52,138,232,126,39,120,98,215,193,254,48,154,206,197,174,30,202,72,32,186,131,206,35,205,68,154,36,149,85,136,227,112,13,130,112,57,21,216,232,63,9,188,63,226,63,
134,54,119,54,119,109,117,226,73,160,23,23,86,226,251,111,216,208,220,152,131,121,94,73,12,49,180,159,222,3,243,103,24,166,22,56,29,83,198,90,142,181,225,221,51,73,185,184,243,52,253,31,204,251,28,91,
20,121,94,99,110,126,64,201,201,231,154,205,205,122,245,215,193,127,11,222,95,171,217,203,174,67,101,166,234,23,150,90,130,205,34,60,183,11,111,1,148,188,88,80,20,182,214,27,78,236,100,114,107,144,248,
137,225,141,6,223,194,90,30,187,225,245,213,109,237,53,73,39,183,146,222,254,69,146,72,228,139,97,36,50,170,229,78,241,142,59,81,112,177,204,104,154,197,207,135,181,155,77,66,206,79,38,238,198,101,158,
25,48,27,99,169,4,28,30,15,35,189,26,222,177,115,226,29,102,235,80,188,147,206,186,190,149,167,153,246,133,222,236,114,78,7,28,147,218,171,212,150,82,66,151,112,181,204,114,75,110,174,12,137,27,236,102,
94,224,28,28,31,124,28,122,80,34,37,59,74,176,227,28,131,90,126,48,241,126,165,227,191,16,205,170,106,183,31,106,190,185,10,36,151,98,166,237,170,20,112,160,14,0,2,189,10,207,225,71,135,252,85,172,120,
98,214,198,29,95,73,147,84,70,188,188,138,234,241,46,29,45,67,5,66,152,141,48,237,134,32,28,241,180,247,166,201,240,203,194,207,167,197,226,5,93,117,116,17,166,77,121,37,153,184,141,174,140,145,220,8,
0,18,108,192,82,93,91,59,56,193,28,210,230,43,148,243,93,23,88,185,240,238,179,107,168,89,201,228,221,89,74,179,194,248,13,177,212,229,78,15,7,145,222,141,107,88,185,241,30,177,117,127,121,39,157,119,
121,43,79,52,152,11,189,216,146,78,7,3,39,210,181,254,39,120,94,215,194,62,48,150,206,197,238,36,178,146,8,46,160,243,241,230,170,77,18,202,21,136,224,144,27,4,140,116,233,88,2,153,38,150,149,227,29,75,
69,240,222,169,164,218,220,121,122,126,176,99,107,200,182,41,243,74,28,175,36,100,96,250,86,108,111,178,85,110,187,72,56,162,189,219,254,9,229,240,35,225,247,237,37,241,228,120,63,199,154,135,138,236,
127,181,44,167,58,72,209,18,17,190,230,56,218,79,223,73,38,118,198,21,15,10,172,73,61,168,216,15,45,248,187,241,15,254,22,175,196,11,237,119,236,159,97,251,96,140,121,62,103,153,179,100,106,157,112,58,
237,207,78,245,205,138,250,130,239,246,28,131,196,159,240,78,173,15,226,230,154,250,94,138,154,62,173,172,90,107,218,141,245,204,191,233,198,54,182,22,86,209,70,161,191,120,197,165,193,10,171,253,230,
28,87,203,201,210,146,6,45,20,81,76,2,138,40,160,2,138,40,160,3,53,210,124,35,248,131,255,0,10,179,226,13,142,189,246,79,183,125,141,100,30,79,153,229,239,223,27,39,92,30,155,179,211,181,115,102,187,159,
4,120,55,195,122,215,129,181,27,171,201,53,79,183,90,91,75,59,220,164,139,29,173,163,142,33,137,131,41,50,52,140,15,221,35,3,158,112,112,13,28,51,191,153,43,55,247,137,63,157,21,223,124,113,248,80,62,
30,220,88,222,70,176,89,217,106,150,214,242,90,90,151,102,150,80,96,70,146,94,224,46,242,71,39,57,232,49,92,15,90,4,20,81,69,0,24,230,180,181,79,23,234,26,207,135,180,221,38,234,227,204,211,244,127,51,
236,113,108,3,202,243,27,115,242,6,78,79,174,106,63,11,197,99,113,226,27,84,212,190,213,246,22,144,9,190,205,183,205,43,232,165,184,31,83,192,235,94,192,255,0,179,125,158,182,250,165,159,135,172,110,111,
175,230,208,98,212,109,35,146,250,59,129,109,33,184,216,216,153,54,199,34,133,7,145,192,36,142,162,139,141,43,158,34,27,52,85,207,18,232,103,195,58,237,205,131,92,219,221,201,106,254,91,201,6,118,22,29,
64,220,1,224,228,116,237,197,83,160,66,30,107,114,251,226,78,181,169,120,14,207,195,51,94,111,209,44,39,55,16,91,249,74,54,72,115,147,187,27,143,222,60,19,222,179,252,61,160,93,120,167,90,181,211,236,
163,50,93,93,200,35,69,244,207,115,232,7,82,125,171,217,223,246,110,209,211,196,250,102,155,165,27,221,105,181,109,22,230,120,154,99,229,172,151,43,14,85,147,24,194,238,228,6,61,58,210,3,195,115,69,93,
241,38,134,222,26,215,110,108,26,226,222,234,75,87,242,222,72,55,121,101,135,80,55,0,120,60,116,199,21,64,159,151,138,96,106,105,126,49,212,52,111,14,106,154,77,181,193,143,79,214,66,11,216,182,3,230,
132,36,175,36,100,96,147,208,138,204,7,21,235,178,252,38,240,191,246,30,143,115,166,207,38,171,49,107,52,213,118,223,238,22,207,52,91,202,24,196,75,129,144,70,86,70,198,57,230,185,111,143,31,12,91,225,
111,143,47,44,219,200,183,73,167,150,75,123,53,118,121,45,224,220,124,189,196,241,243,47,35,146,125,113,64,236,113,68,86,167,137,124,97,169,120,196,216,255,0,104,220,125,163,251,54,209,44,173,190,64,190,
92,41,157,171,192,25,198,79,39,154,220,248,41,224,11,15,136,94,49,146,223,86,190,254,205,210,108,109,37,189,188,156,125,229,141,6,112,56,60,147,129,208,245,232,122,87,97,127,251,61,195,55,132,252,65,113,
98,45,227,143,76,187,183,184,77,66,91,166,150,40,236,100,129,228,4,144,138,91,113,217,209,3,103,140,14,104,186,3,199,251,127,158,43,83,84,241,134,165,173,120,123,75,210,110,174,60,205,63,71,243,62,201,
22,192,60,175,49,183,63,56,201,201,245,53,95,68,150,198,13,82,38,212,45,238,174,236,129,34,72,173,230,16,200,227,182,214,42,192,115,142,170,107,214,173,62,7,105,30,40,151,90,211,180,75,27,232,117,75,61,
34,222,246,69,190,188,18,139,9,30,84,47,150,84,64,66,194,121,5,73,7,35,168,160,15,25,198,69,106,120,155,198,26,151,140,126,195,253,163,112,110,63,179,109,18,198,219,228,11,229,194,153,218,188,14,113,158,
167,154,210,248,113,224,203,79,22,124,79,211,244,91,155,169,36,179,185,186,242,94,123,80,126,117,25,249,151,112,200,7,29,72,224,114,71,21,233,151,31,179,93,174,174,117,91,63,15,216,220,94,234,18,232,81,
223,218,35,223,37,194,219,203,246,141,143,137,147,108,114,40,80,78,123,100,142,162,142,100,130,204,242,15,9,120,191,81,240,39,136,96,213,52,155,143,178,223,91,134,17,200,80,62,221,202,84,240,192,142,65,
35,241,172,231,37,152,147,220,228,213,207,18,104,103,195,58,229,205,131,92,219,221,73,106,254,91,201,14,239,44,176,234,6,224,15,7,142,152,226,189,171,254,9,231,240,35,225,255,0,237,39,241,224,120,63,199,
154,135,138,172,127,181,44,167,254,201,26,42,67,243,220,199,27,73,251,233,36,206,216,194,161,225,85,137,39,181,26,8,242,239,19,252,68,255,0,132,151,225,223,134,116,15,177,249,63,240,142,253,163,247,254,
102,239,180,121,174,31,238,227,229,199,78,167,53,205,102,190,177,253,154,191,98,31,3,252,83,248,117,225,21,241,5,231,137,163,241,63,196,137,181,248,244,91,171,27,168,146,199,75,93,58,219,204,67,113,27,
198,90,66,242,100,16,174,152,92,26,232,255,0,109,191,248,39,93,159,194,175,217,123,225,207,196,189,6,198,195,195,62,31,190,240,221,140,186,149,245,221,204,242,127,109,106,83,91,163,249,112,167,206,67,
49,18,183,69,65,142,72,224,84,221,21,208,248,174,138,65,75,84,72,81,69,20,0,81,69,20,0,30,148,220,83,144,6,117,82,118,169,32,22,254,239,189,125,149,225,111,216,119,225,63,197,21,248,127,107,225,253,95,
198,118,147,120,155,196,54,250,111,219,181,41,161,68,241,13,146,91,60,151,215,118,86,254,88,146,37,142,84,17,161,144,176,98,227,156,134,0,184,236,124,143,226,111,24,234,94,48,251,15,246,141,199,218,63,
179,109,18,198,219,228,85,242,225,76,237,94,0,206,50,121,60,214,105,175,190,62,6,255,0,193,54,252,23,251,65,232,223,218,30,5,210,117,237,65,188,97,224,109,90,247,67,210,245,189,69,94,227,77,212,236,245,
40,173,132,198,104,150,37,104,204,108,91,12,184,25,110,184,175,134,252,111,225,120,252,23,227,27,221,37,117,75,29,97,52,249,252,135,189,177,89,60,153,72,56,98,130,69,70,56,228,114,6,72,244,230,146,104,
26,47,252,34,248,133,255,0,10,175,226,5,142,187,246,79,183,125,140,72,190,79,153,229,239,223,27,39,222,193,198,55,103,167,106,231,29,247,200,205,211,123,22,192,247,175,181,188,13,251,2,252,47,248,213,
224,223,1,234,62,23,212,60,93,101,253,185,226,107,45,27,81,107,237,78,206,230,105,173,218,210,89,174,101,251,60,10,198,206,77,208,178,199,28,206,197,129,207,99,94,51,251,80,124,1,240,151,131,188,1,240,
239,198,62,5,125,122,211,69,241,213,165,243,53,134,183,115,29,213,213,164,182,151,109,3,31,50,56,227,12,174,54,144,54,140,29,195,38,146,122,142,204,229,117,31,218,219,226,6,173,227,95,19,120,138,227,93,
89,53,143,24,104,233,160,234,243,155,56,127,210,236,145,98,85,139,110,221,171,129,12,124,168,7,229,235,201,167,124,119,253,173,124,107,251,74,89,219,199,227,9,188,63,123,37,168,133,99,185,181,240,253,
141,141,214,200,147,100,104,102,134,36,144,160,80,6,210,216,224,113,69,21,86,91,136,243,113,69,20,80,32,160,244,162,138,0,232,229,248,185,175,75,225,97,163,27,168,86,204,70,144,238,91,104,214,118,141,
27,114,161,148,46,242,161,128,32,19,142,5,51,198,191,20,117,191,136,49,193,30,171,117,20,201,110,237,42,136,237,227,135,115,176,1,157,182,40,220,199,104,203,54,79,20,81,64,28,253,25,193,162,138,0,235,
31,227,215,140,166,176,183,181,155,196,154,165,196,22,119,41,119,18,205,49,147,108,137,247,78,91,60,12,116,233,237,89,94,51,241,230,169,227,235,216,39,212,230,133,218,218,63,42,20,134,4,130,56,215,113,
98,2,32,10,50,73,36,227,146,104,162,128,50,8,226,186,33,241,95,93,30,19,93,21,110,162,91,21,140,66,8,182,140,77,229,135,243,2,121,187,119,237,13,206,221,216,162,138,0,111,141,126,41,107,95,16,227,183,
143,85,186,142,100,183,118,149,68,118,241,195,185,216,0,206,219,0,220,199,3,44,217,60,86,13,173,204,150,119,81,205,12,141,20,209,48,100,117,56,101,35,161,6,138,40,3,172,189,248,243,226,139,253,106,210,
250,75,235,127,180,88,180,165,54,89,194,145,185,148,109,144,186,5,219,33,97,193,44,14,107,7,197,62,44,190,241,158,180,218,134,163,50,205,114,234,169,149,141,99,69,85,80,170,170,138,2,170,128,0,192,24,
162,138,0,185,105,241,51,90,180,241,114,235,137,116,191,218,43,16,132,51,66,141,31,151,179,203,216,99,35,105,93,159,46,220,99,20,223,28,252,68,214,62,34,95,219,220,106,247,95,104,146,210,37,183,129,82,
53,138,56,35,29,21,85,64,85,3,216,81,69,0,105,94,252,118,241,70,160,150,187,245,8,213,173,102,138,225,100,138,218,40,228,150,72,134,35,105,25,84,25,10,142,155,201,172,175,25,120,247,82,241,245,236,19,
234,83,69,33,182,143,202,137,33,129,32,142,53,201,98,2,32,10,50,73,36,227,146,104,162,128,50,35,118,141,213,151,134,66,24,31,66,63,253,85,234,90,119,237,171,241,31,76,248,165,174,120,203,251,106,210,235,
94,241,37,156,122,126,166,247,122,93,173,213,189,236,17,249,126,90,188,18,70,98,59,124,152,200,59,114,10,131,214,138,40,3,83,194,191,240,80,127,139,222,14,159,196,82,88,120,177,150,111,21,106,50,234,247,
210,205,97,111,60,137,121,34,52,111,60,12,232,77,188,133,24,174,232,182,144,48,59,10,241,146,197,216,179,18,204,199,113,39,185,52,81,64,5,20,81,64,5,20,81,64,5,4,102,138,40,3,164,210,190,45,107,90,55,
131,255,0,176,226,109,54,77,47,123,56,138,125,58,9,152,59,12,22,12,200,88,28,119,206,69,77,169,124,109,241,54,179,225,133,209,238,53,5,146,205,109,210,212,19,111,31,157,228,169,12,177,249,187,119,237,
4,3,183,56,226,138,40,11,149,188,89,241,95,93,241,222,149,111,103,169,94,36,214,246,228,56,11,4,113,180,140,23,104,103,101,0,187,5,24,203,18,107,158,162,138,0,42,75,59,217,116,219,200,110,32,118,142,104,
28,73,27,142,170,195,144,104,162,128,58,171,191,142,222,38,187,213,108,239,77,229,172,114,216,153,76,105,21,140,49,196,198,85,196,133,227,85,10,229,135,4,176,57,166,218,124,112,241,53,134,187,117,169,
199,123,110,110,47,82,40,229,71,179,133,225,219,30,60,189,177,149,216,187,112,49,128,49,218,138,40,11,156,190,161,127,54,171,168,79,117,115,35,77,113,112,230,73,100,99,150,118,61,73,162,206,246,109,54,
238,43,139,121,100,130,226,7,18,71,36,108,85,163,96,114,8,35,161,20,81,64,29,100,191,31,252,101,115,46,159,37,214,191,123,124,218,97,147,200,23,68,78,191,188,5,92,48,112,67,130,9,24,108,240,105,150,63,
29,60,77,97,174,95,106,17,223,64,211,106,80,165,189,196,114,89,194,246,239,26,12,42,249,69,74,0,163,128,0,24,162,138,2,231,61,226,63,17,222,120,183,90,184,212,117,9,190,209,121,114,119,72,251,66,142,128,
0,0,224,0,48,0,28,0,43,81,126,43,235,169,225,53,209,69,220,107,98,168,33,4,91,199,231,249,97,252,192,158,110,221,251,3,115,183,56,205,20,81,96,46,106,95,29,124,79,171,106,218,125,244,186,132,107,113,166,
202,211,194,209,90,197,24,105,28,0,238,225,84,7,102,0,2,91,36,142,181,157,227,95,137,26,191,196,54,181,254,212,158,23,142,201,76,112,69,13,188,118,241,68,15,92,34,0,163,56,28,227,176,162,138,0,196,20,
220,237,61,184,162,138,0,216,147,199,154,180,158,43,131,92,251,99,46,167,106,99,49,76,136,171,229,249,106,21,0,80,49,128,0,24,198,56,173,103,248,227,226,71,241,12,58,159,218,237,150,226,24,26,205,99,91,
40,86,223,202,98,89,144,194,23,203,32,146,73,202,242,121,162,138,0,193,241,31,136,239,60,93,173,92,106,58,132,223,104,187,186,59,164,125,161,71,76,0,0,224,0,0,0,14,0,21,70,138,40,0,174,139,225,79,197,
109,123,224,143,143,108,124,79,225,139,239,236,221,115,77,223,246,123,143,41,37,242,247,163,35,124,174,10,156,171,17,200,239,69,20,1,208,120,127,246,172,241,231,134,62,28,175,132,45,53,181,255,0,132,102,
53,187,95,236,233,172,225,154,7,251,81,140,204,89,89,78,226,90,40,200,39,37,10,130,184,53,231,139,205,20,80,2,209,69,20,0,81,69,20,0,81,69,20,0,141,93,38,145,241,111,89,209,188,34,52,56,78,155,38,154,
29,164,17,207,167,65,51,7,97,130,193,221,11,3,239,156,138,40,160,8,60,65,241,39,89,241,102,156,45,117,11,165,186,129,89,25,3,68,153,140,170,4,27,78,50,191,42,168,32,117,192,206,107,14,138,40,0,160,244,
162,138,0,185,225,255,0,16,94,120,83,90,131,80,176,151,201,186,181,109,200,197,67,15,78,65,200,32,244,32,240,65,173,173,83,227,39,136,181,99,62,251,228,129,110,45,150,208,165,181,188,118,232,145,43,249,
129,85,80,0,191,63,60,99,36,209,69,0,98,248,139,196,87,126,41,213,100,189,190,116,150,234,108,121,142,177,170,121,132,12,100,237,3,44,123,158,164,245,170,121,226,138,40,2,206,139,174,94,248,107,82,138,
247,79,187,185,177,188,135,38,57,224,144,199,36,100,130,14,24,114,56,200,174,163,85,253,161,188,105,173,45,186,222,120,130,250,231,236,176,61,188,102,66,24,170,58,237,110,113,203,21,227,113,230,138,40,
3,153,241,15,136,174,188,83,170,73,125,125,34,203,117,48,2,71,88,213,55,144,58,157,160,100,158,231,169,60,213,46,166,138,40,3,168,190,248,203,226,45,71,78,180,181,146,242,31,46,205,227,145,25,45,98,89,
36,104,215,108,102,71,11,186,77,170,112,55,19,140,213,31,22,120,255,0,86,241,185,95,237,91,161,120,209,201,36,170,237,18,135,5,216,179,13,192,103,110,73,33,122,12,156,81,69,0,65,225,63,24,106,30,7,213,
254,221,166,206,33,184,216,209,182,232,214,72,228,70,24,101,101,96,85,148,142,196,17,91,47,241,187,196,207,123,113,55,246,138,134,186,149,37,149,4,17,136,216,172,102,53,93,155,118,236,8,197,118,227,110,
59,81,69,0,115,86,183,242,90,106,17,221,71,229,249,177,184,149,114,128,168,32,228,124,184,198,61,186,86,206,159,241,51,93,210,181,109,70,250,223,80,150,43,205,89,196,151,82,128,55,74,193,196,128,231,28,
124,192,30,62,148,81,64,21,116,239,27,106,90,79,139,87,92,181,153,45,245,37,148,204,36,142,37,85,12,115,159,144,13,184,57,60,99,21,169,169,124,101,241,30,176,38,71,191,88,34,154,221,109,76,118,214,241,
219,198,145,7,243,2,170,160,1,126,126,73,92,100,209,69,0,97,235,254,33,187,241,86,171,37,245,244,139,45,212,192,121,142,177,170,111,32,99,39,0,100,158,231,169,60,154,213,248,83,241,95,94,248,35,227,235,
31,19,120,102,251,251,55,91,211,67,139,123,143,41,37,242,247,161,141,190,87,5,78,85,136,228,119,162,138,0,234,126,29,254,215,191,16,62,21,124,59,190,240,174,133,173,91,218,232,218,131,221,59,43,233,214,
243,79,110,215,81,8,110,12,51,58,25,33,243,35,27,91,203,101,200,173,13,99,246,229,248,163,174,248,0,248,86,251,196,162,247,195,173,164,69,161,255,0,103,207,99,111,36,63,102,137,81,99,249,74,127,172,64,
139,182,95,190,57,195,114,104,162,139,1,228,131,131,75,69,20,0,81,69,20,0,81,69,20,0,6,218,65,244,57,228,87,178,248,171,246,253,248,157,226,253,67,195,247,183,154,151,135,151,80,240,185,182,109,42,246,
219,195,90,117,189,221,144,183,199,146,171,52,112,135,218,187,64,218,78,8,224,131,69,20,0,147,254,223,255,0,22,63,225,44,109,106,219,197,17,233,122,135,246,75,104,136,218,110,155,109,99,29,189,171,92,
11,134,88,227,138,53,72,216,204,55,151,80,24,158,245,230,255,0,17,190,35,106,223,22,124,125,125,226,109,106,91,105,53,157,74,113,115,113,53,181,172,118,170,242,140,124,251,35,85,64,196,140,146,7,39,147,
201,52,81,64,30,141,175,254,223,191,21,252,74,116,150,185,241,37,188,115,232,186,141,174,171,5,197,182,149,105,109,113,61,213,178,20,130,89,228,142,48,215,12,138,72,6,82,217,4,231,173,113,223,26,255,0,
104,95,21,126,208,58,166,157,119,226,171,235,123,150,210,109,141,165,148,54,86,48,88,91,91,70,100,105,88,44,80,34,32,44,238,204,72,25,36,243,154,40,160,46,127,255,217,0,0};

const char* EquilizerGraph::dw_eq_jpg2 = (const char*) resource_EquilizerGraph_dw_eq_jpg2;
const int EquilizerGraph::dw_eq_jpg2Size = 35100;


//[EndFile] You can add extra defines here...
//[/EndFile]
