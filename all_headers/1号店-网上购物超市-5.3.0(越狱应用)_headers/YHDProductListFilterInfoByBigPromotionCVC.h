//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OTSBase/OTSCollectionViewCell.h>

@class UIImageView, UILabel;

@interface YHDProductListFilterInfoByBigPromotionCVC : OTSCollectionViewCell
{
    UILabel *_promotionNameLab;
    UIImageView *_chooseImage;
}

@property(retain, nonatomic) UIImageView *chooseImage; // @synthesize chooseImage=_chooseImage;
@property(retain, nonatomic) UILabel *promotionNameLab; // @synthesize promotionNameLab=_promotionNameLab;
- (void).cxx_destruct;
- (_Bool)checkPromotionState:(long long)arg1 andInputFilter:(id)arg2;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

