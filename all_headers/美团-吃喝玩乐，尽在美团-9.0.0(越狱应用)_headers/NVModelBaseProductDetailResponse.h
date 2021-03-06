//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray, NSString, NVModelBaseGiftHouseRule, NVModelBaseGiftInfo2, NVModelBasePackagedProductInfo, NVModelBaseRule;

@interface NVModelBaseProductDetailResponse : NVBaseModel
{
    _Bool _limitTimeCancel;
    _Bool _isGiftGoods;
    _Bool _freeInsurance;
    long long _sellPrice;
    NSString *_priceTag;
    NSArray *_photos;
    long long _goodsSalesVolume;
    NSArray *_goodyBagList;
    NVModelBaseGiftInfo2 *_giftInfo;
    NSString *_promotionTag;
    NSArray *_promotions;
    NSArray *_baseInfo;
    NSString *_productName;
    long long _productState;
    NSArray *_rules;
    NVModelBaseRule *_cancelRule;
    NVModelBaseRule *_guarantee;
    NSString *_packagedProduct;
    NVModelBasePackagedProductInfo *_packagedProductInfo;
    NSArray *_checkInInstructionsNew;
    NSString *_giftGoodsIcon;
    NSString *_freeInsuranceIcon;
    NVModelBaseGiftHouseRule *_giftHouseRule;
    NVModelBaseRule *_warmTips;
}

+ (id)metaInfo;
@property(retain, nonatomic) NVModelBaseRule *warmTips; // @synthesize warmTips=_warmTips;
@property(retain, nonatomic) NVModelBaseGiftHouseRule *giftHouseRule; // @synthesize giftHouseRule=_giftHouseRule;
@property(copy, nonatomic) NSString *freeInsuranceIcon; // @synthesize freeInsuranceIcon=_freeInsuranceIcon;
@property(nonatomic) _Bool freeInsurance; // @synthesize freeInsurance=_freeInsurance;
@property(copy, nonatomic) NSString *giftGoodsIcon; // @synthesize giftGoodsIcon=_giftGoodsIcon;
@property(nonatomic) _Bool isGiftGoods; // @synthesize isGiftGoods=_isGiftGoods;
@property(retain, nonatomic) NSArray *checkInInstructionsNew; // @synthesize checkInInstructionsNew=_checkInInstructionsNew;
@property(retain, nonatomic) NVModelBasePackagedProductInfo *packagedProductInfo; // @synthesize packagedProductInfo=_packagedProductInfo;
@property(copy, nonatomic) NSString *packagedProduct; // @synthesize packagedProduct=_packagedProduct;
@property(retain, nonatomic) NVModelBaseRule *guarantee; // @synthesize guarantee=_guarantee;
@property(retain, nonatomic) NVModelBaseRule *cancelRule; // @synthesize cancelRule=_cancelRule;
@property(retain, nonatomic) NSArray *rules; // @synthesize rules=_rules;
@property(nonatomic) long long productState; // @synthesize productState=_productState;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSArray *baseInfo; // @synthesize baseInfo=_baseInfo;
@property(retain, nonatomic) NSArray *promotions; // @synthesize promotions=_promotions;
@property(copy, nonatomic) NSString *promotionTag; // @synthesize promotionTag=_promotionTag;
@property(nonatomic) _Bool limitTimeCancel; // @synthesize limitTimeCancel=_limitTimeCancel;
@property(retain, nonatomic) NVModelBaseGiftInfo2 *giftInfo; // @synthesize giftInfo=_giftInfo;
@property(retain, nonatomic) NSArray *goodyBagList; // @synthesize goodyBagList=_goodyBagList;
@property(nonatomic) long long goodsSalesVolume; // @synthesize goodsSalesVolume=_goodsSalesVolume;
@property(retain, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(copy, nonatomic) NSString *priceTag; // @synthesize priceTag=_priceTag;
@property(nonatomic) long long sellPrice; // @synthesize sellPrice=_sellPrice;
- (void).cxx_destruct;

@end

