//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface MttAssWordWeather : JceObjectV2
{
    NSString *jcev2_p_0_o_sTemperature;
    NSString *jcev2_p_1_o_sCity;
    NSString *jcev2_p_2_o_sWeather;
    NSString *jcev2_p_3_o_sAirQualityPre;
    NSString *jcev2_p_4_o_sAirQualityDescribe;
    NSString *jcev2_p_5_o_sTime;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_sTime, setter=setJce_sTime:) NSString *jcev2_p_5_o_sTime; // @synthesize jcev2_p_5_o_sTime;
@property(retain, nonatomic, getter=jce_sAirQualityDescribe, setter=setJce_sAirQualityDescribe:) NSString *jcev2_p_4_o_sAirQualityDescribe; // @synthesize jcev2_p_4_o_sAirQualityDescribe;
@property(retain, nonatomic, getter=jce_sAirQualityPre, setter=setJce_sAirQualityPre:) NSString *jcev2_p_3_o_sAirQualityPre; // @synthesize jcev2_p_3_o_sAirQualityPre;
@property(retain, nonatomic, getter=jce_sWeather, setter=setJce_sWeather:) NSString *jcev2_p_2_o_sWeather; // @synthesize jcev2_p_2_o_sWeather;
@property(retain, nonatomic, getter=jce_sCity, setter=setJce_sCity:) NSString *jcev2_p_1_o_sCity; // @synthesize jcev2_p_1_o_sCity;
@property(retain, nonatomic, getter=jce_sTemperature, setter=setJce_sTemperature:) NSString *jcev2_p_0_o_sTemperature; // @synthesize jcev2_p_0_o_sTemperature;
- (void).cxx_destruct;
- (id)init;

@end

