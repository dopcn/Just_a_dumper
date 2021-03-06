//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerLayer, CADisplayLink, CALayer, NSArray;

@interface KTVDuetVideoInvitorView : UIView
{
    _Bool _shouldTryHidingInvitee;
    _Bool _isInviteeActive;
    _Bool _animating;
    NSArray *_segmentPoints;
    AVPlayer *_player;
    CADisplayLink *_timer;
    AVPlayerLayer *_playerLayer;
    double _initialTime;
    long long _currentIndex;
    UIView *_rightView;
    CALayer *_leftContainerLayer;
    long long _inviteeHiddenTimeStamp;
    long long _invitorHiddenTimeStamp;
    long long _state;
    unsigned long long _millisecondsPerTempo;
    unsigned long long _firstLyricLineStart;
}

@property(nonatomic) unsigned long long firstLyricLineStart; // @synthesize firstLyricLineStart=_firstLyricLineStart;
@property(nonatomic) unsigned long long millisecondsPerTempo; // @synthesize millisecondsPerTempo=_millisecondsPerTempo;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool isInviteeActive; // @synthesize isInviteeActive=_isInviteeActive;
@property(nonatomic) _Bool shouldTryHidingInvitee; // @synthesize shouldTryHidingInvitee=_shouldTryHidingInvitee;
@property(nonatomic) long long invitorHiddenTimeStamp; // @synthesize invitorHiddenTimeStamp=_invitorHiddenTimeStamp;
@property(nonatomic) long long inviteeHiddenTimeStamp; // @synthesize inviteeHiddenTimeStamp=_inviteeHiddenTimeStamp;
@property(retain, nonatomic) CALayer *leftContainerLayer; // @synthesize leftContainerLayer=_leftContainerLayer;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) double initialTime; // @synthesize initialTime=_initialTime;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) CADisplayLink *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) NSArray *segmentPoints; // @synthesize segmentPoints=_segmentPoints;
- (void).cxx_destruct;
- (void)onNotificationAudioRouteChange:(id)arg1;
- (unsigned long long)medianIntervalForLyrics:(id)arg1;
- (_Bool)shouldForceSplitingState;
- (void)tick;
- (unsigned long long)currentTime;
@property(readonly, nonatomic) __weak UIView *videoView;
- (void)showSplit;
- (void)showRight;
- (void)showLeft;
- (_Bool)isInvitorActive;
- (void)hideInvitee;
- (void)showInvitee;
- (void)hideInvitor;
- (void)showInvitor;
- (void)setInviteeActive:(_Bool)arg1;
- (void)stopAnimation;
- (void)startAnimation;
- (void)initPreviewView:(id)arg1 videoInvitorViewWithVideoURL:(id)arg2 segments:(id)arg3 lyric:(id)arg4;
- (id)initWithCoder:(id)arg1 previewView:(id)arg2 videoURL:(id)arg3 segments:(id)arg4 lyric:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1 previewView:(id)arg2 videoURL:(id)arg3 segments:(id)arg4 lyric:(id)arg5;
- (void)dealloc;

@end

