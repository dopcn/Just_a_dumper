//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDPConfig, IDPStorage, IDPStorageMemoryInner, NSMutableDictionary, NSString;

@interface IDPCache : NSObject
{
    unsigned long long _queryCount;
    unsigned long long _memeryHitCount;
    unsigned long long _diskHitCount;
    int _cacheStoragePolicy;
    NSString *_nameSpace;
    unsigned long long _memoryCapacity;
    unsigned long long _memoryTotalCost;
    unsigned long long _diskExpiredTime;
    IDPStorage *_fileStorageEngine;
    IDPStorageMemoryInner *_memoryCache;
    IDPConfig *_config;
    NSMutableDictionary *_configDict;
}

+ (void)addNameSpaceToAllCache:(id)arg1;
+ (void)removeNameSpace:(id)arg1;
+ (void)removeAll;
+ (void)cleanFileCache;
+ (void)cleanBackground;
+ (void)clearMemory;
+ (void)initialize;
+ (id)sharedCache;
@property(retain, nonatomic) NSMutableDictionary *configDict; // @synthesize configDict=_configDict;
@property(retain, nonatomic) IDPConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) IDPStorageMemoryInner *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(retain, nonatomic) IDPStorage *fileStorageEngine; // @synthesize fileStorageEngine=_fileStorageEngine;
@property(nonatomic) unsigned long long diskExpiredTime; // @synthesize diskExpiredTime=_diskExpiredTime;
@property(nonatomic) unsigned long long memoryTotalCost; // @synthesize memoryTotalCost=_memoryTotalCost;
@property(nonatomic) unsigned long long memoryCapacity; // @synthesize memoryCapacity=_memoryCapacity;
@property(readonly, nonatomic) int cacheStoragePolicy; // @synthesize cacheStoragePolicy=_cacheStoragePolicy;
@property(readonly, nonatomic) NSString *nameSpace; // @synthesize nameSpace=_nameSpace;
- (double)hitRate;
- (void)removeAllInDisk;
- (void)removeAllInMemory;
- (void)removeAll;
- (void)removeObjcetForKeyOnlyInMemory:(id)arg1;
- (void)removeObjcetForKey:(id)arg1;
- (void)objectForKey:(id)arg1 completionHandle:(CDUnknownBlockType)arg2;
- (id)objectForKeyOnlyInMemory:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)saveInner:(id)arg1 forKey:(id)arg2;
- (void)setObj:(id)arg1 forKey:(id)arg2 cost:(long long)arg3;
- (void)setObj:(id)arg1 forKey:(id)arg2;
- (_Bool)existCacheForKeyOnDisk:(id)arg1;
- (_Bool)existCacheForKeyInMemory:(id)arg1;
- (_Bool)existCacheForKey:(id)arg1;
- (unsigned long long)getDiskExpiredTime;
- (unsigned long long)getMemoryCapacity;
- (void)innerSavePolicy:(int)arg1;
- (void)dealloc;
- (id)initWithNameSpace:(id)arg1 storagePolicy:(int)arg2;

@end

