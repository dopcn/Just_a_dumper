//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UGCTextViewDelegate-Protocol.h"

@class NSString, PBAAlbumDetailInfo, PBAAlbumInteractControl, UGCTextView;

@interface PBAReviewAlbumView : UIView <UGCTextViewDelegate>
{
    _Bool _shouldRefreshRect;
    PBAAlbumDetailInfo *_albumDetailInfo;
    CDUnknownBlockType _sendCommentBlock;
    CDUnknownBlockType _jumpCommentBlock;
    CDUnknownBlockType _starBlock;
    CDUnknownBlockType _shareBlock;
    CDUnknownBlockType _beginEditingBlock;
    UGCTextView *_textView;
    PBAAlbumInteractControl *_commentControl;
    PBAAlbumInteractControl *_starControl;
    PBAAlbumInteractControl *_shareControl;
    UIView *_topSeparatorline;
    struct CGRect _bottomRect;
    struct CGRect _topRect;
}

@property(nonatomic) _Bool shouldRefreshRect; // @synthesize shouldRefreshRect=_shouldRefreshRect;
@property(nonatomic) struct CGRect topRect; // @synthesize topRect=_topRect;
@property(nonatomic) struct CGRect bottomRect; // @synthesize bottomRect=_bottomRect;
@property(retain, nonatomic) UIView *topSeparatorline; // @synthesize topSeparatorline=_topSeparatorline;
@property(retain, nonatomic) PBAAlbumInteractControl *shareControl; // @synthesize shareControl=_shareControl;
@property(retain, nonatomic) PBAAlbumInteractControl *starControl; // @synthesize starControl=_starControl;
@property(retain, nonatomic) PBAAlbumInteractControl *commentControl; // @synthesize commentControl=_commentControl;
@property(retain, nonatomic) UGCTextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) CDUnknownBlockType beginEditingBlock; // @synthesize beginEditingBlock=_beginEditingBlock;
@property(copy, nonatomic) CDUnknownBlockType shareBlock; // @synthesize shareBlock=_shareBlock;
@property(copy, nonatomic) CDUnknownBlockType starBlock; // @synthesize starBlock=_starBlock;
@property(copy, nonatomic) CDUnknownBlockType jumpCommentBlock; // @synthesize jumpCommentBlock=_jumpCommentBlock;
@property(copy, nonatomic) CDUnknownBlockType sendCommentBlock; // @synthesize sendCommentBlock=_sendCommentBlock;
@property(retain, nonatomic) PBAAlbumDetailInfo *albumDetailInfo; // @synthesize albumDetailInfo=_albumDetailInfo;
- (void).cxx_destruct;
- (void)refreshComment:(id)arg1 resetState:(_Bool)arg2;
- (void)refreshStateWhenKeyboardShow:(_Bool)arg1;
- (void)didClickShareControl;
- (void)didClickStarControl;
- (void)didClickCommentControl;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)textView:(id)arg1 willChangeHeight:(double)arg2;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)dealloc;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

