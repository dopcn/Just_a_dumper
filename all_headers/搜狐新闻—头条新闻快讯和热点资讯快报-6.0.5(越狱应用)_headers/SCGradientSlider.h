//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCProgressView, UISlider;

@interface SCGradientSlider : UIView
{
    float _value;
    UISlider *_sliderV;
    SCProgressView *_progressV;
    CDUnknownBlockType _scrubHandler;
}

@property(copy, nonatomic) CDUnknownBlockType scrubHandler; // @synthesize scrubHandler=_scrubHandler;
@property(nonatomic) __weak SCProgressView *progressV; // @synthesize progressV=_progressV;
@property(nonatomic) __weak UISlider *sliderV; // @synthesize sliderV=_sliderV;
@property(nonatomic) float value; // @synthesize value=_value;
- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)endScrubbing:(id)arg1;
- (void)scrub:(id)arg1;
- (void)beginScrubbing:(id)arg1;
- (void)addScrubHandler:(CDUnknownBlockType)arg1;
- (void)setColors:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

