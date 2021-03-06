//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class XHMediaCore;

@protocol XHMediaCoreDelegate <NSObject>

@optional
- (void)onRecordedVolumeDisplay:(unsigned int)arg1 volume:(unsigned int)arg2;
- (void)onAudioPlayerPaused:(XHMediaCore *)arg1;
- (void)onAudioPlayerProgressPlayed:(XHMediaCore *)arg1 playedMs:(unsigned long long)arg2 totalDuration:(unsigned long long)arg3;
- (void)onAudioRecorderStoppedWithReason:(XHMediaCore *)arg1 stopReason:(long long)arg2 totalDuration:(unsigned long long)arg3;
- (void)onAudioPlayerStoppedWithReason:(XHMediaCore *)arg1 stopReason:(unsigned long long)arg2;
@end

