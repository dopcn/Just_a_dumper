//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString, NowcastModel, WeatherDataContainer;

@interface SummaryWeatherViewObject : NSObject
{
    _Bool _weatherCorrectionShow;
    NSString *_weather;
    NSString *_temperature;
    NSString *_wind;
    long long _windAngle;
    NSString *_humidity;
    NSString *_tip;
    NSString *_pressure;
    WeatherDataContainer *_weatherData;
    NSString *_accessbilityString;
    NSString *_broadcastAccessbilityStr;
    NowcastModel *_nowcastDatas;
    NSDate *_dataSyncDate;
}

@property(copy, nonatomic) NSDate *dataSyncDate; // @synthesize dataSyncDate=_dataSyncDate;
@property(retain, nonatomic) NowcastModel *nowcastDatas; // @synthesize nowcastDatas=_nowcastDatas;
@property(retain, nonatomic) NSString *broadcastAccessbilityStr; // @synthesize broadcastAccessbilityStr=_broadcastAccessbilityStr;
@property(retain, nonatomic) NSString *accessbilityString; // @synthesize accessbilityString=_accessbilityString;
@property(retain, nonatomic) WeatherDataContainer *weatherData; // @synthesize weatherData=_weatherData;
@property(nonatomic) _Bool weatherCorrectionShow; // @synthesize weatherCorrectionShow=_weatherCorrectionShow;
@property(copy, nonatomic) NSString *pressure; // @synthesize pressure=_pressure;
@property(copy, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(copy, nonatomic) NSString *humidity; // @synthesize humidity=_humidity;
@property(nonatomic) long long windAngle; // @synthesize windAngle=_windAngle;
@property(copy, nonatomic) NSString *wind; // @synthesize wind=_wind;
@property(copy, nonatomic) NSString *temperature; // @synthesize temperature=_temperature;
@property(copy, nonatomic) NSString *weather; // @synthesize weather=_weather;
- (void).cxx_destruct;
- (void)congigVoiceOver;
- (id)parseData:(id)arg1;

@end

