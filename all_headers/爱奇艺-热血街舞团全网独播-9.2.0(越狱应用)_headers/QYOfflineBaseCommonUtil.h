//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QYOfflineBaseCommonUtil : NSObject
{
}

+ (void)reGetRedDotCountWithType:(long long)arg1;
+ (void)getRedDotCountWithType:(long long)arg1;
+ (void)markTasksAllRedhotTab;
+ (void)markTasksNewIconByTvId:(id)arg1;
+ (void)markTasksAllRedhotFolder;
+ (void)markTasksRedhotWithTasks:(id)arg1;
+ (void)markTasksAllRedhot;
+ (void)playOfflineVideoChangeIsNew:(id)arg1 albumId:(id)arg2;
+ (void)setRedDotTaskQueue:(id)arg1;
+ (_Bool)getIsHasAutoDLTask;
+ (void)startSilentAutoDLCompletion:(CDUnknownBlockType)arg1;
+ (void)setIsAutoDL:(_Bool)arg1 withState:(long long)arg2 withAlbumId:(id)arg3;
+ (_Bool)getIsAutoDLWithState:(long long)arg1 withAlbumId:(id)arg2;
+ (void)setIsShowAutoDLAlertView:(_Bool)arg1;
+ (_Bool)getIsShowAutoDLAlertView;
+ (void)startAutoDL;
+ (void)startVIPTryPara;
+ (long long)getCurrentTryParaModelType;
+ (void)endVipTryModel;
+ (void)startVipTryModel;
+ (long long)getCurrentTryModelTime;
+ (long long)getCurrentTryModelType;
+ (void)reSetTryModel;
+ (long long)getOfflineADPStatusBarStyle;
+ (id)transformTaskWithData:(id)arg1 taskDic:(id)arg2;
+ (id)getCDNKeyFromFileID:(id)arg1;
+ (void)stopCDNAuth;
+ (void)startCDNAuth;
+ (id)getDefaultResType;
+ (id)getDefaultRateList;
+ (float)getPerSecondRateSize:(id)arg1;
+ (id)getDefaultDownloadResList:(id)arg1;
+ (void)setDefaultDownloadResType:(id)arg1;
+ (id)transformResListWithResArray:(id)arg1;
+ (id)getResDubiTitleNameWithSportVideoType:(long long)arg1;
+ (id)getResDubiDetailWithStyle:(long long)arg1 resType:(id)arg2 dubiStatus:(_Bool)arg3;
+ (id)checkValidResArray:(id)arg1;
+ (long long)getRandomSecond:(long long)arg1;
+ (id)sortOfflineGroupDatas:(id)arg1;
+ (id)getDeviceFingerPrint;
+ (id)getFreeFlowCommonHeader;
+ (id)JSONRepresentationWithDic:(id)arg1;
+ (id)getHttpDownloadInfoIface2;
+ (id)getHttpOfflineCacheVideo;
+ (id)getQYGlobalQueue;
+ (void)flowerPingbackWithDic:(id)arg1;
+ (id)getCubeVersion;
+ (id)getSettingValueByKey:(id)arg1;
+ (long long)getCurrentProjectType;
+ (void)postDownloadFinishNotificationWithTitle:(id)arg1;
+ (id)playRes;
+ (id)awk_F:(id)arg1 segment:(long long)arg2 context:(id)arg3;
+ (id)platfromCodeForPayment;
+ (id)decodeKey:(id)arg1;
+ (id)transformMD5WithStr:(id)arg1;
+ (id)getCubeTaskPlatformIdWithTvid:(id)arg1;
+ (id)getCubeURLTaskPlatformIdWithTvid:(id)arg1;
+ (id)getBossPlatformId;
+ (id)secondPlatformCode;
+ (id)firstPlatformCode;
+ (id)firstProductCode;
+ (_Bool)getIsUseURLSession;
+ (id)getLastVipLoginTime;
+ (id)getQYID;
+ (id)getAgentType;
+ (_Bool)isTaiwanLanguage;
+ (id)subCookie;
+ (id)cookie;
+ (id)platformId;
+ (id)qypid;
+ (id)APIVer;
+ (_Bool)isPlayKernel;
+ (_Bool)isCartoonClient;
+ (id)getOfflineAlbumaIdWithData:(id)arg1;
+ (id)getOfflineTvIdWithData:(id)arg1;
+ (long long)userStatusWithSubType:(int)arg1;
+ (id)getUIDWithSubType:(int)arg1;
+ (_Bool)isLogin;
+ (id)getDownloadErrorMsg;
+ (id)getCurrentuserLevel;
+ (long long)userVipType;
+ (long long)userStatus;
+ (id)getSubUID;
+ (id)getUID;
+ (_Bool)isStopVip;
+ (_Bool)isSubTennisVip;
+ (_Bool)isSubVip;
+ (_Bool)isTennisVip;
+ (_Bool)isHasVIP;
+ (_Bool)isVIP;
+ (_Bool)isTaiwanIP;
+ (struct CGSize)getSizeWithAngle:(long long)arg1 iconType:(id)arg2;
+ (id)getUrlWithAngle:(long long)arg1 iconType:(id)arg2;
+ (void)setDubiSwitchValue:(_Bool)arg1;
+ (int)manClickDubiSwitch:(int)arg1;
+ (long long)getMaxDownloadCount;
+ (long long)getUndoneDownloadCount;
+ (_Bool)getUnWiFiSwitchStatus;
+ (void)setUnWiFiSwitchWithStatus:(_Bool)arg1;
+ (_Bool)isReachableViaWiFi;
+ (_Bool)isNotReachable;
+ (void)recordFlowOrderAlertView;
+ (void)checkLeftQuota;
+ (_Bool)isCanDownloadInWwanWithStatus:(long long)arg1;
+ (_Bool)isCanDownloadInAll;
+ (_Bool)isInWwan;
+ (id)getDownloadInfoLog;
+ (void)setDownloadInfoLog:(id)arg1;
+ (_Bool)getIsCanFlowDownload;
+ (void)setIsCanFlowDownload:(_Bool)arg1;
+ (id)getFreeFlowOrderUrl;
+ (_Bool)getIsStopDownLoad;
+ (_Bool)getIsFreeFlowUsedUp;
+ (id)getFreeFlowContentWithName:(id)arg1;
+ (long long)getCurrentNetworkType;
+ (_Bool)isOpenParallelDownload;
+ (long long)getParallelDownloadNum;
+ (void)setParallelDownloadNum:(long long)arg1;
+ (id)getVideoSizebWithMSize:(double)arg1;
+ (id)getVideoSizeWithMSize:(double)arg1;
+ (id)getDiskFreeSizeb;
+ (id)getDiskFreeSize;
+ (_Bool)isLess20MDiskSpace;
+ (_Bool)isLess200MDiskSpace;
+ (_Bool)isLess100MDiskSpace;
+ (id)getCubeUrlModelWithDownloadUrls:(id)arg1;
+ (long long)getLocalFileSize:(id)arg1;
+ (_Bool)deleteDownloadTask:(id)arg1;
+ (id)getUnDoneLocalPathWithType:(long long)arg1 WithTvId:(id)arg2 WithP2pFileName:(id)arg3;
+ (id)getDoneLocalPathWithType:(long long)arg1 WithTvId:(id)arg2 WithP2pFileName:(id)arg3;
+ (id)getLocalDirPathWithType:(long long)arg1 WithTvId:(id)arg2;
+ (id)getStarHeaderImageLocalPathWithFileName:(id)arg1;
+ (void)manageVideoPreViewImageWithDownloadUrl:(id)arg1;
+ (id)getFirstPictureWithDownloadUrl:(id)arg1;
+ (id)getLocalTempPathWithDownloadUrl:(id)arg1;
+ (id)getLocalPathWithDownloadUrl:(id)arg1;
+ (id)getTwoOfflineADLocalPath;
+ (id)getADLocalFolderPath;
+ (id)getPreImageLocalPathWithTvId:(id)arg1;
+ (_Bool)isPumaCanPlayVideo:(id)arg1;
+ (unsigned long long)getFileSizeWithPath:(id)arg1;
+ (double)getResourceFileDiskSpaceWithPath:(id)arg1;
+ (id)getDirFileWithPath:(id)arg1;
+ (_Bool)delegateFileWithPath:(id)arg1;
+ (_Bool)existsFileAtPath:(id)arg1;
+ (_Bool)createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3;
+ (id)createFolderWithPath:(id)arg1;

@end

