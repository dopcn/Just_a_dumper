//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSMutableSet, NSString, YYBaseLoadingView, YYGamePlaybackPlayerView;

@interface YYGamePlaybackViewController : UIViewController
{
    NSString *_currentPlayUrl;
    YYGamePlaybackPlayerView *_playerView;
    YYBaseLoadingView *_loadingView;
    NSMutableSet *_mutedUids;
    struct CGPoint _startPoint;
}

@property(retain, nonatomic) NSMutableSet *mutedUids; // @synthesize mutedUids=_mutedUids;
@property(retain, nonatomic) YYBaseLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) YYGamePlaybackPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) NSString *currentPlayUrl; // @synthesize currentPlayUrl=_currentPlayUrl;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
- (void).cxx_destruct;
- (void)onKickOffWithReason:(id)arg1;
- (void)onExitPlayback;
- (struct CGRect)getFrameOriginal;
- (void)updatePlayerSize;
- (void)setBackGround;
- (void)showPlayerView;
- (void)endLoading;
- (void)showLoading;
- (void)getPlaybacktrack;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

