//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseMarginCell.h"

@class RACSignal, UIButton, UILabel;

@interface EasyLifeShopLimitupPayCell : GCBaseMarginCell
{
    RACSignal *_signalForPay;
    UILabel *_labelForLeft;
    UILabel *_labelForMiddle;
    UIButton *_buttonForPay;
}

@property(retain, nonatomic) UIButton *buttonForPay; // @synthesize buttonForPay=_buttonForPay;
@property(retain, nonatomic) UILabel *labelForMiddle; // @synthesize labelForMiddle=_labelForMiddle;
@property(retain, nonatomic) UILabel *labelForLeft; // @synthesize labelForLeft=_labelForLeft;
@property(retain, nonatomic) RACSignal *signalForPay; // @synthesize signalForPay=_signalForPay;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setData:(id)arg1;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 leftCellMarginType:(long long)arg3 rightCellMarginType:(long long)arg4;

@end

