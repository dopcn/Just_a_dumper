//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface BMCPDataAccess : NSObject
{
    _Bool _memoryCacheDidLoadFromDisk;
    _Bool _memoryCacheDidChanged;
    NSMutableArray *_tasks;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool memoryCacheDidChanged; // @synthesize memoryCacheDidChanged=_memoryCacheDidChanged;
@property(nonatomic) _Bool memoryCacheDidLoadFromDisk; // @synthesize memoryCacheDidLoadFromDisk=_memoryCacheDidLoadFromDisk;
@property(retain, nonatomic) NSMutableArray *tasks; // @synthesize tasks=_tasks;
- (void).cxx_destruct;
- (id)applicationDirectory:(unsigned long long)arg1;
- (_Bool)createFolderWithURL:(id)arg1;
- (id)businessToString:(unsigned long long)arg1;
- (id)folderURLWithType:(unsigned long long)arg1 business:(unsigned long long)arg2;
- (id)createDirectoryIfNeededWithType:(unsigned long long)arg1 business:(unsigned long long)arg2;
@property(readonly, nonatomic) NSMutableDictionary *memoryCache;
- (id)cacheKeyWithBusiness:(unsigned long long)arg1 key:(id)arg2 subkey:(id)arg3;
- (id)carOwnerCacheFileURL;
- (id)carOwnerCacheDirectoryURL;
- (void)removeCacheFromFile;
- (void)removeCacheFromMemory;
- (_Bool)saveCacheToDisk;
- (void)loadCacheFromDisk;
- (void)didReceiveMemoryWarning;
- (void)removeAllObjects;
- (void)removeCacheFile;
- (void)purge;
- (_Bool)synchronize;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)startWithRequest:(id)arg1 JSONModelClass:(Class)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)startWithRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)addTask:(id)arg1;
- (void)removeTask:(id)arg1;
- (unsigned long long)baselineConfigTag:(unsigned long long)arg1;
- (int)baselineResponseType:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (id)vio_objectForKey:(id)arg1 subkey:(id)arg2;
- (void)vio_setObject:(id)arg1 forKey:(id)arg2 subkey:(id)arg3;
- (id)vio_JSONModelWithClass:(Class)arg1 forKey:(id)arg2 subkey:(id)arg3;
- (void)vio_setJSONModel:(id)arg1 forKey:(id)arg2 subkey:(id)arg3;
- (id)vio_violationInformationListModelWithCarMD5:(id)arg1;
- (void)vio_setViolationInformationListModel:(id)arg1 withCarMD5:(id)arg2;

@end

