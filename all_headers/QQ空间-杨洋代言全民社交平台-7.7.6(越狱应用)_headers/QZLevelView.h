//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QZWaveView, QZWaveVoiceLevelView;

@interface QZLevelView : UIView
{
    QZWaveVoiceLevelView *_waveVoiceLevelView;
    QZWaveView *_waveView;
    double _level;
    double power;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) QZWaveVoiceLevelView *waveVoiceLevelView; // @synthesize waveVoiceLevelView=_waveVoiceLevelView;
@property(retain, nonatomic) QZWaveView *waveView; // @synthesize waveView=_waveView;
@property(nonatomic) double power; // @synthesize power;
@property(nonatomic) double level; // @synthesize level=_level;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)startAnimation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

