//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, YYAddMeSysMessage, YYGroupNotifySysMessage, YYInviteGroupSysMessage, YYJoinGroupRequestSysMessage, YYJoinGroupResponseSysMessage, YYSystemMessage;

@protocol ImSystemMessageCoreClient <NSObject>

@optional
- (void)refreshAllSystemMessage;
- (void)onReceviedGroupNotifySysMessage:(YYGroupNotifySysMessage *)arg1;
- (void)onReceviedJoinGroupRequest:(YYJoinGroupRequestSysMessage *)arg1;
- (void)onReceviedJoinGroupResponse:(YYJoinGroupResponseSysMessage *)arg1;
- (void)onSysteMessageStateChanged:(YYSystemMessage *)arg1;
- (void)onOfflineAddMeSystemMessageLoaded:(NSArray *)arg1;
- (void)onReceviedAddGroupNotify:(YYInviteGroupSysMessage *)arg1;
- (void)onReceviedAddMeNotify:(YYAddMeSysMessage *)arg1;
@end

