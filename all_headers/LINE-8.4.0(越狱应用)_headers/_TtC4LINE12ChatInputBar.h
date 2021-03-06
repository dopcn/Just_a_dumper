//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MessageViewController, NLStylesheet, NSArray;
@protocol NLCustomKeyboardViewDelegate, NLVerticalGrowingViewHandlerDelegate, _TtP4LINE20ChatInputBarDelegate_;

@interface _TtC4LINE12ChatInputBar : UIView
{
    // Error parsing type: , name: returnKeyTypeObserver
    // Error parsing type: , name: isMenuEnabled
    // Error parsing type: , name: isPlusEnabled
    // Error parsing type: , name: isCameraPhotoEnabled
    // Error parsing type: , name: isVoiceEnabled
    // Error parsing type: , name: commonConstraints
    // Error parsing type: , name: textViewMaxHeightConstraint
    // Error parsing type: , name: inputBaseMarginLeftConstraint
    // Error parsing type: , name: cameraButtonMarginLeftConstraint
    // Error parsing type: , name: photoButtonMarginLeftConstraint
    // Error parsing type: , name: textViewMinHeight
    // Error parsing type: , name: textViewMaxHeight
    // Error parsing type: , name: inputBaseMarginLeading
    // Error parsing type: , name: expandedInputBaseMarginLeading
    // Error parsing type: , name: cameraButtonMarginLeft
    // Error parsing type: , name: photoButtonMarginLeft
    // Error parsing type: , name: marginLeading
    // Error parsing type: , name: buttonSize
    // Error parsing type: , name: spacingBetweenButtons
    // Error parsing type: , name: backgroundImageView
    // Error parsing type: , name: containerView
    // Error parsing type: , name: inputBaseView
    // Error parsing type: , name: buttonBaseView
    // Error parsing type: , name: chatTextView
    // Error parsing type: , name: menuButton
    // Error parsing type: , name: collapseButton
    // Error parsing type: , name: plusButton
    // Error parsing type: , name: cameraButton
    // Error parsing type: , name: photoButton
    // Error parsing type: , name: stickerButton
    // Error parsing type: , name: sendButton
    // Error parsing type: , name: panGestureBeganPoint
    // Error parsing type: , name: delegate
    // Error parsing type: , name: customKeyboardViewDelegate
    // Error parsing type: , name: growingViewHandlerDelegate
    // Error parsing type: , name: messageViewController
    // Error parsing type: , name: defaultHeight
    // Error parsing type: , name: backgroundTransparentTopMargin
    // Error parsing type: , name: stylesheet
    // Error parsing type: , name: isUseKeyboardAppearanceTheme
    // Error parsing type: , name: isExpanded
    // Error parsing type: , name: isSupportedUnder4InchScreen
    // Error parsing type: , name: tooltipView
    // Error parsing type: , name: coverViewHeightConstraint
    // Error parsing type: , name: coverView
}

- (CDUnknownBlockType).cxx_destruct;
- (void)setCoverView:(id)arg1 animated:(_Bool)arg2;
@property(nonatomic, retain) UIView *coverView; // @synthesize coverView;
- (_Bool)render;
- (void)resetToggleButtons;
- (void)toggleButtonWithKind:(long long)arg1;
- (void)buttonPressed:(id)arg1;
- (void)setupLayoutWithShowMenu:(_Bool)arg1 showPlus:(_Bool)arg2 showCameraPhoto:(_Bool)arg3 showVoice:(_Bool)arg4;
- (_Bool)isSelectedWithKind:(long long)arg1;
- (id)getButtonFromKind:(long long)arg1;
- (void)sendMessage;
@property(nonatomic, readonly) NSArray *keyCommands;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic) struct CGRect bounds;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
@property(nonatomic) _Bool actionDisabled;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded;
@property(nonatomic, retain) NLStylesheet *stylesheet; // @synthesize stylesheet;
@property(nonatomic) long long sendButtonKind;
@property(nonatomic, readonly) double alignmentHeight;
@property(nonatomic) double backgroundTransparentTopMargin; // @synthesize backgroundTransparentTopMargin;
@property(nonatomic, readonly) double defaultHeight; // @synthesize defaultHeight;
@property(nonatomic) __weak MessageViewController *messageViewController; // @synthesize messageViewController;
@property(nonatomic) __weak id <NLVerticalGrowingViewHandlerDelegate> growingViewHandlerDelegate; // @synthesize growingViewHandlerDelegate;
@property(nonatomic) __weak id <NLCustomKeyboardViewDelegate> customKeyboardViewDelegate; // @synthesize customKeyboardViewDelegate;
@property(nonatomic) __weak id <_TtP4LINE20ChatInputBarDelegate_> delegate; // @synthesize delegate;
- (void)hideTooltip;
- (void)displayTooltipForGalleryIfNeeded;

@end

