//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSRecursiveLock, NSString;

@interface ZDHTTPCookieContext : NSObject
{
    NSString *_domain;
    NSString *_path;
    NSRecursiveLock *_lock;
}

+ (id)defaultContext;
+ (id)cookieWithDomain:(id)arg1 path:(id)arg2 name:(id)arg3 value:(id)arg4 maximumAge:(double)arg5;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)refreshCookiesIfNeeds;
- (void)refreshSessionIDCookieIfNeeds;
- (void)refreshAppTimeCookieIfNeeds;
- (void)setSecurityCookiesWithRequestIdentifier:(id)arg1 vsign:(id)arg2;
- (void)setAppTimeCookie:(id)arg1;
- (void)setRefererCookie:(id)arg1;
- (void)setDefaultsCookies;
- (void)setAppVersionCookie;
- (void)setCUIDCookie:(id)arg1;
- (void)deleteCookie:(id)arg1;
- (void)setBDUSSCookie:(id)arg1;
- (void)setIdentifierCookiesWithBDUSS:(id)arg1 CUID:(id)arg2;
- (void)setCookieWithName:(id)arg1 value:(id)arg2 maximumAge:(double)arg3;
- (id)initWithDomain:(id)arg1 path:(id)arg2;

@end

