//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCESTInnerToken;

@interface QLJCESTLoginResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    int jcev2_p_9_o_flag;
    QLJCESTInnerToken *jcev2_p_1_r_innerToken;
    long long jcev2_p_2_o_qqUin;
    NSString *jcev2_p_3_o_qqNickName;
    NSString *jcev2_p_4_o_qqFaceImageUrl;
    NSString *jcev2_p_5_o_wxNickName;
    NSString *jcev2_p_6_o_wxFaceImageUrl;
    NSString *jcev2_p_7_o_strErrMsg;
    NSString *jcev2_p_8_o_wxOpenId;
    NSString *jcev2_p_10_o_infomsg;
    NSString *jcev2_p_11_o_pagetext;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_pagetext, setter=setJce_pagetext:) NSString *jcev2_p_11_o_pagetext; // @synthesize jcev2_p_11_o_pagetext;
@property(retain, nonatomic, getter=jce_infomsg, setter=setJce_infomsg:) NSString *jcev2_p_10_o_infomsg; // @synthesize jcev2_p_10_o_infomsg;
@property(nonatomic, getter=jce_flag, setter=setJce_flag:) int jcev2_p_9_o_flag; // @synthesize jcev2_p_9_o_flag;
@property(retain, nonatomic, getter=jce_wxOpenId, setter=setJce_wxOpenId:) NSString *jcev2_p_8_o_wxOpenId; // @synthesize jcev2_p_8_o_wxOpenId;
@property(retain, nonatomic, getter=jce_strErrMsg, setter=setJce_strErrMsg:) NSString *jcev2_p_7_o_strErrMsg; // @synthesize jcev2_p_7_o_strErrMsg;
@property(retain, nonatomic, getter=jce_wxFaceImageUrl, setter=setJce_wxFaceImageUrl:) NSString *jcev2_p_6_o_wxFaceImageUrl; // @synthesize jcev2_p_6_o_wxFaceImageUrl;
@property(retain, nonatomic, getter=jce_wxNickName, setter=setJce_wxNickName:) NSString *jcev2_p_5_o_wxNickName; // @synthesize jcev2_p_5_o_wxNickName;
@property(retain, nonatomic, getter=jce_qqFaceImageUrl, setter=setJce_qqFaceImageUrl:) NSString *jcev2_p_4_o_qqFaceImageUrl; // @synthesize jcev2_p_4_o_qqFaceImageUrl;
@property(retain, nonatomic, getter=jce_qqNickName, setter=setJce_qqNickName:) NSString *jcev2_p_3_o_qqNickName; // @synthesize jcev2_p_3_o_qqNickName;
@property(nonatomic, getter=jce_qqUin, setter=setJce_qqUin:) long long jcev2_p_2_o_qqUin; // @synthesize jcev2_p_2_o_qqUin;
@property(retain, nonatomic, getter=jce_innerToken, setter=setJce_innerToken:) QLJCESTInnerToken *jcev2_p_1_r_innerToken; // @synthesize jcev2_p_1_r_innerToken;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void)dealloc;
- (id)init;

@end

