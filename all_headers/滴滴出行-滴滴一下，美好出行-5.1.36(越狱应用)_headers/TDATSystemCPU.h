//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TDATSystemCPU : NSObject
{
    NSArray *_cpuInfos;
}

+ (CDStruct_d2b197d1)generateSystemCpuUsageWithCpuInfos:(id)arg1;
+ (id)generateCpuInfos;
+ (CDStruct_d2b197d1)currentUsage;
@property(copy, nonatomic) NSArray *cpuInfos; // @synthesize cpuInfos=_cpuInfos;
- (void).cxx_destruct;

@end

