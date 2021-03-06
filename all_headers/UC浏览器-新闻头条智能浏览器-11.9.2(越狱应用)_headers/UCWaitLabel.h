//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UCActivityIndicatorView, UCBlurView, UILabel;

@interface UCWaitLabel : UIView
{
    UIView *_maskView;
    UILabel *_label;
    UCBlurView *_waitLabelBackground;
    UCActivityIndicatorView *_activityView;
}

@property(retain, nonatomic) UCActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) UCBlurView *waitLabelBackground; // @synthesize waitLabelBackground=_waitLabelBackground;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
- (void)setWaitLabelTitle:(id)arg1;
- (void)dismissCompletion:(CDUnknownBlockType)arg1;
- (void)showOnView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateLabelFrame;
- (void)updateActivityViewFrame;
- (void)updateWaitLabelBackgroundFrame;
- (void)updateContentViewFrame:(struct CGRect)arg1;
- (void)createTitleLabel;
- (void)createActivityView;
- (void)createWaitLabelBackground;
- (void)createMaskView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

