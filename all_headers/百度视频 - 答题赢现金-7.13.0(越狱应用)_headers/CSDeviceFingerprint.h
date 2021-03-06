//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CSDeviceFingerprint : NSObject
{
}

+ (double)getInstallationTime;
+ (double)getPurchaseDate;
+ (long long)appStoreID;
+ (id)getUserAppleID;
+ (id)getDataCounters;
+ (id)getKeyboards;
+ (_Bool)advertisingEnabled;
+ (_Bool)is24HourTime;
+ (id)getLocale;
+ (id)getLanguage;
+ (id)getDeviceModel;
+ (int)getBatteryState;
+ (float)getBatteryLevel;
+ (id)getSystemVersion;
+ (id)getDeviceName;
+ (long long)freeDiskSpace;
+ (long long)totalDiskSpace;
+ (id)getMNC;
+ (id)getMCC;
+ (id)getCarrierName;
+ (id)getRouterSSID;
+ (id)getRouterMAC;
+ (id)getNetworkType;
+ (id)getConnectionType;
+ (double)getActiveTime;
+ (int)getBootTime;
+ (double)getCurrentTimestamp;

@end

