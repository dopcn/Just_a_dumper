//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CMObject.h"

@class NSDate, NSMutableArray, NSString, PAApiContext, SaveLoginDataModel;

@interface DLUserManagement : CMObject
{
    _Bool notFirstLoginApp;
    _Bool _isRenewUserTokening;
    NSString *_channelType;
    PAApiContext *_accountContext;
    NSMutableArray *_queueArr;
    SaveLoginDataModel *_saveLoginData;
    NSDate *_lastRenewUserTokenDate;
}

+ (id)sharedInstance;
+ (id)alloc;
@property(retain, nonatomic) NSDate *lastRenewUserTokenDate; // @synthesize lastRenewUserTokenDate=_lastRenewUserTokenDate;
@property(retain, nonatomic) SaveLoginDataModel *saveLoginData; // @synthesize saveLoginData=_saveLoginData;
@property(copy, nonatomic) NSMutableArray *queueArr; // @synthesize queueArr=_queueArr;
@property(nonatomic) _Bool isRenewUserTokening; // @synthesize isRenewUserTokening=_isRenewUserTokening;
@property(retain, nonatomic) PAApiContext *accountContext; // @synthesize accountContext=_accountContext;
@property(copy, nonatomic) NSString *channelType; // @synthesize channelType=_channelType;
- (void).cxx_destruct;
- (void)resumeRequest;
- (void)vcMsgCenterProcess:(id)arg1;
- (id)deviceInfo;
- (void)registerDevice;
@property(readonly, copy, nonatomic) NSString *webToken;
- (void)judgeNeedToRegisterDevice;
- (void)getWebTokenWithNewMethod;
- (void)renewUserTokenAndWebTokenWithError:(id *)arg1;
- (id)loginNavigationControllerForWelcome;
- (void)login;
- (void)deleteAllCookie;
- (void)removeLocalInfo;
- (void)logout;
- (_Bool)isLogin;
- (void)readLoginAndDeviceData;
- (void)saveLoginAndDeviceData;
- (void)removeALLKeycainData;
- (void)removeLocalUserData;
- (void)saveDeviceData:(id)arg1 certificate:(id)arg2;
- (void)saveUserData:(id)arg1 webUserToken:(id)arg2 expire:(long long)arg3 uid:(long long)arg4;
- (id)dataFilePath:(id)arg1;
- (void)initialize;
- (id)init;

@end

