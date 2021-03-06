//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "JPUSHCacheProtocol-Protocol.h"

@class JPUSHAutoJsonVersionParser, JPUSHOriginalVersionParser, JPUSHVersionOneFileParser, JPUSHVersionTwoFileParser, NSMutableDictionary, NSString;

@interface JPUSHFileCacheController : NSObject <JPUSHCacheProtocol>
{
    NSString *_cachePath;
    NSMutableDictionary *_cacheObject;
    NSMutableDictionary *_memoryCacheObject;
    _Bool _isAESEnable;
    _Bool _isSaveAutomatic;
    JPUSHVersionTwoFileParser *_versionTwoFileParser;
    JPUSHVersionOneFileParser *_versionOneFileParser;
    JPUSHOriginalVersionParser *_originalVersionParser;
    JPUSHAutoJsonVersionParser *_autoJsonVersionParser;
    struct _opaque_pthread_mutex_t mutex;
    unsigned long long _cacheType;
}

@property(retain, nonatomic) NSMutableDictionary *cacheObject; // @synthesize cacheObject=_cacheObject;
@property(nonatomic) unsigned long long cacheType; // @synthesize cacheType=_cacheType;
@property(retain, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)securityEnable;
- (void)setAutoSynchronizeEnable:(_Bool)arg1;
- (void)p_readOldFile;
- (void)p_readJsonFileWithData:(id)arg1;
- (void)readVersionOneFileName:(id)arg1;
- (void)readVersionTwoWithFileName:(id)arg1;
- (void)transferOldFileToNewNecessaryIfNeed;
- (void)clearOldData;
- (void)clearAllDirectory;
- (void)readFile;
- (id)AESKey;
- (_Bool)writeToFile:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)clearFile;
- (long long)memoryCount;
- (long long)cacheCount;
- (void)removeAllObjects;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (_Bool)hasObjectForKey:(id)arg1;
- (void)dealloc;
- (_Bool)synchronize;
- (void)applicationReceiveMemoryWarning;
- (void)applicationWillTerminate;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)p_unObserveAllNotifications;
- (void)p_addAppStateNotifications;
- (void)initParser;
- (id)initWithPath:(id)arg1 cacheType:(unsigned long long)arg2 needSecurity:(_Bool)arg3 autoSychronize:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

