//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class login_protocolagt_getcomstat_ack_stat_info;

@interface login_protocolagt_getcomstat_ack_stat_info_Builder : PBGeneratedMessageBuilder
{
    login_protocolagt_getcomstat_ack_stat_info *resultStatInfo;
}

@property(retain) login_protocolagt_getcomstat_ack_stat_info *resultStatInfo; // @synthesize resultStatInfo;
- (id)clearStat;
- (id)setStat:(int)arg1;
- (int)stat;
- (_Bool)hasStat;
- (id)clearDevice;
- (id)setDevice:(int)arg1;
- (int)device;
- (_Bool)hasDevice;
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

