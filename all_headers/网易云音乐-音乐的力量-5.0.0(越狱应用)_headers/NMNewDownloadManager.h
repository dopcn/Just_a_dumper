//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NMDjDownloadMenuDelegate-Protocol.h"
#import "NMDownloadJobDelegate-Protocol.h"

@class NMDjDownloadMenu, NMDownloadJob, NMDownloadQualityMenu, NMDownloadQueue, NSRunLoop, NSString;

@interface NMNewDownloadManager : NSObject <NMDjDownloadMenuDelegate, NMDownloadJobDelegate>
{
    NMDownloadQueue *_downloadQueue;
    _Bool _isDownloading;
    NMDownloadQueue *_successQueue;
    NMDownloadQueue *_failQueue;
    int _retryCount;
    double _djProgress;
    double _songProgress;
    double _mvProgress;
    _Bool _hasSongDownloadComplete;
    _Bool _hasProgramDownloadComplete;
    _Bool _hasMVDownloadComplete;
    NMDownloadQualityMenu *_downloadQualityMenu;
    NSRunLoop *_currentRunLoop;
    _Bool _hasNewDownloadMV;
    _Bool _hasNewDownloadDJProgram;
    _Bool _displayedQualityMenuForDownloadOnce;
    unsigned long long _downloadingSongType;
    NMDownloadJob *_downloadJob;
}

