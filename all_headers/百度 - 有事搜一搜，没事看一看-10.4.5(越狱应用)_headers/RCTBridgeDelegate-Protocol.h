//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSURL, RCTBridge;

@protocol RCTBridgeDelegate <NSObject>
- (NSURL *)sourceURLForBridge:(RCTBridge *)arg1;

@optional
- (_Bool)shouldUseSubPackage:(RCTBridge *)arg1;
- (NSURL *)fallbackBusinessURLForBridge:(RCTBridge *)arg1;
- (void)loadSourceForBridge:(RCTBridge *)arg1 withBlock:(void (^)(NSError *, NSData *, long long))arg2;
- (_Bool)shouldBridgeInitializeNativeModulesSynchronously:(RCTBridge *)arg1;
- (NSArray *)whitelistedModulesForBridge:(RCTBridge *)arg1;
- (NSArray *)extraModulesForBridge:(RCTBridge *)arg1;
- (NSURL *)fallbackSourceURLForBridge:(RCTBridge *)arg1;
@end

