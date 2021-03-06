//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YoyoObject.h"

@class NSMutableArray;

@interface YoyoTask : YoyoObject
{
    NSMutableArray *_queueArray;
    unsigned long long _asyncTaskCount;
}

+ (void)start;
+ (id)instance;
@property unsigned long long asyncTaskCount; // @synthesize asyncTaskCount=_asyncTaskCount;
@property(retain, nonatomic) NSMutableArray *queueArray; // @synthesize queueArray=_queueArray;
- (void).cxx_destruct;
- (void)runOnMainThreadWithBlock:(CDUnknownBlockType)arg1;
- (void)addAsyncTaskInMainThreadWithDelay:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)addAsyncTaskWithDelay:(double)arg1 inMainThread:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (void)addAsyncTaskInMainThreadWithBlock:(CDUnknownBlockType)arg1;
- (void)addAsyncLongTimeTaskWithBlock:(CDUnknownBlockType)arg1;
- (void)addAsyncTaskWithBlock:(CDUnknownBlockType)arg1;
- (void)addAsyncTaskWithBlock:(CDUnknownBlockType)arg1 toToSerialQueueIndex:(long long)arg2;
- (struct _NSRange)serialQueueIndexRange;
- (void)addOpTaskWithBlock:(CDUnknownBlockType)arg1 toSerialOpQueue:(id)arg2;
- (id)newSerialOpQueueWithMaxCount:(long long)arg1;

@end

