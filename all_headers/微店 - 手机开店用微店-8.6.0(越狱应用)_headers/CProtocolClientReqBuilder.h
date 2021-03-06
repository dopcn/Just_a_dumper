//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class CProtocolClientReq;

@interface CProtocolClientReqBuilder : PBGeneratedMessageBuilder
{
    CProtocolClientReq *resultCprotocolClientReq;
}

@property(retain) CProtocolClientReq *resultCprotocolClientReq; // @synthesize resultCprotocolClientReq;
- (void).cxx_destruct;
- (id)clearClientId;
- (id)setClientId:(id)arg1;
- (id)clientId;
- (_Bool)hasClientId;
- (id)clearVcodeSeccode;
- (id)setVcodeSeccode:(id)arg1;
- (id)vcodeSeccode;
- (_Bool)hasVcodeSeccode;
- (id)clearVcodeValidate;
- (id)setVcodeValidate:(id)arg1;
- (id)vcodeValidate;
- (_Bool)hasVcodeValidate;
- (id)clearVcodeChallengeId;
- (id)setVcodeChallengeId:(id)arg1;
- (id)vcodeChallengeId;
- (_Bool)hasVcodeChallengeId;
- (id)clearClientVersion;
- (id)setClientVersion:(id)arg1;
- (id)clientVersion;
- (_Bool)hasClientVersion;
- (id)clearInnerHeader;
- (id)mergeInnerHeader:(id)arg1;
- (id)setInnerHeaderBuilder:(id)arg1;
- (id)setInnerHeader:(id)arg1;
- (id)innerHeader;
- (_Bool)hasInnerHeader;
- (id)clearVcodeUsdata;
- (id)setVcodeUsdata:(id)arg1;
- (id)vcodeUsdata;
- (_Bool)hasVcodeUsdata;
- (id)clearVcodeSession;
- (id)setVcodeSession:(id)arg1;
- (id)vcodeSession;
- (_Bool)hasVcodeSession;
- (id)clearProtocolContent;
- (id)setProtocolContent:(id)arg1;
- (id)protocolContent;
- (_Bool)hasProtocolContent;
- (id)clearSourceType;
- (id)setSourceType:(int)arg1;
- (int)sourceType;
- (_Bool)hasSourceType;
- (id)clearSeq;
- (id)setSeq:(unsigned int)arg1;
- (unsigned int)seq;
- (_Bool)hasSeq;
- (id)clearUid;
- (id)setUid:(unsigned long long)arg1;
- (unsigned long long)uid;
- (_Bool)hasUid;
- (id)clearVersion;
- (id)setVersion:(id)arg1;
- (id)version;
- (_Bool)hasVersion;
- (id)clearSubCmd;
- (id)setSubCmd:(id)arg1;
- (id)subCmd;
- (_Bool)hasSubCmd;
- (id)clearCmd;
- (id)setCmd:(id)arg1;
- (id)cmd;
- (_Bool)hasCmd;
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

