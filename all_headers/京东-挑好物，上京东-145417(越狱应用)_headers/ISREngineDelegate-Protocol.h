//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSData;

@protocol ISREngineDelegate
- (void)onResult:(NSArray *)arg1 isLast:(_Bool)arg2;
- (void)onStop;

@optional
- (void)onEvent:(int)arg1 arg0:(int)arg2 arg1:(int)arg3 data:(NSData *)arg4;
- (void)onEnd:(int)arg1;
- (void)onResult:(NSArray *)arg1;
@end

