//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseModuleViewModel.h"

@class NSObject, SAKCity, TPKHomeSkinInfo, TPKHomepageEmotionalConfiguration;
@protocol OS_dispatch_queue, TPKCacheDAOProtocol;

@interface TPKHomeEmotionViewModel : GCBaseModuleViewModel
{
    id <TPKCacheDAOProtocol> _cacheDAO;
    TPKHomepageEmotionalConfiguration *_emotionalConfiguration;
    SAKCity *_sessionCity;
    SAKCity *_city;
    TPKHomeSkinInfo *_skinInfo;
    long long _skinID;
    NSObject<OS_dispatch_queue> *_downloadSkinQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *downloadSkinQueue; // @synthesize downloadSkinQueue=_downloadSkinQueue;
@property(nonatomic) long long skinID; // @synthesize skinID=_skinID;
@property(retain, nonatomic) TPKHomeSkinInfo *skinInfo; // @synthesize skinInfo=_skinInfo;
@property(retain, nonatomic) SAKCity *city; // @synthesize city=_city;
@property(retain, nonatomic) SAKCity *sessionCity; // @synthesize sessionCity=_sessionCity;
@property(retain, nonatomic) TPKHomepageEmotionalConfiguration *emotionalConfiguration; // @synthesize emotionalConfiguration=_emotionalConfiguration;
@property(retain, nonatomic) id <TPKCacheDAOProtocol> cacheDAO; // @synthesize cacheDAO=_cacheDAO;
- (void).cxx_destruct;
- (void)deleteOldConfigurationFile;
- (id)getJsonFilePath:(long long)arg1;
- (id)readEmotionConfigFromFile:(id)arg1;
- (void)readEmotionConfing:(long long)arg1;
- (id)downloadSkinZipFileWithSkinInfo:(id)arg1;
- (_Bool)skinFileisExist:(long long)arg1;
- (id)getSkinUnzipDirURL:(long long)arg1;
- (id)getSkinZipFilePathURL:(long long)arg1;
- (id)getZipFilePath:(long long)arg1;
- (id)generateCacheKey;
- (void)observeSkinInfoChange;
- (void)setupViewModel;

@end

