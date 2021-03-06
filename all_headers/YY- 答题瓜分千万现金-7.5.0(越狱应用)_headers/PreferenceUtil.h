//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PreferenceUtil : NSObject
{
}

+ (id)checkPrivilegeURL;
+ (id)publicAppEventReportURL;
+ (id)eventReportURL;
+ (id)authenticationURL;
+ (id)pmsHost;
+ (id)faultDetectedReportURL;
+ (id)checkWspxAvailableURL;
+ (id)realtimeTrafficURL;
+ (id)errorCodeReportURL;
+ (void)setPMSHost:(id)arg1;
+ (void)setMicroServerHost:(id)arg1;
+ (void)setDSHost:(id)arg1;
+ (void)setPhoneNumber:(id)arg1;
+ (id)phoneNumber;
+ (void)setPackageId:(long long)arg1;
+ (long long)packageId;
+ (long long)getOrderType;
+ (void)setOrderType:(id)arg1;
+ (long long)activateIllegalFlag;
+ (void)setActivateIllegalFlag:(long long)arg1;
+ (_Bool)checkSupportOS;
+ (id)blackNameList;
+ (void)setBlackNameList:(id)arg1;
+ (void)setCpOrderUrl:(id)arg1;
+ (id)cpOrderUrl;
+ (id)regionCodeWithName:(id)arg1;
+ (id)regionNameWithCode:(id)arg1;
+ (id)defaultProxyHost;
+ (id)defaultProxyHostList;
+ (void)setDefaultProxyHostList:(id)arg1;
+ (id)h5RedirectURL;
+ (void)setWspxAvailable:(_Bool)arg1;
+ (_Bool)wspxAvailable;
+ (void)setSimCardStatus:(long long)arg1;
+ (long long)simCardStatus;
+ (_Bool)hasServiceStatus;
+ (void)setServiceStatus:(long long)arg1;
+ (long long)serviceStatus;
+ (void)setWspxAvailableExpired:(double)arg1;
+ (double)wspxAvailableExpired;
+ (_Bool)hasUserStatus;
+ (long long)userStatus;
+ (void)setUserStatus:(long long)arg1;
+ (void)setRegionCode:(id)arg1;
+ (id)regionCode;
+ (void)setIspCode:(id)arg1;
+ (id)ispCode;
+ (id)wspxToken;
+ (void)setWspxToken:(id)arg1;
+ (id)shortCarrierNameWithIspCode:(id)arg1;
+ (id)shortCarrierName:(id)arg1;
+ (long long)sdkErrorCode;
+ (void)setSdkErrorCode:(long long)arg1;
+ (long long)compatibleStatus;
+ (void)setUserInfoToken:(id)arg1;
+ (id)getUserInfoToken;
+ (id)orderUrl;
+ (void)setOrderUrl:(id)arg1;
+ (id)userInfo;
+ (void)setUserInfo:(id)arg1;
+ (double)getLastAuthTimestamp;
+ (void)recordAuthTimestamp;
+ (int)authFailureType;
+ (void)setAuthFailureType:(int)arg1;
+ (_Bool)lastAuthSuccess;
+ (void)setLastAuthSuccess:(_Bool)arg1;
+ (_Bool)isViaProxyLastTime;
+ (void)setIsViaProxyLastTime:(_Bool)arg1;
+ (id)authFailTime;
+ (void)setLastAuthFailTime:(double)arg1 errorCode:(long long)arg2;
+ (void)clearLastAuthFailTime;
+ (long long)authenticateNetworkState;
+ (void)saveAuthenticateNetworkState:(long long)arg1;
+ (_Bool)ndkCrashNums;
+ (void)setNdkCrashNums:(int)arg1;
+ (_Bool)hasNdkCrash;
+ (void)setNdkCrash:(_Bool)arg1;
+ (void)saveSDKVersion;
- (id)carrierWithIspCode:(id)arg1;

@end

