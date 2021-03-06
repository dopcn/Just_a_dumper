//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface NLBackgroundManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableOrderedSet *_backgroundJobs;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)initBackroundJobs;
- (void)addJobWithName:(id)arg1 intervalTime:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)uniqueKeyWithJob:(id)arg1;
- (void)onBackground;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

