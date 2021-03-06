//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "HttpURLCacheInfoDelegate-Protocol.h"

@class HttpURLCacheInfo, HttpURLCacheStat, NSString;
@protocol HttpURLCacheBackend, HttpURLCacheStorageProtocol;

@interface HttpURLCacheStorage : NSObject <HttpURLCacheInfoDelegate>
{
    _Bool _isEvictionTriggered;
    float _evictionPercent;
    long long m_capacity;
    id <HttpURLCacheStorageProtocol> _delegate;
    NSObject<HttpURLCacheBackend> *_storageBackend;
    HttpURLCacheInfo *_cacheInfo;
    HttpURLCacheStat *_statInfo;
}

@property(retain, nonatomic) HttpURLCacheStat *statInfo; // @synthesize statInfo=_statInfo;
@property(nonatomic) _Bool isEvictionTriggered; // @synthesize isEvictionTriggered=_isEvictionTriggered;
@property(retain, nonatomic) HttpURLCacheInfo *cacheInfo; // @synthesize cacheInfo=_cacheInfo;
@property(retain, nonatomic) NSObject<HttpURLCacheBackend> *storageBackend; // @synthesize storageBackend=_storageBackend;
@property float evictionPercent; // @synthesize evictionPercent=_evictionPercent;
@property id <HttpURLCacheStorageProtocol> delegate; // @synthesize delegate=_delegate;
@property long long capacity; // @synthesize capacity=m_capacity;
- (void)onCacheInfoFinishInit:(id)arg1;
- (void)removeInvalidCachedResponses;
- (_Bool)needToCleanup;
- (void)evictionOnce;
- (void)evictOnFull;
- (id)filePathForKey:(id)arg1;
- (void)updateVisitInfoWithAccessDate:(id)arg1 forKey:(id)arg2;
- (void)removeAllCachedResponses;
- (id)removeCachedResponseWithKey:(id)arg1;
- (void)storeCachedResponse:(id)arg1 withExpirationDate:(id)arg2 revalidateInfo:(id)arg3 forKey:(id)arg4 responseOnly:(_Bool)arg5;
- (id)cachedResponseWithKey:(id)arg1 shouldIgnoreExpire:(_Bool)arg2;
- (id)cacheItemForKey:(id)arg1;
- (long long)currentCount;
- (long long)currentUsage;
- (void)dealloc;
- (id)initWithCacheInfo:(id)arg1 backend:(id)arg2 stat:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

