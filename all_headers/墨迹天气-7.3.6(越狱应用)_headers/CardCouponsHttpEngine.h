//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MJHttpEngine.h"

@interface CardCouponsHttpEngine : MJHttpEngine
{
}

+ (id)sharedInstance;
- (void)parse:(id)arg1 data:(id)arg2;
- (void)requestLockCouponWithCouponCode:(id)arg1 andResonse:(CDUnknownBlockType)arg2;
- (void)requestCardCouponDetailWithCouponCode:(id)arg1 andResponse:(CDUnknownBlockType)arg2;
- (void)requestDeleteCardCouponsWithCouponArray:(id)arg1 andResponse:(CDUnknownBlockType)arg2;
- (void)requestUseCardCouponWithCouponCode:(id)arg1 andResponse:(CDUnknownBlockType)arg2;
- (void)requestMyCardCouponsListResponse:(CDUnknownBlockType)arg1;

@end

