//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class BDDUSecurityPolicy, NSArray, NSLock, NSMutableDictionary, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol BDDUURLResponseSerialization, OS_dispatch_group, OS_dispatch_queue;

@interface BDDUURLSessionManager : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    _Bool _attemptsToRecreateUploadTasksForBackgroundSessions;
    NSURLSession *_session;
    NSOperationQueue *_operationQueue;
    id <BDDUURLResponseSerialization> _responseSerializer;
    BDDUSecurityPolicy *_securityPolicy;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_group> *_completionGroup;
    NSURLSessionConfiguration *_sessionConfiguration;
    NSMutableDictionary *_mutableTaskDelegatesKeyedByTaskIdentifier;
    NSLock *_lock;
}

@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *mutableTaskDelegatesKeyedByTaskIdentifier; // @synthesize mutableTaskDelegatesKeyedByTaskIdentifier=_mutableTaskDelegatesKeyedByTaskIdentifier;
@property(retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property(nonatomic) _Bool attemptsToRecreateUploadTasksForBackgroundSessions; // @synthesize attemptsToRecreateUploadTasksForBackgroundSessions=_attemptsToRecreateUploadTasksForBackgroundSessions;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *completionGroup; // @synthesize completionGroup=_completionGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) BDDUSecurityPolicy *securityPolicy; // @synthesize securityPolicy=_securityPolicy;
@property(retain, nonatomic) id <BDDUURLResponseSerialization> responseSerializer; // @synthesize responseSerializer=_responseSerializer;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)downloadProgressForTask:(id)arg1;
- (id)uploadProgressForTask:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1 uploadProgress:(CDUnknownBlockType)arg2 downloadProgress:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)removeNotificationObserverForTask:(id)arg1;
- (void)addNotificationObserverForTask:(id)arg1;
- (void)invalidateSessionCancelingTasks:(_Bool)arg1;
@property(readonly, nonatomic) NSArray *dataTasks;
@property(readonly, nonatomic) NSArray *tasks;
- (id)tasksForKeyPath:(id)arg1;
- (void)removeDelegateForTask:(id)arg1;
- (void)addDelegateForDownloadTask:(id)arg1 progress:(CDUnknownBlockType)arg2 destination:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addDelegateForUploadTask:(id)arg1 progress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addDelegateForDataTask:(id)arg1 uploadProgress:(CDUnknownBlockType)arg2 downloadProgress:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setDelegate:(id)arg1 forTask:(id)arg2;
- (id)delegateForTask:(id)arg1;
- (void)taskDidSuspend:(id)arg1;
- (void)taskDidResume:(id)arg1;
@property(readonly, copy, nonatomic) NSString *taskDescriptionForSessionTasks;
- (void)dealloc;
- (id)initWithSessionConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

