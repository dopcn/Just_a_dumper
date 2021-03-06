//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIDevice.h>

@interface UIDevice (Hardware)
+ (_Bool)isiPhoneX;
+ (id)imageSuffix4InchDisplay;
+ (_Bool)has4InchDisplay;
+ (id)imageSuffixRetinaDisplay;
+ (_Bool)hasRetinaDisplay;
+ (id)platformStringForPlatform:(id)arg1;
+ (id)platformStringForType:(unsigned long long)arg1;
+ (unsigned long long)platformTypeForString:(id)arg1;
+ (_Bool)isSmallerScreenForPlatform:(id)arg1;
+ (_Bool)is86PlatformPrefix:(id)arg1;
+ (long long)getSubmodel:(id)arg1;
- (id)macaddress;
- (long long)deviceFamily;
- (id)platformString;
- (unsigned long long)platformType;
- (id)freeDiskSpace;
- (id)totalDiskSpace;
- (unsigned long long)maxSocketBufferSize;
- (unsigned long long)userMemory;
- (unsigned long long)totalMemory;
- (unsigned long long)cpuCount;
- (unsigned long long)busFrequency;
- (unsigned long long)cpuFrequency;
- (unsigned long long)getSysInfo:(unsigned int)arg1;
- (id)hwmodel;
- (id)platform;
- (id)getSysInfoByName:(char *)arg1;
@end

