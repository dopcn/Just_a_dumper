//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAYCell.h"

@class UIImageView, UILabel;

@interface MAYOrderDerivativeSingleView : MAYCell
{
    UIImageView *_goodsImageV;
    UILabel *_goodsTitleLabel;
    UILabel *_priceLabel;
    UILabel *_originPriceLabel;
    UILabel *_descLabel;
}

@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *originPriceLabel; // @synthesize originPriceLabel=_originPriceLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *goodsTitleLabel; // @synthesize goodsTitleLabel=_goodsTitleLabel;
@property(retain, nonatomic) UIImageView *goodsImageV; // @synthesize goodsImageV=_goodsImageV;
- (void).cxx_destruct;
- (void)setMallDeal:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

