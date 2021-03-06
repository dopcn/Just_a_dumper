//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CookieService : NSObject
{
}

+ (void)clearAllCookies;
+ (id)fetchCookieWithKey:(id)arg1 value:(id)arg2 domain:(id)arg3;
+ (id)fetchCookieWithKey:(id)arg1 value:(id)arg2;
+ (id)fetchBdussCookieWithDomain:(id)arg1;
+ (id)fetchBdussCookie;
+ (id)fetchTokenCookieWithDomain:(id)arg1;
+ (id)fetchTokenCookie;
+ (id)fetchCookieDomainStr;
+ (id)fetchCookieDomainArray;
+ (void)deleteCookie:(id)arg1 domain:(id)arg2;
+ (void)setCookie:(id)arg1 andValue:(id)arg2 andDomain:(id)arg3 andPath:(id)arg4 expire:(id)arg5;
+ (void)setupCookie;
+ (void)load;
+ (void)purgeSharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceSynch;
+ (id)sharedInstanceNoSynch;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

