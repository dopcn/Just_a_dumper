//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseViewModel.h"

@class CCBBaseError, NSObject, NSString;
@protocol CCB13UKeyManagerBindManageDelegate, OS_dispatch_source;

@interface CCB_13_UKeyManager : CCBBaseViewModel
{
    _Bool _isBeingRequestPC0014;
    _Bool _isCurrentDeviceUKeyCertAvailable;
    CDUnknownBlockType _statusBlock;
    id <CCB13UKeyManagerBindManageDelegate> _bindDelegate;
    NSObject<OS_dispatch_source> *_timer;
    double _loopStart;
    NSString *_ukeyFuncCode;
    CCBBaseError *_error;
    CDUnknownBlockType _resultBlock;
    CDUnknownBlockType _querySignTextCallback;
    long long _sendIndex;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isCurrentDeviceUKeyCertAvailable; // @synthesize isCurrentDeviceUKeyCertAvailable=_isCurrentDeviceUKeyCertAvailable;
@property(nonatomic) long long sendIndex; // @synthesize sendIndex=_sendIndex;
@property(copy, nonatomic) CDUnknownBlockType querySignTextCallback; // @synthesize querySignTextCallback=_querySignTextCallback;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(retain, nonatomic) CCBBaseError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *ukeyFuncCode; // @synthesize ukeyFuncCode=_ukeyFuncCode;
@property(nonatomic) double loopStart; // @synthesize loopStart=_loopStart;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak id <CCB13UKeyManagerBindManageDelegate> bindDelegate; // @synthesize bindDelegate=_bindDelegate;
@property(nonatomic) _Bool isBeingRequestPC0014; // @synthesize isBeingRequestPC0014=_isBeingRequestPC0014;
@property(copy, nonatomic) CDUnknownBlockType statusBlock; // @synthesize statusBlock=_statusBlock;
- (void).cxx_destruct;
- (void)updateLocalCache;
- (id)responseErrorMessage:(id)arg1;
- (_Bool)isRightResponse:(id)arg1;
- (void)finishUpgradingBind:(id)arg1 error:(id)arg2;
- (void)finishRequestSignText:(id)arg1 error:(id)arg2;
- (void)requestNPF010Finished:(id)arg1 output:(id)arg2 error:(id)arg3;
- (void)cancelTimer;
- (id)base64DecodingWithString:(id)arg1;
- (void)requestMUKGetSignMsgFinished:(id)arg1 output:(id)arg2 error:(id)arg3;
- (_Bool)loopQueryTimeIsOver;
- (void)timerEventHandler:(id)arg1;
- (void)startLoopQuery:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)requestMUKSendPlainTextFinished:(id)arg1 output:(id)arg2 error:(id)arg3;
- (void)requestPC0014Finished:(id)arg1 output:(id)arg2 error:(id)arg3;
- (void)requestFinished:(id)arg1 output:(id)arg2 error:(id)arg3;
- (void)requestNPF010:(long long)arg1 andVerifiedText:(id)arg2 deviceflag:(id)arg3;
- (void)requestMUKGetSignMsg:(id)arg1;
- (id)getTimeFormatter:(id)arg1;
- (void)requestMukSendPlainText:(id)arg1;
- (void)requestPC0014;
- (void)requestShowingQRCode:(id)arg1;
- (void)startNoCurrentDeviceUKeyCertAvailableBindUpgradeFlow;
- (void)sendUpgradingBindLevel:(id)arg1 deviceflag:(id)arg2;
- (void)currentDeviceUKeyCheckOriginSignText:(id)arg1;
- (void)queryOriginSignText:(CDUnknownBlockType)arg1;
- (void)startCurrentDeviceUKeyCertAvailableBindUpgradeFlow;
- (void)checkUKeyCertAvailable:(CDUnknownBlockType)arg1;
- (void)upgradeUKeyBindLevel:(id)arg1;
- (void)cancelUkeyBindUpgrade;
- (_Bool)isUKeyActiveStatus;
- (void)askUKeyStatus:(CDUnknownBlockType)arg1 isForce:(_Bool)arg2;

@end

