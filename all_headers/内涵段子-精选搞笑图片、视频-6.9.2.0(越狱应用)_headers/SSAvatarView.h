//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewBase.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSObject, NSString, SSThemedImageView, UIButton, UIGestureRecognizer, UIImage;
@protocol SDWebImageOperation, SSAvatarViewImageUpdateDelegate;

@interface SSAvatarView : SSViewBase <UIGestureRecognizerDelegate>
{
    _Bool _avatarShowed;
    _Bool _avatarSupportNightModel;
    _Bool _isNightModel;
    int _avatarStyle;
    NSObject<SSAvatarViewImageUpdateDelegate> *_delegate;
    double _avatarImgPadding;
    double _rectangleAvatarImgRadius;
    UIImage *_defaultHeadImg;
    UIImage *_backgroundNormalImage;
    UIImage *_backgroundHightlightImage;
    NSString *_defaultHeadImgName;
    NSString *_backgroundNormalImageName;
    NSString *_backgroundHightlightImageName;
    NSString *_borderColorName;
    UIButton *_avatarButton;
    long long _downloadPriority;
    NSString *_avatarURLStr;
    UIImage *_needDrawAvatarImage;
    UIImage *_needDrawBackgroundImage;
    UIImage *_nightAvatarCoverImage;
    UIGestureRecognizer *_bgViewTapGesture;
    SSThemedImageView *_qulificationView;
    id <SDWebImageOperation> _downloadOperation;
    struct UIEdgeInsets _marginEdgeInsets;
}

+ (id)createImageWithColor:(id)arg1;
@property(retain, nonatomic) id <SDWebImageOperation> downloadOperation; // @synthesize downloadOperation=_downloadOperation;
@property(retain, nonatomic) SSThemedImageView *qulificationView; // @synthesize qulificationView=_qulificationView;
@property(retain, nonatomic) UIGestureRecognizer *bgViewTapGesture; // @synthesize bgViewTapGesture=_bgViewTapGesture;
@property(retain, nonatomic) UIImage *nightAvatarCoverImage; // @synthesize nightAvatarCoverImage=_nightAvatarCoverImage;
@property(retain, nonatomic) UIImage *needDrawBackgroundImage; // @synthesize needDrawBackgroundImage=_needDrawBackgroundImage;
@property(retain, nonatomic) UIImage *needDrawAvatarImage; // @synthesize needDrawAvatarImage=_needDrawAvatarImage;
@property(copy, nonatomic) NSString *avatarURLStr; // @synthesize avatarURLStr=_avatarURLStr;
@property(nonatomic) long long downloadPriority; // @synthesize downloadPriority=_downloadPriority;
@property(nonatomic) _Bool isNightModel; // @synthesize isNightModel=_isNightModel;
@property(nonatomic) _Bool avatarSupportNightModel; // @synthesize avatarSupportNightModel=_avatarSupportNightModel;
@property(retain, nonatomic) UIButton *avatarButton; // @synthesize avatarButton=_avatarButton;
@property(nonatomic) _Bool avatarShowed; // @synthesize avatarShowed=_avatarShowed;
@property(copy, nonatomic) NSString *borderColorName; // @synthesize borderColorName=_borderColorName;
@property(copy, nonatomic) NSString *backgroundHightlightImageName; // @synthesize backgroundHightlightImageName=_backgroundHightlightImageName;
@property(copy, nonatomic) NSString *backgroundNormalImageName; // @synthesize backgroundNormalImageName=_backgroundNormalImageName;
@property(copy, nonatomic) NSString *defaultHeadImgName; // @synthesize defaultHeadImgName=_defaultHeadImgName;
@property(retain, nonatomic) UIImage *backgroundHightlightImage; // @synthesize backgroundHightlightImage=_backgroundHightlightImage;
@property(retain, nonatomic) UIImage *backgroundNormalImage; // @synthesize backgroundNormalImage=_backgroundNormalImage;
@property(retain, nonatomic) UIImage *defaultHeadImg; // @synthesize defaultHeadImg=_defaultHeadImg;
@property(nonatomic) double rectangleAvatarImgRadius; // @synthesize rectangleAvatarImgRadius=_rectangleAvatarImgRadius;
@property(nonatomic) struct UIEdgeInsets marginEdgeInsets; // @synthesize marginEdgeInsets=_marginEdgeInsets;
@property(nonatomic) double avatarImgPadding; // @synthesize avatarImgPadding=_avatarImgPadding;
@property(nonatomic) int avatarStyle; // @synthesize avatarStyle=_avatarStyle;
@property(nonatomic) __weak NSObject<SSAvatarViewImageUpdateDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateQulificationView:(id)arg1;
- (void)themeChanged:(id)arg1;
- (_Bool)shouldShowImage;
- (_Bool)cached;
- (void)setLocalAvatarImage:(id)arg1;
- (void)downloadImageByURLString:(id)arg1;
- (void)showAvatarByURL:(id)arg1;
- (void)showAvatarByURL:(id)arg1 showPriority:(long long)arg2;
- (void)needRedraw;
- (struct CGRect)backgroundDrawRect;
- (id)backgroundDrawPath;
- (id)avatarDrawPath;
- (struct CGRect)avatarDrawRect;
- (void)drawRect:(struct CGRect)arg1;
- (void)avatarButtonClicked:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

