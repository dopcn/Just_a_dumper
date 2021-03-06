//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BBADimeCircleRefreshHeaderDelegate-Protocol.h"
#import "BBAFeedCollectionCellProtocol-Protocol.h"
#import "BBAFeedStreamDelegate-Protocol.h"

@class BBABlankPageTipView, BBAFeedDeleteModel, BBAFeedFlowCollectionViewDataSource, BBAFeedFlowCollectionViewDelegate, BBAFeedRefreshFooter, BBAFeedRefreshHeader, BBAFeedStream, BBALoadingView, NSString, UICollectionView;
@protocol BBAFeedPrefetchContextProtocol><BBAFeedPrefetchClearCacheProtocol, BBAFeedStatistics, BBAFeedViewControllerDelegate;

@interface BBAFeedFlowViewController : UIViewController <BBAFeedStreamDelegate, BBADimeCircleRefreshHeaderDelegate, BBAFeedCollectionCellProtocol>
{
    _Bool _flagCeilingFeedHasBeenShowedAfterColdStart;
    _Bool _didSetup3DTouch;
    id <BBAFeedViewControllerDelegate> _delegate;
    id <BBAFeedStatistics> _statistics;
    id <BBAFeedPrefetchContextProtocol><BBAFeedPrefetchClearCacheProtocol> _prefetchDelegate;
    UICollectionView *_flowCollectionView;
    BBAFeedRefreshHeader *_feedHeader;
    BBAFeedRefreshFooter *_feedFooter;
    BBAFeedStream *_feedStream;
    BBAFeedFlowCollectionViewDelegate *_feedCollectionViewDelegate;
    BBAFeedFlowCollectionViewDataSource *_feedCollectionViewDatasource;
    unsigned long long _lastRefreshTime;
    unsigned long long _touchMoveNum;
    NSString *_headerRefreshTitle;
    BBAFeedDeleteModel *_deleteModel;
}

