//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIBezierPath;

@interface CouponWaveView : UIView
{
    CAShapeLayer *_shapeLayer;
    UIBezierPath *_bezierPaht;
}

@property(retain, nonatomic) UIBezierPath *bezierPaht; // @synthesize bezierPaht=_bezierPaht;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
- (void).cxx_destruct;
- (void)drawWaveWithCouponWaveType:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

