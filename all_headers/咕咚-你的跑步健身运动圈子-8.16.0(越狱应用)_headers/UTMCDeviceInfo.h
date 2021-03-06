//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CTTelephonyNetworkInfo, NSString;

@interface UTMCDeviceInfo : NSObject
{
    NSString *mOsName;
    NSString *mUtdid;
    NSString *mAppVersion;
    NSString *mImei;
    NSString *mImsi;
    NSString *mBrand;
    NSString *mDeviceModel;
    NSString *mResolution;
    NSString *mCarrier;
    NSString *mLanguage;
    NSString *mOsVersion;
    CTTelephonyNetworkInfo *mTelephonyInfo;
}

+ (id)uniqueGlobalDeviceIdentifier;
+ (id)macAddress;
+ (id)getUniqueID;
+ (int)networkStatus;
+ (_Bool)isReachableViaWifi;
+ (_Bool)utDeviceSystemIsLargeIOS9;
+ (struct __SCNetworkReachability *)createNetworkReachabilityRef;
+ (unsigned int)reachabilityFlags;
+ (id)resolution;
+ (id)platform;
+ (id)cpu;
+ (id)netWorkAccess;
+ (id)adSupportId;
+ (id)uniqueGlobalAdvertisingIdentifier;
+ (id)imei;
+ (id)utdid;
+ (id)getCarrier;
@property(retain, nonatomic) CTTelephonyNetworkInfo *mTelephonyInfo; // @synthesize mTelephonyInfo;
@property(retain) NSString *mOsVersion; // @synthesize mOsVersion;
@property(retain) NSString *mLanguage; // @synthesize mLanguage;
@property(retain) NSString *mCarrier; // @synthesize mCarrier;
@property(retain) NSString *mResolution; // @synthesize mResolution;
@property(retain) NSString *mDeviceModel; // @synthesize mDeviceModel;
@property(retain) NSString *mBrand; // @synthesize mBrand;
@property(retain) NSString *mImsi; // @synthesize mImsi;
@property(retain) NSString *mImei; // @synthesize mImei;
@property(retain) NSString *mAppVersion; // @synthesize mAppVersion;
@property(retain) NSString *mUtdid; // @synthesize mUtdid;
@property(retain) NSString *mOsName; // @synthesize mOsName;
- (void).cxx_destruct;
- (id)getNetworkSubType;
- (id)deviceInfo;
- (id)init;

@end

