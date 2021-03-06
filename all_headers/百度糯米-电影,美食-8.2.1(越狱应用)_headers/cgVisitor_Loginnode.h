//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString, PBAppendableArray, PBArray;

@interface cgVisitor_Loginnode : PBGeneratedMessage <GeneratedMessageProtocol>
{
    unsigned int hasEntertime_:1;
    unsigned int hasTimestamp_:1;
    unsigned int hasEnterip_:1;
    unsigned int hasDevice_:1;
    unsigned int hasStatus_:1;
    unsigned int hasReason_:1;
    unsigned int hasUuid_:1;
    unsigned long long entertime;
    unsigned long long timestamp;
    unsigned int enterip;
    int device;
    int status;
    int reason;
    long long uuid;
    PBAppendableArray *loginidArray;
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
@property unsigned long long timestamp; // @synthesize timestamp;
@property(retain) PBAppendableArray *loginidArray; // @synthesize loginidArray;
@property long long uuid; // @synthesize uuid;
@property unsigned int enterip; // @synthesize enterip;
@property unsigned long long entertime; // @synthesize entertime;
@property int reason; // @synthesize reason;
@property int status; // @synthesize status;
@property int device; // @synthesize device;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)storeInDictionary:(id)arg1;
- (void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2;
- (id)toBuilder;
- (id)builder;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (_Bool)isInitialized;
- (long long)loginidAtIndex:(unsigned long long)arg1;
@property(readonly) PBArray *loginid; // @dynamic loginid;
- (id)defaultInstance;
- (id)init;
- (void)setHasTimestamp:(_Bool)arg1;
- (_Bool)hasTimestamp;
- (void)setHasUuid:(_Bool)arg1;
- (_Bool)hasUuid;
- (void)setHasEnterip:(_Bool)arg1;
- (_Bool)hasEnterip;
- (void)setHasEntertime:(_Bool)arg1;
- (_Bool)hasEntertime;
- (void)setHasReason:(_Bool)arg1;
- (_Bool)hasReason;
- (void)setHasStatus:(_Bool)arg1;
- (_Bool)hasStatus;
- (void)setHasDevice:(_Bool)arg1;
- (_Bool)hasDevice;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

