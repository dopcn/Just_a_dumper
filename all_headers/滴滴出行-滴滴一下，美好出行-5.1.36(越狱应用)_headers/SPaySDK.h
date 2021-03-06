//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPaySDKLifeCycleEventCenterDelegate-Protocol.h"

@class NSString, SPaySDKConfiguration;

@interface SPaySDK : NSObject <SPaySDKLifeCycleEventCenterDelegate>
{
    SPaySDKConfiguration *_configuration;
    CDUnknownBlockType _completion;
}

+ (id)sdkWithConfiguration:(id)arg1;
+ (void)openChannelSelectorWithChannels:(id)arg1 currentSelectedChannelID:(long long)arg2 completed:(CDUnknownBlockType)arg3;
+ (_Bool)isApplePaySupported;
+ (void)applicationDidEnterBackground:(id)arg1;
+ (void)applicationWillResignActive:(id)arg1;
+ (void)applicationDidBecomeActive:(id)arg1;
+ (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) SPaySDKConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)call;
- (void)callWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithConfiguration:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType topViewControllerGetter;
@property(copy, nonatomic) CDUnknownBlockType navigationConfiger;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

