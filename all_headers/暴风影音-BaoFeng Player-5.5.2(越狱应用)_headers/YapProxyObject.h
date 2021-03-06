//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class YapCollectionKey, YapDatabaseReadTransaction;

@interface YapProxyObject : NSProxy
{
    id realObject;
    _Bool isMetadata;
    long long rowid;
    YapCollectionKey *collectionKey;
    YapDatabaseReadTransaction *transaction;
}

- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (void)resetWithRowid:(long long)arg1 collectionKey:(id)arg2 isMetadata:(_Bool)arg3 transaction:(id)arg4;
- (void)resetWithRealObject:(id)arg1;
- (void)reset;
@property(readonly, nonatomic) id realObject; // @dynamic realObject;
@property(readonly, nonatomic) _Bool isRealObjectLoaded; // @dynamic isRealObjectLoaded;

@end

