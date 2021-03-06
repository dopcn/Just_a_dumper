//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXNativeSecurityProtocol-Protocol.h"

@class NSString;

@interface WXNativeSecurity : NSObject <WXNativeSecurityProtocol>
{
    struct _opaque_pthread_mutex_t _mutexForPublicKey;
}

+ (id)sharedInstance;
- (id)RSAEncryptData:(id)arg1 withPublicKeyData:(id)arg2;
- (void)_addRSAPublicKeyWithKeyData:(id)arg1 andDoBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

