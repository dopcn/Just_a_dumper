//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class CropViewLayer, ImageViewLayer, NSString, UIImage, UIImageView, UIView;

@interface ScreenShotView : UIScrollView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    CropViewLayer *_cropView;
    struct CGRect _cropRect;
    struct CGRect _translatedCropRect;
    float firstScale;
    ImageViewLayer *_drawImageView;
    UIImage *_originImage;
    struct CGRect orginFrame;
    struct CGPoint orginCenter;
    _Bool haveResetFrame;
    int _shapeType;
    float _pinchScale;
    UIImage *_screenImage;
    UIImageView *_centerImageView;
    ImageViewLayer *_contentView;
    struct CGPoint _scrollOffSet;
    struct CGPoint _firstTouch;
    struct CGPoint _lastTouch;
    struct CGRect _initialFrame;
    struct CGRect _initialDrawingFrame;
}

@property float pinchScale; // @synthesize pinchScale=_pinchScale;
@property struct CGRect initialDrawingFrame; // @synthesize initialDrawingFrame=_initialDrawingFrame;
@property struct CGRect initialFrame; // @synthesize initialFrame=_initialFrame;
@property struct CGPoint lastTouch; // @synthesize lastTouch=_lastTouch;
@property struct CGPoint firstTouch; // @synthesize firstTouch=_firstTouch;
@property int shapeType; // @synthesize shapeType=_shapeType;
@property(retain, nonatomic) UIView *cropView; // @synthesize cropView=_cropView;
@property(retain, nonatomic) ImageViewLayer *contentView; // @synthesize contentView=_contentView;
@property struct CGPoint scrollOffSet; // @synthesize scrollOffSet=_scrollOffSet;
@property(retain, nonatomic) UIImageView *centerImageView; // @synthesize centerImageView=_centerImageView;
@property(retain, nonatomic) UIImage *screenImage; // @synthesize screenImage=_screenImage;
- (void).cxx_destruct;
- (void)dealloc;
- (void)mergeImage;
- (id)getCroppedImage;
- (void)resumeContentviewFrame;
- (void)resetContentviewFrame:(id)arg1;
- (void)setImageViewParams;
- (void)layoutforPinch;
- (void)setDrawingView;
- (void)setCenterImage:(id)arg1;
- (void)layoutSubviews;
- (void)setCropView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

