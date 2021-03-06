//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "JDYNetworkRequestInterface-Protocol.h"

@class NSData, NSDictionary, NSString, WXMessengerResponseCenter, WXOAccountContext;
@protocol WXMessengerResponseDelegate;

@interface WXOINetRequest : NSObject <JDYNetworkRequestInterface>
{
    _Bool isSentBySync;
    _Bool _canBeMerged;
    _Bool _canBeMocked;
    _Bool _banInterception;
    unsigned int _requestCmd;
    unsigned int _timeout;
    CDUnknownBlockType completionBlock;
    NSString *tagInfo;
    NSData *_requestParamtersData;
    id <WXMessengerResponseDelegate> _delegate;
    WXOAccountContext *_context;
    NSDictionary *_userInfo;
    WXMessengerResponseCenter *_responser;
    NSString *_requestAPI;
    NSDictionary *_parameters;
    long long _cachedStrategy;
    long long _environmentStrategy;
    long long _priority;
    double _timeoutInterval;
}

@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool banInterception; // @synthesize banInterception=_banInterception;
@property(nonatomic) _Bool canBeMocked; // @synthesize canBeMocked=_canBeMocked;
@property(nonatomic) _Bool canBeMerged; // @synthesize canBeMerged=_canBeMerged;
@property(nonatomic) long long environmentStrategy; // @synthesize environmentStrategy=_environmentStrategy;
@property(nonatomic) long long cachedStrategy; // @synthesize cachedStrategy=_cachedStrategy;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSString *requestAPI; // @synthesize requestAPI=_requestAPI;
@property(retain, nonatomic) WXMessengerResponseCenter *responser; // @synthesize responser=_responser;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak WXOAccountContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <WXMessengerResponseDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSData *requestParamtersData; // @synthesize requestParamtersData=_requestParamtersData;
@property(nonatomic) unsigned int requestCmd; // @synthesize requestCmd=_requestCmd;
@property(retain, nonatomic) NSString *tagInfo; // @synthesize tagInfo;
@property(nonatomic) _Bool isSentBySync; // @synthesize isSentBySync;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock;
- (void).cxx_destruct;
- (void)start;
- (id)generateUniqueCachedIdentifier;
- (id)method;
- (id)requestHeaderInfo;
- (id)requestAPIName;
- (id)initRequestWithCommand:(unsigned int)arg1 param:(id)arg2 timeout:(unsigned int)arg3 delegate:(id)arg4 context:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

