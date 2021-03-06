//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BabyShopInfoHeadPicArrowView, CAGradientLayer, NSArray, NVModelBaseBabyJoyShopInfo, UIImageView, UILabel;

@interface BabyShopInfoHeadPicView : UIView
{
    NVModelBaseBabyJoyShopInfo *_shopInfo;
    UIImageView *_imageViewForPic;
    BabyShopInfoHeadPicArrowView *_viewForAlbum;
    UIView *_viewForMask;
    NSArray *_labForTags;
    CAGradientLayer *_gradientLayer;
    UILabel *_labelForAlbumCount;
    UIImageView *_imageViewForArrow;
}

+ (struct CGSize)viewSize;
+ (double)picRatio;
@property(retain, nonatomic) UIImageView *imageViewForArrow; // @synthesize imageViewForArrow=_imageViewForArrow;
@property(retain, nonatomic) UILabel *labelForAlbumCount; // @synthesize labelForAlbumCount=_labelForAlbumCount;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) NSArray *labForTags; // @synthesize labForTags=_labForTags;
@property(retain, nonatomic) UIView *viewForMask; // @synthesize viewForMask=_viewForMask;
@property(retain, nonatomic) BabyShopInfoHeadPicArrowView *viewForAlbum; // @synthesize viewForAlbum=_viewForAlbum;
@property(retain, nonatomic) UIImageView *imageViewForPic; // @synthesize imageViewForPic=_imageViewForPic;
@property(retain, nonatomic) NVModelBaseBabyJoyShopInfo *shopInfo; // @synthesize shopInfo=_shopInfo;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

