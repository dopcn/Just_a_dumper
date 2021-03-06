//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSDate, NSNumber, NSString;
@protocol Ignore, Optional;

@interface DCUserLocationModel : JSONModel
{
    _Bool _isTimeOut;
    NSNumber<Optional> *_distance;
    NSNumber<Optional> *_time;
    NSString<Optional> *_time_unit;
    NSNumber<Optional> *_lat;
    NSNumber<Optional> *_lng;
    NSNumber<Optional> *_type;
    NSNumber<Optional> *_angle;
    NSString<Optional> *_localId;
    NSDate<Optional> *_last_time;
    NSNumber<Ignore> *_recvOtherCount;
}

@property(retain, nonatomic) NSNumber<Ignore> *recvOtherCount; // @synthesize recvOtherCount=_recvOtherCount;
@property(retain, nonatomic) NSDate<Optional> *last_time; // @synthesize last_time=_last_time;
@property(copy, nonatomic) NSString<Optional> *localId; // @synthesize localId=_localId;
@property(nonatomic) _Bool isTimeOut; // @synthesize isTimeOut=_isTimeOut;
@property(retain, nonatomic) NSNumber<Optional> *angle; // @synthesize angle=_angle;
@property(retain, nonatomic) NSNumber<Optional> *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber<Optional> *lng; // @synthesize lng=_lng;
@property(retain, nonatomic) NSNumber<Optional> *lat; // @synthesize lat=_lat;
@property(copy, nonatomic) NSString<Optional> *time_unit; // @synthesize time_unit=_time_unit;
@property(retain, nonatomic) NSNumber<Optional> *time; // @synthesize time=_time;
@property(retain, nonatomic) NSNumber<Optional> *distance; // @synthesize distance=_distance;
- (void).cxx_destruct;

@end

