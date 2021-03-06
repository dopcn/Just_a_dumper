//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OliveappAsyncLivenessDetectorDelegate-Protocol.h"

@class NSString, OliveappLivenessDetector;
@protocol OliveappAsyncPrestartValidatorDelegate;

@interface OliveappPrestartValidator : NSObject <OliveappAsyncLivenessDetectorDelegate>
{
    id <OliveappAsyncPrestartValidatorDelegate> _prestartEventDelegate;
    OliveappLivenessDetector *_livenessDetector;
}

@property(retain) OliveappLivenessDetector *livenessDetector; // @synthesize livenessDetector=_livenessDetector;
@property(retain) id <OliveappAsyncPrestartValidatorDelegate> prestartEventDelegate; // @synthesize prestartEventDelegate=_prestartEventDelegate;
- (void).cxx_destruct;
- (void)onFrameDetected:(int)arg1 withActionState:(int)arg2 withSessionState:(int)arg3 withRemainingTimeoutMilliSecond:(int)arg4;
- (void)onActionChanged:(int)arg1 withLastActionResult:(int)arg2 withNewActionType:(int)arg3 withCurrentActionIndex:(int)arg4;
- (void)onLivenessFail:(int)arg1 withDetectedFrame:(id)arg2;
- (void)onLivenessSuccess:(id)arg1;
- (void)dealloc;
- (_Bool)doDetection:(id)arg1 withError:(id *)arg2;
- (_Bool)restartSession;
- (_Bool)unInit:(id *)arg1;
- (_Bool)setConfig:(id)arg1 withDelegate:(id)arg2 withError:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

