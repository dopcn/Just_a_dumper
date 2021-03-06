//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ATCouponModel, ATMonthOrderModel, NSArray;

@interface ATPayViewModel : NSObject
{
    long long _grade;
    ATMonthOrderModel *_monthOrder;
    ATCouponModel *_selectedCoupon;
    NSArray *_payTypeModels;
}

@property(retain, nonatomic) NSArray *payTypeModels; // @synthesize payTypeModels=_payTypeModels;
@property(retain, nonatomic) ATCouponModel *selectedCoupon; // @synthesize selectedCoupon=_selectedCoupon;
@property(retain, nonatomic) ATMonthOrderModel *monthOrder; // @synthesize monthOrder=_monthOrder;
@property(nonatomic) long long grade; // @synthesize grade=_grade;
- (void).cxx_destruct;
- (void)checkPayStatusForPayId:(id)arg1 status:(long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)placeOrderForItemId:(id)arg1 from:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)placeOrderDidLoad:(id)arg1;
- (void)getPackagePayInfoForItemId:(id)arg1 payType:(long long)arg2 coupon:(id)arg3 from:(id)arg4 block:(CDUnknownBlockType)arg5;
- (_Bool)shouldCmbDiscount;
- (id)getBarcodePayAttributeString;

@end

