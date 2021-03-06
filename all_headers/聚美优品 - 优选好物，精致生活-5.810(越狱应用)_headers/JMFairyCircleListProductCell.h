//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JMFairyCircleListCell.h"

@class UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface JMFairyCircleListProductCell : JMFairyCircleListCell
{
    UIImageView *_productImageView;
    UILabel *_productName;
    UILabel *_productFeature;
    UILabel *_productPrice;
    UILabel *_customerSatisfactionTitle;
    UILabel *_customerSatisfaction;
    UIView *_productBackground;
    UIImageView *_shoppingCartImageView;
    UITapGestureRecognizer *_tapShoppingCart;
    UILabel *_dateLineLabel;
    UIView *_maskShoppingCartView;
}

@property(nonatomic) __weak UIView *maskShoppingCartView; // @synthesize maskShoppingCartView=_maskShoppingCartView;
@property(nonatomic) __weak UILabel *dateLineLabel; // @synthesize dateLineLabel=_dateLineLabel;
@property(retain, nonatomic) UITapGestureRecognizer *tapShoppingCart; // @synthesize tapShoppingCart=_tapShoppingCart;
@property(nonatomic) __weak UIImageView *shoppingCartImageView; // @synthesize shoppingCartImageView=_shoppingCartImageView;
@property(nonatomic) __weak UIView *productBackground; // @synthesize productBackground=_productBackground;
@property(nonatomic) __weak UILabel *customerSatisfaction; // @synthesize customerSatisfaction=_customerSatisfaction;
@property(nonatomic) __weak UILabel *customerSatisfactionTitle; // @synthesize customerSatisfactionTitle=_customerSatisfactionTitle;
@property(nonatomic) __weak UILabel *productPrice; // @synthesize productPrice=_productPrice;
@property(nonatomic) __weak UILabel *productFeature; // @synthesize productFeature=_productFeature;
@property(nonatomic) __weak UILabel *productName; // @synthesize productName=_productName;
@property(nonatomic) __weak UIImageView *productImageView; // @synthesize productImageView=_productImageView;
- (void).cxx_destruct;
- (void)setModel:(id)arg1;
- (void)prepareForReuse;
- (id)productView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)__setup;
- (void)awakeFromNib;

@end

