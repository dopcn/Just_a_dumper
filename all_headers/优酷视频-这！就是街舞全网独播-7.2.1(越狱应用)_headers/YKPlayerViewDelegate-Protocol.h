//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YKPlayerView;

@protocol YKPlayerViewDelegate <NSObject>
- (void)playerViewDidPlayEnd:(YKPlayerView *)arg1;
- (void)playerView:(YKPlayerView *)arg1 playCurrentTime:(double)arg2;
- (void)playerView:(YKPlayerView *)arg1 readyToPlay:(double)arg2;
@end

