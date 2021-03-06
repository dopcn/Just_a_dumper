//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface JDYRunloopUsageManager : NSObject
{
    unsigned long long _currentUplaodTimes;
    unsigned long long _currentScenes;
    _Bool _isSampling;
    NSObject<OS_dispatch_queue> *_samplingQueue;
    unsigned long long _maxUploadTimes;
    unsigned long long _captureScenesCount;
    double _usageThreshold;
}

+ (id)sharedInstance;
@property(nonatomic) double usageThreshold; // @synthesize usageThreshold=_usageThreshold;
@property(nonatomic) unsigned long long captureScenesCount; // @synthesize captureScenesCount=_captureScenesCount;
@property(nonatomic) unsigned long long maxUploadTimes; // @synthesize maxUploadTimes=_maxUploadTimes;
- (void).cxx_destruct;
- (void)samplingWithTime:(double)arg1 result:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkUsage:(double)arg1;
- (void)stop;
- (void)start;
- (id)init;

@end

