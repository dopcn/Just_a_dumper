//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface Address : NSObject
{
    _Bool _isCurrentLocation;
    NSString *_name;
    NSString *_addr;
    NSString *_buildingId;
    NSString *_floorId;
    struct BMPoint _point;
}

@property(copy, nonatomic) NSString *floorId; // @synthesize floorId=_floorId;
@property(copy, nonatomic) NSString *buildingId; // @synthesize buildingId=_buildingId;
@property(nonatomic) _Bool isCurrentLocation; // @synthesize isCurrentLocation=_isCurrentLocation;
@property(retain, nonatomic) NSString *addr; // @synthesize addr=_addr;
@property(nonatomic) struct BMPoint point; // @synthesize point=_point;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

