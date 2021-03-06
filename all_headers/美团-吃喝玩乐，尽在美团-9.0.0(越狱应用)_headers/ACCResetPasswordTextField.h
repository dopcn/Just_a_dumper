//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class EREvent, ERNode, NSString, UIButton, UITextField;

@interface ACCResetPasswordTextField : UIView <UITextFieldDelegate>
{
    _Bool _secureTextEntry;
    ERNode *_er_text;
    ERNode *_placeholderText;
    long long _keyboardType;
    ERNode *_autoFormatPhoneNumber;
    ERNode *_autoShowClear;
    ERNode *_textInputLeftMargin;
    ERNode *_countryCode;
    long long _inputLength;
    EREvent *_textDidEnterEvent;
    UITextField *_textField;
    UIButton *_clearButton;
    UIButton *_secureButton;
    UIView *_separatorLine;
}

@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UIButton *secureButton; // @synthesize secureButton=_secureButton;
@property(retain, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(readonly, nonatomic) EREvent *textDidEnterEvent; // @synthesize textDidEnterEvent=_textDidEnterEvent;
@property(nonatomic) long long inputLength; // @synthesize inputLength=_inputLength;
@property(readonly, nonatomic) ERNode *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, nonatomic) ERNode *textInputLeftMargin; // @synthesize textInputLeftMargin=_textInputLeftMargin;
@property(nonatomic) _Bool secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(readonly, nonatomic) ERNode *autoShowClear; // @synthesize autoShowClear=_autoShowClear;
@property(readonly, nonatomic) ERNode *autoFormatPhoneNumber; // @synthesize autoFormatPhoneNumber=_autoFormatPhoneNumber;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(readonly, nonatomic) ERNode *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(readonly, nonatomic) ERNode *er_text; // @synthesize er_text=_er_text;
- (void).cxx_destruct;
- (void)updateConstraints;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

