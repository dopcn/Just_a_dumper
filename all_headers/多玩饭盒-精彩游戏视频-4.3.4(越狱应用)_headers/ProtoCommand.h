//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CommPushCommand;

@interface ProtoCommand : NSObject
{
    CommPushCommand *_command;
}

+ (id)fromData:(id)arg1;
+ (id)packetWithHeartbreak;
+ (id)packetWithLogout;
+ (id)packetWithAckPacks:(id)arg1;
+ (id)packetWithAckPack:(long long)arg1;
+ (id)packetWithChatRoomHeartBeat:(id)arg1;
+ (id)packetWithChatRoom:(id)arg1;
+ (id)packetwithLiveMessage:(id)arg1;
+ (id)packetWithGroupMessage:(id)arg1;
+ (id)packetWithIMMessage:(id)arg1;
+ (id)packetWithMessage:(id)arg1;
+ (id)packetWithLoginUid:(long long)arg1 token:(id)arg2;
@property(retain, nonatomic) CommPushCommand *command; // @synthesize command=_command;
- (void).cxx_destruct;
- (id)toData;
- (void)setProtoData:(id)arg1;
- (id)protoData;
- (void)setProtoCompressed:(long long)arg1;
- (long long)protoCompressed;
- (void)setProtoType:(long long)arg1;
- (long long)protoType;
- (id)init;

@end

