//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QNBCastDeviceInfo : NSObject
{
    _Bool _isSelected;
    unsigned long long _castType;
    NSString *_deviceName;
}

+ (id)createDefaultAirPlayDevice;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(nonatomic) unsigned long long castType; // @synthesize castType=_castType;
- (void).cxx_destruct;

@end

