//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class Ad;

@protocol CrystalSDKEventDelegate <NSObject>

@optional
- (void)onVideoProgress:(Ad *)arg1 duration:(int)arg2 position:(int)arg3;
- (void)onVideoEnd:(Ad *)arg1;
- (void)onVideoStart:(Ad *)arg1;
- (void)onAdUnmute:(Ad *)arg1;
- (void)onAdMute:(Ad *)arg1;
- (void)onAdImpression:(Ad *)arg1;
- (void)onAdClick:(Ad *)arg1;
@end

