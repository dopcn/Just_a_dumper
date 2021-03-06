//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, SDCAlertViewCoordinator, UIView;

@interface SDCAlertViewController : UIViewController
{
    _Bool _showsDimmingView;
    _Bool _presentingFirstAlert;
    _Bool _dismissingLastAlert;
    UIView *dimmingView_;
    SDCAlertViewCoordinator *_coordinator;
    UIView *_alertContainerView;
    NSLayoutConstraint *_bottomSpacingConstraint;
}

@property(nonatomic, getter=isDismissingLastAlert) _Bool dismissingLastAlert; // @synthesize dismissingLastAlert=_dismissingLastAlert;
@property(nonatomic, getter=isPresentingFirstAlert) _Bool presentingFirstAlert; // @synthesize presentingFirstAlert=_presentingFirstAlert;
@property(retain, nonatomic) NSLayoutConstraint *bottomSpacingConstraint; // @synthesize bottomSpacingConstraint=_bottomSpacingConstraint;
@property(nonatomic) _Bool showsDimmingView; // @synthesize showsDimmingView=_showsDimmingView;
@property(retain, nonatomic) UIView *alertContainerView; // @synthesize alertContainerView=_alertContainerView;
@property(nonatomic) __weak SDCAlertViewCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=dimmingView_;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applyDismissingAnimationsToAlert:(id)arg1;
- (void)applyPresentingAnimationsToAlert:(id)arg1;
- (id)transformAnimationFrom:(struct CATransform3D)arg1 to:(struct CATransform3D)arg2;
- (id)transformAnimationForDismissing;
- (id)transformAnimationForPresenting;
- (id)opacityAnimationFrom:(id)arg1 to:(id)arg2;
- (id)opacityAnimationForDismissing;
- (id)opacityAnimationForPresenting;
- (id)springAnimationForKey:(id)arg1;
- (void)hideDimmingView;
- (void)showDimmingView;
- (void)updateDimmingViewVisibility:(_Bool)arg1;
- (void)showAlert:(id)arg1;
- (void)replaceAlert:(id)arg1 withAlert:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)animateAlertContainerForKeyboardChangeWithDuration:(double)arg1;
- (void)createAlertContainer;
- (void)createDimmingView;
- (void)createViewHierarchy;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (id)init;

@end

