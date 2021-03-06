//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FXMvCommentListVllDelegate-Protocol.h"
#import "FXMvDetailVllDelegate-Protocol.h"
#import "FXMvTabViewDelegate-Protocol.h"

@class FXMvCommentListVll, FXMvCommentVm, FXMvDetailVll, FXMvTabView, FXSMvDetail, NSString;
@protocol FXMvTabVllDelegate;

@interface FXMvTabVll : NSObject <FXMvTabViewDelegate, FXMvCommentListVllDelegate, FXMvDetailVllDelegate>
{
    long long _mvId;
    FXSMvDetail *_detail;
    NSObject<FXMvTabVllDelegate> *_delegate;
    FXMvTabView *_view;
    FXMvCommentVm *_commentVm;
    FXMvDetailVll *_detailVll;
    FXMvCommentListVll *_commentListVll;
}

@property(retain, nonatomic) FXMvCommentListVll *commentListVll; // @synthesize commentListVll=_commentListVll;
@property(retain, nonatomic) FXMvDetailVll *detailVll; // @synthesize detailVll=_detailVll;
@property(retain, nonatomic) FXMvCommentVm *commentVm; // @synthesize commentVm=_commentVm;
@property(retain, nonatomic) FXMvTabView *view; // @synthesize view=_view;
@property(nonatomic) __weak NSObject<FXMvTabVllDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FXSMvDetail *detail; // @synthesize detail=_detail;
@property(nonatomic) long long mvId; // @synthesize mvId=_mvId;
- (void).cxx_destruct;
- (void)detailSetUpAlready;
- (void)detailNeedTips:(id)arg1;
- (void)detailTouchMv:(long long)arg1;
- (void)detailTouchConcernBtn:(_Bool)arg1;
- (void)detailToLogin;
- (void)detailTouchDirector;
- (void)detailTouchActor;
- (void)detailTouchShare;
- (void)detailDigSuccess;
- (void)detailConcernSuccess:(_Bool)arg1 error:(id)arg2;
- (void)commentListUpdateTotal:(long long)arg1;
- (void)commentListNeedTips:(id)arg1;
- (void)commentListToLogin;
- (void)commentListClickUser:(long long)arg1;
- (void)commentListClickReply:(id)arg1;
- (void)tabViewDidSelect:(unsigned long long)arg1;
- (void)destory;
- (void)shareSuccess;
- (id)getMvList;
- (struct CGPoint)getDigBtnCenter:(id)arg1;
- (void)sendToCancelConcern;
- (void)sendToConcern:(_Bool)arg1;
- (void)requestData;
- (void)addComment:(id)arg1;
- (void)updateCommentCount:(long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

