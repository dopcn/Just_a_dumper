//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WOSDKIPFlowDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, NSTimer, WSPXXiaoWoJob;

@interface WSPXXiaoWoManager : NSObject <WOSDKIPFlowDelegate>
{
    _Bool _xiaoWoEnabled;
    _Bool _timerEnabled;
    int _authFailErrorCode;
    NSMutableArray *_jobQueue;
    WSPXXiaoWoJob *_currentJob;
    NSDictionary *_xiaoWoUserInfo;
    NSString *_defaultOrderURL;
    NSString *_defaultFlowQueryURL;
    double _timerInterval;
    NSTimer *_timer;
    NSString *_xiaoWoCpId;
    NSString *_xiaoWoAppId;
    NSString *_xiaoWoAppKey;
    NSString *_xiaoWoPId;
}

+ (id)decodeXiaoWoContent:(id)arg1;
+ (id)wspxClientInfo;
+ (id)shareInstance;
@property(retain) NSString *xiaoWoPId; // @synthesize xiaoWoPId=_xiaoWoPId;
@property(retain) NSString *xiaoWoAppKey; // @synthesize xiaoWoAppKey=_xiaoWoAppKey;
@property(retain) NSString *xiaoWoAppId; // @synthesize xiaoWoAppId=_xiaoWoAppId;
@property(retain) NSString *xiaoWoCpId; // @synthesize xiaoWoCpId=_xiaoWoCpId;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double timerInterval; // @synthesize timerInterval=_timerInterval;
@property(nonatomic) _Bool timerEnabled; // @synthesize timerEnabled=_timerEnabled;
@property(retain, nonatomic) NSString *defaultFlowQueryURL; // @synthesize defaultFlowQueryURL=_defaultFlowQueryURL;
@property(retain, nonatomic) NSString *defaultOrderURL; // @synthesize defaultOrderURL=_defaultOrderURL;
@property(nonatomic) int authFailErrorCode; // @synthesize authFailErrorCode=_authFailErrorCode;
@property(retain, nonatomic) NSDictionary *xiaoWoUserInfo; // @synthesize xiaoWoUserInfo=_xiaoWoUserInfo;
@property(nonatomic) _Bool xiaoWoEnabled; // @synthesize xiaoWoEnabled=_xiaoWoEnabled;
@property(retain, nonatomic) WSPXXiaoWoJob *currentJob; // @synthesize currentJob=_currentJob;
@property(retain, nonatomic) NSMutableArray *jobQueue; // @synthesize jobQueue=_jobQueue;
- (void).cxx_destruct;
- (void)xiaowoReAuthentication;
- (_Bool)checkXiaoWoReAuth;
- (void)saveReAuthOrderType:(long long)arg1 orderStatus:(long long)arg2 phoneNumber:(id)arg3 idKey:(id)arg4;
- (void)nextAuthenticationJob;
- (void)sdkCallBackWithOrderType:(long long)arg1 status:(long long)arg2 phoneNumber:(id)arg3 idKey:(id)arg4;
- (void)authentication;
- (void)authSuccessWithPhone:(id)arg1 urls:(id)arg2;
- (void)authFailed:(int)arg1 phone:(id)arg2 urls:(id)arg3;
@property(retain, nonatomic) NSDictionary *userInfo;
@property(readonly, nonatomic) NSString *authResult;
@property(readonly, nonatomic) int errorCode;
@property(retain, nonatomic) NSString *flowQueryURL;
@property(retain, nonatomic) NSString *orderURL;
- (void)setAuthTimer:(_Bool)arg1 interval:(double)arg2;
@property(readonly, nonatomic) double authTimerInterval;
@property(readonly, nonatomic) _Bool authTimerEnabled;
- (id)getPId;
- (id)getAppId;
- (id)getCpId;
- (void)setPId:(id)arg1;
- (void)setAppKey:(id)arg1;
- (void)setAppId:(id)arg1;
- (void)setCpId:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
@property(readonly, nonatomic) _Bool enabled;
- (void)onTimer:(id)arg1;
- (void)startTimer;
- (void)stopTimer;
- (void)reset;
- (void)setTestMode:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

