//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, NSTimer, NSURLSessionDataTask;

@interface NTESGSession : NSObject
{
    NSString *_logPath;
    NSString *_sessionUUID;
    NSString *_appkey;
    NSString *_channel;
    NSArray *_usertags;
    NSString *_uv;
    NSString *_seedID;
    long long _status;
    _Bool _isActivated;
    _Bool _isLog;
    _Bool _isPrettyPrinted;
    _Bool _isKeychainSharing;
    double _pauseTime;
    double _openTime;
    NSURLSessionDataTask *_activeTask;
    NSMutableDictionary *_sessionObject;
    NSMutableDictionary *_userInfoDict;
    NSMutableDictionary *_priorityObjectDict;
    NSMutableDictionary *_uploadingDict;
    NSMutableDictionary *_durationEventDict;
    NSTimer *_eventTimer;
    long long tickCount;
    NSMutableDictionary *_delayDurationDict;
    id _pauseTarget;
    SEL _pauseSEL;
    NSString *_trackingUUID;
    NSString *_trackingMatchingString;
    CDUnknownBlockType _logChangedBlock;
}

+ (id)sharedSession;
@property(copy, nonatomic) CDUnknownBlockType logChangedBlock; // @synthesize logChangedBlock=_logChangedBlock;
- (void).cxx_destruct;
- (void)timeTick:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (id)escapeForUrl:(id)arg1;
- (void)completeUploadWithPriority:(long long)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2 priority:(long long)arg3;
- (void)connectionDidFinishLoading:(id)arg1 priority:(long long)arg2;
- (id)getMACAddress;
- (id)getCarrierName;
- (id)getNetwork;
- (id)getScreenResolution;
- (id)getSystemVersion;
- (id)getDeviceModel;
- (id)getBuildVersion;
- (id)getAppVersion;
- (_Bool)isNewsApp;
- (id)getAdvertisingId;
- (_Bool)saveKeychainValue:(id)arg1;
- (id)getTeamSeedID;
- (id)getKeychainValue;
- (id)getGlobalDeviceId;
- (id)getRandomUUID;
- (void)activationFinished:(_Bool)arg1;
- (void)activate;
- (void)applicationWillTerminate;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (id)makeI;
- (void)miniI;
- (void)addUserName;
- (void)logEvent:(long long)arg1 message:(id)arg2 logInfo:(id)arg3;
- (id)priorityNameWithPriority:(long long)arg1;
- (void)updateDelayDurationWithDuration:(unsigned long long)arg1 priority:(long long)arg2;
- (long long)delayDurationWithPriority:(long long)arg1;
- (void)updateUpLoadingWithStatus:(_Bool)arg1 priority:(long long)arg2;
- (_Bool)upLoadingWithPriority:(long long)arg1;
- (id)eventListWithPriority:(long long)arg1;
- (long long)timeModWithPriority:(long long)arg1;
- (id)pathWithPriority:(long long)arg1;
- (id)dataWithPriority:(long long)arg1;
- (id)durationObjectWithPriority:(long long)arg1;
- (id)eventObjectWithPriority:(long long)arg1;
- (void)removeAllDurationEvents;
- (void)updateDurationEventsWithInterval:(double)arg1;
- (void)renameOrAppendFile:(id)arg1 origin:(id)arg2 destination:(id)arg3;
- (void)removeFromFileWithPriority:(long long)arg1;
- (void)cleanUpEventDataWithPriority:(long long)arg1;
- (_Bool)saveToFileWithPriority:(long long)arg1;
- (void)saveToFile;
- (void)close;
- (void)setPauseTarget:(id)arg1 action:(SEL)arg2;
- (void)pause;
- (void)open;
- (id)jsonStringWithObject:(id)arg1 writingOptions:(unsigned long long)arg2;
- (id)parameterStringFromParameters:(id)arg1;
- (id)md5String:(id)arg1;
- (_Bool)validatedParametersWithEvent:(id)arg1 tag:(id)arg2 parameters:(id)arg3;
- (id)trackIdWithEvent:(id)arg1 tag:(id)arg2 parameters:(id)arg3;
- (void)trackEventWithTrackId:(id)arg1 event:(id)arg2 withTag:(id)arg3 withKeyValues:(id)arg4 duration:(long long)arg5 times:(long long)arg6 priority:(long long)arg7;
- (void)startUrlSessionWithRequest:(id)arg1 priority:(long long)arg2;
- (id)replyFeedbackDict:(id)arg1 content:(id)arg2;
- (id)feedbackDict:(id)arg1 content:(id)arg2;
- (void)didStartUploadWithPriority:(long long)arg1;
- (void)uploadWithPriority:(long long)arg1;
- (void)upload;
- (void)trackUI:(id)arg1 duration:(double)arg2 grossDuration:(double)arg3 progress:(double)arg4 withKeyValues:(id)arg5 priority:(long long)arg6;
- (id)beginTrackEvent:(id)arg1 withKeyValues:(id)arg2 priority:(long long)arg3;
- (id)beginTrackEvent:(id)arg1 withTag:(id)arg2 priority:(long long)arg3;
- (void)trackEvent:(id)arg1 withKeyValues:(id)arg2 priority:(long long)arg3;
- (void)trackEvent:(id)arg1 withTag:(id)arg2 times:(long long)arg3 priority:(long long)arg4;
- (void)trackEvent:(id)arg1 withTag:(id)arg2 priority:(long long)arg3;
- (void)trackEvent:(id)arg1 priority:(long long)arg2;
- (void)trackUI:(id)arg1 duration:(double)arg2 grossDuration:(double)arg3 progress:(double)arg4 withKeyValues:(id)arg5;
- (void)endTrackWithTrackId:(id)arg1 changedKeyValues:(id)arg2;
- (void)endTrackWithTrackId:(id)arg1;
- (id)beginTrackEvent:(id)arg1 withKeyValues:(id)arg2;
- (id)beginTrackEvent:(id)arg1 withTag:(id)arg2;
- (void)trackEvent:(id)arg1 withKeyValues:(id)arg2;
- (void)trackEvent:(id)arg1 withTag:(id)arg2 times:(long long)arg3;
- (void)trackEvent:(id)arg1 withTag:(id)arg2;
- (void)trackEvent:(id)arg1;
- (void)trackUserQQ:(id)arg1 token:(id)arg2;
- (void)trackUserWeibo:(id)arg1 token:(id)arg2;
- (void)trackUserHomeCity:(id)arg1;
- (void)trackUserLocationAdministrationDivisionCode:(id)arg1;
- (void)trackUserCurrentCity:(id)arg1;
- (void)trackUserLocation:(double)arg1 longitude:(double)arg2;
- (void)trackUserPushToken:(id)arg1;
- (void)trackUserName:(id)arg1;
- (void)startSession;
- (void)start;
- (void)setNextTimeUploadDelay:(double)arg1;
- (void)setKeychainSharing:(_Bool)arg1;
- (void)setLog:(_Bool)arg1 needPrettyPrinted:(_Bool)arg2;
- (void)setUserTags:(id)arg1;
- (void)startSessionWithAppKey:(id)arg1 channel:(id)arg2;
- (void)priorityConfigurations;
- (id)init;
- (id)encrypt:(id)arg1;
- (void)activeWithSearchAdsInfo:(id)arg1;
- (id)defaultUserAgentString;
- (id)getTrackingUUID;
- (id)getPasteboardString;
- (void)setTrackingUUID:(id)arg1 trackingMatchingString:(id)arg2;

@end

