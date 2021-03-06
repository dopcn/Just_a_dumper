//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LEGYContext, LEGYManager, LEGYNotifier, LEGYUserBehaviorLogger, LEGYWarmupper, LEGYWifiNetworkChecker, NSMutableDictionary;

@interface LEGYModule : NSObject
{
    NSMutableDictionary *_actionBlocks;
    CDUnknownBlockType _responseErrorBlock;
    LEGYNotifier *_legyNotifier;
    LEGYWarmupper *_warmupper;
    LEGYContext *_context;
    LEGYManager *_legyManager;
}

+ (id)instance;
@property(readonly, nonatomic) LEGYManager *legyManager; // @synthesize legyManager=_legyManager;
@property(readonly, nonatomic) LEGYContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) LEGYWarmupper *warmupper; // @synthesize warmupper=_warmupper;
@property(readonly, nonatomic) LEGYNotifier *legyNotifier; // @synthesize legyNotifier=_legyNotifier;
- (void).cxx_destruct;
- (void)setRegistered:(_Bool)arg1 headerFields:(id)arg2;
- (void)disconnect;
- (void)shutDown;
- (void)stop;
- (void)start;
- (void)endTransaction;
- (void)startTransaction;
- (void)performInTransaction:(CDUnknownBlockType)arg1;
- (void)resendRequest:(id)arg1 queue:(id)arg2;
- (void)setResendTimeLimit:(double)arg1;
- (void)updateAutoResendTimeLimit:(_Bool)arg1;
@property(readonly, nonatomic) LEGYUserBehaviorLogger *userBehaviorLog;
@property(readonly, nonatomic) LEGYWifiNetworkChecker *wifiNetworkChecker;
- (void)_logLEGYHTTPError:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)sendRequest:(id)arg1;
- (id)requestPushHandler:(CDUnknownBlockType)arg1 sleepResponseRequestBlock:(CDUnknownBlockType)arg2 flushResponseRequestBlock:(CDUnknownBlockType)arg3 processResponseBlock:(CDUnknownBlockType)arg4 failResponseBlock:(CDUnknownBlockType)arg5;
- (id)requestHandlerWithDestination:(long long)arg1 url:(id)arg2 httpMethod:(id)arg3 headerFields:(id)arg4 requestData:(id)arg5 options:(long long)arg6 queue:(id)arg7 responseBlock:(CDUnknownBlockType)arg8 responseDataBlock:(CDUnknownBlockType)arg9;
- (id)requestWithDestination:(long long)arg1 url:(id)arg2 httpMethod:(id)arg3 headerFields:(id)arg4 requestData:(id)arg5 options:(long long)arg6 queue:(id)arg7 responseBlock:(CDUnknownBlockType)arg8 responseDataBlock:(CDUnknownBlockType)arg9;
- (CDUnknownBlockType)responseErrorBlock;
- (void)setupActionBlockWithResponseErrorBlock:(CDUnknownBlockType)arg1;
- (id)initObj;

@end

