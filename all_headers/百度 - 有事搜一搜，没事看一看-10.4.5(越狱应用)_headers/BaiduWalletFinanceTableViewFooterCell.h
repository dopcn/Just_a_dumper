//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaiduWalletFinanceTableViewCell.h"

@class NSString, UIImageView, UILabel;

@interface BaiduWalletFinanceTableViewFooterCell : BaiduWalletFinanceTableViewCell
{
    NSString *_moreText;
    UILabel *_moreLabel;
    UIImageView *_moreImg;
}

@property(retain, nonatomic) UIImageView *moreImg; // @synthesize moreImg=_moreImg;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(copy, nonatomic) NSString *moreText; // @synthesize moreText=_moreText;
- (void).cxx_destruct;
- (void)initConstraints;
- (void)initContentView;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

