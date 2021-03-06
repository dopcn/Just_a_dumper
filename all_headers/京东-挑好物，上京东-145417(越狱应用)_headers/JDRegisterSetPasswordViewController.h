//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDRegisterBaseViewController.h"

@class NSArray, UIButton, UIImageView, UILabel, UITextField;

@interface JDRegisterSetPasswordViewController : JDRegisterBaseViewController
{
    _Bool _passwdOn;
    UILabel *_topTipLabel;
    UIImageView *_passwdView;
    UITextField *_passwdText;
    UIButton *_passwdSwitch;
    UIButton *_checkButton;
    UILabel *_bottomTipLabel;
    UIButton *_completeButton;
    NSArray *_subtitleListdataSource;
}

@property(retain, nonatomic) NSArray *subtitleListdataSource; // @synthesize subtitleListdataSource=_subtitleListdataSource;
@property(retain, nonatomic) UIButton *completeButton; // @synthesize completeButton=_completeButton;
@property(retain, nonatomic) UILabel *bottomTipLabel; // @synthesize bottomTipLabel=_bottomTipLabel;
@property(nonatomic) _Bool passwdOn; // @synthesize passwdOn=_passwdOn;
@property(retain, nonatomic) UIButton *checkButton; // @synthesize checkButton=_checkButton;
@property(retain, nonatomic) UIButton *passwdSwitch; // @synthesize passwdSwitch=_passwdSwitch;
@property(retain, nonatomic) UITextField *passwdText; // @synthesize passwdText=_passwdText;
@property(retain, nonatomic) UIImageView *passwdView; // @synthesize passwdView=_passwdView;
@property(retain, nonatomic) UILabel *topTipLabel; // @synthesize topTipLabel=_topTipLabel;
- (void).cxx_destruct;
- (void)onSetPasswordError:(id)arg1;
- (void)onSetPasswordFailed:(int)arg1 errorMessage:(id)arg2;
- (void)onSetPasswordSuccess;
- (id)toastView:(id)arg1 subtitleForRow:(long long)arg2;
- (long long)numberOfRowsInSubtitleListToastView:(id)arg1;
- (void)attributedLabel:(id)arg1 didSelectLinkWithPhoneNumber:(id)arg2;
- (void)didCancelInToastView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)backButtonClicked;
- (void)checkPasswordUpadteTip:(id)arg1;
- (void)textFieldChanged:(id)arg1;
- (_Bool)validatePasswd:(id)arg1;
- (void)onComplete;
- (void)onNearComplete:(id)arg1;
- (void)onTogglePasswd:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)initControls;
- (void)viewDidLoad;

@end

