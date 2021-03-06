//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCTableViewController.h"

#import "FMShareUIComponentDelegate-Protocol.h"
#import "TBCBaseMediaPlayerControlDelegate-Protocol.h"
#import "TBCCommonRecommendedForumCardDelegate-Protocol.h"
#import "TBCCommonThreadCellDelegate-Protocol.h"
#import "TBCCommonVideoThreadCellDelegate-Protocol.h"
#import "TBCCommonVoiceThreadCellDelegate-Protocol.h"
#import "TBCForumShareDelegate-Protocol.h"
#import "TBCForumShareUIComponentDelegate-Protocol.h"
#import "TBCHighQualityThreadCellDelegate-Protocol.h"
#import "TBCHotTopicFloatViewDelegate-Protocol.h"
#import "TBCHotTopicPKCellDelegate-Protocol.h"
#import "TBCSharedPostBaseCellDelegete-Protocol.h"
#import "TBCVideoMidPageTransitionAnimatorSourceDelegate-Protocol.h"
#import "TBCVideoViewDelegate-Protocol.h"

@class FMShareUIComponent, NSDate, NSString, TBCBaseMediaPlayerWidget, TBCBaseModel, TBCFollowModel, TBCForumShareChatContactsViewControllerHolder, TBCForumShareUIComponent, TBCFrsDataItem, TBCHotTopicFloatView, TBCHotTopicModel, TBCHotTopicPKCell, TBCHotTopicPKModel, TBCLoadingView, TBCRelateThreadModel, TBCVideoReportModel, UILabel, UITableViewCell, UIView;
@protocol TBCHotTopicSubViewControllerDelegate;

@interface TBCHotTopicSubViewController : TBCTableViewController <TBCHighQualityThreadCellDelegate, TBCHotTopicPKCellDelegate, TBCHotTopicFloatViewDelegate, FMShareUIComponentDelegate, TBCForumShareDelegate, TBCForumShareUIComponentDelegate, TBCCommonThreadCellDelegate, TBCCommonRecommendedForumCardDelegate, TBCCommonVoiceThreadCellDelegate, TBCVideoMidPageTransitionAnimatorSourceDelegate, TBCCommonVideoThreadCellDelegate, TBCVideoViewDelegate, TBCBaseMediaPlayerControlDelegate, TBCSharedPostBaseCellDelegete>
{
    _Bool _hasMore;
    _Bool _viewAppear;
    _Bool _enterVideoMidPage;
    id <TBCHotTopicSubViewControllerDelegate> _delegate;
    NSString *_topicTypeString;
    double _loadingIndicatorTop;
    TBCHotTopicModel *_hotTopicModel;
    TBCHotTopicPKModel *_hotTopicPKModel;
    TBCFollowModel *_followModel;
    TBCRelateThreadModel *_relateThreadModel;
    TBCHotTopicPKCell *_pkCell;
    TBCHotTopicFloatView *_blessView;
    TBCHotTopicFloatView *_candleView;
    FMShareUIComponent *_shareUIComponent;
    TBCForumShareChatContactsViewControllerHolder *_shareViewControllerHolder;
    TBCForumShareUIComponent *_forumShareUIComponent;
    NSString *_topicName;
    NSString *_topicID;
    NSString *_relateForumID;
    NSString *_curentPage;
    NSString *_lastID;
    NSString *_respTopicId;
    NSString *_respTopicSource;
    UIView *_loadMoreView;
    UILabel *_loadMoreLabel;
    double _prePosition;
    NSString *_forumId;
    NSString *_forumName;
    NSDate *_enterTheViewDate;
    TBCBaseMediaPlayerWidget *_clickedVideoView;
    UITableViewCell *_clickVideoCell;
    NSString *_clickedVideoViewContentURL;
    TBCLoadingView *_loadingView;
    TBCVideoReportModel *_videoReportModel;
    FMShareUIComponent *_component;
    TBCFrsDataItem *_itemSelectedForShare;
    TBCBaseModel *_checkRealNameModel;
}

