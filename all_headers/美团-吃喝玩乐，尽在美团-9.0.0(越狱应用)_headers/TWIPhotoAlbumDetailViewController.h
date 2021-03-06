//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TWIBaseViewController.h"

#import "MTPageViewDelegate-Protocol.h"
#import "SAKPortalable-Protocol.h"

@class MTMerchantAlbumDescriptionView, MTPageView, NSArray, NSString, RACDisposable, TWIPhotoAlbumDetailViewModel, UITapGestureRecognizer;

@interface TWIPhotoAlbumDetailViewController : TWIBaseViewController <MTPageViewDelegate, SAKPortalable>
{
    unsigned long long _picIndex;
    NSArray *_itemArrays;
    TWIPhotoAlbumDetailViewModel *_viewModel;
    NSString *_photoAlbumTitle;
    UITapGestureRecognizer *_singleTap;
    MTPageView *_pageView;
    MTMerchantAlbumDescriptionView *_descriptionView;
    RACDisposable *_imageFrameDisposable;
}

@property(retain, nonatomic) RACDisposable *imageFrameDisposable; // @synthesize imageFrameDisposable=_imageFrameDisposable;
@property(retain, nonatomic) MTMerchantAlbumDescriptionView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) MTPageView *pageView; // @synthesize pageView=_pageView;
@property(retain, nonatomic) UITapGestureRecognizer *singleTap; // @synthesize singleTap=_singleTap;
@property(retain, nonatomic) NSString *photoAlbumTitle; // @synthesize photoAlbumTitle=_photoAlbumTitle;
@property(retain, nonatomic) TWIPhotoAlbumDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSArray *itemArrays; // @synthesize itemArrays=_itemArrays;
@property(nonatomic) unsigned long long picIndex; // @synthesize picIndex=_picIndex;
- (void).cxx_destruct;
- (void)updateDescriptionView;
- (void)pageView:(id)arg1 moveDescriptionLabelWithAnimation:(_Bool)arg2;
- (void)pageIndexDidChangeInPageView:(id)arg1;
- (id)pageView:(id)arg1 viewForPageAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPagesInPageView:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didClickSaveToAlbum;
- (void)didSingleTap;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)reloadPhotos;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)pageDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

