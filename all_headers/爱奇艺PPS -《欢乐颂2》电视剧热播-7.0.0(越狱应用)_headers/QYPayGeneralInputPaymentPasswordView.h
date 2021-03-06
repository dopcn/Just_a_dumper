//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UILabel;

@interface QYPayGeneralInputPaymentPasswordView : UIView <UITextFieldDelegate>
{
    UIView *_passwordMaskView;
    UILabel *_forgetPasswordLabel;
    CDUnknownBlockType _payGeneralForgetPaymentPasswordCompletionHandler;
    CDUnknownBlockType _payGeneralVerifyPaymentPasswordCompletionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType payGeneralVerifyPaymentPasswordCompletionHandler; // @synthesize payGeneralVerifyPaymentPasswordCompletionHandler=_payGeneralVerifyPaymentPasswordCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType payGeneralForgetPaymentPasswordCompletionHandler; // @synthesize payGeneralForgetPaymentPasswordCompletionHandler=_payGeneralForgetPaymentPasswordCompletionHandler;
@property(retain, nonatomic) UILabel *forgetPasswordLabel; // @synthesize forgetPasswordLabel=_forgetPasswordLabel;
@property(retain, nonatomic) UIView *passwordMaskView; // @synthesize passwordMaskView=_passwordMaskView;
- (void).cxx_destruct;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)verifyPaymentPasswordCompletionHandler:(CDUnknownBlockType)arg1;
- (void)forgetPaymentPasswordCompletionHandler:(CDUnknownBlockType)arg1;
- (void)firstBecomeResponders;
- (void)resignAllResponders;
- (void)clearInputContent;
- (void)__changeViewWithTag:(long long)arg1 dyeState:(_Bool)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)forgetPasswordTap:(id)arg1;
- (void)passwordMaskViewTap:(id)arg1;
- (void)forgetPasswordButtonClick:(id)arg1;
- (_Bool)__isInputNumber:(id)arg1;
- (id)__inputPassword;
- (void)__generateLayout;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

