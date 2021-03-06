//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SNBThemeProtocol-Protocol.h"

@class NSString;

@interface UIViewController (Additions) <SNBThemeProtocol>
+ (id)snb_navigationControllerOfTabbarWithClassName:(id)arg1;
+ (long long)snb_indexOfTabbarViewControllerWithClassName:(id)arg1;
- (void)snb_disableScrollViewAutoAdjustsInsets;
- (id)snb_presentableViewController;
- (id)snb_topViewController;
- (_Bool)isVisible;
- (void)hideNoDataView;
- (void)displayWithNoDataView:(id)arg1;
@property(nonatomic) __weak UIViewController *originViewController;
- (void)setNoDataView:(id)arg1;
- (id)noDataView;
- (_Bool)snb_isCurrentAccountAnonymousAndPresentLoginView:(CDUnknownBlockType)arg1;
- (_Bool)snb_isCurrentAccountAnonymousAndPresentLoginView;
- (void)snb_showUserInfoCompleteView;
- (void)_snb_showBindTelephoneAlert;
- (_Bool)snb_isCurrentAccountLimitedAndPresentAppropriateViewForTrade;
- (_Bool)snb_isCurrentAccountLimitedAndPresentAppropriateView;
@property(nonatomic) _Bool snb_shouldTreatAsPresented;
- (void)_snb_goToRootViewController;
- (void)snb_goToRootViewControllerWithTabIndex:(int)arg1;
- (id)snb_topVisibleViewController;
- (void)snb_fadePresentVC:(id)arg1;
- (void)snb_popToOriginViewControllerAnimated:(_Bool)arg1;
- (void)snb_dismissAllViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

