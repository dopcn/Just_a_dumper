//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SVPDownloadManagerObserver-Protocol.h"
#import "SVPDownloadTaskDelegate-Protocol.h"

@class NSString;

@interface SVPDownloadDataManager_iPhone : NSObject <SVPDownloadManagerObserver, SVPDownloadTaskDelegate>
{
    _Bool _autoDeleteEnable;
    unsigned long long _autoDeleteSpaceSize;
}

+ (id)shareDownloadManager;
+ (void)deleteBarrage:(id)arg1;
+ (void)cacheBarrage:(id)arg1;
+ (void)deleteDownloadTask:(id)arg1;
+ (void)downloadTask:(id)arg1 completionHandle:(CDUnknownBlockType)arg2;
+ (void)downloadTask:(id)arg1;
+ (void)downloadWithVideoItem:(id)arg1 videoAlbum:(id)arg2 quality:(long long)arg3 completionHandle:(CDUnknownBlockType)arg4;
+ (void)downloadWithVideoItem:(id)arg1 videoAlbum:(id)arg2 quality:(long long)arg3;
+ (void)autoDownloadV2WithVideoItem:(id)arg1 videoAlbum:(id)arg2 quality:(long long)arg3 completionHandle:(CDUnknownBlockType)arg4;
+ (void)cancelTask:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)autoDownloadWithVideoItem:(id)arg1 videoAlbum:(id)arg2 quality:(long long)arg3 completionHandle:(CDUnknownBlockType)arg4;
+ (void)autoDownloadWithVideoItem:(id)arg1 videoAlbum:(id)arg2 quality:(long long)arg3;
+ (void)showDeleteTaskToast;
@property(nonatomic) unsigned long long autoDeleteSpaceSize; // @synthesize autoDeleteSpaceSize=_autoDeleteSpaceSize;
@property(nonatomic) _Bool autoDeleteEnable; // @synthesize autoDeleteEnable=_autoDeleteEnable;
- (void)updateAutoDeleteSpaceSize:(unsigned long long)arg1;
- (void)downloadTask:(id)arg1 didChangeState:(long long)arg2 newState:(long long)arg3;
- (void)downloadTask:(id)arg1 didUpdateDownloadedSize:(unsigned long long)arg2 totalSize:(unsigned long long)arg3 downloadProgress:(float)arg4 downloadingSpeed:(long long)arg5;
- (void)configAllDownloadTaskDelegate;
- (void)downloadManager:(id)arg1 didRemoveDownloadTasks:(id)arg2;
- (void)downloadManager:(id)arg1 didRemoveDownloadTask:(id)arg2;
- (void)downloadManager:(id)arg1 didAddDownloadTasks:(id)arg2;
- (void)downloadManager:(id)arg1 didAddDownloadTask:(id)arg2;
- (unsigned long long)getTotalDownloadTaskSize;
- (id)sortArray:(id)arg1 ByKey:(id)arg2 inAscending:(_Bool)arg3;
- (id)getCompletedDownloadTasksByCategoryID:(long long)arg1 ascending:(_Bool)arg2;
- (id)getAllCompletedTasksClassifiedByAlbum;
- (id)getIncompletedDownloadTaskByVideoID:(long long)arg1 savePhotoAlbum:(_Bool)arg2;
- (id)getCompletedDownloadTaskByVideoID:(long long)arg1 savePhotoAlbum:(_Bool)arg2;
- (id)getDownloadTaskByVideoID:(long long)arg1 savePhotoAlbum:(_Bool)arg2;
- (id)getIncompletedDownloadTaskByVideoID:(long long)arg1;
- (id)getCompletedDownloadTaskByVideoID:(long long)arg1;
- (id)getDownloadTaskByVideoID:(long long)arg1;
- (_Bool)hasTask:(id)arg1;
- (void)asyncCountUnWatchedVideoCount:(CDUnknownBlockType)arg1;
- (_Bool)isDownloadingTasksOutSpeed:(unsigned long long *)arg1 outCount:(unsigned long long *)arg2;
- (_Bool)isDownloadingTasksOutSpeed:(unsigned long long *)arg1;
- (_Bool)isDownloadingTasks;
- (id)getAllIncompletedDownloadTasks;
- (id)getAllCompletedDownloadTasks;
- (id)init;
- (void)postNotification;
- (void)playRecordDidSaved:(id)arg1;
- (void)registerGetWatchStateNotification;
- (void)removeDownloadTasksAndPlayRecords:(id)arg1;
- (void)removeDownloadTaskAndPlayRecord:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

