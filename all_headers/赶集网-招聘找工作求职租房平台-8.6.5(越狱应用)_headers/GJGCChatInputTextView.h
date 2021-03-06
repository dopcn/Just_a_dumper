//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class GJGCChatInputRecordAudioTipView, NSMutableArray, NSString, NSTextContainer, NSTimer, UIButton, UIFont, UIImage, UIImageView, UILabel, UITextView;

@interface GJGCChatInputTextView : UIView <UITextViewDelegate>
{
    _Bool _recordState;
    _Bool _isRecordStartRight;
    UIFont *_textViewFont;
    NSString *_preRecordTitle;
    NSString *_recordingTitle;
    UIImage *_inputTextBackgroundImage;
    UIImage *_recordAudioBackgroundImage;
    double _maxAutoExpandHeight;
    double _minAutoExpandHeight;
    NSMutableArray *_emojiInfoArray;
    NSString *_panelIdentifier;
    double _inputTextStateHeight;
    long long _maxInputTextLength;
    NSString *_placeHolder;
    UITextView *_textView;
    UIButton *_recordButton;
    UIImageView *_inputBackgroundImageView;
    CDUnknownBlockType _frameChangeBlock;
    CDUnknownBlockType _actionChangeBlock;
    CDUnknownBlockType _finishInputBlock;
    GJGCChatInputRecordAudioTipView *_recordTipView;
    CDUnknownBlockType _responseBlock;
    NSTimer *_minRecordActionTimer;
    long long _selectCharIndex;
    NSTextContainer *_textContainer;
    UILabel *_placeHolderLabel;
    struct UIEdgeInsets _textViewInset;
}

@property(retain, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
@property(retain, nonatomic) NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property(nonatomic) long long selectCharIndex; // @synthesize selectCharIndex=_selectCharIndex;
@property(nonatomic) _Bool isRecordStartRight; // @synthesize isRecordStartRight=_isRecordStartRight;
@property(retain, nonatomic) NSTimer *minRecordActionTimer; // @synthesize minRecordActionTimer=_minRecordActionTimer;
@property(copy, nonatomic) CDUnknownBlockType responseBlock; // @synthesize responseBlock=_responseBlock;
@property(retain, nonatomic) GJGCChatInputRecordAudioTipView *recordTipView; // @synthesize recordTipView=_recordTipView;
@property(copy, nonatomic) CDUnknownBlockType finishInputBlock; // @synthesize finishInputBlock=_finishInputBlock;
@property(copy, nonatomic) CDUnknownBlockType actionChangeBlock; // @synthesize actionChangeBlock=_actionChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType frameChangeBlock; // @synthesize frameChangeBlock=_frameChangeBlock;
@property(retain, nonatomic) UIImageView *inputBackgroundImageView; // @synthesize inputBackgroundImageView=_inputBackgroundImageView;
@property(retain, nonatomic) UIButton *recordButton; // @synthesize recordButton=_recordButton;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(nonatomic) long long maxInputTextLength; // @synthesize maxInputTextLength=_maxInputTextLength;
@property(readonly, nonatomic) double inputTextStateHeight; // @synthesize inputTextStateHeight=_inputTextStateHeight;
@property(retain, nonatomic) NSString *panelIdentifier; // @synthesize panelIdentifier=_panelIdentifier;
@property(retain, nonatomic) NSMutableArray *emojiInfoArray; // @synthesize emojiInfoArray=_emojiInfoArray;
@property(nonatomic) double minAutoExpandHeight; // @synthesize minAutoExpandHeight=_minAutoExpandHeight;
@property(nonatomic) double maxAutoExpandHeight; // @synthesize maxAutoExpandHeight=_maxAutoExpandHeight;
@property(nonatomic, getter=isRecordState) _Bool recordState; // @synthesize recordState=_recordState;
@property(retain, nonatomic) UIImage *recordAudioBackgroundImage; // @synthesize recordAudioBackgroundImage=_recordAudioBackgroundImage;
@property(retain, nonatomic) UIImage *inputTextBackgroundImage; // @synthesize inputTextBackgroundImage=_inputTextBackgroundImage;
@property(nonatomic) struct UIEdgeInsets textViewInset; // @synthesize textViewInset=_textViewInset;
@property(retain, nonatomic) NSString *recordingTitle; // @synthesize recordingTitle=_recordingTitle;
@property(retain, nonatomic) NSString *preRecordTitle; // @synthesize preRecordTitle=_preRecordTitle;
@property(nonatomic) UIFont *textViewFont; // @synthesize textViewFont=_textViewFont;
- (void).cxx_destruct;
- (void)configTextViewDidBecomeFirstResponse:(CDUnknownBlockType)arg1;
- (void)configFinishInputTextBlock:(CDUnknownBlockType)arg1;
- (void)configRecordActionChangeBlock:(CDUnknownBlockType)arg1;
- (void)configFrameChangeBlock:(CDUnknownBlockType)arg1;
- (void)reserveToNormal;
- (_Bool)isValidateContent;
- (struct CGSize)getStringRectInTextView:(id)arg1 InTextView:(id)arg2;
- (void)clearInputText;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)longPressRecordButton:(id)arg1;
- (void)updateStartRecordAction:(id)arg1;
- (void)tapOnRecordButton:(id)arg1;
- (_Bool)checkRecordPermission;
- (void)observeEmojiPanelChooseDeleteNoti:(id)arg1;
- (void)observeEmojiPanelChooseEmojiNoti:(id)arg1;
- (void)deleteLastEmoji;
- (void)observeRecordTooLong:(id)arg1;
- (void)observeRecordTooShort:(id)arg1;
- (void)observeRecordSoundMeter:(id)arg1;
- (void)removeRecordTipView;
- (void)showRecordTipView;
- (void)setInputTextBackgroundStretchImage:(id)arg1;
- (void)updateDisplayByInputContentTextChange;
- (void)layoutInputTextView;
- (void)expandTextViewToHeight:(double)arg1;
- (void)becomeFirstResponder;
- (_Bool)isInputTextFirstResponse;
- (void)resignFirstResponder;
@property(retain, nonatomic) NSString *content;
- (void)observeSetLastMessageDraft:(id)arg1;
- (void)observeAppendFocusOnOther:(id)arg1;
- (void)observeRequiredNoti;
- (void)initSubViewsWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

