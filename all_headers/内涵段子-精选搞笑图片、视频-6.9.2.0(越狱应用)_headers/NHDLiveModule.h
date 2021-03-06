//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NHDLiveModulePublicProtocol-Protocol.h"

@protocol NHDLiveAppSettingPublicProtocol, NHDLiveAuthenticationPublicProtocol, NHDLiveDebugPublicProtocol, NHDLiveNetworkPublicProtocol, NHDLivePlayerPublicProtocol, NHDLiveUserPublicProtocol;

@interface NHDLiveModule : NSObject <NHDLiveModulePublicProtocol>
{
    id <NHDLiveDebugPublicProtocol> _debugService;
    id <NHDLiveNetworkPublicProtocol> _networkService;
    id <NHDLiveAppSettingPublicProtocol> _appSetting;
    id <NHDLiveUserPublicProtocol> _userService;
    id <NHDLiveAuthenticationPublicProtocol> _authenticationService;
    id <NHDLivePlayerPublicProtocol> _playerService;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) id <NHDLivePlayerPublicProtocol> playerService; // @synthesize playerService=_playerService;
@property(retain, nonatomic) id <NHDLiveAuthenticationPublicProtocol> authenticationService; // @synthesize authenticationService=_authenticationService;
@property(retain, nonatomic) id <NHDLiveUserPublicProtocol> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <NHDLiveAppSettingPublicProtocol> appSetting; // @synthesize appSetting=_appSetting;
@property(retain, nonatomic) id <NHDLiveNetworkPublicProtocol> networkService; // @synthesize networkService=_networkService;
@property(retain, nonatomic) id <NHDLiveDebugPublicProtocol> debugService; // @synthesize debugService=_debugService;
- (void).cxx_destruct;
- (id)requestForJSONWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
@property(nonatomic) _Bool useSandBox;
@property(nonatomic) _Bool allowPlayNotInWifi;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;

@end

