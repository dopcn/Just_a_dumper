//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BBlock : NSObject
{
}

+ (void)dispatchOnConcurrentQueue:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)dispatchOnHighPriorityConcurrentQueue:(CDUnknownBlockType)arg1;
+ (void)dispatchOnLowPriorityConcurrentQueue:(CDUnknownBlockType)arg1;
+ (void)dispatchOnDefaultPriorityConcurrentQueue:(CDUnknownBlockType)arg1;
+ (void)dispatchOnSynchronousFileQueue:(CDUnknownBlockType)arg1;
+ (void)dispatchOnSynchronousQueue:(CDUnknownBlockType)arg1;
+ (void)dispatchAfter:(double)arg1 onMainThread:(CDUnknownBlockType)arg2;
+ (void)dispatchOnMainThread:(CDUnknownBlockType)arg1;

@end

