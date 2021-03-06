//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LFSocketConnection, LFSocketIOPacket, LFSocketIOResponse, NSDictionary, NSError, NSString;

@protocol LFSocketConnectionDelegate <NSObject>
- (void)socketConnection:(LFSocketConnection *)arg1 onError:(NSError *)arg2;
- (void)socketConnection:(LFSocketConnection *)arg1 didSendMessage:(LFSocketIOPacket *)arg2;
- (void)socketConnection:(LFSocketConnection *)arg1 didReceiveEvent:(LFSocketIOPacket *)arg2;
- (void)socketConnection:(LFSocketConnection *)arg1 didReceiveJSON:(LFSocketIOPacket *)arg2;
- (void)socketConnection:(LFSocketConnection *)arg1 didReceiveMessage:(LFSocketIOPacket *)arg2;
- (void)socketConnection:(LFSocketConnection *)arg1 didTrackMethod:(NSString *)arg2 params:(NSDictionary *)arg3 reciveError:(LFSocketIOResponse *)arg4;
- (void)socketConnectionDidDisconnect:(LFSocketConnection *)arg1 disconnectedWithError:(NSError *)arg2;
- (void)socketConnectionDidConnect:(LFSocketConnection *)arg1;
@end

