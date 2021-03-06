//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AFNetworkReachabilityManager, CTTelephonyNetworkInfo, NSString;

@interface CTNetworkUtil : NSObject
{
    _Bool _isNetworkGFWed;
    int _networkQuality;
    int _innerNetworkType;
    CTTelephonyNetworkInfo *_telephonyInfo;
    AFNetworkReachabilityManager *_reachabilityManager;
}

+ (id)lookupHostName:(id)arg1;
+ (_Bool)isIPv6OnlyNetwork;
+ (id)getWIFIIPAddress;
+ (void)checkNetworkGFWStatus;
+ (id)sharedInstance;
@property(retain, nonatomic) AFNetworkReachabilityManager *reachabilityManager; // @synthesize reachabilityManager=_reachabilityManager;
@property(nonatomic) int innerNetworkType; // @synthesize innerNetworkType=_innerNetworkType;
@property(retain, nonatomic) CTTelephonyNetworkInfo *telephonyInfo; // @synthesize telephonyInfo=_telephonyInfo;
@property(nonatomic) _Bool isNetworkGFWed; // @synthesize isNetworkGFWed=_isNetworkGFWed;
@property(nonatomic) int networkQuality; // @synthesize networkQuality=_networkQuality;
- (void).cxx_destruct;
- (_Bool)isFast:(id)arg1;
@property(readonly, nonatomic) NSString *carrierName;
@property(readonly, nonatomic) _Bool isNetworkAvailable;
@property(readonly, nonatomic) NSString *networkTypeInfo;
@property(readonly, nonatomic) int networkType;
- (void)startNetworkQualityDetect;
- (void)notifyNetworkChanged;
- (void)networkChangedActionRA;
- (void)dealloc;
- (id)init;

@end

