//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class DGGoodsChoiceInfo, UILabel, UILabelStrickThrough;

@interface WCCGoodsPriceCell : UITableViewCell
{
    float _cellHeight;
    DGGoodsChoiceInfo *_choiceInfo;
    UILabel *_dPriceTitle;
    UILabel *_dPrice;
    UILabel *_oPriceTitle;
    UILabelStrickThrough *_oPrice;
    UILabel *_soldTitle;
    UILabel *_sold;
    UILabel *_inventoryTitle;
    UILabel *_inventory;
}

@property(retain, nonatomic) UILabel *inventory; // @synthesize inventory=_inventory;
@property(retain, nonatomic) UILabel *inventoryTitle; // @synthesize inventoryTitle=_inventoryTitle;
@property(retain, nonatomic) UILabel *sold; // @synthesize sold=_sold;
@property(retain, nonatomic) UILabel *soldTitle; // @synthesize soldTitle=_soldTitle;
@property(retain, nonatomic) UILabelStrickThrough *oPrice; // @synthesize oPrice=_oPrice;
@property(retain, nonatomic) UILabel *oPriceTitle; // @synthesize oPriceTitle=_oPriceTitle;
@property(retain, nonatomic) UILabel *dPrice; // @synthesize dPrice=_dPrice;
@property(retain, nonatomic) UILabel *dPriceTitle; // @synthesize dPriceTitle=_dPriceTitle;
@property(retain, nonatomic) DGGoodsChoiceInfo *choiceInfo; // @synthesize choiceInfo=_choiceInfo;
@property float cellHeight; // @synthesize cellHeight=_cellHeight;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

