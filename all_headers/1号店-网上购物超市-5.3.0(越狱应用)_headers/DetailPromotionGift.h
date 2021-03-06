//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OTSCore/OTSValueObject.h>

@class NSNumber, NSString;

@interface DetailPromotionGift : OTSValueObject
{
    NSString *_description;
    NSNumber *_merchantId;
    NSNumber *_pmInfoId;
    NSNumber *_productCode;
    NSNumber *_productId;
    NSString *_merchantName;
    NSString *_productName;
    NSNumber *_normalPrice;
    NSNumber *_selectType;
    NSNumber *_type;
    NSString *_url;
    NSNumber *_isCanSale;
    NSNumber *_canSale;
    NSNumber *_promotionPrice;
    NSString *_picUrl;
    NSString *_miniPicUrl;
    NSString *_middlePicUrl;
    NSNumber *_stockNumber;
    NSNumber *_stockCompareNum;
    NSNumber *_totalQuantityLimitType;
    NSNumber *_quantity;
    NSNumber *_isSoldOut;
    NSString *_promotionId;
}

@property(retain, nonatomic) NSString *promotionId; // @synthesize promotionId=_promotionId;
@property(retain, nonatomic) NSNumber *isSoldOut; // @synthesize isSoldOut=_isSoldOut;
@property(retain, nonatomic) NSNumber *quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) NSNumber *totalQuantityLimitType; // @synthesize totalQuantityLimitType=_totalQuantityLimitType;
@property(retain, nonatomic) NSNumber *stockCompareNum; // @synthesize stockCompareNum=_stockCompareNum;
@property(retain, nonatomic) NSNumber *stockNumber; // @synthesize stockNumber=_stockNumber;
@property(retain, nonatomic) NSString *middlePicUrl; // @synthesize middlePicUrl=_middlePicUrl;
@property(retain, nonatomic) NSString *miniPicUrl; // @synthesize miniPicUrl=_miniPicUrl;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSNumber *promotionPrice; // @synthesize promotionPrice=_promotionPrice;
@property(retain, nonatomic) NSNumber *canSale; // @synthesize canSale=_canSale;
@property(retain, nonatomic) NSNumber *isCanSale; // @synthesize isCanSale=_isCanSale;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *selectType; // @synthesize selectType=_selectType;
@property(retain, nonatomic) NSNumber *normalPrice; // @synthesize normalPrice=_normalPrice;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *merchantName; // @synthesize merchantName=_merchantName;
@property(retain, nonatomic) NSNumber *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSNumber *productCode; // @synthesize productCode=_productCode;
@property(retain, nonatomic) NSNumber *pmInfoId; // @synthesize pmInfoId=_pmInfoId;
@property(retain, nonatomic) NSNumber *merchantId; // @synthesize merchantId=_merchantId;
@property(retain, nonatomic) NSString *description; // @synthesize description=_description;
- (void).cxx_destruct;
- (id)productVO;

@end

