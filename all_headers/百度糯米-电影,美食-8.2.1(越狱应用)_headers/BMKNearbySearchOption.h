//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BMKBasePoiSearchOption.h"

@interface BMKNearbySearchOption : BMKBasePoiSearchOption
{
    CDStruct_2c43369c _location;
    int _radius;
    int _sortType;
}

@property(nonatomic) int sortType; // @synthesize sortType=_sortType;
@property(nonatomic) int radius; // @synthesize radius=_radius;
@property(nonatomic) CDStruct_c3b9c2ee location; // @synthesize location=_location;
- (id)init;

@end

