//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSDictionary, NSString;

@interface KeyguardCategory : JceObjectV2
{
    int jcev2_p_2_o_iTabShowCount;
    int jcev2_p_3_o_iTotalCount;
    NSString *jcev2_p_0_o_strCategoryId;
    NSString *jcev2_p_1_o_strName;
    NSString *jcev2_p_4_o_strDescription;
    NSArray *jcev2_p_5_o_vecKeyguard__b0x9i_VOKeyguard;
    NSDictionary *jcev2_p_6_o_mapFile__b0x9i_M09ONSStringOCustomFileInfo;
    NSDictionary *jcev2_p_7_o_mapExtInfo__b0x9i_M09ONSStringONSString;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_mapExtInfo, setter=setJce_mapExtInfo:) NSDictionary *jcev2_p_7_o_mapExtInfo__b0x9i_M09ONSStringONSString; // @synthesize jcev2_p_7_o_mapExtInfo__b0x9i_M09ONSStringONSString;
@property(retain, nonatomic, getter=jce_mapFile, setter=setJce_mapFile:) NSDictionary *jcev2_p_6_o_mapFile__b0x9i_M09ONSStringOCustomFileInfo; // @synthesize jcev2_p_6_o_mapFile__b0x9i_M09ONSStringOCustomFileInfo;
@property(retain, nonatomic, getter=jce_vecKeyguard, setter=setJce_vecKeyguard:) NSArray *jcev2_p_5_o_vecKeyguard__b0x9i_VOKeyguard; // @synthesize jcev2_p_5_o_vecKeyguard__b0x9i_VOKeyguard;
@property(retain, nonatomic, getter=jce_strDescription, setter=setJce_strDescription:) NSString *jcev2_p_4_o_strDescription; // @synthesize jcev2_p_4_o_strDescription;
@property(nonatomic, getter=jce_iTotalCount, setter=setJce_iTotalCount:) int jcev2_p_3_o_iTotalCount; // @synthesize jcev2_p_3_o_iTotalCount;
@property(nonatomic, getter=jce_iTabShowCount, setter=setJce_iTabShowCount:) int jcev2_p_2_o_iTabShowCount; // @synthesize jcev2_p_2_o_iTabShowCount;
@property(retain, nonatomic, getter=jce_strName, setter=setJce_strName:) NSString *jcev2_p_1_o_strName; // @synthesize jcev2_p_1_o_strName;
@property(retain, nonatomic, getter=jce_strCategoryId, setter=setJce_strCategoryId:) NSString *jcev2_p_0_o_strCategoryId; // @synthesize jcev2_p_0_o_strCategoryId;
- (void).cxx_destruct;
- (id)init;

@end

