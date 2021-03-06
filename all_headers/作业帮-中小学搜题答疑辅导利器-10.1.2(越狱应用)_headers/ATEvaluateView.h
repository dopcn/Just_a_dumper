//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ATTextImageView, PlaceHolderTextView, UILabel;
@protocol ATEvaluateViewDelegate;

@interface ATEvaluateView : UIView
{
    UILabel *_titleLabel;
    UIView *_starSelectView;
    PlaceHolderTextView *_inputTextView;
    UIView *_panelView;
    UIView *_buttonsView;
    ATTextImageView *_followView;
    _Bool _isFollow;
    id <ATEvaluateViewDelegate> _delegate;
    UIView *_containerView;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <ATEvaluateViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)commitEvaluate;
- (void)followViewTouched;
- (void)initFollowView;
- (void)updateFolloViewWithIsShow:(_Bool)arg1;
- (void)updateViewsWithStarNumber:(long long)arg1;
- (void)showFollowView:(_Bool)arg1;
- (void)setStarNumber:(long long)arg1;
- (double)getStarSelectViewOrginY;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initSubViews;
- (void)addNotification;
- (void)initBottomView;
- (void)initInputView;
- (void)initButtonsWithStarCount:(long long)arg1;
- (id)getButtonWithFrame:(struct CGRect)arg1 text:(id)arg2;
- (void)initStarView;
- (void)initLabel;
- (void)keyBoardWillHide:(id)arg1;
- (void)keyBoardWillShow:(id)arg1;
- (void)dealloc;
- (void)panelDidTap;
- (void)buttonDidTouched:(id)arg1;

@end