@property(retain, nonatomic) TBCBaseModel *checkRealNameModel; // @synthesize checkRealNameModel=_checkRealNameModel;
@property(retain, nonatomic) TBCFrsDataItem *itemSelectedForShare; // @synthesize itemSelectedForShare=_itemSelectedForShare;
@property(retain, nonatomic) FMShareUIComponent *component; // @synthesize component=_component;
@property(retain, nonatomic) TBCVideoReportModel *videoReportModel; // @synthesize videoReportModel=_videoReportModel;
@property(retain, nonatomic) TBCLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool enterVideoMidPage; // @synthesize enterVideoMidPage=_enterVideoMidPage;
@property(copy, nonatomic) NSString *clickedVideoViewContentURL; // @synthesize clickedVideoViewContentURL=_clickedVideoViewContentURL;
@property(nonatomic) __weak UITableViewCell *clickVideoCell; // @synthesize clickVideoCell=_clickVideoCell;
@property(nonatomic) __weak TBCBaseMediaPlayerWidget *clickedVideoView; // @synthesize clickedVideoView=_clickedVideoView;
@property(retain, nonatomic) NSDate *enterTheViewDate; // @synthesize enterTheViewDate=_enterTheViewDate;
@property(nonatomic) _Bool viewAppear; // @synthesize viewAppear=_viewAppear;
@property(copy, nonatomic) NSString *forumName; // @synthesize forumName=_forumName;
@property(copy, nonatomic) NSString *forumId; // @synthesize forumId=_forumId;
@property(nonatomic) double prePosition; // @synthesize prePosition=_prePosition;
@property(retain, nonatomic) UILabel *loadMoreLabel; // @synthesize loadMoreLabel=_loadMoreLabel;
@property(retain, nonatomic) UIView *loadMoreView; // @synthesize loadMoreView=_loadMoreView;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(copy, nonatomic) NSString *respTopicSource; // @synthesize respTopicSource=_respTopicSource;
@property(copy, nonatomic) NSString *respTopicId; // @synthesize respTopicId=_respTopicId;
@property(copy, nonatomic) NSString *lastID; // @synthesize lastID=_lastID;
@property(copy, nonatomic) NSString *curentPage; // @synthesize curentPage=_curentPage;
@property(copy, nonatomic) NSString *relateForumID; // @synthesize relateForumID=_relateForumID;
@property(copy, nonatomic) NSString *topicID; // @synthesize topicID=_topicID;
@property(copy, nonatomic) NSString *topicName; // @synthesize topicName=_topicName;
@property(retain, nonatomic) TBCForumShareUIComponent *forumShareUIComponent; // @synthesize forumShareUIComponent=_forumShareUIComponent;
@property(retain, nonatomic) TBCForumShareChatContactsViewControllerHolder *shareViewControllerHolder; // @synthesize shareViewControllerHolder=_shareViewControllerHolder;
@property(retain, nonatomic) FMShareUIComponent *shareUIComponent; // @synthesize shareUIComponent=_shareUIComponent;
@property(retain, nonatomic) TBCHotTopicFloatView *candleView; // @synthesize candleView=_candleView;
@property(retain, nonatomic) TBCHotTopicFloatView *blessView; // @synthesize blessView=_blessView;
@property(retain, nonatomic) TBCHotTopicPKCell *pkCell; // @synthesize pkCell=_pkCell;
@property(retain, nonatomic) TBCRelateThreadModel *relateThreadModel; // @synthesize relateThreadModel=_relateThreadModel;
@property(retain, nonatomic) TBCFollowModel *followModel; // @synthesize followModel=_followModel;
@property(retain, nonatomic) TBCHotTopicPKModel *hotTopicPKModel; // @synthesize hotTopicPKModel=_hotTopicPKModel;
@property(retain, nonatomic) TBCHotTopicModel *hotTopicModel; // @synthesize hotTopicModel=_hotTopicModel;
@property(nonatomic) double loadingIndicatorTop; // @synthesize loadingIndicatorTop=_loadingIndicatorTop;
@property(copy, nonatomic) NSString *topicTypeString; // @synthesize topicTypeString=_topicTypeString;
@property(nonatomic) __weak id <TBCHotTopicSubViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)jumpToBadgeDetailFromHomePageCell:(id)arg1;
- (void)handleClickInsideRepostImageView:(id)arg1;
- (void)sharePBPage:(id)arg1;
- (void)clickShareBtnWithBaseCell:(id)arg1 didSelectItem:(id)arg2;
- (void)sharedPostCell:(id)arg1 didClickedReferenceWithItem:(id)arg2;
- (void)handleHintButtonClicked;
- (id)hintButtonTitleText;
- (id)hintTitleText;
- (id)emotionPromptImage;
- (unsigned long long)emotionPromptStyle;
- (void)reportVideoPlayCountWithCell:(id)arg1;
- (_Bool)hasPlayingVideoExclude:(id)arg1;
- (void)pauseVideoIfNeed;
- (void)resetVideoPlayStateAfterScoll;
- (_Bool)isVideoCellOffScreen:(id)arg1;
- (_Bool)autoPlay:(id)arg1;
- (_Bool)isVideoCanAutoPlay;
- (void)autoPlayVideoAfterLoaderIfNeed;
- (void)videoViewMidPageDisappear:(id)arg1;
- (void)videoThreadCellDidClickMediaPlayerWidget:(id)arg1;
- (void)clickCommonVideoThreadCellVideoView:(id)arg1;
- (void)playVideo:(id)arg1;
- (void)clickVideoView:(id)arg1;
- (void)clickPlayControl:(id)arg1;
- (id)transitionSourceVideoView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)pullUpToRefreshAction;
- (void)pullDownToRefreshAction;
- (void)onFavorDataUpdated:(id)arg1;
- (void)toSeeMoreForumList;
- (void)likeForumWithCell:(id)arg1 didSelectItem:(id)arg2 withType:(id)arg3;
- (void)forumClickedWithCell:(id)arg1 didSelectItem:(id)arg2 withType:(id)arg3;
- (void)playVideoWithBaseCell:(id)arg1 didSelectItem:(id)arg2 didSelectItem:(id)arg3;
- (void)clickForumWithBaseCell:(id)arg1 didSelectItem:(id)arg2;
- (void)clickUserWithBaseCell:(id)arg1 didSelectItem:(id)arg2;
- (void)clickMember:(id)arg1;
- (void)onBack:(id)arg1;
- (void)sendForumShareContent:(id)arg1;
- (void)cancleForumShareContent;
- (void)showForumShareView:(id)arg1;
- (id)createForumShareContentWithType:(int)arg1 shareContent:(id)arg2;
- (id)contentForType:(int)arg1;
- (id)shareLink;
- (void)shareButtonPressed:(id)arg1;
- (_Bool)checkVisitorModeStatus;
- (void)resoureManagerDelegate;
- (void)showStatusBar;
- (void)changeRelateForumFollowStatus:(id)arg1 status:(id)arg2;
- (void)unlikeForumSuccess:(id)arg1;
- (void)likeForumSuccess:(id)arg1;
- (void)gotoRelateForum:(id)arg1;
- (void)likeRelateForum:(id)arg1;
- (void)highQualityThreadCell:(id)arg1 didPressBarButtonWithItem:(id)arg2;
- (void)toggleCandleAndBlessViewHiddenWithOffset:(double)arg1;
- (void)addCandleAndBlessView;
- (void)userPkFailed;
- (void)userPkSuccess;
- (void)didPressedButtonInFloatView:(id)arg1;
- (void)didSelectIdeaType:(int)arg1;
- (void)showLoadingIndicator;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)resetTableRow;
- (void)didSelectObject:(id)arg1 atIndexPath:(id)arg2;
- (void)setupFooterWaterfallView;
- (id)tableDataSource;
- (void)createDataSource;
- (void)followFailure;
- (void)followSuccess;
- (void)loadFailure;
- (void)handleData;
- (void)loadSuccess;
- (void)loadMoreRequest;
- (void)loadMoreSuccess;
- (void)checkLoadMore;
- (void)loadHotTopic;
- (void)addStatistics;
- (void)setupModel;
- (void)removeRelateForumNotification;
- (void)registerNotification;
- (id)hotTopicIDL;
- (void)updateTableViewContentInset:(struct UIEdgeInsets)arg1;
- (void)setupNavigationBar;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithTopicName:(id)arg1 topicID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

