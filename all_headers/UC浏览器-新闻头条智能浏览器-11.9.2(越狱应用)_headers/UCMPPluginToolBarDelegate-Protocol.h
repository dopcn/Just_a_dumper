//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UCMPPluginCtrlBaseProtocol-Protocol.h"

@protocol UCMPPluginToolBarDelegate <UCMPPluginCtrlBaseProtocol>
- (void)onWMFollowBtnClick;
- (double)durationForCurrentPlay;
- (_Bool)isFromLocalFunVideoForCurrentPlay;
- (_Bool)isLimitDownloadForCurrentPlay;
- (_Bool)isInDownloadBlackListForCurrentPlay;
- (_Bool)hasAnyVideoDownloadingInCurrentVideos;
- (_Bool)isFromFileManagerForCurrentPlay;
- (void)closeAnyPanel;
- (void)closePanel:(unsigned long long)arg1;
- (void)openPanel:(unsigned long long)arg1;

@optional
- (void)toolbarCallForShowingPlayButton;
- (void)toolbarCallForHidingPlayButon;
@end

