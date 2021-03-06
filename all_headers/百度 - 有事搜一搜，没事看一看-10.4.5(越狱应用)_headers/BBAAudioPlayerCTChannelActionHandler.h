//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BBAAudioPlayerActionHandlerBase.h"

@interface BBAAudioPlayerCTChannelActionHandler : BBAAudioPlayerActionHandlerBase
{
}

- (void)p_sendUserEvent:(long long)arg1 withAlbumID:(id)arg2 andTrackID:(id)arg3;
- (void)updatePlayProgress:(long long)arg1;
- (void)getPlayListNextPageWithUserInfo:(id)arg1 andCallback:(CDUnknownBlockType)arg2;
- (void)getPlayListLastPageWithUserInfo:(id)arg1 andCallback:(CDUnknownBlockType)arg2;
- (void)sendContinueFullPlayerAlert;
- (void)sendDismissFullPlayerAlert;
- (void)sendClickPlayListBKView;
- (void)sendClickPlayListBtnUserEvent;
- (void)sendSwitchToFullPlayerUserEvent;
- (void)sendSwitchToMIniPlayerUserEvent;
- (void)sendCloseFullPlayerUserEvent;
- (void)sendCloseMiniPlayerUserEvent;
- (void)sendTopRefreshUserEvent:(id)arg1 andTrackID:(id)arg2;
- (void)sendBottomRefreshUserEvent:(id)arg1 andTrackID:(id)arg2;
- (void)sendDownloadUserEvent;
- (void)didFailedWithErrorInfo:(id)arg1;
- (void)updatePlayerStatus:(long long)arg1 withCurrent:(double)arg2;
- (void)switchPlayMode:(long long)arg1;
- (void)playOrPause;
- (void)nextAudio;
- (void)lastAudio;

@end

