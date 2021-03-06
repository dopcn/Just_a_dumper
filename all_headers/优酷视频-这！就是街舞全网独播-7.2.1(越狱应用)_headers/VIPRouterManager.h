//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DYKHeadMiddleWareProtocol-Protocol.h"
#import "DYKTailMiddleWareProtocol-Protocol.h"
#import "DYKURLRouterHandler-Protocol.h"

@class NSString;

@interface VIPRouterManager : NSObject <DYKURLRouterHandler, DYKTailMiddleWareProtocol, DYKHeadMiddleWareProtocol>
{
}

+ (void)pushLoginCenter;
+ (void)pushVIPSearchCenter;
+ (void)pushVIPPayment;
+ (id)URLDecodedString:(id)arg1;
+ (id)sharedInstance;
- (void)vipActionWithParams:(id)arg1;
- (void)actionURLCodeWithParams:(id)arg1;
- (id)urlActionHeadMiddleWareHandler:(id)arg1;
- (id)urlActionTailMiddleWareHandler:(id)arg1 withRequest:(id)arg2;
- (id)urlRouterHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

