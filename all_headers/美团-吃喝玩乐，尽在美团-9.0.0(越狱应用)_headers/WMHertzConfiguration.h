//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WMHertzConfiguration : NSObject
{
    _Bool _enableExists;
    _Bool _userSamplingRateExists;
    _Bool _samplingRateExists;
    _Bool _laggyThresholdExists;
    _Bool _laggyCountExists;
    _Bool _maxWorkingTimeExists;
    _Bool _maxReportCallStackTimesExists;
    _Bool _enable;
    double _laggyThreshold;
    unsigned long long _laggyCount;
    double _samplingRate;
    double _maxWorkingTime;
    double _userSamplingRate;
    unsigned long long _maxReportCallStackTimes;
    NSString *_pageTrackerConfigFilePath;
}

@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) _Bool maxReportCallStackTimesExists; // @synthesize maxReportCallStackTimesExists=_maxReportCallStackTimesExists;
@property(nonatomic) _Bool maxWorkingTimeExists; // @synthesize maxWorkingTimeExists=_maxWorkingTimeExists;
@property(nonatomic) _Bool laggyCountExists; // @synthesize laggyCountExists=_laggyCountExists;
@property(nonatomic) _Bool laggyThresholdExists; // @synthesize laggyThresholdExists=_laggyThresholdExists;
@property(nonatomic) _Bool samplingRateExists; // @synthesize samplingRateExists=_samplingRateExists;
@property(nonatomic) _Bool userSamplingRateExists; // @synthesize userSamplingRateExists=_userSamplingRateExists;
@property(nonatomic) _Bool enableExists; // @synthesize enableExists=_enableExists;
@property(copy, nonatomic) NSString *pageTrackerConfigFilePath; // @synthesize pageTrackerConfigFilePath=_pageTrackerConfigFilePath;
@property(nonatomic) unsigned long long maxReportCallStackTimes; // @synthesize maxReportCallStackTimes=_maxReportCallStackTimes;
@property(nonatomic) double userSamplingRate; // @synthesize userSamplingRate=_userSamplingRate;
@property(nonatomic) double maxWorkingTime; // @synthesize maxWorkingTime=_maxWorkingTime;
@property(nonatomic) double samplingRate; // @synthesize samplingRate=_samplingRate;
@property(nonatomic) unsigned long long laggyCount; // @synthesize laggyCount=_laggyCount;
@property(nonatomic) double laggyThreshold; // @synthesize laggyThreshold=_laggyThreshold;
- (void).cxx_destruct;
- (_Bool)remoteConfigIsValid;
- (void)mergeWithRemoteConfig:(id)arg1;
- (id)init;

@end

