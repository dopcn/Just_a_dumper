//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface LKPRetryPageView : UIView
{
    UILabel *_descLabel;
    UIButton *_retryButton;
    UIView *_shadowView;
}

- (void).cxx_destruct;
- (void)setRetryButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)setDescription:(id)arg1;
- (void)configSubViews;
- (void)setHidden:(_Bool)arg1;
- (void)hide;
- (void)show:(id)arg1;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

