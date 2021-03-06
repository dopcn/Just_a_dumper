//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSObject, SNHWGGoodsTagModuleDTO, SNUIImageView, UILabel;
@protocol SNHWGGoodsItemViewDelegate;

@interface SNHWGGoodsItemView : UIView
{
    NSObject<SNHWGGoodsItemViewDelegate> *_delegate;
    SNHWGGoodsTagModuleDTO *_dto;
    SNUIImageView *_goodsImageView;
    UILabel *_goodsNameLabel;
    UILabel *_priceLabel;
    UILabel *_previousPriceLabel;
    UIView *_strikethroughView;
    SNUIImageView *_sellOutImageView;
}

@property(retain, nonatomic) SNUIImageView *sellOutImageView; // @synthesize sellOutImageView=_sellOutImageView;
@property(retain, nonatomic) UIView *strikethroughView; // @synthesize strikethroughView=_strikethroughView;
@property(retain, nonatomic) UILabel *previousPriceLabel; // @synthesize previousPriceLabel=_previousPriceLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *goodsNameLabel; // @synthesize goodsNameLabel=_goodsNameLabel;
@property(retain, nonatomic) SNUIImageView *goodsImageView; // @synthesize goodsImageView=_goodsImageView;
@property(retain, nonatomic) SNHWGGoodsTagModuleDTO *dto; // @synthesize dto=_dto;
@property(nonatomic) __weak NSObject<SNHWGGoodsItemViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)goodItemViewTapped:(id)arg1;
- (void)addconstraintToSubView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

