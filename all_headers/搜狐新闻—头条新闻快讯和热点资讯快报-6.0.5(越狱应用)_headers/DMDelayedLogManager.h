//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DMLogManagerProtocol-Protocol.h"

@class AFOperationManager_Retry, NSLock, NSMutableArray, NSString;

@interface DMDelayedLogManager : NSObject <DMLogManagerProtocol>
{
    NSLock *_fileLock;
    AFOperationManager_Retry *_afnOpertionManager;
    NSMutableArray *_afOperationRetryArr;
}

@property(retain, nonatomic) NSMutableArray *afOperationRetryArr; // @synthesize afOperationRetryArr=_afOperationRetryArr;
@property(retain, nonatomic) AFOperationManager_Retry *afnOpertionManager; // @synthesize afnOpertionManager=_afnOpertionManager;
@property(retain, nonatomic) NSLock *fileLock; // @synthesize fileLock=_fileLock;
- (void).cxx_destruct;
- (void)sendDMDelayedLogRequestDidFailed:(id)arg1;
- (void)sendDMDelayedLogRequestDidFinish:(id)arg1 fileName:(id)arg2;
- (void)sendDMDelayedLogRequestDidReturn:(id)arg1 fileName:(id)arg2;
- (id)sendRequest:(id)arg1 filePath:(id)arg2;
- (void)sendDMDelayedLog:(id)arg1 filePath:(id)arg2;
- (void)addDMDelayedLogToLogQueue;
- (void)startToSendDMDelayedLog;
- (void)unscheduleToSendDMDelayedLog;
- (void)scheduleToSendDMDelayedLog;
- (_Bool)removeFirstDMDelayedLogItemFromFile:(id)arg1;
- (id)loadDMDelayedLogsOfFile:(id)arg1;
- (void)appendDMDelayedLogToTheCurrentFile:(id)arg1;
- (id)loadFirstFilePath;
- (void)renewCurrentFile;
- (id)currentFile;
- (void)sendDMLog:(id)arg1;
- (void)stopTracker;
- (void)startTracker;
@property(readonly, nonatomic) _Bool isTrackerStarted; // @dynamic isTrackerStarted;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

