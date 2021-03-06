//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSOperationQueue, NSTimer, TBLocalShelfManager;

@interface TBSyncManager : NSObject
{
    TBLocalShelfManager *_shelfManager;
    NSOperationQueue *_managementQueue;
    NSOperationQueue *_bookmarkQueue;
    NSMutableDictionary *_bookmarkBucket;
    NSOperationQueue *_progressQueue;
    NSMutableDictionary *_progressBucket;
    NSOperationQueue *_annotationQueue;
    NSMutableDictionary *_annotationBucket;
    NSMutableSet *_localWorksIDs;
    NSTimer *_cronTimer;
    CDStruct_9595961f _handoffLock;
    _Bool _isRunning;
    double _syncInterval;
}

@property(readonly, nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) double syncInterval; // @synthesize syncInterval=_syncInterval;
- (void).cxx_destruct;
- (id)tb_bareWorksIDsWithSyncTable:(id)arg1;
- (void)tb_addOperation:(id)arg1 toQueue:(id)arg2 bucket:(id)arg3 bucketKey:(id)arg4;
- (void)tb_synchronizeWithChangedWorksIDs:(CDUnknownBlockType)arg1 uploadHandler:(CDUnknownBlockType)arg2 fetchHandler:(CDUnknownBlockType)arg3 statsTableName:(id)arg4 additionalWorksIDs:(id)arg5;
- (id)tb_lastSyncTimeWithTableName:(id)arg1;
- (void)tb_didUpdateLocalAnnotation:(id)arg1;
- (void)tb_addAnnotationUploadOperationsWithIDs:(id)arg1;
- (void)tb_addAnnotationRefreshOperationsWithIDs:(id)arg1;
- (void)tb_refreshAnnotations;
- (void)tb_synchronizeAnnotationsWithAdditionalWorksIDs:(id)arg1;
- (void)tb_didUpdateLocalProgress:(id)arg1;
- (void)tb_addProgressUploadOperationsWithIDs:(id)arg1;
- (void)tb_addProgressFetchOperationsWithIDs:(id)arg1;
- (void)tb_fetchProgresses;
- (void)tb_synchronizeProgressWithAdditionalWorksIDs:(id)arg1;
- (void)tb_didUpdateLocalBookmark:(id)arg1;
- (void)tb_addBookmarkUploadOperationsWithIDs:(id)arg1;
- (void)tb_addBookmarkRefreshOperationsWithIDs:(id)arg1;
- (void)tb_refreshBookmarks;
- (void)tb_synchronizeBookmarkWithAdditionalWorksIDs:(id)arg1;
- (void)tb_synchronize;
- (void)tb_reloadLocalWorksID;
- (void)tb_stopCronTimer;
- (void)tb_startCronTimer;
- (void)tb_stop;
- (void)synchronize;
- (void)stop;
- (void)start;
- (void)tb_reachabilityDidChange;
- (void)tb_willResignActive;
- (void)tb_didBecomeActive;
- (void)tb_startWithConditions;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithShelfManager:(id)arg1;

@end

