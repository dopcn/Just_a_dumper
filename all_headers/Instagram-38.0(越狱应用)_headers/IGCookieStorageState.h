//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGCookieStorageState : NSObject
{
}

+ (void)swapNSHTTPShareCookieStorageFromCookiesOfUserWithPk:(id)arg1 toCookiesOfUserWithPk:(id)arg2;
+ (void)syncCurrentCookiesFromKeyChainToNSHTTPCookiesForUserPk:(id)arg1;
+ (void)syncCurrentCookiesFromNSHTTPCookiesToKeyChainForUserPk:(id)arg1;
+ (_Bool)cookiesAreValidForUserPK:(id)arg1;
+ (long long)cookieStateAtColdStartForUserPK:(id)arg1 analyticsExtras:(id)arg2;
+ (void)updateStateForUserScopedCookiesStateIfNeeded;
+ (void)updateToStateForUserLoggedInAtColdStart:(id)arg1;

@end

