//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKHotelBaseModel.h"

#import "SAKUserBasedModel-Protocol.h"

@class NSString, SAKUser;

@interface HTLPrepayModel : SAKHotelBaseModel <SAKUserBasedModel>
{
}

- (id)fetchPrepayDetailWithCheckInDate:(id)arg1 checkOutDate:(id)arg2 clientVersion:(id)arg3 clientType:(id)arg4 room:(id)arg5 cityID:(id)arg6 requestType:(unsigned long long)arg7 finished:(CDUnknownBlockType)arg8;
- (void)loadHotelRoomsWithPOIID:(long long)arg1 checkInTime:(long long)arg2 checkOutTime:(long long)arg3 accommodationType:(long long)arg4 isTonightSpecial:(_Bool)arg5 priceFilterParameter:(id)arg6 extParameter:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SAKUser *user;

@end

