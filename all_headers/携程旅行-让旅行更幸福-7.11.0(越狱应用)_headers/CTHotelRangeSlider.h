//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CALayer, CTHotelBubbleView, CTHotelKnobLayer, NSArray, UIColor;

@interface CTHotelRangeSlider : UIControl
{
    _Bool _viewLoaded;
    _Bool _possibleHightlighted;
    int _stepValue;
    int _gridMaxValue;
    int _lowerValue;
    int _upperValue;
    int _minimumValue;
    int _maximumValue;
    int _tempLowerValue;
    int _tempUpperValue;
    NSArray *_models;
    UIColor *_normalColor;
    UIColor *_selectedColor;
    CALayer *_progressLayer;
    CALayer *_selectedProgressLayer;
    CTHotelKnobLayer *_lowerKnobLayer;
    CTHotelKnobLayer *_upperKnobLayer;
    unsigned long long _useableTrackLength;
    NSArray *_gridLayers;
    CTHotelBubbleView *_bubbleView;
    struct CGPoint _previousTouchPoint;
}

+ (struct CGSize)getDesiredSize;
+ (id)generateModesGridMax:(int)arg1 andStepValue:(int)arg2;
@property(nonatomic) _Bool possibleHightlighted; // @synthesize possibleHightlighted=_possibleHightlighted;
@property(nonatomic) _Bool viewLoaded; // @synthesize viewLoaded=_viewLoaded;
@property(nonatomic) int tempUpperValue; // @synthesize tempUpperValue=_tempUpperValue;
@property(nonatomic) int tempLowerValue; // @synthesize tempLowerValue=_tempLowerValue;
@property(retain, nonatomic) CTHotelBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) NSArray *gridLayers; // @synthesize gridLayers=_gridLayers;
@property(nonatomic) unsigned long long useableTrackLength; // @synthesize useableTrackLength=_useableTrackLength;
@property(nonatomic) int maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) int minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) struct CGPoint previousTouchPoint; // @synthesize previousTouchPoint=_previousTouchPoint;
@property(retain, nonatomic) CTHotelKnobLayer *upperKnobLayer; // @synthesize upperKnobLayer=_upperKnobLayer;
@property(retain, nonatomic) CTHotelKnobLayer *lowerKnobLayer; // @synthesize lowerKnobLayer=_lowerKnobLayer;
@property(retain, nonatomic) CALayer *selectedProgressLayer; // @synthesize selectedProgressLayer=_selectedProgressLayer;
@property(retain, nonatomic) CALayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(nonatomic) int upperValue; // @synthesize upperValue=_upperValue;
@property(nonatomic) int lowerValue; // @synthesize lowerValue=_lowerValue;
@property(nonatomic) int gridMaxValue; // @synthesize gridMaxValue=_gridMaxValue;
@property(nonatomic) int stepValue; // @synthesize stepValue=_stepValue;
@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
- (void).cxx_destruct;
- (void)detectChanges;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)largerRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didMoveToSuperview;
- (void)setSelectedRange:(id)arg1;
- (int)finalUpperValue;
- (int)finalLowerValue;
- (float)positionForValue:(float)arg1;
- (void)updateFrames;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (int)getSliderMaxValue;
- (id)generatePriceRange;

@end

