//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class BIInfo;

@interface BIInfoBuilder : PBGeneratedMessageBuilder
{
    BIInfo *resultBiinfo;
}

@property(retain) BIInfo *resultBiinfo; // @synthesize resultBiinfo;
- (void).cxx_destruct;
- (id)clearInfoDownloadEnlargeMap;
- (id)mergeInfoDownloadEnlargeMap:(id)arg1;
- (id)setInfoDownloadEnlargeMapBuilder:(id)arg1;
- (id)setInfoDownloadEnlargeMap:(id)arg1;
- (id)infoDownloadEnlargeMap;
- (_Bool)hasInfoDownloadEnlargeMap;
- (id)clearInfoHint;
- (id)mergeInfoHint:(id)arg1;
- (id)setInfoHintBuilder:(id)arg1;
- (id)setInfoHint:(id)arg1;
- (id)infoHint;
- (_Bool)hasInfoHint;
- (id)clearInfoArrive;
- (id)mergeInfoArrive:(id)arg1;
- (id)setInfoArriveBuilder:(id)arg1;
- (id)setInfoArrive:(id)arg1;
- (id)infoArrive;
- (_Bool)hasInfoArrive;
- (id)clearInfoKind;
- (id)setInfoKind:(int)arg1;
- (int)infoKind;
- (_Bool)hasInfoKind;
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

