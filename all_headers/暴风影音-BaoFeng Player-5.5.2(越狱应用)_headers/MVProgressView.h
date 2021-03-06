//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CABasicAnimation, UIColor;

@interface MVProgressView : UIView
{
    _Bool _animationFinished;
    double _progress;
    UIColor *_processColor;
    long long _current;
    double _duration;
    unsigned long long _status;
    UIView *_progressView;
    double _wholeWidth;
    double _speed;
    CABasicAnimation *_animation;
    double _currentProgress;
    double _currentTime;
    long long _orientation;
}

@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(retain, nonatomic) CABasicAnimation *animation; // @synthesize animation=_animation;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double wholeWidth; // @synthesize wholeWidth=_wholeWidth;
@property(nonatomic) _Bool animationFinished; // @synthesize animationFinished=_animationFinished;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long current; // @synthesize current=_current;
@property(retain, nonatomic) UIColor *processColor; // @synthesize processColor=_processColor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)resumeLayer:(id)arg1;
- (void)pauseLayer:(id)arg1;
- (void)fillStop;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)startWithProgress:(double)arg1 duration:(double)arg2;
- (void)start;
- (void)continueWithPlayCurrent:(double)arg1;
- (void)setupUI;
- (id)init;

@end

