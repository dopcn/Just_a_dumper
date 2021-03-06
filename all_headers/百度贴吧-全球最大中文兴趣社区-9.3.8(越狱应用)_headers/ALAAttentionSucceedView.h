//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, UITapGestureRecognizer;
@protocol ALAAttentionSucceedViewDelegate;

@interface ALAAttentionSucceedView : UIView
{
    id <ALAAttentionSucceedViewDelegate> _delegate;
    UIView *_containerView;
    UIView *_containerCornerView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIImageView *_guideView;
    UIView *_divideLine;
    UIButton *_confirmButton;
    UITapGestureRecognizer *_tapGesture;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIView *divideLine; // @synthesize divideLine=_divideLine;
@property(retain, nonatomic) UIImageView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *containerCornerView; // @synthesize containerCornerView=_containerCornerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <ALAAttentionSucceedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shouldHiddenView;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

