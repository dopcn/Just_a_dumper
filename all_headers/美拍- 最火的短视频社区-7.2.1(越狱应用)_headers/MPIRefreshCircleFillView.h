//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, CAShapeLayer, UIColor;

@interface MPIRefreshCircleFillView : UIView
{
    int _lineCap;
    double _fillRate;
    UIColor *_fillColor;
    UIColor *_emptyColor;
    double _rotatingSpeed;
    double _angleOffset;
    double _angleSize;
    CAShapeLayer *_fillCircleLayer;
    CAShapeLayer *_emptyCircleLayer;
    CADisplayLink *_displayLink;
    long long _rotatingOffset;
}

@property(nonatomic) long long rotatingOffset; // @synthesize rotatingOffset=_rotatingOffset;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) CAShapeLayer *emptyCircleLayer; // @synthesize emptyCircleLayer=_emptyCircleLayer;
@property(retain, nonatomic) CAShapeLayer *fillCircleLayer; // @synthesize fillCircleLayer=_fillCircleLayer;
@property(nonatomic) int lineCap; // @synthesize lineCap=_lineCap;
@property(nonatomic) double angleSize; // @synthesize angleSize=_angleSize;
@property(nonatomic) double angleOffset; // @synthesize angleOffset=_angleOffset;
@property(nonatomic) double rotatingSpeed; // @synthesize rotatingSpeed=_rotatingSpeed;
@property(retain, nonatomic) UIColor *emptyColor; // @synthesize emptyColor=_emptyColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) double fillRate; // @synthesize fillRate=_fillRate;
- (void).cxx_destruct;
- (void)commonSetup;
- (void)displayLinkAction;
- (void)stopRotating;
- (void)startRotating;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

