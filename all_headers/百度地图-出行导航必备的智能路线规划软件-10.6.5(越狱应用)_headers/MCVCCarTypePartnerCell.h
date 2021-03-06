//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCRentCommonCell.h"

@class MCRentDivideLabel, MCVCTPModel, UIButton, UIControl, UIImageView, UILabel, UIView;

@interface MCVCCarTypePartnerCell : MCRentCommonCell
{
    CDUnknownBlockType _priceDetailBlock;
    long long _useCarType;
    MCVCTPModel *_tpModel;
    UIButton *_checkButton;
    UIImageView *_logImageView;
    UIImageView *_discountImageView;
    UILabel *_nameLabel;
    UILabel *_nameDescLabel;
    UILabel *_etaLabel;
    UILabel *_priceLabel;
    UILabel *_discountLabel;
    MCRentDivideLabel *_originPriceLabel;
    UIView *_lineView;
    UIControl *_contentControl;
}

@property(retain, nonatomic) UIControl *contentControl; // @synthesize contentControl=_contentControl;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) MCRentDivideLabel *originPriceLabel; // @synthesize originPriceLabel=_originPriceLabel;
@property(retain, nonatomic) UILabel *discountLabel; // @synthesize discountLabel=_discountLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *etaLabel; // @synthesize etaLabel=_etaLabel;
@property(retain, nonatomic) UILabel *nameDescLabel; // @synthesize nameDescLabel=_nameDescLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *discountImageView; // @synthesize discountImageView=_discountImageView;
@property(retain, nonatomic) UIImageView *logImageView; // @synthesize logImageView=_logImageView;
@property(retain, nonatomic) UIButton *checkButton; // @synthesize checkButton=_checkButton;
@property(retain, nonatomic) MCVCTPModel *tpModel; // @synthesize tpModel=_tpModel;
@property(nonatomic) long long useCarType; // @synthesize useCarType=_useCarType;
@property(copy, nonatomic) CDUnknownBlockType priceDetailBlock; // @synthesize priceDetailBlock=_priceDetailBlock;
- (void).cxx_destruct;
- (void)checkButtonTouched:(id)arg1;
- (void)priceDetail;
- (void)layoutSubviews;
- (id)accessibilityValue;
- (void)configViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

