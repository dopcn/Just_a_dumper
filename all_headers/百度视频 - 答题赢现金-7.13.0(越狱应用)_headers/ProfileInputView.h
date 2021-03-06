//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UITextField;
@protocol ProfileInputViewDelegate;

@interface ProfileInputView : UIView <UITextFieldDelegate>
{
    id <ProfileInputViewDelegate> _delegate;
    UIView *_lineView;
    UIView *_inputView;
    UITextField *_textField;
    UILabel *_numLimitLabel;
    UIButton *_sendBtn;
}

@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) UILabel *numLimitLabel; // @synthesize numLimitLabel=_numLimitLabel;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak id <ProfileInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendBtnClick:(id)arg1;
- (void)dismiss;
- (void)show;
- (void)clearText;
- (void)textViewEditingChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)setSubviewsLayout;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

