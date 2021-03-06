//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSMutableArray, UIGestureRecognizer;
@protocol UINavigationControllerDelegate;

@interface BBAStackController : UIViewController
{
    NSMutableArray *_viewControllers;
    id <UINavigationControllerDelegate> _delegate;
    UIGestureRecognizer *_interactivePopGestureRecognizer;
}

@property(readonly, nonatomic) UIGestureRecognizer *interactivePopGestureRecognizer; // @synthesize interactivePopGestureRecognizer=_interactivePopGestureRecognizer;
@property(nonatomic) __weak id <UINavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void).cxx_destruct;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidLoad;
- (id)popViewController:(Class)arg1 Animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)initWithRootViewController:(id)arg1;

@end

