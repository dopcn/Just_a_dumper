//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, WPFinanceCard;

@interface WPFinanceFundBuyBankUnsupportedCell : UITableViewCell
{
    WPFinanceCard *_card;
    UIImageView *_wpIcon;
    UILabel *_wpCardLabel;
}

@property(retain, nonatomic) UILabel *wpCardLabel; // @synthesize wpCardLabel=_wpCardLabel;
@property(retain, nonatomic) UIImageView *wpIcon; // @synthesize wpIcon=_wpIcon;
@property(retain, nonatomic) WPFinanceCard *card; // @synthesize card=_card;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

