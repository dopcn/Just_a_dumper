//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class MttAppUserInfo, NSString;

@interface MttUserAppListReq : JceObjectV2
{
    _Bool jcev2_p_2_o_bSimpleInfo;
    _Bool jcev2_p_4_o_bCheckCtrlBits;
    int jcev2_p_3_o_iTransType;
    MttAppUserInfo *jcev2_p_0_o_stAppUserInfo;
    NSString *jcev2_p_1_o_sVersionMD5;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_bCheckCtrlBits, setter=setJce_bCheckCtrlBits:) _Bool jcev2_p_4_o_bCheckCtrlBits; // @synthesize jcev2_p_4_o_bCheckCtrlBits;
@property(nonatomic, getter=jce_iTransType, setter=setJce_iTransType:) int jcev2_p_3_o_iTransType; // @synthesize jcev2_p_3_o_iTransType;
@property(nonatomic, getter=jce_bSimpleInfo, setter=setJce_bSimpleInfo:) _Bool jcev2_p_2_o_bSimpleInfo; // @synthesize jcev2_p_2_o_bSimpleInfo;
@property(retain, nonatomic, getter=jce_sVersionMD5, setter=setJce_sVersionMD5:) NSString *jcev2_p_1_o_sVersionMD5; // @synthesize jcev2_p_1_o_sVersionMD5;
@property(retain, nonatomic, getter=jce_stAppUserInfo, setter=setJce_stAppUserInfo:) MttAppUserInfo *jcev2_p_0_o_stAppUserInfo; // @synthesize jcev2_p_0_o_stAppUserInfo;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

