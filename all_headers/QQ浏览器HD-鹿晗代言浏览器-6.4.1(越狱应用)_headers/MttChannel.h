//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface MttChannel : JceObjectV2
{
    int jcev2_p_0_o_iAppId;
    int jcev2_p_3_o_iOrder;
    int jcev2_p_6_o_iDataFrom;
    int jcev2_p_7_o_iStatus;
    NSString *jcev2_p_1_o_sCid;
    NSString *jcev2_p_2_o_sName;
    NSString *jcev2_p_4_o_sIconUrl;
    NSString *jcev2_p_5_o_sDescritpion;
    long long jcev2_p_8_o_site_type;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_site_type, setter=setJce_site_type:) long long jcev2_p_8_o_site_type; // @synthesize jcev2_p_8_o_site_type;
@property(nonatomic, getter=jce_iStatus, setter=setJce_iStatus:) int jcev2_p_7_o_iStatus; // @synthesize jcev2_p_7_o_iStatus;
@property(nonatomic, getter=jce_iDataFrom, setter=setJce_iDataFrom:) int jcev2_p_6_o_iDataFrom; // @synthesize jcev2_p_6_o_iDataFrom;
@property(retain, nonatomic, getter=jce_sDescritpion, setter=setJce_sDescritpion:) NSString *jcev2_p_5_o_sDescritpion; // @synthesize jcev2_p_5_o_sDescritpion;
@property(retain, nonatomic, getter=jce_sIconUrl, setter=setJce_sIconUrl:) NSString *jcev2_p_4_o_sIconUrl; // @synthesize jcev2_p_4_o_sIconUrl;
@property(nonatomic, getter=jce_iOrder, setter=setJce_iOrder:) int jcev2_p_3_o_iOrder; // @synthesize jcev2_p_3_o_iOrder;
@property(retain, nonatomic, getter=jce_sName, setter=setJce_sName:) NSString *jcev2_p_2_o_sName; // @synthesize jcev2_p_2_o_sName;
@property(retain, nonatomic, getter=jce_sCid, setter=setJce_sCid:) NSString *jcev2_p_1_o_sCid; // @synthesize jcev2_p_1_o_sCid;
@property(nonatomic, getter=jce_iAppId, setter=setJce_iAppId:) int jcev2_p_0_o_iAppId; // @synthesize jcev2_p_0_o_iAppId;
- (void).cxx_destruct;
- (id)init;

@end

