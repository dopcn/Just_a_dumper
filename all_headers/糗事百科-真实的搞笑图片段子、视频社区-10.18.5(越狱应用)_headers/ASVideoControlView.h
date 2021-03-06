//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ASBPlayerScrubbing, UIButton, UILabel, UISlider;

@interface ASVideoControlView : UIView
{
    ASBPlayerScrubbing *_scrubbing;
    UISlider *_slider;
    UILabel *_remainingTimeLabel;
    UILabel *_durationLabel;
    UIButton *_playPauseButton;
}

+ (id)videoControlView;
@property(retain, nonatomic) UIButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *remainingTimeLabel; // @synthesize remainingTimeLabel=_remainingTimeLabel;
@property(retain, nonatomic) UISlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) ASBPlayerScrubbing *scrubbing; // @synthesize scrubbing=_scrubbing;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)switchTimeLabel:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

