//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GJGCDAsyncSocketDelegate-Protocol.h"

@class NSString;

@interface DataSecurityEngine : NSObject <GJGCDAsyncSocketDelegate>
{
}

+ (void)setLogger:(CDUnknownBlockType)arg1;
+ (void)setServerInfo:(id)arg1;
+ (void)response:(CDUnknownBlockType)arg1;
+ (void)request:(id)arg1 withTag:(long long)arg2;
+ (void)endEngine;
+ (void)startEngine;
+ (void)startHTTPDNS:(CDUnknownBlockType)arg1;
+ (id)share;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)heartbeat;
- (void)endHeartbeat;
- (void)startHeartbeat;
- (void)parseData:(id)arg1 tag:(long long)arg2;
- (id)preparseData:(id)arg1;
- (void)endSocket;
- (_Bool)startSocket;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

