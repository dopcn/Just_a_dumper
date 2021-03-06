//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface SVPNetworkService : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate>
{
    NSString *_hostName;
    long long _portNumber;
    NSString *_path;
    NSDictionary *_defaultHeaders;
    unsigned long long _defaultParameterEncoding;
    CDUnknownBlockType _backgroundSessionCompletionHandler;
    NSURLSession *_backgroundSession;
    NSObject<OS_dispatch_queue> *_taskSynzQueue;
    NSMutableDictionary *_taskDelegateMap;
    CDUnknownBlockType _completionBackgroundHandler;
}

+ (void)didFinishBackgroundUploadTasks;
+ (_Bool)handleEventsForBackgroundURLSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)sharedService;
@property(copy, nonatomic) CDUnknownBlockType completionBackgroundHandler; // @synthesize completionBackgroundHandler=_completionBackgroundHandler;
@property(retain, nonatomic) NSMutableDictionary *taskDelegateMap; // @synthesize taskDelegateMap=_taskDelegateMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *taskSynzQueue; // @synthesize taskSynzQueue=_taskSynzQueue;
@property(retain, nonatomic) NSURLSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property(copy) CDUnknownBlockType backgroundSessionCompletionHandler; // @synthesize backgroundSessionCompletionHandler=_backgroundSessionCompletionHandler;
@property(nonatomic) unsigned long long defaultParameterEncoding; // @synthesize defaultParameterEncoding=_defaultParameterEncoding;
@property(retain, nonatomic) NSDictionary *defaultHeaders; // @synthesize defaultHeaders=_defaultHeaders;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) long long portNumber; // @synthesize portNumber=_portNumber;
@property(copy, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)removeDelegateForTask:(id)arg1;
- (void)setDelegateForRequest:(id)arg1;
- (id)delegateForTask:(id)arg1;
- (id)requestWithPath:(id)arg1 params:(id)arg2 httpMethod:(id)arg3;
- (id)requestWithPath:(id)arg1 params:(id)arg2;
- (id)requestWithPath:(id)arg1;
- (id)requestWithURLString:(id)arg1;
- (void)startRequest:(id)arg1;
- (void)startUploadRequest:(id)arg1;
- (id)init;
- (id)Get:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)Get:(id)arg1 params:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)Post2:(id)arg1 data:(id)arg2 params:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)Post2:(id)arg1 params:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)Post2:(id)arg1 data:(id)arg2 params:(id)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

