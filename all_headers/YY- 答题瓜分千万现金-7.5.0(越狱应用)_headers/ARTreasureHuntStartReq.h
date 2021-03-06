//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ARTreasureHuntBaseRequest.h"

@class NSString;

@interface ARTreasureHuntStartReq : ARTreasureHuntBaseRequest
{
    unsigned int _activityId;
    NSString *_country;
    NSString *_province;
    NSString *_city;
    double _latitude;
    double _longitude;
}

+ (unsigned int)minType;
+ (unsigned int)maxType;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(nonatomic) unsigned int activityId; // @synthesize activityId=_activityId;
- (void).cxx_destruct;
- (id)marshall;

@end

