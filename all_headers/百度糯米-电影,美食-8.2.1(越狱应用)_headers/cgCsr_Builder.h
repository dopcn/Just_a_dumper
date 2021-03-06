//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class cgCsr;

@interface cgCsr_Builder : PBGeneratedMessageBuilder
{
    cgCsr *resultCsr;
}

@property(retain) cgCsr *resultCsr; // @synthesize resultCsr;
- (id)clearServicetype;
- (id)setServicetype:(unsigned int)arg1;
- (unsigned int)servicetype;
- (_Bool)hasServicetype;
- (id)clearLogininfo;
- (id)setLogininfoArray:(id)arg1;
- (id)addLogininfo:(id)arg1;
- (id)logininfoAtIndex:(unsigned long long)arg1;
- (id)logininfo;
- (id)clearRuntime;
- (id)mergeRuntime:(id)arg1;
- (id)setRuntimeBuilder:(id)arg1;
- (id)setRuntime:(id)arg1;
- (id)runtime;
- (_Bool)hasRuntime;
- (id)clearCheckinfo;
- (id)setCheckinfo:(id)arg1;
- (id)checkinfo;
- (_Bool)hasCheckinfo;
- (id)clearNotifytype;
- (id)setNotifytype:(unsigned int)arg1;
- (unsigned int)notifytype;
- (_Bool)hasNotifytype;
- (id)clearAuthtype;
- (id)setAuthtype:(unsigned int)arg1;
- (unsigned int)authtype;
- (_Bool)hasAuthtype;
- (id)clearSiteid;
- (id)setSiteid:(unsigned int)arg1;
- (unsigned int)siteid;
- (_Bool)hasSiteid;
- (id)clearGid;
- (id)setGid:(id)arg1;
- (id)gid;
- (_Bool)hasGid;
- (id)clearEid;
- (id)setEid:(unsigned int)arg1;
- (unsigned int)eid;
- (_Bool)hasEid;
- (id)clearNickname;
- (id)setNickname:(id)arg1;
- (id)nickname;
- (_Bool)hasNickname;
- (id)clearUser;
- (id)mergeUser:(id)arg1;
- (id)setUserBuilder:(id)arg1;
- (id)setUser:(id)arg1;
- (id)user;
- (_Bool)hasUser;
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

