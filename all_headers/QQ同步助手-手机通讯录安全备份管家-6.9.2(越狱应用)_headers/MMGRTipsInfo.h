//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface MMGRTipsInfo : JceObjectV2
{
    NSString *jcev2_p_0_r_title;
    NSString *jcev2_p_1_r_msg;
    long long jcev2_p_2_r_type;
    long long jcev2_p_3_r_atype;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_atype, setter=setJce_atype:) long long jcev2_p_3_r_atype; // @synthesize jcev2_p_3_r_atype;
@property(nonatomic, getter=jce_type, setter=setJce_type:) long long jcev2_p_2_r_type; // @synthesize jcev2_p_2_r_type;
@property(retain, nonatomic, getter=jce_msg, setter=setJce_msg:) NSString *jcev2_p_1_r_msg; // @synthesize jcev2_p_1_r_msg;
@property(retain, nonatomic, getter=jce_title, setter=setJce_title:) NSString *jcev2_p_0_r_title; // @synthesize jcev2_p_0_r_title;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

