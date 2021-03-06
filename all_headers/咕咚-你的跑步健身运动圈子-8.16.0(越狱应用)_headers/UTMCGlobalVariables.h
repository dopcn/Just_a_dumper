//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UTMCDeviceInfo, UTMCEventStreamStrategy;
@protocol UTIRequestAuthentication;

@interface UTMCGlobalVariables : NSObject
{
    struct dispatch_queue_s *mUploadQueue;
    struct dispatch_queue_s *mAddLogQueue;
    _Bool mIsSecuritySDKSupport;
    _Bool mCanForceUpload;
    _Bool mIsRealTimeDebug;
    _Bool mSyncOnlineConfStatus;
    _Bool mIsOldDevice;
    _Bool mIsRealTimeDebugNoSample;
    int mUploadLag;
    NSString *mAppKey;
    NSString *mSDKVersion;
    NSString *mAppSecret;
    NSString *mChannel;
    NSString *mLongNick;
    NSString *mNick;
    NSString *mUserId;
    NSString *mLongUserId;
    UTMCDeviceInfo *mDeviceInfo;
    NSString *mDebugId;
    NSString *mUploadUrl;
    NSString *mConfUrl;
    NSString *mAbtestUrl;
    id <UTIRequestAuthentication> mRequestAuth;
    NSString *mAssistDebugId;
    NSString *mTPKttid;
    UTMCEventStreamStrategy *_mEventStreamStrategy;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)getInstance;
@property(retain) UTMCEventStreamStrategy *mEventStreamStrategy; // @synthesize mEventStreamStrategy=_mEventStreamStrategy;
@property(retain) NSString *mTPKttid; // @synthesize mTPKttid;
@property _Bool mIsRealTimeDebugNoSample; // @synthesize mIsRealTimeDebugNoSample;
@property _Bool mIsOldDevice; // @synthesize mIsOldDevice;
@property(retain) NSString *mAssistDebugId; // @synthesize mAssistDebugId;
@property _Bool mSyncOnlineConfStatus; // @synthesize mSyncOnlineConfStatus;
@property(retain) id <UTIRequestAuthentication> mRequestAuth; // @synthesize mRequestAuth;
@property(retain) NSString *mAbtestUrl; // @synthesize mAbtestUrl;
@property(retain) NSString *mConfUrl; // @synthesize mConfUrl;
@property _Bool mIsRealTimeDebug; // @synthesize mIsRealTimeDebug;
@property _Bool mCanForceUpload; // @synthesize mCanForceUpload;
@property(retain) NSString *mUploadUrl; // @synthesize mUploadUrl;
@property _Bool mIsSecuritySDKSupport; // @synthesize mIsSecuritySDKSupport;
@property int mUploadLag; // @synthesize mUploadLag;
@property(retain) NSString *mDebugId; // @synthesize mDebugId;
@property(retain) UTMCDeviceInfo *mDeviceInfo; // @synthesize mDeviceInfo;
@property(retain) NSString *mLongUserId; // @synthesize mLongUserId;
@property(retain) NSString *mUserId; // @synthesize mUserId;
@property(retain) NSString *mNick; // @synthesize mNick;
@property(retain) NSString *mLongNick; // @synthesize mLongNick;
@property(retain) NSString *mChannel; // @synthesize mChannel;
@property(retain) NSString *mAppSecret; // @synthesize mAppSecret;
@property(retain) NSString *mSDKVersion; // @synthesize mSDKVersion;
@property(retain) NSString *mAppKey; // @synthesize mAppKey;
- (void).cxx_destruct;
- (struct dispatch_queue_s *)addLogDispatchSerialQueue;
- (struct dispatch_queue_s *)upLoadDispatchSerialQueue;
- (id)initAfterinit;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

