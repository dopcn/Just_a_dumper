//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSDKServer.h"

#import "TBSDKConnectionDelegate-Protocol.h"

@class NSString, TBSDKConnection;

@interface TBSDKTOPServer : TBSDKServer <TBSDKConnectionDelegate>
{
    _Bool _isUseHttpPost;
    _Bool _needsUserSession;
    NSString *_apiName;
    TBSDKConnection *_connection;
    NSString *_rid;
}

+ (id)requestWithMethod:(id)arg1;
@property(retain, nonatomic) NSString *rid; // @synthesize rid=_rid;
@property(retain, nonatomic) TBSDKConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool needsUserSession; // @synthesize needsUserSession=_needsUserSession;
@property(retain, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
@property(nonatomic) _Bool isUseHttpPost; // @synthesize isUseHttpPost=_isUseHttpPost;
- (void).cxx_destruct;
- (void)failed;
- (void)succeed;
- (void)requestNetworkDataSet:(id)arg1 withFinishedTime:(double)arg2;
- (void)request:(id)arg1 didReceiveData:(id)arg2;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)request:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)requestStarted:(id)arg1;
- (void)clearDelegatesAndCancel;
- (void)startAsynchronousByCacheKey:(id)arg1 cacheTimeout:(double)arg2;
- (void)startSynchronousByCacheKey:(id)arg1 cacheTimeout:(double)arg2;
- (void)buildConnection;
- (void)startAsynchronous;
- (void)startSynchronous;
- (void)removeParam:(id)arg1;
- (void)addParam:(id)arg1 forKey:(id)arg2;
- (id)sign;
- (void)setupTOPRequestDataSourceAndRequest;
- (void)setupTOPRequestProtocolParameters;
- (id)initWithMethod:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

