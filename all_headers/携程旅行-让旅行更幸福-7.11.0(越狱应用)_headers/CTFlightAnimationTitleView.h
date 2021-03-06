//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CTVectorImageView, NSLayoutConstraint, NSString, UILabel;

@interface CTFlightAnimationTitleView : UIView
{
    NSString *_lastLeftTitle;
    NSString *_lastRightTitle;
    NSString *_lastSubTitle;
    UIView *_contentTitleView;
    UILabel *_labelLeftTitle;
    UILabel *_labelRightTitle;
    UILabel *_labelSubTitle;
    CTVectorImageView *_iconImageView;
    NSLayoutConstraint *_iconImageViewLeadingCons;
    NSLayoutConstraint *_iconImageViewTrailingCons;
    NSLayoutConstraint *_iconImageViewHeightCons;
    NSLayoutConstraint *_iconImageViewWidthCons;
    NSLayoutConstraint *_contentTitleViewTopCons;
    NSLayoutConstraint *_contentTitleViewWidthCons;
    NSLayoutConstraint *_subTitleLabelWidthCons;
    NSLayoutConstraint *_labelLeftTitleWidthCons;
    NSLayoutConstraint *_labelRightTitleWidthCons;
    UILabel *_leftLab;
    NSLayoutConstraint *_centerTitleCenterMarginCons;
}

@property(retain, nonatomic) NSLayoutConstraint *centerTitleCenterMarginCons; // @synthesize centerTitleCenterMarginCons=_centerTitleCenterMarginCons;
@property(nonatomic) __weak UILabel *leftLab; // @synthesize leftLab=_leftLab;
@property(retain, nonatomic) NSLayoutConstraint *labelRightTitleWidthCons; // @synthesize labelRightTitleWidthCons=_labelRightTitleWidthCons;
@property(retain, nonatomic) NSLayoutConstraint *labelLeftTitleWidthCons; // @synthesize labelLeftTitleWidthCons=_labelLeftTitleWidthCons;
@property(retain, nonatomic) NSLayoutConstraint *subTitleLabelWidthCons; // @synthesize subTitleLabelWidthCons=_subTitleLabelWidthCons;
@property(retain, nonatomic) NSLayoutConstraint *contentTitleViewWidthCons; // @synthesize contentTitleViewWidthCons=_contentTitleViewWidthCons;
@property(retain, nonatomic) NSLayoutConstraint *contentTitleViewTopCons; // @synthesize contentTitleViewTopCons=_contentTitleViewTopCons;
@property(retain, nonatomic) NSLayoutConstraint *iconImageViewWidthCons; // @synthesize iconImageViewWidthCons=_iconImageViewWidthCons;
@property(retain, nonatomic) NSLayoutConstraint *iconImageViewHeightCons; // @synthesize iconImageViewHeightCons=_iconImageViewHeightCons;
@property(retain, nonatomic) NSLayoutConstraint *iconImageViewTrailingCons; // @synthesize iconImageViewTrailingCons=_iconImageViewTrailingCons;
@property(retain, nonatomic) NSLayoutConstraint *iconImageViewLeadingCons; // @synthesize iconImageViewLeadingCons=_iconImageViewLeadingCons;
@property(retain, nonatomic) CTVectorImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *labelSubTitle; // @synthesize labelSubTitle=_labelSubTitle;
@property(retain, nonatomic) UILabel *labelRightTitle; // @synthesize labelRightTitle=_labelRightTitle;
@property(retain, nonatomic) UILabel *labelLeftTitle; // @synthesize labelLeftTitle=_labelLeftTitle;
@property(retain, nonatomic) UIView *contentTitleView; // @synthesize contentTitleView=_contentTitleView;
- (void).cxx_destruct;
- (void)startMoveAnimationWithDuration:(double)arg1;
- (void)setLeftTitle:(id)arg1 rightTitle:(id)arg2 subTitle:(id)arg3 imageCode:(id)arg4 imageColorHex:(int)arg5;
- (void)awakeFromNib;

@end

