//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UIView;

@interface TotalPriceCell : UITableViewCell
{
    NSString *_goldCoins;
    NSString *_price;
    UILabel *_titleLabel;
    UILabel *_goldCoinsLabel;
    UILabel *_priceLabel;
    UIView *_separatorLine;
}

@property(nonatomic) __weak UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(nonatomic) __weak UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) __weak UILabel *goldCoinsLabel; // @synthesize goldCoinsLabel=_goldCoinsLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *goldCoins; // @synthesize goldCoins=_goldCoins;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

