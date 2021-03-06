//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"

@class NSIndexSet, NSMutableDictionary, NSOperationQueue, NSString, NSURLSession, RIMFaceServiceConfiguration;

@interface RIMFaceHTTPService : NSObject <NSURLSessionDataDelegate>
{
    RIMFaceServiceConfiguration *_httpServiceConfiguration;
    NSIndexSet *_acceptableStatusCodes;
    NSOperationQueue *_queue;
    NSURLSession *_httpSession;
    NSURLSession *_httpUploadSession;
    NSOperationQueue *_uploadQueue;
    NSMutableDictionary *_taskProgressHandlerKeyedByTaskHash;
}

+ (id)fetchSystemInfo;
+ (id)wcpEncoded;
+ (void)releaseInstance;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *taskProgressHandlerKeyedByTaskHash; // @synthesize taskProgressHandlerKeyedByTaskHash=_taskProgressHandlerKeyedByTaskHash;
@property(retain, nonatomic) NSOperationQueue *uploadQueue; // @synthesize uploadQueue=_uploadQueue;
@property(retain, nonatomic) NSURLSession *httpUploadSession; // @synthesize httpUploadSession=_httpUploadSession;
@property(retain, nonatomic) NSURLSession *httpSession; // @synthesize httpSession=_httpSession;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSIndexSet *acceptableStatusCodes; // @synthesize acceptableStatusCodes=_acceptableStatusCodes;
@property(retain, nonatomic) RIMFaceServiceConfiguration *httpServiceConfiguration; // @synthesize httpServiceConfiguration=_httpServiceConfiguration;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (id)stringEncodedWithDictionary:(id)arg1;
- (id)dataEncodedWithDictionary:(id)arg1;
- (id)genSig:(id)arg1;
- (id)signParameters:(id)arg1;
- (id)addCommonParamters;
- (id)generateaNonceSign:(id)arg1;
- (id)requestForUploadFileWithURL:(id)arg1 fileData:(id)arg2 mimeType:(id)arg3 params:(id)arg4 retryingNumberOfTimes:(long long)arg5;
- (id)requestWithURL:(id)arg1 parameters:(id)arg2 cookies:(id)arg3 method:(id)arg4;
- (id)requestWithURL:(id)arg1 parameters:(id)arg2 method:(id)arg3;
- (id)executeUploadWithRequest:(id)arg1 progress:(CDUnknownBlockType)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)executeRequest:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (id)URLByReplaceHostForURL:(id)arg1 retryTimes:(long long)arg2;
- (void)handleGetResponse:(id)arg1 data:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)handleGetResponse:(id)arg1 data:(id)arg2 error:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (_Bool)handlePostResponse:(id)arg1 data:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)handlePostResponse:(id)arg1 data:(id)arg2 error:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)postFileWithURL:(id)arg1 fileData:(id)arg2 mimeType:(id)arg3 parameters:(id)arg4 retryTimes:(long long)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (id)postFileWithURL:(id)arg1 fileData:(id)arg2 mimeType:(id)arg3 parameters:(id)arg4 retryTimes:(long long)arg5 progress:(CDUnknownBlockType)arg6 success:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
- (void)postWithURL:(id)arg1 parameters:(id)arg2 cookies:(id)arg3 retryTimes:(long long)arg4 onCompletion:(CDUnknownBlockType)arg5;
- (void)postWithURL:(id)arg1 parameters:(id)arg2 cookies:(id)arg3 retryTimes:(long long)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)postFileWithURL:(id)arg1 fileData:(id)arg2 mimeType:(id)arg3 parameters:(id)arg4 progress:(CDUnknownBlockType)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)postFileWithURL:(id)arg1 fileData:(id)arg2 mimeType:(id)arg3 parameters:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)getWithURL:(id)arg1 parameters:(id)arg2 cookies:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getWithURL:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getWithURL:(id)arg1 parameters:(id)arg2 cookies:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)getWithURL:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)postWithURL:(id)arg1 parameters:(id)arg2 cookies:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)postWithURL:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)postWithURL:(id)arg1 parameters:(id)arg2 cookies:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)postWithURL:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

