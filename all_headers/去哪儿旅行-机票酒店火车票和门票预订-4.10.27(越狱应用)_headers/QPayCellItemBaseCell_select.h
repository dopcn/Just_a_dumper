//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QPayCellItemBaseCell.h"

@class UIImageView, UILabel, UIView;

@interface QPayCellItemBaseCell_select : QPayCellItemBaseCell
{
    UILabel *_promotionTextLabel;
    UIImageView *_rightSelectView;
    UIView *_rightView;
    UIImageView *_applePayImageView;
}

@property(retain, nonatomic) UIImageView *applePayImageView; // @synthesize applePayImageView=_applePayImageView;
@property(nonatomic) __weak UIView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) UIImageView *rightSelectView; // @synthesize rightSelectView=_rightSelectView;
@property(retain, nonatomic) UILabel *promotionTextLabel; // @synthesize promotionTextLabel=_promotionTextLabel;
- (void).cxx_destruct;
- (void)setWithNeedData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

