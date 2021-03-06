//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class MttTCClientInfo, MttTCUserSession, NSArray, NSString;

@interface MttTCLoginReq : JceObjectV2
{
    int jcev2_p_8_o_cKeyType;
    long long jcev2_p_0_r_eAccountType;
    NSString *jcev2_p_1_r_sUserId;
    long long jcev2_p_2_r_eLoginType;
    NSString *jcev2_p_3_o_sOpenId;
    NSString *jcev2_p_4_o_sNickname;
    NSString *jcev2_p_5_o_sFaceIcon;
    MttTCClientInfo *jcev2_p_6_o_stClientInfo;
    NSString *jcev2_p_7_o_sAuthKey;
    MttTCUserSession *jcev2_p_9_o_stSession;
    NSString *jcev2_p_10_o_sPushToken;
    NSArray *jcev2_p_11_o_vIPType__b0x9i_VONSNumber;
    NSString *jcev2_p_12_o_sChannel;
    NSString *jcev2_p_13_o_sA2;
    long long jcev2_p_14_o_eLoginContext;
    NSString *jcev2_p_15_o_sRefreshToken;
    NSString *jcev2_p_16_o_sWXSessionKey;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=sWXSessionKey, setter=setSWXSessionKey:) NSString *jcev2_p_16_o_sWXSessionKey; // @synthesize jcev2_p_16_o_sWXSessionKey;
@property(retain, nonatomic, getter=sRefreshToken, setter=setSRefreshToken:) NSString *jcev2_p_15_o_sRefreshToken; // @synthesize jcev2_p_15_o_sRefreshToken;
@property(nonatomic, getter=eLoginContext, setter=setELoginContext:) long long jcev2_p_14_o_eLoginContext; // @synthesize jcev2_p_14_o_eLoginContext;
@property(retain, nonatomic, getter=sA2, setter=setSA2:) NSString *jcev2_p_13_o_sA2; // @synthesize jcev2_p_13_o_sA2;
@property(retain, nonatomic, getter=sChannel, setter=setSChannel:) NSString *jcev2_p_12_o_sChannel; // @synthesize jcev2_p_12_o_sChannel;
@property(retain, nonatomic, getter=vIPType, setter=setVIPType:) NSArray *jcev2_p_11_o_vIPType__b0x9i_VONSNumber; // @synthesize jcev2_p_11_o_vIPType__b0x9i_VONSNumber;
@property(retain, nonatomic, getter=sPushToken, setter=setSPushToken:) NSString *jcev2_p_10_o_sPushToken; // @synthesize jcev2_p_10_o_sPushToken;
@property(retain, nonatomic, getter=stSession, setter=setStSession:) MttTCUserSession *jcev2_p_9_o_stSession; // @synthesize jcev2_p_9_o_stSession;
@property(nonatomic, getter=cKeyType, setter=setCKeyType:) int jcev2_p_8_o_cKeyType; // @synthesize jcev2_p_8_o_cKeyType;
@property(retain, nonatomic, getter=sAuthKey, setter=setSAuthKey:) NSString *jcev2_p_7_o_sAuthKey; // @synthesize jcev2_p_7_o_sAuthKey;
@property(retain, nonatomic, getter=stClientInfo, setter=setStClientInfo:) MttTCClientInfo *jcev2_p_6_o_stClientInfo; // @synthesize jcev2_p_6_o_stClientInfo;
@property(retain, nonatomic, getter=sFaceIcon, setter=setSFaceIcon:) NSString *jcev2_p_5_o_sFaceIcon; // @synthesize jcev2_p_5_o_sFaceIcon;
@property(retain, nonatomic, getter=sNickname, setter=setSNickname:) NSString *jcev2_p_4_o_sNickname; // @synthesize jcev2_p_4_o_sNickname;
@property(retain, nonatomic, getter=sOpenId, setter=setSOpenId:) NSString *jcev2_p_3_o_sOpenId; // @synthesize jcev2_p_3_o_sOpenId;
@property(nonatomic, getter=eLoginType, setter=setELoginType:) long long jcev2_p_2_r_eLoginType; // @synthesize jcev2_p_2_r_eLoginType;
@property(retain, nonatomic, getter=sUserId, setter=setSUserId:) NSString *jcev2_p_1_r_sUserId; // @synthesize jcev2_p_1_r_sUserId;
@property(nonatomic, getter=eAccountType, setter=setEAccountType:) long long jcev2_p_0_r_eAccountType; // @synthesize jcev2_p_0_r_eAccountType;
- (void).cxx_destruct;
- (id)init;

@end

