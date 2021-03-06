//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPModule.h"

@class XMPPIDTracker;

@interface XMPPTime : XMPPModule
{
    _Bool respondsToQueries;
    XMPPIDTracker *queryTracker;
}

+ (id)timeElementFromDate:(id)arg1;
+ (id)timeElement;
+ (double)approximateTimeDifferenceFromResponse:(id)arg1 andRTT:(double)arg2;
+ (id)timeZoneOffsetFromResponse:(id)arg1;
+ (id)dateFromResponse:(id)arg1;
- (void).cxx_destruct;
- (void)xmppCapabilities:(id)arg1 collectingMyCapabilities:(id)arg2;
- (void)xmppStreamDidDisconnect:(id)arg1 withError:(id)arg2;
- (_Bool)xmppStream:(id)arg1 didReceiveIQ:(id)arg2;
- (void)handleResponse:(id)arg1 withInfo:(id)arg2;
- (id)sendQueryToJID:(id)arg1 withTimeout:(double)arg2;
- (id)sendQueryToJID:(id)arg1;
- (id)sendQueryToServerWithTimeout:(double)arg1;
- (id)sendQueryToServer;
- (id)generateQueryIDWithTimeout:(double)arg1;
@property _Bool respondsToQueries;
- (void)deactivate;
- (_Bool)activate:(id)arg1;
- (id)initWithDispatchQueue:(id)arg1;
- (id)init;

@end

