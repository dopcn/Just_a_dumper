//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UIToolbar, UIVisualEffectView;

@interface UCBlurView : UIView
{
    int _blurStyle;
    UIVisualEffectView *_visualBlurView;
    UIToolbar *_blurView;
    UIImageView *_noneBlurView;
    UIImageView *_blurCoverImageView;
    UIView *_lightMaskView;
}

+ (_Bool)isBlurSupported;
+ (_Bool)visualEffectSupported;
+ (_Bool)supportedBackdropEffect;
@property(retain, nonatomic) UIView *lightMaskView; // @synthesize lightMaskView=_lightMaskView;
@property(nonatomic) int blurStyle; // @synthesize blurStyle=_blurStyle;
@property(retain, nonatomic) UIImageView *blurCoverImageView; // @synthesize blurCoverImageView=_blurCoverImageView;
@property(retain, nonatomic) UIImageView *noneBlurView; // @synthesize noneBlurView=_noneBlurView;
@property(retain, nonatomic) UIToolbar *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIVisualEffectView *visualBlurView; // @synthesize visualBlurView=_visualBlurView;
- (void)setBlurDarkStyleWithAlphaMask:(double)arg1 withColor:(id)arg2 withAnimation:(_Bool)arg3;
- (void)setBlurStyleLightWithAlphaMask:(double)arg1;
- (void)setNoneBlurViewCoverImagePath:(id)arg1;
- (void)setBlurViewCoverImagePath:(id)arg1;
- (void)cleanupBlurCoverImage;
- (void)setNoneBlurBackgroundImagePath:(id)arg1;
- (void)setBlurViewCornerRadius:(double)arg1;
- (void)setAlpha:(double)arg1;
- (id)visualBlurViewWithEffect:(int)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 disableBlur:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

