//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class CMsgGetOfflineMsgResp;

@interface CMsgGetOfflineMsgRespBuilder : PBGeneratedMessageBuilder
{
    CMsgGetOfflineMsgResp *resultCmsgGetOfflineMsgResp;
}

@property(retain) CMsgGetOfflineMsgResp *resultCmsgGetOfflineMsgResp; // @synthesize resultCmsgGetOfflineMsgResp;
- (void).cxx_destruct;
- (id)clearLastTime;
- (id)setLastTime:(unsigned long long)arg1;
- (unsigned long long)lastTime;
- (_Bool)hasLastTime;
- (id)clearLastMsgid;
- (id)setLastMsgid:(unsigned long long)arg1;
- (unsigned long long)lastMsgid;
- (_Bool)hasLastMsgid;
- (id)clearMsgType;
- (id)setMsgType:(unsigned int)arg1;
- (unsigned int)msgType;
- (_Bool)hasMsgType;
- (id)clearMsgs;
- (id)setMsgsArray:(id)arg1;
- (id)addMsgs:(id)arg1;
- (id)msgsAtIndex:(unsigned long long)arg1;
- (id)msgs;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFrom:(id)arg1;
- (id)buildPartial;
- (id)build;
- (id)defaultInstance;
- (id)clone;
- (id)clear;
- (id)internalGetResult;
- (id)init;

@end

