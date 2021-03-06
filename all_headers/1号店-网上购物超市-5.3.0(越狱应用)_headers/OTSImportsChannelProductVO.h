//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OTSCore/OTSValueObject.h>

@class NSNumber, NSString, NSURL;

@interface OTSImportsChannelProductVO : OTSValueObject
{
    NSNumber *_productId;
    NSNumber *_pmInfoId;
    NSNumber *_promotionId;
    NSNumber *_promotionLabel;
    NSString *_productCode;
    NSNumber *_productType;
    NSNumber *_serialType;
    NSNumber *_saleOut;
    NSString *_productName;
    NSString *_productSubTitle;
    NSString *_reserved;
    NSURL *_imageDetail;
    NSString *_detailUrl;
    NSString *_extInfo;
    NSString *_cateName;
    NSNumber *_price;
    NSNumber *_origionalPrice;
    NSString *_promotionMessage;
    NSNumber *_shoppingcount;
    NSNumber *_isYihaodian;
    NSNumber *_lpPromotionId;
    NSNumber *_merchantId;
    NSNumber *_grouponId;
    NSNumber *_isOneKeyGo;
    NSNumber *_ruleType;
    NSNumber *_moreMerchantsNum;
    NSNumber *_normativeProductId;
    NSString *_cornerMark;
    NSString *_tc;
    NSString *_tce;
}

@property(copy, nonatomic) NSString *tce; // @synthesize tce=_tce;
@property(copy, nonatomic) NSString *tc; // @synthesize tc=_tc;
@property(retain, nonatomic) NSString *cornerMark; // @synthesize cornerMark=_cornerMark;
@property(retain, nonatomic) NSNumber *normativeProductId; // @synthesize normativeProductId=_normativeProductId;
@property(retain, nonatomic) NSNumber *moreMerchantsNum; // @synthesize moreMerchantsNum=_moreMerchantsNum;
@property(retain, nonatomic) NSNumber *ruleType; // @synthesize ruleType=_ruleType;
@property(retain, nonatomic) NSNumber *isOneKeyGo; // @synthesize isOneKeyGo=_isOneKeyGo;
@property(retain, nonatomic) NSNumber *grouponId; // @synthesize grouponId=_grouponId;
@property(retain, nonatomic) NSNumber *merchantId; // @synthesize merchantId=_merchantId;
@property(retain, nonatomic) NSNumber *lpPromotionId; // @synthesize lpPromotionId=_lpPromotionId;
@property(retain, nonatomic) NSNumber *isYihaodian; // @synthesize isYihaodian=_isYihaodian;
@property(retain, nonatomic) NSNumber *shoppingcount; // @synthesize shoppingcount=_shoppingcount;
@property(copy, nonatomic) NSString *promotionMessage; // @synthesize promotionMessage=_promotionMessage;
@property(retain, nonatomic) NSNumber *origionalPrice; // @synthesize origionalPrice=_origionalPrice;
@property(retain, nonatomic) NSNumber *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *cateName; // @synthesize cateName=_cateName;
@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(copy, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
@property(retain, nonatomic) NSURL *imageDetail; // @synthesize imageDetail=_imageDetail;
@property(copy, nonatomic) NSString *reserved; // @synthesize reserved=_reserved;
@property(copy, nonatomic) NSString *productSubTitle; // @synthesize productSubTitle=_productSubTitle;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSNumber *saleOut; // @synthesize saleOut=_saleOut;
@property(retain, nonatomic) NSNumber *serialType; // @synthesize serialType=_serialType;
@property(retain, nonatomic) NSNumber *productType; // @synthesize productType=_productType;
@property(copy, nonatomic) NSString *productCode; // @synthesize productCode=_productCode;
@property(retain, nonatomic) NSNumber *promotionLabel; // @synthesize promotionLabel=_promotionLabel;
@property(retain, nonatomic) NSNumber *promotionId; // @synthesize promotionId=_promotionId;
@property(retain, nonatomic) NSNumber *pmInfoId; // @synthesize pmInfoId=_pmInfoId;
@property(retain, nonatomic) NSNumber *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;
- (id)toProductVO;
- (id)landingPageIdFromLPPromotionId;

@end

