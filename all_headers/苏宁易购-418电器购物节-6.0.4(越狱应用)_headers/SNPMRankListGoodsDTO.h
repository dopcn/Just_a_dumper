//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SNPMRankListGoodsDTO : NSObject
{
    NSString *_sugGoodsId;
    NSString *_sugGoodsCode;
    NSString *_sugGoodsName;
    NSString *_shopCode;
    NSString *_productType;
    NSString *_vendorId;
    NSString *_supplierCode;
    NSString *_catGroupId;
    NSString *_promotionInfo;
    NSString *_price;
    NSString *_handwork;
    NSString *_spread;
    NSString *_maxPrice;
    NSString *_minPrice;
    NSString *_period;
    NSString *_saleIndex;
}

@property(copy, nonatomic) NSString *saleIndex; // @synthesize saleIndex=_saleIndex;
@property(copy, nonatomic) NSString *period; // @synthesize period=_period;
@property(copy, nonatomic) NSString *minPrice; // @synthesize minPrice=_minPrice;
@property(copy, nonatomic) NSString *maxPrice; // @synthesize maxPrice=_maxPrice;
@property(copy, nonatomic) NSString *spread; // @synthesize spread=_spread;
@property(copy, nonatomic) NSString *handwork; // @synthesize handwork=_handwork;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *promotionInfo; // @synthesize promotionInfo=_promotionInfo;
@property(copy, nonatomic) NSString *catGroupId; // @synthesize catGroupId=_catGroupId;
@property(copy, nonatomic) NSString *supplierCode; // @synthesize supplierCode=_supplierCode;
@property(copy, nonatomic) NSString *vendorId; // @synthesize vendorId=_vendorId;
@property(copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(copy, nonatomic) NSString *shopCode; // @synthesize shopCode=_shopCode;
@property(copy, nonatomic) NSString *sugGoodsName; // @synthesize sugGoodsName=_sugGoodsName;
@property(copy, nonatomic) NSString *sugGoodsCode; // @synthesize sugGoodsCode=_sugGoodsCode;
@property(copy, nonatomic) NSString *sugGoodsId; // @synthesize sugGoodsId=_sugGoodsId;
- (void).cxx_destruct;
- (id)clickEventInfoString;
- (_Bool)isSelfSupportGoods;
- (void)encodeFromDictionary:(id)arg1;

@end

