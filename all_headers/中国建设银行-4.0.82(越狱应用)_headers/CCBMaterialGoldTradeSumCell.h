//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormCell.h"

@class CCBLabel, CCB_7_PhysicalGoldTradeSumItem;

@interface CCBMaterialGoldTradeSumCell : CCBFormCell
{
    _Bool _isShoppingCar;
    CCB_7_PhysicalGoldTradeSumItem *_item;
    CCBLabel *_tradeSumLabel;
    CCBLabel *_tradeCountLabel;
    CCBLabel *_tradeWeightLabel;
    CCBLabel *_profitMoney;
}

+ (double)cellHeight;
@property(retain, nonatomic) CCBLabel *profitMoney; // @synthesize profitMoney=_profitMoney;
@property(retain, nonatomic) CCBLabel *tradeWeightLabel; // @synthesize tradeWeightLabel=_tradeWeightLabel;
@property(retain, nonatomic) CCBLabel *tradeCountLabel; // @synthesize tradeCountLabel=_tradeCountLabel;
@property(retain, nonatomic) CCBLabel *tradeSumLabel; // @synthesize tradeSumLabel=_tradeSumLabel;
@property(retain, nonatomic) CCB_7_PhysicalGoldTradeSumItem *item; // @synthesize item=_item;
@property(nonatomic) _Bool isShoppingCar; // @synthesize isShoppingCar=_isShoppingCar;
- (void).cxx_destruct;
- (id)switchMoney:(id)arg1;
- (void)layoutAllSubview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

