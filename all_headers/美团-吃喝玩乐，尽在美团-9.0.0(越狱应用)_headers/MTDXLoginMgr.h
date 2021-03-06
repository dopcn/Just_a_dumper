//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTDXDisposable, MTDXLoginLink, MTDXLoginService, MTDXNetReachability, MTDXSDKModuleManager, NSMutableDictionary;

@interface MTDXLoginMgr : NSObject
{
    _Bool _connectionChecking;
    _Bool _tokenSent;
    long long _loginStatus;
    MTDXLoginLink *_loginLink;
    MTDXSDKModuleManager *_loginModuleManager;
    unsigned long long _lastActiveStamp;
    MTDXNetReachability *_reachability;
    long long _runningMode;
    long long _clientServerTimeDelta;
    NSMutableDictionary *_authorizedUid2Cid;
    id _multicastDelegate;
    unsigned long long _backgroundTask;
    MTDXLoginService *_loginService;
    MTDXDisposable *_disposaple;
}

+ (unsigned long long)adjustByServerStamp:(unsigned long long)arg1;
@property(retain, nonatomic) MTDXDisposable *disposaple; // @synthesize disposaple=_disposaple;
@property(retain, nonatomic) MTDXLoginService *loginService; // @synthesize loginService=_loginService;
@property(nonatomic) unsigned long long backgroundTask; // @synthesize backgroundTask=_backgroundTask;
@property(retain, nonatomic) id multicastDelegate; // @synthesize multicastDelegate=_multicastDelegate;
@property(retain, nonatomic) NSMutableDictionary *authorizedUid2Cid; // @synthesize authorizedUid2Cid=_authorizedUid2Cid;
@property(nonatomic) long long clientServerTimeDelta; // @synthesize clientServerTimeDelta=_clientServerTimeDelta;
@property(nonatomic) _Bool tokenSent; // @synthesize tokenSent=_tokenSent;
@property(nonatomic) long long runningMode; // @synthesize runningMode=_runningMode;
@property(retain, nonatomic) MTDXNetReachability *reachability; // @synthesize reachability=_reachability;
@property(nonatomic) _Bool connectionChecking; // @synthesize connectionChecking=_connectionChecking;
@property(nonatomic) unsigned long long lastActiveStamp; // @synthesize lastActiveStamp=_lastActiveStamp;
@property(retain, nonatomic) MTDXSDKModuleManager *loginModuleManager; // @synthesize loginModuleManager=_loginModuleManager;
@property(retain, nonatomic) MTDXLoginLink *loginLink; // @synthesize loginLink=_loginLink;
@property(nonatomic) long long loginStatus; // @synthesize loginStatus=_loginStatus;
- (void).cxx_destruct;
- (id)mapToDictionary:(map_1b29d6aa)arg1;
- (void)stopPing;
- (void)startPing;
- (void)triggerConnectionCheck;
- (void)timeChanged:(id)arg1;
- (void)setMyNick:(id)arg1;
- (id)appVersion;
- (void)onUnboundFrom:(id)arg1 cid:(unsigned int)arg2;
- (void)onLogOffRes:(unsigned long long)arg1 appid:(unsigned short)arg2;
- (void)onBoundWith:(id)arg1 cid:(unsigned int)arg2;
- (void)onQueryServerTimestampRes:(unsigned long long)arg1 serverStamp:(unsigned long long)arg2;
- (void)onPing;
- (void)onKickoff:(unsigned long long)arg1 reason:(int)arg2;
- (void)notifyLoginStatusChangedWithRes:(int)arg1 uid:(unsigned long long)arg2 cookie:(const char *)arg3 lastDeviceData:(const char *)arg4 length:(unsigned int)arg5 alToken:(const char *)arg6;
- (void)onLoginSuccessWithUid:(unsigned long long)arg1 cookie:(const char *)arg2 lastDeviceData:(const char *)arg3 length:(unsigned int)arg4 appToMap:(id)arg5;
- (void)onVisitorLoginRes:(int)arg1 uid:(unsigned long long)arg2 cookie:(const char *)arg3;
- (void)onLoginByPassportRes:(int)arg1 uid:(unsigned long long)arg2 cookie:(const char *)arg3 lastDeviceData:(const char *)arg4 length:(unsigned int)arg5 alToken:(const char *)arg6 channelMap:(map_1b29d6aa)arg7;
- (void)onLoginByUidRes:(int)arg1 uid:(unsigned long long)arg2 cookie:(const char *)arg3 lastDeviceData:(const char *)arg4 length:(unsigned int)arg5 alToken:(const char *)arg6 channelMap:(map_1b29d6aa)arg7;
- (unsigned int)parseCidFromExtData:(const char *)arg1 length:(unsigned int)arg2 uid:(unsigned long long)arg3;
- (void)setAuthorizedUid:(unsigned long long)arg1 cid:(unsigned int)arg2;
- (_Bool)checkLoginErrorCode:(int)arg1;
- (void)onDisconnected;
- (void)onDisconnectedWithError:(id)arg1;
- (void)onLogging;
- (void)onConnected;
- (void)onConnecting;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)closeConnect;
- (void)logoff;
- (void)removeBadgeNum;
- (void)extendXsidAndALToken;
- (void)clearAPNsToken;
- (void)updateAPNsToken;
- (void)updateLoginCookie:(unsigned long long)arg1 cookie:(const char *)arg2;
- (void)notifyLoginStatus:(unsigned long long)arg1 status:(unsigned short)arg2;
- (long long)getClientServerTimeDelta;
- (unsigned long long)adjustByServerStamp:(unsigned long long)arg1;
- (void)setAPNsToken:(id)arg1 pushAppId:(id)arg2;
- (void)sendData:(const char *)arg1 len:(int)arg2;
- (void)loginAsVisitor;
- (void)login:(unsigned long long)arg1 cookie:(id)arg2;
- (void)login:(id)arg1 password:(id)arg2;
- (void)startDetectNetwork;
- (void)unregisterModule:(id)arg1 uris:(id)arg2;
- (void)registerModule:(id)arg1 uris:(id)arg2;
- (void)dealloc;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

