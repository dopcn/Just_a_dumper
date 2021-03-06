//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLProtocol.h>

#import "NSStreamDelegate-Protocol.h"
#import "NSURLConnectionDataDelegate-Protocol.h"
#import "NSURLConnectionDelegate-Protocol.h"

@class NSInputStream, NSMutableURLRequest, NSRunLoop, NSString, NSURLConnection;

@interface HttpDNSURLProtocol : NSURLProtocol <NSStreamDelegate, NSURLConnectionDelegate, NSURLConnectionDataDelegate>
{
    NSMutableURLRequest *curRequest;
    NSRunLoop *curRunLoop;
    NSInputStream *inputStream;
    NSURLConnection *_connection;
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (void)stop;
+ (void)start;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)willSendNewRequest:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)handleResponse;
- (void)startRequest;
- (void)stopLoading;
- (void)startLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

