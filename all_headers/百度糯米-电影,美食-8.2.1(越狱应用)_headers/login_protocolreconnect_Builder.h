//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class login_protocolreconnect;

@interface login_protocolreconnect_Builder : PBGeneratedMessageBuilder
{
    login_protocolreconnect *resultReconnect;
}

@property(retain) login_protocolreconnect *resultReconnect; // @synthesize resultReconnect;
- (id)clearLresult;
- (id)setLresult:(unsigned int)arg1;
- (unsigned int)lresult;
- (_Bool)hasLresult;
- (id)clearDevice;
- (id)setDevice:(int)arg1;
- (int)device;
- (_Bool)hasDevice;
- (id)clearEid;
- (id)setEid:(unsigned int)arg1;
- (unsigned int)eid;
- (_Bool)hasEid;
- (id)clearUser;
- (id)mergeUser:(id)arg1;
- (id)setUserBuilder:(id)arg1;
- (id)setUser:(id)arg1;
- (id)user;
- (_Bool)hasUser;
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

