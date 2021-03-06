//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSTimer;

@interface VSCountDownButton : UIButton
{
    double _countDownTime;
    double _timeInterval;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _overHandler;
    NSTimer *_timer;
    double _startTime;
    double _backgroundEnterTime;
}

@property(nonatomic) double backgroundEnterTime; // @synthesize backgroundEnterTime=_backgroundEnterTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType overHandler; // @synthesize overHandler=_overHandler;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(readonly, nonatomic) double countDownTime; // @synthesize countDownTime=_countDownTime;
- (void).cxx_destruct;
- (void)stopTimer;
- (void)startTimer;
- (void)enterForeground;
- (void)enterBackground;
- (void)removeNotification;
- (void)addNotification;
- (void)stopTimerAndCallBack;
- (void)startWithCountDownTime:(double)arg1 interval:(double)arg2 handler:(CDUnknownBlockType)arg3 overHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

