//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class webmsgMsgBody;

@interface webmsgMsgBody_Builder : PBGeneratedMessageBuilder
{
    webmsgMsgBody *resultMsgBody;
}

@property(retain) webmsgMsgBody *resultMsgBody; // @synthesize resultMsgBody;
- (id)clearType;
- (id)setType:(int)arg1;
- (int)type;
- (_Bool)hasType;
- (id)clearTabs;
- (id)setTabsArray:(id)arg1;
- (id)addTabs:(id)arg1;
- (id)tabsAtIndex:(unsigned long long)arg1;
- (id)tabs;
- (id)clearSiteid;
- (id)setSiteid:(unsigned int)arg1;
- (unsigned int)siteid;
- (_Bool)hasSiteid;
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
- (id)clearAuthtype;
- (id)setAuthtype:(int)arg1;
- (int)authtype;
- (_Bool)hasAuthtype;
- (id)clearMsg;
- (id)setMsg:(id)arg1;
- (id)msg;
- (_Bool)hasMsg;
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

