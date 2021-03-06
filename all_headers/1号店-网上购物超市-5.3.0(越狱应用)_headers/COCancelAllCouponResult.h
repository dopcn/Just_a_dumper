//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COBaseResult.h"

@class COBalanceVO, CODownGradeResultVO, COOrderPriceVO, NSArray, NSNumber;

@interface COCancelAllCouponResult : COBaseResult
{
    COBalanceVO *_balance;
    NSArray *_couponList;
    CODownGradeResultVO *_downGradeResultVO;
    NSArray *_giftCardList;
    NSNumber *_hasMore;
    NSNumber *_invokeNewCouponInterface;
    NSArray *_notCanUsedCouponList;
    COOrderPriceVO *_orderPrice;
}

+ (Class)classForCollectionProperty:(id)arg1;
@property(retain, nonatomic) COOrderPriceVO *orderPrice; // @synthesize orderPrice=_orderPrice;
@property(retain, nonatomic) NSArray *notCanUsedCouponList; // @synthesize notCanUsedCouponList=_notCanUsedCouponList;
@property(retain, nonatomic) NSNumber *invokeNewCouponInterface; // @synthesize invokeNewCouponInterface=_invokeNewCouponInterface;
@property(retain, nonatomic) NSNumber *hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSArray *giftCardList; // @synthesize giftCardList=_giftCardList;
@property(retain, nonatomic) CODownGradeResultVO *downGradeResultVO; // @synthesize downGradeResultVO=_downGradeResultVO;
@property(retain, nonatomic) NSArray *couponList; // @synthesize couponList=_couponList;
@property(retain, nonatomic) COBalanceVO *balance; // @synthesize balance=_balance;
- (void).cxx_destruct;

@end

