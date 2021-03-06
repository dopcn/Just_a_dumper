//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBView.h"

#import "UITextFieldDelegate-Protocol.h"

@class CCBImageView, CCBTextField, CCB_13_CodeLabel, NSString, UIFont;
@protocol auxiliaryPhoneNumberDelegate;

@interface CCB_13_V_inputVerificationCode : CCBView <UITextFieldDelegate>
{
    _Bool _secureTextEntry;
    long long _numberOfCode;
    NSString *_vertificationCode;
    UIFont *_codeFont;
    NSString *_backgroudImageName;
    CCBTextField *_textField;
    id <auxiliaryPhoneNumberDelegate> _delegate;
    CCBImageView *_backView;
    CCB_13_CodeLabel *_codeLabel;
}

@property(retain, nonatomic) CCB_13_CodeLabel *codeLabel; // @synthesize codeLabel=_codeLabel;
@property(retain, nonatomic) CCBImageView *backView; // @synthesize backView=_backView;
@property(nonatomic) __weak id <auxiliaryPhoneNumberDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CCBTextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) NSString *backgroudImageName; // @synthesize backgroudImageName=_backgroudImageName;
@property(retain, nonatomic) UIFont *codeFont; // @synthesize codeFont=_codeFont;
@property(retain, nonatomic) NSString *vertificationCode; // @synthesize vertificationCode=_vertificationCode;
@property(nonatomic) _Bool secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(nonatomic) long long numberOfCode; // @synthesize numberOfCode=_numberOfCode;
- (void).cxx_destruct;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)panClick;
- (void)becomeFirstResponder;
- (void)resignFirstResponder;
- (void)clearText;
- (void)setnumberOfCode:(long long)arg1;
- (id)initWithNumberOfCode:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

