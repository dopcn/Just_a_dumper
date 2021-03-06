//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DPMeterView, UIEffectDesignerView, UIImageView;

@interface NVLoadingView : UIView
{
    struct CGRect _waterViewFrame;
    DPMeterView *_waterView;
    UIEffectDesignerView *_bubbleView;
    UIImageView *_imageView;
}

@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UIEffectDesignerView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(readonly, nonatomic) DPMeterView *waterView; // @synthesize waterView=_waterView;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setLoadingNum:(double)arg1;
- (void)addLoadingNum:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

