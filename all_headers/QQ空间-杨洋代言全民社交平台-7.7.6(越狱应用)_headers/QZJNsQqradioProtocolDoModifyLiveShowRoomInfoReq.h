//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSDictionary, NSString, QZJNsQqradioProtocolCommonInfo, QZJNsQqradioProtocolLBSInfo;

@interface QZJNsQqradioProtocolDoModifyLiveShowRoomInfoReq : JceObjectV2
{
}

+ (id)jceType;
+ (void)initialize;

// Remaining properties
@property(retain, nonatomic, getter=jce_commonInfo, setter=setJce_commonInfo:) QZJNsQqradioProtocolCommonInfo *jcev2_p_0_o_commonInfo; // @dynamic jcev2_p_0_o_commonInfo;
@property(nonatomic, getter=jce_type, setter=setJce_type:) int jcev2_p_1_o_type; // @dynamic jcev2_p_1_o_type;
@property(retain, nonatomic, getter=jce_roomID, setter=setJce_roomID:) NSString *jcev2_p_2_o_roomID; // @dynamic jcev2_p_2_o_roomID;
@property(retain, nonatomic, getter=jce_roomInfoData, setter=setJce_roomInfoData:) NSDictionary *jcev2_p_3_o_roomInfoData__b0x9i_M09ONSNumberONSString; // @dynamic jcev2_p_3_o_roomInfoData__b0x9i_M09ONSNumberONSString;
@property(retain, nonatomic, getter=jce_uid, setter=setJce_uid:) NSString *jcev2_p_4_o_uid; // @dynamic jcev2_p_4_o_uid;
@property(retain, nonatomic, getter=jce_lbsInfo, setter=setJce_lbsInfo:) QZJNsQqradioProtocolLBSInfo *jcev2_p_5_o_lbsInfo; // @dynamic jcev2_p_5_o_lbsInfo;

@end

