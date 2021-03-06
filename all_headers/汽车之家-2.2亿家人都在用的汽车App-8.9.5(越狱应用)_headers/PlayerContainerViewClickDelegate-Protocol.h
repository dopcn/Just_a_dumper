//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol PlayerContainerViewClickDelegate <NSObject>
- (void)didClickFullScreenBackButton;
- (void)didClickRoomInfoReloadButton:(unsigned long long)arg1;
- (void)didClickFullScreenButton:(unsigned long long)arg1;
- (void)didClickMoreButton;
- (void)didClickCloseButton;
- (void)didClickGiftButton;
- (void)didClickDanmakuEditButton:(double)arg1;
- (void)didClickPostButton;

@optional
- (void)didChangePlayedProgressByPanGesture;
- (void)didChangeVolumeByPanGesture;
- (void)didChangeBrightnessByPanGesture;
- (void)didClickFullScreenPlayListVideo:(long long)arg1;
- (void)didClickReplayButton;
- (void)didClickTwoTapPause:(_Bool)arg1;
- (void)didClickLikeButtonOnce;
- (void)didClickPauseButton:(_Bool)arg1 andPlayType:(unsigned long long)arg2;
- (void)didClickSubscribeButton;
- (void)didClickLockScreenButton:(_Bool)arg1;
- (void)didClickDanmakuSwitchButton:(_Bool)arg1;
- (void)didClickPlayerContainerView;
- (void)didClickStreamInfoReloadButton:(unsigned long long)arg1;
@end

