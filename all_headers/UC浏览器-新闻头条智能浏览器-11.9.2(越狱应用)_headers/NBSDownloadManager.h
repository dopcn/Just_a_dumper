//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DownloadModelObserver-Protocol.h"
#import "NBSDownloadManagerProtocol-Protocol.h"
#import "NBSVPSFetchObserver-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class FMDatabaseQueue, NBSDownloadMonitor, NBSVPSFetchQueue, NSMapTable, NSMutableArray, NSMutableDictionary, NSString, ObserverContainer, UCReachability;
@protocol DownloadModel;

@interface NBSDownloadManager : NSObject <DownloadModelObserver, NBSVPSFetchObserver, UIAlertViewDelegate, NBSDownloadManagerProtocol>
{
    unsigned int _maxProgressingTaskCount;
    ObserverContainer *_observerContainer;
    NSMutableDictionary *_taskObserverDict;
    id <DownloadModel> _downloadModel;
    UCReachability *_reachability;
    NBSVPSFetchQueue *_vpsFetchQueue;
    NBSDownloadMonitor *_downloadMonitor;
    NSMutableArray *_pendingTaskList;
    NSMutableArray *_downloadingTaskList;
    NSMapTable *_allTaskTable;
    NSMutableArray *_pendingSaveTaskList;
}

+ (id)sharedManager;
@property(nonatomic) unsigned int maxProgressingTaskCount; // @synthesize maxProgressingTaskCount=_maxProgressingTaskCount;
@property(retain, nonatomic) NSMutableArray *pendingSaveTaskList; // @synthesize pendingSaveTaskList=_pendingSaveTaskList;
@property(retain, nonatomic) NSMapTable *allTaskTable; // @synthesize allTaskTable=_allTaskTable;
@property(retain, nonatomic) NSMutableArray *downloadingTaskList; // @synthesize downloadingTaskList=_downloadingTaskList;
@property(retain, nonatomic) NSMutableArray *pendingTaskList; // @synthesize pendingTaskList=_pendingTaskList;
@property(retain, nonatomic) NBSDownloadMonitor *downloadMonitor; // @synthesize downloadMonitor=_downloadMonitor;
@property(retain, nonatomic) NBSVPSFetchQueue *vpsFetchQueue; // @synthesize vpsFetchQueue=_vpsFetchQueue;
@property(retain, nonatomic) UCReachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) id <DownloadModel> downloadModel; // @synthesize downloadModel=_downloadModel;
@property(retain, nonatomic) NSMutableDictionary *taskObserverDict; // @synthesize taskObserverDict=_taskObserverDict;
@property(retain, nonatomic) ObserverContainer *observerContainer; // @synthesize observerContainer=_observerContainer;
- (id)getTaskSaveRelativeDir;
- (id)getTaskSavePath;
- (id)getDownloadDirectory;
- (id)getCurrentTaskWithDownloadTaskId:(long long)arg1;
- (unsigned long long)statusForDownloadStatus:(unsigned int)arg1;
- (void)notifyObserversForTask:(id)arg1;
- (void)updateDBWithTasks:(id)arg1;
- (void)updateDBWithTask:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)vpsFailedResponseWith:(long long)arg1 itemId:(id)arg2;
- (void)vpsSuccessResponseWith:(id)arg1 itemId:(id)arg2;
- (_Bool)downloadModel:(id)arg1 taskNeedAlertBeforeRetry:(id)arg2;
- (_Bool)canHandleFailedTaskBeforeRetry:(id)arg1;
- (void)downloadModel:(id)arg1 taskDidChangeStatus:(id)arg2;
- (void)downloadModel:(id)arg1 taskDidChangeProgress:(id)arg2;
- (id)getAllTasks;
- (id)getTaskWithTaskId:(unsigned long long)arg1;
- (void)deleteAllTasks;
- (void)deleteTasks:(id)arg1;
- (void)replaceTasks:(id)arg1;
- (void)replaceTask:(id)arg1;
- (_Bool)limitAllTasks;
- (_Bool)resumeAllLimitedTasks;
- (void)resumeAllTasks;
- (void)cancelAllTasks;
- (void)suspendAllTasks;
- (void)removeObserver:(id)arg1 forTaskId:(long long)arg2;
- (void)addObserver:(id)arg1 forTaskId:(long long)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (long long)uncompletedTaskCount;
- (_Bool)hasWorkingTasks;
- (id)downloadTaskWithResultSet:(id)arg1;
- (unsigned long long)statusForTaskId:(long long)arg1;
- (unsigned long long)statusForKey:(id)arg1;
- (id)taskForTaskId:(long long)arg1;
- (id)taskForKey:(id)arg1;
- (void)cancelTasks:(id)arg1;
- (void)cancelTask:(id)arg1;
- (void)cancelActionWithTask:(id)arg1;
- (void)suspendTasks:(id)arg1;
- (void)suspendActionWithTask:(id)arg1;
- (void)suspendTask:(id)arg1;
- (id)createOrConfigDownloadTaskWithTask:(id)arg1;
- (void)runDownloadTaskCheckLoop;
- (void)resumeTasks:(id)arg1;
- (void)resumeActionWithTask:(id)arg1;
- (void)resumeTask:(id)arg1;
- (id)addTaskWithTaskId:(long long)arg1 url:(id)arg2 umsId:(id)arg3 totalSize:(long long)arg4;
- (id)addTaskWithTaskId:(long long)arg1 url:(id)arg2 umsId:(id)arg3 totalSize:(long long)arg4 autoResume:(_Bool)arg5;
@property(readonly, nonatomic) FMDatabaseQueue *databaseQueue;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

