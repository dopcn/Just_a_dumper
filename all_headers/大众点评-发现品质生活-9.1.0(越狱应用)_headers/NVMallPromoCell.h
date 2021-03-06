//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVMallShopCell.h"

@class UILabel, UIView;

@interface NVMallPromoCell : NVMallShopCell
{
    UILabel *_lb_subtitle;
    UILabel *_lb_discount;
    UILabel *_lb_categoryTitle;
    UIView *_titleBgView;
}

+ (double)spaceBetweenTitleAndSubTitle;
+ (double)spaceBetweenImgAndTitle;
+ (double)imageHeight;
+ (double)imageWidth;
+ (double)cellHeight;
+ (id)discountFont;
+ (id)subtitleLabelFont;
@property(retain, nonatomic) UIView *titleBgView; // @synthesize titleBgView=_titleBgView;
@property(readonly, nonatomic) UILabel *lb_categoryTitle; // @synthesize lb_categoryTitle=_lb_categoryTitle;
@property(readonly, nonatomic) UILabel *lb_discount; // @synthesize lb_discount=_lb_discount;
@property(readonly, nonatomic) UILabel *lb_subtitle; // @synthesize lb_subtitle=_lb_subtitle;
- (void).cxx_destruct;
- (void)categoryTitleBgColro:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;

@end

