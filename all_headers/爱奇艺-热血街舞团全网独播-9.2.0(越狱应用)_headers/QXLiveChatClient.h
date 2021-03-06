//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QXMQTTDelegate-Protocol.h"

@class NSMutableArray, NSString, QXLiveChatClientInfo, QXMQTT;

@interface QXLiveChatClient : NSObject <QXMQTTDelegate>
{
    long long _sendPingTime;
    long long _receivedPingTime;
    _Bool _reconnectExponentialBackoff;
    _Bool _cleanSession;
    _Bool _connected;
    _Bool _isSuccessIpUsed;
    _Bool _isDomainUsed;
    _Bool _isOpenConnect;
    unsigned short _port;
    unsigned short _keepAlive;
    unsigned int _agentType;
    unsigned int _reconnectDelay;
    unsigned int _reconnectDelayMax;
    NSString *_appSecretKey;
    NSString *_appVersion;
    NSString *_clientID;
    NSString *_passportID;
    QXLiveChatClientInfo *_chatClientInfo;
    CDUnknownBlockType _messageHandler;
    CDUnknownBlockType _reconnectHandler;
    CDUnknownBlockType _connectAbnormalHandler;
    CDUnknownBlockType _connectResultBlock;
    CDUnknownBlockType _brokerResultBlock;
    CDUnknownBlockType _keepAliveBlock;
    QXMQTT *_mqtt;
    NSString *_host;
    NSString *_username;
    NSString *_password;
    CDUnknownBlockType _disconnectionToReConnectHandler;
    NSMutableArray *_brokerList;
    long long _brokerIndex;
    long long _socketConnectTime;
    long long _brokerConnectTime;
    NSString *_successIp;
}

+ (id)buildVersion;
+ (id)sdkVersion;
@property(nonatomic) _Bool isOpenConnect; // @synthesize isOpenConnect=_isOpenConnect;
@property(nonatomic) _Bool isDomainUsed; // @synthesize isDomainUsed=_isDomainUsed;
@property(nonatomic) _Bool isSuccessIpUsed; // @synthesize isSuccessIpUsed=_isSuccessIpUsed;
@property(copy, nonatomic) NSString *successIp; // @synthesize successIp=_successIp;
@property(nonatomic) long long brokerConnectTime; // @synthesize brokerConnectTime=_brokerConnectTime;
@property(nonatomic) long long socketConnectTime; // @synthesize socketConnectTime=_socketConnectTime;
@property(nonatomic) long long brokerIndex; // @synthesize brokerIndex=_brokerIndex;
@property(retain) NSMutableArray *brokerList; // @synthesize brokerList=_brokerList;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
@property(copy, nonatomic) CDUnknownBlockType disconnectionToReConnectHandler; // @synthesize disconnectionToReConnectHandler=_disconnectionToReConnectHandler;
@property(nonatomic) _Bool cleanSession; // @synthesize cleanSession=_cleanSession;
@property(nonatomic) _Bool reconnectExponentialBackoff; // @synthesize reconnectExponentialBackoff=_reconnectExponentialBackoff;
@property(nonatomic) unsigned int reconnectDelayMax; // @synthesize reconnectDelayMax=_reconnectDelayMax;
@property(nonatomic) unsigned int reconnectDelay; // @synthesize reconnectDelay=_reconnectDelay;
@property(nonatomic) unsigned short keepAlive; // @synthesize keepAlive=_keepAlive;
@property(nonatomic) unsigned int agentType; // @synthesize agentType=_agentType;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) QXMQTT *mqtt; // @synthesize mqtt=_mqtt;
@property(copy, nonatomic) CDUnknownBlockType keepAliveBlock; // @synthesize keepAliveBlock=_keepAliveBlock;
@property(copy, nonatomic) CDUnknownBlockType brokerResultBlock; // @synthesize brokerResultBlock=_brokerResultBlock;
@property(copy, nonatomic) CDUnknownBlockType connectResultBlock; // @synthesize connectResultBlock=_connectResultBlock;
@property(copy, nonatomic) CDUnknownBlockType connectAbnormalHandler; // @synthesize connectAbnormalHandler=_connectAbnormalHandler;
@property(copy, nonatomic) CDUnknownBlockType reconnectHandler; // @synthesize reconnectHandler=_reconnectHandler;
@property(copy, nonatomic) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property(retain, nonatomic) QXLiveChatClientInfo *chatClientInfo; // @synthesize chatClientInfo=_chatClientInfo;
@property(copy, nonatomic) NSString *passportID; // @synthesize passportID=_passportID;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *appSecretKey; // @synthesize appSecretKey=_appSecretKey;
- (void).cxx_destruct;
- (void)onMqtt:(id)arg1 log:(id)arg2;
- (void)onMqttReconnect:(id)arg1;
- (void)onMqtt:(id)arg1 message:(id)arg2;
- (void)onMqtt:(id)arg1 disconnected:(int)arg2;
- (void)onMqtt:(id)arg1 connected:(int)arg2;
- (id)baseInfoDictionary;
- (void)notifyApplicationWillEnterForeground;
- (void)notifyApplicationEnterBackground;
- (void)startConnect;
- (void)reConnectIfNotReceivedPing;
- (void)disconnect:(id)arg1;
- (void)reconnect;
- (void)connectWithInfo:(id)arg1;
- (void)dealloc;
- (void)resetClientSetting;
- (void)createConnectWithClientID:(id)arg1;
- (_Bool)doFinallyTryConnect:(_Bool)arg1;
- (void)prepareBrokerHost:(CDUnknownBlockType)arg1;
- (void)unRegisterNotification;
- (void)registerNotification;
- (void)cleanHandler;
- (id)init;
- (_Bool)isConnected;
- (void)reachabilityChanged:(_Bool)arg1;
- (void)setShoudlDisConnectRoomWhenInBackground:(_Bool)arg1;
- (void)disConnectChatRoom:(CDUnknownBlockType)arg1;
- (void)startConnectChatRoom:(id)arg1;
- (void)cleanData;
- (void)registerDeviceId:(id)arg1 appId:(id)arg2 appVer:(id)arg3 appKey:(id)arg4 agentType:(unsigned int)arg5 appSecretKey:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

