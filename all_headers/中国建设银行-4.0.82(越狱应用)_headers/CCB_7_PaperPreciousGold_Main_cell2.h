//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CCBButton, CCBLabel, CCB_7_PaperPreciousGold_Main_Data, NSString, UIImageView, UIView;
@protocol CCB_7_PaperPreciousGold_Main_cell2Delegate;

@interface CCB_7_PaperPreciousGold_Main_cell2 : UITableViewCell
{
    CCB_7_PaperPreciousGold_Main_Data *_item;
    UIImageView *_leftimage;
    CCBButton *_btn;
    CCBLabel *_kindLable;
    CCBLabel *_buyPrice;
    NSString *_sbuyPriceLast;
    NSString *_sbuyPrice;
    CCBLabel *_buyPriceT;
    CCBLabel *_soldPrice;
    NSString *_ssoldPriceLast;
    NSString *_ssoldPrice;
    CCBLabel *_soldPriceT;
    NSString *_leftImageName;
    UIView *_uview;
    NSString *_isLove;
    id <CCB_7_PaperPreciousGold_Main_cell2Delegate> _delegate0;
}

@property(nonatomic) id <CCB_7_PaperPreciousGold_Main_cell2Delegate> delegate0; // @synthesize delegate0=_delegate0;
@property(copy, nonatomic) NSString *isLove; // @synthesize isLove=_isLove;
@property(retain, nonatomic) UIView *uview; // @synthesize uview=_uview;
@property(copy, nonatomic) NSString *leftImageName; // @synthesize leftImageName=_leftImageName;
@property(retain, nonatomic) CCBLabel *soldPriceT; // @synthesize soldPriceT=_soldPriceT;
@property(copy, nonatomic) NSString *ssoldPrice; // @synthesize ssoldPrice=_ssoldPrice;
@property(copy, nonatomic) NSString *ssoldPriceLast; // @synthesize ssoldPriceLast=_ssoldPriceLast;
@property(retain, nonatomic) CCBLabel *soldPrice; // @synthesize soldPrice=_soldPrice;
@property(retain, nonatomic) CCBLabel *buyPriceT; // @synthesize buyPriceT=_buyPriceT;
@property(copy, nonatomic) NSString *sbuyPrice; // @synthesize sbuyPrice=_sbuyPrice;
@property(copy, nonatomic) NSString *sbuyPriceLast; // @synthesize sbuyPriceLast=_sbuyPriceLast;
@property(retain, nonatomic) CCBLabel *buyPrice; // @synthesize buyPrice=_buyPrice;
@property(retain, nonatomic) CCBLabel *kindLable; // @synthesize kindLable=_kindLable;
@property(retain, nonatomic) CCBButton *btn; // @synthesize btn=_btn;
@property(retain, nonatomic) UIImageView *leftimage; // @synthesize leftimage=_leftimage;
@property(retain, nonatomic) CCB_7_PaperPreciousGold_Main_Data *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)UserLoveBtnClick:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

