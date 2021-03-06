//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTMAOSBaseHttpRequest.h"

#import "RequestServerLSE2-Protocol.h"

@class NSString;

@interface LTMAOSSearchHomepageRequest : LTMAOSBaseHttpRequest <RequestServerLSE2>
{
    NSString *_query_type;
    long long _shp_stepid;
    long long _shp_sessionid;
    NSString *_shp_x;
    NSString *_shp_y;
    NSString *_shp_sid;
    NSString *_shp_type;
    NSString *_shp_city;
    NSString *_shp_version;
    NSString *_shp_hour;
    NSString *_shp_row;
    NSString *_siv;
}

+ (id)bizLogicName;
@property(copy, nonatomic) NSString *siv; // @synthesize siv=_siv;
@property(copy, nonatomic) NSString *shp_row; // @synthesize shp_row=_shp_row;
@property(copy, nonatomic) NSString *shp_hour; // @synthesize shp_hour=_shp_hour;
@property(copy, nonatomic) NSString *shp_version; // @synthesize shp_version=_shp_version;
@property(copy, nonatomic) NSString *shp_city; // @synthesize shp_city=_shp_city;
@property(copy, nonatomic) NSString *shp_type; // @synthesize shp_type=_shp_type;
@property(copy, nonatomic) NSString *shp_sid; // @synthesize shp_sid=_shp_sid;
@property(copy, nonatomic) NSString *shp_y; // @synthesize shp_y=_shp_y;
@property(copy, nonatomic) NSString *shp_x; // @synthesize shp_x=_shp_x;
@property(nonatomic) long long shp_sessionid; // @synthesize shp_sessionid=_shp_sessionid;
@property(nonatomic) long long shp_stepid; // @synthesize shp_stepid=_shp_stepid;
@property(copy, nonatomic) NSString *query_type; // @synthesize query_type=_query_type;
- (void).cxx_destruct;
- (void)setParams:(id)arg1;
- (void)setFakeParams;
- (id)init;

@end

