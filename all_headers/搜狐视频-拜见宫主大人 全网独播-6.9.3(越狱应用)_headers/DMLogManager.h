//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DMLogManagerProtocol-Protocol.h"

@class AFOperationManager_Retry, NSLock, NSMutableDictionary, NSString;

@interface DMLogManager : NSObject <DMLogManagerProtocol>
{
    _Bool _startDMTrack;
    _Bool _isSendingDMLog;
    NSString *_currentLogFileName;
    NSLock *_fileLock;
    NSMutableDictionary *_temCachedLogDict;
    AFOperationManager_Retry *_afnOpertionManager;
    NSString *_filePathWhichFailedToRemove;
}

+ (id)getFileNameByCurrentDate;
+ (id)getFilePathByFileName:(id)arg1;
+ (id)getLogPath;
+ (id)loadFileNames;
@property(copy, nonatomic) NSString *filePathWhichFailedToRemove; // @synthesize filePathWhichFailedToRemove=_filePathWhichFailedToRemove;
@property(retain, nonatomic) AFOperationManager_Retry *afnOpertionManager; // @synthesize afnOpertionManager=_afnOpertionManager;
@property(retain, nonatomic) NSMutableDictionary *temCachedLogDict; // @synthesize temCachedLogDict=_temCachedLogDict;
@property(nonatomic) _Bool isSendingDMLog; // @synthesize isSendingDMLog=_isSendingDMLog;
@property(retain, nonatomic) NSLock *fileLock; // @synthesize fileLock=_fileLock;
@property(nonatomic) _Bool startDMTrack; // @synthesize startDMTrack=_startDMTrack;
@property(retain, nonatomic) NSString *currentLogFileName; // @synthesize currentLogFileName=_currentLogFileName;
- (void).cxx_destruct;
- (void)saveAllCachedLogItem;
- (id)createNewLogFileWithLogItems:(id)arg1;
- (id)getLogListByFileName:(id)arg1;
- (_Bool)removeFileByFileName:(id)arg1;
- (_Bool)removeFirstLogItemOfFileName:(id)arg1;
- (_Bool)removeFirstLogItem;
- (int)getCachingArrayMaxCountWithLogType:(unsigned long long)arg1;
- (void)setCachingArrayWithLogType:(unsigned long long)arg1 array:(id)arg2;
- (id)getCachingArrayWithLogType:(unsigned long long)arg1;
- (void)saveCachingLogsToFileWithLogType:(unsigned long long)arg1;
- (void)saveCachingLogsToFileWithLogTypeNumber:(id)arg1;
- (void)saveCachingLogsToFileWithLogType:(unsigned long long)arg1 afterDelay:(double)arg2;
- (void)saveLogItem:(id)arg1;
- (void)logOnLineRequestDidFailed;
- (void)logOnLineRequestDidFinish;
- (void)logOnLineRequestDidFinishOrFailed:(id)arg1;
- (id)sendRequest:(id)arg1;
- (void)sendDMOnlineLog:(id)arg1;
- (void)judgeToSendNextDMLog;
- (void)unscheduleToSendDMLog;
- (void)scheduleToSendDMLog;
- (void)reloadCurrentLogFileName;
- (void)loadDefaultSettings;
- (void)stopTracker;
- (void)startTracker;
@property(readonly, nonatomic) _Bool isTrackerStarted;
- (void)sendDMLog:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

