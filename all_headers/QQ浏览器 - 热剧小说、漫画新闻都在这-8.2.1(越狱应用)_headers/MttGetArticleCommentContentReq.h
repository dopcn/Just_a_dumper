//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class MttUserAccount, NSDictionary, NSString;

@interface MttGetArticleCommentContentReq : JceObjectV2
{
    int jcev2_p_2_r_iAppId;
    int jcev2_p_6_r_iRefreshType;
    NSString *jcev2_p_0_r_sDocId;
    NSString *jcev2_p_1_r_sPostId;
    MttUserAccount *jcev2_p_3_r_stUserAccount;
    NSString *jcev2_p_4_r_sGuid;
    NSString *jcev2_p_5_r_sQua;
    NSDictionary *jcev2_p_7_r_mpExtInfo__b0x9i_M09ONSStringONSString;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=mpExtInfo, setter=setMpExtInfo:) NSDictionary *jcev2_p_7_r_mpExtInfo__b0x9i_M09ONSStringONSString; // @synthesize jcev2_p_7_r_mpExtInfo__b0x9i_M09ONSStringONSString;
@property(nonatomic, getter=iRefreshType, setter=setIRefreshType:) int jcev2_p_6_r_iRefreshType; // @synthesize jcev2_p_6_r_iRefreshType;
@property(retain, nonatomic, getter=sQua, setter=setSQua:) NSString *jcev2_p_5_r_sQua; // @synthesize jcev2_p_5_r_sQua;
@property(retain, nonatomic, getter=sGuid, setter=setSGuid:) NSString *jcev2_p_4_r_sGuid; // @synthesize jcev2_p_4_r_sGuid;
@property(retain, nonatomic, getter=stUserAccount, setter=setStUserAccount:) MttUserAccount *jcev2_p_3_r_stUserAccount; // @synthesize jcev2_p_3_r_stUserAccount;
@property(nonatomic, getter=iAppId, setter=setIAppId:) int jcev2_p_2_r_iAppId; // @synthesize jcev2_p_2_r_iAppId;
@property(retain, nonatomic, getter=sPostId, setter=setSPostId:) NSString *jcev2_p_1_r_sPostId; // @synthesize jcev2_p_1_r_sPostId;
@property(retain, nonatomic, getter=sDocId, setter=setSDocId:) NSString *jcev2_p_0_r_sDocId; // @synthesize jcev2_p_0_r_sDocId;
- (void).cxx_destruct;
- (id)init;

@end

