//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface ACTAutomatedUsageTracker : NSObject
{
    double _timeToEndOfPriorUsageIntervalSince1970;
    long long _startUsageReportingOnceToken;
    _Bool _shouldContinueReporting;
    NSMutableDictionary *_reporters;
    NSMutableSet *_disabledConversionIDs;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

+ (_Bool)automatedUsageReportingIsDisabledForConversionID:(id)arg1;
+ (void)disableAutomatedUsageReportingWithConversionID:(id)arg1;
+ (void)enableAutomatedUsageReportingWithConversionID:(id)arg1;
@property(nonatomic) _Bool shouldContinueReporting; // @synthesize shouldContinueReporting=_shouldContinueReporting;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue; // @synthesize lockQueue=_lockQueue;
@property(retain, nonatomic) NSMutableSet *disabledConversionIDs; // @synthesize disabledConversionIDs=_disabledConversionIDs;
@property(retain, nonatomic) NSMutableDictionary *reporters; // @synthesize reporters=_reporters;
- (void).cxx_destruct;
- (void)reportingIntervalElapsed;
- (void)reportAtSecondsSince1970:(double)arg1;
- (void)disableAutomatedUsageReportingWithConversionID:(id)arg1;
- (double)timeToEndOfCurrentUsageIntervalSince1970;
@property(nonatomic) double timeToEndOfPriorUsageIntervalSince1970;
- (id)reporterWithConversionID:(id)arg1;
- (void)enableAutomatedUsageReportingWithConversionID:(id)arg1;
- (void)attemptToEnableAutomatedUsageReportingWithConversionID:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setPersistentTimeToNextUsageIntervalSince1970:(double)arg1;
- (double)persistentTimeToNextUsageIntervalSince1970;

@end

