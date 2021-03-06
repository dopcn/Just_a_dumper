//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGNavigationController, IGUserSession, IGViewController, NSArray, UIViewController;

@protocol IGRootViewControllerType <NSObject>
- (IGNavigationController *)registrationController;
- (void)moveAppToLoggedOutStateWithForceAnimated:(_Bool)arg1 isSwitchingUsers:(_Bool)arg2 hasRecentlyEnabledOneTapLoginUsers:(_Bool)arg3 createMultipleAccounts:(_Bool)arg4;
- (void)moveAppToLoggedInStateWithUserSession:(IGUserSession *)arg1 mainAppSetupBlock:(UIViewController<IGAppNavigationHandler> * (^)(void))arg2 animated:(_Bool)arg3;
- (void)presentViewControllerFromTopMostController:(IGViewController *)arg1;
- (UIViewController *)topMostViewController;
- (NSArray *)viewControllerStack;
@end

