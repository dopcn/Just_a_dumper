//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, SYMusicPrgressTimeView, UIColor;

@interface SYMusicProgressView : UIView
{
    double _progress;
    double _cacheProgress;
    UIView *_dot;
    UIColor *_progressColor;
    UIView *_progressLayer;
    CALayer *_cacheLayer;
    UIView *_line;
    SYMusicPrgressTimeView *_progressTimeView;
}

@property(retain, nonatomic) SYMusicPrgressTimeView *progressTimeView; // @synthesize progressTimeView=_progressTimeView;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) CALayer *cacheLayer; // @synthesize cacheLayer=_cacheLayer;
@property(retain, nonatomic) UIView *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(retain, nonatomic) UIView *dot; // @synthesize dot=_dot;
@property(nonatomic) double cacheProgress; // @synthesize cacheProgress=_cacheProgress;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)setPrgressTimeViewWithProgress:(double)arg1;
- (void)hideProgressTime;
- (void)updateProgressWithTime:(id)arg1 progress:(double)arg2;
- (void)showProgressTime:(id)arg1 currentProgress:(double)arg2;
- (void)resetCacheProgress;
- (void)resetProgress;
- (void)setFrame:(struct CGRect)arg1;
- (void)setupView;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithProgressColorKey:(id)arg1 cacheProgress:(_Bool)arg2;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2;

@end

