//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MNBViewController.h"

#import "MNDArticleCommentBottomDelegate-Protocol.h"
#import "MTDUserLoginDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MNFArticleCommentBottomView, MNFCommentSendPopVC, MNMArticleCommentDetailInfo, MNMArticleCommentReply, MNRAddOrDelParise, MNRCommentParise, MNRSubjectReview, MNRSubjectReviewInfo, MTBView, NSIndexPath, NSMutableArray, NSNumber, NSString;
@protocol MNDMovieVideoCommentDataSyncDelegate;

@interface MNFMovieVideoCommentDetailVC : MNBViewController <UITableViewDelegate, UITableViewDataSource, MNDArticleCommentBottomDelegate, MTDUserLoginDelegate>
{
    id <MNDMovieVideoCommentDataSyncDelegate> _delegate;
    NSNumber *_numberVideoId;
    NSNumber *_numberCommentId;
    MNRSubjectReviewInfo *_requestCommentDetail;
    MNRSubjectReview *_requestSendComment;
    MNRCommentParise *_requestPraise;
    MNRAddOrDelParise *_requestAddOrDelParise;
    MNMArticleCommentDetailInfo *_modelCommentDetail;
    long long _intReplyTotalCount;
    NSMutableArray *_mArrayReplys;
    NSMutableArray *_mArrayPraiseList;
    NSIndexPath *_indexPathCurrentPraise;
    MTBView *_viewNoReplyData;
    MNFArticleCommentBottomView *_viewBottom;
    MNFCommentSendPopVC *_popVCCommentSend;
    NSString *_stringReplyContent;
    MNMArticleCommentReply *_modelCurrentTargetReply;
}

@property(retain, nonatomic) MNMArticleCommentReply *modelCurrentTargetReply; // @synthesize modelCurrentTargetReply=_modelCurrentTargetReply;
@property(copy, nonatomic) NSString *stringReplyContent; // @synthesize stringReplyContent=_stringReplyContent;
@property(retain, nonatomic) MNFCommentSendPopVC *popVCCommentSend; // @synthesize popVCCommentSend=_popVCCommentSend;
@property(retain, nonatomic) MNFArticleCommentBottomView *viewBottom; // @synthesize viewBottom=_viewBottom;
@property(retain, nonatomic) MTBView *viewNoReplyData; // @synthesize viewNoReplyData=_viewNoReplyData;
@property(retain, nonatomic) NSIndexPath *indexPathCurrentPraise; // @synthesize indexPathCurrentPraise=_indexPathCurrentPraise;
@property(retain, nonatomic) NSMutableArray *mArrayPraiseList; // @synthesize mArrayPraiseList=_mArrayPraiseList;
@property(retain, nonatomic) NSMutableArray *mArrayReplys; // @synthesize mArrayReplys=_mArrayReplys;
@property(nonatomic) long long intReplyTotalCount; // @synthesize intReplyTotalCount=_intReplyTotalCount;
@property(retain, nonatomic) MNMArticleCommentDetailInfo *modelCommentDetail; // @synthesize modelCommentDetail=_modelCommentDetail;
@property(retain, nonatomic) MNRAddOrDelParise *requestAddOrDelParise; // @synthesize requestAddOrDelParise=_requestAddOrDelParise;
@property(retain, nonatomic) MNRCommentParise *requestPraise; // @synthesize requestPraise=_requestPraise;
@property(retain, nonatomic) MNRSubjectReview *requestSendComment; // @synthesize requestSendComment=_requestSendComment;
@property(retain, nonatomic) MNRSubjectReviewInfo *requestCommentDetail; // @synthesize requestCommentDetail=_requestCommentDetail;
@property(retain, nonatomic) NSNumber *numberCommentId; // @synthesize numberCommentId=_numberCommentId;
@property(retain, nonatomic) NSNumber *numberVideoId; // @synthesize numberVideoId=_numberVideoId;
@property(nonatomic) __weak id <MNDMovieVideoCommentDataSyncDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mtdRequiredUserLoginSucess;
- (void)mndArticleCommentPraiseBtnClick;
- (void)mndArticleCommentBtnClick;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)mt_routerEventWithName:(id)arg1 userInfo:(id)arg2;
- (void)btnClickBack:(id)arg1;
- (void)loadDataCommentOperatePraiseFailed;
- (void)loadDataCommentOperatePraiseSuccess:(id)arg1;
- (void)loadDataReplyOperatePraiseFailed;
- (void)loadDataReplyOperatePraiseSuccess:(id)arg1;
- (void)loadDataAddOrDeletePraiseWithId:(id)arg1 isReplyPraise:(_Bool)arg2;
- (void)loadDataPublishReplyCommentFailed;
- (void)loadDataPublishReplyCommentSuccess:(id)arg1;
- (void)loadDataPublishReplyComment;
- (void)loadDataCommentPraiseFailed;
- (void)loadDataCommentPraiseSuccess:(id)arg1;
- (void)loadDataCommentPraise;
- (void)loadDataCommentDetailFailed;
- (void)loadDataCommentDetailSuccess:(id)arg1;
- (void)loadDataCommentDetail;
- (void)mt_loadData;
- (void)mt_cancelLoadData;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)mt_addViewConstraints;
- (void)createBottomView;
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

