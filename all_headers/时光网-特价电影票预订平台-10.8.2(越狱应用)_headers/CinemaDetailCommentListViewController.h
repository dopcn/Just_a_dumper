//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTBaseViewControllerWithInputBar.h"

#import "CinemaDetailCommentDetailCellDelegate-Protocol.h"
#import "CinemaDetailCommentDetailListCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CinemaCommentEntity, MNRCinemaComment, MNRCinemaCommentReply, MNRCommentParise, NSDictionary, NSMutableArray, NSNumber, NSString, UITapGestureRecognizer;
@protocol CinemaDetailCommentListViewControllerDelegate;

@interface CinemaDetailCommentListViewController : MTBaseViewControllerWithInputBar <UITableViewDataSource, UITableViewDelegate, CinemaDetailCommentDetailCellDelegate, CinemaDetailCommentDetailListCellDelegate>
{
    long long _currentPage;
    UITapGestureRecognizer *_tapGestureRecognizer;
    _Bool showSofa;
    long long commentIndex;
    NSDictionary *_dicParam;
    id <CinemaDetailCommentListViewControllerDelegate> _delegate;
    NSMutableArray *_commentList;
    NSString *_viewTitle;
    NSNumber *_commentId;
    CinemaCommentEntity *_comment;
    NSString *_replyContentInput;
    MNRCinemaComment *_requestCinemaComment;
    MNRCommentParise *_pariseRequest;
    MNRCinemaCommentReply *_requestCinemaCommentReply;
}

@property(retain, nonatomic) MNRCinemaCommentReply *requestCinemaCommentReply; // @synthesize requestCinemaCommentReply=_requestCinemaCommentReply;
@property(retain, nonatomic) MNRCommentParise *pariseRequest; // @synthesize pariseRequest=_pariseRequest;
@property(retain, nonatomic) MNRCinemaComment *requestCinemaComment; // @synthesize requestCinemaComment=_requestCinemaComment;
@property(copy, nonatomic) NSString *replyContentInput; // @synthesize replyContentInput=_replyContentInput;
@property(retain, nonatomic) CinemaCommentEntity *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSNumber *commentId; // @synthesize commentId=_commentId;
@property(copy, nonatomic) NSString *viewTitle; // @synthesize viewTitle=_viewTitle;
@property(retain, nonatomic) NSMutableArray *commentList; // @synthesize commentList=_commentList;
@property(nonatomic) __weak id <CinemaDetailCommentListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *dicParam; // @synthesize dicParam=_dicParam;
- (void).cxx_destruct;
- (void)replyButtonPressedWithIndex:(long long)arg1;
- (void)updatePraiseWithCell:(id)arg1;
- (void)doneLoadingTableViewData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tapAction:(id)arg1;
- (void)sendRequst;
- (void)onPostCommentFailed;
- (void)onPostCommentFinished:(id)arg1;
- (void)postCinemaComment;
- (void)commentMsgPraiseFailed;
- (void)commentMsgPraiseFinished:(id)arg1;
- (void)getCinemaCommentPraise;
- (void)onLoadCommentsFailded;
- (void)onLoadCommentsFinished:(id)arg1;
- (void)loadCinemaComments;
- (void)mt_cancelLoadData;
- (void)mt_loadData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)mt_addViewConstraints;
- (void)createBottomInputBarView;
- (void)createTableView;
- (void)createPullToRefreshView;
- (void)createInfiniteScrollingView;
- (void)createMainViews;
- (void)createNavBarView;
- (void)mt_createViews;
- (void)mt_initFields;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

