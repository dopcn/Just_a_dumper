//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class WOSDKCache;
@protocol WOSDKIPFlowDelegate;

@interface WOSDKIPFlow : NSObject
{
    _Bool _hasBeenInitSDK;
    id <WOSDKIPFlowDelegate> _delegate;
    WOSDKCache *_woCache;
    id _appRegisterExtra;
}

+ (id)formatUrls:(id)arg1 phone:(id)arg2 appid:(id)arg3 spid:(id)arg4;
+ (void)callBack:(CDUnknownBlockType)arg1 formatUrls:(id)arg2;
+ (void)requestH5UrlsComplete:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
+ (void)requestH5UrlsWithPhone:(id)arg1 appid:(id)arg2 spid:(id)arg3 callBack:(CDUnknownBlockType)arg4;
+ (void)requestH5Urls;
+ (_Bool)hasCacheUrlsWithPhone:(id)arg1 appid:(id)arg2 spid:(id)arg3 callBack:(CDUnknownBlockType)arg4;
+ (void)getFlowUrlsWithPhone:(id)arg1 appid:(id)arg2 spid:(id)arg3 callBack:(CDUnknownBlockType)arg4;
+ (void)refreshOrderStatus:(int)arg1 phoneNumber:(id)arg2 idKey:(id)arg3;
+ (void)reAuthWithOrderType:(long long)arg1 orderStatus:(long long)arg2 phoneNumber:(id)arg3 idKey:(id)arg4 appExtra:(id)arg5;
+ (id)shareInstace;
+ (void)registerWithCpId:(id)arg1 appId:(id)arg2 appKey:(id)arg3 appExtra:(id)arg4 delegate:(id)arg5;
+ (void)clearCache;
+ (void)setTestModel:(_Bool)arg1;
+ (void)setLogEnabled:(_Bool)arg1;
+ (id)sdkVersion;
@property(retain, nonatomic) id appRegisterExtra; // @synthesize appRegisterExtra=_appRegisterExtra;
@property(nonatomic) _Bool hasBeenInitSDK; // @synthesize hasBeenInitSDK=_hasBeenInitSDK;
@property(retain, nonatomic) WOSDKCache *woCache; // @synthesize woCache=_woCache;
@property(nonatomic) __weak id <WOSDKIPFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendAuthFailed:(id)arg1 appExtra:(id)arg2;
- (void)sendAuthSuccess:(id)arg1;
- (void)sendAuthDelegateWithStatus:(_Bool)arg1 errorCode:(int)arg2 appExtra:(id)arg3;
- (void)checkAuthentication:(id)arg1;
- (void)checkOrderStatusFromNetwork:(id)arg1;
- (void)getPhoneNumberFromBigData:(id)arg1;
- (void)checkUserOrderStatus:(id)arg1;
- (void)checkUserOrderStatusAndReloadH5Url:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)clearCache;

@end

