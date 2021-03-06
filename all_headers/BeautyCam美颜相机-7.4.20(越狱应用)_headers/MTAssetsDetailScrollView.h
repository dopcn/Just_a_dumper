//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MTImageManager, MTPhotoAsset, NSString, UIImage, UIImageView, UILabel, UIView;
@protocol MTAssetScrollViewDelegate;

@interface MTAssetsDetailScrollView : UIScrollView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _isInIcloud;
    int _requestID;
    id <MTAssetScrollViewDelegate> _customDelegate;
    MTPhotoAsset *_photoAsset;
    MTImageManager *_imageManager;
    UILabel *_icloudDownLoadTipLabel;
    UIImageView *_imageView;
    UIView *_icloudDownLoadTipView;
    struct CGSize _cachingImageTargetSize;
}

@property(retain, nonatomic) UIView *icloudDownLoadTipView; // @synthesize icloudDownLoadTipView=_icloudDownLoadTipView;
@property(nonatomic) _Bool isInIcloud; // @synthesize isInIcloud=_isInIcloud;
@property(nonatomic) int requestID; // @synthesize requestID=_requestID;
@property(nonatomic) struct CGSize cachingImageTargetSize; // @synthesize cachingImageTargetSize=_cachingImageTargetSize;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *icloudDownLoadTipLabel; // @synthesize icloudDownLoadTipLabel=_icloudDownLoadTipLabel;
@property(nonatomic) __weak MTImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain, nonatomic) MTPhotoAsset *photoAsset; // @synthesize photoAsset=_photoAsset;
@property(nonatomic) __weak id <MTAssetScrollViewDelegate> customDelegate; // @synthesize customDelegate=_customDelegate;
- (void).cxx_destruct;
- (void)handleTapGesture:(id)arg1;
- (void)zoomBackWithCenterPoint:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (struct CGRect)zoomRectForScale:(double)arg1 withCenter:(struct CGPoint)arg2;
- (void)fitImageViewFrameByImageSize:(struct CGSize)arg1 centerPoint:(struct CGPoint)arg2;
@property(readonly, nonatomic) UIImage *image;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

