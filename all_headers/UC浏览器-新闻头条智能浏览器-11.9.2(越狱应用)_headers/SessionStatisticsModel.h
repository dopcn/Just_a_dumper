//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SessionStatisticsModel : NSObject
{
    _Bool _shouldJumpCounter;
    _Bool _validStart;
    long long _userDays;
    long long _sessionTimes;
    long long _launchDays;
    long long _activeDay;
    long long _userInstallType;
    NSMutableDictionary *_mutableDic;
    NSString *_intervalString;
    long long _intervalDay;
}

+ (id)sharedInstance;
@property(nonatomic) long long intervalDay; // @synthesize intervalDay=_intervalDay;
@property(nonatomic) _Bool validStart; // @synthesize validStart=_validStart;
@property(retain) NSString *intervalString; // @synthesize intervalString=_intervalString;
@property(retain) NSMutableDictionary *mutableDic; // @synthesize mutableDic=_mutableDic;
@property _Bool shouldJumpCounter; // @synthesize shouldJumpCounter=_shouldJumpCounter;
@property long long userInstallType; // @synthesize userInstallType=_userInstallType;
@property(nonatomic) long long activeDay; // @synthesize activeDay=_activeDay;
@property long long launchDays; // @synthesize launchDays=_launchDays;
@property long long sessionTimes; // @synthesize sessionTimes=_sessionTimes;
@property long long userDays; // @synthesize userDays=_userDays;
- (void)__uc_stat__homepageFeed_sourceItemOnUploadStatistics;
- (void)updateLoadStatistics;
- (void)counter;
- (void)refreshEndDate:(id)arg1;
- (void)logSession;
- (void)refreshStartDate:(id)arg1 enforce:(_Bool)arg2 delayLog:(_Bool)arg3 completionConter:(_Bool)arg4;
- (void)updateBaseProperty;
- (void)innerRunRefreshStartDate:(id)arg1 enforce:(_Bool)arg2 delayLog:(_Bool)arg3 completionConter:(_Bool)arg4;
- (_Bool)backgroundNewStartAndStartDate:(id)arg1 originalEndDate:(id)arg2;
- (id)filePath;
- (int)countLuanchDays:(id)arg1;
- (void)updateActiveDay;
- (void)updateUserInstallType;
- (void)updateLaunchDays;
- (void)updateSessionTimes;
- (void)updateUserDays;
- (void)waStatisticsWillPostDataNotification:(id)arg1;
- (void)waStatisticsForMoreHeader:(id)arg1;
- (void)dealloc;
- (id)init;

@end

