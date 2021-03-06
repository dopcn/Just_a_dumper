//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SNDynamicFrameworks/SNUITableViewCell.h>

@class NSString, SNSLShopCarRecommendListDTO, SNUIImageView, UIButton, UILabel, UIView;
@protocol SNSLGatherFreeFareCellDelegate;

@interface SNSLGatherFreeFareCell : SNUITableViewCell
{
    NSString *_productStr;
    _Bool _canAdd;
    id <SNSLGatherFreeFareCellDelegate> _tapDelegate;
    SNSLShopCarRecommendListDTO *_product;
    SNUIImageView *_productImageView;
    UILabel *_productName;
    UILabel *_priceLabel;
    UIButton *_addToCart;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIButton *addToCart; // @synthesize addToCart=_addToCart;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) SNUIImageView *productImageView; // @synthesize productImageView=_productImageView;
@property(nonatomic) _Bool canAdd; // @synthesize canAdd=_canAdd;
@property(retain, nonatomic) SNSLShopCarRecommendListDTO *product; // @synthesize product=_product;
@property(nonatomic) __weak id <SNSLGatherFreeFareCellDelegate> tapDelegate; // @synthesize tapDelegate=_tapDelegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)tapAddBt:(id)arg1;
- (void)tapImage:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

