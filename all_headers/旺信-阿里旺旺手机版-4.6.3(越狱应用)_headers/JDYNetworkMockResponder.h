//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "JDYNetworkLocalResponderInterface-Protocol.h"

@class NSString;

@interface JDYNetworkMockResponder : NSObject <JDYNetworkLocalResponderInterface>
{
}

- (_Bool)isFinishWhenLocalRespondeReturnForRequest:(id)arg1 identifier:(id)arg2;
- (void)handleRemoteResponse:(id)arg1 identifier:(id)arg2;
- (id)responseForRequest:(id)arg1 identifier:(id)arg2;
- (_Bool)canRespondForRequest:(id)arg1 identifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

