//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "VSServiceCacheProtocol-Protocol.h"
#import "VSServiceRegisterProtocol-Protocol.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, VSCacheUnitiveManagerStatisticsProtocol;

@interface VSCacheUnitiveManager : NSObject <VSServiceCacheProtocol, VSServiceRegisterProtocol>
{
    _Bool _autoClearEnabled;
    _Bool _clearing;
    _Bool _stopClear;
    long long _maxCacheSize;
    NSMutableArray *_cacheModels;
    unsigned long long _bgTask;
    NSObject<OS_dispatch_queue> *_ioQueue;
    id <VSCacheUnitiveManagerStatisticsProtocol> _statistics;
}

+ (id)shareInstance;
+ (_Bool)singleton;
+ (void)load;
@property(retain, nonatomic) id <VSCacheUnitiveManagerStatisticsProtocol> statistics; // @synthesize statistics=_statistics;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(nonatomic) _Bool stopClear; // @synthesize stopClear=_stopClear;
@property(nonatomic) _Bool clearing; // @synthesize clearing=_clearing;
@property(nonatomic) unsigned long long bgTask; // @synthesize bgTask=_bgTask;
@property(retain, nonatomic) NSMutableArray *cacheModels; // @synthesize cacheModels=_cacheModels;
@property(nonatomic) _Bool autoClearEnabled; // @synthesize autoClearEnabled=_autoClearEnabled;
@property(nonatomic) long long maxCacheSize; // @synthesize maxCacheSize=_maxCacheSize;
- (void).cxx_destruct;
- (id)getDefaultConfiguration;
- (void)stopClearCacheInBackgroundTask:(id)arg1;
- (void)startClearCacheInBackgroundTask:(id)arg1;
- (void)clearCacheUntilMaxCacheSize:(long long)arg1;
- (void)startClearCache;
- (void)setupStatistics;
- (id)createCacheModelWithConfig:(id)arg1;
- (void)setupCacheModels;
- (void)setupNotification;
- (void)setupIOQueue;
- (void)clearCacheWithCachePath:(id)arg1;
- (void)removeCacheModelWithCachePath:(id)arg1;
- (_Bool)addCacheModelWithName:(id)arg1 cachePath:(id)arg2 extension:(id)arg3 disableBackgroundClean:(_Bool)arg4;
- (long long)getCacheSize;
- (void)stopClearCache;
- (void)startClearAllCache;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

