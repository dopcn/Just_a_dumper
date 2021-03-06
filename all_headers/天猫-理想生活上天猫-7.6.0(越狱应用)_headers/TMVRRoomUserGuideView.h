//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, TMLiveRoomMotionMonitor, UIButton, UIImageView, UILabel;
@protocol TMVRRoomUserGuideDelegate;

@interface TMVRRoomUserGuideView : UIView
{
    _Bool _hasSkip;
    _Bool _canHiddenView;
    id <TMVRRoomUserGuideDelegate> _delegate;
    UIImageView *_firstImageView;
    UIImageView *_secondImageView;
    UIImageView *_thirdImageView;
    UILabel *_infoLabel;
    UIImageView *_defaultImageView;
    NSTimer *_timer;
    double _showDuration;
    UIButton *_skipButton;
    TMLiveRoomMotionMonitor *_motionMonitor;
}

@property(retain, nonatomic) TMLiveRoomMotionMonitor *motionMonitor; // @synthesize motionMonitor=_motionMonitor;
@property(retain, nonatomic) UIButton *skipButton; // @synthesize skipButton=_skipButton;
@property(nonatomic) _Bool canHiddenView; // @synthesize canHiddenView=_canHiddenView;
@property(nonatomic) double showDuration; // @synthesize showDuration=_showDuration;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIImageView *defaultImageView; // @synthesize defaultImageView=_defaultImageView;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UIImageView *thirdImageView; // @synthesize thirdImageView=_thirdImageView;
@property(retain, nonatomic) UIImageView *secondImageView; // @synthesize secondImageView=_secondImageView;
@property(retain, nonatomic) UIImageView *firstImageView; // @synthesize firstImageView=_firstImageView;
@property(nonatomic) _Bool hasSkip; // @synthesize hasSkip=_hasSkip;
@property(nonatomic) __weak id <TMVRRoomUserGuideDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hiddenGuideView;
- (void)reduceTime;
- (void)stopTimer;
- (void)startTimer;
- (void)closeUserGuide:(id)arg1;
- (void)singleShowGuideView:(double)arg1;
- (void)showGuideView:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

