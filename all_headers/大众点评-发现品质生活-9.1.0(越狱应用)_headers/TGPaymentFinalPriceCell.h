//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TGBaseCell.h"

@class NSString, NVJsonLabel, TGPriceView, UIColor, UIFont, UILabel;

@interface TGPaymentFinalPriceCell : TGBaseCell
{
    NSString *_title;
    double _price;
    NSString *_payReward;
    UILabel *_labelForTitle;
    TGPriceView *_viewForPrice;
    NVJsonLabel *_labelForRePoint;
    UIFont *_fontForTitle;
    UIColor *_colorForTitle;
}

+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) UIColor *colorForTitle; // @synthesize colorForTitle=_colorForTitle;
@property(retain, nonatomic) UIFont *fontForTitle; // @synthesize fontForTitle=_fontForTitle;
@property(retain, nonatomic) NVJsonLabel *labelForRePoint; // @synthesize labelForRePoint=_labelForRePoint;
@property(retain, nonatomic) TGPriceView *viewForPrice; // @synthesize viewForPrice=_viewForPrice;
@property(retain, nonatomic) UILabel *labelForTitle; // @synthesize labelForTitle=_labelForTitle;
@property(retain, nonatomic) NSString *payReward; // @synthesize payReward=_payReward;
@property(nonatomic) double price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initialize;
- (void)initParams;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

