//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DeviceInfoManager : NSObject
{
}

+ (id)sharedManager;
- (unsigned long long)_getSizeOfFolder:(id)arg1;
- (id)_getCachePath;
- (id)_getLibraryPath;
- (id)_getDocumentPath;
- (unsigned long long)_getSystemInfo:(unsigned int)arg1;
- (long long)getPurgableMemory;
- (long long)getWiredMemory;
- (long long)getUsedMemory;
- (long long)getFreeMemory;
- (long long)getInActiveMemory;
- (long long)getActiveMemory;
- (long long)getTotalMemory;
- (long long)getUsedDiskSpace;
- (long long)getFreeDiskSpace;
- (long long)getTotalDiskSpace;
- (id)getApplicationSize;
- (id)getPerCPUUsage;
- (float)getCPUUsage;
- (unsigned long long)getCPUCount;
- (id)getCPUProcessor;
- (unsigned long long)getRamSize;
- (unsigned long long)getBusFrequency;
- (unsigned long long)getCPUFrequency;
- (id)getSystemUptime;
@property(readonly, nonatomic) _Bool canMakePhoneCall;
- (id)getDeviceModel;
- (id)getIDFA;
- (id)getDeviceName;
- (id)getMacAddress;

@end

