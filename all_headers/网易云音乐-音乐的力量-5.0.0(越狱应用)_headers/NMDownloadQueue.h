//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface NMDownloadQueue : NSObject
{
    NSMutableOrderedSet *_queue;
    NSObject<OS_dispatch_queue> *_gcdQueue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)allObjects;
- (_Bool)containsObj:(id)arg1;
- (void)clearQueue;
- (long long)count;
- (void)dequeueArray:(id)arg1;
- (id)firstObj;
- (id)dequeue;
- (void)enqueueArray:(id)arg1;
- (void)enqueue:(id)arg1;
- (id)init;

@end

