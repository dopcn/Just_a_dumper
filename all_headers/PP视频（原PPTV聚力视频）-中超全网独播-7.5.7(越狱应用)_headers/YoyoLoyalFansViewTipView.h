//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YoyoRoomBaseView.h"

@class UIButton, UILabel, UIView;

@interface YoyoLoyalFansViewTipView : YoyoRoomBaseView
{
    UILabel *_titleLabel;
    UILabel *_subTitleLabel1;
    UILabel *_subTitleLabel2;
    UIView *_lineView;
    UIButton *_makeButton;
    UIView *_bgView;
}

+ (void)showTip;
@property(nonatomic) __weak UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak UIButton *makeButton; // @synthesize makeButton=_makeButton;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UILabel *subTitleLabel2; // @synthesize subTitleLabel2=_subTitleLabel2;
@property(nonatomic) __weak UILabel *subTitleLabel1; // @synthesize subTitleLabel1=_subTitleLabel1;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)onClickMakeButton:(id)arg1;
- (void)updateConstraints;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

