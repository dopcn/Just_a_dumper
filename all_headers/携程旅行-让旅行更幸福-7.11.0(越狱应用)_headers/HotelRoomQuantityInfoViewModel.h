//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@interface HotelRoomQuantityInfoViewModel : CTBusinessBean
{
    _Bool _isExtend;
    long long _roomQuantity;
    long long _minQuantityPerOrder;
    long long _maxQuantityPerOrder;
    long long _holdRoomQuantity;
    long long _maxGuestCounts;
}

@property(nonatomic) _Bool isExtend; // @synthesize isExtend=_isExtend;
@property(nonatomic) long long maxGuestCounts; // @synthesize maxGuestCounts=_maxGuestCounts;
@property(nonatomic) long long holdRoomQuantity; // @synthesize holdRoomQuantity=_holdRoomQuantity;
@property(nonatomic) long long maxQuantityPerOrder; // @synthesize maxQuantityPerOrder=_maxQuantityPerOrder;
@property(nonatomic) long long minQuantityPerOrder; // @synthesize minQuantityPerOrder=_minQuantityPerOrder;
@property(nonatomic) long long roomQuantity; // @synthesize roomQuantity=_roomQuantity;
- (void)handleHotelBookCheckResponse:(id)arg1;

@end

