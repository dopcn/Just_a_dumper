//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class MockTrajGeoPoint, NSString;

@interface MockTrajRoutePOI : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *addr; // @dynamic addr;
@property(retain, nonatomic) MockTrajGeoPoint *geoPoint; // @dynamic geoPoint;
@property(nonatomic) _Bool hasAddr; // @dynamic hasAddr;
@property(nonatomic) _Bool hasGeoPoint; // @dynamic hasGeoPoint;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(copy, nonatomic) NSString *name; // @dynamic name;

@end

