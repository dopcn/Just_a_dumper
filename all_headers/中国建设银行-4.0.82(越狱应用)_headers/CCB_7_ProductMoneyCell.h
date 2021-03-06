//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormCell.h"

#import "CCBTextFieldDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class CCBButton, CCBImageView, CCBLabel, CCBTextField, CCB_7_ProductMoneyItem, NSString, UIView;

@interface CCB_7_ProductMoneyCell : CCBFormCell <CCBTextFieldDelegate, UITextFieldDelegate>
{
    _Bool _isProductRedeem;
    _Bool _isProductBook;
    UIView *_inputBackgroundView;
    CCBLabel *_currencyMark;
    CCBTextField *_moneyTextField;
    CCBLabel *_titleView;
    CCBButton *_button;
    CCBLabel *_freeAttributeLabel;
    CCBImageView *_noticeImageView;
    CCBLabel *_setMoneyBeginLabel;
    CCBLabel *_setMoneyAddLabel;
    CCBLabel *_moneyBeginLabel;
    CCBLabel *_moneyAddLabel;
    CDUnknownBlockType _formatErrorBlock;
    CDUnknownBlockType _cardLimitErrorBlock;
    CDUnknownBlockType _becomeFirstResponder;
    NSString *_cardLimit;
    CCBButton *_allProductRedeemButton;
    NSString *_allProductRedeemNumber;
    CDUnknownBlockType _textInput;
    CDUnknownBlockType _textBlock;
    NSString *_setMoneyBeginLabelText;
    NSString *_setMoneyAddLabelText;
    CCB_7_ProductMoneyItem *_item;
}

+ (double)cellHeightForFormItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) CCB_7_ProductMoneyItem *item; // @synthesize item=_item;
@property(retain, nonatomic) NSString *setMoneyAddLabelText; // @synthesize setMoneyAddLabelText=_setMoneyAddLabelText;
@property(retain, nonatomic) NSString *setMoneyBeginLabelText; // @synthesize setMoneyBeginLabelText=_setMoneyBeginLabelText;
@property(copy, nonatomic) CDUnknownBlockType textBlock; // @synthesize textBlock=_textBlock;
@property(copy, nonatomic) CDUnknownBlockType textInput; // @synthesize textInput=_textInput;
@property(copy, nonatomic) NSString *allProductRedeemNumber; // @synthesize allProductRedeemNumber=_allProductRedeemNumber;
@property(nonatomic) _Bool isProductBook; // @synthesize isProductBook=_isProductBook;
@property(nonatomic) _Bool isProductRedeem; // @synthesize isProductRedeem=_isProductRedeem;
@property(retain, nonatomic) CCBButton *allProductRedeemButton; // @synthesize allProductRedeemButton=_allProductRedeemButton;
@property(copy, nonatomic) NSString *cardLimit; // @synthesize cardLimit=_cardLimit;
@property(copy, nonatomic) CDUnknownBlockType becomeFirstResponder; // @synthesize becomeFirstResponder=_becomeFirstResponder;
@property(copy, nonatomic) CDUnknownBlockType cardLimitErrorBlock; // @synthesize cardLimitErrorBlock=_cardLimitErrorBlock;
@property(copy, nonatomic) CDUnknownBlockType formatErrorBlock; // @synthesize formatErrorBlock=_formatErrorBlock;
@property(retain, nonatomic) CCBLabel *moneyAddLabel; // @synthesize moneyAddLabel=_moneyAddLabel;
@property(retain, nonatomic) CCBLabel *moneyBeginLabel; // @synthesize moneyBeginLabel=_moneyBeginLabel;
@property(retain, nonatomic) CCBLabel *setMoneyAddLabel; // @synthesize setMoneyAddLabel=_setMoneyAddLabel;
@property(retain, nonatomic) CCBLabel *setMoneyBeginLabel; // @synthesize setMoneyBeginLabel=_setMoneyBeginLabel;
@property(retain, nonatomic) CCBImageView *noticeImageView; // @synthesize noticeImageView=_noticeImageView;
@property(retain, nonatomic) CCBLabel *freeAttributeLabel; // @synthesize freeAttributeLabel=_freeAttributeLabel;
@property(retain, nonatomic) CCBButton *button; // @synthesize button=_button;
@property(retain, nonatomic) CCBLabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) CCBTextField *moneyTextField; // @synthesize moneyTextField=_moneyTextField;
@property(retain, nonatomic) CCBLabel *currencyMark; // @synthesize currencyMark=_currencyMark;
@property(retain, nonatomic) UIView *inputBackgroundView; // @synthesize inputBackgroundView=_inputBackgroundView;
- (void).cxx_destruct;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)didHiddenKeyBoard:(id)arg1;
- (_Bool)didSelectKeyButton:(id)arg1 keyValue:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)didClickAllProductRedeemButton;
- (void)setFormItem:(id)arg1;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

