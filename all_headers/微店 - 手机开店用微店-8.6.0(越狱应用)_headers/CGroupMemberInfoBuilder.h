//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class CGroupMemberInfo;

@interface CGroupMemberInfoBuilder : PBGeneratedMessageBuilder
{
    CGroupMemberInfo *resultCgroupMemberInfo;
}

@property(retain) CGroupMemberInfo *resultCgroupMemberInfo; // @synthesize resultCgroupMemberInfo;
- (void).cxx_destruct;
- (id)clearSilenced;
- (id)setSilenced:(unsigned long long)arg1;
- (unsigned long long)silenced;
- (_Bool)hasSilenced;
- (id)clearNickname;
- (id)setNickname:(id)arg1;
- (id)nickname;
- (_Bool)hasNickname;
- (id)clearMemberType;
- (id)setMemberType:(unsigned int)arg1;
- (unsigned int)memberType;
- (_Bool)hasMemberType;
- (id)clearMemberUid;
- (id)setMemberUid:(unsigned long long)arg1;
- (unsigned long long)memberUid;
- (_Bool)hasMemberUid;
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

