//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UITextField;
@protocol ALALiveQuizTextViewDelegate;

@interface ALALiveQuizTextView : UIView <UITextFieldDelegate>
{
    id <ALALiveQuizTextViewDelegate> _delegate;
    UIView *_maskView;
    UIView *_contentView;
    UILabel *_title;
    UILabel *_subtitle;
    UITextField *_textField;
    UIView *_sepLine;
    UIButton *_sendButton;
    UILabel *_tipLabel;
}

@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIView *sepLine; // @synthesize sepLine=_sepLine;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UILabel *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) __weak id <ALALiveQuizTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)inputeViewValueChanged:(id)arg1;
- (void)resetKeyboardViewPosition:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)tapGestureHandle:(id)arg1;
- (void)onClickEnter:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (void)showAnimated:(_Bool)arg1;
- (void)checkButtonState;
- (_Bool)becomeFirstResponder;
- (_Bool)isFirstResponder;
- (void)resetTipText;
- (void)updateTipText:(id)arg1;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (void)setupContentView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

