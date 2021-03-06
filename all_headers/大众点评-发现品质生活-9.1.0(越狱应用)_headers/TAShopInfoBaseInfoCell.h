//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TAShopInfoBaseCell.h"

@class NVLineView, TAStarView, UIButton, UILabel;

@interface TAShopInfoBaseInfoCell : TAShopInfoBaseCell
{
    UILabel *_shopNameLabel;
    TAStarView *_shopPowerStarView;
    UILabel *_soldNumLabel;
    UIButton *_phoneButton;
    NVLineView *_sepLine;
}

+ (double)cellHeightWithModel:(id)arg1;
+ (id)instance;
@property(retain, nonatomic) NVLineView *sepLine; // @synthesize sepLine=_sepLine;
@property(retain, nonatomic) UIButton *phoneButton; // @synthesize phoneButton=_phoneButton;
@property(retain, nonatomic) UILabel *soldNumLabel; // @synthesize soldNumLabel=_soldNumLabel;
@property(retain, nonatomic) TAStarView *shopPowerStarView; // @synthesize shopPowerStarView=_shopPowerStarView;
@property(retain, nonatomic) UILabel *shopNameLabel; // @synthesize shopNameLabel=_shopNameLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didClickPhoneButton:(id)arg1;
- (void)bindModel:(id)arg1 delegate:(id)arg2;
- (void)p_initialize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

