//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MSWeakTimer, NSMutableArray;

@interface BUTaskAllocator : NSObject
{
    _Bool _isStartedLaunchedTask;
    MSWeakTimer *_timer;
    NSMutableArray *_taskQueue;
    NSMutableArray *_launchedTaskQueue;
    struct __CFRunLoopObserver *_runLoopObserver;
}

+ (id)sharedInstance;
@property(nonatomic) struct __CFRunLoopObserver *runLoopObserver; // @synthesize runLoopObserver=_runLoopObserver;
@property(retain, nonatomic) NSMutableArray *launchedTaskQueue; // @synthesize launchedTaskQueue=_launchedTaskQueue;
@property(retain, nonatomic) NSMutableArray *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(retain, nonatomic) MSWeakTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool isStartedLaunchedTask; // @synthesize isStartedLaunchedTask=_isStartedLaunchedTask;
- (void).cxx_destruct;
- (void)stopObserveRunLoop;
- (void)startObserveRunLoop;
- (void)addTaskAfterLaunchedForTarget:(id)arg1 action:(SEL)arg2 withObject:(id)arg3;
- (void)startLaunchedTask;
- (void)addTaskForTarget:(id)arg1 action:(SEL)arg2 withObject:(id)arg3;

@end

