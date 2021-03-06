//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NXMidasNativeAdView.h"

@class MTStrikeThroughLabel, NVModelBaseMidasShopAd, UIImageView, UILabel;

@interface NXMidasDealAdCardView : NXMidasNativeAdView
{
    NVModelBaseMidasShopAd *_model;
    UILabel *_titleLabel;
    double _imgWidth;
    double _imgHeight;
    UIImageView *_mainImageView;
    UILabel *_distanceLabel;
    UILabel *_dealPriceLabel;
    MTStrikeThroughLabel *_originPriceLabel;
}

+ (double)viewHeight;
@property(retain, nonatomic) MTStrikeThroughLabel *originPriceLabel; // @synthesize originPriceLabel=_originPriceLabel;
@property(retain, nonatomic) UILabel *dealPriceLabel; // @synthesize dealPriceLabel=_dealPriceLabel;
@property(retain, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(retain, nonatomic) UIImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
@property(nonatomic) double imgHeight; // @synthesize imgHeight=_imgHeight;
@property(nonatomic) double imgWidth; // @synthesize imgWidth=_imgWidth;
- (id)model;
- (void).cxx_destruct;
- (double)itemsInterval;
- (id)titleLabel;
- (struct _NSRange)getNumRange:(id)arg1;
- (void)layoutSubviews;
- (void)setModel:(id)arg1;

@end

