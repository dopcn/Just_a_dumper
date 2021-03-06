//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTView.h"

@class RCTBridge, RCTEventDispatcher, RCTTextSelection, UIView;
@protocol RCTBackedTextInputViewProtocol;

@interface RCTTextInput : RCTView
{
    RCTBridge *_bridge;
    RCTEventDispatcher *_eventDispatcher;
    long long _nativeEventCount;
    long long _mostRecentEventCount;
    _Bool _blurOnSubmit;
    struct CGSize _previousContentSize;
    _Bool _selectTextOnFocus;
    _Bool _clearTextOnFocus;
    CDUnknownBlockType _onContentSizeChange;
    CDUnknownBlockType _onSelectionChange;
    struct UIEdgeInsets _reactPaddingInsets;
    struct UIEdgeInsets _reactBorderInsets;
}

@property(nonatomic) _Bool clearTextOnFocus; // @synthesize clearTextOnFocus=_clearTextOnFocus;
@property(nonatomic) _Bool selectTextOnFocus; // @synthesize selectTextOnFocus=_selectTextOnFocus;
@property(nonatomic) _Bool blurOnSubmit; // @synthesize blurOnSubmit=_blurOnSubmit;
@property(nonatomic) long long mostRecentEventCount; // @synthesize mostRecentEventCount=_mostRecentEventCount;
@property(copy, nonatomic) CDUnknownBlockType onSelectionChange; // @synthesize onSelectionChange=_onSelectionChange;
@property(copy, nonatomic) CDUnknownBlockType onContentSizeChange; // @synthesize onContentSizeChange=_onContentSizeChange;
@property(nonatomic) struct UIEdgeInsets reactBorderInsets; // @synthesize reactBorderInsets=_reactBorderInsets;
@property(nonatomic) struct UIEdgeInsets reactPaddingInsets; // @synthesize reactPaddingInsets=_reactPaddingInsets;
- (void).cxx_destruct;
- (void)handleInputAccessoryDoneButton;
- (void)invalidateInputAccessoryView;
- (void)didSetProps:(id)arg1;
- (void)didMoveToWindow;
- (void)reactBlur;
- (void)reactFocus;
- (id)reactAccessibilityElement;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)invalidateContentSize;
@property(readonly, nonatomic) struct CGSize contentSize;
- (void)textInputDidEndEditing;
- (_Bool)textInputShouldEndEditing;
- (void)textInputDidChangeSelection;
- (void)textInputDidReturn;
- (_Bool)textInputShouldReturn;
- (void)textInputDidBeginEditing;
- (_Bool)textInputShouldBeginEditing;
@property(copy, nonatomic) RCTTextSelection *selection;
@property(readonly, nonatomic) UIView<RCTBackedTextInputViewProtocol> *backedTextInputView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithBridge:(id)arg1;

@end

