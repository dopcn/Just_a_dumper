//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CDSegmentedViewController.h"

@class CDSportHomeActivityView, UIImageView;

@interface CDSportHomeSegmentedViewController : CDSegmentedViewController
{
    CDSportHomeActivityView *_activityView;
    UIImageView *_backgroundView;
}

@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) CDSportHomeActivityView *activityView; // @synthesize activityView=_activityView;
- (void).cxx_destruct;
- (id)pageCode;
- (_Bool)cd_prefersNavigationBarHidden;
- (long long)cd_prefersNavigationBarStyle;
- (_Bool)cd_prefersInteractivePopGestureRecognizerEnabled;
- (void)didSelectViewController:(id)arg1 atIndex:(long long)arg2;
- (long long)preferredStatusBarStyle;
- (double)preferredIndicatorMarginBottom;
- (id)preferredIndicatorColor;
- (id)preferredSegmentedTitleColor;
- (id)preferredSegmentedTitleHighlightedColor;
- (id)preferredSegmentedBackgroundColor;
- (struct UIEdgeInsets)preferredEdgeInsets;
- (unsigned long long)preferredSelectedIndex;
- (id)preferredTitles;
- (id)preferredViewControllers;
- (unsigned long long)preferredSegmentStyle;
- (void)reloadBackgroundImageAnimated:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

