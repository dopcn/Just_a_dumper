//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NVMainBridgeProtocol-Protocol.h"

@class NSString;

@interface NVMainBridge : NSObject <NVMainBridgeProtocol>
{
}

+ (void)performAfterLogin:(CDUnknownBlockType)arg1 inViewController:(id)arg2;
+ (void)openURLWithBaseURL:(id)arg1 andParameters:(id)arg2;
+ (void)hideNotificationViewinViewController:(id)arg1;
+ (void)showWaitingNoCancel:(id)arg1 voidKeyboard:(_Bool)arg2 inViewController:(id)arg3;
+ (void)showWaiting:(id)arg1 voidKeyboard:(_Bool)arg2 inViewController:(id)arg3;
+ (void)showWaiting:(id)arg1 inViewController:(id)arg2;
+ (void)showSplash:(id)arg1 voidKeyboard:(_Bool)arg2 inViewController:(id)arg3;
+ (void)showSplash:(id)arg1 inViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

