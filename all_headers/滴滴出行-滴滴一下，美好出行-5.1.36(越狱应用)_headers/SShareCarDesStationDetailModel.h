//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;
@protocol Optional;

@interface SShareCarDesStationDetailModel : JSONModel
{
    NSString<Optional> *_station_id;
    NSString<Optional> *_station_name;
    NSString<Optional> *_station_lng;
    NSString<Optional> *_station_lat;
}

@property(retain, nonatomic) NSString<Optional> *station_lat; // @synthesize station_lat=_station_lat;
@property(retain, nonatomic) NSString<Optional> *station_lng; // @synthesize station_lng=_station_lng;
@property(retain, nonatomic) NSString<Optional> *station_name; // @synthesize station_name=_station_name;
@property(retain, nonatomic) NSString<Optional> *station_id; // @synthesize station_id=_station_id;
- (void).cxx_destruct;

@end

