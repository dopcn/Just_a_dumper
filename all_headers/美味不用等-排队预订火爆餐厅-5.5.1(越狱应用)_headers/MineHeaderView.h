//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "View.h"

@class SubTitleBtn, UIButton, UIImageView, UILabel, UserInfoModel;

@interface MineHeaderView : View
{
    UIImageView *_imageView;
    UIImageView *_iconView;
    UILabel *_nameLabel;
    UILabel *_locationLabel;
    UserInfoModel *_userModel;
    SubTitleBtn *_ordersButton;
    SubTitleBtn *_creditButton;
    UIImageView *_verticalLine;
    UIButton *_loginButton;
}

@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) UIImageView *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(retain, nonatomic) SubTitleBtn *creditButton; // @synthesize creditButton=_creditButton;
@property(retain, nonatomic) SubTitleBtn *ordersButton; // @synthesize ordersButton=_ordersButton;
@property(retain, nonatomic) UserInfoModel *userModel; // @synthesize userModel=_userModel;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)makeConstraints;
- (void)updateWhenLogin;
- (void)updateUI;
- (void)didLogOut;
- (void)didLogin;
- (id)initWithFrame:(struct CGRect)arg1;

@end

