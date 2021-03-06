//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MCScore : NSObject
{
}

+ (void)fetchScoreStoreDuibaAlertContent;
+ (id)scoreStoreDuibaAlertContent;
+ (id)scoreStoreDuibaAlertTitle;
+ (void)fetchScoreStoreUrl;
+ (id)scoreStoreUrl;
+ (void)clearOfflineInfo;
+ (void)recoredOfflineScoreChange:(unsigned long long)arg1;
+ (void)completedOfflineMission:(unsigned long long)arg1;
+ (id)offlineDict;
+ (void)requestUploadOfflineMissionWithCompletion:(CDUnknownBlockType)arg1;
+ (void)scoreUserLogout;
+ (void)scoreUserLogin;
+ (void)saveScore:(long long)arg1;
+ (long long)readScore;
+ (void)removeUserId;
+ (void)saveUserId:(id)arg1;
+ (id)getTimestampStr;
+ (id)getUserId;
+ (id)getPrivateParameters;
+ (id)getPublicParameters;
+ (id)getUploadOfflineMissionAPIParametersWithDict:(id)arg1;
+ (id)getMissionProcessAPIParameters;
+ (id)getMissionStatusAPIParameters;
+ (id)getPayResultAPIParametersWith:(id)arg1 andIsSuccess:(_Bool)arg2 andErrorMsg:(id)arg3 andPayType:(unsigned long long)arg4;
+ (id)getMultiOfflineMissionAPIParametersWith:(id)arg1;
+ (id)getMissionWithMsgAPIParametersWith:(unsigned long long)arg1;
+ (id)getMissionAPIParametersWith:(unsigned long long)arg1;
+ (id)getScoreAPIParameters;
+ (id)getStringWithParameters:(id)arg1 ignoreEmpty:(_Bool)arg2;
+ (id)setRequestHeader:(id)arg1 withURLParams:(id)arg2 publicParams:(id)arg3 privateParams:(id)arg4;
+ (id)getUploadOfflineMissionAPIURLRequestWithDict:(id)arg1;
+ (id)getMissionProcessAPIURLRequest;
+ (id)getMissionStatusAPIURLRequest;
+ (id)getPayResultAPIRequestWith:(id)arg1 andIsSuccess:(_Bool)arg2 andErrorMsg:(id)arg3 payType:(unsigned long long)arg4;
+ (id)getSignStatusAPIURLRequest;
+ (id)getMultiOfflineMissionAPIURLRequestWith:(id)arg1;
+ (id)getMissionWithMsgAPIURLRequestWith:(unsigned long long)arg1;
+ (id)getMissionAPIURLRequestWith:(unsigned long long)arg1;
+ (id)getScoreAPIURLRequest;
+ (id)getUploadOfflineMissionURLStringWithParameters:(id)arg1;
+ (id)getMissionProcessURLStringWithParameters:(id)arg1;
+ (id)getMissionStauteURLStringWithParameters:(id)arg1;
+ (id)getPayResultURLStringWithParameters:(id)arg1;
+ (id)getSignStatusURLStringWithParameters:(id)arg1;
+ (id)getMultiOfflineMissionAPIURLStringWithParameters:(id)arg1;
+ (id)getMissionWithMsgAPIURLStringWithParameters:(id)arg1;
+ (id)getMissionAPIURLStringWithParameters:(id)arg1;
+ (id)getScoreAPIURLStringWithParameters:(id)arg1;
+ (void)requestMissionProcess;
+ (void)requestMissionStatus;
+ (void)requestPayResultWith:(id)arg1 andIsSuccess:(_Bool)arg2 andErrorMsg:(id)arg3 payType:(unsigned long long)arg4;
+ (void)requestSignStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)requestSignStatus;
+ (void)requestSignStatusIfNeeded:(id)arg1;
+ (void)completeMultiOfflineMissionReward:(CDUnknownBlockType)arg1;
+ (void)completeMissionReward:(unsigned long long)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)receiveMissionReward:(unsigned long long)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)completedMission:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)completedMission:(unsigned long long)arg1;
+ (void)requestScore;
+ (void)requestNetDateKey;
+ (id)scoreCenterUrl;
+ (id)checkLocalCache;
+ (id)checkLocalSignInfo;
+ (void)resetSignInfo;
+ (_Bool)checkNeedUpdateSignInfo;
+ (void)startUpExt;
+ (void)startUp;

@end

