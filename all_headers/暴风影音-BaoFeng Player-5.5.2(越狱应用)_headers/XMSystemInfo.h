//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CTCarrier, CTTelephonyNetworkInfo, XMReachability;

@interface XMSystemInfo : NSObject
{
    _Bool wifiAvailable;
    _Bool networkAvailable;
    XMReachability *networkReach;
    CTTelephonyNetworkInfo *_phoneNetworkInfo;
    CTCarrier *_carrier;
}

+ (int)getTypeByView;
+ (id)getPhoneNetTypeString;
+ (int)getPhoneNetType;
+ (id)bundleIdentifier;
+ (_Bool)iOS7OrLater;
+ (long long)systemMainVersion;
+ (id)parametersWithSeparator:(id)arg1 delimiter:(id)arg2 url:(id)arg3;
+ (id)JSONObjectWithData:(id)arg1 error:(id *)arg2;
+ (id)bundleReleaseVersion;
+ (id)uniqueDeviceIdentifier;
+ (id)model;
+ (id)simpleModel;
+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) CTCarrier *carrier; // @synthesize carrier=_carrier;
@property(retain, nonatomic) CTTelephonyNetworkInfo *phoneNetworkInfo; // @synthesize phoneNetworkInfo=_phoneNetworkInfo;
@property(nonatomic) _Bool networkAvailable; // @synthesize networkAvailable;
@property(nonatomic) _Bool wifiAvailable; // @synthesize wifiAvailable;
@property(retain, nonatomic) XMReachability *networkReach; // @synthesize networkReach;
- (void)updateInterfaceWithReachability:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (int)getPhoneCarrierType;
- (id)getPhoneCarrierTypeString;
- (id)init;

@end

