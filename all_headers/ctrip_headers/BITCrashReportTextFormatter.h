//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BITCrashReportTextFormatter : NSObject
{
}

+ (id)anonymizedPathFromPath:(id)arg1;
+ (id)bit_formatStackFrame:(id)arg1 frameIndex:(unsigned long long)arg2 report:(id)arg3 lp64:(int)arg4;
+ (id)bit_archNameFromCPUType:(unsigned long long)arg1 subType:(unsigned long long)arg2;
+ (id)bit_archNameFromImageInfo:(id)arg1;
+ (long long)bit_imageTypeForImagePath:(id)arg1 processPath:(id)arg2;
+ (id)arrayOfAppUUIDsForCrashReport:(id)arg1;
+ (id)selectorForRegisterWithName:(id)arg1 ofThread:(id)arg2 report:(id)arg3;
+ (id)stringValueForCrashReport:(id)arg1 crashReporterKey:(id)arg2;

@end

