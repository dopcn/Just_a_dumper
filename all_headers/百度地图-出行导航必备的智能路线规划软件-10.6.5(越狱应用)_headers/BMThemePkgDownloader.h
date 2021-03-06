//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class BMThemePkg, NSProgress, NSURLSessionDownloadTask;

@interface BMThemePkgDownloader : NSOperation
{
    _Bool _finished;
    _Bool _executing;
    BMThemePkg *_themePkg;
    NSURLSessionDownloadTask *_downloadTask;
    CDUnknownBlockType _completionSuccessBlock;
    CDUnknownBlockType _errorBlock;
    CDUnknownBlockType _progressBlock;
    NSProgress *_progress;
}

@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
@property(copy, nonatomic) CDUnknownBlockType completionSuccessBlock; // @synthesize completionSuccessBlock=_completionSuccessBlock;
@property(retain, nonatomic) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(readonly, nonatomic) BMThemePkg *themePkg; // @synthesize themePkg=_themePkg;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)cancelDownload;
- (void)resumeDownload;
- (void)suspendDownload;
- (void)completeOperation;
- (void)handleSuccessWithBMThemePkg:(id)arg1;
- (void)handleError:(id)arg1;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (_Bool)installPkgWithSourceZipPath:(id)arg1;
- (void)start;
- (void)setCompletionSuccessBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithThemePkg:(id)arg1;

@end

