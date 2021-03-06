//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSDate, SPKAdInfo, SPKButtonListInfo, SPKCouponInfo, SPKDiscountInfo, SPKPicassoDynamicInfo, SPKPromotionOthersInfo, SPKTransactionInfo;

@interface SPKPromotionInfo : SAKDomainObject
{
    SPKTransactionInfo *_transactionInfo;
    SPKCouponInfo *_couponInfo;
    SPKDiscountInfo *_discountInfo;
    SPKAdInfo *_AdInfo;
    SPKButtonListInfo *_buttonListInfo;
    SPKPromotionOthersInfo *_othersInfo;
    SPKPicassoDynamicInfo *_picassoDynamicInfo;
    double _countdownTime;
    NSDate *_picassoDynamicFetchDate;
}

+ (id)othersInfoJSONTransformer;
+ (id)buttonListInfoJSONTransformer;
+ (id)AdInfoJSONTransformer;
+ (id)discountInfoJSONTransformer;
+ (id)couponInfoJSONTransformer;
+ (id)transactionInfoJSONTransformer;
+ (id)picassoDynamicInfoJSONTransformer;
+ (id)predicateDictionary;
@property(retain, nonatomic) NSDate *picassoDynamicFetchDate; // @synthesize picassoDynamicFetchDate=_picassoDynamicFetchDate;
@property(nonatomic) double countdownTime; // @synthesize countdownTime=_countdownTime;
@property(retain, nonatomic) SPKPicassoDynamicInfo *picassoDynamicInfo; // @synthesize picassoDynamicInfo=_picassoDynamicInfo;
@property(retain, nonatomic) SPKPromotionOthersInfo *othersInfo; // @synthesize othersInfo=_othersInfo;
@property(retain, nonatomic) SPKButtonListInfo *buttonListInfo; // @synthesize buttonListInfo=_buttonListInfo;
@property(retain, nonatomic) SPKAdInfo *AdInfo; // @synthesize AdInfo=_AdInfo;
@property(retain, nonatomic) SPKDiscountInfo *discountInfo; // @synthesize discountInfo=_discountInfo;
@property(retain, nonatomic) SPKCouponInfo *couponInfo; // @synthesize couponInfo=_couponInfo;
@property(retain, nonatomic) SPKTransactionInfo *transactionInfo; // @synthesize transactionInfo=_transactionInfo;
- (void).cxx_destruct;

@end

