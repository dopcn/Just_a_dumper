//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, GJGCCircleSeekView, UIButton, UILabel;
@protocol GJGCVideoProgressSliderDelegate;

@interface GJGCVideoProgressSlider : UIView
{
    _Bool _isPlay;
    _Bool _isSeeking;
    double _downloadProgress;
    double _playProgress;
    id <GJGCVideoProgressSliderDelegate> _delegate;
    UIButton *_playButton;
    UIView *_backgroundView;
    UIView *_downloadProgressView;
    UIView *_playProgressView;
    UILabel *_timeLabel;
    GJGCCircleSeekView *_seekView;
    UIView *_sliderBackView;
    double _playProgressViewWidth;
    CAGradientLayer *_gradientLayer;
    UIView *_gradientView;
    struct CGPoint _seekBeginTouchPoint;
}

@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) _Bool isSeeking; // @synthesize isSeeking=_isSeeking;
@property(nonatomic) double playProgressViewWidth; // @synthesize playProgressViewWidth=_playProgressViewWidth;
@property(nonatomic) struct CGPoint seekBeginTouchPoint; // @synthesize seekBeginTouchPoint=_seekBeginTouchPoint;
@property(retain, nonatomic) UIView *sliderBackView; // @synthesize sliderBackView=_sliderBackView;
@property(retain, nonatomic) GJGCCircleSeekView *seekView; // @synthesize seekView=_seekView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIView *playProgressView; // @synthesize playProgressView=_playProgressView;
@property(retain, nonatomic) UIView *downloadProgressView; // @synthesize downloadProgressView=_downloadProgressView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) _Bool isPlay; // @synthesize isPlay=_isPlay;
@property(nonatomic) __weak id <GJGCVideoProgressSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double playProgress; // @synthesize playProgress=_playProgress;
@property(nonatomic) double downloadProgress; // @synthesize downloadProgress=_downloadProgress;
- (void).cxx_destruct;
- (void)actionTapped:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateConstraints;
- (id)timeStringWithPlayTime:(double)arg1 totalTime:(double)arg2;
- (void)updateDownLoadProgress:(double)arg1 playTime:(double)arg2 totalTime:(double)arg3;
- (void)actionPlay:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

