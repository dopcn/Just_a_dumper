//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTJSONModel.h"

@class CTDiscoverBICityInfoModel, CTDiscoverBIWeatherModel, NSArray, NSDictionary, NSString;

@interface CTDiscoverBIDestinationModel : CTJSONModel
{
    _Bool _isInList;
    int _travelDays;
    int _price;
    int _priceDiff;
    NSString *_startTime;
    NSString *_recommendReason;
    CTDiscoverBICityInfoModel *_city;
    NSArray *_pois;
    CTDiscoverBIWeatherModel *_weather;
    NSDictionary *_extData;
    NSArray *_poisDetailList;
}

@property(copy, nonatomic) NSArray *poisDetailList; // @synthesize poisDetailList=_poisDetailList;
@property(retain, nonatomic) NSDictionary *extData; // @synthesize extData=_extData;
@property(nonatomic) _Bool isInList; // @synthesize isInList=_isInList;
@property(retain, nonatomic) CTDiscoverBIWeatherModel *weather; // @synthesize weather=_weather;
@property(copy, nonatomic) NSArray *pois; // @synthesize pois=_pois;
@property(retain, nonatomic) CTDiscoverBICityInfoModel *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(nonatomic) int priceDiff; // @synthesize priceDiff=_priceDiff;
@property(nonatomic) int price; // @synthesize price=_price;
@property(nonatomic) int travelDays; // @synthesize travelDays=_travelDays;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;

@end

