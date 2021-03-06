//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CTHotelFlightOrderViewModel, CTRootViewController, NSString, PriceType;

@interface CTHotelFlightOrder : NSObject
{
    CTHotelFlightOrderViewModel *_param;
    CTRootViewController *_rootVC;
    CDUnknownBlockType _resultBlock;
}

+ (void)cancel;
+ (void)endProject:(id)arg1 model:(id)arg2;
+ (void)reportError:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (void)startProjectWithParams:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (id)sharedCTHotelFlightOrder;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(retain, nonatomic) CTRootViewController *rootVC; // @synthesize rootVC=_rootVC;
@property(retain, nonatomic) CTHotelFlightOrderViewModel *param; // @synthesize param=_param;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *tip;
@property(readonly, nonatomic) PriceType *flightCouponPrice;
@property(readonly, nonatomic) PriceType *hotelCouponPrice;
@property(readonly, nonatomic) PriceType *startPrice;
@property(readonly, nonatomic) int roomID;
@property(readonly, nonatomic) int hotelID;
@property(readonly, nonatomic) _Bool enabled;
- (id)getDifferencePriceString:(id)arg1 totalCouponPrice:(id)arg2;
- (id)getDifferencePriceString:(id)arg1;

@end

