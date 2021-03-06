//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NWPointSession, NWPolicyResult, NWSPDYOrigin, NWSPDYProxy;
@protocol SPDYSessionDelegate;

@interface NWSPDYSession : NSObject
{
    struct NAL_session_t *_socket;
    NWSPDYProxy *_proxy;
    _Bool _pingNoReply;
    _Bool _varProxy;
    unsigned int _retry;
    unsigned int _timeout;
    double _connectedTime;
    int _requestCount;
    int _inceptCount;
    int _pingCount;
    int _status;
    id <SPDYSessionDelegate> _sessionDelegate;
    NWSPDYOrigin *_origin;
    NSString *_domain;
    NWPolicyResult *_policyResult;
    NWPointSession *_uts;
}

+ (id)state2text:(int)arg1;
+ (void)initialize;
@property(retain, nonatomic) NWPointSession *uts; // @synthesize uts=_uts;
@property(readonly, nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) NWPolicyResult *policyResult; // @synthesize policyResult=_policyResult;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) NWSPDYOrigin *origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) __weak id <SPDYSessionDelegate> sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setAuthTime:(double)arg1;
- (id)currentIP;
- (id)getProtocol;
- (void)dataCollection:(struct NAL_connection_count_t *)arg1;
- (void)recvCustomFrameType:(unsigned short)arg1 withFlags:(unsigned char)arg2 withData:(id)arg3;
- (void)sendCustomFrameType:(unsigned short)arg1 withFlags:(unsigned char)arg2 withData:(id)arg3 sslIndex:(unsigned int)arg4;
- (void)willSendHttpBody:(struct NAL_request_t *)arg1;
- (void)sendRequest:(id)arg1;
- (long long)idleValue;
- (_Bool)idle;
- (void)clientPingTimeout;
- (void)recvPingReply:(_Bool)arg1;
- (void)sendPing;
- (void)close:(id)arg1;
- (_Bool)connFail:(int)arg1 error:(id)arg2;
- (void)disConnect:(id)arg1;
- (void)onConnect;
- (_Bool)asynConnect;
- (_Bool)valid;
- (void)setStatus:(int)arg1;
- (_Bool)is0RTT;
- (_Bool)isAuth;
- (void)setSocketPublickey:(id)arg1 forSocket:(struct NAL_session_t *)arg2;
- (struct NAL_session_t *)createTnetSocket:(id)arg1;
- (id)initWithOrigin:(id)arg1 host:(id)arg2 delegate:(id)arg3 policy:(id)arg4 ignLoc:(_Bool)arg5;

@end

