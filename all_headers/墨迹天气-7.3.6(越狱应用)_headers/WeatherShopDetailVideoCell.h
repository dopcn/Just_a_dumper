//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeatherShopDetailCell.h"

@class MJLVideoPlayerView;

@interface WeatherShopDetailVideoCell : WeatherShopDetailCell
{
    MJLVideoPlayerView *_videoView;
}

@property(retain, nonatomic) MJLVideoPlayerView *videoView; // @synthesize videoView=_videoView;
- (void).cxx_destruct;
- (void)setFullScreenButtonHidden:(_Bool)arg1;
- (void)setVoiceButtonHidden:(_Bool)arg1;
- (void)play;
- (void)stopPlay;
- (void)setVideoWithUrlStr:(id)arg1 coverImageUrl:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

