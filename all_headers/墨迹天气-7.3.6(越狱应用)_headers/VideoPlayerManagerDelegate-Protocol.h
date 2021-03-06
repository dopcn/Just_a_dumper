//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ADVideoPlayerProgress, AVPlayer, NSError, NSNotification;

@protocol VideoPlayerManagerDelegate <NSObject>
- (_Bool)onRouteChanged:(NSNotification *)arg1;
- (void)playerItemDidReachEnd:(NSNotification *)arg1;
- (void)failedToLoadPlayerItem:(NSError *)arg1;
- (_Bool)didStartWithPlayer:(AVPlayer *)arg1;
- (void)releasePlayerWithProgress:(ADVideoPlayerProgress *)arg1;
- (void)checkPointWithTime:(CDStruct_1b6d18a9)arg1;
@end

