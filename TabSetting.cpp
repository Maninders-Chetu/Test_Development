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
#include "Source\Theme.h"
//[/Headers]

#include "TabSetting.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
TabSetting::TabSetting ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    fThemeCombo.reset (new ComboBox ("fThemeCombo"));
    addAndMakeVisible (fThemeCombo.get());
    fThemeCombo->setEditableText (false);
    fThemeCombo->setJustificationType (Justification::centred);
    fThemeCombo->setTextWhenNothingSelected (String());
    fThemeCombo->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    fThemeCombo->addItem (TRANS("DARK"), 1);
    fThemeCombo->addItem (TRANS("LIGHT"), 2);
    fThemeCombo->addListener (this);

    fThemeCombo->setBounds (48, 58, 150, 24);

    label.reset (new Label ("new label",
                            TRANS("THEME")));
    addAndMakeVisible (label.get());
    label->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    label->setJustificationType (Justification::centred);
    label->setEditable (false, false, false);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label->setBounds (48, 24, 150, 24);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (248, 515);


    //[Constructor] You can add your own custom stuff here..

	fThemeCombo->setSelectedItemIndex(0);

    //[/Constructor]
}

TabSetting::~TabSetting()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    fThemeCombo = nullptr;
    label = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void TabSetting::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
	if(false)
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
	g.fillAll(Colour(0xff1c1c1c));

    //[/UserPaint]
}

void TabSetting::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void TabSetting::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == fThemeCombo.get())
    {
        //[UserComboBoxCode_fThemeCombo] -- add your combo box handling code here..
		if (fThemeCombo->getSelectedItemIndex() == 0)
		{
			Theme::setThemeType(DARKTHEME);
		}
		else
		{
			Theme::setThemeType(LIGHTTHEME);
		}


        //[/UserComboBoxCode_fThemeCombo]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="TabSetting" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.33"
                 fixedSize="1" initialWidth="248" initialHeight="515">
  <BACKGROUND backgroundColour="ff323e44"/>
  <COMBOBOX name="fThemeCombo" id="3d0202fe1fed284d" memberName="fThemeCombo"
            virtualName="" explicitFocusOrder="0" pos="48 58 150 24" editable="0"
            layout="36" items="DARK&#10;LIGHT" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="c9368bfe9b0466df" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="48 24 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="THEME" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="36"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
