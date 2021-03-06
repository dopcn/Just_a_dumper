//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

#import "CAAnimationDelegate-Protocol.h"

@class CALayer, NSString, UIColor;
@protocol MDCInkLayerRippleDelegate;

@interface GMSx_MDCInkLayerRipple : CAShapeLayer <CAAnimationDelegate>
{
    _Bool _animationCleared;
    _Bool _bounded;
    id <MDCInkLayerRippleDelegate> _animationDelegate;
    CALayer *_inkLayer;
    double _radius;
    long long _rippleState;
    UIColor *_color;
    struct CGPoint _point;
    struct CGRect _targetFrame;
}

@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) long long rippleState; // @synthesize rippleState=_rippleState;
@property(nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) __weak CALayer *inkLayer; // @synthesize inkLayer=_inkLayer;
@property(nonatomic) _Bool bounded; // @synthesize bounded=_bounded;
@property(nonatomic) __weak id <MDCInkLayerRippleDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
@property(nonatomic, getter=isAnimationCleared) _Bool animationCleared; // @synthesize animationCleared=_animationCleared;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)logDecelerateEasing;
- (id)scaleAnimWithValues:(id)arg1 times:(id)arg2;
- (id)positionAnimWithPath:(struct CGPath *)arg1 duration:(double)arg2 timingFunction:(id)arg3;
- (id)opacityAnimWithValues:(id)arg1 times:(id)arg2;
- (void)exit;
- (void)enter;
- (void)setupRipple;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

