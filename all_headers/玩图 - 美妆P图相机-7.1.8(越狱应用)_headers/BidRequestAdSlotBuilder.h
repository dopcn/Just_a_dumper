//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class BidRequestAdSlot;

@interface BidRequestAdSlotBuilder : PBGeneratedMessageBuilder
{
    BidRequestAdSlot *resultAdSlot;
}

@property(retain) BidRequestAdSlot *resultAdSlot; // @synthesize resultAdSlot;
- (void).cxx_destruct;
- (id)clearMinimumCpm;
- (id)setMinimumCpm:(unsigned long long)arg1;
- (unsigned long long)minimumCpm;
- (_Bool)hasMinimumCpm;
- (id)clearAcceptedInteractionType;
- (id)setAcceptedInteractionTypeValues:(const int *)arg1 count:(unsigned long long)arg2;
- (id)setAcceptedInteractionTypeArray:(id)arg1;
- (id)addAcceptedInteractionType:(int)arg1;
- (int)acceptedInteractionTypeAtIndex:(unsigned long long)arg1;
- (id)acceptedInteractionType;
- (id)clearAcceptedCreativeTypes;
- (id)setAcceptedCreativeTypesValues:(const int *)arg1 count:(unsigned long long)arg2;
- (id)setAcceptedCreativeTypesArray:(id)arg1;
- (id)addAcceptedCreativeTypes:(int)arg1;
- (int)acceptedCreativeTypesAtIndex:(unsigned long long)arg1;
- (id)acceptedCreativeTypes;
- (id)clearAcceptedSize;
- (id)setAcceptedSizeArray:(id)arg1;
- (id)addAcceptedSize:(id)arg1;
- (id)acceptedSizeAtIndex:(unsigned long long)arg1;
- (id)acceptedSize;
- (id)clearPos;
- (id)setPos:(int)arg1;
- (int)pos;
- (_Bool)hasPos;
- (id)clearAdtype;
- (id)setAdtype:(int)arg1;
- (int)adtype;
- (_Bool)hasAdtype;
- (id)clearId;
- (id)setId:(id)arg1;
- (id)id;
- (_Bool)hasId;
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

