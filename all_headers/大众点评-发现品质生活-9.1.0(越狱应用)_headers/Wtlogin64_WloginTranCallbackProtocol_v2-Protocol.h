//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString, Wtlogin64_WloginTranSdk;

@protocol Wtlogin64_WloginTranCallbackProtocol_v2 <NSObject>
- (void)tranFailed_v2:(Wtlogin64_WloginTranSdk *)arg1 result:(int)arg2 withMsg:(NSString *)arg3;
- (void)tranSuccess_v2:(Wtlogin64_WloginTranSdk *)arg1 withData:(NSData *)arg2;
@end