+ (id)downloadFailReason:(long long)arg1;
+ (long long)getFailCodeWithUrlCode:(long long)arg1 fee:(long long)arg2 resourceObj:(id)arg3;
+ (void)performBlockOnDownloadThread:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;
+ (void)executeBlockOnManagerThread:(CDUnknownBlockType)arg1;
+ (struct CGSize)mvCoverSize;
+ (struct CGSize)artistAvatarSize;
+ (struct CGSize)maskCoverSize;
+ (struct CGSize)coverSize;
+ (id)defaultManager;
@property(retain, nonatomic) NMDownloadJob *downloadJob; // @synthesize downloadJob=_downloadJob;
@property(nonatomic) _Bool displayedQualityMenuForDownloadOnce; // @synthesize displayedQualityMenuForDownloadOnce=_displayedQualityMenuForDownloadOnce;
@property(nonatomic) _Bool hasNewDownloadDJProgram; // @synthesize hasNewDownloadDJProgram=_hasNewDownloadDJProgram;
@property(nonatomic) _Bool hasNewDownloadMV; // @synthesize hasNewDownloadMV=_hasNewDownloadMV;
@property(nonatomic) unsigned long long downloadingSongType; // @synthesize downloadingSongType=_downloadingSongType;
@property(nonatomic) _Bool isDownloading; // @synthesize isDownloading=_isDownloading;
- (void).cxx_destruct;
- (id)downloadArtistAvatarUrlForIpadV1Conversion:(id)arg1;
- (id)downloadArtistAvatarUrl:(id)arg1;
- (unsigned long long)getProgramState:(id)arg1;
- (unsigned long long)getSongState:(id)arg1;
- (_Bool)isDjProgramDownloading:(id)arg1;
- (_Bool)isMVDownloading:(id)arg1;
- (_Bool)isSongDownloading:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)performDownloadFinishInMainThread:(id)arg1;
- (void)downloadProgress:(id)arg1 progress:(double)arg2;
- (void)downloadExceedDiskSpace;
- (void)downloadJobComplete:(id)arg1;
- (void)downloadJobFail:(id)arg1;
- (id)getCurrentQeueuStatus;
- (void)_sendDownloadStatusInBackground:(id)arg1;
- (void)sendDownloadStatusInBackground:(id)arg1;
- (void)sendCurrentDownloadStatus:(id)arg1;
- (void)sendCurrentDownloadProgress:(id)arg1;
- (id)getNextNeedDownload;
- (void)executeDownloadJob;
- (void)loadAllDownloadCountStatistic:(CDUnknownBlockType)arg1;
- (void)loadAllUnDownloadResources:(CDUnknownBlockType)arg1;
- (void)loadAllDownloadingMVs:(CDUnknownBlockType)arg1;
- (void)loadAllDownloadingSongs:(CDUnknownBlockType)arg1;
- (void)loadAllDownloadedMVs:(CDUnknownBlockType)arg1;
- (void)loadAllDownloadMVs:(CDUnknownBlockType)arg1;
- (void)loadAllDownloadedDjPrograms:(CDUnknownBlockType)arg1;
- (void)loadAllDownloadedSongsAndDownloadingSongCount:(CDUnknownBlockType)arg1;
- (void)loadAllDownloadedSongs:(CDUnknownBlockType)arg1;
- (void)userHasDownloadSongs:(CDUnknownBlockType)arg1;
- (void)resetDownloadWorkStatus;
- (void)showAutoDownloadingIn2G3GAlertOnMainThread;
- (void)performAutoDownloadInMainThread;
- (void)proceedAutoDownloadJobSetupInMainThread:(id)arg1;
- (void)performAutoDownloadJobSetupInMainThread:(id)arg1;
- (void)resumeAutoDownload;
- (void)stopDownloadAll;
- (id)calcDownloadStatisticWithDetail:(_Bool)arg1 database:(id)arg2;
- (id)calcDownloadStatisticInFMDatabase:(id)arg1;
- (id)calcDownloadStatisticWithDetail:(_Bool)arg1;
- (id)calcDownloadStatistic;
- (void)cleanAllUnDownload;
- (void)continueDownloadOnDownloadThread;
- (void)_cancelDownloadWithResourceObjects:(id)arg1 songIds:(id)arg2 programIds:(id)arg3 mvIds:(id)arg4 notificationObject:(id)arg5 targetPlaylistId:(id)arg6 finishedCallbackOnMainThread:(CDUnknownBlockType)arg7;
- (void)cancelDownloadWithResourceObjects:(id)arg1 notificationObject:(id)arg2 targetPlaylistId:(id)arg3 finishedCallbackOnMainThread:(CDUnknownBlockType)arg4;
- (void)cancelDownloadWithResourceObjects:(id)arg1 targetPlaylistId:(id)arg2 finishedCallbackOnMainThread:(CDUnknownBlockType)arg3;
- (void)cancelDownloadWithResourceObjects:(id)arg1 finishedCallbackOnMainThread:(CDUnknownBlockType)arg2;
- (void)cancelDownloadWithResourceObjects:(id)arg1 notificationObject:(id)arg2;
- (void)cancelDownloadWithResourceObjects:(id)arg1;
- (void)cancelDownloadWithSongIds:(id)arg1;
- (unsigned long long)getTempDownloadMVFileSize:(id)arg1 mvQuality:(id)arg2;
- (void)cancelDownloadMV:(id)arg1;
- (void)cancelDownloadDJProgram:(id)arg1;
- (void)continueManualDownloadResources:(id)arg1;
- (void)togglePauseDownloadMV:(id)arg1 isPause:(_Bool)arg2;
- (void)_doProcessManualDownloadDjProgram:(id)arg1;
- (void)togglePauseDownloadProgram:(id)arg1 isPause:(_Bool)arg2;
- (void)_manualResumeDownloadMVAfterFeeCheck:(id)arg1;
- (void)_manualResumeDownloadSongAfterFeeCheck:(id)arg1;
- (void)togglePauseDownloadSong:(id)arg1 isPause:(_Bool)arg2;
- (void)manualResumeDownloadAllJobs;
- (void)pauseDownloadSong:(id)arg1;
- (void)pauseDownloadAllJobsForIphone;
- (void)pauseDownloadAllJobs;
- (void)performDownloadInMainThread:(id)arg1;
- (void)startDownloadMV:(id)arg1 targetMVQuality:(id)arg2;
- (void)_doStartDownloadDjPrograms:(id)arg1;
- (void)startDownloadDJProgramsWithinUrlInfo:(id)arg1;
- (void)startDownloadDJProgram:(id)arg1 djUrlInfo:(id)arg2;
- (void)afterAddedDownloadToDB:(id)arg1 type:(unsigned long long)arg2 isSuccess:(_Bool)arg3 hasPrivateCloudStored:(_Bool)arg4 turnOffNotify:(_Bool)arg5 withoutEnqueue:(_Bool)arg6;
- (void)_processAddSongsToDownloadQueue:(id)arg1 sourcePlaylistId:(id)arg2 hasPrivateCloudStored:(_Bool)arg3 turnOffNotify:(_Bool)arg4 withoutEnqueue:(_Bool)arg5;
- (void)_processAddProgramsToDownloadQueue:(id)arg1;
- (void)_processAddMVsToDownloadQueue:(id)arg1;
- (void)addToDownloadQueue:(id)arg1 sourcePlaylistId:(id)arg2 type:(unsigned long long)arg3 hasPrivateCloudStored:(_Bool)arg4 turnOffNotify:(_Bool)arg5 withoutEnqueue:(_Bool)arg6;
- (void)addToDownloadQueue:(id)arg1 sourcePlaylistId:(id)arg2 type:(unsigned long long)arg3 hasPrivateCloudStored:(_Bool)arg4;
- (void)showDownloadQualitySelectMenu:(id)arg1 sourcePlaylistId:(id)arg2 hasPrivateCloudStored:(_Bool)arg3;
- (void)startDownloadSongs:(id)arg1 sourcePlaylistId:(id)arg2 hasPrivateCloudStored:(_Bool)arg3 turnOffNotify:(_Bool)arg4 withoutEnqueue:(_Bool)arg5;
- (void)_resetDisplayQualityMenu;
- (void)startDownloadSongs:(id)arg1 sourcePlaylistId:(id)arg2 hasPrivateCloudStored:(_Bool)arg3;
- (void)startDownloadSongs:(id)arg1 sourcePlaylistId:(id)arg2 turnOffNotify:(_Bool)arg3 withoutEnqueue:(_Bool)arg4;
- (void)startDownloadSongs:(id)arg1 sourcePlaylistId:(id)arg2;
- (void)checkDownloadIn2G3GCapability:(CDUnknownBlockType)arg1 needAlertWhenEnable3G:(_Bool)arg2;
- (_Bool)inDownloadQueue:(id)arg1;
- (_Bool)needDownload:(id)arg1;
@property(readonly, nonatomic) _Bool hasDownloadingJob;
- (void)dealloc;
- (id)downlaodThread;
- (id)downloadRunLoop;
- (void)runDownloadManagerThread;
- (id)init;
- (void)djDownloadMenu:(id)arg1 downloadDjPrograms:(id)arg2;
@property(retain, nonatomic) NMDownloadQualityMenu *downloadQualityMenu;
@property(retain, nonatomic) NMDjDownloadMenu *djMenu;
- (void)_deleteDownloadWithConfirmMessage:(id)arg1 resource:(id)arg2;
- (void)deleteDownloadProgramWithConfirm:(id)arg1;
- (void)deleteDownloadSongWithConfirm:(id)arg1;
- (void)subscribeMVToDownload:(id)arg1 targetQuality:(id)arg2;
- (void)downloadMV:(id)arg1 targetQuality:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)downloadMVPreCheck:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)showAddToPlaylistView:(id)arg1 autoCreateNewPlaylist:(_Bool)arg2 defaultName:(id)arg3;
- (void)showAddToPlaylistView:(id)arg1;
- (void)downloadDjPrograms:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)parseOneSongFileDic:(id)arg1 forDjProgram:(id)arg2;
- (void)downloadDjProgram:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)_downloadBatchSongs:(id)arg1 isDownloadAll:(_Bool)arg2 collection:(id)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (void)_checkNonVipUserDownloadDigital:(id)arg1 continueBlock:(CDUnknownBlockType)arg2;
- (void)downloadBatchSongs:(id)arg1 isDownloadAll:(_Bool)arg2 collection:(id)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (void)singleDownloadSong:(id)arg1 collection:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)autoDownloadAddedSongIdsInPlaylist:(id)arg1 sourcePlaylistId:(id)arg2;
- (void)autoDownloadAddedSongsInPlaylist:(id)arg1 sourcePlaylistId:(id)arg2;
- (void)checkDownloadSongAfterCacheComplete:(id)arg1 targetBitrate:(long long)arg2;
- (void)downloadPlaySong:(id)arg1 collection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

