//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UITextView;
@protocol FspUIMediaPageBottomBarDelegate;

@interface FspUIMediaPageBottomBar : UIView <UITextViewDelegate>
{
    UIButton *_enditIcon;
    struct CGRect _normalFrame;
    UIImageView *_commentInputBackground;
    UITextView *_commentInput;
    NSString *_waitSendCommentText;
    struct CGRect _normalInputBackgroundFrame;
    struct CGRect _normalInputFrame;
    struct CGRect _editInputFrame;
    _Bool _isInLogin;
    NSString *_videoId;
    _Bool _isMedia;
    UIView *_coverView;
    UIButton *_share;
    UIButton *_download;
    UIButton *_favorite;
    UILabel *_inputLengthLabel;
    id <FspUIMediaPageBottomBarDelegate> _delegate;
}

@property(nonatomic) __weak id <FspUIMediaPageBottomBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewAppear;
- (void)userToLoginAgain;
- (void)onCommentCompleted:(id)arg1;
- (void)commentCompleted;
- (_Bool)sendComment:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)updateInputLength;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)onFavoriteButtonClicked;
- (void)onDownloadButtonClicked;
- (void)onShareButtonClicked;
- (void)onViewClicked:(id)arg1;
- (id)createButtonWithImage:(id)arg1 action:(SEL)arg2 rect:(struct _FspRect)arg3 tag:(long long)arg4;
- (void)createButtons;
- (void)hideCoverView;
- (void)cancelComment;
- (void)enableAutorotate:(_Bool)arg1;
- (void)createCoverView;
- (void)editButtonClicked;
- (void)createInputLengthLabel;
- (void)createCommentInput;
- (void)createLine;
- (void)changeFavoriteState:(_Bool)arg1;
- (void)onFavoriteAvailable;
- (void)onShareAvaliable;
- (void)hideButtons:(_Bool)arg1;
- (void)keyboardWillHide;
- (void)keyboardWillShow:(id)arg1;
- (void)addKeyboardObserver;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 videoId:(id)arg2 isMedia:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

