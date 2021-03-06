//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class MapRoutePoint, NSString;

@interface TrafficEta : PBGeneratedMessage <GeneratedMessageProtocol>
{
    unsigned int hasBeginPos_:1;
    unsigned int hasEndPos_:1;
    unsigned int hasTime_:1;
    MapRoutePoint *beginPos;
    MapRoutePoint *endPos;
    unsigned int time;
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
@property unsigned int time; // @synthesize time;
@property(retain) MapRoutePoint *endPos; // @synthesize endPos;
@property(retain) MapRoutePoint *beginPos; // @synthesize beginPos;
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
- (void)setHasTime:(_Bool)arg1;
- (_Bool)hasTime;
- (void)setHasEndPos:(_Bool)arg1;
- (_Bool)hasEndPos;
- (void)setHasBeginPos:(_Bool)arg1;
- (_Bool)hasBeginPos;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

