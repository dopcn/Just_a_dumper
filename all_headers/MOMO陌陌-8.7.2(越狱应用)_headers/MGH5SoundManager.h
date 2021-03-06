//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MDFileReceiverDelegate-Protocol.h"

@class NSString;

@interface MGH5SoundManager : NSObject <MDFileReceiverDelegate>
{
    NSString *_gameH5ResourcePath;
    NSString *_projectPath;
    NSString *_localVersionFileName;
    NSString *_localVNumber;
    NSString *_soundZipFileName;
    NSString *_soundDir;
    NSString *_rootUrl;
    NSString *_curZipMd5;
    CDUnknownBlockType _eventBlock;
    CDUnknownBlockType _downloadBlock;
    NSString *_callBackKey;
}

+ (id)share;
@property(retain, nonatomic) NSString *callBackKey; // @synthesize callBackKey=_callBackKey;
@property(copy, nonatomic) CDUnknownBlockType downloadBlock; // @synthesize downloadBlock=_downloadBlock;
@property(copy, nonatomic) CDUnknownBlockType eventBlock; // @synthesize eventBlock=_eventBlock;
@property(copy, nonatomic) NSString *curZipMd5; // @synthesize curZipMd5=_curZipMd5;
@property(copy, nonatomic) NSString *rootUrl; // @synthesize rootUrl=_rootUrl;
@property(copy, nonatomic) NSString *soundDir; // @synthesize soundDir=_soundDir;
@property(copy, nonatomic) NSString *soundZipFileName; // @synthesize soundZipFileName=_soundZipFileName;
@property(copy, nonatomic) NSString *localVNumber; // @synthesize localVNumber=_localVNumber;
@property(copy, nonatomic) NSString *localVersionFileName; // @synthesize localVersionFileName=_localVersionFileName;
@property(copy, nonatomic) NSString *projectPath; // @synthesize projectPath=_projectPath;
@property(copy, nonatomic) NSString *gameH5ResourcePath; // @synthesize gameH5ResourcePath=_gameH5ResourcePath;
- (void).cxx_destruct;
- (void)playFile:(id)arg1 soundManager:(id)arg2;
- (void)deleteFile:(id)arg1 fileName:(id)arg2;
- (void)downloadFile:(id)arg1 soundPath:(id)arg2 callBack:(id)arg3 fileName:(id)arg4 block:(CDUnknownBlockType)arg5;
- (void)stopSound:(id)arg1;
- (void)playSound:(id)arg1 soundManager:(id)arg2;
- (void)deleteTempFile;
- (void)deleteOldZipFile;
- (void)fileReceive:(id)arg1 setProgress:(float)arg2 total:(float)arg3;
- (void)fileReceiveFail:(id)arg1;
- (void)fileReceiveCancel:(id)arg1;
- (void)fileReceiveFinish:(id)arg1;
- (void)downloadResZip:(id)arg1;
- (void)downloadVersionFile:(id)arg1;
- (void)checkNeedDownload:(id)arg1 projectPath:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)updateLocalPathes;
- (void)initResouceListFileName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

