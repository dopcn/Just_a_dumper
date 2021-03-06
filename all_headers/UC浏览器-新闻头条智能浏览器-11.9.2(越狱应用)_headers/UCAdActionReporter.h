//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "NSURLConnectionDataDelegate-Protocol.h"

@class NSString, NSThread, NSURLConnection, UCAdProperty;
@protocol UCAdActionReporterDelegate;

@interface UCAdActionReporter : NSOperation <NSURLConnectionDataDelegate>
{
    _Bool m_hasRetried;
    _Bool _shouldKeepRunning;
    id <UCAdActionReporterDelegate> _delegate;
    long long _type;
    UCAdProperty *_property;
    NSString *_requestUrl;
    long long _state;
    NSURLConnection *_connection;
    NSThread *_operationThread;
    double _reqBeginTime;
}

+ (id)reportWithReqItem:(id)arg1 delegate:(id)arg2;
@property(nonatomic) double reqBeginTime; // @synthesize reqBeginTime=_reqBeginTime;
@property(nonatomic) _Bool shouldKeepRunning; // @synthesize shouldKeepRunning=_shouldKeepRunning;
@property(retain, nonatomic) NSThread *operationThread; // @synthesize operationThread=_operationThread;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *requestUrl; // @synthesize requestUrl=_requestUrl;
@property(retain, nonatomic) UCAdProperty *property; // @synthesize property=_property;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) id <UCAdActionReporterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addReqPerformanceWithRet:(_Bool)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)handleFailWithError:(id)arg1;
- (void)retryConnection;
- (void)startConnection;
- (void)stopConnection;
- (void)cancelConnection;
- (void)cleanup;
- (void)cancel;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (void)dealloc;
- (id)initWithReqItem:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

