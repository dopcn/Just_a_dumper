//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface QBusLineInfo : NSObject
{
    NSString *_uid;
    NSString *_reverseUid;
    NSString *_announcement;
    NSString *_name;
    NSString *_startStation;
    NSString *_endStation;
    NSString *_startTime;
    NSString *_endTime;
    long long _distance;
    long long _price;
    long long _stopNum;
    struct CLLocationCoordinate2D *_busNodeList;
    unsigned long long _busNodeCount;
    NSArray *_stationList;
}

@property(retain, nonatomic) NSArray *stationList; // @synthesize stationList=_stationList;
@property(readonly, nonatomic) unsigned long long busNodeCount; // @synthesize busNodeCount=_busNodeCount;
@property(readonly, nonatomic) struct CLLocationCoordinate2D *busNodeList; // @synthesize busNodeList=_busNodeList;
@property(nonatomic) long long price; // @synthesize price=_price;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *endStation; // @synthesize endStation=_endStation;
@property(retain, nonatomic) NSString *startStation; // @synthesize startStation=_startStation;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *announcement; // @synthesize announcement=_announcement;
@property(retain, nonatomic) NSString *reverseUid; // @synthesize reverseUid=_reverseUid;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (void)setBusNodeList:(struct CLLocationCoordinate2D *)arg1 widthBusNodeCount:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;

@end

