//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SNADBasicUtil : NSObject
{
}

+ (id)deviceVersion;
+ (id)openTrackParams;
+ (id)getCurrentApplistItem;
+ (id)getUrlStringWithHost:(id)arg1 andParams:(id)arg2;
+ (_Bool)urlPath:(id)arg1 shouldSkipBackup:(_Bool)arg2;
+ (id)extraParamsForTv;
+ (id)extraParamsForNewsV2;
+ (id)extraParamsForNews;
+ (id)hexStringFromString:(id)arg1;
+ (id)stringFromHexString:(id)arg1;
+ (id)fetchSSIDInfo;
+ (void)outerIPaddress;
+ (id)IPaddress;
+ (id)macaddress;
+ (id)openUdid;
+ (id)idfv;
+ (id)idfa_only;
+ (id)idfa;
+ (id)runningProcesses;
+ (id)getTruePathExtension:(id)arg1;
+ (void)removeAllFilesWithPath:(id)arg1;
+ (_Bool)leftFilesCount:(int)arg1 andPath:(id)arg2;
+ (_Bool)leftFilesCount:(int)arg1 andPath:(id)arg2 andFileTypes:(id)arg3;
+ (id)getDeviceModelAndVersion;
+ (id)decodeBase64Data:(id)arg1;
+ (id)encodeBase64Data:(id)arg1;
+ (id)decodeBase64String:(id)arg1;
+ (id)encodeBase64String:(id)arg1;
+ (void)setTurn:(id)arg1 byItemSpaceID:(id)arg2;
+ (id)getTurnByItemSpaceID:(id)arg1;
+ (id)getMicroTimeStamp;
+ (id)getTimeStamp;
+ (id)getAssetsURLWithHtmlString:(id)arg1;
+ (id)getNetworkInfo;
+ (id)getCarrierName;
+ (_Bool)canIsConnectToInternet;
+ (_Bool)isConnectToInternetForNews;
+ (_Bool)isConnectToInternetInWifi;
+ (_Bool)isConnectToInternet;
+ (long long)validateInfoCouldCallBack:(id)arg1;
+ (id)getConfigValueWithKey:(id)arg1;
+ (_Bool)getConfigBoolWithKey:(id)arg1;
+ (_Bool)saveConfig:(id)arg1 toFile:(id)arg2;
+ (id)loadConfigToFile:(id)arg1;
+ (id)initStadConfigFileWithAppName:(id)arg1;
+ (id)cachedKeyForKey:(id)arg1;
+ (float)timeFromString:(id)arg1;
+ (id)findNonePresentedRootViewController:(id)arg1;

@end

