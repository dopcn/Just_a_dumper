//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ENAnalysisLogItemBuilder, NSMutableArray, NSMutableSet, NSString;

@interface ENAnalysisLogCollection : NSObject
{
    _Bool _isLogFileWritting;
    unsigned long long _currentLogEventType;
    NSString *_logFileDir;
    NSString *_logFilePath;
    NSMutableArray *_memoryLogCaches;
    NSMutableSet *_logFileUploadingSet;
    ENAnalysisLogItemBuilder *_currentLogItem;
}

+ (id)currentLogItem;
+ (void)archiveLogs;
+ (void)sendAllLogsToServer;
+ (void)sendArchivedLogsToServerWithCompletion:(CDUnknownBlockType)arg1;
+ (void)saveLogToFile;
+ (void)sendLogItem:(id)arg1;
+ (void)addLogItem:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) ENAnalysisLogItemBuilder *currentLogItem; // @synthesize currentLogItem=_currentLogItem;
@property(nonatomic) _Bool isLogFileWritting; // @synthesize isLogFileWritting=_isLogFileWritting;
@property(retain, nonatomic) NSMutableSet *logFileUploadingSet; // @synthesize logFileUploadingSet=_logFileUploadingSet;
@property(retain, nonatomic) NSMutableArray *memoryLogCaches; // @synthesize memoryLogCaches=_memoryLogCaches;
@property(copy, nonatomic) NSString *logFilePath; // @synthesize logFilePath=_logFilePath;
@property(copy, nonatomic) NSString *logFileDir; // @synthesize logFileDir=_logFileDir;
@property(nonatomic) unsigned long long currentLogEventType; // @synthesize currentLogEventType=_currentLogEventType;
- (void).cxx_destruct;
- (id)getTrackingStreamWithTrackingStream:(id)arg1;
- (unsigned long long)fileSizeAtPath:(id)arg1;
- (void)sendHistoryLogFileToServerWithFileDir:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeLogFileWithFilePath:(id)arg1;
- (void)sendLogFileToServerWithFilePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)archiveLogs;
- (void)writeLogToFile;
- (void)renewLogFilePath;
- (id)logFilePathWithFileName:(id)arg1;
- (void)archiveLogsIfNeeded;

@end

