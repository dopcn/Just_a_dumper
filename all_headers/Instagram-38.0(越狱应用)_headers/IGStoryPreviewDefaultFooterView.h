//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGStoryPreviewFooterViewType-Protocol.h"

@class IGDirectAvatarView, IGProfilePictureImageView, IGStoryPreviewDefaultFooterConfigureSpec, IGTapButton, NSString, UILongPressGestureRecognizer;
@protocol IGStoryPreviewFooterViewDelegate;

@interface IGStoryPreviewDefaultFooterView : UIView <IGStoryPreviewFooterViewType>
{
    UILongPressGestureRecognizer *_storyPress;
    id <IGStoryPreviewFooterViewDelegate> _delegate;
    IGTapButton *_storyButton;
    IGStoryPreviewDefaultFooterConfigureSpec *_configSpec;
    IGTapButton *_sendButton;
    IGTapButton *_downloadButton;
    IGDirectAvatarView *_avatarView;
    IGProfilePictureImageView *_profilePictureImageView;
}

+ (id)downloadButtonWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)storyButtonWithTarget:(id)arg1 action:(SEL)arg2;
@property(readonly, nonatomic) IGProfilePictureImageView *profilePictureImageView; // @synthesize profilePictureImageView=_profilePictureImageView;
@property(readonly, nonatomic) IGDirectAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) IGTapButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(readonly, nonatomic) IGTapButton *sendButton; // @synthesize sendButton=_sendButton;
@property(readonly, nonatomic) IGStoryPreviewDefaultFooterConfigureSpec *configSpec; // @synthesize configSpec=_configSpec;
@property(readonly, nonatomic) IGTapButton *storyButton; // @synthesize storyButton=_storyButton;
@property(nonatomic) __weak id <IGStoryPreviewFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateButton:(id)arg1 title:(id)arg2 imageSize:(struct CGSize)arg3 imageTitleSpace:(double)arg4;
- (double)maxSubviewHeight;
- (_Bool)isShowingDownloadButton;
- (void)setButtonsEnabled:(_Bool)arg1;
- (void)didTapSendButton;
- (void)didTapDownloadButton;
- (void)didTapStoryButton;
- (void)hangleStoryButtonLongPress:(id)arg1;
- (void)configureWithUsers:(id)arg1 module:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)adjustedButtonPadding;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setUpDownloadButton;
- (void)setUpSendButton;
- (void)setUpStoryButton;
- (id)initWithConfigSpec:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

