//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CartoonBasePopContainerViewProtocol-Protocol.h"

@class CartoonPaymentPriceView, NSString, UIButton, UIImageView, UILabel;
@protocol CartoonPaymentPopViewDelegate;

@interface CartoonPaymentPopView : UIView <CartoonBasePopContainerViewProtocol>
{
    _Bool _canAutoBuy;
    _Bool _animating;
    _Bool _isShown;
    _Bool _isSmallDevice;
    float _balance;
    id <CartoonPaymentPopViewDelegate> _delegate;
    NSString *_bookName;
    long long _sequence;
    unsigned long long _price;
    unsigned long long _coupon;
    long long _batchBuyCount;
    UIView *_upBgView;
    UILabel *_balanceLabel;
    UIImageView *_couponImageView;
    UILabel *_couponAmountLabel;
    CartoonPaymentPriceView *_oriPriceView;
    CartoonPaymentPriceView *_curPriceView;
    UILabel *_oriPriceLabel;
    UIView *_delLine;
    UILabel *_bookInfoLabel;
    UIButton *_confirmButton;
    UIButton *_autoBuyButton;
}

@property(nonatomic) _Bool isSmallDevice; // @synthesize isSmallDevice=_isSmallDevice;
@property(nonatomic) _Bool isShown; // @synthesize isShown=_isShown;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) UIButton *autoBuyButton; // @synthesize autoBuyButton=_autoBuyButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *bookInfoLabel; // @synthesize bookInfoLabel=_bookInfoLabel;
@property(retain, nonatomic) UIView *delLine; // @synthesize delLine=_delLine;
@property(retain, nonatomic) UILabel *oriPriceLabel; // @synthesize oriPriceLabel=_oriPriceLabel;
@property(retain, nonatomic) CartoonPaymentPriceView *curPriceView; // @synthesize curPriceView=_curPriceView;
@property(retain, nonatomic) CartoonPaymentPriceView *oriPriceView; // @synthesize oriPriceView=_oriPriceView;
@property(retain, nonatomic) UILabel *couponAmountLabel; // @synthesize couponAmountLabel=_couponAmountLabel;
@property(retain, nonatomic) UIImageView *couponImageView; // @synthesize couponImageView=_couponImageView;
@property(retain, nonatomic) UILabel *balanceLabel; // @synthesize balanceLabel=_balanceLabel;
@property(retain, nonatomic) UIView *upBgView; // @synthesize upBgView=_upBgView;
@property(nonatomic) _Bool canAutoBuy; // @synthesize canAutoBuy=_canAutoBuy;
@property(nonatomic) float balance; // @synthesize balance=_balance;
@property(nonatomic) long long batchBuyCount; // @synthesize batchBuyCount=_batchBuyCount;
@property(nonatomic) unsigned long long coupon; // @synthesize coupon=_coupon;
@property(nonatomic) unsigned long long price; // @synthesize price=_price;
@property(nonatomic) long long sequence; // @synthesize sequence=_sequence;
@property(copy, nonatomic) NSString *bookName; // @synthesize bookName=_bookName;
@property(nonatomic) id <CartoonPaymentPopViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onChangeAutoBuyState;
- (void)onConfirmPay;
- (void)onConfirmCharge;
- (void)showWithAnimate:(_Bool)arg1;
- (void)initSubviews;
- (void)dealloc;
- (id)initWithWidth:(double)arg1 bookName:(id)arg2 batchBuyCount:(long long)arg3 balanc:(double)arg4 coupon:(long long)arg5 price:(long long)arg6;
- (id)initWithWidth:(double)arg1 bookName:(id)arg2 chapterSequence:(long long)arg3 balance:(double)arg4 coupon:(unsigned long long)arg5 price:(unsigned long long)arg6 canAutoBuy:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

