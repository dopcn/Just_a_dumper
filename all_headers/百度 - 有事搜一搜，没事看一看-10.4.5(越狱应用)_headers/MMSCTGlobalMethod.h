//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MMSCTGlobalMethod : NSObject
{
}

+ (long long)getCurrentTheme;
+ (void)shareWithTitle:(id)arg1 description:(id)arg2 thumbImage:(id)arg3 URL:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (_Bool)isiPhoneX;
+ (id)currentTimeIntervalString;
+ (id)valueForDictionary:(id)arg1 keyPath:(id)arg2 class:(Class)arg3;
+ (void)enterSelectedAlbumDetailWithAlbum:(id)arg1;
+ (void)enterSelectedAlbumDetailWithAlbumWithoutCheck:(id)arg1;
+ (void)enterSelectedAlbumDetailWithAlbumID:(id)arg1 successHandler:(CDUnknownBlockType)arg2;
+ (void)verifyAudioPurchasedWithAlbumId:(id)arg1 audioId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)getBaiduHomeFeedAuidoPlayUrl:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
+ (void)getExternalAuidoInfo:(id)arg1 albumId:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
+ (void)getAlbumInfo:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
+ (id)updateCurrentAsset:(id)arg1 severInfo:(id)arg2;
+ (id)feedType:(id)arg1;
+ (id)feedAudios:(id)arg1;
+ (id)open_type:(id)arg1;
+ (id)args:(id)arg1;
+ (id)paramsInfo:(id)arg1;
+ (id)decryptHavePaidAudioPlayUrl:(id)arg1;
+ (id)decodeWithChiperBase64:(id)arg1;
+ (id)encodeStringWithChiperBase64:(id)arg1;
+ (id)audioFileData:(id)arg1 withEncodeType:(id)arg2;
+ (id)decodeAudioFileData:(id)arg1;
+ (id)encodeAudioFileData:(id)arg1;
+ (_Bool)isJailBreaked;
+ (void)showRechargeAlertWithType:(unsigned long long)arg1;
+ (id)stringValueForKey:(id)arg1 inDictionary:(id)arg2;
+ (id)logPrimaryKeyForController:(id)arg1;
+ (id)logKeyForController:(id)arg1;
+ (_Bool)isAllowDownloadWhen3GModel;
+ (void)batchDownloadNetworkTipWithHandler:(CDUnknownBlockType)arg1;
+ (void)allowAndDownloadNetworkTipWithHandler:(CDUnknownBlockType)arg1;
+ (id)formatStringWithBytes:(long long)arg1;
+ (void)deleteAuidiFileWithName:(id)arg1;
+ (id)absoluteAudioPathWithName:(id)arg1;
+ (id)filenameWithAlbumId:(id)arg1 audioId:(id)arg2 downloadUrl:(id)arg3;
+ (id)filenameWithUrl:(id)arg1;
+ (id)assetIdWithAsset:(id)arg1;
+ (id)audioDownloadRootPath;
+ (id)encodeStringWithJsonArray:(id)arg1;
+ (id)encodeStringWithJson:(id)arg1;
+ (id)jsonWithEncodeString:(id)arg1;
+ (id)userAgentForChangTing;
+ (_Bool)isNetworkReachableWithPrompt:(_Bool)arg1;
+ (void)showHUDWithString:(id)arg1;
+ (id)uiColorFromHexString:(id)arg1;

@end

