//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class offline_protocolget_offline_count_ack;

@interface offline_protocolget_offline_count_ack_Builder : PBGeneratedMessageBuilder
{
    offline_protocolget_offline_count_ack *resultGetOfflineCountAck;
}

@property(retain) offline_protocolget_offline_count_ack *resultGetOfflineCountAck; // @synthesize resultGetOfflineCountAck;
- (id)clearType;
- (id)setType:(int)arg1;
- (int)type;
- (_Bool)hasType;
- (id)clearSidItem;
- (id)setSidItemArray:(id)arg1;
- (id)addSidItem:(id)arg1;
- (id)sidItemAtIndex:(unsigned long long)arg1;
- (id)sidItem;
- (id)clearTab;
- (id)setTab:(id)arg1;
- (id)tab;
- (_Bool)hasTab;
- (id)clearItem;
- (id)setItemArray:(id)arg1;
- (id)addItem:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)item;
- (id)clearLresult;
- (id)setLresult:(unsigned int)arg1;
- (unsigned int)lresult;
- (_Bool)hasLresult;
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

