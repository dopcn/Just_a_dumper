//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSCache, NSFileManager, NSString;
@protocol OS_dispatch_semaphore;

@interface DWWebImageCache : NSObject <NSCopying>
{
    _Bool _useSecureKey;
    unsigned long long _cachePolicy;
    unsigned long long _cacheType;
    unsigned long long _expirateTime;
    NSString *_cacheSpace;
    NSCache *_memCache;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSFileManager *_fileMgr;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareCache;
@property(retain, nonatomic) NSFileManager *fileMgr; // @synthesize fileMgr=_fileMgr;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) NSCache *memCache; // @synthesize memCache=_memCache;
@property(copy, nonatomic) NSString *cacheSpace; // @synthesize cacheSpace=_cacheSpace;
@property(nonatomic) _Bool useSecureKey; // @synthesize useSecureKey=_useSecureKey;
@property(nonatomic) unsigned long long expirateTime; // @synthesize expirateTime=_expirateTime;
@property(nonatomic) unsigned long long cacheType; // @synthesize cacheType=_cacheType;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)createTempPath;
- (void)removeExpiratedCache;
- (void)removeCacheByKey:(id)arg1;
- (id)objCacheForKey:(id)arg1;
- (void)cacheObj:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

