//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DelegateURLPair, FilesCountTasksPool;
@protocol FilesCountWorkerDelegate;

@interface FilesCountWorker : NSObject
{
    _Bool m_cancel;
    _Bool m_skipCurrentTask;
    long long m_updateInterval;
    FilesCountTasksPool *m_tasksPool;
    id <FilesCountWorkerDelegate> _delegate;
    DelegateURLPair *_currentTask;
}

@property(retain) DelegateURLPair *currentTask; // @synthesize currentTask=_currentTask;
@property(nonatomic) id <FilesCountWorkerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cancelWorkWithDelegate:(id)arg1 url:(id)arg2;
- (void)workWithTasksPool:(id)arg1 delegate:(id)arg2;
- (void)processCurrentTask;
- (long long)getUCVDirFileCount:(id)arg1;
- (void)workerMainProc;
- (void)pickNextTask;
- (void)cancel;
- (void)dealloc;
- (id)init;

@end

