//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, YYReceiveRedPacketMgr, YYReceiveRedPacketView;

@protocol YYReceiveRedPacketViewDelegate <NSObject>
- (void)receiveRedPacketView:(YYReceiveRedPacketView *)arg1 sendMessageToChatModuleView:(NSString *)arg2 length:(unsigned long long)arg3;
- (void)receiveRedPacketView:(YYReceiveRedPacketView *)arg1 didOpenRedPacketAndDidNotJumpToFinishPage:(YYReceiveRedPacketMgr *)arg2;
- (_Bool)receiveRedPacketView:(YYReceiveRedPacketView *)arg1 willRequestOpenRedPacketResult:(YYReceiveRedPacketMgr *)arg2;
- (_Bool)receiveRedPacketView:(YYReceiveRedPacketView *)arg1 willOpenRedPacket:(YYReceiveRedPacketMgr *)arg2;
@end

