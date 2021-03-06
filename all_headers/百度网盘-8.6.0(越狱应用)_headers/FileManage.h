//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseManage.h"

@class BDPanImageFileImportHandler, NSLock, NSMutableDictionary, NSOperationQueue;

@interface FileManage : BaseManage
{
    _Bool _diffExpired;
    NSMutableDictionary *_thumbnailImageOperationDic;
    BDPanImageFileImportHandler *_imageImportHandler;
    long long _reportUserActiveRetryCount;
    NSOperationQueue *_localFullScreenImageOperationQueue;
    NSMutableDictionary *_localFullScreenImageOperationDict;
    NSLock *_localFullScreenImageDictLock;
}

+ (id)getRootShareDirWithFileMeta:(id)arg1;
+ (void)initialize;
+ (id)sharedFileManage;
@property(retain, nonatomic) NSLock *localFullScreenImageDictLock; // @synthesize localFullScreenImageDictLock=_localFullScreenImageDictLock;
@property(retain, nonatomic) NSMutableDictionary *localFullScreenImageOperationDict; // @synthesize localFullScreenImageOperationDict=_localFullScreenImageOperationDict;
@property(retain, nonatomic) NSOperationQueue *localFullScreenImageOperationQueue; // @synthesize localFullScreenImageOperationQueue=_localFullScreenImageOperationQueue;
@property _Bool diffExpired; // @synthesize diffExpired=_diffExpired;
@property(nonatomic) long long reportUserActiveRetryCount; // @synthesize reportUserActiveRetryCount=_reportUserActiveRetryCount;
@property(retain, nonatomic) BDPanImageFileImportHandler *imageImportHandler; // @synthesize imageImportHandler=_imageImportHandler;
@property(retain, nonatomic) NSMutableDictionary *thumbnailImageOperationDic; // @synthesize thumbnailImageOperationDic=_thumbnailImageOperationDic;
- (void).cxx_destruct;
- (_Bool)isAPathFolderAllImageReferentialFiles:(id)arg1;
- (void)getBusinessSwitchWithOption:(int)arg1 callback:(id)arg2;
- (void)setupBusinessSwitch:(_Bool)arg1 option:(int)arg2 callback:(id)arg3;
- (void)updateSubFileMetaStatusToNoShareWithParentFileMeta:(id)arg1;
- (long long)getAttributeDirectoryCountWithPath:(id)arg1;
- (long long)getAttributeDirectoryCount;
- (_Bool)haveShareDirWithModel:(id)arg1;
- (unsigned long long)setShareDirWithFileMeta:(id)arg1 relation:(id)arg2 inviteLink:(_Bool)arg3 overlay:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)containsDirectoryWithAttributeTag:(long long)arg1;
- (unsigned long long)updateAttributeTag:(long long)arg1 forDirectories:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkSavePathDirExsistWithBlock:(CDUnknownBlockType)arg1 path:(id)arg2 topCallBack:(id)arg3;
- (void)saveFilePageListResult:(id)arg1;
- (id)downloadImageModels:(id)arg1;
- (unsigned long long)getFileDirSizeList:(id)arg1 callback:(id)arg2;
- (unsigned long long)conflictNewCopyPathFileList:(id)arg1 newParentPath:(id)arg2 callback:(id)arg3;
- (unsigned long long)copyPathFileList:(id)arg1 newParentPath:(id)arg2 callback:(id)arg3;
- (unsigned long long)movePathFileList:(id)arg1 newParentPath:(id)arg2 callback:(id)arg3;
- (unsigned long long)renameFileList:(id)arg1 newNameList:(id)arg2 callback:(id)arg3;
- (unsigned long long)deleteFileList:(id)arg1 callback:(id)arg2;
- (unsigned long long)deleteFile:(id)arg1 callback:(id)arg2;
- (void)saveImageToLocalSpace:(id)arg1;
- (unsigned long long)downZipFile:(id)arg1 with:(id)arg2;
- (id)convertRequestFileMetas:(id)arg1;
- (void)deleteLocaFileWithCacheFileMeta:(id)arg1;
- (void)removeFavoirteWithFileMeta:(id)arg1;
- (void)addFavoriteWithFileMeta:(id)arg1;
- (void)addFavoriteWithFileMeta:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addFavoriteWithFileMetaList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)checkFileDiffComplete:(id)arg1;
- (_Bool)getPreViewFile:(id)arg1 localPath:(id)arg2;
- (void)setFileIsCache:(id)arg1;
- (id)getCacheFileListWithCategory:(int)arg1 page:(int)arg2 count:(int)arg3;
- (int)getFilesCountOfCategory:(int)arg1;
- (int)getFilesCountOfServerPath:(id)arg1;
- (int)getRecentFileCount;
- (id)getRecentFileListWithoutDirOrderByModifyTimeSkipLeadingItems:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (id)getCacheFileListWithCategory:(long long)arg1 SkipLeadingItems:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (id)getCacheFileListWithServerPath:(id)arg1 folderOnly:(_Bool)arg2;
- (id)getCacheFileListWithServerPath:(id)arg1 SkipLeadingItems:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (id)getFavoritedList;
- (id)getCachedList;
- (id)getCacheFileMetasWithFids:(id)arg1;
- (id)getCacheFileMetasWithServerFullPaths:(id)arg1;
- (id)getCacheFileMetaWithServerFullPath:(id)arg1;
- (id)getCacheFileMetaWithBlockList:(id)arg1;
- (id)getCacheFileMetaWithFid:(unsigned long long)arg1;
- (int)getCountWithServerPath:(id)arg1;
- (int)getCountWithCategory:(long long)arg1;
- (id)getListWithFids:(id)arg1;
- (id)getListWithCategory:(long long)arg1 SkipLeadingItems:(unsigned long long)arg2 Count:(unsigned long long)arg3;
- (id)getListWithCategory:(int)arg1 page:(int)arg2 count:(int)arg3;
- (id)getFileDicByServerPath:(id)arg1;
- (id)getListDicWithCategory:(int)arg1;
- (id)getListWithCategory:(int)arg1;
- (int)getRecentFileListCount;
- (id)getRecentFileListSkipItems:(int)arg1 Count:(int)arg2;
- (id)getListWithCategoryArray:(id)arg1 filePath:(id)arg2 orderField:(long long)arg3 orderType:(long long)arg4 skipLeadingItems:(unsigned long long)arg5 count:(unsigned long long)arg6;
- (id)getListWithCategory:(long long)arg1 filePath:(id)arg2 orderField:(long long)arg3 orderType:(long long)arg4 SkipLeadingItems:(unsigned long long)arg5 count:(unsigned long long)arg6;
- (id)getListWithServerPath:(id)arg1 folderOnly:(_Bool)arg2 SkipLeadingItems:(unsigned long long)arg3 Count:(unsigned long long)arg4 orderField:(long long)arg5 orderType:(long long)arg6;
- (id)getListWithServerPath:(id)arg1 SkipLeadingItems:(int)arg2 Count:(int)arg3;
- (id)getListWithServerPath:(id)arg1 orderField:(int)arg2 orderType:(int)arg3;
- (id)getListWithServerPath:(id)arg1;
- (id)getListWithServerPath:(id)arg1 folderOnly:(_Bool)arg2;
- (id)getListWithServerPath:(id)arg1 category:(int)arg2 orderField:(int)arg3 orderType:(int)arg4 page:(int)arg5 count:(int)arg6;
- (id)getListWithServerPath:(id)arg1 category:(int)arg2 includeingSubfolder:(_Bool)arg3 orderField:(int)arg4 orderType:(int)arg5 page:(int)arg6 count:(int)arg7;
- (id)getListWithServerPath:(id)arg1 category:(int)arg2 sharetype:(int)arg3 fids:(id)arg4 orderField:(int)arg5 orderType:(int)arg6;
- (unsigned long long)channelSwitchWithBusinessPosition:(int)arg1 businessSwitch:(int)arg2 callback:(id)arg3;
- (unsigned long long)reportUserDeActive:(id)arg1 withActiveReason:(id)arg2;
- (unsigned long long)reportUserActive:(id)arg1 withActiveReason:(id)arg2 isFetchGlobalUserConfig:(_Bool)arg3;
- (void)updateUserSignInfo:(id)arg1;
- (long long)createDirectory:(id)arg1 size:(unsigned long long)arg2 blockList:(id)arg3 allMD5:(id)arg4 isdir:(_Bool)arg5 renameType:(long long)arg6 callback:(id)arg7;
- (unsigned long long)getStreamMediaFileAttribute:(id)arg1 callback:(id)arg2;
- (unsigned long long)getMediaFileAttribute:(id)arg1 callback:(id)arg2;
- (unsigned long long)getStreamFileAttribute:(id)arg1 callback:(id)arg2;
- (unsigned long long)getFileAttribute:(id)arg1 callback:(id)arg2;
- (void)cancelThumbnailRequest:(id)arg1 isFullScreen:(_Bool)arg2;
- (void)cancelAllThumbnailRequest;
- (void)addLocalFileThumbOperation:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)addLocalFullScreenThumbOperation:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)getFileFullScreenWithFileMeta:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)addLoadFullScreenImageDurationLog:(double)arg1;
- (id)getFileThumbnailWithFileMeta:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (_Bool)isThumbnailFileExsit:(id)arg1;
- (unsigned long long)transferFileShareLinkWithShareID:(id)arg1 uk:(id)arg2 seKey:(id)arg3 fileIdlist:(id)arg4 path:(id)arg5 callback:(id)arg6;
- (unsigned long long)transferFileShareLinkWithShareID:(id)arg1 uk:(id)arg2 seKey:(id)arg3 fileList:(id)arg4 path:(id)arg5 callback:(id)arg6;
- (unsigned long long)getFileShareLinkPlayStreamUrlWithUk:(id)arg1 type:(id)arg2 fullPath:(id)arg3 callback:(id)arg4;
- (unsigned long long)getFileShareLinkListWithShareID:(id)arg1 uk:(id)arg2 fid:(id)arg3 dir:(id)arg4 seKey:(id)arg5 page:(long long)arg6 callback:(id)arg7;
- (unsigned long long)getFileShareLinkListWithShareLink:(id)arg1 dir:(id)arg2 page:(int)arg3 callback:(id)arg4;
- (unsigned long long)increaseShareCountWithUK:(id)arg1 shareID:(id)arg2 type:(int)arg3 callback:(id)arg4;
- (unsigned long long)getFileShareLinkMsgCount:(int)arg1 callback:(id)arg2;
- (long long)setCardShareLinkWithFileList:(id)arg1 channel:(int)arg2 password:(id)arg3 period:(int)arg4 callback:(id)arg5;
- (unsigned long long)setFileShareLinkWithFileList:(id)arg1 channel:(int)arg2 password:(id)arg3 weiboList:(id)arg4 emailList:(id)arg5 phoneList:(id)arg6 weiboContent:(id)arg7 period:(int)arg8 callback:(id)arg9;
- (void)deleteCacheFileModelHander:(id)arg1;
- (unsigned long long)getShareFileListWithDir:(id)arg1 callback:(id)arg2;
- (unsigned long long)getFileListWithCategory:(long long)arg1 page:(unsigned long long)arg2 count:(unsigned long long)arg3 callback:(id)arg4;
- (unsigned long long)getFileListWithCategory:(int)arg1 callback:(id)arg2;
- (unsigned long long)searchFileListWithDir:(id)arg1 searchKey:(id)arg2 callback:(id)arg3;
- (_Bool)isDiffing;
- (void)getFileDiff;
- (void)markDiffExpired:(_Bool)arg1;
- (_Bool)isDiffExpired;
- (unsigned long long)getFileListWithDir:(id)arg1 page:(unsigned long long)arg2 count:(unsigned long long)arg3 needSave:(_Bool)arg4 orderFieldType:(int)arg5 orderType:(int)arg6 callback:(id)arg7;
- (void)cancelRefreshPageListRequest:(id)arg1;
- (void)refreshFileListWithDir:(id)arg1 onePagecallback:(id)arg2;
- (unsigned long long)getFileListWithDir:(id)arg1 orderFieldType:(int)arg2 orderType:(int)arg3 folderOnly:(_Bool)arg4 start:(unsigned long long)arg5 limit:(unsigned long long)arg6 callback:(id)arg7;
- (unsigned long long)getFileListWithDir:(id)arg1 recursion:(_Bool)arg2 showDelete:(_Bool)arg3 orderFieldType:(int)arg4 orderType:(int)arg5 folderOnly:(_Bool)arg6 callback:(id)arg7;
- (unsigned long long)getFileListWithDir:(id)arg1 isCache:(_Bool)arg2 callback:(id)arg3;
- (void)getListDone:(id)arg1 callback:(id)arg2 tag:(unsigned long long)arg3;
- (void)logout:(id)arg1;
- (void)addNotification;
- (id)init;

@end

