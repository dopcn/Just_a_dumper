//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface MttFontLib : JceObjectV2
{
    int jcev2_p_3_r_iFontLibSize;
    NSString *jcev2_p_0_r_strFontName;
    NSString *jcev2_p_1_r_strFontDownloadUrl;
    NSString *jcev2_p_2_r_strPicUrl;
    NSString *jcev2_p_4_o_strNightPicUrl;
    NSString *jcev2_p_5_o_strKey;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_strKey, setter=setJce_strKey:) NSString *jcev2_p_5_o_strKey; // @synthesize jcev2_p_5_o_strKey;
@property(retain, nonatomic, getter=jce_strNightPicUrl, setter=setJce_strNightPicUrl:) NSString *jcev2_p_4_o_strNightPicUrl; // @synthesize jcev2_p_4_o_strNightPicUrl;
@property(nonatomic, getter=jce_iFontLibSize, setter=setJce_iFontLibSize:) int jcev2_p_3_r_iFontLibSize; // @synthesize jcev2_p_3_r_iFontLibSize;
@property(retain, nonatomic, getter=jce_strPicUrl, setter=setJce_strPicUrl:) NSString *jcev2_p_2_r_strPicUrl; // @synthesize jcev2_p_2_r_strPicUrl;
@property(retain, nonatomic, getter=jce_strFontDownloadUrl, setter=setJce_strFontDownloadUrl:) NSString *jcev2_p_1_r_strFontDownloadUrl; // @synthesize jcev2_p_1_r_strFontDownloadUrl;
@property(retain, nonatomic, getter=jce_strFontName, setter=setJce_strFontName:) NSString *jcev2_p_0_r_strFontName; // @synthesize jcev2_p_0_r_strFontName;
- (void).cxx_destruct;
- (id)init;

@end

