//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BasicPanelManager.h"

#import "TCAPIRequestDelegate-Protocol.h"

@interface WBTencentManager : BasicPanelManager <TCAPIRequestDelegate>
{
}

- (BOOL)isTencentAuthorized;
- (void)cgiRequest:(id)arg1 didResponse:(id)arg2;
- (void)didReceiveUserInfo:(id)arg1;
- (void)receiveTencentDidNotLogin:(BOOL)arg1;
- (BOOL)handleOpenURL:(id)arg1;
- (void)sendTextWeibo:(id)arg1;
- (void)showInvalidTokenOrOpenIDMessage;
- (void)logOut;
- (BOOL)logIn;
- (id)init;

@end

