//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MttMarkNewRecord-Protocol.h"
#import "MttTaskInfoMaker-Protocol.h"

@class NSDate, NSMutableString, NSString;
@protocol DTaskDelegate;

@interface BaseTask : NSObject <MttTaskInfoMaker, MttMarkNewRecord>
{
    _Bool _isOldVersionTask;
    _Bool _errorStatusDbDone;
    _Bool _retryBD;
    NSString *_strFolderName;
    NSString *_initialFileName;
    long long _taskType;
    id <DTaskDelegate> _delegateDTask;
    long long _dbID;
    NSString *_taskURL;
    NSMutableString *_realFileName;
    long long _totalSize;
    long long _downSize;
    long long _status;
    long long _fileType;
    NSDate *_taskDate;
    NSString *_referer;
    NSString *_extendedInfo;
    long long _option1;
    long long _option2;
    NSString *_speedDescription;
    long long _markNewFlag;
    NSString *_hashFolderName;
    NSString *_taskNameForTip;
}

+ (id)md5StringOfTask:(id)arg1;
+ (id)getRenameFile:(id)arg1;
+ (_Bool)isAvailableFileName:(id)arg1;
+ (_Bool)isRecursiveAvailable:(id)arg1;
+ (id)stringByStatus:(long long)arg1;
+ (id)realDownloadFilePath:(id)arg1 folder:(id)arg2;
+ (id)downFilePathDir;
+ (id)flowValueToText:(unsigned long long)arg1;
@property(retain, nonatomic) NSString *taskNameForTip; // @synthesize taskNameForTip=_taskNameForTip;
@property(retain, nonatomic) NSString *hashFolderName; // @synthesize hashFolderName=_hashFolderName;
@property(nonatomic) long long markNewFlag; // @synthesize markNewFlag=_markNewFlag;
@property(retain, nonatomic) NSString *speedDescription; // @synthesize speedDescription=_speedDescription;
@property(nonatomic) long long option2; // @synthesize option2=_option2;
@property(nonatomic) long long option1; // @synthesize option1=_option1;
@property(retain, nonatomic) NSString *extendedInfo; // @synthesize extendedInfo=_extendedInfo;
@property(copy, nonatomic) NSString *referer; // @synthesize referer=_referer;
@property(retain, nonatomic) NSDate *taskDate; // @synthesize taskDate=_taskDate;
@property(nonatomic) _Bool retryBD; // @synthesize retryBD=_retryBD;
@property(nonatomic) long long fileType; // @synthesize fileType=_fileType;
@property(nonatomic) _Bool errorStatusDbDone; // @synthesize errorStatusDbDone=_errorStatusDbDone;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long downSize; // @synthesize downSize=_downSize;
@property(nonatomic) long long totalSize; // @synthesize totalSize=_totalSize;
@property(retain, nonatomic) NSMutableString *realFileName; // @synthesize realFileName=_realFileName;
@property(retain, nonatomic) NSString *taskURL; // @synthesize taskURL=_taskURL;
@property(nonatomic) long long dbID; // @synthesize dbID=_dbID;
@property(nonatomic) __weak id <DTaskDelegate> delegateDTask; // @synthesize delegateDTask=_delegateDTask;
@property(nonatomic) long long taskType; // @synthesize taskType=_taskType;
@property(retain, nonatomic) NSString *initialFileName; // @synthesize initialFileName=_initialFileName;
@property(retain, nonatomic) NSString *strFolderName; // @synthesize strFolderName=_strFolderName;
@property(nonatomic) _Bool isOldVersionTask; // @synthesize isOldVersionTask=_isOldVersionTask;
- (void).cxx_destruct;
- (void)didReadFromDB;
- (void)willWriteToDB;
- (void)updateFileType;
- (_Bool)moveXunfengItemAtPath:(id)arg1 toPath:(id)arg2;
- (double)videoDuration;
- (id)videoFisrtImage;
- (void)terminateTask;
- (void)reStartTask;
- (int)startTask;
- (void)runTask;
- (void)stopTask;
- (id)init;
- (_Bool)isVideo;
- (_Bool)downloadTaskFileIsExisted;
- (_Bool)isTaskFinished;
- (id)extensionFilename;
- (id)statusDes;
- (id)progressDes;
- (unsigned long long)caculateDownSize;
- (unsigned long long)caculateTotalSize;
- (double)progressFloatValue;
- (id)fileName;
- (id)getRenameFile:(id)arg1;
- (_Bool)isAvailableFileName:(id)arg1;
- (id)fullDownloadFilePathWithFolder:(id)arg1;
- (id)realFilePath;
- (id)relativeFilePath;
- (id)getFolderPath;
- (void)setMarkNewShown:(_Bool)arg1;
- (_Bool)getMarkNewStatus;
- (id)handlerIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

