//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBBBorderBaseCell.h"

@class TBHtmlLabel, TBImageView, UIColor, UIImageView, UILabel, UIView;

@interface TBBShopListCell : TBBBorderBaseCell
{
    UIColor *_bgColor;
    struct CGRect _shopImgOriginalRect;
    struct CGRect _shopNameOriginalRect;
    struct CGRect _shopAddressOriginalRect;
    struct CGRect _priceOriginalRect;
    UIView *_customContent;
    TBImageView *_shopImg;
    UILabel *_shopName;
    UILabel *_shopType;
    UILabel *_shopAddress;
    UILabel *_distance;
    TBHtmlLabel *_priceRange;
    TBHtmlLabel *_groupCount;
    UIImageView *_distanceImg;
}

+ (float)tableView:(id)arg1 rowHeightForObject:(id)arg2;
@property(nonatomic) __weak UIImageView *distanceImg; // @synthesize distanceImg=_distanceImg;
@property(nonatomic) __weak TBHtmlLabel *groupCount; // @synthesize groupCount=_groupCount;
@property(nonatomic) __weak TBHtmlLabel *priceRange; // @synthesize priceRange=_priceRange;
@property(nonatomic) __weak UILabel *distance; // @synthesize distance=_distance;
@property(nonatomic) __weak UILabel *shopAddress; // @synthesize shopAddress=_shopAddress;
@property(nonatomic) __weak UILabel *shopType; // @synthesize shopType=_shopType;
@property(nonatomic) __weak UILabel *shopName; // @synthesize shopName=_shopName;
@property(nonatomic) __weak TBImageView *shopImg; // @synthesize shopImg=_shopImg;
@property(retain, nonatomic) UIView *customContent; // @synthesize customContent=_customContent;
- (void).cxx_destruct;
- (void)setObject:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)animationForExpand:(double)arg1 expand:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;

@end

