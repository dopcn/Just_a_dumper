//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SAKStatisticsUtils : NSObject
{
}

+ (void)monitorExceptionType:(unsigned long long)arg1 HTTPCode:(int)arg2 requestBytes:(int)arg3 responseBytes:(int)arg4 responseTime:(int)arg5 uploadPercent:(int)arg6 extend:(id)arg7;
+ (id)dataJSONFromObjects:(id)arg1 error:(id *)arg2;
+ (void)addOneUploadTimeToday;
+ (long long)uploadTimesInThisDay;
+ (id)wifiInfo;
+ (id)networkInfoSharedInstance;
+ (void)waitingWithRetryNumber:(unsigned long long)arg1 delayInSeconds:(double)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
+ (void)sakst_waitingWithBaseDelayTimeInterval:(double)arg1 currentRetryTimes:(unsigned long long)arg2 maxRetryTimes:(unsigned long long)arg3 operationBlock:(CDUnknownBlockType)arg4;
+ (void)waitingWithBaseDelayTimeInterval:(double)arg1 maxRetryTimes:(unsigned long long)arg2 operationBlock:(CDUnknownBlockType)arg3;

@end

