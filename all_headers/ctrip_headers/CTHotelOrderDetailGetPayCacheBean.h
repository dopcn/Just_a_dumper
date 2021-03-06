//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTCacheBean.h"

@class HotelContinuePaymentCompleteInformationModel, HotelContinuePaymentInformationModel, NSString;

@interface CTHotelOrderDetailGetPayCacheBean : CTCacheBean
{
    _Bool _isPaymentAgain;
    int _orderOperateType;
    int _resultCode;
    long long _originOrderId;
    HotelContinuePaymentInformationModel *_paymentInfoModel;
    HotelContinuePaymentCompleteInformationModel *_paymentCompleteInfoModel;
    NSString *_promptMessage;
    NSString *_guranteeThawMessage;
    NSString *_resultMessage;
}

@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage=_resultMessage;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
@property(copy, nonatomic) NSString *guranteeThawMessage; // @synthesize guranteeThawMessage=_guranteeThawMessage;
@property(copy, nonatomic) NSString *promptMessage; // @synthesize promptMessage=_promptMessage;
@property(nonatomic) int orderOperateType; // @synthesize orderOperateType=_orderOperateType;
@property(retain, nonatomic) HotelContinuePaymentCompleteInformationModel *paymentCompleteInfoModel; // @synthesize paymentCompleteInfoModel=_paymentCompleteInfoModel;
@property(retain, nonatomic) HotelContinuePaymentInformationModel *paymentInfoModel; // @synthesize paymentInfoModel=_paymentInfoModel;
@property(nonatomic) _Bool isPaymentAgain; // @synthesize isPaymentAgain=_isPaymentAgain;
@property(nonatomic) long long originOrderId; // @synthesize originOrderId=_originOrderId;
- (void).cxx_destruct;
- (id)setPaymentInfo:(int)arg1 orderAbstractArr:(id)arg2;

@end

