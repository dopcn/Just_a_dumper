//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol BMUserInfoModelDelegate <NSObject>

@optional
- (void)onGetUserSystemInfo:(NSDictionary *)arg1;
- (void)networkError:(int)arg1;
- (void)onGetCheckedURL:(NSString *)arg1;
- (void)hadSignIn:(_Bool)arg1;
- (void)setScore:(long long)arg1;
- (void)onGetUserNickName:(NSString *)arg1 headImageUrl:(NSString *)arg2;
@end

