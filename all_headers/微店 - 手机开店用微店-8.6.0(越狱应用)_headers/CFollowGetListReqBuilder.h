//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class CFollowGetListReq;

@interface CFollowGetListReqBuilder : PBGeneratedMessageBuilder
{
    CFollowGetListReq *resultCfollowGetListReq;
}

@property(retain) CFollowGetListReq *resultCfollowGetListReq; // @synthesize resultCfollowGetListReq;
- (void).cxx_destruct;
- (id)clearPage;
- (id)setPage:(unsigned int)arg1;
- (unsigned int)page;
- (_Bool)hasPage;
- (id)clearLimit;
- (id)setLimit:(unsigned int)arg1;
- (unsigned int)limit;
- (_Bool)hasLimit;
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

