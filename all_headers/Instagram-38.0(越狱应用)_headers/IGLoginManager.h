//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGLoginManager : NSObject
{
}

+ (void)saveCookiesForInternalUsers;
+ (void)handleLoginError;
+ (void)saveAndTransferCookies:(id)arg1 forUser:(id)arg2;
+ (id)logInWithUserDictionary:(id)arg1 cookies:(id)arg2 facebookAccessToken:(id)arg3 authLogInType:(long long)arg4 destinationURL:(id)arg5;
+ (id)logInWithUser:(id)arg1 cookies:(id)arg2 facebookAccessToken:(id)arg3 authLogInType:(long long)arg4 notification:(id)arg5 destinationURL:(id)arg6;

@end

