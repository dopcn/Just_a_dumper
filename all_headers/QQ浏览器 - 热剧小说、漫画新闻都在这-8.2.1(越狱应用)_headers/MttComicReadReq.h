//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class MttComicUserInfo, NSArray, NSString;

@interface MttComicReadReq : JceObjectV2
{
    MttComicUserInfo *jcev2_p_0_r_userInfo;
    NSString *jcev2_p_1_r_sComicId;
    NSArray *jcev2_p_2_r_vChapterIds__b0x9i_VONSString;
    NSString *jcev2_p_3_r_sPlatform;
    NSString *jcev2_p_4_o_sSize;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=sSize, setter=setSSize:) NSString *jcev2_p_4_o_sSize; // @synthesize jcev2_p_4_o_sSize;
@property(retain, nonatomic, getter=sPlatform, setter=setSPlatform:) NSString *jcev2_p_3_r_sPlatform; // @synthesize jcev2_p_3_r_sPlatform;
@property(retain, nonatomic, getter=vChapterIds, setter=setVChapterIds:) NSArray *jcev2_p_2_r_vChapterIds__b0x9i_VONSString; // @synthesize jcev2_p_2_r_vChapterIds__b0x9i_VONSString;
@property(retain, nonatomic, getter=sComicId, setter=setSComicId:) NSString *jcev2_p_1_r_sComicId; // @synthesize jcev2_p_1_r_sComicId;
@property(retain, nonatomic, getter=userInfo, setter=setUserInfo:) MttComicUserInfo *jcev2_p_0_r_userInfo; // @synthesize jcev2_p_0_r_userInfo;
- (void).cxx_destruct;
- (id)init;

@end

