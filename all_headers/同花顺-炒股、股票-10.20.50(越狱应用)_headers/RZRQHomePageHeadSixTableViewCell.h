//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel;

@interface RZRQHomePageHeadSixTableViewCell : UITableViewCell
{
    UILabel *_dbpPercentageLabel;
    UILabel *_canUseMoneyLabel;
    UILabel *_totalMoneyLabel;
    UILabel *_totalDebtLabel;
    UILabel *_fuDongYingKuiLabel;
    UILabel *_xinYongShiZhiLabel;
    UILabel *_dbpPercentageTitle;
    UILabel *_canUseMoneyTitle;
    UILabel *_totalMoneyTitle;
    UILabel *_totalDebtTitle;
    UILabel *_fuDongYingKuiTitle;
    UILabel *_xinYongShiZhiTitle;
    UIButton *_dbpDescriptionButton;
    UIButton *_yingKuiDescriptionButton;
    UIButton *_shiZhiDescriptionButton;
}

@property(retain, nonatomic) UIButton *shiZhiDescriptionButton; // @synthesize shiZhiDescriptionButton=_shiZhiDescriptionButton;
@property(retain, nonatomic) UIButton *yingKuiDescriptionButton; // @synthesize yingKuiDescriptionButton=_yingKuiDescriptionButton;
@property(retain, nonatomic) UIButton *dbpDescriptionButton; // @synthesize dbpDescriptionButton=_dbpDescriptionButton;
@property(retain, nonatomic) UILabel *xinYongShiZhiTitle; // @synthesize xinYongShiZhiTitle=_xinYongShiZhiTitle;
@property(retain, nonatomic) UILabel *fuDongYingKuiTitle; // @synthesize fuDongYingKuiTitle=_fuDongYingKuiTitle;
@property(retain, nonatomic) UILabel *totalDebtTitle; // @synthesize totalDebtTitle=_totalDebtTitle;
@property(retain, nonatomic) UILabel *totalMoneyTitle; // @synthesize totalMoneyTitle=_totalMoneyTitle;
@property(retain, nonatomic) UILabel *canUseMoneyTitle; // @synthesize canUseMoneyTitle=_canUseMoneyTitle;
@property(retain, nonatomic) UILabel *dbpPercentageTitle; // @synthesize dbpPercentageTitle=_dbpPercentageTitle;
@property(retain, nonatomic) UILabel *xinYongShiZhiLabel; // @synthesize xinYongShiZhiLabel=_xinYongShiZhiLabel;
@property(retain, nonatomic) UILabel *fuDongYingKuiLabel; // @synthesize fuDongYingKuiLabel=_fuDongYingKuiLabel;
@property(retain, nonatomic) UILabel *totalDebtLabel; // @synthesize totalDebtLabel=_totalDebtLabel;
@property(retain, nonatomic) UILabel *totalMoneyLabel; // @synthesize totalMoneyLabel=_totalMoneyLabel;
@property(retain, nonatomic) UILabel *canUseMoneyLabel; // @synthesize canUseMoneyLabel=_canUseMoneyLabel;
@property(retain, nonatomic) UILabel *dbpPercentageLabel; // @synthesize dbpPercentageLabel=_dbpPercentageLabel;
- (void).cxx_destruct;
- (void)setDescribeBtnHidden;
- (id)describeBtnArr;
- (void)shiZhiDescriptionClicked:(id)arg1;
- (void)yingKuiDescriptionClicked:(id)arg1;
- (void)dbpDescriptionClicked:(id)arg1;
- (void)setData:(id)arg1;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

