//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SDDJInServiceFeeStore : NSObject
{
    NSMutableDictionary *_pickupFeeDict;
    NSMutableDictionary *_waitFeeDict;
    NSMutableDictionary *_drivingFeeDict;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *drivingFeeDict; // @synthesize drivingFeeDict=_drivingFeeDict;
@property(retain, nonatomic) NSMutableDictionary *waitFeeDict; // @synthesize waitFeeDict=_waitFeeDict;
@property(retain, nonatomic) NSMutableDictionary *pickupFeeDict; // @synthesize pickupFeeDict=_pickupFeeDict;
- (void).cxx_destruct;
- (id)drivingFeeByOrderID:(long long)arg1;
- (void)saveDrivingFee:(id)arg1 orderID:(long long)arg2;
- (id)waitFeeByOrderID:(long long)arg1;
- (void)saveWaitFee:(id)arg1 orderID:(long long)arg2;
- (void)deletePickupFeeByOrderID:(long long)arg1;
- (id)pickupFeeByOrderID:(long long)arg1;
- (void)savePickupFee:(id)arg1 orderID:(long long)arg2;
- (id)init;

@end

