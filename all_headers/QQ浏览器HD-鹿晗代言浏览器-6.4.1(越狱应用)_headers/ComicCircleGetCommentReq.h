//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class ComicCircleUserSession, NSString;

@interface ComicCircleGetCommentReq : JceObjectV2
{
    int jcev2_p_4_r_iReqCount;
    int jcev2_p_7_o_iCommentPos;
    ComicCircleUserSession *jcev2_p_0_r_stSession;
    NSString *jcev2_p_1_r_sPid;
    long long jcev2_p_2_r_lStartTime;
    NSString *jcev2_p_3_r_sLastId;
    long long jcev2_p_5_o_eDirectionType;
    long long jcev2_p_6_o_eBusinessId;
    long long jcev2_p_8_o_eContentType;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_eContentType, setter=setJce_eContentType:) long long jcev2_p_8_o_eContentType; // @synthesize jcev2_p_8_o_eContentType;
@property(nonatomic, getter=jce_iCommentPos, setter=setJce_iCommentPos:) int jcev2_p_7_o_iCommentPos; // @synthesize jcev2_p_7_o_iCommentPos;
@property(nonatomic, getter=jce_eBusinessId, setter=setJce_eBusinessId:) long long jcev2_p_6_o_eBusinessId; // @synthesize jcev2_p_6_o_eBusinessId;
@property(nonatomic, getter=jce_eDirectionType, setter=setJce_eDirectionType:) long long jcev2_p_5_o_eDirectionType; // @synthesize jcev2_p_5_o_eDirectionType;
@property(nonatomic, getter=jce_iReqCount, setter=setJce_iReqCount:) int jcev2_p_4_r_iReqCount; // @synthesize jcev2_p_4_r_iReqCount;
@property(retain, nonatomic, getter=jce_sLastId, setter=setJce_sLastId:) NSString *jcev2_p_3_r_sLastId; // @synthesize jcev2_p_3_r_sLastId;
@property(nonatomic, getter=jce_lStartTime, setter=setJce_lStartTime:) long long jcev2_p_2_r_lStartTime; // @synthesize jcev2_p_2_r_lStartTime;
@property(retain, nonatomic, getter=jce_sPid, setter=setJce_sPid:) NSString *jcev2_p_1_r_sPid; // @synthesize jcev2_p_1_r_sPid;
@property(retain, nonatomic, getter=jce_stSession, setter=setJce_stSession:) ComicCircleUserSession *jcev2_p_0_r_stSession; // @synthesize jcev2_p_0_r_stSession;
- (void).cxx_destruct;
- (id)init;

@end

