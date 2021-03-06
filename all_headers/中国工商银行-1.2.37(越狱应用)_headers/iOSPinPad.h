//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class DownCertGetP10VerifyInputViewController, DownCertVerifyPinViewController, InputPinViewController, NSCondition, NSMutableString, NSString, NewInputViewController, SetPinViewController, SurplusOfKeyNumberAlertView, TDRPXAlertView, UIAlertView, UIView, pinAlertView;
@protocol iosPinPadDelegate;

@interface iOSPinPad : NSObject <UIAlertViewDelegate>
{
    UIAlertView *alertViewInputPin;
    UIAlertView *alertViewChangePin;
    UIAlertView *alertViewSetPin;
    UIView *inputPinView;
    InputPinViewController *_inputPinViewController;
    NewInputViewController *_newInputPinViewController;
    DownCertVerifyPinViewController *_downCertVerifyPinViewController;
    DownCertGetP10VerifyInputViewController *_downCertGetP10VerifyInputViewController;
    SetPinViewController *_setPinViewController;
    TDRPXAlertView *_confirmView;
    TDRPXAlertView *_alertView;
    pinAlertView *_confirmView2;
    pinAlertView *_alertView2;
    SurplusOfKeyNumberAlertView *_confirmView3;
    SurplusOfKeyNumberAlertView *_alertView3;
    _Bool fetchPinDone;
    NSCondition *fetchPinLock;
    long long reason;
    NSString *_errDescription;
    NSString *leftRetriesForPin;
    _Bool alertDone;
    NSCondition *alertLock;
    _Bool alertResult;
    NSCondition *pinLockCondition;
    _Bool pinLockAlertDoneFlag;
    NSMutableString *_pinStr;
    int checkInputValueErrorStatus;
    _Bool _newAlertViewShow;
    id <iosPinPadDelegate> _delegate;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharediOSPinPad;
@property(nonatomic) _Bool newAlertViewShow; // @synthesize newAlertViewShow=_newAlertViewShow;
@property(nonatomic) id <iosPinPadDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *errDescription; // @synthesize errDescription=_errDescription;
@property(retain, nonatomic) SurplusOfKeyNumberAlertView *confirmView3; // @synthesize confirmView3=_confirmView3;
@property(retain, nonatomic) pinAlertView *confirmView2; // @synthesize confirmView2=_confirmView2;
@property(retain, nonatomic) TDRPXAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) TDRPXAlertView *confirmView; // @synthesize confirmView=_confirmView;
- (void)dealloc;
- (id)autorelease;
- (oneway void)release;
- (unsigned int)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)devicePlugOut;
- (void)dismissTheDownCertGetP10VerifyInputViewController;
- (void)dismissTheDownCertGetP10VerifyInputViewControllerThread;
- (void)dismissTheDownCertVerifyInputViewController;
- (void)dismissTheDownCertVerifyInputViewControllerThread;
- (void)dismissTheNewInputViewController;
- (void)cancel;
- (void)done;
- (void)doneTest;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)hideWaitingPadThread;
- (void)showPinPadForInputOnlinePinThread;
- (void)showPinPadForSetPinThread;
- (void)showPinPadForChangePinThread;
- (void)showDownCertGetP10VerifyPinPadForInputPinThread:(id)arg1;
- (void)showDownCertVerifyPinPadForInputPinThread:(id)arg1;
- (void)showPinPadForInputPinThread:(id)arg1;
- (void)showPinPadForInputPinThreadTest:(id)arg1;
- (id)lableHintInPinPad:(id)arg1;
- (id)textFieldsInPinPad:(id)arg1;
- (_Bool)showAlertViewWithTitle:(id)arg1 message:(id)arg2;
- (void)showAlertViewWithNoBlockWithTitle:(id)arg1 message:(id)arg2 hasCancel:(_Bool)arg3;
- (_Bool)showAlertPadWithTitle:(id)arg1 message:(id)arg2 hasCancel:(_Bool)arg3;
- (void)hideWaitingPad;
- (void)showChangePinSurplusPadWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 otherTitle:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)showSurplusPadWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 otherTitle:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)showPinLockPadWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 otherTitle:(id)arg4;
- (long long)showNewPinErrorPadWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 otherTitle:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)showNewWaitingPadWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3;
- (void)showWaitingPadWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3;
- (void)showWaitingPadWithTitleTest:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3;
- (_Bool)fetchOnlinePin:(id *)arg1;
- (_Bool)fetchOldPin:(id *)arg1 andNewPin:(id *)arg2;
- (_Bool)setPin:(id *)arg1;
- (long long)getP10FetchPin:(id *)arg1 tipTitle:(id)arg2 retries:(id)arg3;
- (long long)downCertFetchPin:(id *)arg1 tipTitle:(id)arg2 retries:(id)arg3;
- (long long)fetchPin:(id *)arg1 tipTitle:(id)arg2 retries:(id)arg3 withUIConfigFlag:(_Bool)arg4;
- (long long)fetchPinTest:(id *)arg1 tipTitle:(id)arg2 retries:(id)arg3 withUIConfigFlag:(_Bool)arg4;
- (long long)fetchPin:(id *)arg1 retries:(id)arg2;
- (_Bool)isValidNewPin:(id)arg1 repeatNewPin:(id)arg2;
- (_Bool)isValidOldPin:(id)arg1 newPin:(id)arg2 repeatNewPin:(id)arg3;
- (_Bool)isValidPin:(id)arg1;
- (_Bool)downCertIsValidLengthConfirmPin:(id)arg1;
- (_Bool)isValidLengthPin:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

