//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class MDWAddressComponentInfo, MDWUserProfile, NSArray, NSString;

@interface MDWRankTopNRsp : JceObjectV2
{
    int jcev2_p_1_o_iSelfRank;
    int jcev2_p_2_o_iRegionType;
    int jcev2_p_7_o_iTimeFrame;
    NSArray *jcev2_p_0_o_vUsers__x_VOMDWUserProfile;
    MDWAddressComponentInfo *jcev2_p_3_o_tAddCom;
    NSString *jcev2_p_4_o_sRegion2Show;
    MDWUserProfile *jcev2_p_5_o_tProfile;
    NSString *jcev2_p_6_o_sSelfRank;
}

+ (id)jceType;
@property(nonatomic, getter=jce_iTimeFrame, setter=setJce_iTimeFrame:) int jcev2_p_7_o_iTimeFrame; // @synthesize jcev2_p_7_o_iTimeFrame;
@property(retain, nonatomic, getter=jce_sSelfRank, setter=setJce_sSelfRank:) NSString *jcev2_p_6_o_sSelfRank; // @synthesize jcev2_p_6_o_sSelfRank;
@property(retain, nonatomic, getter=jce_tProfile, setter=setJce_tProfile:) MDWUserProfile *jcev2_p_5_o_tProfile; // @synthesize jcev2_p_5_o_tProfile;
@property(retain, nonatomic, getter=jce_sRegion2Show, setter=setJce_sRegion2Show:) NSString *jcev2_p_4_o_sRegion2Show; // @synthesize jcev2_p_4_o_sRegion2Show;
@property(retain, nonatomic, getter=jce_tAddCom, setter=setJce_tAddCom:) MDWAddressComponentInfo *jcev2_p_3_o_tAddCom; // @synthesize jcev2_p_3_o_tAddCom;
@property(nonatomic, getter=jce_iRegionType, setter=setJce_iRegionType:) int jcev2_p_2_o_iRegionType; // @synthesize jcev2_p_2_o_iRegionType;
@property(nonatomic, getter=jce_iSelfRank, setter=setJce_iSelfRank:) int jcev2_p_1_o_iSelfRank; // @synthesize jcev2_p_1_o_iSelfRank;
@property(retain, nonatomic, getter=jce_vUsers, setter=setJce_vUsers:) NSArray *jcev2_p_0_o_vUsers__x_VOMDWUserProfile; // @synthesize jcev2_p_0_o_vUsers__x_VOMDWUserProfile;
- (void).cxx_destruct;
- (id)init;

@end

