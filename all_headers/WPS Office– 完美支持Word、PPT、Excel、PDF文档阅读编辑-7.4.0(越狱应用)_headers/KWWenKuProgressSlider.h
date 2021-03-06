//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIColor;

@interface KWWenKuProgressSlider : UIControl
{
    _Bool _isSliding;
    double _minValue;
    double _maxValue;
    double _value;
    double _sliderPercent;
    double _progressPercent;
    long long _direction;
    UIColor *_lineColor;
    UIColor *_slidedLineColor;
    UIColor *_progressLineColor;
    UIColor *_circleColor;
    double _lineWidth;
    double _circleRadius;
}

@property(nonatomic) double circleRadius; // @synthesize circleRadius=_circleRadius;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *circleColor; // @synthesize circleColor=_circleColor;
@property(retain, nonatomic) UIColor *progressLineColor; // @synthesize progressLineColor=_progressLineColor;
@property(retain, nonatomic) UIColor *slidedLineColor; // @synthesize slidedLineColor=_slidedLineColor;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) _Bool isSliding; // @synthesize isSliding=_isSliding;
@property(nonatomic) double progressPercent; // @synthesize progressPercent=_progressPercent;
@property(nonatomic) double sliderPercent; // @synthesize sliderPercent=_sliderPercent;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
- (void).cxx_destruct;
- (void)callbackTouchEnd:(_Bool)arg1;
- (void)updateTouchPoint:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 direction:(long long)arg2;

@end

