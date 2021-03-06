//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface MemberOrderDetailsDTO : NSObject
{
    NSString *_productCode;
    NSString *_productId;
    NSString *_productName;
    NSString *_quantityInIntValue;
    NSString *_totalProduct;
    NSString *_posOrderNumber;
    NSString *_verificationCode;
    NSString *_currentShipModeType;
    NSString *_taxType;
    NSString *_itemPlacerName;
    NSString *_itemMobilePhone;
    NSString *_address;
    NSString *_invoice;
    NSString *_invoiceDescription;
    NSString *_exWarrantyQuantity;
    NSString *_exWarrantyPrice;
    NSString *_exWarrantyName;
    NSString *_exWarrantyFlag;
    NSString *_orderItemId;
    NSURL *_imageURL;
    NSString *_itemTaxAmount;
    _Bool _isHwg;
    _Bool _special;
    _Bool _isEnergySaving;
    NSString *_carServiceFlag;
    NSString *_policyDesc;
    NSString *_isBundle;
    NSString *_expressNO;
    NSString *_isconfirmReceipt;
    NSString *_medicalServiceUrl;
    NSString *_medicalFlag;
    NSString *_medicalExpireDate;
    NSString *_supplierCode;
    NSString *_cShopName;
    NSString *_orderId;
    NSString *_returnStatus;
    NSString *_isShowLogisticsBtn;
    NSString *_commentOrNot;
    NSString *_showOrNot;
    NSString *_commentAgainOrNot;
    NSString *_invoiceCode;
    NSString *_invoiceNumber;
    NSString *_printPwd;
    NSString *_simOrPhoneFlag;
    NSString *_partName;
    NSString *_phoneNum;
    NSString *_monthlyAmt;
    NSString *_planTypeName;
    NSString *_signDuration;
    NSString *_simPicPath;
    NSString *_isSx;
    NSString *_cartNo;
    NSString *_omsOrderId;
    NSString *_omsOrderItemId;
    NSString *_score;
    NSString *_productRviewId;
    NSString *_supplierSWL;
}

