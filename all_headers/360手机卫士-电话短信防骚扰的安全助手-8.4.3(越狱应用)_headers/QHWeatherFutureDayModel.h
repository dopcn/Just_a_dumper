//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QHWeatherBaseModel.h"

@class NSString;

@interface QHWeatherFutureDayModel : QHWeatherBaseModel
{
    NSString *_temperature;
    NSString *_weather;
    NSString *_weather_name;
    NSString *_wind_id;
    NSString *_wind_name;
    NSString *_wind_power;
    NSString *_wind_power_name;
}

@property(copy, nonatomic) NSString *wind_power_name; // @synthesize wind_power_name=_wind_power_name;
@property(copy, nonatomic) NSString *wind_power; // @synthesize wind_power=_wind_power;
@property(copy, nonatomic) NSString *wind_name; // @synthesize wind_name=_wind_name;
@property(copy, nonatomic) NSString *wind_id; // @synthesize wind_id=_wind_id;
@property(copy, nonatomic) NSString *weather_name; // @synthesize weather_name=_weather_name;
@property(copy, nonatomic) NSString *weather; // @synthesize weather=_weather;
@property(copy, nonatomic) NSString *temperature; // @synthesize temperature=_temperature;
- (void).cxx_destruct;

@end

