//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol XMLivePlayerDelegate, XMTrackPlayerDelegate;

@interface XMSDKPlayer : NSObject
{
    _Bool _usingHighQualityUrl;
    id <XMTrackPlayerDelegate> _trackPlayDelegate;
    id <XMLivePlayerDelegate> _livePlayDelegate;
    long long _playMode;
}

+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedPlayer;
@property(nonatomic) long long playMode; // @synthesize playMode=_playMode;
@property(nonatomic) _Bool usingHighQualityUrl; // @synthesize usingHighQualityUrl=_usingHighQualityUrl;
@property(nonatomic) id <XMLivePlayerDelegate> livePlayDelegate; // @synthesize livePlayDelegate=_livePlayDelegate;
@property(nonatomic) id <XMTrackPlayerDelegate> trackPlayDelegate; // @synthesize trackPlayDelegate=_trackPlayDelegate;
- (id)currentPlayingProgram;
- (id)currentPlayingRadio;
- (_Bool)forceClearCacheDataForPath:(id)arg1;
- (void)XMLivePlayerDidDataBufferEnd:(id)arg1;
- (void)XMLivePlayerDidDataBufferStart:(id)arg1;
- (void)XMLivePlayerWillPlaying:(id)arg1;
- (void)XMLiveRadioPlayerDidStopped:(id)arg1;
- (void)XMLiveRadioPlayerDidStart:(id)arg1;
- (void)XMLiveRadioPlayerDidPlaying:(id)arg1;
- (void)XMLiveRadioPlayerDidPaused:(id)arg1;
- (void)XMLiveRadioPlayerDidEnd:(id)arg1;
- (void)XMLiveRadioPlayer:(id)arg1 notifyPlayProgress:(double)arg2 currentTime:(long long)arg3;
- (void)XMLiveRadioPlayer:(id)arg1 notifyCacheProgress:(double)arg2;
- (void)XMLiveRadioPlayer:(id)arg1 didFailWithError:(id)arg2;
- (long long)getTrackPlayMode;
- (void)setTrackPlayMode:(long long)arg1;
- (void)player:(id)arg1 didReplacePlayList:(id)arg2;
- (_Bool)player:(id)arg1 shouldContinueNextTrackWhenFailed:(id)arg2;
- (void)player:(id)arg1 didFailedToPlayTrack:(id)arg2 withError:(id)arg3;
- (void)player:(id)arg1 didChangeToTrack:(id)arg2;
- (void)player:(id)arg1 notifyCacheProcess:(double)arg2;
- (void)player:(id)arg1 notifyPlayProcess:(double)arg2 currentSecond:(unsigned long long)arg3;
- (void)playerDidStopped:(id)arg1;
- (void)playerDidEnd:(id)arg1;
- (void)playerDidPaused:(id)arg1;
- (void)playerDidPlaying:(id)arg1;
- (void)playerWillPlaying:(id)arg1;
- (void)playerDidStart:(id)arg1;
- (void)playerWillStart:(id)arg1;
- (void)playerDidPlaylistEnd:(id)arg1;
- (void)playPreProgram;
- (void)playNextProgram;
- (_Bool)seekHistoryLivePlay:(double)arg1;
- (void)startHistoryLivePlayWithRadio:(id)arg1 withProgram:(id)arg2 inProgramList:(id)arg3;
- (void)startHistoryLivePlayWithRadio:(id)arg1 withProgram:(id)arg2;
- (void)stopLivePlay;
- (void)resumeLivePlay;
- (void)pauseLivePlay;
- (void)startLivePlayWithRadio:(id)arg1;
- (void)clearCacheSafely;
- (id)prevTrack;
- (id)nextTrack;
- (id)playList;
- (void)saveCurrentPlayHistory;
- (void)checkPlayModeForEnd;
- (void)setAutoNexTrack:(_Bool)arg1;
- (_Bool)playPrevTrack;
- (_Bool)playNextTrack;
- (void)replacePlayList:(id)arg1;
- (void)stopTrackPlay;
- (void)resumeTrackPlay;
- (void)pauseTrackPlay;
- (void)continuePlayFromAlbum:(long long)arg1 track:(long long)arg2;
- (void)playWithTrack:(id)arg1 playlist:(id)arg2;
- (void)seekToTime:(double)arg1;
- (id)currentTrack;
- (void)setAutoPlay:(_Bool)arg1;
- (unsigned long long)getTotalCacheSize;
- (void)setVolume:(float)arg1;
- (id)init;
- (void)dealloc;

@end

