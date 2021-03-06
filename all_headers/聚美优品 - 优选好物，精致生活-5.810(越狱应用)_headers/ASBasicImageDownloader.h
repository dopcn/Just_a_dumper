//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ASImageDownloaderProtocol-Protocol.h"
#import "NSURLSessionDownloadDelegate-Protocol.h"

@class NSOperationQueue, NSString, NSURLSession;

@interface ASBasicImageDownloader : NSObject <NSURLSessionDownloadDelegate, ASImageDownloaderProtocol>
{
    NSOperationQueue *_sessionDelegateQueue;
    NSURLSession *_session;
}

+ (id)sharedImageDownloader;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)cancelImageDownloadForIdentifier:(id)arg1;
- (id)downloadImageWithURL:(id)arg1 callbackQueue:(id)arg2 downloadProgressBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

