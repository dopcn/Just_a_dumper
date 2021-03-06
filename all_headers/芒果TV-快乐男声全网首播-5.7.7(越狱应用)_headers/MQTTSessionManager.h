//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MQTTSessionDelegate-Protocol.h"

@class MQTTSSLSecurityPolicy, MQTTSession, NSArray, NSData, NSDictionary, NSError, NSMutableDictionary, NSString, NSTimer;
@protocol MQTTSessionManagerDelegate;

@interface MQTTSessionManager : NSObject <MQTTSessionDelegate>
{
    _Bool _reconnectFlag;
    _Bool _tls;
    _Bool _clean;
    _Bool _auth;
    _Bool _will;
    _Bool _willRetainFlag;
    _Bool _persistent;
    int _state;
    unsigned int _port;
    id <MQTTSessionManagerDelegate> _delegate;
    NSMutableDictionary *_effectiveSubscriptions;
    NSError *_lastErrorCode;
    NSTimer *_reconnectTimer;
    double _reconnectTime;
    MQTTSession *_session;
    NSString *_host;
    long long _keepalive;
    NSString *_user;
    NSString *_pass;
    NSString *_willTopic;
    NSData *_willMsg;
    long long _willQos;
    NSString *_clientId;
    MQTTSSLSecurityPolicy *_securityPolicy;
    NSArray *_certificates;
    NSTimer *_disconnectTimer;
    NSTimer *_activityTimer;
    unsigned long long _backgroundTask;
    unsigned long long _maxWindowSize;
    unsigned long long _maxSize;
    unsigned long long _maxMessages;
    NSMutableDictionary *_internalSubscriptions;
}

@property(retain, nonatomic) NSMutableDictionary *internalSubscriptions; // @synthesize internalSubscriptions=_internalSubscriptions;
@property(nonatomic) unsigned long long maxMessages; // @synthesize maxMessages=_maxMessages;
@property(nonatomic) unsigned long long maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) unsigned long long maxWindowSize; // @synthesize maxWindowSize=_maxWindowSize;
@property(nonatomic) _Bool persistent; // @synthesize persistent=_persistent;
@property(nonatomic) unsigned long long backgroundTask; // @synthesize backgroundTask=_backgroundTask;
@property(retain, nonatomic) NSTimer *activityTimer; // @synthesize activityTimer=_activityTimer;
@property(retain, nonatomic) NSTimer *disconnectTimer; // @synthesize disconnectTimer=_disconnectTimer;
@property(retain, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
@property(retain, nonatomic) MQTTSSLSecurityPolicy *securityPolicy; // @synthesize securityPolicy=_securityPolicy;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(nonatomic) _Bool willRetainFlag; // @synthesize willRetainFlag=_willRetainFlag;
@property(nonatomic) long long willQos; // @synthesize willQos=_willQos;
@property(retain, nonatomic) NSData *willMsg; // @synthesize willMsg=_willMsg;
@property(retain, nonatomic) NSString *willTopic; // @synthesize willTopic=_willTopic;
@property(retain, nonatomic) NSString *pass; // @synthesize pass=_pass;
@property(retain, nonatomic) NSString *user; // @synthesize user=_user;
@property(nonatomic) _Bool will; // @synthesize will=_will;
@property(nonatomic) _Bool auth; // @synthesize auth=_auth;
@property(nonatomic) _Bool clean; // @synthesize clean=_clean;
@property(nonatomic) long long keepalive; // @synthesize keepalive=_keepalive;
@property(nonatomic) _Bool tls; // @synthesize tls=_tls;
@property(nonatomic) unsigned int port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) MQTTSession *session; // @synthesize session=_session;
@property(nonatomic) _Bool reconnectFlag; // @synthesize reconnectFlag=_reconnectFlag;
@property(nonatomic) double reconnectTime; // @synthesize reconnectTime=_reconnectTime;
@property(retain, nonatomic) NSTimer *reconnectTimer; // @synthesize reconnectTimer=_reconnectTimer;
@property(retain, nonatomic) NSError *lastErrorCode; // @synthesize lastErrorCode=_lastErrorCode;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableDictionary *effectiveSubscriptions; // @synthesize effectiveSubscriptions=_effectiveSubscriptions;
@property(nonatomic) __weak id <MQTTSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *subscriptions;
- (void)connectToLast;
- (void)reconnect;
- (void)connectToInternal;
- (void)messageDelivered:(id)arg1 msgID:(unsigned short)arg2;
- (void)connected:(id)arg1 sessionPresent:(_Bool)arg2;
- (void)newMessage:(id)arg1 data:(id)arg2 onTopic:(id)arg3 qos:(unsigned char)arg4 retained:(_Bool)arg5 mid:(unsigned int)arg6;
- (void)handleEvent:(id)arg1 event:(long long)arg2 error:(id)arg3;
- (void)disconnect;
- (unsigned short)sendData:(id)arg1 topic:(id)arg2 qos:(unsigned char)arg3 retain:(_Bool)arg4;
- (void)connectTo:(id)arg1 port:(long long)arg2 tls:(_Bool)arg3 keepalive:(long long)arg4 clean:(_Bool)arg5 auth:(_Bool)arg6 user:(id)arg7 pass:(id)arg8 will:(_Bool)arg9 willTopic:(id)arg10 willMsg:(id)arg11 willQos:(unsigned char)arg12 willRetainFlag:(_Bool)arg13 withClientId:(id)arg14 securityPolicy:(id)arg15 certificates:(id)arg16;
- (void)connectTo:(id)arg1 port:(long long)arg2 tls:(_Bool)arg3 keepalive:(long long)arg4 clean:(_Bool)arg5 auth:(_Bool)arg6 user:(id)arg7 pass:(id)arg8 will:(_Bool)arg9 willTopic:(id)arg10 willMsg:(id)arg11 willQos:(unsigned char)arg12 willRetainFlag:(_Bool)arg13 withClientId:(id)arg14;
- (void)connectTo:(id)arg1 port:(long long)arg2 tls:(_Bool)arg3 keepalive:(long long)arg4 clean:(_Bool)arg5 auth:(_Bool)arg6 user:(id)arg7 pass:(id)arg8 willTopic:(id)arg9 will:(id)arg10 willQos:(unsigned char)arg11 willRetainFlag:(_Bool)arg12 withClientId:(id)arg13;
- (void)appDidBecomeActive;
- (void)appDidEnterBackground;
- (void)appWillResignActive;
- (id)initWithPersistence:(_Bool)arg1 maxWindowSize:(unsigned long long)arg2 maxMessages:(unsigned long long)arg3 maxSize:(unsigned long long)arg4;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

