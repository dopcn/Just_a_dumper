//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSHTTPCookieStorage.h>

@interface NSHTTPCookieStorage (QBAPSCookies)
+ (id)qbaps_cookieWithName:(id)arg1 value:(id)arg2;
+ (void)qbaps_setupDefaultCookies;
- (void)qbaps_deleteCookie:(id)arg1;
- (void)setSecurityCookiesWithRequestIdentifier:(id)arg1 vsign:(id)arg2;
- (void)setBDUSSCookie:(id)arg1;
- (void)refreshAppTimeCookieIfNeeds;
- (void)refreshSessionIDCookieIfNeeds;
- (void)refreshCookiesIfNeeds;
@end

