//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PMBacktraceLogger : NSObject
{
}

+ (void)printAllBacktraceByPLCrashReport;
+ (void)pm_logAllThread;
+ (void)pm_logCurrent;
+ (void)pm_logMain;
+ (id)pm_backtraceOfThread:(unsigned int)arg1;
+ (id)pm_backtraceOfNSThread:(id)arg1;
+ (id)pm_backtraceOfCurrentThread;
+ (id)pm_backtraceOfMainThread;
+ (id)pm_backtraceOfAllThread;
+ (void)load;

@end

