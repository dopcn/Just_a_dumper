//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WEDBabyInfoSpreadModule.h"

@class NVModelBaseWeddingProduct;

@interface WEDBabyProductDetailInfoSpreadModule : WEDBabyInfoSpreadModule
{
    NVModelBaseWeddingProduct *_product;
}

@property(retain, nonatomic) NVModelBaseWeddingProduct *product; // @synthesize product=_product;
- (void).cxx_destruct;
- (long long)maxRecommendCount;
- (void)shopDidUpdate:(id)arg1;
- (id)fillGaDictionary;

@end

