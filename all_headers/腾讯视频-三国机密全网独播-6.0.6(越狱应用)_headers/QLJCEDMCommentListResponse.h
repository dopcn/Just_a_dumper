//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface QLJCEDMCommentListResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    int jcev2_p_1_r_dwNextTimeDur;
    int jcev2_p_4_o_dwLoopInterval;
    int jcev2_p_5_o_bContinued;
    NSArray *jcev2_p_2_o_commentList__b0x9i_VOQLJCEDMComment;
    long long jcev2_p_3_o_ddwLastStamp;
    NSString *jcev2_p_6_o_strSessionKey;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_strSessionKey, setter=setJce_strSessionKey:) NSString *jcev2_p_6_o_strSessionKey; // @synthesize jcev2_p_6_o_strSessionKey;
@property(nonatomic, getter=jce_bContinued, setter=setJce_bContinued:) int jcev2_p_5_o_bContinued; // @synthesize jcev2_p_5_o_bContinued;
@property(nonatomic, getter=jce_dwLoopInterval, setter=setJce_dwLoopInterval:) int jcev2_p_4_o_dwLoopInterval; // @synthesize jcev2_p_4_o_dwLoopInterval;
@property(nonatomic, getter=jce_ddwLastStamp, setter=setJce_ddwLastStamp:) long long jcev2_p_3_o_ddwLastStamp; // @synthesize jcev2_p_3_o_ddwLastStamp;
@property(retain, nonatomic, getter=jce_commentList, setter=setJce_commentList:) NSArray *jcev2_p_2_o_commentList__b0x9i_VOQLJCEDMComment; // @synthesize jcev2_p_2_o_commentList__b0x9i_VOQLJCEDMComment;
@property(nonatomic, getter=jce_dwNextTimeDur, setter=setJce_dwNextTimeDur:) int jcev2_p_1_r_dwNextTimeDur; // @synthesize jcev2_p_1_r_dwNextTimeDur;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

