//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ActivityInfo, NSArray, NSAttributedString, NSNumber, NSString;

@protocol IActivityDataProviderDelegate <NSObject>

@optional
- (void)onCloseActivity:(ActivityInfo *)arg1;
- (void)onOpenActivity:(ActivityInfo *)arg1;
- (void)onReceivePublicMsg:(NSAttributedString *)arg1;
- (void)onActJS:(NSString *)arg1 tagID:(NSNumber *)arg2 tagName:(NSString *)arg3;
- (void)onRefreshActWithJson:(NSString *)arg1 tagID:(NSNumber *)arg2 tagName:(NSString *)arg3;
- (void)onTransmissionRequest:(NSString *)arg1 tagID:(NSNumber *)arg2 tagName:(NSString *)arg3;
- (void)onActivityChanged:(NSArray *)arg1;
@end

