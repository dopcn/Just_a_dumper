//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMNetworkReachabilityDelegate-Protocol.h"

@class AMNetworkReachabilityWrapper, AdMoGoConfig, AdMoGoConfigData, NSString;

@interface AdMoGoConfigInf : NSObject <AMNetworkReachabilityDelegate>
{
    AdMoGoConfig *config;
    _Bool fastserverFinished;
    _Bool fastbelowFinished;
    int ping;
    AdMoGoConfigData *configData;
    _Bool _isFast;
    NSString *_configKey;
    AMNetworkReachabilityWrapper *reachability_;
    NSString *_notificationKey;
}

@property(nonatomic) NSString *notificationKey; // @synthesize notificationKey=_notificationKey;
@property(retain, nonatomic) AMNetworkReachabilityWrapper *reachability; // @synthesize reachability=reachability_;
@property(nonatomic) _Bool isFast; // @synthesize isFast=_isFast;
@property(nonatomic) NSString *configKey; // @synthesize configKey=_configKey;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)reachabilityBecameReachable:(id)arg1;
- (void)reachabilityNotReachable:(id)arg1;
- (_Bool)checkReachability;
- (void)startGetInfo;
- (void)cleanConfigCache;
- (void)getConfigWithAppKey:(id)arg1 AndAdViewType:(unsigned long long)arg2 AndIsFast:(_Bool)arg3 AndConfigKey:(id)arg4 AndNotificationKey:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

