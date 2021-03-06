//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MLNavigationController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, UIButton, UIImage;

@interface MTNavigationController : MLNavigationController <UIGestureRecognizerDelegate, UINavigationControllerDelegate>
{
    _Bool _isNavigationBarWider;
    int _topViewTop;
    double _navigationBarHeight;
    UIImage *_navigationBarImage;
    UIButton *_backButton;
    NSString *_backToApplicationString;
}

@property(copy, nonatomic) NSString *backToApplicationString; // @synthesize backToApplicationString=_backToApplicationString;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(readonly, nonatomic) UIImage *navigationBarImage; // @synthesize navigationBarImage=_navigationBarImage;
@property(nonatomic) _Bool isNavigationBarWider; // @synthesize isNavigationBarWider=_isNavigationBarWider;
@property(nonatomic) int topViewTop; // @synthesize topViewTop=_topViewTop;
@property(nonatomic) double navigationBarHeight; // @synthesize navigationBarHeight=_navigationBarHeight;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_popBackWithAnimation;
- (id)_backBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setNavigationBarImage:(id)arg1;
- (id)backItemWithTarget:(id)arg1 action:(SEL)arg2;
- (void)mt_commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)met_customBarPopViewControllerAnimated:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

