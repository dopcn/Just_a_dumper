//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;
@protocol MPIVideoVolumeSliderDelegate;

@interface MPIVideoVolumeSlider : UIView
{
    double _value;
    double _maximumValue;
    double _minimumValue;
    UIColor *_color;
    id <MPIVideoVolumeSliderDelegate> _delegate;
    CAShapeLayer *_triangleLayer;
    UIView *_stickView;
    double _valueInterval;
}

@property(nonatomic) double valueInterval; // @synthesize valueInterval=_valueInterval;
@property(retain, nonatomic) UIView *stickView; // @synthesize stickView=_stickView;
@property(retain, nonatomic) CAShapeLayer *triangleLayer; // @synthesize triangleLayer=_triangleLayer;
@property(nonatomic) __weak id <MPIVideoVolumeSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) double value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateValueWithTouches:(id)arg1;
- (id)bezierPathForBeginY:(double)arg1 endY:(double)arg2;
- (void)setupStickView;
- (void)setupLayer;
- (void)setupData;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

