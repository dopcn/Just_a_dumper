//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PLStreamingSession.h"

@interface PLStreamingSession (QoS)
- (void)postStreamNotify;
- (void)postStreamErrorNotify:(id)arg1;
- (void)postStreamStartNotify;
- (void)postStreamEndNotify;
- (void)postStreamStateChangedNotify:(unsigned long long)arg1;
- (void)statisticAddVideo:(struct __CVBuffer *)arg1;
- (void)statisticAddAudio:(struct AudioBuffer *)arg1;
- (void)resetStatisticTimerAndState;
- (void)onQoSVideoFilterTime:(id)arg1;
- (void)onStreamSendMetadata;
- (void)onAudioSessionInterruption:(id)arg1;
- (void)onStreamStateConnectedNotify;
- (void)addQosEventObserver;
- (void)onReachabilityChanged:(id)arg1;
- (void)postAppLauchInfo;
- (void)postSystemNotify;
- (void)initNetworkMonitor;
- (void)updateStreamTimer:(id)arg1;
- (void)initQoS;
@end

