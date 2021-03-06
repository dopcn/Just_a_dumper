//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface LiveConnectSession : NSObject
{
    NSString *_accessToken;
    NSString *_authenticationToken;
    NSString *_refreshToken;
    NSArray *_scopes;
    NSDate *_expires;
}

@property(readonly, nonatomic) NSDate *expires; // @synthesize expires=_expires;
@property(readonly, nonatomic) NSArray *scopes; // @synthesize scopes=_scopes;
@property(readonly, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(readonly, nonatomic) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(readonly, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void)dealloc;
- (id)initWithAccessToken:(id)arg1 authenticationToken:(id)arg2 refreshToken:(id)arg3 scopes:(id)arg4 expires:(id)arg5;

@end

