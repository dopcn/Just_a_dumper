//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WBVideoPlaybackEventListener-Protocol.h"

@class NSDictionary, NSString, NSTimer, WBVideoPlayerController, WBVideoPlayerLog;
@protocol OS_dispatch_queue, WBVideoPlayerLogManagerDelegate;

@interface WBVideoPlayerLogManager : NSObject <WBVideoPlaybackEventListener>
{
    struct {
        unsigned int willCreateLog:1;
        unsigned int shouldCommitLog:1;
        unsigned int didCreateLog:1;
        unsigned int didFinishLog:1;
    } _delegateHas;
    id <WBVideoPlayerLogManagerDelegate> _delegate;
    WBVideoPlayerController *_playerController;
    NSObject<OS_dispatch_queue> *_videoLogQueue;
    NSTimer *_cpuTimer;
    WBVideoPlayerLog *_playerLog;
    NSDictionary *_queryPlayerItemParams;
}

@property(retain, nonatomic) NSDictionary *queryPlayerItemParams; // @synthesize queryPlayerItemParams=_queryPlayerItemParams;
@property(retain, nonatomic) WBVideoPlayerLog *playerLog; // @synthesize playerLog=_playerLog;
@property(retain, nonatomic) NSTimer *cpuTimer; // @synthesize cpuTimer=_cpuTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *videoLogQueue; // @synthesize videoLogQueue=_videoLogQueue;
@property(nonatomic) __weak WBVideoPlayerController *playerController; // @synthesize playerController=_playerController;
@property(nonatomic) __weak id <WBVideoPlayerLogManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)playerLogCreateCommitNotificationPara;
- (void)logErrorWhileQueringAVPlayerItem:(id)arg1 videoItem:(id)arg2 autoplay:(_Bool)arg3;
- (id)realTimeActionLogExtraParametersFor:(id)arg1 stateData:(id)arg2;
- (void)configStateData:(id)arg1;
- (id)createStateData;
- (void)_finishCurrentPlayerLogWithPlayerItem:(id)arg1 playerLayer:(id)arg2 isChangeDefinition:(_Bool)arg3;
- (void)finishPlayerLogWhenChangeDefinition:(_Bool)arg1;
- (void)finishPlayerLog;
- (void)beginNewPlayerLogWithVideoItem:(id)arg1 autoplay:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 didEnterFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 didExitFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerControllerUserSeekDone:(id)arg1;
- (void)videoPlayerController:(id)arg1 playerWillStartSeek:(_Bool)arg2;
- (void)videoPlayerControllerUserWillStartSeek:(id)arg1;
- (void)videoPlayerController:(id)arg1 playerSeekfinished:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 playerSeekStart:(CDStruct_1b6d18a9)arg2 isResume:(_Bool)arg3;
- (void)logCPUUsage;
- (void)videoPlayerController:(id)arg1 didFailWithError:(id)arg2;
- (void)videoPlayerControllerPlaybackLikelyToKeepUp:(id)arg1;
- (void)videoPlayerControllerDidStallPlayback:(id)arg1;
- (void)videoPlayerController:(id)arg1 didPerformPauseWithReason:(long long)arg2 reasonApplied:(_Bool)arg3;
- (void)videoPlayerController:(id)arg1 willPerformPauseWithReason:(long long)arg2;
- (void)videoPlayerController:(id)arg1 didPerformPlayWithReason:(long long)arg2 reasonApplied:(_Bool)arg3;
- (void)videoPlayerController:(id)arg1 didTransitionFromPlaybackState:(long long)arg2 toPlaybackState:(long long)arg3;
- (void)videoPlayerController:(id)arg1 queryPlayerItemFinishedWithError:(id)arg2 extraParams:(id)arg3;
@property(readonly, nonatomic) WBVideoPlayerLog *currentPlayerLog;
- (void)stopCPUTimerIfNeed;
- (void)startCPUTimerIfNeed;
- (id)initWithPlayerController:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)transferInPlayerLog:(id)arg1;
- (id)transferOutPlayerLog;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

