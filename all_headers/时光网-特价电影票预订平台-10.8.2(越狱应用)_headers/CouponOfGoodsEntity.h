//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTBModel.h"

@class CouponInfoEntity, NSNumber, NSString;

@interface CouponOfGoodsEntity : MTBModel
{
    NSNumber *_success;
    NSString *_error;
    CouponInfoEntity *_couponInfo;
}

@property(retain, nonatomic) CouponInfoEntity *couponInfo; // @synthesize couponInfo=_couponInfo;
@property(copy, nonatomic) NSString *error; // @synthesize error=_error;
@property(retain, nonatomic) NSNumber *success; // @synthesize success=_success;
- (void).cxx_destruct;

@end

