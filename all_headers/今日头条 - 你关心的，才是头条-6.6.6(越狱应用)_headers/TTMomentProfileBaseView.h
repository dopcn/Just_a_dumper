//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewBase.h"

#import "ArticleComentViewDelegate-Protocol.h"
#import "FriendDataManagerDelegate-Protocol.h"
#import "SSActivityViewDelegate-Protocol.h"
#import "TTActivityShareManagerDelegate-Protocol.h"
#import "TTBlockManagerDelegate-Protocol.h"

@class ArticleMomentModel, FriendDataManager, NSString, SSActivityView, TTActionSheetController, TTActivityShareManager, TTBlockManager, TTMomentProfileShareHelper;
@protocol TTMomentProfileProtocol;

@interface TTMomentProfileBaseView : SSViewBase <FriendDataManagerDelegate, TTBlockManagerDelegate, SSActivityViewDelegate, ArticleComentViewDelegate, TTActivityShareManagerDelegate>
{
    _Bool _fromColdStart;
    TTMomentProfileShareHelper *_shareHelper;
    id <TTMomentProfileProtocol> _momentProfileDelegate;
    CDUnknownBlockType _followBlock;
    FriendDataManager *_friendManager;
    TTBlockManager *_blockUserManager;
    TTActivityShareManager *_activityActionManager;
    SSActivityView *_phoneShareView;
    ArticleMomentModel *_shareMoment;
    TTActionSheetController *_actionSheetController;
}

@property(retain, nonatomic) TTActionSheetController *actionSheetController; // @synthesize actionSheetController=_actionSheetController;
@property(retain, nonatomic) ArticleMomentModel *shareMoment; // @synthesize shareMoment=_shareMoment;
@property(retain, nonatomic) SSActivityView *phoneShareView; // @synthesize phoneShareView=_phoneShareView;
@property(retain, nonatomic) TTActivityShareManager *activityActionManager; // @synthesize activityActionManager=_activityActionManager;
@property(retain, nonatomic) TTBlockManager *blockUserManager; // @synthesize blockUserManager=_blockUserManager;
@property(retain, nonatomic) FriendDataManager *friendManager; // @synthesize friendManager=_friendManager;
@property(copy, nonatomic) CDUnknownBlockType followBlock; // @synthesize followBlock=_followBlock;
@property(nonatomic) _Bool fromColdStart; // @synthesize fromColdStart=_fromColdStart;
@property(nonatomic) __weak id <TTMomentProfileProtocol> momentProfileDelegate; // @synthesize momentProfileDelegate=_momentProfileDelegate;
@property(retain, nonatomic) TTMomentProfileShareHelper *shareHelper; // @synthesize shareHelper=_shareHelper;
- (void).cxx_destruct;
- (id)shareLabelWithShareType:(long long)arg1;
- (void)didReceiveDeleteThreadNotification:(id)arg1;
- (void)didReceiveDetailDeleteUGCMovieNotification:(id)arg1;
- (void)didReceiveReportUserNotification:(id)arg1;
- (void)didReceiveBlockUserNotification:(id)arg1;
- (void)receiveThreadCommentNeedDeleteNotification:(id)arg1;
- (void)receiveMomentCommentNeedDeleteNotification:(id)arg1;
- (void)receiveDeleteShortVideoNotification:(id)arg1;
- (void)receiveDeleteMomentNotification:(id)arg1;
- (void)didPlayCountUpdate:(id)arg1;
- (void)didDiggShortVideo:(id)arg1;
- (void)cancelDiggThread:(id)arg1;
- (void)didDiggThread:(id)arg1;
- (void)cancelDiggComment:(id)arg1;
- (void)didDiggComment:(id)arg1;
- (void)didCancelDiggMoment:(id)arg1;
- (void)didDiggMoment:(id)arg1;
- (void)postMessageDidFinish:(id)arg1;
- (void)weitoutiaoPostSuccess:(id)arg1;
- (void)getForwardMomentDoneNotification:(id)arg1;
- (void)didFinishEditingUserInfoNotification:(id)arg1;
- (id)parseUserProfileData:(id)arg1;
- (void)showGallery:(id)arg1;
- (void)commentView:(id)arg1 didFinishPublishComment:(id)arg2;
- (void)showCommentViewWithMoment:(id)arg1 commentIndex:(int)arg2;
- (void)cancelShortVideoDigg:(id)arg1;
- (void)updateShortVideoDigg:(id)arg1;
- (void)updateCommentDigg:(id)arg1;
- (void)cancelDigg:(id)arg1;
- (void)updateDigg:(id)arg1;
- (void)followOrUnActionWithInfo:(id)arg1 action:(int)arg2;
- (void)unfollow:(id)arg1;
- (void)follow:(id)arg1;
- (void)blockUserManager:(id)arg1 unblockResult:(_Bool)arg2 unblockedUserID:(id)arg3 error:(id)arg4 errorTip:(id)arg5;
- (void)blockUserManager:(id)arg1 blocResult:(_Bool)arg2 blockedUserID:(id)arg3 error:(id)arg4 errorTip:(id)arg5;
- (void)friendDataManager:(id)arg1 finishActionType:(int)arg2 error:(id)arg3 result:(id)arg4;
- (void)showLoginViewWithSource:(id)arg1;
- (void)block:(id)arg1 isBlock:(_Bool)arg2;
- (void)report:(id)arg1;
- (void)deleteMomentComment:(id)arg1;
- (void)deleteMoment:(id)arg1;
- (void)activityShareManager:(id)arg1 completeWithActivityType:(long long)arg2 error:(id)arg3;
- (void)openForwardView;
- (void)forwardToWeitoutiao;
- (void)forwardMoment;
- (void)activityView:(id)arg1 didCompleteByItemType:(long long)arg2;
- (void)shareProfile:(id)arg1;
- (void)shareMoment:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

