//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKBaseModel.h"

@interface TWIPOILoader : SAKBaseModel
{
}

+ (void)initialize;
- (void)loadHotelDeals:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 type:(long long)arg4 finished:(CDUnknownBlockType)arg5;
- (void)loadComments:(long long)arg1 finished:(CDUnknownBlockType)arg2;
- (void)loadNearbyList:(long long)arg1 finished:(CDUnknownBlockType)arg2;
- (void)loadPOIDetail:(long long)arg1 finished:(CDUnknownBlockType)arg2;

@end

