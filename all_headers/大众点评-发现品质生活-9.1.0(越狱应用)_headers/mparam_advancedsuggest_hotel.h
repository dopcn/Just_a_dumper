//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVQueryParameter.h"

@class NSNumber, NSString;

@interface mparam_advancedsuggest_hotel : NVQueryParameter
{
    NSString *_cityid;
    NSString *_keyword;
    NSNumber *_lat;
    NSNumber *_lng;
    NSNumber *_mylat;
    NSNumber *_mylng;
    NSString *_token;
    NSNumber *_searcharoundcities;
}

@property(copy, nonatomic) NSNumber *searcharoundcities; // @synthesize searcharoundcities=_searcharoundcities;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSNumber *mylng; // @synthesize mylng=_mylng;
@property(copy, nonatomic) NSNumber *mylat; // @synthesize mylat=_mylat;
@property(copy, nonatomic) NSNumber *lng; // @synthesize lng=_lng;
@property(copy, nonatomic) NSNumber *lat; // @synthesize lat=_lat;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(copy, nonatomic) NSString *cityid; // @synthesize cityid=_cityid;
- (void).cxx_destruct;

@end

