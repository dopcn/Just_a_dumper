//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AMAOSWeatherRegionInfo : NSObject
{
    NSString *_adcode;
    NSString *_province;
    NSString *_city;
    double _longitude;
    double _latitude;
    long long _level;
    _Bool _isHot;
    NSString *_lastUpdate;
}

@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(nonatomic) _Bool isHot; // @synthesize isHot=_isHot;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *adcode; // @synthesize adcode=_adcode;
- (void).cxx_destruct;

@end

