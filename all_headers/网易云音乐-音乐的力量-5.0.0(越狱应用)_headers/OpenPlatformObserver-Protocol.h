//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol OpenPlatformObserver <NSObject>

@optional
- (void)beforeUpdateAccessToken:(id)arg1;
- (void)onOPAuthorizeUrl:(id)arg1 url:(NSString *)arg2;
- (void)onOPSuccess:(id)arg1 operation:(unsigned long long)arg2 retInfo:(id)arg3;
- (void)onOPError:(id)arg1 operation:(unsigned long long)arg2 Code:(long long)arg3 Desc:(NSString *)arg4;
@end

