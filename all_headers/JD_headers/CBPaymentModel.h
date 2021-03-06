//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBModel.h"

@class CBCertInfoModel, CBPayResultDataModel, JDPAccountInfoModel, JDPBtFastModel, JDPOrderDisInfoModel, JDPURLModel, NSArray, NSString;

@interface CBPaymentModel : CBModel
{
    _Bool _needFetchMore;
    NSArray *_payModels;
    NSString *_defaultPayChannel;
    CBCertInfoModel *_certInfoModel;
    JDPOrderDisInfoModel *_orderDisInfoModel;
    JDPURLModel *_URLModel;
    CBPayResultDataModel *_payResultDataModel;
    JDPAccountInfoModel *_accountInfoModel;
    JDPBtFastModel *_btFastModel;
    NSString *_payTopDesc;
    NSString *_payBottomDesc;
    NSString *_businessType;
}

@property(copy, nonatomic) NSString *businessType; // @synthesize businessType=_businessType;
@property(nonatomic) _Bool needFetchMore; // @synthesize needFetchMore=_needFetchMore;
@property(copy, nonatomic) NSString *payBottomDesc; // @synthesize payBottomDesc=_payBottomDesc;
@property(copy, nonatomic) NSString *payTopDesc; // @synthesize payTopDesc=_payTopDesc;
@property(retain, nonatomic) JDPBtFastModel *btFastModel; // @synthesize btFastModel=_btFastModel;
@property(retain, nonatomic) JDPAccountInfoModel *accountInfoModel; // @synthesize accountInfoModel=_accountInfoModel;
@property(retain, nonatomic) CBPayResultDataModel *payResultDataModel; // @synthesize payResultDataModel=_payResultDataModel;
@property(retain, nonatomic) JDPURLModel *URLModel; // @synthesize URLModel=_URLModel;
@property(retain, nonatomic) JDPOrderDisInfoModel *orderDisInfoModel; // @synthesize orderDisInfoModel=_orderDisInfoModel;
@property(retain, nonatomic) CBCertInfoModel *certInfoModel; // @synthesize certInfoModel=_certInfoModel;
@property(copy, nonatomic) NSString *defaultPayChannel; // @synthesize defaultPayChannel=_defaultPayChannel;
@property(copy, nonatomic) NSArray *payModels; // @synthesize payModels=_payModels;
- (void).cxx_destruct;
- (void)replacePlanInfoModel:(id)arg1;
- (_Bool)needFetchCouponList;
- (void)replaceCouponArray:(id)arg1;
- (void)changeDefaultChannelCouponWithIdentifier:(id)arg1;
- (void)changeDefaultCommonChannelCouponWithIdentifier:(id)arg1;
- (void)changeDefaultPayChannelWithDisuse;
- (_Bool)isPayNeedCvv;
- (_Bool)needFetchPayChannelList;
- (_Bool)isFreePwd;
- (_Bool)needCheckPwd;
- (void)replacePayModes:(id)arg1;
- (void)changeDefaultPayChannelWithIdentifier:(id)arg1;
- (id)payModeWithIdentifier:(id)arg1;
- (id)addNewCardPayMode;
- (long long)commendPayWay;
- (id)defaultPayMode;

@end

