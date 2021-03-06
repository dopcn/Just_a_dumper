//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RMXBase4LiveModuleVC.h"

@class NSTimer, UIButton, UITextField;

@interface RMXRNAAutoPhoneInputVC : RMXBase4LiveModuleVC
{
    CDUnknownBlockType _nextButtonActionHandler;
    CDUnknownBlockType _manualButtonActionHandler;
    UIButton *_authCodeButton;
    UIButton *_nextButton;
    UIButton *_manualAuthButton;
    NSTimer *_timer;
    long long _currentCounter;
    UITextField *_phoneNumberTextField;
    UITextField *_authCodeTextField;
}

@property(nonatomic) __weak UITextField *authCodeTextField; // @synthesize authCodeTextField=_authCodeTextField;
@property(nonatomic) __weak UITextField *phoneNumberTextField; // @synthesize phoneNumberTextField=_phoneNumberTextField;
@property(nonatomic) long long currentCounter; // @synthesize currentCounter=_currentCounter;
@property(nonatomic) __weak NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak UIButton *manualAuthButton; // @synthesize manualAuthButton=_manualAuthButton;
@property(nonatomic) __weak UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(nonatomic) __weak UIButton *authCodeButton; // @synthesize authCodeButton=_authCodeButton;
@property(copy, nonatomic) CDUnknownBlockType manualButtonActionHandler; // @synthesize manualButtonActionHandler=_manualButtonActionHandler;
@property(copy, nonatomic) CDUnknownBlockType nextButtonActionHandler; // @synthesize nextButtonActionHandler=_nextButtonActionHandler;
- (void).cxx_destruct;
- (void)manualAuthButtonAction:(id)arg1;
- (void)authCodeButtonAction:(id)arg1;
- (void)refreshAuthCodeButton;
- (void)nextButtonAction:(id)arg1;
- (void)authCodeTextFieldChanged:(id)arg1;
- (void)phoneNumberInputTextField:(id)arg1;
- (void)checkNextButtonEnableWithPhoneText:(id)arg1 authCodeText:(id)arg2;
- (_Bool)checkIfIsValidPhoneNumber:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

