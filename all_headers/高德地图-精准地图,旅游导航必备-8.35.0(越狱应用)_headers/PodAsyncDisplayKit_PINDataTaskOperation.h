//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "NSURLSessionDelegate-Protocol.h"

@class NSRecursiveLock, NSString, NSURLSessionDataTask;

@interface PodAsyncDisplayKit_PINDataTaskOperation : NSOperation <NSURLSessionDelegate>
{
    NSRecursiveLock *_lock;
    NSURLSessionDataTask *_dataTask;
    unsigned long long _state;
}

+ (id)dataTaskOperationWithSessionManager:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
- (void).cxx_destruct;
- (void)unlock;
- (void)lock;
- (void)cancelTask;
- (void)finish;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (void)cancel;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

