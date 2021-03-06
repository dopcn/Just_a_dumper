//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, UIImage, UIImageView, UITapGestureRecognizer, YYWebImageManager;
@protocol ImPageDelegate;

@interface ImPageImageView : UIScrollView <UIScrollViewDelegate>
{
    UIImageView *_imageView;
    UIActivityIndicatorView *_activityView;
    UIImageView *_placeholderImageView;
    struct CGPoint _pointToCenterAfterResize;
    double _scaleToRestoreAfterResize;
    UIImage *_imageData;
    NSString *_imageUrl;
    UIImage *_placeholderImage;
    id <ImPageDelegate> _pageDelegate;
    YYWebImageManager *_imageManager;
    UITapGestureRecognizer *_doubleTap;
    UITapGestureRecognizer *_singleTap;
}

+ (id)view;
@property(retain, nonatomic) UITapGestureRecognizer *singleTap; // @synthesize singleTap=_singleTap;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTap; // @synthesize doubleTap=_doubleTap;
@property(retain, nonatomic) YYWebImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(nonatomic) __weak id <ImPageDelegate> pageDelegate; // @synthesize pageDelegate=_pageDelegate;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) UIImage *imageData; // @synthesize imageData=_imageData;
- (void).cxx_destruct;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)onPageLongPress:(id)arg1;
- (void)onHandlerSingleTap:(id)arg1;
- (struct CGRect)_zoomRectForScale:(float)arg1 withCenter:(struct CGPoint)arg2;
- (void)onHandlerDoubleTap:(id)arg1;
- (void)configScrollViewContentsIfZoomScaleChanged;
- (_Bool)zoomScaleChanged;
- (void)resetScale;
- (void)setMaxMinZoomScalesForCurrentBounds;
- (void)configureForImage:(id)arg1 animated:(_Bool)arg2;
- (void)configureForImage:(id)arg1;
- (void)_addViewGestures;
- (void)_addImageGestures;
- (void)_configImageView;
- (void)_configScrollView;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

