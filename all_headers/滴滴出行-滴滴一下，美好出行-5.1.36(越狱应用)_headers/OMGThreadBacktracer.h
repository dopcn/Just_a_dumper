//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OMGThreadBacktracer : NSObject
{
}

+ (id)_backtraceThreadStacksWithThreadId:(unsigned int)arg1 error:(id *)arg2;
+ (id)_fetchStackFramesFromEntry:(struct OMGStackFrameEntry *)arg1;
+ (id)backtraceThreadStacksWithThread:(id)arg1 error:(id *)arg2;
+ (id)backtraceCurrentThreadStacksWithError:(id *)arg1;
+ (id)backtraceMainThreadStacksWithError:(id *)arg1;
+ (id)backtraceAllThreadStacksWithError:(id *)arg1;

@end

