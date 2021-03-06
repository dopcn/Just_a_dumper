//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NVModelBaseDiscount;

@interface NVModelBaseOptimalDiscount : NVBaseModel
{
    _Bool _usePoint;
    _Bool _useHongBao;
    NVModelBaseDiscount *_coupon;
    long long _reductionId;
    long long _quantity;
}

+ (id)metaInfo;
@property(nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(nonatomic) long long reductionId; // @synthesize reductionId=_reductionId;
@property(retain, nonatomic) NVModelBaseDiscount *coupon; // @synthesize coupon=_coupon;
@property(nonatomic) _Bool useHongBao; // @synthesize useHongBao=_useHongBao;
@property(nonatomic) _Bool usePoint; // @synthesize usePoint=_usePoint;
- (void).cxx_destruct;

@end

