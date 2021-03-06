//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

@interface MQQMaskSpinningCircleView : UIView
{
    UIColor *_strokeColor;
    double _lineWidth;
    double _arcAngle;
    double _tailAngle;
    double _duration;
    CAShapeLayer *_circleLayer;
    CAShapeLayer *_maskArcLayer;
}

@property(retain, nonatomic) CAShapeLayer *maskArcLayer; // @synthesize maskArcLayer=_maskArcLayer;
@property(retain, nonatomic) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double tailAngle; // @synthesize tailAngle=_tailAngle;
@property(nonatomic) double arcAngle; // @synthesize arcAngle=_arcAngle;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(copy, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (void)layoutAll;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)stopAnimation;
- (void)startAnimation;

@end

