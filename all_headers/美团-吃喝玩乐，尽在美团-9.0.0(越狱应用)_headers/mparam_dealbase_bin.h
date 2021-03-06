//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVQueryParameter.h"

@class NSNumber, NSString;

@interface mparam_dealbase_bin : NVQueryParameter
{
    NSNumber *_dealid;
    NSNumber *_cityid;
    NSString *_sort;
    NSNumber *_poiid;
    NSNumber *_lng;
    NSNumber *_lat;
    NSString *_utm_source;
    NSString *_version_name;
    NSString *_utm_term;
    NSString *_utm_medium;
    NSNumber *_userid;
    NSString *_utm_campaign;
    NSString *_uuid;
    NSString *_utm_content;
}

@property(copy, nonatomic) NSString *utm_content; // @synthesize utm_content=_utm_content;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *utm_campaign; // @synthesize utm_campaign=_utm_campaign;
@property(copy, nonatomic) NSNumber *userid; // @synthesize userid=_userid;
@property(copy, nonatomic) NSString *utm_medium; // @synthesize utm_medium=_utm_medium;
@property(copy, nonatomic) NSString *utm_term; // @synthesize utm_term=_utm_term;
@property(copy, nonatomic) NSString *version_name; // @synthesize version_name=_version_name;
@property(copy, nonatomic) NSString *utm_source; // @synthesize utm_source=_utm_source;
@property(copy, nonatomic) NSNumber *lat; // @synthesize lat=_lat;
@property(copy, nonatomic) NSNumber *lng; // @synthesize lng=_lng;
@property(copy, nonatomic) NSNumber *poiid; // @synthesize poiid=_poiid;
@property(copy, nonatomic) NSString *sort; // @synthesize sort=_sort;
@property(copy, nonatomic) NSNumber *cityid; // @synthesize cityid=_cityid;
@property(copy, nonatomic) NSNumber *dealid; // @synthesize dealid=_dealid;
- (void).cxx_destruct;

@end

