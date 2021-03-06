//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FAView.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface FALCOpenGuardAlertView : FAView
{
    UIView *_bgView;
    UIView *_contentView;
    UIView *_topView;
    UILabel *_titleLabel;
    UIImageView *_logoImageView;
    UILabel *_tipsLabel;
    UILabel *_expLabel;
    UIButton *_btn;
    UIView *_parentView;
}

@property(retain, nonatomic) UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) UIButton *btn; // @synthesize btn=_btn;
@property(retain, nonatomic) UILabel *expLabel; // @synthesize expLabel=_expLabel;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)dismiss;
- (void)resetContentFrame;
- (void)updateNickName:(id)arg1 days:(long long)arg2 expValue:(long long)arg3;
- (void)showInView:(id)arg1;
- (void)configSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

