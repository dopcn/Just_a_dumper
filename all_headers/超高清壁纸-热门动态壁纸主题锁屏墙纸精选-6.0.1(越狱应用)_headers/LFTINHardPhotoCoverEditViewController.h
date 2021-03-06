//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LFTINBaseViewController.h"

@class LFTINCollageElementView, LFTINColorSelectView, LFTINOriginImageLoadingView, LFTINPhoneCoverSizeModel, LFTINPhotoAsset, UIImage, UIImageView, UIView;

@interface LFTINHardPhotoCoverEditViewController : LFTINBaseViewController
{
    _Bool hadChangedColor;
    UIImageView *_coverImage;
    LFTINColorSelectView *_colorSelectView;
    UIView *_photoView;
    UIView *_phoneContentView;
    UIView *_photoCoverBackGroundView;
    LFTINCollageElementView *_collageElementView;
    LFTINOriginImageLoadingView *_originLoadingView;
    LFTINPhotoAsset *_photoAsset;
    UIImage *_assetOriginImage;
    LFTINPhoneCoverSizeModel *_selectedPhoneSize;
    UIView *_pngTipView;
}

@property(nonatomic) __weak UIView *pngTipView; // @synthesize pngTipView=_pngTipView;
@property(retain, nonatomic) LFTINPhoneCoverSizeModel *selectedPhoneSize; // @synthesize selectedPhoneSize=_selectedPhoneSize;
@property(retain, nonatomic) UIImage *assetOriginImage; // @synthesize assetOriginImage=_assetOriginImage;
@property(retain, nonatomic) LFTINPhotoAsset *photoAsset; // @synthesize photoAsset=_photoAsset;
@property(nonatomic) __weak LFTINOriginImageLoadingView *originLoadingView; // @synthesize originLoadingView=_originLoadingView;
@property(nonatomic) __weak LFTINCollageElementView *collageElementView; // @synthesize collageElementView=_collageElementView;
@property(nonatomic) __weak UIView *photoCoverBackGroundView; // @synthesize photoCoverBackGroundView=_photoCoverBackGroundView;
@property(nonatomic) __weak UIView *phoneContentView; // @synthesize phoneContentView=_phoneContentView;
@property(nonatomic) __weak UIView *photoView; // @synthesize photoView=_photoView;
@property(nonatomic) __weak LFTINColorSelectView *colorSelectView; // @synthesize colorSelectView=_colorSelectView;
@property(nonatomic) __weak UIImageView *coverImage; // @synthesize coverImage=_coverImage;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)removePngTipView;
- (void)generateCollageElementView;
- (void)showLoadingSucc;
- (void)loadingPhotoAsset;
- (void)resetTitleView;
- (void)rightNavButtonAction;
- (void)leftNavButtonAction;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

