//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVQueryParameter.h"

@class NSNumber, NSString;

@interface mparam_SearchHotword : NVQueryParameter
{
    NSNumber *_lng;
    NSNumber *_lat;
    NSString *_uuid;
    NSNumber *_cateId;
    NSString *_device;
    NSNumber *_districtId;
    NSNumber *_locateCityId;
    NSNumber *_cityId;
    NSString *_channel;
    NSString *_sourceType;
    NSString *_reqType;
    NSString *_version_name;
}

@property(copy, nonatomic) NSString *version_name; // @synthesize version_name=_version_name;
@property(copy, nonatomic) NSString *reqType; // @synthesize reqType=_reqType;
@property(copy, nonatomic) NSString *sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSNumber *cityId; // @synthesize cityId=_cityId;
@property(copy, nonatomic) NSNumber *locateCityId; // @synthesize locateCityId=_locateCityId;
@property(copy, nonatomic) NSNumber *districtId; // @synthesize districtId=_districtId;
@property(copy, nonatomic) NSString *device; // @synthesize device=_device;
@property(copy, nonatomic) NSNumber *cateId; // @synthesize cateId=_cateId;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSNumber *lat; // @synthesize lat=_lat;
@property(copy, nonatomic) NSNumber *lng; // @synthesize lng=_lng;
- (void).cxx_destruct;

@end

