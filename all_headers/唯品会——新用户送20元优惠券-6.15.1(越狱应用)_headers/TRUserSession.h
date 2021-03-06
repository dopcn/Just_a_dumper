//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TRUserSession : NSObject
{
    _Bool indHasRules;
    _Bool indNewSessionStarted;
    struct NSString *sessionId;
    long long index;
    double startTimestamp;
    double endTimestamp;
    long long duration;
    NSString *sdkVersion;
    double lastRestartTimestamp;
}

+ (id)populateSessionData:(id)arg1;
+ (id)find:(struct NSString *)arg1;
+ (id)loadAllSessionDataFromDB;
+ (long long)numberOfSessionsOverTimeIntervalFrom:(double)arg1 to:(double)arg2;
@property(nonatomic) double lastRestartTimestamp; // @synthesize lastRestartTimestamp;
@property(nonatomic) _Bool indNewSessionStarted; // @synthesize indNewSessionStarted;
@property(retain, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion;
@property(nonatomic) _Bool indHasRules; // @synthesize indHasRules;
@property(nonatomic) long long duration; // @synthesize duration;
@property(nonatomic) double endTimestamp; // @synthesize endTimestamp;
@property(nonatomic) double startTimestamp; // @synthesize startTimestamp;
@property(nonatomic) long long index; // @synthesize index;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId;
- (void).cxx_destruct;
- (void)deleteSessionData:(long long)arg1;
- (long long)currentSessionDuration;
- (_Bool)isCurrent;
- (void)markRuleStateOnSession:(_Bool)arg1;
- (void)sessionOnStop;
- (id)generateSessionId;
- (_Bool)sessionOnStart;
- (_Bool)shouldStartNewSession:(double)arg1;
- (id)init;

@end

