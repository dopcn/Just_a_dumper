//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GT3CaptchaManagerDelegate-Protocol.h"
#import "GT3CaptchaManagerViewDelegate-Protocol.h"

@class GT3CaptchaManager, NSString;

@interface PLUJYManager : NSObject <GT3CaptchaManagerDelegate, GT3CaptchaManagerViewDelegate>
{
    GT3CaptchaManager *_manager;
    CDUnknownBlockType _complete;
    NSString *_challenge;
    NSString *_ID;
}

@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
@property(copy, nonatomic) NSString *challenge; // @synthesize challenge=_challenge;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
@property(retain, nonatomic) GT3CaptchaManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)invalidManager;
- (void)gtCaptchaFailed:(long long)arg1 msg:(id)arg2;
- (void)gtCaptcha:(id)arg1 updateCaptchaViewWithFactor:(double)arg2 to:(double)arg3 timeInterval:(double)arg4;
- (void)gtCaptchaSuccess:(id)arg1;
- (void)gtCaptcha:(id)arg1 didReceiveSecondaryCaptchaData:(id)arg2 response:(id)arg3 error:(id)arg4 decisionHandler:(CDUnknownBlockType)arg5;
- (_Bool)shouldUseDefaultSecondaryValidate:(id)arg1;
- (void)gtCaptcha:(id)arg1 didReceiveCaptchaCode:(id)arg2 result:(id)arg3 message:(id)arg4;
- (_Bool)shouldUseDefaultRegisterAPI:(id)arg1;
- (void)gtCaptcha:(id)arg1 errorHandler:(id)arg2;
- (void)gtCaptchaUserDidCloseGTView:(id)arg1;
- (void)gtCaptcha:(id)arg1 updateCaptchaStatus:(long long)arg2 error:(id)arg3;
- (void)startCaptchaWithChallenge:(id)arg1 gtID:(id)arg2 success:(id)arg3 complete:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

