//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WUWeiboAPIKit.h"

@interface WUWeiboAPIKit (Location)
- (id)requestGeoIsDomesticWithCoordinates:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)requestGeoGPSOffsetWithCoordinate:(CDStruct_2c43369c)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)searchPlacesOfInterestUsingKeyword:(id)arg1 cityCode:(id)arg2 category:(id)arg3 count:(long long)arg4 page:(long long)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (id)requestNearbyPlacesOfInterest:(CDStruct_2c43369c)arg1 searchRange:(long long)arg2 query:(id)arg3 category:(id)arg4 count:(long long)arg5 page:(long long)arg6 sortType:(unsigned long long)arg7 needsOffsetFix:(_Bool)arg8 success:(CDUnknownBlockType)arg9 failure:(CDUnknownBlockType)arg10;
@end

