//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSArray, NSMutableArray, NSString, TimeRange;

@interface UserInteractMessage : PBGeneratedMessage <GeneratedMessageProtocol>
{
    unsigned int hasMsgType_:1;
    unsigned int hasAppId_:1;
    unsigned int hasDeviceId_:1;
    unsigned int hasUid_:1;
    unsigned int hasTimeRange_:1;
    int msgType;
    int appId;
    NSString *deviceId;
    NSString *uid;
    TimeRange *timeRange;
    NSMutableArray *msgListArray;
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
@property(retain) TimeRange *timeRange; // @synthesize timeRange;
@property int appId; // @synthesize appId;
@property(retain) NSMutableArray *msgListArray; // @synthesize msgListArray;
@property int msgType; // @synthesize msgType;
@property(retain) NSString *uid; // @synthesize uid;
@property(retain) NSString *deviceId; // @synthesize deviceId;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)storeInDictionary:(id)arg1;
- (void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2;
- (id)toBuilder;
- (id)builder;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (_Bool)isInitialized;
- (id)msgListAtIndex:(unsigned long long)arg1;
@property(readonly) NSArray *msgList; // @dynamic msgList;
- (id)defaultInstance;
- (id)init;
- (void)setHasTimeRange:(_Bool)arg1;
- (_Bool)hasTimeRange;
- (void)setHasAppId:(_Bool)arg1;
- (_Bool)hasAppId;
- (void)setHasMsgType:(_Bool)arg1;
- (_Bool)hasMsgType;
- (void)setHasUid:(_Bool)arg1;
- (_Bool)hasUid;
- (void)setHasDeviceId:(_Bool)arg1;
- (_Bool)hasDeviceId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

