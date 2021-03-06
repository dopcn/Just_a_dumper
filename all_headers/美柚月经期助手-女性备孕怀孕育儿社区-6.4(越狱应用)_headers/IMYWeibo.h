//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYAuthBase.h"

#import "IMYIShareInterface-Protocol.h"
#import "MYAuthWebViewControllerDelegate-Protocol.h"
#import "WeiboSDKDelegate-Protocol.h"

@class NSString;

@interface IMYWeibo : IMYAuthBase <WeiboSDKDelegate, MYAuthWebViewControllerDelegate, IMYIShareInterface>
{
    CDUnknownBlockType _loginCompletion;
    CDUnknownBlockType _shareCompletion;
}

+ (_Bool)isAppInstalled;
@property(copy, nonatomic) CDUnknownBlockType shareCompletion; // @synthesize shareCompletion=_shareCompletion;
@property(copy, nonatomic) CDUnknownBlockType loginCompletion; // @synthesize loginCompletion=_loginCompletion;
- (void).cxx_destruct;
- (void)didReceiveWeiboResponse:(id)arg1;
- (void)didReceiveWeiboRequest:(id)arg1;
- (void)handleSendMessageToWeiboResponse:(id)arg1;
- (void)handleAuthorizeResponse:(id)arg1;
- (void)handleLoginFailedWithError:(id)arg1;
- (void)handleLoginSuccess;
- (void)requestUserProfileWithAccessToken:(id)arg1 userId:(id)arg2;
- (void)syncUserInfoWithAccessToken:(id)arg1 userId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renewAccessTokenWith:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)authDidFinishWithResult:(id)arg1 error:(id)arg2;
- (void)authViewWillDisappear:(id)arg1;
- (void)authViewWillAppear:(id)arg1;
- (void)shareContentInBackground:(id)arg1 shareType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getUserInfoWithAuthOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shareContent:(id)arg1 shareType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)handleOpenURL:(id)arg1;
- (_Bool)canHandleURL:(id)arg1;
- (void)registerApp:(id)arg1 appSecret:(id)arg2 redirectUri:(id)arg3;
- (void)cancelAuth;
- (id)createUserWithNickname:(id)arg1 uid:(id)arg2;
- (void)checkExpired;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

