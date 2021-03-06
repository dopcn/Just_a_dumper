//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;

__attribute__((visibility("hidden")))
@interface CarQuoteDealersCell : UITableViewCell
{
    UILabel *_dealerNameLabel;
    UILabel *_dealerTypeLabel;
    UILabel *_addressLabel;
    UILabel *_priceLabel;
    UIView *_lineView;
}

@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) __weak UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(nonatomic) __weak UILabel *dealerTypeLabel; // @synthesize dealerTypeLabel=_dealerTypeLabel;
@property(nonatomic) __weak UILabel *dealerNameLabel; // @synthesize dealerNameLabel=_dealerNameLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setup;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configCellWithPrice:(id)arg1;

@end

