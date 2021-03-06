//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSNumber, NSString;

@interface CarPoolCityInfo : NSObject <NSCoding>
{
    NSString *_cityCode;
    NSString *_cityName;
    NSString *_cityNameShort;
    NSString *_cityNamePY;
    NSNumber *_cityLatitude;
    NSNumber *_cityLongitude;
}

@property(retain, nonatomic) NSNumber *cityLongitude; // @synthesize cityLongitude=_cityLongitude;
@property(retain, nonatomic) NSNumber *cityLatitude; // @synthesize cityLatitude=_cityLatitude;
@property(copy, nonatomic) NSString *cityNamePY; // @synthesize cityNamePY=_cityNamePY;
@property(copy, nonatomic) NSString *cityNameShort; // @synthesize cityNameShort=_cityNameShort;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

