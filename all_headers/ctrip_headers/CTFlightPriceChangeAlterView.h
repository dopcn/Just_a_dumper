//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton, UIImageView;

@interface CTFlightPriceChangeAlterView : UIView
{
    int _type;
    CDUnknownBlockType _doCloseButtonCallBack;
    UIView *_backView;
    UIView *_middleBackView;
    UIView *_contentView;
    UIButton *_closeButton;
    UIImageView *_flightIconImageView;
    NSLayoutConstraint *_layoutConstraintViewToLeft;
    NSLayoutConstraint *_layoutConstraintViewToRight;
    NSLayoutConstraint *_layoutConstraintViewToTop;
    NSLayoutConstraint *_iconImageViewLayoutConStraintHeight;
    NSLayoutConstraint *_iconImageViewLayoutConStraintWidth;
    NSLayoutConstraint *_contentViewToView1LayoutConstrainTop;
    NSLayoutConstraint *_contentViewCons_Height;
}

@property(retain, nonatomic) NSLayoutConstraint *contentViewCons_Height; // @synthesize contentViewCons_Height=_contentViewCons_Height;
@property(retain, nonatomic) NSLayoutConstraint *contentViewToView1LayoutConstrainTop; // @synthesize contentViewToView1LayoutConstrainTop=_contentViewToView1LayoutConstrainTop;
@property(retain, nonatomic) NSLayoutConstraint *iconImageViewLayoutConStraintWidth; // @synthesize iconImageViewLayoutConStraintWidth=_iconImageViewLayoutConStraintWidth;
@property(retain, nonatomic) NSLayoutConstraint *iconImageViewLayoutConStraintHeight; // @synthesize iconImageViewLayoutConStraintHeight=_iconImageViewLayoutConStraintHeight;
@property(retain, nonatomic) NSLayoutConstraint *layoutConstraintViewToTop; // @synthesize layoutConstraintViewToTop=_layoutConstraintViewToTop;
@property(retain, nonatomic) NSLayoutConstraint *layoutConstraintViewToRight; // @synthesize layoutConstraintViewToRight=_layoutConstraintViewToRight;
@property(retain, nonatomic) NSLayoutConstraint *layoutConstraintViewToLeft; // @synthesize layoutConstraintViewToLeft=_layoutConstraintViewToLeft;
@property(retain, nonatomic) UIImageView *flightIconImageView; // @synthesize flightIconImageView=_flightIconImageView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *middleBackView; // @synthesize middleBackView=_middleBackView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(copy, nonatomic) CDUnknownBlockType doCloseButtonCallBack; // @synthesize doCloseButtonCallBack=_doCloseButtonCallBack;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)closeButtonAction:(id)arg1;
- (double)contentMaxWidthWithType:(int)arg1;
- (void)setupContentView:(id)arg1 height:(double)arg2 type:(int)arg3 closeHidden:(_Bool)arg4;
- (void)initView;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

