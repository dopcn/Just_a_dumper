//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXApiDelegate-Protocol.h"

@class AFHTTPRequestOperationManager, NSString;

@interface WeixinSocialHandler : NSObject <WXApiDelegate>
{
    _Bool _reauthorize;
    _Bool _isWeixinInstall;
    NSString *_appId;
    NSString *_appSecret;
    NSString *_accessToken;
    NSString *_refreshToken;
    NSString *_openId;
    AFHTTPRequestOperationManager *_networkManager;
    CDUnknownBlockType _loginComplete;
    CDUnknownBlockType _shareComplete;
}

+ (id)shareInstance;
@property(nonatomic) _Bool isWeixinInstall; // @synthesize isWeixinInstall=_isWeixinInstall;
@property(copy, nonatomic) CDUnknownBlockType shareComplete; // @synthesize shareComplete=_shareComplete;
@property(copy, nonatomic) CDUnknownBlockType loginComplete; // @synthesize loginComplete=_loginComplete;
@property(retain, nonatomic) AFHTTPRequestOperationManager *networkManager; // @synthesize networkManager=_networkManager;
@property(nonatomic) _Bool reauthorize; // @synthesize reauthorize=_reauthorize;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(retain, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(retain, nonatomic) NSString *appSecret; // @synthesize appSecret=_appSecret;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (void)onResp:(id)arg1;
- (void)getUserInfoWithCompleteBlock:(CDUnknownBlockType)arg1;
- (_Bool)handleOpenURL:(id)arg1;
- (_Bool)setWXAppId:(id)arg1 appSecret:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

