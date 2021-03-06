//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MttSpotlightTaskDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MttSpotlightFileTaskManager : NSObject <MttSpotlightTaskDelegate>
{
    _Bool _isProcessingTask;
    NSMutableArray *_taskList;
    NSMutableDictionary *_taskPropertylist;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isProcessingTask; // @synthesize isProcessingTask=_isProcessingTask;
@property(retain, nonatomic) NSMutableDictionary *taskPropertylist; // @synthesize taskPropertylist=_taskPropertylist;
@property(retain, nonatomic) NSMutableArray *taskList; // @synthesize taskList=_taskList;
- (void).cxx_destruct;
- (void)clearPlist;
- (void)plistSaveToFile;
- (void)readLocalTasks;
- (void)removePlistTask:(id)arg1;
- (void)addNewTaskToPlist:(id)arg1;
- (void)removeTask:(id)arg1;
- (void)addNewTask:(id)arg1;
- (_Bool)taskExisted:(id)arg1;
- (void)onSPLTaskFail:(id)arg1 shouldRetry:(_Bool)arg2;
- (void)onSPLTaskComplete:(id)arg1;
- (void)doNextTask;
- (void)startProcessingTasks;
- (id)getLastFileTask;
- (void)resumeSpotlightLocalTasks;
- (void)startNewTaskWithFileUrl:(id)arg1 md5:(id)arg2 timeStamp:(long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

