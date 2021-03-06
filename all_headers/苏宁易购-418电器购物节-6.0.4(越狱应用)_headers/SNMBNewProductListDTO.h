//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SNSLProductInfoProtocol-Protocol.h"

@class NSString;

@interface SNMBNewProductListDTO : NSObject <SNSLProductInfoProtocol>
{
    _Bool _isCanComment;
    _Bool _isCanCommentAgain;
    _Bool _isSWLItem;
    _Bool _isHwg;
    _Bool _special;
    _Bool _yanbao;
    _Bool _isEnergySaving;
    _Bool _isFirstProductInSupplier;
    _Bool _isLastProductInSupplier;
    NSString *_orderItemId;
    NSString *_productCode;
    NSString *_productId;
    NSString *_productName;
    NSString *_quantity;
    NSString *_itemPrice;
    NSString *_supplierCode;
    NSString *_supplierName;
    NSString *_supplierOrderStatus;
    NSString *_omsOrderItemId;
    NSString *_score;
    NSString *_productRviewId;
    NSString *_lastUpdate;
    NSString *_orderID;
    NSString *_promoType;
    NSString *_canCheckLogistics;
    NSString *_isSx;
    NSString *_medicalExpireDate;
    NSString *_medicalFlag;
    NSString *_returnInsuranceContent;
    NSString *_returnInsuranceMainFlag;
    NSString *_medicalServiceUrl;
    NSString *_mptmSupplierCode;
    NSString *_pptvCardFlag;
    NSString *_pptvCardStatus;
    NSString *_couponPictureUrl;
}

@property(copy, nonatomic) NSString *couponPictureUrl; // @synthesize couponPictureUrl=_couponPictureUrl;
@property(retain, nonatomic) NSString *pptvCardStatus; // @synthesize pptvCardStatus=_pptvCardStatus;
@property(retain, nonatomic) NSString *pptvCardFlag; // @synthesize pptvCardFlag=_pptvCardFlag;
@property(copy, nonatomic) NSString *mptmSupplierCode; // @synthesize mptmSupplierCode=_mptmSupplierCode;
@property(retain, nonatomic) NSString *medicalServiceUrl; // @synthesize medicalServiceUrl=_medicalServiceUrl;
@property(retain, nonatomic) NSString *returnInsuranceMainFlag; // @synthesize returnInsuranceMainFlag=_returnInsuranceMainFlag;
@property(retain, nonatomic) NSString *returnInsuranceContent; // @synthesize returnInsuranceContent=_returnInsuranceContent;
@property(retain, nonatomic) NSString *medicalFlag; // @synthesize medicalFlag=_medicalFlag;
@property(retain, nonatomic) NSString *medicalExpireDate; // @synthesize medicalExpireDate=_medicalExpireDate;
@property(retain, nonatomic) NSString *isSx; // @synthesize isSx=_isSx;
@property(nonatomic) _Bool isLastProductInSupplier; // @synthesize isLastProductInSupplier=_isLastProductInSupplier;
@property(nonatomic) _Bool isFirstProductInSupplier; // @synthesize isFirstProductInSupplier=_isFirstProductInSupplier;
@property(nonatomic) _Bool isEnergySaving; // @synthesize isEnergySaving=_isEnergySaving;
@property(copy, nonatomic) NSString *canCheckLogistics; // @synthesize canCheckLogistics=_canCheckLogistics;
@property(copy, nonatomic) NSString *promoType; // @synthesize promoType=_promoType;
@property(nonatomic) _Bool yanbao; // @synthesize yanbao=_yanbao;
@property(nonatomic) _Bool special; // @synthesize special=_special;
@property(nonatomic) _Bool isHwg; // @synthesize isHwg=_isHwg;
@property(nonatomic) _Bool isSWLItem; // @synthesize isSWLItem=_isSWLItem;
@property(retain, nonatomic) NSString *orderID; // @synthesize orderID=_orderID;
@property(retain, nonatomic) NSString *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(copy, nonatomic) NSString *productRviewId; // @synthesize productRviewId=_productRviewId;
@property(copy, nonatomic) NSString *score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *omsOrderItemId; // @synthesize omsOrderItemId=_omsOrderItemId;
@property(nonatomic) _Bool isCanCommentAgain; // @synthesize isCanCommentAgain=_isCanCommentAgain;
@property(nonatomic) _Bool isCanComment; // @synthesize isCanComment=_isCanComment;
@property(copy, nonatomic) NSString *supplierOrderStatus; // @synthesize supplierOrderStatus=_supplierOrderStatus;
@property(copy, nonatomic) NSString *supplierName; // @synthesize supplierName=_supplierName;
@property(copy, nonatomic) NSString *supplierCode; // @synthesize supplierCode=_supplierCode;
@property(copy, nonatomic) NSString *itemPrice; // @synthesize itemPrice=_itemPrice;
@property(copy, nonatomic) NSString *quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *productCode; // @synthesize productCode=_productCode;
@property(copy, nonatomic) NSString *orderItemId; // @synthesize orderItemId=_orderItemId;
- (void).cxx_destruct;
- (void)encodeFromDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

