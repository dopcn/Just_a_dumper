//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class OSSDiscountLabel, UIImageView, UILabel;

@interface OSSTravelActivityCollectionViewCell : UICollectionViewCell
{
    UIImageView *_headerImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_priceLabel;
    OSSDiscountLabel *_tagLabel;
    UILabel *_discountPriceLabel;
}

+ (id)cellReuseId:(id)arg1;
@property(retain, nonatomic) UILabel *discountPriceLabel; // @synthesize discountPriceLabel=_discountPriceLabel;
@property(retain, nonatomic) OSSDiscountLabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
- (void).cxx_destruct;
- (void)setData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

