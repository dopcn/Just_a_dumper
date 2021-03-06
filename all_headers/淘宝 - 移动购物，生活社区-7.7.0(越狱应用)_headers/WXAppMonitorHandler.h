//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXAppMonitorProtocol-Protocol.h"

@class NSString, WXSDKInstance;

@interface WXAppMonitorHandler : NSObject <WXAppMonitorProtocol>
{
}

+ (_Bool)isNoiseData:(double)arg1;
+ (void)aliweexPerformancePoint:(unsigned long long)arg1 didEndWithInstance:(id)arg2;
+ (id)aliweexPerformanceDictForInstance:(id)arg1;
- (void)commitAppMonitorAlarm:(id)arg1 monitorPoint:(id)arg2 success:(_Bool)arg3 errorCode:(id)arg4 errorMsg:(id)arg5 arg:(id)arg6;
- (void)commitAppMonitorArgs:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak WXSDKInstance *weexInstance;

@end

