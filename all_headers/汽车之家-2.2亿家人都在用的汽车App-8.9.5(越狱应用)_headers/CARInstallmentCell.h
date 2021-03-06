//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AHBusinessFramework/AHTableViewCellEx.h>

@class CARInstallmentItemModel, UIButton, UIImageView, UILabel;
@protocol CARInstallmentCellDelegate;

@interface CARInstallmentCell : AHTableViewCellEx
{
    CARInstallmentItemModel *_model;
    id <CARInstallmentCellDelegate> _delegate;
    UIImageView *_iconImgView;
    UILabel *_specNameLabel;
    UILabel *_titleLabel;
    UILabel *_monthPaymentLabel;
    UILabel *_loanCostLabel;
    UIButton *_applyBtn;
}

@property(retain, nonatomic) UIButton *applyBtn; // @synthesize applyBtn=_applyBtn;
@property(retain, nonatomic) UILabel *loanCostLabel; // @synthesize loanCostLabel=_loanCostLabel;
@property(retain, nonatomic) UILabel *monthPaymentLabel; // @synthesize monthPaymentLabel=_monthPaymentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *specNameLabel; // @synthesize specNameLabel=_specNameLabel;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(nonatomic) __weak id <CARInstallmentCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CARInstallmentItemModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)apply:(id)arg1;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 cellFrame:(struct CGRect)arg3;

@end

