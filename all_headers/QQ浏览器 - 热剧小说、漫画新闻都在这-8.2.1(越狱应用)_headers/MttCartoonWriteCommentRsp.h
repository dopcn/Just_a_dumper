//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class MttCartoonScoreLevelInfo, MttCartoonUserHonorInfo, NSString;

@interface MttCartoonWriteCommentRsp : JceObjectV2
{
    NSString *jcev2_p_0_r_sPid;
    NSString *jcev2_p_1_o_sErrorMsg;
    MttCartoonScoreLevelInfo *jcev2_p_2_o_stScoreLevelInfo;
    MttCartoonUserHonorInfo *jcev2_p_3_o_stHonorInfo;
    long long jcev2_p_4_o_eUserRole;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=eUserRole, setter=setEUserRole:) long long jcev2_p_4_o_eUserRole; // @synthesize jcev2_p_4_o_eUserRole;
@property(retain, nonatomic, getter=stHonorInfo, setter=setStHonorInfo:) MttCartoonUserHonorInfo *jcev2_p_3_o_stHonorInfo; // @synthesize jcev2_p_3_o_stHonorInfo;
@property(retain, nonatomic, getter=stScoreLevelInfo, setter=setStScoreLevelInfo:) MttCartoonScoreLevelInfo *jcev2_p_2_o_stScoreLevelInfo; // @synthesize jcev2_p_2_o_stScoreLevelInfo;
@property(retain, nonatomic, getter=sErrorMsg, setter=setSErrorMsg:) NSString *jcev2_p_1_o_sErrorMsg; // @synthesize jcev2_p_1_o_sErrorMsg;
@property(retain, nonatomic, getter=sPid, setter=setSPid:) NSString *jcev2_p_0_r_sPid; // @synthesize jcev2_p_0_r_sPid;
- (void).cxx_destruct;
- (id)init;

@end

