//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "YWCacheProtocol-Protocol.h"

@class NSDate, NSMutableArray, NSMutableDictionary, NSString, YWCacheItem;

@interface YWMemoryCache : NSObject <YWCacheProtocol>
{
    int _spinLock;
    struct dispatch_queue_s *_readerWriterQueue;
    unsigned long long _capacity;
    unsigned long long _length;
    YWCacheItem *_first;
    YWCacheItem *_last;
    NSMutableDictionary *_cacheDict;
    NSMutableArray *_updateBlockArray;
    double _timeout;
    NSMutableArray *_timeoutBlockArray;
    NSDate *_lastCheckDate;
}

@property(retain, nonatomic) NSDate *lastCheckDate; // @synthesize lastCheckDate=_lastCheckDate;
@property(retain, nonatomic) NSMutableArray *timeoutBlockArray; // @synthesize timeoutBlockArray=_timeoutBlockArray;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSMutableArray *updateBlockArray; // @synthesize updateBlockArray=_updateBlockArray;
@property(retain, nonatomic) NSMutableDictionary *cacheDict; // @synthesize cacheDict=_cacheDict;
@property(nonatomic) __weak YWCacheItem *last; // @synthesize last=_last;
@property(retain, nonatomic) YWCacheItem *first; // @synthesize first=_first;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
- (void).cxx_destruct;
- (void)takeItemToLast:(id)arg1 isNew:(_Bool)arg2;
- (void)addTimeoutBlock:(CDUnknownBlockType)arg1;
- (void)addObjectUpdateBlock:(CDUnknownBlockType)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKeys:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)barrierSetObject:(id)arg1 forKey:(id)arg2;
- (id)concurrentGetObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 withExpire:(double)arg2;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)releaseItemsBeforeItem:(id)arg1;
- (void)dealloc;
- (void)didReiceiveMemoryWarning:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1 andTimeout:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

