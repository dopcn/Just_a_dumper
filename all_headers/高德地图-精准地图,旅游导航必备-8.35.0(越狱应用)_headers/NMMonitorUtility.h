//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMBaseUtility.h"

#import "AHMonitorDelegate-Protocol.h"
#import "QMCalibrationDelegate-Protocol.h"

@class AHMonitor, NSString;

@interface NMMonitorUtility : NMBaseUtility <AHMonitorDelegate, QMCalibrationDelegate>
{
    AHMonitor *_monitor;
}

+ (void)handleAppInitSwitchData:(id)arg1;
+ (_Bool)staticapplication:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
+ (void)staticapplicationDidBecomeActive:(id)arg1;
+ (id)sharedUtility;
@property(retain, nonatomic) AHMonitor *monitor; // @synthesize monitor=_monitor;
- (void).cxx_destruct;
- (void)hmtSendFail:(id)arg1 status:(long long)arg2;
- (void)hmtSendSuccess:(id)arg1;
- (void)hmtPreSend:(id)arg1;
- (void)sendDataResultCallback:(_Bool)arg1;
- (void)startSendDataCallback;
- (struct locationInfo)callbackLocationInfo;
- (void)setupHMTMonitor;
- (void)handleApplicationDidBecomeActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

