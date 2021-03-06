//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"
#import "HPGrowingTextViewDelegate-Protocol.h"
#import "MTEmojiKeyboardViewDataSource-Protocol.h"
#import "MTEmojiKeyboardViewDelegate-Protocol.h"

@class HPGrowingTextView, MTEmojiKeyboardView, NSLayoutConstraint, NSString, UIButton, UIColor, UIControl, UILabel, UIWindow;
@protocol MediaCommentViewDelegate;

@interface MediaCommentView : UIView <MTEmojiKeyboardViewDataSource, MTEmojiKeyboardViewDelegate, CAAnimationDelegate, HPGrowingTextViewDelegate>
{
    MTEmojiKeyboardView *_emojiKeyboardView;
    _Bool _isEmojiShow;
    _Bool _disableChangeKeyboardFrame;
    _Bool _disableHandleKeyboardNotification;
    UIControl *_coverView;
    UIWindow *_keyWindow;
    _Bool _needNumbersofWord;
    _Bool _needShowForbiddenLabel;
    _Bool _needChooseFriend;
    _Bool _needGiftButton;
    _Bool _isCommentForbidden;
    _Bool _maskHidden;
    _Bool _isForbidTipAnimating;
    id <MediaCommentViewDelegate> _delegate;
    HPGrowingTextView *_textView;
    UIColor *_maskColor;
    unsigned long long _maxTextCount;
    NSString *_sendButtonText;
    double _defaultOriginY;
    UIButton *_giftButton;
    UIView *_giftContainerView;
    UIView *_forbidCommentView;
    UILabel *_forbidCommentLabel;
    UILabel *_textCountLabel;
    UIButton *_emojiButton;
    UIButton *_sendButton;
    UILabel *_forbidTextLabel;
    NSLayoutConstraint *_sendButtonCenterY;
    NSLayoutConstraint *_giftButtonLeadingConstraint;
    NSLayoutConstraint *_sendButtonLeadingConstraint;
    NSLayoutConstraint *_giftContainerWidthConstraint;
    NSLayoutConstraint *_containViewHeightConstraint;
}

+ (id)loadFromNibDisableHandleKeyboardNotification;
+ (id)loadFromNibWithDelegate:(id)arg1;
@property(nonatomic) _Bool isForbidTipAnimating; // @synthesize isForbidTipAnimating=_isForbidTipAnimating;
@property(nonatomic) __weak NSLayoutConstraint *containViewHeightConstraint; // @synthesize containViewHeightConstraint=_containViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *giftContainerWidthConstraint; // @synthesize giftContainerWidthConstraint=_giftContainerWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *sendButtonLeadingConstraint; // @synthesize sendButtonLeadingConstraint=_sendButtonLeadingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *giftButtonLeadingConstraint; // @synthesize giftButtonLeadingConstraint=_giftButtonLeadingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *sendButtonCenterY; // @synthesize sendButtonCenterY=_sendButtonCenterY;
@property(nonatomic) __weak UILabel *forbidTextLabel; // @synthesize forbidTextLabel=_forbidTextLabel;
@property(nonatomic) __weak UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(nonatomic) __weak UIButton *emojiButton; // @synthesize emojiButton=_emojiButton;
@property(nonatomic) __weak UILabel *textCountLabel; // @synthesize textCountLabel=_textCountLabel;
@property(nonatomic) __weak UILabel *forbidCommentLabel; // @synthesize forbidCommentLabel=_forbidCommentLabel;
@property(nonatomic) __weak UIView *forbidCommentView; // @synthesize forbidCommentView=_forbidCommentView;
@property(nonatomic) __weak UIView *giftContainerView; // @synthesize giftContainerView=_giftContainerView;
@property(nonatomic) __weak UIButton *giftButton; // @synthesize giftButton=_giftButton;
@property(nonatomic) _Bool maskHidden; // @synthesize maskHidden=_maskHidden;
@property(nonatomic) double defaultOriginY; // @synthesize defaultOriginY=_defaultOriginY;
@property(copy, nonatomic) NSString *sendButtonText; // @synthesize sendButtonText=_sendButtonText;
@property(nonatomic) unsigned long long maxTextCount; // @synthesize maxTextCount=_maxTextCount;
@property(readonly, nonatomic) _Bool isCommentForbidden; // @synthesize isCommentForbidden=_isCommentForbidden;
@property(nonatomic) _Bool needGiftButton; // @synthesize needGiftButton=_needGiftButton;
@property(nonatomic) _Bool needChooseFriend; // @synthesize needChooseFriend=_needChooseFriend;
@property(nonatomic) _Bool needShowForbiddenLabel; // @synthesize needShowForbiddenLabel=_needShowForbiddenLabel;
@property(nonatomic) _Bool needNumbersofWord; // @synthesize needNumbersofWord=_needNumbersofWord;
@property(retain, nonatomic) UIColor *maskColor; // @synthesize maskColor=_maskColor;
@property(nonatomic) __weak HPGrowingTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <MediaCommentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)containsDictationView:(id)arg1;
- (_Bool)containsDictation:(id)arg1;
- (void)updateForbiddenTextCountLabel;
- (void)calculateTextCount;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardFrameChanged:(id)arg1;
- (_Bool)isFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)actionSendGift:(id)arg1;
- (void)actionDismiss:(id)arg1;
- (void)actionEmoji:(id)arg1;
- (void)actionSend:(id)arg1;
- (void)emojiKeyBoardViewDidClosed:(id)arg1;
- (void)emojiKeyBoardViewDidPressBackSpace:(id)arg1;
- (void)emojiKeyBoardView:(id)arg1 didUseEmoji:(id)arg2;
- (void)growingTextViewDidChange:(id)arg1;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (void)growingTextViewDidBeginEditing:(id)arg1;
- (_Bool)growingTextViewShouldBeginEditing:(id)arg1;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)showForbiddenCommentTipAnimation;
- (void)forbidStrangerComment:(_Bool)arg1;
- (void)forbidComment:(_Bool)arg1;
- (void)forbidComment:(_Bool)arg1 forbidTitle:(id)arg2;
- (void)hideGiftButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)addSelectedFriendsInfo:(id)arg1;
- (void)removeObserver;
- (void)addObserver;
- (void)disableHandleKeyboardNotification;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

