//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CDGPSWatchDataFactory : NSObject
{
}

+ (void)appendPointsWithDatas:(id)arg1 summary:(id)arg2 sportRecord:(id)arg3 recorder:(id)arg4 strideFrequencys:(id)arg5 pointInterval:(unsigned long long)arg6;
+ (void)updateDetailWithDatas:(id)arg1 summary:(id)arg2 sportRecord:(id)arg3 recorder:(id)arg4 pointInterval:(unsigned long long)arg5;
+ (void)updateSummary:(id)arg1 sportRecord:(id)arg2;
+ (void)scheduledHealthData:(id)arg1 device:(id)arg2;
+ (void)scheduledGPSRecordData:(id)arg1 summary:(id)arg2 device:(id)arg3;

@end

