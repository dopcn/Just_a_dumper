//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QBClientPaymentUserInfo;

@interface QBPaymentQueryAccountOrderReq : JceObjectV2
{
    QBClientPaymentUserInfo *jcev2_p_0_r_stUserInfo;
    NSString *jcev2_p_1_r_sPayParams;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_sPayParams, setter=setJce_sPayParams:) NSString *jcev2_p_1_r_sPayParams; // @synthesize jcev2_p_1_r_sPayParams;
@property(retain, nonatomic, getter=jce_stUserInfo, setter=setJce_stUserInfo:) QBClientPaymentUserInfo *jcev2_p_0_r_stUserInfo; // @synthesize jcev2_p_0_r_stUserInfo;
- (void).cxx_destruct;
- (id)init;

@end

