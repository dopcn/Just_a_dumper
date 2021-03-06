//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IGPassthroughView.h"

#import "IGGestureHandler-Protocol.h"
#import "IGHashtagSuggestionsViewDelegate-Protocol.h"
#import "IGStoryBrushWidthSliderDelegate-Protocol.h"
#import "IGStoryColorPaletteDelegate-Protocol.h"
#import "IGStoryEyedropperPresentationViewDataSource-Protocol.h"
#import "IGStoryEyedropperPresentationViewDelegate-Protocol.h"
#import "IGStoryMentionsViewDelegate-Protocol.h"

@class IGRichTextFormat, IGStoryBrushWidthSlider, IGStoryEyedropperPresentationView, IGStoryTextAlignmentToggleButton, IGStoryTextBackgroundToggleButton, IGStoryTextEntryFormatToggleButton, IGStoryTextEntryInputAccessoryView, IGTapButton, NSArray, NSString, UIColor;
@protocol IGStoryTextEntryControlsDataSource, IGStoryTextEntryControlsDelegate;

@interface IGStoryTextEntryControlsOverlayView : IGPassthroughView <IGHashtagSuggestionsViewDelegate, IGStoryBrushWidthSliderDelegate, IGStoryColorPaletteDelegate, IGStoryMentionsViewDelegate, IGStoryEyedropperPresentationViewDelegate, IGStoryEyedropperPresentationViewDataSource, IGGestureHandler>
{
    IGPassthroughView *_controlsWrapperView;
    NSArray *_topControls;
    IGStoryEyedropperPresentationView *_eyedropperPresentationView;
    NSArray *_textFormats;
    _Bool _shouldRightAlignRichTextButtons;
    _Bool _controlsVisible;
    _Bool _fontSizeSliderActive;
    id <IGStoryTextEntryControlsDelegate> _delegate;
    id <IGStoryTextEntryControlsDataSource> _dataSource;
    IGTapButton *_doneButton;
    IGStoryTextAlignmentToggleButton *_textAlignmentButton;
    IGStoryTextBackgroundToggleButton *_textBackgroundButton;
    IGTapButton *_textEmphasisToggleButton;
    IGStoryTextEntryFormatToggleButton *_formatToggleButton;
    IGStoryBrushWidthSlider *_fontSizeSlider;
    IGStoryTextEntryInputAccessoryView *_textInputAccessoryView;
    double _fontSize;
    UIColor *_textColor;
    IGRichTextFormat *_textFormat;
    double _keyboardInset;
    unsigned long long _colorPickingState;
    struct CGPoint _eyedropperPosition;
}

@property(nonatomic) unsigned long long colorPickingState; // @synthesize colorPickingState=_colorPickingState;
@property(nonatomic) struct CGPoint eyedropperPosition; // @synthesize eyedropperPosition=_eyedropperPosition;
@property(nonatomic) _Bool fontSizeSliderActive; // @synthesize fontSizeSliderActive=_fontSizeSliderActive;
@property(nonatomic) _Bool controlsVisible; // @synthesize controlsVisible=_controlsVisible;
@property(nonatomic) double keyboardInset; // @synthesize keyboardInset=_keyboardInset;
@property(retain, nonatomic) IGRichTextFormat *textFormat; // @synthesize textFormat=_textFormat;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(readonly, nonatomic) IGStoryTextEntryInputAccessoryView *textInputAccessoryView; // @synthesize textInputAccessoryView=_textInputAccessoryView;
@property(readonly, nonatomic) IGStoryBrushWidthSlider *fontSizeSlider; // @synthesize fontSizeSlider=_fontSizeSlider;
@property(readonly, nonatomic) IGStoryTextEntryFormatToggleButton *formatToggleButton; // @synthesize formatToggleButton=_formatToggleButton;
@property(readonly, nonatomic) IGTapButton *textEmphasisToggleButton; // @synthesize textEmphasisToggleButton=_textEmphasisToggleButton;
@property(readonly, nonatomic) IGStoryTextBackgroundToggleButton *textBackgroundButton; // @synthesize textBackgroundButton=_textBackgroundButton;
@property(readonly, nonatomic) IGStoryTextAlignmentToggleButton *textAlignmentButton; // @synthesize textAlignmentButton=_textAlignmentButton;
@property(readonly, nonatomic) IGTapButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) __weak id <IGStoryTextEntryControlsDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IGStoryTextEntryControlsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setControlsVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setInputAccessoryMode:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) long long inputAccessoryMode;
@property(readonly, nonatomic) NSArray *suggestedHashtags;
@property(retain, nonatomic) NSString *hashtagQuery;
@property(retain, nonatomic) NSString *mentionsQuery;
@property(readonly, nonatomic) struct CGRect centerRegion;
- (void)eyedropperPresentationView:(id)arg1 didSelectColor:(id)arg2;
- (id)eyedropperPresentationView:(id)arg1 colorAtWindowCoordinates:(struct CGPoint)arg2;
- (void)eyedropperPresentationView:(id)arg1 didMoveEyedropperToPointInWindowCoordinates:(struct CGPoint)arg2;
- (void)eyedropperPresentationViewDidDismissEyedropper:(id)arg1;
- (void)eyedropperPresentationViewDidPresentEyedropper:(id)arg1;
- (void)setColorPickingState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)didTapEyedropperToggleButton:(id)arg1;
- (void)brushWidthSlider:(id)arg1 didSlide:(double)arg2;
- (void)brushWidthSliderDidFinishSliding:(id)arg1;
- (void)brushWidthSliderDidBeginSliding:(id)arg1;
- (void)colorPalette:(id)arg1 didLongPressOnColor:(id)arg2 withGestureRecognizer:(id)arg3;
- (void)colorPalette:(id)arg1 didSelectColor:(id)arg2;
- (void)hashtagSuggestionsView:(id)arg1 didUpdateSuggestedHashtags:(id)arg2;
- (void)hashtagSuggestionsView:(id)arg1 didSelectHashtag:(id)arg2;
- (void)storyMentionsView:(id)arg1 didSelectUser:(id)arg2;
- (void)revealFontSizeSliderForDuration:(double)arg1;
- (void)hideFontSizeSlider;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)formatToggleValueChanged;
- (id)visibleRichTextButtons;
- (void)layoutFontSizeSlider;
- (void)layoutSubviews;
- (id)initWithUserSession:(id)arg1 fontSizeRange:(struct _IGRange)arg2 eyedropperColorPickerEnabled:(_Bool)arg3 colorPickerEnabled:(_Bool)arg4 textFormats:(id)arg5 shouldRightAlignRichTextButtons:(_Bool)arg6 module:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

