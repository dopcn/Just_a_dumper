//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QalUserStatusListenerProtocol-Protocol.h"

@class NSString;

@interface TIMInnerUserStatusProtocol : NSObject <QalUserStatusListenerProtocol>
{
    CDUnknownBlockType regSucc;
    CDUnknownBlockType forceOffline;
    CDUnknownBlockType regFail;
    CDUnknownBlockType userSigExpire;
}

@property(copy, nonatomic) CDUnknownBlockType userSigExpire; // @synthesize userSigExpire;
@property(copy, nonatomic) CDUnknownBlockType regFail; // @synthesize regFail;
@property(copy, nonatomic) CDUnknownBlockType forceOffline; // @synthesize forceOffline;
@property(copy, nonatomic) CDUnknownBlockType regSucc; // @synthesize regSucc;
- (void).cxx_destruct;
- (void)onTicketError:(id)arg1 andErrorcode:(id)arg2;
- (void)onRegFail:(int)arg1 andErrMsg:(id)arg2 andIdentifier:(id)arg3;
- (void)onForceOffLine:(id)arg1;
- (void)onRegSucc:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

