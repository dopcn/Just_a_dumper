//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class HVTAgentSDK;

@interface IRSdkPlayerTracker : NSObject
{
    HVTAgentSDK *_irVideoAgent;
    _Bool _isStartingTracking;
}

+ (void)initializeSDK;
- (void).cxx_destruct;
- (id)optionDicFromTrackerDic:(id)arg1;
- (void)endIRSdkTracker:(id)arg1;
- (void)startIRTracker;
- (void)setIRTrackerWithDic:(id)arg1;
- (void)createIRTrackerWithDic:(id)arg1;
- (id)init;

@end

