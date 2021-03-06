//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CDAvatarBadgeContainer, CDAvatarOverlayView, CDVAvatarModel, UIImageView;
@protocol CDVAvatarViewDelegate;

@interface CDVAvatarView : UIView
{
    _Bool _passEvent;
    _Bool _dontShowV;
    id <CDVAvatarViewDelegate> _delegate;
    UIImageView *_avatarImageView;
    UIImageView *_vImageView;
    CDAvatarBadgeContainer *_badgeContainer;
    CDAvatarOverlayView *_overlayView;
    long long _mode;
    CDVAvatarModel *_avatar;
}

@property(retain, nonatomic) CDVAvatarModel *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) CDAvatarOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) CDAvatarBadgeContainer *badgeContainer; // @synthesize badgeContainer=_badgeContainer;
@property(retain, nonatomic) UIImageView *vImageView; // @synthesize vImageView=_vImageView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) _Bool dontShowV; // @synthesize dontShowV=_dontShowV;
@property(nonatomic) _Bool passEvent; // @synthesize passEvent=_passEvent;
@property(nonatomic) __weak id <CDVAvatarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)vImageURLWithMode:(long long)arg1 model:(id)arg2;
- (id)portaritURLWithMode:(long long)arg1 model:(id)arg2;
- (void)setPortraitImage:(id)arg1 vImage:(id)arg2;
- (void)setParam:(id)arg1 mode:(long long)arg2 defaultImage:(id)arg3;
- (void)setParam:(id)arg1 mode:(long long)arg2;
- (void)setParam:(id)arg1 mode:(long long)arg2 placeholderColor:(id)arg3;
- (void)setParam:(id)arg1 mode:(long long)arg2 placeholderImage:(id)arg3;
- (void)layoutSubviews;
- (void)headerImageClick;
- (void)setBorderWidth:(double)arg1 borderColor:(id)arg2;
- (void)baseInit;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

