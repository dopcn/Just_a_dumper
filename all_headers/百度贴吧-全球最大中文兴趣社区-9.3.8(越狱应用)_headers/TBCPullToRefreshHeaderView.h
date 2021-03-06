//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCPullToRefreshBaseView.h"

#import "CAAnimationDelegate-Protocol.h"

@class CAShapeLayer, NSString, NSTimer, UIImageView, UIView;

@interface TBCPullToRefreshHeaderView : TBCPullToRefreshBaseView <CAAnimationDelegate>
{
    _Bool _excludeNightMode;
    _Bool _isLoading;
    CAShapeLayer *_pullLayer;
    CAShapeLayer *_joggleLayer;
    CAShapeLayer *_flowUpLayer;
    NSTimer *_resetTimer;
    long long _dampingTime;
    NSTimer *_bearAppearTimer;
    long long _bearAniTime;
    UIImageView *_bearAnimationImageView;
    UIView *_bearAnimationView;
    CAShapeLayer *_bearAnimationLayer;
}

@property(retain, nonatomic) CAShapeLayer *bearAnimationLayer; // @synthesize bearAnimationLayer=_bearAnimationLayer;
@property(retain, nonatomic) UIView *bearAnimationView; // @synthesize bearAnimationView=_bearAnimationView;
@property(retain, nonatomic) UIImageView *bearAnimationImageView; // @synthesize bearAnimationImageView=_bearAnimationImageView;
@property(nonatomic) long long bearAniTime; // @synthesize bearAniTime=_bearAniTime;
@property(retain, nonatomic) NSTimer *bearAppearTimer; // @synthesize bearAppearTimer=_bearAppearTimer;
@property(nonatomic) long long dampingTime; // @synthesize dampingTime=_dampingTime;
@property(retain, nonatomic) NSTimer *resetTimer; // @synthesize resetTimer=_resetTimer;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) CAShapeLayer *flowUpLayer; // @synthesize flowUpLayer=_flowUpLayer;
@property(retain, nonatomic) CAShapeLayer *joggleLayer; // @synthesize joggleLayer=_joggleLayer;
@property(retain, nonatomic) CAShapeLayer *pullLayer; // @synthesize pullLayer=_pullLayer;
@property(nonatomic) _Bool excludeNightMode; // @synthesize excludeNightMode=_excludeNightMode;
- (void)layoutSubviews;
- (void)setPullToRefreshState:(int)arg1;
- (void)startRefresh;
- (void)resetAllStatus;
- (void)joggle;
- (void)startLoading;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)bearAppearAnimation;
- (void)startScale;
- (void)resetEllipse;
- (void)bubbleFlowUp;
- (void)moveBearTop;
- (struct CGPath *)createBearEllipseMask;
- (struct CGPath *)createResetEllipseInRect;
- (struct CGPath *)createEllipseInRect:(struct CGPoint)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)createBearAnimationView;
- (void)loadAniView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

