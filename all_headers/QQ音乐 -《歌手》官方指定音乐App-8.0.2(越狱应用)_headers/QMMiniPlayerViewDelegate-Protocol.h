//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class QMMiniPlayerView;

@protocol QMMiniPlayerViewDelegate <NSObject>

@optional
- (void)miniPlayerViewDidScrollPre:(QMMiniPlayerView *)arg1;
- (void)miniPlayerViewDidScrollNext:(QMMiniPlayerView *)arg1;
- (void)miniPlayerViewDidScroll:(QMMiniPlayerView *)arg1;
- (void)setSonginfoToSonginfoView;
- (void)showPlayingView;
- (void)showPlayList:(id)arg1;
- (void)playPreSong:(id)arg1;
- (void)playNextSong:(id)arg1;
- (void)playOrPauseButtonPressed:(id)arg1;
@end

