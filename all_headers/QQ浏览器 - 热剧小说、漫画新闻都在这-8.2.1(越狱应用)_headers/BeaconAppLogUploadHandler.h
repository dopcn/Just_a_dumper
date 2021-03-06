//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BeaconAppLogUploadHandler : NSObject
{
    _Bool _isUploading;
    _Bool _isRealtimeUploading;
    _Bool _isChecked;
    _Bool _appLogUploadUsable;
    _Bool _appLogRealTimeUpload;
    int _numOnceUpload;
    int _appLogDirPathType;
    unsigned int _appLogSizeLimit;
    unsigned int _appLogOutDay;
    unsigned int _appLogRecordMax;
    unsigned int _appLogDailyConsumeLimit;
    unsigned int _appLogFileLimit;
    unsigned int _appLogFileTotalMaxSize;
    CDUnknownBlockType _applogResult;
    NSString *_filePath;
    NSString *_dirPath;
    unsigned long long _dayFlow;
    NSString *_realtimeLog;
    NSString *_waitingLog;
    NSString *_userId;
}

+ (_Bool)onAppLogUploadAction:(id)arg1 isRealTime:(_Bool)arg2 isImmediately:(_Bool)arg3;
+ (_Bool)onAppLogUploadAction:(id)arg1 isRealTime:(_Bool)arg2 savePath:(id)arg3;
+ (_Bool)onAppLogUploadAction:(id)arg1 isRealTime:(_Bool)arg2;
+ (_Bool)onAppLogUploadAction:(id)arg1;
+ (void)setAppLogUserId:(id)arg1;
+ (void)doUploadAppLogRecordsWithResult:(CDUnknownBlockType)arg1;
+ (void)doUploadAppLogRecords;
+ (id)getDefaultHandler;
@property(nonatomic) unsigned int appLogFileTotalMaxSize; // @synthesize appLogFileTotalMaxSize=_appLogFileTotalMaxSize;
@property(nonatomic) unsigned int appLogFileLimit; // @synthesize appLogFileLimit=_appLogFileLimit;
@property(nonatomic) unsigned int appLogDailyConsumeLimit; // @synthesize appLogDailyConsumeLimit=_appLogDailyConsumeLimit;
@property(nonatomic) unsigned int appLogRecordMax; // @synthesize appLogRecordMax=_appLogRecordMax;
@property(nonatomic) unsigned int appLogOutDay; // @synthesize appLogOutDay=_appLogOutDay;
@property(nonatomic) unsigned int appLogSizeLimit; // @synthesize appLogSizeLimit=_appLogSizeLimit;
@property(nonatomic) _Bool appLogRealTimeUpload; // @synthesize appLogRealTimeUpload=_appLogRealTimeUpload;
@property(nonatomic) _Bool appLogUploadUsable; // @synthesize appLogUploadUsable=_appLogUploadUsable;
@property(nonatomic) int appLogDirPathType; // @synthesize appLogDirPathType=_appLogDirPathType;
@property(nonatomic) int numOnceUpload; // @synthesize numOnceUpload=_numOnceUpload;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *waitingLog; // @synthesize waitingLog=_waitingLog;
@property(retain, nonatomic) NSString *realtimeLog; // @synthesize realtimeLog=_realtimeLog;
@property(nonatomic) unsigned long long dayFlow; // @synthesize dayFlow=_dayFlow;
@property(nonatomic) _Bool isChecked; // @synthesize isChecked=_isChecked;
@property(nonatomic) _Bool isRealtimeUploading; // @synthesize isRealtimeUploading=_isRealtimeUploading;
@property(nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
@property(retain, nonatomic) NSString *dirPath; // @synthesize dirPath=_dirPath;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) CDUnknownBlockType applogResult; // @synthesize applogResult=_applogResult;
- (void).cxx_destruct;
- (void)finishWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void)canceled:(id)arg1;
- (void)failWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void)resetSomething;
- (void)realtimeLogToFile;
- (void)recordFileFlow:(unsigned long long)arg1;
- (void)isFileSizeOverFlow;
- (id)getUploadFilePath;
- (id)getSaveFilePath;
- (void)deleteLogFile;
- (void)deleteAllLogFile;
- (void)deletePastLogFile;
- (void)checkLogFile;
- (_Bool)checkFileSize:(id)arg1;
- (id)checkLogSize:(id)arg1;
- (_Bool)checkFileFlow;
- (void)fileListShow;
- (_Bool)writeData:(id)arg1 toFileHandle:(id)arg2 error:(id *)arg3;
- (_Bool)appString:(id)arg1;
- (id)replaceSpeciaChar:(id)arg1;
- (id)getLogStr;
- (void)realtimeUploadApplog:(id)arg1;
- (void)uploadApplog;
- (void)cloudParamInit;
- (id)init;

@end

