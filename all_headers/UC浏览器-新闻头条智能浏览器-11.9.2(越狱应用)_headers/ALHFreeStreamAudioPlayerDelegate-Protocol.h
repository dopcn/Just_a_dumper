//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ALHFreeStreamAudioPlayer;

@protocol ALHFreeStreamAudioPlayerDelegate <NSObject>

@optional
- (void)audioPlayer:(ALHFreeStreamAudioPlayer *)arg1 playthroughStateDidChangedFrom:(long long)arg2 to:(long long)arg3;
- (void)audioPlayer:(ALHFreeStreamAudioPlayer *)arg1 loadingStateDidChangedFrom:(long long)arg2 to:(long long)arg3;
- (void)audioPlayer:(ALHFreeStreamAudioPlayer *)arg1 didFinishedPlay:(long long)arg2;
- (void)audioPlayer:(ALHFreeStreamAudioPlayer *)arg1 playbackStateDidChangedFrom:(long long)arg2 to:(long long)arg3;
@end

