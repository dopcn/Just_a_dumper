//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface UCVPSResponseCache : NSObject
{
    unsigned long long _maxCacheCount;
    NSMutableArray *_cachedList;
}

+ (id)defaultCache;
@property(retain, nonatomic) NSMutableArray *cachedList; // @synthesize cachedList=_cachedList;
@property(nonatomic) unsigned long long maxCacheCount; // @synthesize maxCacheCount=_maxCacheCount;
- (void).cxx_destruct;
- (void)onErrorWithCachedItem:(id)arg1;
- (void)cacheVPSItem:(id)arg1;
- (id)cachedVPSItemWithRequest:(id)arg1;
- (void)checkValidState;
- (void)removeExpiredItems;
- (void)removeCacheItem:(id)arg1;
- (_Bool)isVPSItem:(id)arg1 fitWithRequest:(id)arg2;
- (_Bool)isVPSItem:(id)arg1 equalTo:(id)arg2;
- (id)init;

@end

