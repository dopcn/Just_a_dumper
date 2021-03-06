//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HPGrowingTextViewDelegate-Protocol.h"

@class BDNLiveLikeButton, HPGrowingTextView, UIButton, UIImage, UILabel;
@protocol BDNLiveKeyBoardViewDelegate;

@interface BDNLiveKeyBoardView : UIView <HPGrowingTextViewDelegate>
{
    int _viewStatus;
    HPGrowingTextView *_inputView;
    id <BDNLiveKeyBoardViewDelegate> _delegate;
    BDNLiveLikeButton *_likeBtn;
    UIView *_background;
    UIButton *_sendBtn;
    UIView *_shadowView;
    UIButton *_fakeBackground;
    UILabel *_contentLabel;
    UIImage *_iconImage;
}

@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIButton *fakeBackground; // @synthesize fakeBackground=_fakeBackground;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) UIView *background; // @synthesize background=_background;
@property(retain, nonatomic) BDNLiveLikeButton *likeBtn; // @synthesize likeBtn=_likeBtn;
@property(nonatomic) __weak id <BDNLiveKeyBoardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HPGrowingTextView *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) int viewStatus; // @synthesize viewStatus=_viewStatus;
- (void).cxx_destruct;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)growingTextViewDidChange:(id)arg1;
- (_Bool)growingTextViewShouldReturn:(id)arg1;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (_Bool)growingTextViewShouldEndEditing:(id)arg1;
- (_Bool)growingTextViewShouldBeginEditing:(id)arg1;
- (void)updateLikeCount:(long long)arg1;
- (void)sendBtnClick;
- (CDUnknownBlockType)tapCallback:(id)arg1;
- (double)tapCallbackDelay:(id)arg1;
- (double)scaleDuration:(id)arg1;
- (double)scaleRatio:(id)arg1;
- (void)setSendBtnEnabled:(_Bool)arg1;
- (void)talkBtnClick;
- (void)layoutSubviews;
- (void)selfInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

