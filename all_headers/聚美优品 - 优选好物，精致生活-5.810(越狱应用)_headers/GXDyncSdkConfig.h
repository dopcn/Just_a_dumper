//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GXDyncSdkConfig : NSObject
{
}

+ (_Bool)readBoolForGTKey:(id)arg1 defValue:(_Bool)arg2;
+ (int)readIntForGTKey:(id)arg1 defValue:(int)arg2;
+ (id)readStringForGTKey:(id)arg1 defValue:(id)arg2;
+ (int)getPingSelfInterval;
+ (_Bool)getPingSelfEnable;
+ (int)getCacheReportNumber;
+ (_Bool)getCacheReportEnable;
+ (id)getLogFulApiUrl;
+ (_Bool)getLogfulIniflogEnable;
+ (_Bool)getLogfulEnable;
+ (int)getBackgroundType;
+ (id)getDiagnosticToolsKey;
+ (_Bool)getDiagnosticToolsEnable;
+ (_Bool)isDModuleEnable;
+ (_Bool)getHttpDnsEnable;
+ (int)getDomainSonarInterval;
+ (_Bool)getDomainSonarEnable;
+ (void)reloadServerGtpDctInfo;

@end

