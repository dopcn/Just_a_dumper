//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "EmbedPlayerEventDelegate-Protocol.h"
#import "OverlayViewDelegate-Protocol.h"
#import "RecPlayendViewDelegate-Protocol.h"

@class EmbedPlayer, NSString, RecOverlayView, RecPlayEndView, RecommendCardsViewController, UILabel, UIView;

@interface FeedPlayerModule : NSObject <EmbedPlayerEventDelegate, RecPlayendViewDelegate, OverlayViewDelegate>
{
    _Bool _isPlayEnd;
    _Bool _isAutoPlay;
    _Bool _isEmbedPlyerStoped;
    _Bool _isWillEnterPurchaseUnicomView;
    _Bool _removePlayEndView;
    _Bool _isAutoInsertCard;
    _Bool _isColseSwitchPlayWithNoWifi;
    RecommendCardsViewController *_superViewController;
    RecOverlayView *_overlayView;
    EmbedPlayer *_embedPlayer;
    RecPlayEndView *_playEndView;
    long long _isauto;
    NSString *_currentVideoPicUrl;
    long long _isAutoInsertPercent;
    UIView *_mobileTrafficMessageView;
    UILabel *_mobileTrafficMessageLable;
}

@property(retain, nonatomic) UILabel *mobileTrafficMessageLable; // @synthesize mobileTrafficMessageLable=_mobileTrafficMessageLable;
@property(retain, nonatomic) UIView *mobileTrafficMessageView; // @synthesize mobileTrafficMessageView=_mobileTrafficMessageView;
@property(nonatomic) _Bool isColseSwitchPlayWithNoWifi; // @synthesize isColseSwitchPlayWithNoWifi=_isColseSwitchPlayWithNoWifi;
@property(nonatomic) long long isAutoInsertPercent; // @synthesize isAutoInsertPercent=_isAutoInsertPercent;
@property(nonatomic) _Bool isAutoInsertCard; // @synthesize isAutoInsertCard=_isAutoInsertCard;
@property(retain, nonatomic) NSString *currentVideoPicUrl; // @synthesize currentVideoPicUrl=_currentVideoPicUrl;
@property(nonatomic) _Bool removePlayEndView; // @synthesize removePlayEndView=_removePlayEndView;
@property(nonatomic) _Bool isWillEnterPurchaseUnicomView; // @synthesize isWillEnterPurchaseUnicomView=_isWillEnterPurchaseUnicomView;
@property(nonatomic) _Bool isEmbedPlyerStoped; // @synthesize isEmbedPlyerStoped=_isEmbedPlyerStoped;
@property(nonatomic) _Bool isAutoPlay; // @synthesize isAutoPlay=_isAutoPlay;
@property(nonatomic) _Bool isPlayEnd; // @synthesize isPlayEnd=_isPlayEnd;
@property(nonatomic) long long isauto; // @synthesize isauto=_isauto;
@property(retain, nonatomic) RecPlayEndView *playEndView; // @synthesize playEndView=_playEndView;
@property(nonatomic) __weak EmbedPlayer *embedPlayer; // @synthesize embedPlayer=_embedPlayer;
@property(nonatomic) __weak RecOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) __weak RecommendCardsViewController *superViewController; // @synthesize superViewController=_superViewController;
- (void).cxx_destruct;
- (id)keyWindow;
- (void)dpauseVideo;
- (void)stopVideo;
- (void)pauseVideo;
- (void)showPlayEndView;
- (id)getFeedContentView:(id)arg1;
- (void)embedPlayerPlay:(id)arg1 from:(float)arg2;
- (void)showOverlaysPlayingView;
- (void)isShouldAutoPlay;
- (double)getFeedVideoPlayed:(id)arg1;
- (void)saveFeedVideoPlayHistory:(id)arg1 played:(double)arg2 isoutpage:(_Bool)arg3;
- (void)videoEndWithUcStatistics:(id)arg1;
- (void)overlayViewClose;
- (void)overlayViewToFullscreen:(id)arg1;
- (void)overlayViewToDetailComment:(id)arg1;
- (void)overLayViewResume;
- (void)didClikUnLikeAction;
- (void)refreshAction;
- (id)saveLocalHistoryThumbUrlStringInEmbedPlayer:(id)arg1;
- (void)embedPlayer:(id)arg1 controllsViewDidShow:(_Bool)arg2;
- (void)didBeginTouchingContentsForEmbedPlayer:(id)arg1;
- (void)durationPlayedForEmbedPlayer:(id)arg1 duration:(double)arg2;
- (void)embedPlayer:(id)arg1 playError:(long long)arg2;
- (void)didEndPlayVideoInEmbedPlayer:(id)arg1;
- (void)didStartPlayVideoInEmbedPlayer:(id)arg1;
- (_Bool)ownerControllerIsActiveInEmbedPlayer:(id)arg1;
- (void)didClickZoomButtonEventForEmbedPlayer:(id)arg1;
- (void)embedPlayer:(id)arg1 isWillEnterPurchaseUnicomView:(_Bool)arg2;
- (void)didStopPlayingHotSpotVideoForEmbedPlayer:(id)arg1;
- (void)willTransformToModePortraitTopForEmbedPlayer:(id)arg1;
- (void)didFinishPositiveVideoInEmbedPlayer:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

