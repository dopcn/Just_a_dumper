//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EssayListViewBase.h"

#import "EssayGuideCardDelegate-Protocol.h"
#import "EssayRecommendUserCellDeleteProtocol-Protocol.h"
#import "SDPhotoBrowserDelegate-Protocol.h"
#import "SSListNotifyBarViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class EssayCellBase, NSArray, NSString, RACCommand, SSImageView, UIImage, UIImageView, UITableView;
@protocol EssayListViewDelegate;

@interface EssayListView : EssayListViewBase <UITableViewDelegate, UITableViewDataSource, EssayGuideCardDelegate, SDPhotoBrowserDelegate, EssayRecommendUserCellDeleteProtocol, SSListNotifyBarViewDelegate>
{
    _Bool _showIntroduceHeaderView;
    _Bool _hiddenRefreshHeader;
    float _currentViewContentInsetTop;
    UITableView *_listView;
    UIImage *_bottomBackGroundImage;
    id <EssayListViewDelegate> _essayListViewDelegate;
    RACCommand *_hideJoinBtnCommand;
    RACCommand *_showJoinBtnCommand;
    SSImageView *_bgImageView;
    UIImageView *_maskView;
    NSArray *_fakePostDataArray;
    EssayCellBase *_commentCell;
}

@property(retain, nonatomic) EssayCellBase *commentCell; // @synthesize commentCell=_commentCell;
@property(retain, nonatomic) NSArray *fakePostDataArray; // @synthesize fakePostDataArray=_fakePostDataArray;
@property(retain, nonatomic) UIImageView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) SSImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) RACCommand *showJoinBtnCommand; // @synthesize showJoinBtnCommand=_showJoinBtnCommand;
@property(retain, nonatomic) RACCommand *hideJoinBtnCommand; // @synthesize hideJoinBtnCommand=_hideJoinBtnCommand;
@property(nonatomic, getter=isHiddenRefreshHeader) _Bool hiddenRefreshHeader; // @synthesize hiddenRefreshHeader=_hiddenRefreshHeader;
@property(nonatomic) __weak id <EssayListViewDelegate> essayListViewDelegate; // @synthesize essayListViewDelegate=_essayListViewDelegate;
@property(retain, nonatomic) UIImage *bottomBackGroundImage; // @synthesize bottomBackGroundImage=_bottomBackGroundImage;
@property(nonatomic) float currentViewContentInsetTop; // @synthesize currentViewContentInsetTop=_currentViewContentInsetTop;
@property(nonatomic) _Bool showIntroduceHeaderView; // @synthesize showIntroduceHeaderView=_showIntroduceHeaderView;
@property(retain, nonatomic) UITableView *listView; // @synthesize listView=_listView;
- (void).cxx_destruct;
- (void)topicFakeDataChanged:(id)arg1;
- (void)scrollToTop;
- (void)essayRecommendUserCell:(id)arg1 deleteRecommendUserModel:(id)arg2;
- (void)listNotifyBarTitileBarViewDidHidden:(_Bool)arg1 indicatorShow:(_Bool)arg2;
- (id)photoBrowser:(id)arg1 highQualityImageURLForIndex:(long long)arg2;
- (id)photoBrowser:(id)arg1 highQualityImageForIndex:(long long)arg2;
- (id)photoBrowser:(id)arg1 placeholderImageForIndex:(long long)arg2;
- (void)dismissGuideCardCellView:(id)arg1;
- (long long)getRealRowWithIndexPath:(id)arg1;
- (void)videoAutoPlayIfNeeded;
- (void)pausePlayingVideo:(id)arg1;
- (void)pausePlayingVideoIfExist;
- (void)willDisappear;
- (void)essaylist_scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)essaylist_scrollViewDidEndDecelerating:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)bottomBackGroundMaskImage;
- (void)updateRefreshView;
- (void)networkChanged;
- (void)preLoadContent:(id)arg1;
- (void)hideLoadMoreCell;
- (void)scrollToIndexPath:(id)arg1;
- (void)scrollToRecordPosition;
- (void)listViewScrollToTop;
- (id)lastCellEssay;
- (void)updateThemes;
- (void)loadRefreshViewWhenFirstAppear;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)notifyScrollEvent:(id)arg1;
- (_Bool)canPreLoadMore;
- (void)sendComment:(id)arg1 itemID:(id)arg2 dataIndex:(int)arg3;
- (unsigned long long)convertIndexToWithReviewData:(unsigned long long)arg1;
- (unsigned long long)convertIndexToWithoutReviewData:(unsigned long long)arg1;
- (void)pushDetailControllerWithIndex:(long long)arg1 scrollToComment:(_Bool)arg2;
- (void)startPlayGif;
- (void)stopPlayGif;
- (void)stopPlayVideo;
- (void)startPlayVideo;
- (void)reloadData;
- (void)prepareFakeData;
- (void)deleteFeedForData:(id)arg1;
- (void)dislikeDidFinish:(id)arg1;
- (void)keyboardFrameChanged:(id)arg1;
- (void)reportEssayViewContentDidSendCommentNotification:(id)arg1;
- (void)reportEssayViewContentVideoStartPlayNotification:(id)arg1;
- (void)reportEssayViewActivityButtonClickedNofitication:(id)arg1;
- (void)reportEssayViewContentImageSingleTapNotification:(id)arg1;
- (void)reportEssayViewContentLabelSingleTapNotification:(id)arg1;
- (void)reportEssayViewCommentButtonClickedNofitication:(id)arg1;
- (void)unregisterNotificationsForCellContentView:(id)arg1;
- (void)registerNotificationsForCellContentView:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)ssLayoutSubviews;
- (void)layoutSubviews;
- (void)didDisappear;
- (void)didAppear;
- (void)willAppear;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1 condition:(id)arg2 contentInset:(struct UIEdgeInsets)arg3;
- (id)initWithFrame:(struct CGRect)arg1 condition:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

