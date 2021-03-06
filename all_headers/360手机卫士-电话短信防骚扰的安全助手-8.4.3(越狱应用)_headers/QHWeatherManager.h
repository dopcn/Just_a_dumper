//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, QHRestrictionNumModel, QHWeatherCityModel, QHWeatherModel;

@interface QHWeatherManager : NSObject
{
    _Bool _updateCityData;
    NSNumber *_carNumber;
    NSDate *_restrictionNumDate;
}

+ (id)shareInstance;
@property(nonatomic) _Bool updateCityData; // @synthesize updateCityData=_updateCityData;
- (void).cxx_destruct;
- (id)getOldCityInfo;
- (void)updateSelectCityData;
@property(nonatomic) _Bool weatherNotice;
@property(retain, nonatomic) NSDate *requestSucceedTime;
@property(retain, nonatomic) NSNumber *carNumber; // @synthesize carNumber=_carNumber;
- (_Bool)saveCityModelWithCityString:(id)arg1;
@property(retain, nonatomic) QHWeatherCityModel *currentCityModel;
@property(retain, nonatomic) NSDate *restrictionNumDate; // @synthesize restrictionNumDate=_restrictionNumDate;
- (_Bool)removeRestrictionNumFile;
- (id)restrictionNumFilePath;
- (_Bool)saveRestrictionNumDataWithNSArray:(id)arg1;
@property(readonly, nonatomic) QHRestrictionNumModel *restrictionNumModel;
- (_Bool)removeWeatherInfoDataFile;
- (id)weatherInfoDataFilePath;
- (_Bool)saveWeatherModelDataWithDict:(id)arg1;
@property(readonly, nonatomic) QHWeatherModel *weatherModel;

@end

