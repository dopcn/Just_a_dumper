//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IMYCommonWebPlayerDelegate-Protocol.h"
#import "IMYVForeViewDelegate-Protocol.h"
#import "IMYVKWebViewDelegate-Protocol.h"

@class CommonVLoadingView, HLRetryView, IMYCommonWebPlayer, IMYCommonWebPlayerFullScreenVC, IMYVForeView, IMYVideoModel, IMYVideoOptions, NSString;
@protocol IMYWebVideoViewDelegate;

@interface IMYWebVideoView : UIView <IMYCommonWebPlayerDelegate, IMYVKWebViewDelegate, IMYVForeViewDelegate>
{
    id <IMYWebVideoViewDelegate> _delegate;
    IMYVideoModel *_model;
    unsigned long long _newsID;
    IMYVideoOptions *_options;
    IMYVForeView *_foreView;
    NSString *_h5Html;
    NSString *_stage;
    UIView *_containerView;
    unsigned long long _tab_id;
    IMYCommonWebPlayer *_player;
    NSString *_pausedReason;
    CommonVLoadingView *_loadingView;
    HLRetryView *_retryView;
    IMYCommonWebPlayerFullScreenVC *_fullScreenVC;
}

+ (void)clearAllCache;
+ (id)currentActiveView;
+ (void)load;
@property(retain, nonatomic) IMYCommonWebPlayerFullScreenVC *fullScreenVC; // @synthesize fullScreenVC=_fullScreenVC;
@property(retain, nonatomic) HLRetryView *retryView; // @synthesize retryView=_retryView;
@property(retain, nonatomic) CommonVLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSString *pausedReason; // @synthesize pausedReason=_pausedReason;
@property(retain, nonatomic) IMYCommonWebPlayer *player; // @synthesize player=_player;
@property(nonatomic) unsigned long long tab_id; // @synthesize tab_id=_tab_id;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) NSString *stage; // @synthesize stage=_stage;
@property(copy, nonatomic) NSString *h5Html; // @synthesize h5Html=_h5Html;
@property(retain, nonatomic) IMYVForeView *foreView; // @synthesize foreView=_foreView;
@property(retain, nonatomic) IMYVideoOptions *options; // @synthesize options=_options;
@property(nonatomic) unsigned long long newsID; // @synthesize newsID=_newsID;
@property(retain, nonatomic) IMYVideoModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <IMYWebVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)rotate;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidStartLoad:(id)arg1;
- (void)videoPlayer:(id)arg1 breakInfo:(id)arg2;
- (void)videoPlayerLoadFinished:(id)arg1;
- (void)videoPlayerEnterFullscreen:(id)arg1 isFullscreen:(_Bool)arg2;
- (void)videoPlayerPlay3G:(id)arg1;
- (void)videoPlayerSeekTimeChange:(id)arg1;
- (id)videoPlayerWillGetInfo:(id)arg1;
- (void)videoPlayerWillToCollect:(id)arg1;
- (void)videoPlayerWillToShare:(id)arg1;
- (void)videoPlayer:(id)arg1 changeStateTo:(long long)arg2;
- (_Bool)isMatch;
- (_Bool)isLoading;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (void)stop;
- (void)dismiss;
- (void)seekToTime:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pause;
- (void)continuePlay;
- (void)handlePlay;
- (void)play;
- (void)pauseForReuse;
- (void)prepareForReuse;
@property(readonly, nonatomic) _Bool switchFull;
- (void)tapToPlay;
- (void)foreViewSignleTapped:(id)arg1;
- (void)foreView:(id)arg1 playButtonTapped:(id)arg2;
- (void)retryButtonTapped:(id)arg1;
- (id)initWithModel:(id)arg1 options:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

