//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGMallocProfileMemoryUsageDataSource-Protocol.h"

@class IGMallocProfiler, NSString;
@protocol OS_dispatch_queue;

@interface IGMallocProfilerBridge : NSObject <IGMallocProfileMemoryUsageDataSource>
{
    IGMallocProfiler *_profiler;
    long long _numLogs;
    NSObject<OS_dispatch_queue> *_uploadQueue;
    _Bool _trackerRunning;
    _Bool _overridePromptShown;
    _Bool _listenForTrackerEnabledDebugChanges;
    _Bool _trackerWillRun;
}

+ (id)sharedBridge;
@property _Bool trackerWillRun; // @synthesize trackerWillRun=_trackerWillRun;
@property(nonatomic) _Bool listenForTrackerEnabledDebugChanges; // @synthesize listenForTrackerEnabledDebugChanges=_listenForTrackerEnabledDebugChanges;
- (void).cxx_destruct;
- (void)handleCompletionWithParams:(id)arg1 uncompressedData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)currentMemoryData;
- (void)removeSerializedTraces;
- (_Bool)hasSerializedMemoryTraces;
- (void)logLastActiveProfile:(id)arg1 extra:(id)arg2 topViewControllerName:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)lastActiveProfile;
- (void)logLastSerializedProfile:(id)arg1 extra:(id)arg2 topViewControllerName:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)runMemoryAllocationTrackerIfEligible;
- (id)initPrivate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

