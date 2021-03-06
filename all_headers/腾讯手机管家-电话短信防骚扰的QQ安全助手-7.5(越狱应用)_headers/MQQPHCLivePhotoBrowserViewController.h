//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQBaseViewController.h"

#import "PHLivePhotoViewDelegate-Protocol.h"

@class MQQAsset, MQQPHCBrowserView, NSString, PHLivePhotoView, UIImage, UIView;

@interface MQQPHCLivePhotoBrowserViewController : MQQBaseViewController <PHLivePhotoViewDelegate>
{
    MQQAsset *_originalAsset;
    int _requestID;
    long long _status;
    UIImage *_image;
    UIView *_contentView;
    MQQPHCBrowserView *_originalBrowserView;
    MQQPHCBrowserView *_compressedBrowserView;
    PHLivePhotoView *_livePhotoView;
}

+ (_Bool)isSupported;
@property(retain, nonatomic) PHLivePhotoView *livePhotoView; // @synthesize livePhotoView=_livePhotoView;
@property(retain, nonatomic) MQQPHCBrowserView *compressedBrowserView; // @synthesize compressedBrowserView=_compressedBrowserView;
@property(retain, nonatomic) MQQPHCBrowserView *originalBrowserView; // @synthesize originalBrowserView=_originalBrowserView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) int requestID; // @synthesize requestID=_requestID;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void)didReceiveMemoryWarning;
- (void)changeNavigationBarWithType:(long long)arg1 animated:(_Bool)arg2;
- (void)PHC_willEnterForeground:(id)arg1;
- (void)_unregisterNotification;
- (void)_registerNotification;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (void)_fetchLivePhotoOnCompletion:(CDUnknownBlockType)arg1;
- (void)_resumeFetchingLivePhoto;
- (void)_stopFetchingLivePhoto;
- (void)_startFetchingLivePhoto;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAsset:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

