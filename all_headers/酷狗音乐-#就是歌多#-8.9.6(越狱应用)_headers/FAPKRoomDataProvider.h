//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FAPKRoomDataProviderProtocol-Protocol.h"

@class FACommonLiveInfo, FALCNormalRoomInfo, FALCSocketInfoModel, FALCUserStarRelModel, FALCViewersCountModel, FAPKLiveDAO, FAPKRoomInfoModel, FAUserUserInfo, NSMutableArray, NSString;
@protocol FAPKRoomProviderDelegate;

@interface FAPKRoomDataProvider : NSObject <FAPKRoomDataProviderProtocol>
{
    id <FAPKRoomProviderDelegate> delegate;
    long long userId;
    long long kugouId;
    NSString *songName;
    FALCSocketInfoModel *socketInfo;
    unsigned long long _mainRoomId;
    unsigned long long _guestRoomId;
    FAPKRoomInfoModel *_roomInfo;
    FALCNormalRoomInfo *_normalRoomInfo;
    FACommonLiveInfo *_liveInfo;
    FAUserUserInfo *_userInfo;
    FALCUserStarRelModel *_starRel;
    FALCViewersCountModel *_viewersModel;
    FAPKLiveDAO *_liveDao;
    NSMutableArray *_lastChatInfo;
}

@property(retain, nonatomic) NSMutableArray *lastChatInfo; // @synthesize lastChatInfo=_lastChatInfo;
@property(retain, nonatomic) FAPKLiveDAO *liveDao; // @synthesize liveDao=_liveDao;
@property(retain, nonatomic) FALCViewersCountModel *viewersModel; // @synthesize viewersModel=_viewersModel;
@property(retain, nonatomic) FALCUserStarRelModel *starRel; // @synthesize starRel=_starRel;
@property(retain, nonatomic) FAUserUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) FACommonLiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(retain, nonatomic) FALCNormalRoomInfo *normalRoomInfo; // @synthesize normalRoomInfo=_normalRoomInfo;
@property(retain, nonatomic) FAPKRoomInfoModel *roomInfo; // @synthesize roomInfo=_roomInfo;
@property(nonatomic) unsigned long long guestRoomId; // @synthesize guestRoomId=_guestRoomId;
@property(nonatomic) unsigned long long mainRoomId; // @synthesize mainRoomId=_mainRoomId;
@property(retain, nonatomic) FALCSocketInfoModel *socketInfo; // @synthesize socketInfo;
@property(copy, nonatomic) NSString *songName; // @synthesize songName;
@property(nonatomic) long long kugouId; // @synthesize kugouId;
@property(nonatomic) long long userId; // @synthesize userId;
@property(nonatomic) __weak id <FAPKRoomProviderDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)getLiveRoomOrderStatus;
- (id)lastChatInfoList;
- (void)getLastChatInfoList;
- (id)roomViewerNumInfo;
- (void)getRoomViewerNum;
- (void)changedFollowStates;
- (id)starRelModel;
- (id)starUserInfo;
- (void)getFXUserStarRel;
- (void)getFXUserInfo;
- (unsigned long long)delegateRoomId;
- (id)livePathInfo;
- (void)getLivePathInfo;
- (void)getSocketInfo;
- (void)getEnterRoomInfo;
- (id)enterRoomInfo;
- (void)getPKRoomInfo;
- (void)reloadRoomId:(unsigned long long)arg1;
- (id)pKRoomInfo;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

