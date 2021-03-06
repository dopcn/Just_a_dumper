//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol OS_dispatch_queue;

@protocol SignalEmitter <NSObject>
- (void)setBrightness:(double)arg1;
- (void)burstSignal:(double)arg1 blocking:(_Bool)arg2;
- (void)burstSignal;
- (void)turnOffSignal;
- (void)turnOnSignal;
- (void)disableEmitter;
- (void)enableEmitter;

@optional
- (NSObject<OS_dispatch_queue> *)getSerialQueue;
@end

