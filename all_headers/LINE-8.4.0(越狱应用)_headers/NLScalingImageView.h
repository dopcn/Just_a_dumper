//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class CAShapeLayer, FLAnimatedImageView, UIView;

@interface NLScalingImageView : UIScrollView
{
    _Bool _isNeedCircleMasking;
    _Bool _disablePinchZoom;
    _Bool _shouldPreventDoubleBounce;
    FLAnimatedImageView *_imageView;
    UIView *_maskingView;
    CAShapeLayer *_circleLayer;
}

@property(retain, nonatomic) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(retain, nonatomic) UIView *maskingView; // @synthesize maskingView=_maskingView;
@property(readonly, nonatomic) FLAnimatedImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool shouldPreventDoubleBounce; // @synthesize shouldPreventDoubleBounce=_shouldPreventDoubleBounce;
@property(nonatomic) _Bool disablePinchZoom; // @synthesize disablePinchZoom=_disablePinchZoom;
@property(nonatomic) _Bool isNeedCircleMasking; // @synthesize isNeedCircleMasking=_isNeedCircleMasking;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)centerScrollViewContents;
- (void)setupImageScrollView;
- (void)resetZoomScale;
- (void)updateZoomScale;
- (void)resetImage;
- (void)updateImage:(id)arg1;
- (void)updateGIF:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)didAddSubview:(id)arg1;
- (void)commonInitWithImage:(id)arg1;
- (id)internalImageView;
- (void)layoutSubviews;
- (id)initWithImage:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

