//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGAnalyticsModule-Protocol.h"
#import "IGViewControllerSlideable-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class IGNavigationController, NSString, UIView;

@interface IGDirectSheetPresenterViewController : UIViewController <IGViewControllerSlideable, UIViewControllerTransitioningDelegate, IGAnalyticsModule>
{
    IGNavigationController *_navigationController;
    UIView *_overlayView;
    UIView *_contentContainerView;
}

@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) IGNavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *analyticsModule;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)updateLayout;
- (void)viewDidLayoutSubviews;
- (void)overlayViewTapped:(id)arg1;
- (void)dismissButtonTapped:(id)arg1;
- (void)setupContentView;
- (void)setupContentContainerView;
- (void)setupOverlayView;
- (void)setupViewHierarchy;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;
- (id)initWithRootViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

