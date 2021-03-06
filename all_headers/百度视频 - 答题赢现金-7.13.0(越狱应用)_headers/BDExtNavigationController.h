//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, UIViewController;

@interface BDExtNavigationController : UINavigationController <UINavigationControllerDelegate, UIGestureRecognizerDelegate>
{
    UIViewController *_currentShowVC;
}

@property(nonatomic) __weak UIViewController *currentShowVC; // @synthesize currentShowVC=_currentShowVC;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)fakeNavigationBarWhenInteractiveTransition:(id)arg1;
- (_Bool)addFakeNavigationBarIfNeeded:(id)arg1;
- (unsigned long long)checkIfShouldAddFakeNavigationBar:(id)arg1 toVC:(id)arg2;
- (void)viewDidLoad;
- (void)customInit;
- (id)init;
- (id)initWithRootViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

