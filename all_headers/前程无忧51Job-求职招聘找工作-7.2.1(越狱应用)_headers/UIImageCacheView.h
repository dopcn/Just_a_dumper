//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "DataHttpConnectionDelegate-Protocol.h"

@class NSString, NSURL, UIActivityIndicatorView, UIGestureRecognizer, UIImage;
@protocol ImageCacheViewDelegate;

@interface UIImageCacheView : UIImageView <DataHttpConnectionDelegate>
{
    NSURL *imageURL;
    long long keepCacheInSeconds;
    UIActivityIndicatorView *activityView;
    id _tapTarget;
    SEL _tapAction;
    _Bool _imageFromCache;
    _Bool _imageIsLoading;
    _Bool _imageLoadSuccess;
    _Bool _isRefreshImageData;
    _Bool _isHideActivity;
    _Bool _needLoadImageCache;
    _Bool _reloadUseDefaultImage;
    UIImage *_defaultImage;
    UIImage *_failImage;
    id <ImageCacheViewDelegate> _delegate;
    UIGestureRecognizer *_tapGestureRecognizer;
}

+ (id)getCachedImageForURL:(id)arg1;
+ (_Bool)hasImageCacheDataForURL:(id)arg1;
+ (_Bool)saveImageCacheData:(id)arg1 forURL:(id)arg2;
@property(retain) UIGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) _Bool reloadUseDefaultImage; // @synthesize reloadUseDefaultImage=_reloadUseDefaultImage;
@property(nonatomic) _Bool needLoadImageCache; // @synthesize needLoadImageCache=_needLoadImageCache;
@property __weak id <ImageCacheViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isHideActivity; // @synthesize isHideActivity=_isHideActivity;
@property(retain, nonatomic) UIImage *failImage; // @synthesize failImage=_failImage;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(nonatomic) _Bool isRefreshImageData; // @synthesize isRefreshImageData=_isRefreshImageData;
@property(readonly) _Bool imageLoadSuccess; // @synthesize imageLoadSuccess=_imageLoadSuccess;
@property(readonly) _Bool imageIsLoading; // @synthesize imageIsLoading=_imageIsLoading;
@property(readonly) _Bool imageFromCache; // @synthesize imageFromCache=_imageFromCache;
@property(retain) NSURL *imageURL; // @synthesize imageURL;
- (void).cxx_destruct;
- (void)heightToFit;
- (void)setTapGesture:(id)arg1 action:(SEL)arg2;
- (void)connection:(id)arg1 onReceived:(id)arg2;
- (void)connection:(id)arg1 onError:(id)arg2;
- (void)imageLoadfailed;
- (void)removeActivityView;
- (void)startActivityView;
- (void)setActivityViewFrame;
- (_Bool)imageCacheHasLoaded;
- (_Bool)applyImageFromData:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)loadImageWithURL:(id)arg1 withCache:(_Bool)arg2 defaultImage:(id)arg3 inSeconds:(long long)arg4 hideActivity:(_Bool)arg5;
- (void)loadImageWithURL:(id)arg1 withCache:(_Bool)arg2 defaultImage:(id)arg3 inSeconds:(long long)arg4;
- (void)loadImageWithURL:(id)arg1 withCache:(_Bool)arg2 defaultImage:(id)arg3 hideActivity:(_Bool)arg4;
- (void)loadImageWithURL:(id)arg1 withCache:(_Bool)arg2 defaultImage:(id)arg3;
- (void)loadImageWithURL:(id)arg1 defaultImage:(id)arg2 hideActivity:(_Bool)arg3;
- (void)loadImageWithURL:(id)arg1 defaultImage:(id)arg2;
- (void)loadImageData;
- (void)stopLoading;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

