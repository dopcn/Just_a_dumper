//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QQPimPasswordCheck2PwdResp : JceObjectV2
{
    long long jcev2_p_0_r_result;
    long long jcev2_p_1_r_status;
    NSString *jcev2_p_2_o_extmsg;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_extmsg, setter=setJce_extmsg:) NSString *jcev2_p_2_o_extmsg; // @synthesize jcev2_p_2_o_extmsg;
@property(nonatomic, getter=jce_status, setter=setJce_status:) long long jcev2_p_1_r_status; // @synthesize jcev2_p_1_r_status;
@property(nonatomic, getter=jce_result, setter=setJce_result:) long long jcev2_p_0_r_result; // @synthesize jcev2_p_0_r_result;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

