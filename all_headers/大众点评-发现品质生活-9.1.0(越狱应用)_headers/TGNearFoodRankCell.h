//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseMarginCell.h"

@class NVHorizontalLine, NVImageView, TGPriceView, UIImageView, UILabel;

@interface TGNearFoodRankCell : NVBaseMarginCell
{
    long long _index;
    NVImageView *_imageViewForShop;
    UIImageView *_imageViewForRankIcon;
    UILabel *_labelForRank;
    UILabel *_labelForTitle;
    UIImageView *_imageViewForShopStar;
    UILabel *_labelForPriceText;
    UILabel *_labelForShopInfo;
    UILabel *_labelForDistance;
    NVHorizontalLine *_horizontalLine;
    UIImageView *_imageViewForDealIcon;
    TGPriceView *_priceViewForPrice;
    TGPriceView *_priceViewForOriginalPrice;
    UILabel *_labelForDealTitle;
}

+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) UILabel *labelForDealTitle; // @synthesize labelForDealTitle=_labelForDealTitle;
@property(retain, nonatomic) TGPriceView *priceViewForOriginalPrice; // @synthesize priceViewForOriginalPrice=_priceViewForOriginalPrice;
@property(retain, nonatomic) TGPriceView *priceViewForPrice; // @synthesize priceViewForPrice=_priceViewForPrice;
@property(retain, nonatomic) UIImageView *imageViewForDealIcon; // @synthesize imageViewForDealIcon=_imageViewForDealIcon;
@property(retain, nonatomic) NVHorizontalLine *horizontalLine; // @synthesize horizontalLine=_horizontalLine;
@property(retain, nonatomic) UILabel *labelForDistance; // @synthesize labelForDistance=_labelForDistance;
@property(retain, nonatomic) UILabel *labelForShopInfo; // @synthesize labelForShopInfo=_labelForShopInfo;
@property(retain, nonatomic) UILabel *labelForPriceText; // @synthesize labelForPriceText=_labelForPriceText;
@property(retain, nonatomic) UIImageView *imageViewForShopStar; // @synthesize imageViewForShopStar=_imageViewForShopStar;
@property(retain, nonatomic) UILabel *labelForTitle; // @synthesize labelForTitle=_labelForTitle;
@property(retain, nonatomic) UILabel *labelForRank; // @synthesize labelForRank=_labelForRank;
@property(retain, nonatomic) UIImageView *imageViewForRankIcon; // @synthesize imageViewForRankIcon=_imageViewForRankIcon;
@property(retain, nonatomic) NVImageView *imageViewForShop; // @synthesize imageViewForShop=_imageViewForShop;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setData:(id)arg1;
- (void)initialize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 leftCellMarginType:(long long)arg3 rightCellMarginType:(long long)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

