//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "PMNetworkProtocol-Protocol.h"

@class MKTConnection, NSString;

@interface PMNetworkMix : NSObject <PMNetworkProtocol>
{
    MKTConnection *_mtop;
    MKTConnection *_accs;
}

@property(retain, nonatomic) MKTConnection *accs; // @synthesize accs=_accs;
@property(retain, nonatomic) MKTConnection *mtop; // @synthesize mtop=_mtop;
- (void).cxx_destruct;
- (void)setupResendAction:(id)arg1;
- (void)setMessage:(id)arg1 needResend:(_Bool)arg2;
- (void)externData:(id)arg1;
- (id)getPMSendChannel;
- (_Bool)isSendByMtop:(id)arg1;
- (void)sendMsgByMtop:(id)arg1;
- (void)sendMsgByAccs:(id)arg1;
- (void)sendMsg:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

