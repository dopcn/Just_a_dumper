//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AHBusinessFramework/AHRefreshTableViewController.h>

#import "ACGameLoadingViewDelegate-Protocol.h"
#import "ACVideoDetailControllerDelegate-Protocol.h"
#import "AHAlertViewDelegate-Protocol.h"
#import "AHVideoPlayerStateDelegate-Protocol.h"

@class ACGameLoadingView, ACIJKViewController, ACVideoImmersionListItemEntity, ACVideoImmersionNavView, NSMutableArray, NSString, UIImageView, UIView;
@protocol ACVideoImmersionListViewManagerDataSource, ACVideoImmersionListViewManagerDelegate;

@interface ACVideoImmersionListViewManager : AHRefreshTableViewController <AHVideoPlayerStateDelegate, ACVideoDetailControllerDelegate, AHAlertViewDelegate, ACGameLoadingViewDelegate>
{
    _Bool _isKeepBright;
    _Bool _isForceStop;
    _Bool _isDecelerating;
    _Bool _isScrollByUser;
    _Bool _isReturnContinuePlay;
    _Bool _isNotFirstShow;
    _Bool _isReturnFromFullScreen;
    _Bool _isAutoPlay;
    _Bool _isRefreshTable;
    _Bool _isAppear;
    _Bool _isFullScreen;
    id <ACVideoImmersionListViewManagerDelegate> _delegate;
    id <ACVideoImmersionListViewManagerDataSource> _dataSource;
    ACVideoImmersionNavView *_navView;
    ACGameLoadingView *_loadingView;
    UIImageView *_lastTipImageView;
    ACIJKViewController *_playerController;
    UIView *_playerBackView;
    ACVideoImmersionListItemEntity *_currentItem;
    NSMutableArray *_playDurationArray;
    double _startPlayForPV;
}

@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) double startPlayForPV; // @synthesize startPlayForPV=_startPlayForPV;
@property(nonatomic) _Bool isAppear; // @synthesize isAppear=_isAppear;
@property(nonatomic) _Bool isRefreshTable; // @synthesize isRefreshTable=_isRefreshTable;
@property(nonatomic) _Bool isAutoPlay; // @synthesize isAutoPlay=_isAutoPlay;
@property(nonatomic) _Bool isReturnFromFullScreen; // @synthesize isReturnFromFullScreen=_isReturnFromFullScreen;
@property(nonatomic) _Bool isNotFirstShow; // @synthesize isNotFirstShow=_isNotFirstShow;
@property(nonatomic) _Bool isReturnContinuePlay; // @synthesize isReturnContinuePlay=_isReturnContinuePlay;
@property(nonatomic) _Bool isScrollByUser; // @synthesize isScrollByUser=_isScrollByUser;
@property(nonatomic) _Bool isDecelerating; // @synthesize isDecelerating=_isDecelerating;
@property(nonatomic) _Bool isForceStop; // @synthesize isForceStop=_isForceStop;
@property(nonatomic) _Bool isKeepBright; // @synthesize isKeepBright=_isKeepBright;
@property(retain, nonatomic) NSMutableArray *playDurationArray; // @synthesize playDurationArray=_playDurationArray;
@property(retain, nonatomic) ACVideoImmersionListItemEntity *currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) UIView *playerBackView; // @synthesize playerBackView=_playerBackView;
@property(retain, nonatomic) ACIJKViewController *playerController; // @synthesize playerController=_playerController;
@property(retain, nonatomic) UIImageView *lastTipImageView; // @synthesize lastTipImageView=_lastTipImageView;
@property(retain, nonatomic) ACGameLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) ACVideoImmersionNavView *navView; // @synthesize navView=_navView;
@property(nonatomic) __weak id <ACVideoImmersionListViewManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <ACVideoImmersionListViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)postQueitButtonClickPv:(_Bool)arg1;
- (void)postImmersionClickPv;
- (void)videoImmersionPagePv;
- (void)videoPagePv;
- (void)postSwitchFullScreen:(_Bool)arg1;
- (void)postVideoPlayStatus:(_Bool)arg1;
- (void)postVideoPlay;
- (void)postVideoFirstPlay;
- (void)postPlayTimes:(_Bool)arg1;
- (id)getPvSourceId;
- (void)doPreloadVideo;
- (void)playByVideoInfoArray:(id)arg1;
- (void)infoReturnContinuePlay:(id)arg1;
- (void)infoReturnContinuePlayNoti:(id)arg1;
- (void)removeInfoReturnContinuePlayObserver;
- (void)addInfoReturnContinuePlayObserver;
- (void)loadingEmpty:(id)arg1;
- (void)loadingFailed;
- (void)hideLoading;
- (void)startLoading;
- (void)initQuiet;
- (void)setQuiet:(_Bool)arg1;
- (void)onQuietButtonClick;
- (void)volumeChange:(id)arg1;
- (void)removeVolumeChangeObserver;
- (void)addVolumeChangeObserver;
- (void)showLastTip;
- (void)returnContinuePlay:(id)arg1 playerController:(id)arg2;
- (double)getPlayDurationArray:(id)arg1;
- (void)deletePlayDurationArray:(id)arg1;
- (void)addPlayDurationArray:(id)arg1 duration:(double)arg2;
- (void)onCommentCountButtonClick;
- (void)onPlayButtonClick;
- (void)pushInfoVideoDetail:(_Bool)arg1;
- (void)pushVideoDetail:(_Bool)arg1;
- (void)pushDetail:(_Bool)arg1;
- (void)stopPlayerController:(_Bool)arg1;
- (void)writeHistory;
- (void)startPlayerController;
- (_Bool)isAllowPlayByNetWorkAndSetting;
- (void)autoPlay;
- (void)showBright:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isCurrentItem:(id)arg1;
- (void)scrollCurrentItemToTop:(id)arg1;
- (void)resetCurrentItem;
- (void)refreshCurrentItemState;
- (void)selectCurrentItem:(id)arg1;
- (void)deselectCurrentItem;
- (_Bool)isInAllowPlayArea:(id)arg1;
- (id)getNextItemIndexPath;
- (id)findAllowPlayCell;
- (void)switchCurrentItemByClick:(id)arg1;
- (void)switchCurrentItemByScroll:(_Bool)arg1;
- (void)switchCurrentItemByStop;
- (void)onBackButtonClick;
- (void)handleSwipe:(id)arg1;
- (void)historyBtnDidClick;
- (void)downClick;
- (void)backClick;
- (void)viewParentScrollAppear;
- (void)parentVCQuietButtonClick;
- (id)getReturnContinuePlayerCtroller;
- (void)initCurrentItem;
- (void)setIsFinishPlay;
- (void)setContinuePlayerCtroller:(id)arg1;
- (void)videoInfoReturn:(id)arg1;
- (void)scrollToTop;
- (void)hideLoadAnimation;
- (void)updateIsShowMore:(_Bool)arg1;
- (void)updateTable;
- (void)ACGameLoadingViewReloadClick:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)AHVideoPlayerController:(id)arg1 videoPlayerState:(unsigned long long)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)pullUpdateTriggering:(id)arg1 type:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)initTableView;
- (void)redrawNaviView;
- (void)initNaviView;
- (void)layout;
- (long long)preferredStatusBarStyle;
- (void)didReceiveMemoryWarning;
- (void)parentScrollDisAppear;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

