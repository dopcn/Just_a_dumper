//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QQPimJCECustomDate;

@interface QQPimJCEFriendBirthdayInfo : JceObjectV2
{
    int jcev2_p_2_o_intimacy;
    float jcev2_p_4_o_weight;
    NSString *jcev2_p_0_o_name;
    QQPimJCECustomDate *jcev2_p_1_o_birthdayDate;
    NSString *jcev2_p_3_o_phone;
    NSString *jcev2_p_5_o_qq;
    long long jcev2_p_6_o_source;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_source, setter=setJce_source:) long long jcev2_p_6_o_source; // @synthesize jcev2_p_6_o_source;
@property(retain, nonatomic, getter=jce_qq, setter=setJce_qq:) NSString *jcev2_p_5_o_qq; // @synthesize jcev2_p_5_o_qq;
@property(nonatomic, getter=jce_weight, setter=setJce_weight:) float jcev2_p_4_o_weight; // @synthesize jcev2_p_4_o_weight;
@property(retain, nonatomic, getter=jce_phone, setter=setJce_phone:) NSString *jcev2_p_3_o_phone; // @synthesize jcev2_p_3_o_phone;
@property(nonatomic, getter=jce_intimacy, setter=setJce_intimacy:) int jcev2_p_2_o_intimacy; // @synthesize jcev2_p_2_o_intimacy;
@property(retain, nonatomic, getter=jce_birthdayDate, setter=setJce_birthdayDate:) QQPimJCECustomDate *jcev2_p_1_o_birthdayDate; // @synthesize jcev2_p_1_o_birthdayDate;
@property(retain, nonatomic, getter=jce_name, setter=setJce_name:) NSString *jcev2_p_0_o_name; // @synthesize jcev2_p_0_o_name;
- (void).cxx_destruct;
- (id)init;

@end