@property(nonatomic) _Bool isEnergySaving; // @synthesize isEnergySaving=_isEnergySaving;
@property(copy, nonatomic) NSString *supplierSWL; // @synthesize supplierSWL=_supplierSWL;
@property(copy, nonatomic) NSString *productRviewId; // @synthesize productRviewId=_productRviewId;
@property(copy, nonatomic) NSString *score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *omsOrderItemId; // @synthesize omsOrderItemId=_omsOrderItemId;
@property(copy, nonatomic) NSString *omsOrderId; // @synthesize omsOrderId=_omsOrderId;
@property(nonatomic) _Bool special; // @synthesize special=_special;
@property(retain, nonatomic) NSString *cartNo; // @synthesize cartNo=_cartNo;
@property(retain, nonatomic) NSString *isSx; // @synthesize isSx=_isSx;
@property(nonatomic) _Bool isHwg; // @synthesize isHwg=_isHwg;
@property(retain, nonatomic) NSString *simPicPath; // @synthesize simPicPath=_simPicPath;
@property(retain, nonatomic) NSString *signDuration; // @synthesize signDuration=_signDuration;
@property(retain, nonatomic) NSString *planTypeName; // @synthesize planTypeName=_planTypeName;
@property(retain, nonatomic) NSString *monthlyAmt; // @synthesize monthlyAmt=_monthlyAmt;
@property(retain, nonatomic) NSString *phoneNum; // @synthesize phoneNum=_phoneNum;
@property(retain, nonatomic) NSString *partName; // @synthesize partName=_partName;
@property(retain, nonatomic) NSString *simOrPhoneFlag; // @synthesize simOrPhoneFlag=_simOrPhoneFlag;
@property(retain, nonatomic) NSString *printPwd; // @synthesize printPwd=_printPwd;
@property(retain, nonatomic) NSString *invoiceNumber; // @synthesize invoiceNumber=_invoiceNumber;
@property(retain, nonatomic) NSString *invoiceCode; // @synthesize invoiceCode=_invoiceCode;
@property(retain, nonatomic) NSString *commentAgainOrNot; // @synthesize commentAgainOrNot=_commentAgainOrNot;
@property(retain, nonatomic) NSString *showOrNot; // @synthesize showOrNot=_showOrNot;
@property(retain, nonatomic) NSString *commentOrNot; // @synthesize commentOrNot=_commentOrNot;
@property(retain, nonatomic) NSString *isShowLogisticsBtn; // @synthesize isShowLogisticsBtn=_isShowLogisticsBtn;
@property(copy, nonatomic) NSString *returnStatus; // @synthesize returnStatus=_returnStatus;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *cShopName; // @synthesize cShopName=_cShopName;
@property(copy, nonatomic) NSString *supplierCode; // @synthesize supplierCode=_supplierCode;
@property(retain, nonatomic) NSString *medicalExpireDate; // @synthesize medicalExpireDate=_medicalExpireDate;
@property(retain, nonatomic) NSString *medicalFlag; // @synthesize medicalFlag=_medicalFlag;
@property(retain, nonatomic) NSString *medicalServiceUrl; // @synthesize medicalServiceUrl=_medicalServiceUrl;
@property(copy, nonatomic) NSString *itemTaxAmount; // @synthesize itemTaxAmount=_itemTaxAmount;
@property(retain, nonatomic) NSString *isconfirmReceipt; // @synthesize isconfirmReceipt=_isconfirmReceipt;
@property(retain, nonatomic) NSString *expressNO; // @synthesize expressNO=_expressNO;
@property(copy, nonatomic) NSString *isBundle; // @synthesize isBundle=_isBundle;
@property(copy, nonatomic) NSString *policyDesc; // @synthesize policyDesc=_policyDesc;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *orderItemId; // @synthesize orderItemId=_orderItemId;
@property(copy, nonatomic) NSString *exWarrantyFlag; // @synthesize exWarrantyFlag=_exWarrantyFlag;
@property(copy, nonatomic) NSString *exWarrantyName; // @synthesize exWarrantyName=_exWarrantyName;
@property(copy, nonatomic) NSString *exWarrantyPrice; // @synthesize exWarrantyPrice=_exWarrantyPrice;
@property(copy, nonatomic) NSString *exWarrantyQuantity; // @synthesize exWarrantyQuantity=_exWarrantyQuantity;
@property(copy, nonatomic) NSString *carServiceFlag; // @synthesize carServiceFlag=_carServiceFlag;
@property(copy, nonatomic) NSString *invoiceDescription; // @synthesize invoiceDescription=_invoiceDescription;
@property(copy, nonatomic) NSString *invoice; // @synthesize invoice=_invoice;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *itemMobilePhone; // @synthesize itemMobilePhone=_itemMobilePhone;
@property(copy, nonatomic) NSString *itemPlacerName; // @synthesize itemPlacerName=_itemPlacerName;
@property(copy, nonatomic) NSString *taxType; // @synthesize taxType=_taxType;
@property(copy, nonatomic) NSString *currentShipModeType; // @synthesize currentShipModeType=_currentShipModeType;
@property(copy, nonatomic) NSString *verificationCode; // @synthesize verificationCode=_verificationCode;
@property(copy, nonatomic) NSString *posOrderNumber; // @synthesize posOrderNumber=_posOrderNumber;
@property(copy, nonatomic) NSString *totalProduct; // @synthesize totalProduct=_totalProduct;
@property(copy, nonatomic) NSString *quantityInIntValue; // @synthesize quantityInIntValue=_quantityInIntValue;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *productCode; // @synthesize productCode=_productCode;
- (void).cxx_destruct;
- (void)encodeFromDictionary:(id)arg1;

@end

