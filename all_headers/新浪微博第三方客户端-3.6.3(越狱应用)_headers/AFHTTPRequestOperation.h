//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFURLConnectionOperation.h"

@class NSError, NSHTTPURLResponse, NSRecursiveLock, NSURLRequest;

@interface AFHTTPRequestOperation : AFURLConnectionOperation
{
    NSError *_HTTPError;
    struct dispatch_queue_s *_successCallbackQueue;
    struct dispatch_queue_s *_failureCallbackQueue;
}

+ (_Bool)canProcessRequest:(id)arg1;
+ (void)addAcceptableContentTypes:(id)arg1;
+ (id)acceptableContentTypes;
+ (void)addAcceptableStatusCodes:(id)arg1;
+ (id)acceptableStatusCodes;
@property(nonatomic) struct dispatch_queue_s *failureCallbackQueue; // @synthesize failureCallbackQueue=_failureCallbackQueue;
@property(nonatomic) struct dispatch_queue_s *successCallbackQueue; // @synthesize successCallbackQueue=_successCallbackQueue;
@property(retain, nonatomic) NSError *HTTPError; // @synthesize HTTPError=_HTTPError;
- (void).cxx_destruct;
- (void)setCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool hasAcceptableContentType;
@property(readonly, nonatomic) _Bool hasAcceptableStatusCode;
- (void)pause;
- (unsigned long long)responseStringEncoding;
- (id)error;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSRecursiveLock *lock; // @dynamic lock;
@property(retain, nonatomic) NSURLRequest *request; // @dynamic request;
@property(retain, nonatomic) NSHTTPURLResponse *response; // @dynamic response;

@end

