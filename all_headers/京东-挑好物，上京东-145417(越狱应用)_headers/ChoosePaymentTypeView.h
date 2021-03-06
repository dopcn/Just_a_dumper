//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

@class JDOrderPayAndShipmentEditModel, NSMutableArray, NSNumber, NSString, PayElementNameMap, UIImageView, UILabel, UIView;
@protocol PayAndShipLayoutDelegate;

@interface ChoosePaymentTypeView : JDView
{
    UIView *topView_;
    UIImageView *payImgView_;
    UILabel *title_;
    NSMutableArray *payMentTypesArray_;
    NSMutableArray *payMentTypesViewArray_;
    NSString *_lastTapedBtnIndex;
    id <PayAndShipLayoutDelegate> _payAndShipLayoutDelegate;
    NSNumber *_paymentId;
    NSString *_pickMessage;
    JDOrderPayAndShipmentEditModel *_payAndShipmentEditModel;
    PayElementNameMap *_payElementNameMap;
}

@property(retain, nonatomic) PayElementNameMap *payElementNameMap; // @synthesize payElementNameMap=_payElementNameMap;
@property(retain, nonatomic) JDOrderPayAndShipmentEditModel *payAndShipmentEditModel; // @synthesize payAndShipmentEditModel=_payAndShipmentEditModel;
@property(retain, nonatomic) NSString *pickMessage; // @synthesize pickMessage=_pickMessage;
@property(retain, nonatomic) NSNumber *paymentId; // @synthesize paymentId=_paymentId;
@property(nonatomic) __weak id <PayAndShipLayoutDelegate> payAndShipLayoutDelegate; // @synthesize payAndShipLayoutDelegate=_payAndShipLayoutDelegate;
@property(retain, nonatomic) NSMutableArray *payMentTypesArray; // @synthesize payMentTypesArray=payMentTypesArray_;
- (void).cxx_destruct;
- (struct CGSize)sizeWithString:(id)arg1 withFont:(id)arg2 constrainedWithWidth:(double)arg3;
- (struct CGSize)sizeWithText:(id)arg1 font:(id)arg2;
- (void)synOrderInfo;
- (void)resetLinkagePaymentPackViewModelWithPaymentClick:(id)arg1 payRowIndex:(long long)arg2 arrIndex:(long long)arg3;
- (void)paymentClick:(id)arg1 payRowIndex:(long long)arg2 arrIndex:(long long)arg3;
- (void)reloadViews;
- (void)setupUI;
- (void)parserModelWithData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

