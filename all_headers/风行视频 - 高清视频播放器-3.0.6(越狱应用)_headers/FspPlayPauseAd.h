//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FSPauseMovieAdvtControllerDelegate-Protocol.h"

@class FspDomobPauseAdReportManager, FspPauseMovieAdController, FspPauseMovieAdReportManager, FspTaoBao_PausedAdReportManager, NSString;
@protocol PlayUIOperations;

@interface FspPlayPauseAd : NSObject <FSPauseMovieAdvtControllerDelegate>
{
    FspPauseMovieAdController *_pauseAd;
    FspPauseMovieAdReportManager *_commonPauseAdReporter;
    FspTaoBao_PausedAdReportManager *_tbPauseAdReporter;
    FspDomobPauseAdReportManager *_domobPauseAdReporter;
    id <PlayUIOperations> _playerUIdelegate;
}

@property(nonatomic) __weak id <PlayUIOperations> playerUIdelegate; // @synthesize playerUIdelegate=_playerUIdelegate;
- (void).cxx_destruct;
- (void)openWeb:(id)arg1 type:(unsigned long long)arg2;
- (void)clickTaobaoAd;
- (void)clickCommonAd;
- (void)showTaobaoAd;
- (void)showCommonAd;
- (void)stopPlay;
- (void)reqPauseMovieInfoFinshed:(int)arg1;
- (void)playAdWithLiveChannelId:(id)arg1 liveId:(id)arg2;
- (void)playAdWithVideoChannelId:(id)arg1 videoId:(id)arg2 mediaChannelId:(id)arg3 mediaId:(id)arg4;
- (void)playAdWithChannelId:(id)arg1 mediaId:(id)arg2 isLocalMedia:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

