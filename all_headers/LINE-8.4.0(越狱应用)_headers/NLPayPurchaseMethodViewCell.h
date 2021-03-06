//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NLPayCustomViewCell.h"

@class LinePaymentLinePayAccountInfo, NLPayCardImageView, NLPayMoneyLabel, NSDictionary, NSString, UIButton, UILabel;
@protocol NLPayPurchaseMethodViewCellDelegate;

@interface NLPayPurchaseMethodViewCell : NLPayCustomViewCell
{
    _Bool _needRegister;
    _Bool _isPayable;
    _Bool _isEnabled;
    id <NLPayPurchaseMethodViewCellDelegate> _deletgate;
    long long _purchaseMethodType;
    LinePaymentLinePayAccountInfo *_accountInfo;
    NSString *_promotionPhrase;
    NSDictionary *_cardPromotionPhrases;
    NSString *_accumulationPhrase;
    UIButton *_checkButton;
    UILabel *_purchaseMethodLabel;
    UILabel *_infoTextLabel;
    NLPayMoneyLabel *_balanceLabel;
    UILabel *_promotionGuideLabel;
    UILabel *_accumulationGuideLabel;
    UILabel *_cardInfoLabel;
    UIButton *_nextButton;
    NLPayCardImageView *_cardBrandImageView;
    long long _currencySymbolLocation;
}

@property(nonatomic) long long currencySymbolLocation; // @synthesize currencySymbolLocation=_currencySymbolLocation;
@property(retain, nonatomic) NLPayCardImageView *cardBrandImageView; // @synthesize cardBrandImageView=_cardBrandImageView;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UILabel *cardInfoLabel; // @synthesize cardInfoLabel=_cardInfoLabel;
@property(retain, nonatomic) UILabel *accumulationGuideLabel; // @synthesize accumulationGuideLabel=_accumulationGuideLabel;
@property(retain, nonatomic) UILabel *promotionGuideLabel; // @synthesize promotionGuideLabel=_promotionGuideLabel;
@property(retain, nonatomic) NLPayMoneyLabel *balanceLabel; // @synthesize balanceLabel=_balanceLabel;
@property(retain, nonatomic) UILabel *infoTextLabel; // @synthesize infoTextLabel=_infoTextLabel;
@property(retain, nonatomic) UILabel *purchaseMethodLabel; // @synthesize purchaseMethodLabel=_purchaseMethodLabel;
@property(retain, nonatomic) UIButton *checkButton; // @synthesize checkButton=_checkButton;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) _Bool isPayable; // @synthesize isPayable=_isPayable;
@property(nonatomic) _Bool needRegister; // @synthesize needRegister=_needRegister;
@property(retain, nonatomic) NSString *accumulationPhrase; // @synthesize accumulationPhrase=_accumulationPhrase;
@property(retain, nonatomic) NSDictionary *cardPromotionPhrases; // @synthesize cardPromotionPhrases=_cardPromotionPhrases;
@property(retain, nonatomic) NSString *promotionPhrase; // @synthesize promotionPhrase=_promotionPhrase;
@property(retain, nonatomic) LinePaymentLinePayAccountInfo *accountInfo; // @synthesize accountInfo=_accountInfo;
@property(nonatomic) long long purchaseMethodType; // @synthesize purchaseMethodType=_purchaseMethodType;
@property(nonatomic) __weak id <NLPayPurchaseMethodViewCellDelegate> deletgate; // @synthesize deletgate=_deletgate;
- (void).cxx_destruct;
- (void)setCardBrandInfo:(id)arg1;
@property(nonatomic) _Bool isChecked;
- (_Bool)enabledNextButton;
- (_Bool)enabledCheckButton;
- (void)didTapNextButton:(id)arg1;
- (void)setPayableTextColor;
- (void)setCardInfo;
- (void)setAccumulationGuide;
- (void)setPromotionGuide;
- (void)updateCardNameLabel;
- (void)updateBalanceValueLabel;
- (id)defaultLabelColor;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 withLayout:(_Bool)arg2;
- (void)layoutSubviews;
- (double)balanceSpace;
- (id)currencySymbolFont;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

