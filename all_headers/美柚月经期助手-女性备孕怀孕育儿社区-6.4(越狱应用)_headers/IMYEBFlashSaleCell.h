//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IMYEBFlashBarView, IMYEBFlashSaleItemModel, IMYRoundButton, UIImageView, UILabel;

@interface IMYEBFlashSaleCell : UITableViewCell
{
    IMYEBFlashSaleItemModel *_model;
    unsigned long long _status;
    UIImageView *_goodImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_priceLabel;
    UILabel *_oriPriceLabel;
    IMYRoundButton *_buyButton;
    IMYEBFlashBarView *_hasOrderBar;
    UILabel *_sellNumLabel;
}

+ (double)cellHeight;
@property(retain, nonatomic) UILabel *sellNumLabel; // @synthesize sellNumLabel=_sellNumLabel;
@property(retain, nonatomic) IMYEBFlashBarView *hasOrderBar; // @synthesize hasOrderBar=_hasOrderBar;
@property(retain, nonatomic) IMYRoundButton *buyButton; // @synthesize buyButton=_buyButton;
@property(retain, nonatomic) UILabel *oriPriceLabel; // @synthesize oriPriceLabel=_oriPriceLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *goodImageView; // @synthesize goodImageView=_goodImageView;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) IMYEBFlashSaleItemModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)smallRMBlabel:(id)arg1 fontSize:(long long)arg2;
- (void)setOriginPrice:(id)arg1;
- (void)setupUI;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

