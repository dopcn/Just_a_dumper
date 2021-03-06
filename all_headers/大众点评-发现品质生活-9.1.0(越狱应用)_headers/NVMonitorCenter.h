//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCondition, NSMutableArray, NSMutableDictionary, NSString, NSThread, NSURL;

@interface NVMonitorCenter : NSObject
{
    NSURL *_serverURL;
    NSURL *_failoverURL;
    NSMutableArray *_buffer;
    CDUnknownBlockType _unionIdBlock;
    int _appID;
    NSString *_host;
    _Bool _stop;
    _Bool _force;
    long long _versionCode;
    NSThread *_thread;
    NSCondition *_condition;
    NSMutableDictionary *_uploadsPercentDic;
}

+ (void)isDebug:(_Bool)arg1;
+ (id)defaultCenter;
@property(retain, nonatomic) NSMutableDictionary *uploadsPercentDic; // @synthesize uploadsPercentDic=_uploadsPercentDic;
@property(nonatomic) _Bool force; // @synthesize force=_force;
@property(nonatomic) _Bool stop; // @synthesize stop=_stop;
@property(retain, nonatomic) NSCondition *condition; // @synthesize condition=_condition;
@property(retain, nonatomic) NSThread *thread; // @synthesize thread=_thread;
@property(nonatomic) long long versionCode; // @synthesize versionCode=_versionCode;
- (void).cxx_destruct;
- (void)dealloc;
- (id)platformString;
- (void)run;
- (id)urlEncode:(id)arg1;
- (void)setCrashMonitorTimes:(long long)arg1;
- (void)setDNSDuration:(long long)arg1;
- (void)setUnionIdBlock:(CDUnknownBlockType)arg1;
- (id)getUnionId;
- (void)flush;
- (void)uploadNow;
- (void)pvWithCommand:(id)arg1 network:(int)arg2 code:(int)arg3 tunnel:(int)arg4 requestBytes:(int)arg5 responseBytes:(int)arg6 responseTime:(int)arg7 ip:(id)arg8 uploadPercent:(int)arg9 extend:(id)arg10;
- (void)pvWithCommand:(id)arg1 network:(int)arg2 code:(int)arg3 tunnel:(int)arg4 requestBytes:(int)arg5 responseBytes:(int)arg6 responseTime:(int)arg7 ip:(id)arg8 uploadPercent:(int)arg9;
- (void)pvWithCommand:(id)arg1 network:(int)arg2 code:(int)arg3 tunnel:(int)arg4 requestBytes:(int)arg5 responseBytes:(int)arg6 responseTime:(int)arg7 ip:(id)arg8;
- (void)pvWithCommand:(id)arg1 network:(int)arg2 code:(int)arg3 requestBytes:(int)arg4 responseBytes:(int)arg5 responseTime:(int)arg6 ip:(id)arg7;
- (void)pvWithCommand:(id)arg1 network:(int)arg2 code:(int)arg3 requestBytes:(int)arg4 responseBytes:(int)arg5 responseTime:(int)arg6;
- (id)commandWithUrl:(id)arg1;
- (long long)getVersionCode;
- (int)appID;
- (void)initLogSwitch;
- (void)setAppID:(int)arg1;
- (void)setServerHost:(id)arg1;
- (id)serverHost;
- (void)setFailoverURL:(id)arg1;
- (void)setServerUrl:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (id)init;

@end

