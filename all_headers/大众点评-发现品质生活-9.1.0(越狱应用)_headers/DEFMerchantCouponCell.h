//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class DEFMerchantCouponInfo, NVLineView, UIColor, UIImageView, UILabel, UIView;

@interface DEFMerchantCouponCell : UITableViewCell
{
    _Bool _disabled;
    DEFMerchantCouponInfo *_couponData;
    UIColor *_priceColor;
    UIColor *_textColor;
    UIView *_insetContentView;
    UIView *_rightContentView;
    NVLineView *_centerDashLine;
    UILabel *_lblPrice;
    UILabel *_lblCouponPrice;
    UILabel *_lblCouponTitle;
    UILabel *_lblCouponExpire;
    UILabel *_lblCouponEndTime;
    UIImageView *_rightEdgeImageView;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIImageView *rightEdgeImageView; // @synthesize rightEdgeImageView=_rightEdgeImageView;
@property(retain, nonatomic) UILabel *lblCouponEndTime; // @synthesize lblCouponEndTime=_lblCouponEndTime;
@property(retain, nonatomic) UILabel *lblCouponExpire; // @synthesize lblCouponExpire=_lblCouponExpire;
@property(retain, nonatomic) UILabel *lblCouponTitle; // @synthesize lblCouponTitle=_lblCouponTitle;
@property(retain, nonatomic) UILabel *lblCouponPrice; // @synthesize lblCouponPrice=_lblCouponPrice;
@property(retain, nonatomic) UILabel *lblPrice; // @synthesize lblPrice=_lblPrice;
@property(retain, nonatomic) NVLineView *centerDashLine; // @synthesize centerDashLine=_centerDashLine;
@property(retain, nonatomic) UIView *rightContentView; // @synthesize rightContentView=_rightContentView;
@property(retain, nonatomic) UIView *insetContentView; // @synthesize insetContentView=_insetContentView;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *priceColor; // @synthesize priceColor=_priceColor;
@property(retain, nonatomic) DEFMerchantCouponInfo *couponData; // @synthesize couponData=_couponData;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
- (void).cxx_destruct;
- (id)validityString:(id)arg1;
- (id)priceAttributedString;
- (void)loadData;
- (void)layoutSubviews;
- (void)configSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

