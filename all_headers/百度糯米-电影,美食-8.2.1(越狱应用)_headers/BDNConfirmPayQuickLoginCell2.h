//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDNCell.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UITextField, UIView;

@interface BDNConfirmPayQuickLoginCell2 : BDNCell <UITextFieldDelegate>
{
    UIView *_titleView;
    UIButton *_btnTitle;
    UITextField *_txtPhoneNum;
    UITextField *_txtVerificationCode;
    UIButton *_btnRequestVerificationCode;
    UIButton *_btnSubmin;
}

- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)onRequestVerificationCode;
- (void)resignAllResponder;
- (void)onLogin;
- (void)onLoginWithSDK;
- (void)setRequestVerCodeTimeDesc:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setPhoneNum:(id)arg1 verCode:(id)arg2;
- (void)verificationCodeTxtBecomeFirstResponder;
- (_Bool)isVerificationCodeTxtBecomeFirstResponder;
- (_Bool)isBecomeFirstResponder;
- (void)layoutSubviews;
- (void)postContruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

