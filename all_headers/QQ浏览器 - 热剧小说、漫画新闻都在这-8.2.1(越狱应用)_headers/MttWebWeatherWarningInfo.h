//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface MttWebWeatherWarningInfo : JceObjectV2
{
    NSString *jcev2_p_0_o_sCityId;
    NSString *jcev2_p_1_o_sProvince;
    NSString *jcev2_p_2_o_sCity;
    NSString *jcev2_p_3_o_sStation;
    NSString *jcev2_p_4_o_sType;
    NSString *jcev2_p_5_o_sLevel;
    NSString *jcev2_p_6_o_sIssueTime;
    NSString *jcev2_p_7_o_sTitle;
    NSString *jcev2_p_8_o_sContent;
    NSString *jcev2_p_9_o_sWarningId;
    NSString *jcev2_p_10_o_sTypeId;
    NSString *jcev2_p_11_o_sLevelId;
    NSString *jcev2_p_12_o_sLinkSuffix;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=sLinkSuffix, setter=setSLinkSuffix:) NSString *jcev2_p_12_o_sLinkSuffix; // @synthesize jcev2_p_12_o_sLinkSuffix;
@property(retain, nonatomic, getter=sLevelId, setter=setSLevelId:) NSString *jcev2_p_11_o_sLevelId; // @synthesize jcev2_p_11_o_sLevelId;
@property(retain, nonatomic, getter=sTypeId, setter=setSTypeId:) NSString *jcev2_p_10_o_sTypeId; // @synthesize jcev2_p_10_o_sTypeId;
@property(retain, nonatomic, getter=sWarningId, setter=setSWarningId:) NSString *jcev2_p_9_o_sWarningId; // @synthesize jcev2_p_9_o_sWarningId;
@property(retain, nonatomic, getter=sContent, setter=setSContent:) NSString *jcev2_p_8_o_sContent; // @synthesize jcev2_p_8_o_sContent;
@property(retain, nonatomic, getter=sTitle, setter=setSTitle:) NSString *jcev2_p_7_o_sTitle; // @synthesize jcev2_p_7_o_sTitle;
@property(retain, nonatomic, getter=sIssueTime, setter=setSIssueTime:) NSString *jcev2_p_6_o_sIssueTime; // @synthesize jcev2_p_6_o_sIssueTime;
@property(retain, nonatomic, getter=sLevel, setter=setSLevel:) NSString *jcev2_p_5_o_sLevel; // @synthesize jcev2_p_5_o_sLevel;
@property(retain, nonatomic, getter=sType, setter=setSType:) NSString *jcev2_p_4_o_sType; // @synthesize jcev2_p_4_o_sType;
@property(retain, nonatomic, getter=sStation, setter=setSStation:) NSString *jcev2_p_3_o_sStation; // @synthesize jcev2_p_3_o_sStation;
@property(retain, nonatomic, getter=sCity, setter=setSCity:) NSString *jcev2_p_2_o_sCity; // @synthesize jcev2_p_2_o_sCity;
@property(retain, nonatomic, getter=sProvince, setter=setSProvince:) NSString *jcev2_p_1_o_sProvince; // @synthesize jcev2_p_1_o_sProvince;
@property(retain, nonatomic, getter=sCityId, setter=setSCityId:) NSString *jcev2_p_0_o_sCityId; // @synthesize jcev2_p_0_o_sCityId;
- (void).cxx_destruct;
- (id)init;
- (id)toModelInfo;

@end

