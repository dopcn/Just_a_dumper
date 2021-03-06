//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertView.h>

#import "FMIVerifyAlertView-Protocol.h"
#import "FMImageDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class FMImage, NSMutableArray, NSString, QMVerify, UIButton, UIImageView, UITextField;
@protocol FMIVerifyAlertViewDelegate;

@interface FMCompatibleVerifyAlertView : UIAlertView <FMIVerifyAlertView, UIAlertViewDelegate, UITextFieldDelegate, FMImageDelegate>
{
    QMVerify *_verify;
    long long _accountId;
    UIButton *_verifyBtn;
    UITextField *_verificationInputView;
    UIImageView *_verificationView;
    NSMutableArray *_defaultBtnArrays;
    FMImage *_reqImage;
    id <FMIVerifyAlertViewDelegate> _verifyDelegate;
}

@property(nonatomic) __weak id <FMIVerifyAlertViewDelegate> verifyDelegate; // @synthesize verifyDelegate=_verifyDelegate;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)didFailLoadImage:(id)arg1 andUrl:(id)arg2;
- (void)didFinishLoadImage:(id)arg1 andUrl:(id)arg2;
- (void)didClickChangeVerifyImage:(id)arg1;
- (void)refreshVerifyImage;
- (void)dealloc;
- (void)onDeviceOrientationChange:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGRect)defaultBtnRect;
- (void)resetVerifyViewWithBtnFrame:(struct CGRect)arg1;
- (void)addDefaultBtnsOriginY:(double)arg1;
- (void)initialBtns;
- (id)initWithAccountId:(long long)arg1 verify:(id)arg2 title:(id)arg3 message:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

