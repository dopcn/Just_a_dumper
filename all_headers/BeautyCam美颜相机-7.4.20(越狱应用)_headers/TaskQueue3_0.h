//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface TaskQueue3_0 : NSObject
{
    NSObject<OS_dispatch_queue> *_contextQueue;
    NSMutableArray *_tempQueue;
}

- (void).cxx_destruct;
- (void)removeTempQueue;
- (void)runAsyncProcessingQueue:(CDUnknownBlockType)arg1;
- (void)runSyncProcessingQueue:(CDUnknownBlockType)arg1;
- (void)AppState3_0DidChange:(id)arg1;
- (void)addAsyncBlock:(CDUnknownBlockType)arg1;
- (void)addSyncBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (void)dealloc;

@end

