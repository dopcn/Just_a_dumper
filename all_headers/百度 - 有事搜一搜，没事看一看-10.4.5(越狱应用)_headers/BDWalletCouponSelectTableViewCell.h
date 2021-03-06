//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class BDWalletReloadActivityView, UIImageView, UILabel, UIView;

@interface BDWalletCouponSelectTableViewCell : UITableViewCell
{
    UIImageView *_headImageView;
    UIView *_verticalLine;
    UIView *_bgroundView;
    UILabel *_titleLable;
    UILabel *_discountLable;
    UILabel *_disableLable;
    UIImageView *_selectImageView;
    BDWalletReloadActivityView *_activityView;
}

@property(retain, nonatomic) BDWalletReloadActivityView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) UIImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
@property(retain, nonatomic) UILabel *disableLable; // @synthesize disableLable=_disableLable;
@property(retain, nonatomic) UILabel *discountLable; // @synthesize discountLable=_discountLable;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(retain, nonatomic) UIView *bgroundView; // @synthesize bgroundView=_bgroundView;
@property(retain, nonatomic) UIView *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setSelectImage:(id)arg1;
- (void)setHeadImageWithURL:(id)arg1 withPlaceholder:(id)arg2;
- (void)setDisableColor:(id)arg1;
- (void)setDisableText:(id)arg1;
- (void)setDiscountColor:(id)arg1;
- (void)setDiscountText:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)cellGrey:(_Bool)arg1;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

