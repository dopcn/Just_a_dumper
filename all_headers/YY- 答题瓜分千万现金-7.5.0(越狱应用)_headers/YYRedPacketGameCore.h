//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseCore.h"

@interface YYRedPacketGameCore : BaseCore
{
}

+ (id)shareInstance;
- (void)_sendData:(id)arg1 expectedResponse:(Class)arg2 completion:(CDUnknownBlockType)arg3;
- (void)queryNewDisciple:(CDUnknownBlockType)arg1;
- (void)discipleRelationWithInvitationCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)gainNewbiePacket:(CDUnknownBlockType)arg1;
- (void)queryIfNewUser:(CDUnknownBlockType)arg1;
- (void)queryWinnerInfoList:(CDUnknownBlockType)arg1;
- (void)requestHomeData:(CDUnknownBlockType)arg1;
- (void)getRecentGoingGameInfo:(unsigned long long)arg1 response:(CDUnknownBlockType)arg2;
- (void)queryUserCanJoinGameOrNotByGameId:(id)arg1 resposne:(CDUnknownBlockType)arg2;
- (void)regsiterEntProtocol;
- (id)init;

@end

