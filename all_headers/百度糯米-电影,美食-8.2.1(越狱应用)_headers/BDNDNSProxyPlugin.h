//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BDNDNSProxyPluginProtocol-Protocol.h"

@class NSString;

@interface BDNDNSProxyPlugin : NSObject <BDNDNSProxyPluginProtocol>
{
}

- (_Bool)isValidIpOnRequestFailure:(id)arg1 withIp:(id)arg2 domain:(id)arg3;
- (id)dnsOptimumIpForDomian:(id)arg1;
- (_Bool)isDNSProxyEnable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

