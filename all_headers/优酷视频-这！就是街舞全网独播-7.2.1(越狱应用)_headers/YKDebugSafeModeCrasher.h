//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface YKDebugSafeModeCrasher : NSObject
{
}

+ (id)dateFormatter;
+ (id)safeModeDocPath;
+ (id)crashTraceFilePath;
+ (id)readFlagPlistFile;
+ (id)launchCrashFlagFilePath;
+ (id)safeModeFlagPlist;
+ (void)synchronizeSafeModeFlagPlist:(id)arg1;
+ (_Bool)isContinuousCrashHappen:(_Bool *)arg1;
+ (void)setCrashAppStateTagWithCount:(long long)arg1;
+ (_Bool)isEnterSafeModeForLaunch:(_Bool *)arg1;
+ (void)setCrashLaunchTagWithCount:(long long)arg1;
+ (void)cleanupData;
+ (void)startAppRunningCrashTest;
+ (void)startLaunchCrashTest;
+ (void)throwUncaughtNSException;

@end

