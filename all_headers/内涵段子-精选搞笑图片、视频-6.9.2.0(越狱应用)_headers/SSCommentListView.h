//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewBase.h"

#import "CommentInputViewControllerDelegate-Protocol.h"
#import "DetailActionRequestManagerDelegate-Protocol.h"
#import "SSActivityViewDelegate-Protocol.h"
#import "SSCommentInputViewDelegate-Protocol.h"
#import "SSCommentViewCellBaseDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CommentInputViewController, DetailActionRequestManager, DetailAdShowHandler, EssayData, EssayDetailTipModel, MJRefreshAutoNormalFooter, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSObject, NSString, NSTimer, SSActivityIndicatorView, SSActivityShareManager, SSActivityView, SSTipModel, TTHttpTask, UITableView, UIView;
@protocol OS_dispatch_queue, SSCommentListViewDelegate;

@interface SSCommentListView : SSViewBase <DetailActionRequestManagerDelegate, CommentInputViewControllerDelegate, SSCommentInputViewDelegate, SSCommentViewCellBaseDelegate, SSActivityViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _displaying;
    _Bool isLoadingComments;
    _Bool shouldLoadAvatar;
    _Bool _bannedComment;
    _Bool _hasMore;
    _Bool _getTipOverTime;
    _Bool _hasDisplayTip;
    _Bool _couldShowLoadingView;
    _Bool _needScrollToFirstIndexPathWhenReload;
    _Bool _isHeaderViewShow;
    int commentOffset;
    int _totalNumber;
    TTHttpTask *_task;
    id <SSCommentListViewDelegate> _delegate;
    NSString *groupID;
    NSString *categoryID;
    NSString *viewType;
    DetailActionRequestManager *actionManager;
    NSMutableDictionary *queryCondition;
    SSActivityIndicatorView *indicatorView;
    NSString *tag;
    CommentInputViewController *commentViewController;
    UIView *loadingView;
    NSString *emptyLabelString;
    SSActivityShareManager *_activityActionManager;
    SSActivityView *_phoneMoreActivityView;
    EssayData *_essayData;
    NSMutableArray *_commentModels;
    NSMutableArray *_topSectionModels;
    NSString *_commentID;
    double _scrollViewTopContentInset;
    NSString *_storeReplyToCommentID;
    NSMutableSet *_commentIDSet;
    NSMutableSet *_topCommentIDSet;
    NSNumber *_diplayCommentCount;
    long long _recentCommentNumber;
    long long _topCommentNumber;
    NSObject<OS_dispatch_queue> *_handleCommentSerialQueue;
    EssayDetailTipModel *_detailTipModel;
    NSDate *_tipStartDate;
    NSMutableDictionary *_ad_extra_data;
    MJRefreshAutoNormalFooter *_refreshingFooter;
    DetailAdShowHandler *_detailAdShowHandler;
    long long _sortType;
    NSNumber *_adPosition;
    SSTipModel *_tipModel;
    SSTipModel *_tipModelAfterHotComment;
    NSMutableArray *_freshCommontipModelArray;
    NSString *_cellStyle;
    UITableView *_commentView;
    UIView *_emptyView;
    UIView *_headerContainer;
    NSString *_topCommentIDKey;
    TTHttpTask *_tipTask;
    NSTimer *_tipTimer;
    NSObject<OS_dispatch_queue> *_loadSerialQueue;
    NSObject<OS_dispatch_queue> *_tipSerialQueue;
    NSNumber *_diplayHotCommentCount;
    struct CGRect _originHeaderFrame;
}

