//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPPlugin.h"

@class OPAppInterceptorService;

@interface OPAppInterceptorPlugin : OPPlugin
{
    OPAppInterceptorService *_interceptorService;
}

@property(retain, nonatomic) OPAppInterceptorService *interceptorService; // @synthesize interceptorService=_interceptorService;
- (void).cxx_destruct;
- (void)receivePaymentStateDidChanged:(id)arg1;
- (void)receiveMemberInfoDidChange;
- (void)receiveUserStateDidChange:(long long)arg1;
- (void)receiveApplicationDidEnterBackground;
- (void)receiveApplicationWillEnterForeground;
- (void)receiveApplicationWillResignActive;
- (void)receiveApplicationDidBecomeActive;
- (void)onReceived:(id)arg1;
- (void)onRun;

@end

