//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView;

@interface WMFollowButton : UIButton
{
    _Bool _followed;
    UIImageView *_imageViewAdd;
    UIImageView *_imageViewRight;
    UIImageView *_imageViewFollow;
    UIImageView *_imageViewFollowed;
}

@property(retain, nonatomic) UIImageView *imageViewFollowed; // @synthesize imageViewFollowed=_imageViewFollowed;
@property(retain, nonatomic) UIImageView *imageViewFollow; // @synthesize imageViewFollow=_imageViewFollow;
@property(retain, nonatomic) UIImageView *imageViewRight; // @synthesize imageViewRight=_imageViewRight;
@property(retain, nonatomic) UIImageView *imageViewAdd; // @synthesize imageViewAdd=_imageViewAdd;
@property(readonly, nonatomic) _Bool followed; // @synthesize followed=_followed;
- (void)reset;
- (void)didThemeChange;
- (void)setFollowState:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

