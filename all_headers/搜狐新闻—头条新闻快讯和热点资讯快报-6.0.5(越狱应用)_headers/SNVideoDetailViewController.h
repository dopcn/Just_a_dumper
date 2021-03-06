//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNBaseViewController.h"

#import "SNActionSheetDelegate-Protocol.h"
#import "SNVideosModelDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SNActionMenuController, SNActionSheet, SNHeadSelectView, SNNewsShareManager, SNTripletsLoadingView, SNVideoData, SNVideoDetailModel, SNVideoDetailRecommendModel, SNVideosModel, UIButton, UITableView, UIView, WSMVVideoPlayerView;

@interface SNVideoDetailViewController : SNBaseViewController <SNActionSheetDelegate, SNVideosModelDelegate, UITableViewDataSource, UITableViewDelegate>
{
    SNHeadSelectView *_sectionSelectView;
    UIButton *_shareButton;
    SNTripletsLoadingView *_loadingView;
    NSString *_newsfrom;
    UIView *_emptyNoticeView;
    _Bool _isdissAppear;
    int _videoPlayerRefer;
    NSString *_channelId;
    NSString *_link;
    NSString *_subId;
    SNVideoData *_currentVideo;
    NSMutableArray *_timelineVideosOfChannel;
    NSMutableArray *_offlinePlayVideos;
    SNVideoDetailModel *_videoDetailModel;
    SNVideosModel *_videosTimelineModel;
    SNVideoDetailRecommendModel *_recommendModel;
    UIView *_statusBarBgView;
    WSMVVideoPlayerView *_videoPlayer;
    UITableView *_recommendVideosTableView;
    SNActionSheet *_networkStatusActionSheet;
    SNActionMenuController *_actionMenuController;
    SNNewsShareManager *_shareManager;
    NSString *_subIdForVideoStat;
    long long _rollingNewsVideoPosition;
}

@property(nonatomic) _Bool isdissAppear; // @synthesize isdissAppear=_isdissAppear;
@property(nonatomic) long long rollingNewsVideoPosition; // @synthesize rollingNewsVideoPosition=_rollingNewsVideoPosition;
@property(copy, nonatomic) NSString *subIdForVideoStat; // @synthesize subIdForVideoStat=_subIdForVideoStat;
@property(nonatomic) int videoPlayerRefer; // @synthesize videoPlayerRefer=_videoPlayerRefer;
@property(retain, nonatomic) SNNewsShareManager *shareManager; // @synthesize shareManager=_shareManager;
@property(retain, nonatomic) SNActionMenuController *actionMenuController; // @synthesize actionMenuController=_actionMenuController;
@property(retain, nonatomic) SNActionSheet *networkStatusActionSheet; // @synthesize networkStatusActionSheet=_networkStatusActionSheet;
@property(retain, nonatomic) UITableView *recommendVideosTableView; // @synthesize recommendVideosTableView=_recommendVideosTableView;
@property(retain, nonatomic) WSMVVideoPlayerView *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) UIView *statusBarBgView; // @synthesize statusBarBgView=_statusBarBgView;
@property(retain, nonatomic) SNVideoDetailRecommendModel *recommendModel; // @synthesize recommendModel=_recommendModel;
@property(retain, nonatomic) SNVideosModel *videosTimelineModel; // @synthesize videosTimelineModel=_videosTimelineModel;
@property(retain, nonatomic) SNVideoDetailModel *videoDetailModel; // @synthesize videoDetailModel=_videoDetailModel;
@property(retain, nonatomic) NSMutableArray *offlinePlayVideos; // @synthesize offlinePlayVideos=_offlinePlayVideos;
@property(retain, nonatomic) NSMutableArray *timelineVideosOfChannel; // @synthesize timelineVideosOfChannel=_timelineVideosOfChannel;
@property(retain, nonatomic) SNVideoData *currentVideo; // @synthesize currentVideo=_currentVideo;
@property(copy, nonatomic) NSString *subId; // @synthesize subId=_subId;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(copy, nonatomic) NSString *newsfrom; // @synthesize newsfrom=_newsfrom;
- (void).cxx_destruct;
- (void)refreshRecommendVideosOfOfflinePlay;
- (void)loadMoreRecommendVideos;
- (void)switchRecommendVideosWithMid:(id)arg1;
- (void)didRetry:(id)arg1;
- (void)createLoadingView;
- (void)addNotificationObservers;
- (void)didTapCellThumbnailInCell:(id)arg1;
- (id)playingMessageId;
- (id)createActionMenuContentContext;
- (int)videoStatRefer;
- (void)statFFL:(id)arg1 playerView:(id)arg2 succeededToLoad:(_Bool)arg3;
- (void)statVideoAV:(id)arg1 playerView:(id)arg2;
- (void)cacheVideoSV:(id)arg1 playerView:(id)arg2;
- (void)statVideoVV:(id)arg1 playerView:(id)arg2;
- (void)statVideoPV:(id)arg1 playerView:(id)arg2;
- (void)dismissActionSheetByTouchBgView:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showNetworkWarningAciontSheetForPlayer:(id)arg1;
- (void)alert2G3GIfNeededByStyle:(int)arg1 forPlayerView:(id)arg2;
- (void)toWapPageOf:(id)arg1;
- (void)willShareVideo:(id)arg1 fromPlayer:(id)arg2;
- (void)needMoreTimelineIntoPlaylist;
- (void)needMoreRecommendIntoPlaylist;
- (id)recommendVideosOfVideoModel:(id)arg1 more:(_Bool)arg2;
- (void)didPlayVideo:(id)arg1;
- (void)willPlayVideo:(id)arg1;
- (void)willPlayNextVideo:(id)arg1;
- (void)thereisNoNextVideo:(id)arg1;
- (void)willPlayPreVideo:(id)arg1;
- (void)thereIsNoPreVideo:(id)arg1;
- (_Bool)recognizeSimultaneouslyWithGestureRecognizer;
- (_Bool)shouldRecognizeGesture:(id)arg1 withTouch:(id)arg2;
- (void)loadChannelTimelineVideosIfNeeded;
- (void)handleVideoDetailModelShareContentDidFinishLoad:(id)arg1;
- (void)handleVideoDetailModelDidFinishLoad:(id)arg1;
- (void)videosDidCancelLoad;
- (void)videosDidFailLoadWithError:(id)arg1;
- (void)videosDidFinishLoad;
- (void)handleRecommendModelDidFinishLoad:(id)arg1;
- (void)videoRecommendModelDidFailLoadWithError:(id)arg1 model:(id)arg2;
- (void)videoRecommendModelDidStartLoad:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)didSelectRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)handleShareWithCommentControllerDidDismissNotification:(id)arg1;
- (void)handleDidReceiveNotification:(id)arg1;
- (void)handleViewControllerPopup:(id)arg1;
- (void)executeFavouriteNews:(id)arg1;
- (void)clikItemOnHalfFloatView:(id)arg1;
- (void)actionmenuDidSelectLikeBtn;
- (_Bool)checkIfHadBeenMyFavourite;
- (void)callShare:(id)arg1;
- (void)actionShare:(id)arg1;
- (long long)preferredStatusBarStyle;
- (id)subChildViewControllerForStatusBarStyle;
- (void)addToolbar;
- (void)onBack:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)currentOpenLink2Url;
- (int)currentPage;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

