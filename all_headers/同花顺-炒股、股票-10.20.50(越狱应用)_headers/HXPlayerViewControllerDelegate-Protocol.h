//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HXPlayerView, HXPlayerViewController;

@protocol HXPlayerViewControllerDelegate <NSObject>

@optional
- (void)viewController:(HXPlayerViewController *)arg1 player:(HXPlayerView *)arg2 completePlayingWithPosition:(long long)arg3;
- (void)viewController:(HXPlayerViewController *)arg1 player:(HXPlayerView *)arg2 stoppedWithStatus:(int)arg3;
- (void)viewController:(HXPlayerViewController *)arg1 playerDidPlayVideo:(HXPlayerView *)arg2;
- (void)viewController:(HXPlayerViewController *)arg1 playerStopPlayAudioWhenError:(HXPlayerView *)arg2;
- (void)viewController:(HXPlayerViewController *)arg1 playerDidPlayAudio:(HXPlayerView *)arg2;
- (void)viewController:(HXPlayerViewController *)arg1 playerPrepareToPlayAudio:(HXPlayerView *)arg2;
- (void)viewController:(HXPlayerViewController *)arg1 quitFullScreenWithPlayer:(HXPlayerView *)arg2 status:(int)arg3;
@end

