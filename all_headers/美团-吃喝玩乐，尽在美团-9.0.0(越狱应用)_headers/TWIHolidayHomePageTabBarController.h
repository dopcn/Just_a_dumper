//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTTabBarController.h"

#import "SAKPortalable-Protocol.h"

@class NSArray, NSString, SAKCity, TWIHolidayDiscoverWebViewController, TWITabBarView;

@interface TWIHolidayHomePageTabBarController : MTTabBarController <SAKPortalable>
{
    NSArray *_tabBarItems;
    TWITabBarView *_tabBarView;
    long long _discoverNotClickTimes;
    TWIHolidayDiscoverWebViewController *_discoverWebVC;
    SAKCity *_lastCity;
}

+ (void)configSubControllersFor:(id)arg1;
@property(retain, nonatomic) SAKCity *lastCity; // @synthesize lastCity=_lastCity;
@property(retain, nonatomic) TWIHolidayDiscoverWebViewController *discoverWebVC; // @synthesize discoverWebVC=_discoverWebVC;
@property(nonatomic) long long discoverNotClickTimes; // @synthesize discoverNotClickTimes=_discoverNotClickTimes;
@property(retain, nonatomic) TWITabBarView *tabBarView; // @synthesize tabBarView=_tabBarView;
@property(copy, nonatomic) NSArray *tabBarItems; // @synthesize tabBarItems=_tabBarItems;
- (void).cxx_destruct;
- (id)pageDescription;
- (void)_trackForTabBarView;
- (id)_trackEventForDiscover;
- (id)_trackEventForHome;
- (void)_hideAndUpdateDiscoverBadgeShowInfoForTabBar:(id)arg1;
- (void)_hideTabControllerNavBar;
- (void)_updateUserDefault;
- (void)_setupUI;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

