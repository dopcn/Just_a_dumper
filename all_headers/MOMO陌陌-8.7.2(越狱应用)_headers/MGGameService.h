//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MGIMClientDelegate-Protocol.h"

@class MGActionItem, NSString;

@interface MGGameService : NSObject <MGIMClientDelegate>
{
    _Bool _gameRunning;
    _Bool _isEnterIntoRoom;
    unsigned short _nearServerPort;
    MGActionItem *_currentH5ActionItem;
    NSString *_nearServerHost;
    NSString *_nearServerId;
    CDUnknownBlockType _startBlock;
    MGActionItem *_h5WolfKillActionItem;
    MGActionItem *_h5WolfKillHallActionItem;
    long long _roomType;
    long long _roomId;
    long long _createRoomType;
    long long _enterRoomType;
    NSString *_secret;
    double _lastClickTime;
    NSString *_currentH5ActionPath;
    NSString *_cdnStatus;
    NSString *_checkHostName;
    NSString *_finalHostName;
    long long _finishCheckHostNameCount;
}

+ (_Bool)isGameRunning;
+ (id)shareService;
@property(nonatomic) long long finishCheckHostNameCount; // @synthesize finishCheckHostNameCount=_finishCheckHostNameCount;
@property(copy, nonatomic) NSString *finalHostName; // @synthesize finalHostName=_finalHostName;
@property(copy, nonatomic) NSString *checkHostName; // @synthesize checkHostName=_checkHostName;
@property(copy, nonatomic) NSString *cdnStatus; // @synthesize cdnStatus=_cdnStatus;
@property(copy, nonatomic) NSString *currentH5ActionPath; // @synthesize currentH5ActionPath=_currentH5ActionPath;
@property(nonatomic) double lastClickTime; // @synthesize lastClickTime=_lastClickTime;
@property(copy, nonatomic) NSString *secret; // @synthesize secret=_secret;
@property(nonatomic) long long enterRoomType; // @synthesize enterRoomType=_enterRoomType;
@property(nonatomic) long long createRoomType; // @synthesize createRoomType=_createRoomType;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(nonatomic) long long roomType; // @synthesize roomType=_roomType;
@property(retain, nonatomic) MGActionItem *h5WolfKillHallActionItem; // @synthesize h5WolfKillHallActionItem=_h5WolfKillHallActionItem;
@property(retain, nonatomic) MGActionItem *h5WolfKillActionItem; // @synthesize h5WolfKillActionItem=_h5WolfKillActionItem;
@property(copy, nonatomic) CDUnknownBlockType startBlock; // @synthesize startBlock=_startBlock;
@property(copy, nonatomic) NSString *nearServerId; // @synthesize nearServerId=_nearServerId;
@property(nonatomic) unsigned short nearServerPort; // @synthesize nearServerPort=_nearServerPort;
@property(copy, nonatomic) NSString *nearServerHost; // @synthesize nearServerHost=_nearServerHost;
@property(nonatomic) _Bool isEnterIntoRoom; // @synthesize isEnterIntoRoom=_isEnterIntoRoom;
@property(retain, nonatomic) MGActionItem *currentH5ActionItem; // @synthesize currentH5ActionItem=_currentH5ActionItem;
- (void).cxx_destruct;
- (void)checkH5GameFailHandleWithIdentifier:(id)arg1;
- (void)checkH5GameErrSelector:(id)arg1;
- (void)checkH5GameFailSelector:(id)arg1;
- (void)checkH5GameOkSelector:(id)arg1;
- (void)checkH5GameHostNameWithName:(id)arg1;
- (void)getCheckUrlFailSelector:(id)arg1;
- (void)getCheckUrlErrSelector:(id)arg1;
- (void)getCheckUrlOkSelector:(id)arg1;
- (void)getProfileFailSelector:(id)arg1;
- (void)getProfileErrSelector:(id)arg1;
- (void)getProfileOkSelector:(id)arg1;
- (void)getPersonalProfile;
- (void)handleEnterH5GameSystem:(id)arg1 actionPath:(id)arg2;
- (void)handleEnterH5WolfKillHall:(id)arg1;
- (void)hallDataStaticWithAction:(id)arg1;
- (void)loginRoomFailSelector:(id)arg1;
- (void)loginRoomErrorSelector:(id)arg1;
- (void)startUpH5webview:(id)arg1 host:(id)arg2 port:(id)arg3 roomtype:(id)arg4 v:(id)arg5 roomid:(id)arg6;
- (void)loginRoomOkSelector:(id)arg1;
- (void)handleEnterH5WolfKill:(id)arg1;
- (void)failEnterRoomRequest:(id)arg1;
- (void)finishEnterRoomRequest:(id)arg1;
- (void)failCreateRequest:(id)arg1;
- (void)finishCreateRequest:(id)arg1;
- (void)failEnterRequest:(id)arg1;
- (void)finishEnterRequest:(id)arg1;
- (void)client:(id)arg1 authSuccess:(_Bool)arg2;
- (void)client:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)searchRoomFailSelector:(id)arg1;
- (void)searchRoomErrorSelector:(id)arg1;
- (void)searchRoomOkSelector:(id)arg1;
- (void)handleEnterWolfKill:(id)arg1;
- (void)stopService;
- (void)startService:(CDUnknownBlockType)arg1 quickLogin:(_Bool)arg2;
- (_Bool)gameIsRunning;
- (_Bool)running;
- (void)configOption;
- (id)init;
- (void)handleGameAction:(id)arg1 actionPath:(id)arg2 actionID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

