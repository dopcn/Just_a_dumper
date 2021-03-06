//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

@class UIButton, UIColor, UIFont, UIImage, UILabel, UIView;

@interface NavigationViewController : BaseViewController
{
    UIImage *_leftButtonBackground;
    UIImage *_rightButtonBackground;
    UIColor *_buttonTextColor;
    UIFont *_buttonTextFont;
    UIImage *_backButtonImage;
    UIView *_titleView;
    UILabel *_titleLabel;
    UIButton *_logoButton;
    UIButton *_navTitleButton;
}

- (void).cxx_destruct;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setNavigationBarLogo:(id)arg1;
- (id)getNavigationBarTitle;
- (void)setNavigationBarButton:(id)arg1;
- (void)setNavigationBarTitle:(id)arg1 titleColor:(id)arg2 font:(id)arg3;
- (void)setNavigationBarTitle:(id)arg1;
- (void)viewDidLoad;
- (void)setBackButton:(id)arg1;
- (void)setCloseButton:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)setCloseButton:(id)arg1;
- (void)popSelf;
- (void)closeSelf;
- (void)setLeftButton:(id)arg1;
- (void)setRightView:(id)arg1;
- (void)setRightButton:(id)arg1 image:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)setLeftButton:(id)arg1 image:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)createNavigationBarButton:(id)arg1 background:(id)arg2 title:(id)arg3 image:(id)arg4 target:(id)arg5 action:(SEL)arg6 align:(unsigned char)arg7;

@end

