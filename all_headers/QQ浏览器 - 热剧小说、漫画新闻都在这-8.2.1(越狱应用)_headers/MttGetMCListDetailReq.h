//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class MttMCUserInfo, NSArray, NSString;

@interface MttGetMCListDetailReq : JceObjectV2
{
    _Bool jcev2_p_4_o_bNeedAllBusiness;
    int jcev2_p_2_o_iOrderNum;
    long long jcev2_p_0_r_eAction;
    long long jcev2_p_1_o_lLastTime;
    MttMCUserInfo *jcev2_p_3_o_stUserInfo;
    NSArray *jcev2_p_5_o_vBusID__b0x9i_VONSNumber;
    NSString *jcev2_p_6_o_sUid;
    long long jcev2_p_7_o_eUidType;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=eUidType, setter=setEUidType:) long long jcev2_p_7_o_eUidType; // @synthesize jcev2_p_7_o_eUidType;
@property(retain, nonatomic, getter=sUid, setter=setSUid:) NSString *jcev2_p_6_o_sUid; // @synthesize jcev2_p_6_o_sUid;
@property(retain, nonatomic, getter=vBusID, setter=setVBusID:) NSArray *jcev2_p_5_o_vBusID__b0x9i_VONSNumber; // @synthesize jcev2_p_5_o_vBusID__b0x9i_VONSNumber;
@property(nonatomic, getter=bNeedAllBusiness, setter=setBNeedAllBusiness:) _Bool jcev2_p_4_o_bNeedAllBusiness; // @synthesize jcev2_p_4_o_bNeedAllBusiness;
@property(retain, nonatomic, getter=stUserInfo, setter=setStUserInfo:) MttMCUserInfo *jcev2_p_3_o_stUserInfo; // @synthesize jcev2_p_3_o_stUserInfo;
@property(nonatomic, getter=iOrderNum, setter=setIOrderNum:) int jcev2_p_2_o_iOrderNum; // @synthesize jcev2_p_2_o_iOrderNum;
@property(nonatomic, getter=lLastTime, setter=setLLastTime:) long long jcev2_p_1_o_lLastTime; // @synthesize jcev2_p_1_o_lLastTime;
@property(nonatomic, getter=eAction, setter=setEAction:) long long jcev2_p_0_r_eAction; // @synthesize jcev2_p_0_r_eAction;
- (void).cxx_destruct;
- (id)init;

@end