@property(retain, nonatomic) NSNumber *diplayHotCommentCount; // @synthesize diplayHotCommentCount=_diplayHotCommentCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *tipSerialQueue; // @synthesize tipSerialQueue=_tipSerialQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loadSerialQueue; // @synthesize loadSerialQueue=_loadSerialQueue;
@property(retain, nonatomic) NSTimer *tipTimer; // @synthesize tipTimer=_tipTimer;
@property(retain, nonatomic) TTHttpTask *tipTask; // @synthesize tipTask=_tipTask;
@property(nonatomic) _Bool isHeaderViewShow; // @synthesize isHeaderViewShow=_isHeaderViewShow;
@property(nonatomic) struct CGRect originHeaderFrame; // @synthesize originHeaderFrame=_originHeaderFrame;
@property(retain, nonatomic) NSString *topCommentIDKey; // @synthesize topCommentIDKey=_topCommentIDKey;
@property(retain, nonatomic) UIView *headerContainer; // @synthesize headerContainer=_headerContainer;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UITableView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) NSString *cellStyle; // @synthesize cellStyle=_cellStyle;
@property(retain, nonatomic) NSMutableArray *freshCommontipModelArray; // @synthesize freshCommontipModelArray=_freshCommontipModelArray;
@property(retain, nonatomic) SSTipModel *tipModelAfterHotComment; // @synthesize tipModelAfterHotComment=_tipModelAfterHotComment;
@property(retain, nonatomic) SSTipModel *tipModel; // @synthesize tipModel=_tipModel;
@property(retain, nonatomic) NSNumber *adPosition; // @synthesize adPosition=_adPosition;
@property(nonatomic) _Bool needScrollToFirstIndexPathWhenReload; // @synthesize needScrollToFirstIndexPathWhenReload=_needScrollToFirstIndexPathWhenReload;
@property(nonatomic) _Bool couldShowLoadingView; // @synthesize couldShowLoadingView=_couldShowLoadingView;
@property(nonatomic) long long sortType; // @synthesize sortType=_sortType;
@property(retain, nonatomic) DetailAdShowHandler *detailAdShowHandler; // @synthesize detailAdShowHandler=_detailAdShowHandler;
@property(retain, nonatomic) MJRefreshAutoNormalFooter *refreshingFooter; // @synthesize refreshingFooter=_refreshingFooter;
@property(retain, nonatomic) NSMutableDictionary *ad_extra_data; // @synthesize ad_extra_data=_ad_extra_data;
@property(nonatomic) _Bool hasDisplayTip; // @synthesize hasDisplayTip=_hasDisplayTip;
@property(retain, nonatomic) NSDate *tipStartDate; // @synthesize tipStartDate=_tipStartDate;
@property(retain, nonatomic) EssayDetailTipModel *detailTipModel; // @synthesize detailTipModel=_detailTipModel;
@property(nonatomic) _Bool getTipOverTime; // @synthesize getTipOverTime=_getTipOverTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handleCommentSerialQueue; // @synthesize handleCommentSerialQueue=_handleCommentSerialQueue;
@property(nonatomic) long long topCommentNumber; // @synthesize topCommentNumber=_topCommentNumber;
@property(nonatomic) long long recentCommentNumber; // @synthesize recentCommentNumber=_recentCommentNumber;
@property(retain, nonatomic) NSNumber *diplayCommentCount; // @synthesize diplayCommentCount=_diplayCommentCount;
@property(retain, nonatomic) NSMutableSet *topCommentIDSet; // @synthesize topCommentIDSet=_topCommentIDSet;
@property(retain, nonatomic) NSMutableSet *commentIDSet; // @synthesize commentIDSet=_commentIDSet;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSString *storeReplyToCommentID; // @synthesize storeReplyToCommentID=_storeReplyToCommentID;
@property(nonatomic) double scrollViewTopContentInset; // @synthesize scrollViewTopContentInset=_scrollViewTopContentInset;
@property(nonatomic) _Bool bannedComment; // @synthesize bannedComment=_bannedComment;
@property(copy, nonatomic) NSString *commentID; // @synthesize commentID=_commentID;
@property(nonatomic) int totalNumber; // @synthesize totalNumber=_totalNumber;
@property(retain, nonatomic) NSMutableArray *topSectionModels; // @synthesize topSectionModels=_topSectionModels;
@property(retain, nonatomic) NSMutableArray *commentModels; // @synthesize commentModels=_commentModels;
@property(retain, nonatomic) EssayData *essayData; // @synthesize essayData=_essayData;
@property(retain, nonatomic) SSActivityView *phoneMoreActivityView; // @synthesize phoneMoreActivityView=_phoneMoreActivityView;
@property(retain, nonatomic) SSActivityShareManager *activityActionManager; // @synthesize activityActionManager=_activityActionManager;
@property(nonatomic) int commentOffset; // @synthesize commentOffset;
@property(retain, nonatomic) NSString *emptyLabelString; // @synthesize emptyLabelString;
@property(nonatomic) _Bool shouldLoadAvatar; // @synthesize shouldLoadAvatar;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView;
@property(retain, nonatomic) CommentInputViewController *commentViewController; // @synthesize commentViewController;
@property(nonatomic) _Bool isLoadingComments; // @synthesize isLoadingComments;
@property(copy, nonatomic) NSString *tag; // @synthesize tag;
@property(retain, nonatomic) SSActivityIndicatorView *indicatorView; // @synthesize indicatorView;
@property(retain, nonatomic) NSMutableDictionary *queryCondition; // @synthesize queryCondition;
@property(retain, nonatomic) DetailActionRequestManager *actionManager; // @synthesize actionManager;
@property(retain, nonatomic) NSString *viewType; // @synthesize viewType;
@property(retain, nonatomic) NSString *categoryID; // @synthesize categoryID;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID;
@property(nonatomic) __weak id <SSCommentListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TTHttpTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (id)getDisplayCommentCount;
- (void)commentListView:(id)arg1 TapSecondCommentWithModel:(id)arg2;
- (void)activityView:(id)arg1 didCompleteByItemType:(long long)arg2;
- (void)shareComment:(id)arg1 commentId:(id)arg2 commentContent:(id)arg3 isSecondLevelComment:(_Bool)arg4;
- (void)shareUseMoreActivityControllerWithShowType:(unsigned long long)arg1 shareUrl:(id)arg2 commentId:(id)arg3 commentContent:(id)arg4 isSecondLevelComment:(_Bool)arg5;
- (void)generateShareCommentAction:(id)arg1 commentId:(id)arg2 commentContent:(id)arg3 isSecondLevelComment:(_Bool)arg4;
- (void)sendUmengIfNeeded;
- (void)reportEssayUserProfileFromUserID:(id)arg1;
- (_Bool)commentModelsInsertCommentModelToTop:(id)arg1;
- (void)commentModelsAddCommentModel:(id)arg1;
- (void)sendDetailNativeTipShowUmeng:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)commentViewCellBase:(id)arg1 longPressCommentWithModel:(id)arg2 isMyComment:(_Bool)arg3;
- (void)commentViewCellBase:(id)arg1 deleteButtonClickedWithModel:(id)arg2;
- (void)commentViewCellBase:(id)arg1 reportCommentModel:(id)arg2;
- (void)commentViewCellBase:(id)arg1 avatarTappedWithCommentModel:(id)arg2;
- (void)commentViewCellBase:(id)arg1 replayButtonClickedWithModel:(id)arg2;
- (struct CGRect)frameForPadCommentInputView;
- (void)ssLayoutSubviews;
- (void)layoutSubviews;
- (void)commentInputViewController:(id)arg1 responsedReceived:(id)arg2;
- (void)sendUmengForDisplayTimeForCell:(id)arg1 cellIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)sendDetailAdShow;
- (void)resetShowDetailShowTipModelFlag;
- (void)clearCommentList;
- (void)clearList;
- (id)sortTypeString;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getStoreTimeForCell:(id)arg1;
- (void)storeCurrentTimeForCell:(id)arg1 TimeInterval:(double)arg2;
- (id)getTipCell:(id)arg1 tipModel:(id)arg2;
- (id)tableView:(id)arg1 commentCellForModel:(id)arg2;
- (id)commentModelByDict:(id)arg1;
- (id)commentModelAtIndexForTopSectionModels:(long long)arg1;
- (id)commentModelAtIndex:(long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)getTipCellHeight:(id)arg1;
- (_Bool)withoutImageStyle:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)deleteCommentModel:(id)arg1;
- (void)scrollToFreshSectionTop;
- (void)insertCommentModel:(id)arg1;
- (id)findCommentFromCommentID:(id)arg1;
- (void)insertComment:(id)arg1;
- (void)manualLoadMore;
- (void)startLoadCommentsWithCondition:(id)arg1;
- (void)openInputViewWithContent:(id)arg1 inputTitle:(id)arg2 groupID:(id)arg3 commentID:(id)arg4 itemTag:(id)arg5;
- (void)openInputViewWithContent:(id)arg1 groupID:(id)arg2 itemTag:(id)arg3;
- (void)listViewReloadFinishAdjust:(_Bool)arg1 bannedComments:(_Bool)arg2 error:(id)arg3;
- (void)sendHostAndCityToServer:(id)arg1;
- (void)finishedResult:(id)arg1 error:(id)arg2 userInfo:(id)arg3;
- (void)updateCommentView:(id)arg1;
- (id)buildInsertNSIndexPath:(long long)arg1 topCommentInsertCount:(long long)arg2 freshCommentSectionOrigin:(long long)arg3 freshCommentInsertCount:(long long)arg4;
- (void)addFreshTipToCommonCommentModels:(id)arg1;
- (void)addCurrentCommmonModelToCommonSectionModels:(id)arg1 tipModelList:(id)arg2;
- (void)addCurrentHotModelToTopSectionModels:(id)arg1;
- (id)getCommentList:(id)arg1 params:(id)arg2 userInfo:(id)arg3 retryCount:(int)arg4;
- (void)startLoadComments:(_Bool)arg1;
- (long long)getCommentOffset;
- (id)requestCommentParam;
- (void)sendLoadNativeTipModelStatus:(unsigned long long)arg1;
- (void)sendLoadWebViewTipModelStatus:(unsigned long long)arg1;
- (void)sendEmptyDataTipMonitor;
- (void)sendFailTipMonitor;
- (void)sendSuccessTipMonitor;
- (void)loadTipResult:(id)arg1 error:(id)arg2 userInfo:(id)arg3;
- (id)getTip:(id)arg1 params:(id)arg2 userInfo:(id)arg3;
- (void)tipTimerMethod:(id)arg1;
- (void)startLoadDetailTip:(_Bool)arg1 entry:(_Bool)arg2 from:(_Bool)arg3;
- (id)requestTipParamDict:(_Bool)arg1 entry:(_Bool)arg2 from:(_Bool)arg3;
- (void)resetTipInfoBeforeLoadTipDetail;
- (void)resetDetailNativeTip;
- (void)cancelCurrentLoad;
- (void)displayLoadingView:(_Bool)arg1;
- (void)didDisappear;
- (void)didAppear;
- (_Bool)emptyViewLoading;
- (id)emptyViewImgName;
- (void)themeChanged:(id)arg1;
- (void)fontChanged:(id)arg1;
- (void)displayEmptyView:(_Bool)arg1;
- (_Bool)isTableListViewModelsEmpty;
- (void)addHeaderView:(id)arg1;
- (void)buildEmptyView;
- (void)addObserver;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

