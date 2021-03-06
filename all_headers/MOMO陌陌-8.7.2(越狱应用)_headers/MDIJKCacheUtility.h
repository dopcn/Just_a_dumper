//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MDIJKConfigFromServer, MDIJKPlayerCacheManagerAdapter, MDThreadSafeDictionary, MDVideoRecordProvider;

@interface MDIJKCacheUtility : NSObject
{
    MDIJKConfigFromServer *_cacheConfig;
    MDIJKPlayerCacheManagerAdapter *_cacheManager;
    MDVideoRecordProvider *_recordProvider;
    MDThreadSafeDictionary *_urlBlackDict;
}

+ (void)backgroundTask;
+ (id)sharedUtility;
@property(retain, nonatomic) MDThreadSafeDictionary *urlBlackDict; // @synthesize urlBlackDict=_urlBlackDict;
@property(retain, nonatomic) MDVideoRecordProvider *recordProvider; // @synthesize recordProvider=_recordProvider;
@property(retain, nonatomic) MDIJKPlayerCacheManagerAdapter *cacheManager; // @synthesize cacheManager=_cacheManager;
@property(retain, nonatomic) MDIJKConfigFromServer *cacheConfig; // @synthesize cacheConfig=_cacheConfig;
- (void).cxx_destruct;
- (_Bool)isInBlackList:(id)arg1;
- (void)registeURLBlackList:(id)arg1;
- (void)handleLiveEnd;
- (void)handleLiveStart;
- (void)handleVideoRecordStop;
- (void)handleVideoRecordStart;
- (void)resumePreLoading;
- (void)suspendPreLoading;
- (void)stopPlayingDownLoad;
- (void)setPreLoadFinishedWithUrl:(id)arg1;
- (_Bool)isPreLoadFinishedWithUrl:(id)arg1;
- (_Bool)isPlayedWithUrl:(id)arg1;
- (void)setHasPlayedWithUrl:(id)arg1;
- (id)videoProviderIdWithUrl:(id)arg1;
- (void)handleCacheClean;
- (void)removeCacheWithUrl:(id)arg1;
- (void)handleVodLoaderPreDownLoadFinish:(id)arg1;
- (void)handleLoaderPreDownLoadFinish:(id)arg1;
- (void)removeAllCache;
- (void)doLoadTaskControl;
- (void)didRecevieReachabilityChanged:(id)arg1;
- (_Bool)switchMediaProxy;
- (_Bool)switchVodPlayer;
- (_Bool)isFastFindStream;
- (_Bool)isEnableCaches;
- (_Bool)isEnableVTB;
- (_Bool)isEnableLoadTask;
- (void)addPreDownLoadTaskWithUrlStrList:(id)arg1;
- (id)addNewPlayTaskWithUrl:(id)arg1;
- (id)addPlayTaskWithUrl:(id)arg1 params:(id)arg2;
- (id)playerConfigDictFromServer;
- (id)configFromServer;
- (void)setPreLoadConfig:(id)arg1;
- (id)init;
- (void)dealloc;

@end

