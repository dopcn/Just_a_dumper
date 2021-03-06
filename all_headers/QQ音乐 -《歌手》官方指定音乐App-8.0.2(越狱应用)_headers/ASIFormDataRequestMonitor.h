//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASIFormDataRequest.h"

@class SWTimerManager;

@interface ASIFormDataRequestMonitor : ASIFormDataRequest
{
    SWTimerManager *_timerManager;
}

@property(retain) SWTimerManager *timerManager; // @synthesize timerManager=_timerManager;
@property(readonly, nonatomic) long long monitorPacketArriveTime;
@property(readonly, nonatomic) long long monitorPacketDeliveryTime;
@property(readonly, nonatomic) long long monitorConnectTime;
@property(readonly, nonatomic) long long monitorPropagationDelay;
- (long long)monitorGetTimeLengthWithStartTime:(struct timeval)arg1 endTime:(struct timeval)arg2;
- (void)handleStreamError;
- (void)handleStreamComplete;
- (void)handleBytesAvailable;
- (void)startRequest;
- (void)dealloc;
- (id)init;

@end

