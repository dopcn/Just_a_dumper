//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ADVideoPlayer, AVPlayerLayer, UIButton, UILabel;

@interface MTAdPlayerView : UIView
{
    UILabel *_durationLabel;
    UIButton *_backBtn;
}

+ (Class)layerClass;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
- (void).cxx_destruct;
- (void)updateDuration:(long long)arg1;
- (void)setCountdownDuration:(unsigned long long)arg1;
@property(readonly, nonatomic) AVPlayerLayer *playerLayer;
- (void)setPlayer:(id)arg1;
@property(readonly, nonatomic) ADVideoPlayer *player;
- (void)resumDurationTimer;
- (void)pauseDurationTimer;
- (void)loadDuationView;
- (void)loadBackBtn;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

