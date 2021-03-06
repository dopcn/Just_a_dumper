//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCTableViewController.h"

#import "TBCEmotionPromptViewDelegate-Protocol.h"
#import "TBCVideoActivityCellDelegate-Protocol.h"
#import "TBCVideoActivityHeaderViewDelegate-Protocol.h"
#import "TBCVideoMidPageTransitionAnimatorSourceDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, TBCBaseMediaPlayerWidget, TBCLoadingView, TBCVideoActivityHeaderView, TBCVideoActivityModel, TBCVideoReportModel, UITableViewCell;

@interface TBCVideoActivityViewController : TBCTableViewController <TBCEmotionPromptViewDelegate, TBCVideoActivityHeaderViewDelegate, TBCVideoActivityCellDelegate, UIViewControllerTransitioningDelegate, TBCVideoMidPageTransitionAnimatorSourceDelegate>
{
    _Bool _isTransitioningToVideoMidPage;
    NSString *_actId;
    TBCVideoActivityHeaderView *_actHeaderView;
    TBCVideoActivityModel *_videoActModel;
    TBCLoadingView *_loadingIndicator;
    double _recordOffset;
    TBCBaseMediaPlayerWidget *_clickedVideoView;
    NSString *_clickedVideoViewContentURL;
    UITableViewCell *_clickVideoCell;
    TBCVideoReportModel *_videoReportModel;
    double _entryTime;
    double _backgroundTime;
}

+ (void)pushVideoActivityViewController:(id)arg1 actId:(id)arg2;
+ (void)load;
@property(nonatomic) double backgroundTime; // @synthesize backgroundTime=_backgroundTime;
@property(nonatomic) double entryTime; // @synthesize entryTime=_entryTime;
@property(retain, nonatomic) TBCVideoReportModel *videoReportModel; // @synthesize videoReportModel=_videoReportModel;
@property(nonatomic) _Bool isTransitioningToVideoMidPage; // @synthesize isTransitioningToVideoMidPage=_isTransitioningToVideoMidPage;
@property(nonatomic) __weak UITableViewCell *clickVideoCell; // @synthesize clickVideoCell=_clickVideoCell;
@property(copy, nonatomic) NSString *clickedVideoViewContentURL; // @synthesize clickedVideoViewContentURL=_clickedVideoViewContentURL;
@property(nonatomic) __weak TBCBaseMediaPlayerWidget *clickedVideoView; // @synthesize clickedVideoView=_clickedVideoView;
@property(nonatomic) double recordOffset; // @synthesize recordOffset=_recordOffset;
@property(retain, nonatomic) TBCLoadingView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) TBCVideoActivityModel *videoActModel; // @synthesize videoActModel=_videoActModel;
@property(retain, nonatomic) TBCVideoActivityHeaderView *actHeaderView; // @synthesize actHeaderView=_actHeaderView;
@property(copy, nonatomic) NSString *actId; // @synthesize actId=_actId;
- (void).cxx_destruct;
- (void)reportVideoPlayCountWithVideoView:(id)arg1;
- (id)transitionSourceVideoView;
- (void)resetTableViewInsets;
- (void)handleHintButtonClicked;
- (id)hintButtonTitleText;
- (id)hintTitleText;
- (id)emotionPromptImage;
- (unsigned long long)emotionPromptStyle;
- (void)clickVideoActivityBanner:(id)arg1;
- (void)videoActivityCellPlayVideo:(id)arg1;
- (void)clickVideoActivityCellVideoView:(id)arg1;
- (void)clickUserWithCell:(id)arg1 didSelectItem:(id)arg2;
- (void)clickMember:(id)arg1;
- (_Bool)hasPlayingVideoExclude:(id)arg1;
- (void)pauseVideoIfNeed;
- (void)resetVideoPlayStateAfterScoll;
- (_Bool)isVideoCellOffScreen:(id)arg1;
- (_Bool)autoPlay:(id)arg1;
- (_Bool)isVideoCanAutoPlay;
- (void)autoPlayVideoAfterLoaderIfNeed;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)didSelectObject:(id)arg1 atIndexPath:(id)arg2;
- (void)videoActivityCellClick:(id)arg1;
- (void)pullUpToRefreshAction;
- (void)pullDownToRefreshAction;
- (void)handleData;
- (void)requestFail;
- (void)requestSuccess;
- (void)handleModelCompleted:(id)arg1;
- (void)refreshVideoListNoCache;
- (void)loadFromCache;
- (void)setupModel;
- (void)createDataSource;
- (void)resetTableRow;
- (void)refreshHeaderView;
- (void)createHeaderView;
- (void)layoutTableView;
- (void)createLoadingView;
- (void)setupVideoActivityUI;
- (void)backgroundToForeground;
- (void)foregroundToBackground;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)addNotification;
- (id)initWithStyle:(long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

