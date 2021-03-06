//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocation, CLLocationManager, CTTelephonyNetworkInfo, NSString;
@protocol OS_dispatch_queue;

@interface BDWalletSystemInfo : NSObject <CLLocationManagerDelegate>
{
    _Bool _isBreak;
    NSString *_mac;
    NSString *_brand;
    NSString *_system;
    NSString *_ip;
    NSString *_ipv6;
    NSString *_termType;
    NSString *_netPoint;
    NSString *_detailNetPoint;
    NSString *_operators;
    NSString *_screenWidth;
    NSString *_screenHeight;
    NSString *_isLandScape;
    NSString *_displayName;
    NSString *_bundleId;
    NSString *_app_version;
    NSString *_cuid;
    NSString *_cuid_pass;
    CLLocation *_location;
    NSString *_diskCapacity;
    NSString *_upTime;
    NSString *_FP;
    NSString *_deviceMachine;
    NSString *_service_line;
    CLLocationManager *_locationManager;
    CTTelephonyNetworkInfo *_netWork;
    struct __SCNetworkReachability *_reachabilityRef;
    NSObject<OS_dispatch_queue> *_reachabilitySerialQueue;
    id _reachabilityObject;
}

+ (id)CUID;
+ (id)macAddressMD5;
+ (id)shareSystemInfo;
@property(retain, nonatomic) id reachabilityObject; // @synthesize reachabilityObject=_reachabilityObject;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reachabilitySerialQueue; // @synthesize reachabilitySerialQueue=_reachabilitySerialQueue;
@property(nonatomic) struct __SCNetworkReachability *reachabilityRef; // @synthesize reachabilityRef=_reachabilityRef;
@property(retain, nonatomic) CTTelephonyNetworkInfo *netWork; // @synthesize netWork=_netWork;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(copy, nonatomic) NSString *service_line; // @synthesize service_line=_service_line;
@property(copy, nonatomic) NSString *deviceMachine; // @synthesize deviceMachine=_deviceMachine;
@property(copy, nonatomic) NSString *FP; // @synthesize FP=_FP;
@property(copy, nonatomic) NSString *upTime; // @synthesize upTime=_upTime;
@property(copy, nonatomic) NSString *diskCapacity; // @synthesize diskCapacity=_diskCapacity;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *cuid_pass; // @synthesize cuid_pass=_cuid_pass;
@property(copy, nonatomic) NSString *cuid; // @synthesize cuid=_cuid;
@property(copy, nonatomic) NSString *app_version; // @synthesize app_version=_app_version;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *isLandScape; // @synthesize isLandScape=_isLandScape;
@property(nonatomic) _Bool isBreak; // @synthesize isBreak=_isBreak;
@property(copy, nonatomic) NSString *screenHeight; // @synthesize screenHeight=_screenHeight;
@property(copy, nonatomic) NSString *screenWidth; // @synthesize screenWidth=_screenWidth;
@property(copy, nonatomic) NSString *operators; // @synthesize operators=_operators;
@property(copy, nonatomic) NSString *detailNetPoint; // @synthesize detailNetPoint=_detailNetPoint;
@property(copy, nonatomic) NSString *netPoint; // @synthesize netPoint=_netPoint;
@property(copy, nonatomic) NSString *termType; // @synthesize termType=_termType;
@property(copy, nonatomic) NSString *ipv6; // @synthesize ipv6=_ipv6;
@property(copy, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(copy, nonatomic) NSString *system; // @synthesize system=_system;
@property(copy, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(copy, nonatomic) NSString *mac; // @synthesize mac=_mac;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)stopUpdatingLocation;
- (void)getCurrentLocation;
- (void)createAndUpdateFp;
- (id)init;
- (id)uuid;
- (id)createUuid;
- (void)networkChanged:(unsigned int)arg1;
- (void)stopNotifier;
- (_Bool)startNotifier;
- (void)updateCurrentNetPoint;
- (void)loadData;
- (id)getDeviceInfo;
- (id)getBundleIdentifier;
- (id)getAppDisplayName;
- (_Bool)isJailbroken;
- (id)stringInBase64FromData:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

