//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVQueryParameter.h"

@class NSNumber, NSString;

@interface mparam_searchmallgn_bin : NVQueryParameter
{
    NSNumber *_lng;
    NSNumber *_lat;
    NSString *_keyword;
    NSString *_regionenname;
    NSNumber *_regionid;
    NSNumber *_cityid;
    NSString *_token;
    NSString *_network;
    NSNumber *_start;
    NSString *_requestid;
    NSNumber *_filter;
}

@property(copy, nonatomic) NSNumber *filter; // @synthesize filter=_filter;
@property(copy, nonatomic) NSString *requestid; // @synthesize requestid=_requestid;
@property(copy, nonatomic) NSNumber *start; // @synthesize start=_start;
@property(copy, nonatomic) NSString *network; // @synthesize network=_network;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSNumber *cityid; // @synthesize cityid=_cityid;
@property(copy, nonatomic) NSNumber *regionid; // @synthesize regionid=_regionid;
@property(copy, nonatomic) NSString *regionenname; // @synthesize regionenname=_regionenname;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(copy, nonatomic) NSNumber *lat; // @synthesize lat=_lat;
@property(copy, nonatomic) NSNumber *lng; // @synthesize lng=_lng;
- (void).cxx_destruct;

@end

