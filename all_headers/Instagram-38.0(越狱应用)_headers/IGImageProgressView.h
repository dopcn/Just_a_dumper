//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGRemoteImageViewDelegate-Protocol.h"

@class IGCircularProgressView, IGImageSpecifier, IGRemoteImageView, NSData, NSString, UIButton, UIImage;
@protocol IGImageProgressViewDelegate;

@interface IGImageProgressView : UIView <IGRemoteImageViewDelegate>
{
    UIButton *_failureView;
    double _loadingStartTime;
    _Bool _useDarkBackgroundLoadingStyle;
    IGImageSpecifier *_imageSpecifier;
    IGRemoteImageView *_photoImageView;
    unsigned long long _loadStatus;
    IGCircularProgressView *_progressView;
    id <IGImageProgressViewDelegate> _delegate;
}

@property(nonatomic) _Bool useDarkBackgroundLoadingStyle; // @synthesize useDarkBackgroundLoadingStyle=_useDarkBackgroundLoadingStyle;
@property(nonatomic) __weak id <IGImageProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGCircularProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) unsigned long long loadStatus; // @synthesize loadStatus=_loadStatus;
@property(readonly, nonatomic) IGRemoteImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
@property(retain, nonatomic) IGImageSpecifier *imageSpecifier; // @synthesize imageSpecifier=_imageSpecifier;
- (void).cxx_destruct;
- (void)remoteImageView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)remoteImageView:(id)arg1 didFailToLoadImageWitherror:(id)arg2;
- (void)remoteImageView:(id)arg1 didLoadImageFromSource:(unsigned long long)arg2;
- (void)remoteImageView:(id)arg1 didLoadPreviewWithProgressiveJPEGScanNumber:(id)arg2;
- (void)overrideImageLoadFailure;
- (void)retryMediaFetch;
- (void)makeFailureViewIfNeeded;
- (void)updateProgressFailureView;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImage *preloadedImage;
@property(retain, nonatomic) NSData *previewImageData;
@property(readonly, copy) NSString *description;
- (id)initWithFrame:(struct CGRect)arg1 shouldUseProgressiveJPEG:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

