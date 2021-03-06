//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIColor, UITabBar, UITabBarController;
@protocol UITabBarControllerDelegate;

@interface TSTabBarController : UIViewController
{
    UITabBarController *_tabBarController;
    _Bool _isTabBarBlur;
    UIColor *_normalItemTitleColor;
    UIColor *_selectedItemTitleColor;
}

@property(nonatomic) _Bool isTabBarBlur; // @synthesize isTabBarBlur=_isTabBarBlur;
@property(retain, nonatomic) UIColor *selectedItemTitleColor; // @synthesize selectedItemTitleColor=_selectedItemTitleColor;
@property(retain, nonatomic) UIColor *normalItemTitleColor; // @synthesize normalItemTitleColor=_normalItemTitleColor;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
@property(nonatomic) __weak UIViewController *selectedViewController;
@property(nonatomic) unsigned long long selectedIndex;
@property(nonatomic) __weak id <UITabBarControllerDelegate> delegate;
@property(readonly, nonatomic) UITabBar *tabBar;
- (id)viewControllers;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)setViewControllers:(id)arg1;
- (void)clearBadgeOnItemIndex:(long long)arg1;
- (void)setBadgeOnItemIndex:(long long)arg1 withString:(id)arg2;
- (id)createBadgeViewAtIndex:(long long)arg1 withString:(id)arg2;
- (_Bool)isPureInteger:(id)arg1;
- (void)setItemImage:(id)arg1 withHighLightedImage:(id)arg2 withTitle:(id)arg3 atIndex:(long long)arg4;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

@end

