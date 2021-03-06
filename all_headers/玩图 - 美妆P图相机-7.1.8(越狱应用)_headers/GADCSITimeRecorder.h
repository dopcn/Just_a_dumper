//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface GADCSITimeRecorder : NSObject
{
    NSMutableDictionary *_completedVariables;
    NSMutableDictionary *_ongoingVariables;
    NSMutableArray *_experimentIDs;
    NSMutableDictionary *_customizedParameters;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSString *_action;
}

+ (double)currentTime;
@property(readonly, nonatomic) NSDictionary *customizedParameters; // @synthesize customizedParameters=_customizedParameters;
@property(readonly, nonatomic) NSArray *experimentIDs; // @synthesize experimentIDs=_experimentIDs;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)setCustomizedParameterValue:(id)arg1 forKey:(id)arg2;
- (void)removeExperimentID:(id)arg1;
- (void)addExperimentID:(id)arg1;
- (void)removeCompletedVariableForKey:(id)arg1;
- (void)addCompletedVariable:(id)arg1 forKey:(id)arg2;
- (void)addCompletedVariable:(id)arg1;
@property(readonly) NSDictionary *completedVariables;
@property(readonly) NSDictionary *ongoingVariables;
- (void)cancelTimingVariableWithName:(id)arg1 key:(id)arg2;
- (void)endTimingVariableWithName:(id)arg1 key:(id)arg2;
- (double)durationAfterCommonEndTimingVariableWithName:(id)arg1 key:(id)arg2;
- (void)startTimingVariableWithName:(id)arg1 key:(id)arg2;
- (void)cancelTimingVariableWithName:(id)arg1;
- (long long)durationAfterEndTimingVariableWithName:(id)arg1;
- (void)endTimingVariableWithName:(id)arg1;
- (void)startTimingVariableWithName:(id)arg1;
- (id)init;
- (id)initWithAction:(id)arg1;

@end

