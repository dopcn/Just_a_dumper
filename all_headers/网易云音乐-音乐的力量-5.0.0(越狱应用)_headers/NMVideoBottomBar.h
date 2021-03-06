//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NMVideoChangeDefinationButton, NMVideoPlayViewFullScreenButton, NMVideoPlayViewSlider, NMVideoQuality, NMVideoSwitchQualityView, NSArray, UILabel;

@interface NMVideoBottomBar : UIView
{
    NMVideoQuality *_selectedQuality;
    NSArray *_qualityArray;
    _Bool _showQualitySwitch;
    _Bool _supportQualitySwitch;
    _Bool _hideZoomButton;
    UILabel *_progressLabel;
    NMVideoPlayViewSlider *_slider;
    UILabel *_durationLabel;
    NMVideoChangeDefinationButton *_qualityButton;
    NMVideoSwitchQualityView *_qualitySwitchView;
    NMVideoPlayViewFullScreenButton *_zoomButton;
    id _delegate;
    double _playbackTime;
    double _duration;
    double _bufferredTime;
}

+ (double)Height;
@property(nonatomic) _Bool hideZoomButton; // @synthesize hideZoomButton=_hideZoomButton;
@property(nonatomic) _Bool supportQualitySwitch; // @synthesize supportQualitySwitch=_supportQualitySwitch;
@property(nonatomic) _Bool showQualitySwitch; // @synthesize showQualitySwitch=_showQualitySwitch;
@property(nonatomic) double bufferredTime; // @synthesize bufferredTime=_bufferredTime;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double playbackTime; // @synthesize playbackTime=_playbackTime;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NMVideoPlayViewFullScreenButton *zoomButton; // @synthesize zoomButton=_zoomButton;
@property(retain, nonatomic) NMVideoSwitchQualityView *qualitySwitchView; // @synthesize qualitySwitchView=_qualitySwitchView;
@property(retain, nonatomic) NMVideoChangeDefinationButton *qualityButton; // @synthesize qualityButton=_qualityButton;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) NMVideoPlayViewSlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)enableQualitySwitch:(_Bool)arg1;
- (void)toggleQualitySwitchView:(_Bool)arg1;
- (void)setSelectedQuality:(id)arg1;
- (void)setQualitys:(id)arg1 showVipTip:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

