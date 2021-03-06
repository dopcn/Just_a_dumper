//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMAOSRequestDelegate-Protocol.h"
#import "AMFilesDownloaderDelegate-Protocol.h"

@class AMAOSLabDetailRequest, AMFilesDownloader, NSMutableArray, NSString;

@interface NMDialectController : NSObject <AMFilesDownloaderDelegate, AMAOSRequestDelegate>
{
    AMFilesDownloader *_downloader;
    AMAOSLabDetailRequest *_request;
    NSMutableArray *_dialectModels;
    NSMutableArray *_dialectDatas;
    NSMutableArray *_dialectPauseModels;
    NSMutableArray *_dialectModelClassical;
    CDUnknownBlockType _aosRequestCompletion;
    CDUnknownBlockType _dialectDownloadStatusChanged;
    CDUnknownBlockType _dialectDownloadCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType dialectDownloadCompletion; // @synthesize dialectDownloadCompletion=_dialectDownloadCompletion;
@property(copy, nonatomic) CDUnknownBlockType dialectDownloadStatusChanged; // @synthesize dialectDownloadStatusChanged=_dialectDownloadStatusChanged;
@property(copy, nonatomic) CDUnknownBlockType aosRequestCompletion; // @synthesize aosRequestCompletion=_aosRequestCompletion;
- (void).cxx_destruct;
- (id)getAllDialectModels;
- (_Bool)changeZhilingDialectModels:(id)arg1;
- (id)getDownloadedModels;
- (void)clearDialectModels;
- (id)getModelsByStatus:(long long)arg1;
- (id)getUsedModel:(id)arg1;
- (void)copyRecordToDialectData:(id)arg1 to:(id)arg2;
- (id)getDialectClassicsByType:(unsigned long long)arg1;
- (void)mutableCopyDialectData:(id)arg1;
- (void)updateDialectFinishVersion:(id)arg1;
- (void)didFileDownloadFinished:(id)arg1;
- (void)didFileDownloadStatusChanged:(id)arg1;
- (void)aosRequestFinished:(id)arg1 response:(id)arg2;
- (int)transformStatusByTaskStatus:(long long)arg1;
- (_Bool)saveDialectListToFile;
- (void)compareNaviCrossIsNeedUpate:(id)arg1;
- (void)removeNotDialectDataSource:(id)arg1;
- (void)deleteFileDownloadTask:(id)arg1;
- (id)getDialectDataByName:(id)arg1;
- (_Bool)changeDiaclectDataFromOriginData:(id)arg1;
- (void)checkDialectNewListWithfileDownloadList;
- (void)initLocalDialect;
- (id)getModelByName:(id)arg1;
- (void)removeAllDialect;
- (void)cancelPullDialect;
- (void)pullDialectFromServer;
- (id)getDownloadTaskArray;
- (id)getCurrentDownloadingTask;
- (_Bool)hasDownloading;
- (void)startDownloadTaskPackage;
- (id)getDownloadTaskByName:(id)arg1;
- (void)stopAllDialect:(_Bool)arg1;
- (id)getClassicalByType:(int)arg1;
- (void)removeDialect:(id)arg1;
- (void)cancelDownloadDialect:(id)arg1;
- (void)resumeDownloadDialect;
- (void)stopDownloadDialect:(id)arg1 startNext:(_Bool)arg2;
- (_Bool)startDownloadDialectWithModel:(id)arg1;
- (_Bool)startLocalCopyDialectWithModel:(id)arg1;
- (_Bool)resumeDownloadDialectWithName:(id)arg1;
- (id)getModelClassicalByType:(int)arg1;
- (void)enumerateDialectModels;
- (void)initModelClassical;
- (void)dealloc;
- (id)initWithDialectPath:(id)arg1 usedDialect:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

