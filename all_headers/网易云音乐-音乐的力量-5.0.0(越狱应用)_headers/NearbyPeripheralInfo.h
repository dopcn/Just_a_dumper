//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CBPeripheral, NSDictionary, NSNumber, NSString;

@interface NearbyPeripheralInfo : NSObject
{
    CBPeripheral *_peripheral;
    NSString *_uuid;
    NSDictionary *_advertisementData;
    NSNumber *_rssi;
}

+ (id)peripheralInfoWithPeripheral:(id)arg1 advertisementData:(id)arg2 rssi:(id)arg3;
@property(readonly, nonatomic) NSNumber *rssi; // @synthesize rssi=_rssi;
@property(readonly, nonatomic) NSDictionary *advertisementData; // @synthesize advertisementData=_advertisementData;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
- (void).cxx_destruct;
- (id)initWithPeripheral:(id)arg1 advertisementData:(id)arg2 rssi:(id)arg3;

@end

