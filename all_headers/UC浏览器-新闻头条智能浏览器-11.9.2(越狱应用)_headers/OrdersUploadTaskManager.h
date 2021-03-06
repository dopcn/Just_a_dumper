//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPWelfareTaskDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol OrdersUploadManagementItem, OrdersUploadTaskManagerDelegate;

@interface OrdersUploadTaskManager : NSObject <SPWelfareTaskDelegate>
{
    _Bool _didUpdatePendingTasks;
    id <OrdersUploadTaskManagerDelegate> _delegate;
    double _retryInterval;
    unsigned long long _allowableRetryCount;
    unsigned long long _workStage;
    id <OrdersUploadManagementItem> _currentItem;
    NSMutableArray *_pendingItems;
    unsigned long long _retryCount;
}

@property(nonatomic) _Bool didUpdatePendingTasks; // @synthesize didUpdatePendingTasks=_didUpdatePendingTasks;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSMutableArray *pendingItems; // @synthesize pendingItems=_pendingItems;
@property(retain, nonatomic) id <OrdersUploadManagementItem> currentItem; // @synthesize currentItem=_currentItem;
@property(nonatomic) unsigned long long workStage; // @synthesize workStage=_workStage;
@property(nonatomic) unsigned long long allowableRetryCount; // @synthesize allowableRetryCount=_allowableRetryCount;
@property(nonatomic) double retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) id <OrdersUploadTaskManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)startUploadTask:(id)arg1;
- (void)startPendingTaskIfNeeded;
- (void)welfareTaskFaildToSendRequet:(id)arg1;
- (void)welfareTask:(id)arg1 failedWithError:(long long)arg2;
- (void)welfareTask:(id)arg1 succeedWithResponse:(id)arg2;
- (void)onApplicationWillResignActive;
- (void)storeTaskToFileContent:(id)arg1;
- (void)loadTaskFromFileContent:(id)arg1;
- (void)manageCacheTasksFile;
- (void)loadPendingTasksIfNeeded;
- (void)cancelWaitingRetryUploadTask:(id)arg1;
- (void)scheduleUploadTask:(id)arg1;
- (id)ordersFileName;
- (id)ordersDirectoryName;
- (void)handleErrorTaskItem:(id)arg1 fromNeworkReply:(_Bool)arg2 withErrorCode:(long long)arg3;
- (void)copyTaskIfNeeded:(id)arg1;
- (void)startPendingTasksBackwards;
- (void)switchToTask:(id)arg1;
- (void)stopRunningTask;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

