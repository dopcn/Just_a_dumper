//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSURLConnectionDataDelegate-Protocol.h"

@class NSConditionLock, NSError, NSMutableData, NSString, NSThread, NSURL, NSURLConnection, NSURLResponse;

@interface BDS_TTSMySynchronousConnection : NSObject <NSURLConnectionDataDelegate>
{
    _Bool _isCancelled;
    NSURLConnection *_myConnection;
    NSURL *_originalURL;
    NSConditionLock *_connectionFinishedCond;
    NSMutableData *_responseData;
    NSURLResponse *_receivedResponse;
    NSError *_receivedError;
    NSThread *_connectionRunLoop;
}

@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(retain, nonatomic) NSThread *connectionRunLoop; // @synthesize connectionRunLoop=_connectionRunLoop;
@property(retain, nonatomic) NSError *receivedError; // @synthesize receivedError=_receivedError;
@property(retain, nonatomic) NSURLResponse *receivedResponse; // @synthesize receivedResponse=_receivedResponse;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSConditionLock *connectionFinishedCond; // @synthesize connectionFinishedCond=_connectionFinishedCond;
@property(retain) NSURL *originalURL; // @synthesize originalURL=_originalURL;
@property(retain) NSURLConnection *myConnection; // @synthesize myConnection=_myConnection;
- (void).cxx_destruct;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (id)sendSynchronousRequest:(id)arg1 originalURL:(id)arg2 returningResponse:(id *)arg3 error:(id *)arg4;
- (void)reset;
- (void)doRunLoop;
- (void)cancel;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

