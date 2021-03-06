//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@protocol IndicatorLocationChangeDelegate;

@interface CTFlightSliderIndicator : UIControl
{
    struct CGPoint startPoint;
    _Bool isDragToLeft;
    int _sliderType;
    CTFlightSliderIndicator *_otherSlider;
    id <IndicatorLocationChangeDelegate> _delegate;
}

@property(nonatomic) __weak id <IndicatorLocationChangeDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int sliderType; // @synthesize sliderType=_sliderType;
@property(nonatomic) __weak CTFlightSliderIndicator *otherSlider; // @synthesize otherSlider=_otherSlider;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)isDragToLeftSideWithTouch:(id)arg1;
- (_Bool)isLeftSlider;
- (void)updateOtherSliderLocationWithOffsetX:(float)arg1;
- (void)updateOtherSliderLocationWithTouch:(id)arg1 offsetX:(float)arg2;
- (void)updateSliderLocationWithOffsetX:(float)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

