//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTTourBaseModel.h"

@class NSString;

@interface CTTourMappingCityModel : CTTourBaseModel
{
    _Bool _cityLocated;
    NSString *_cityId;
    NSString *_cityName;
    NSString *_destId;
    NSString *_destName;
}

@property _Bool cityLocated; // @synthesize cityLocated=_cityLocated;
@property(retain) NSString *destName; // @synthesize destName=_destName;
@property(retain) NSString *destId; // @synthesize destId=_destId;
@property(retain) NSString *cityName; // @synthesize cityName=_cityName;
@property(retain) NSString *cityId; // @synthesize cityId=_cityId;
- (void).cxx_destruct;

@end

