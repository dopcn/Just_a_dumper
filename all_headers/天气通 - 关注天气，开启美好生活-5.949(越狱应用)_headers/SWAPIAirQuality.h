//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SWAPIObject.h"

@class NSString, SWAPIAirQualityItem;

@interface SWAPIAirQuality : SWAPIObject
{
    SWAPIAirQualityItem *_aqi;
    SWAPIAirQualityItem *_pm2_5;
    SWAPIAirQualityItem *_pm10;
    SWAPIAirQualityItem *_co;
    SWAPIAirQualityItem *_so2;
    SWAPIAirQualityItem *_no2;
    SWAPIAirQualityItem *_o3;
    NSString *_forecastDay;
}

+ (id)objWithResp:(id)arg1;
@property(retain, nonatomic) NSString *forecastDay; // @synthesize forecastDay=_forecastDay;
@property(retain, nonatomic) SWAPIAirQualityItem *o3; // @synthesize o3=_o3;
@property(retain, nonatomic) SWAPIAirQualityItem *no2; // @synthesize no2=_no2;
@property(retain, nonatomic) SWAPIAirQualityItem *so2; // @synthesize so2=_so2;
@property(retain, nonatomic) SWAPIAirQualityItem *co; // @synthesize co=_co;
@property(retain, nonatomic) SWAPIAirQualityItem *pm10; // @synthesize pm10=_pm10;
@property(retain, nonatomic) SWAPIAirQualityItem *pm2_5; // @synthesize pm2_5=_pm2_5;
@property(retain, nonatomic) SWAPIAirQualityItem *aqi; // @synthesize aqi=_aqi;
- (void).cxx_destruct;

@end

