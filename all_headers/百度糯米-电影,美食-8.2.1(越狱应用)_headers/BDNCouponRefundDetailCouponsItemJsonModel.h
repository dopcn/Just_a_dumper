//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDNBaseJSONModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface BDNCouponRefundDetailCouponsItemJsonModel : BDNBaseJSONModel
{
    NSString<Optional> *_code;
    NSString<Optional> *_couponId;
    NSString<Optional> *_auditStatus;
    NSString<Optional> *_refundBalanceMoney;
    NSString<Optional> *_rejectReason;
    NSString<Optional> *_refundMoney;
    NSNumber<Optional> *_type;
    NSNumber<Optional> *_subType;
}

@property(retain, nonatomic) NSNumber<Optional> *subType; // @synthesize subType=_subType;
@property(retain, nonatomic) NSNumber<Optional> *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString<Optional> *refundMoney; // @synthesize refundMoney=_refundMoney;
@property(retain, nonatomic) NSString<Optional> *rejectReason; // @synthesize rejectReason=_rejectReason;
@property(retain, nonatomic) NSString<Optional> *refundBalanceMoney; // @synthesize refundBalanceMoney=_refundBalanceMoney;
@property(retain, nonatomic) NSString<Optional> *auditStatus; // @synthesize auditStatus=_auditStatus;
@property(retain, nonatomic) NSString<Optional> *couponId; // @synthesize couponId=_couponId;
@property(retain, nonatomic) NSString<Optional> *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (_Bool)isABCoupon;

@end

