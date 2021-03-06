//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface BidRequestApp : PBGeneratedMessage <GeneratedMessageProtocol>
{
    unsigned int hasIsPaidApp_:1;
    unsigned int hasId_:1;
    unsigned int hasName_:1;
    unsigned int hasVersion_:1;
    unsigned int isPaidApp_:1;
    NSString *id;
    NSString *name;
    NSString *version;
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
@property(retain) NSString *version; // @synthesize version;
@property(retain) NSString *name; // @synthesize name;
@property(retain) NSString *id; // @synthesize id;
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
- (id)defaultInstance;
- (id)init;
@property _Bool isPaidApp;
- (void)setHasIsPaidApp:(_Bool)arg1;
- (_Bool)hasIsPaidApp;
- (void)setHasVersion:(_Bool)arg1;
- (_Bool)hasVersion;
- (void)setHasName:(_Bool)arg1;
- (_Bool)hasName;
- (void)setHasId:(_Bool)arg1;
- (_Bool)hasId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

