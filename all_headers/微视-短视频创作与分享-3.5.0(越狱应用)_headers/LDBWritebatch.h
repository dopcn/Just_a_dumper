//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface LDBWritebatch : NSObject
{
    struct WriteBatch _writeBatch;
    id _db;
    NSObject<OS_dispatch_queue> *_serial_queue;
}

+ (id)writeBatchFromDB:(id)arg1;
@property(nonatomic) id db; // @synthesize db=_db;
@property(readonly) struct WriteBatch writeBatch; // @synthesize writeBatch=_writeBatch;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)apply;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (void)removeAllObjects;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end

