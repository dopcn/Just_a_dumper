//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface CFollowGetContactListReq : PBGeneratedMessage <GeneratedMessageProtocol>
{
    unsigned int hasTime_:1;
    unsigned int hasLimit_:1;
    unsigned int hasPage_:1;
    unsigned int hasOpType_:1;
    unsigned int hasFriendType_:1;
    unsigned long long time;
    unsigned int limit;
    unsigned int page;
    unsigned int opType;
    unsigned int friendType;
}

+ (id)builderWithPrototype:(id)arg1;
+ (id)builder;
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromCodedInputStream:(id)arg1;
+ (id)parseFromInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromInputStream:(id)arg1;
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromData:(id)arg1;
+ (id)defaultInstance;
+ (void)initialize;
@property unsigned int friendType; // @synthesize friendType;
@property unsigned int opType; // @synthesize opType;
@property unsigned long long time; // @synthesize time;
@property unsigned int page; // @synthesize page;
@property unsigned int limit; // @synthesize limit;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)storeInDictionary:(id)arg1;
- (void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2;
- (id)toBuilder;
- (id)builder;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (_Bool)isInitialized;
- (id)defaultInstance;
- (id)init;
- (void)setHasFriendType:(_Bool)arg1;
- (_Bool)hasFriendType;
- (void)setHasOpType:(_Bool)arg1;
- (_Bool)hasOpType;
- (void)setHasTime:(_Bool)arg1;
- (_Bool)hasTime;
- (void)setHasPage:(_Bool)arg1;
- (_Bool)hasPage;
- (void)setHasLimit:(_Bool)arg1;
- (_Bool)hasLimit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

