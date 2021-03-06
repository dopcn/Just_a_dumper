//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UINavigationController, UIViewController;

@protocol SNContextProtocol <NSObject>

@optional
- (void)goToHome;
- (void)switchToTabIndex:(unsigned long long)arg1 targetCtrler:(UIViewController *)arg2 animated:(_Bool)arg3;
- (void)presentViewController:(UINavigationController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)pushViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
- (void)clearPresentedViewControllerWithCommplete:(void (^)(void))arg1;
- (void)clearViewCtrlersWithCommplete:(void (^)(void))arg1;
- (void)clearViewCtrlers;
- (UINavigationController *)topNavigation;
- (UINavigationController *)selected;
- (UINavigationController *)navigationWithIndex:(unsigned long long)arg1;
- (void)switchToTapIndex:(unsigned long long)arg1;
@end

