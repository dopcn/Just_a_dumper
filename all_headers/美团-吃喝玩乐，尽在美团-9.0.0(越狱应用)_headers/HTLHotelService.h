//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTLBaseService.h"

@class HTLHotelModel;

@interface HTLHotelService : HTLBaseService
{
    HTLHotelModel *_hotelModel;
}

- (void).cxx_destruct;
- (void)loadMerchantDealsWithCheckInDate:(id)arg1 checkOutDate:(id)arg2 poiID:(long long)arg3 finished:(CDUnknownBlockType)arg4;
- (void)loadMerchantWithPOIID:(long long)arg1 entryType:(long long)arg2 otherParams:(id)arg3 isLocalCity:(_Bool)arg4 finish:(CDUnknownBlockType)arg5;
- (id)init;

@end

