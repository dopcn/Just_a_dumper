//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel, UIView, View_pointModel;

@interface SingleGoodsiPadCell : UITableViewCell
{
    UILabel *_goodsNameLabel;
    UIImageView *_goodsImageView;
    UILabel *_goodsDesLabel;
    UIView *_goodsDesLabelView;
    UILabel *_goodsNowPriceLabel;
    UILabel *_goodsOldPriceLabel;
    UIButton *_goodsDetailBtn;
    UIView *_deleteLine;
    UIView *_priceBgView;
    UIView *_adBadgeView;
    UIView *_btnBackView;
    UIView *_shadowView;
    View_pointModel *_model;
    CDUnknownBlockType _goodsBackBlock;
}

@property(copy, nonatomic) CDUnknownBlockType goodsBackBlock; // @synthesize goodsBackBlock=_goodsBackBlock;
@property(retain, nonatomic) View_pointModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)updateReadyBuy:(id)arg1;
- (void)showGoodsDetail:(id)arg1;
- (void)setGoodsCallback:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (id)creatShadowView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 withViewPointModel:(id)arg3;

@end

