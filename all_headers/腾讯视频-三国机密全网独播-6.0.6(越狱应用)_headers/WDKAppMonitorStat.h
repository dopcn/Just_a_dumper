//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, ODKAppMonitorStat;

@interface WDKAppMonitorStat : NSObject
{
    ODKAppMonitorStat *_monitorStat;
}

- (void)dealloc;
- (id)monitorStat;
@property unsigned int sampling;
@property int resultType;
@property int returnCode;
@property unsigned long long consumedMilliseconds;
@property unsigned int responsePackageSize;
@property unsigned int requestPackageSize;
@property(retain, nonatomic) NSString *interface;
- (id)init;

@end