@property(nonatomic) _Bool didSetup3DTouch; // @synthesize didSetup3DTouch=_didSetup3DTouch;
@property(retain, nonatomic) BBAFeedDeleteModel *deleteModel; // @synthesize deleteModel=_deleteModel;
@property(copy, nonatomic) NSString *headerRefreshTitle; // @synthesize headerRefreshTitle=_headerRefreshTitle;
@property(nonatomic) unsigned long long touchMoveNum; // @synthesize touchMoveNum=_touchMoveNum;
@property(nonatomic) _Bool flagCeilingFeedHasBeenShowedAfterColdStart; // @synthesize flagCeilingFeedHasBeenShowedAfterColdStart=_flagCeilingFeedHasBeenShowedAfterColdStart;
@property(nonatomic) unsigned long long lastRefreshTime; // @synthesize lastRefreshTime=_lastRefreshTime;
@property(readonly, nonatomic) BBAFeedFlowCollectionViewDataSource *feedCollectionViewDatasource; // @synthesize feedCollectionViewDatasource=_feedCollectionViewDatasource;
@property(readonly, nonatomic) BBAFeedFlowCollectionViewDelegate *feedCollectionViewDelegate; // @synthesize feedCollectionViewDelegate=_feedCollectionViewDelegate;
@property(retain, nonatomic) BBAFeedStream *feedStream; // @synthesize feedStream=_feedStream;
@property(retain, nonatomic) BBAFeedRefreshFooter *feedFooter; // @synthesize feedFooter=_feedFooter;
@property(retain, nonatomic) BBAFeedRefreshHeader *feedHeader; // @synthesize feedHeader=_feedHeader;
@property(retain, nonatomic) UICollectionView *flowCollectionView; // @synthesize flowCollectionView=_flowCollectionView;
@property(nonatomic) __weak id <BBAFeedPrefetchContextProtocol><BBAFeedPrefetchClearCacheProtocol> prefetchDelegate; // @synthesize prefetchDelegate=_prefetchDelegate;
@property(nonatomic) __weak id <BBAFeedStatistics> statistics; // @synthesize statistics=_statistics;
@property(nonatomic) __weak id <BBAFeedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setFooterRefreshLimitEnd;
- (void)setFooterRefreshLimitBegin;
- (_Bool)shouldLimitFooterRefresh;
- (void)preloadFeedAtContentOffset:(struct CGPoint)arg1;
- (void)updateFeedItemShowStatusWithFeeds:(id)arg1;
- (void)fetchFeedDataWithFeedID:(id)arg1 strategy:(unsigned long long)arg2 numOfData:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateFeedWithFeedID:(id)arg1 feedsArray:(id)arg2;
- (void)requestMoreFeedData:(CDUnknownBlockType)arg1;
- (void)showNetWorkBadToast;
- (void)resumeRefreshAnimationIfNeed;
- (void)resetRefreshHeaderLayout;
- (void)changeRefreshHeaderTitle:(id)arg1;
- (void)changeFeedRefreshFooterTitleWithRefreshing:(id)arg1 andLoadFailed:(id)arg2 andIdle:(id)arg3;
- (_Bool)isFeedPresentingInHalfMode;
- (_Bool)canRefreshHeaderTriggerRefreshingWhenScrollViewNotDraging:(id)arg1;
- (_Bool)autoRefreshForAppear;
- (_Bool)isFeedDataNil;
- (void)reloadFeedStream:(int)arg1;
- (void)preLoadMoreFeedData;
- (void)loadMoreFeedData:(CDUnknownBlockType)arg1;
- (void)reloadFeedData:(int)arg1 extraInfo:(id)arg2;
- (void)reloadFeedData:(int)arg1;
- (void)reloadFeedStream:(int)arg1 extraInfo:(id)arg2;
- (id)feedListRefreshRequestCmdString:(id)arg1;
- (id)databasePath;
- (void)calculateUIInfoForFeed:(id)arg1;
- (void)shareStatistics:(id)arg1;
- (void)shareViewDisappear:(id)arg1 source:(id)arg2;
- (void)shareViewAppear:(id)arg1;
- (void)feedCollectionCell:(id)arg1 didClickedShareQQButton:(id)arg2;
- (void)feedCollectionCell:(id)arg1 didClickedShareWeixinButton:(id)arg2;
- (void)feedCollectionCell:(id)arg1 didClickedShareWeixinFriendButton:(id)arg2;
- (void)feedCollectionCell:(id)arg1 didClickedUninterestButton:(id)arg2;
- (void)updateDatabaseFeed:(id)arg1;
- (void)removeFeed:(id)arg1;
- (void)showDislikeOnView:(id)arg1 view:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)showDislikeOnView:(id)arg1;
- (_Bool)isCollectionViewIdle;
- (void)prepareForReuseWithTabId:(id)arg1;
- (id)feedCollectionViewLayout;
- (void)fontSizeChanged:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)handleUIApplicationDidEnterBackgroundNotification:(id)arg1;
- (void)handleUIApplicationWillEnterForegroundNotification:(id)arg1;
- (void)deregisterNotification;
- (void)registerNotification;
- (void)setup3DTouch;
- (void)setupRefreshComponent;
- (void)loadCollectionView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didReceiveMemoryWarning;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTabId:(id)arg1;
- (void)updateFlowFeedCellsUI:(id)arg1;
- (void)prefetchLandingPageAfterParsing:(id)arg1;
- (void)feedStream:(id)arg1 didInsertedFeeds:(id)arg2;
- (id)paramArrayFromArray:(id)arg1 atRange:(struct _NSRange)arg2 isOnscreen:(_Bool)arg3;
- (void)feedStream:(id)arg1 didExpiredFeeds:(id)arg2;
- (void)cellDidSelectedWithFeed:(id)arg1;
- (void)visibleCellsDidChanged;
- (void)statisFailedViewShown;
- (void)resetPlaceholder;
- (void)createLoadingView;
- (void)onFailedViewButtonTouchUpInside:(id)arg1;
- (void)createFailedView;
- (void)onReloadViewButtonTouchUpInside:(id)arg1;
- (void)createReloadView;
@property(retain, nonatomic) BBALoadingView *loadingView;
@property(retain, nonatomic) BBABlankPageTipView *failedView;
@property(retain, nonatomic) BBABlankPageTipView *reloadView;
- (void)feedDislikeForStaticsWithAction:(id)arg1 indexPath:(id)arg2;
- (void)feedDislikeDidClickedForStatics:(id)arg1;
- (void)feedDislikeDidShowForStatics:(id)arg1;
- (void)sendClickFeedBackForFeed:(id)arg1 actionID:(id)arg2 actionInfo:(id)arg3 pos:(long long)arg4;
- (void)uploadDisplayedFeeds;
- (_Bool)canDisplayedFeedsUpload:(long long)arg1;
- (void)addDisplayedFeed:(id)arg1 atDisplayedIndexPath:(id)arg2;
- (void)viewDidDisappearEventForStatistics;
- (void)applicationDidEndEnterBackgroundEventForStatistics;
- (void)feedFlowDidSelectItemEventForStatistics:(id)arg1;
- (void)feedScrollViewWillDisplayCellEventForStatistics:(id)arg1;
- (void)feedScrollViewDidEndDeceleratingEventForStatistics;
- (void)setLastFeedbackTimeWhenScrollStop:(id)arg1;
- (id)lastFeedbackTimeWhenScrollStop;
- (void)setUploadedFeedIDS:(id)arg1;
- (id)uploadedFeedIDS;
- (void)setDisplayedUploadFeed:(id)arg1;
- (id)displayedUploadFeed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

