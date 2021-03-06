//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSString;

@interface NVModelBaseSkuInfoDo : NVBaseModel
{
    _Bool _main;
    long long _skuId;
    long long _saleTypeId;
    NSString *_saleName;
    NSString *_saleNote;
    long long _leftStock;
    double _price;
}

+ (id)metaInfo;
@property(nonatomic) _Bool main; // @synthesize main=_main;
@property(nonatomic) double price; // @synthesize price=_price;
@property(nonatomic) long long leftStock; // @synthesize leftStock=_leftStock;
@property(copy, nonatomic) NSString *saleNote; // @synthesize saleNote=_saleNote;
@property(copy, nonatomic) NSString *saleName; // @synthesize saleName=_saleName;
@property(nonatomic) long long saleTypeId; // @synthesize saleTypeId=_saleTypeId;
@property(nonatomic) long long skuId; // @synthesize skuId=_skuId;
- (void).cxx_destruct;
@property(nonatomic) long long oss_selectedQuantity;
@property(nonatomic) long long oss_minQuantity;
@property(nonatomic) long long oss_maxQuantity;

@end

