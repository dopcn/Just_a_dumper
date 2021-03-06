//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol MTUserHomeNavBarDelegate;

@interface MTUserHomeNavBar : UIView
{
    _Bool _userIsMe;
    id <MTUserHomeNavBarDelegate> _delegate;
    UIImageView *_followIcon;
    UIView *_seperateLine;
    UILabel *_titleLabel;
    UILabel *_userNameLabel;
    UIButton *_backButton;
    UIButton *_followButton;
    UIButton *_userInfoButton;
    UIButton *_setButton;
    UIButton *_messageButton;
    UIButton *_moreButton;
}

@property(nonatomic) __weak UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) __weak UIButton *messageButton; // @synthesize messageButton=_messageButton;
@property(nonatomic) __weak UIButton *setButton; // @synthesize setButton=_setButton;
@property(nonatomic) __weak UIButton *userInfoButton; // @synthesize userInfoButton=_userInfoButton;
@property(nonatomic) __weak UIButton *followButton; // @synthesize followButton=_followButton;
@property(nonatomic) __weak UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIView *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(nonatomic) _Bool userIsMe; // @synthesize userIsMe=_userIsMe;
@property(retain, nonatomic) UIImageView *followIcon; // @synthesize followIcon=_followIcon;
@property(nonatomic) __weak id <MTUserHomeNavBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionMoreButtonClick;
- (void)actionUserInfoButtonClick;
- (void)actionSetButtonClick;
- (void)actionMessageButtonClick;
- (void)actionFollowButtonClick;
- (void)actionBackButtonClick;
- (void)transformWithPercent:(double)arg1;
- (void)configureWithUserInfo:(id)arg1;
- (void)awakeFromNib;

@end

