//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

@class FinderContentViewController, FinderNavView, FinderRecommendViewController, FinderSwitcher, FinderTopView, FinderWebViewViewController, JDFinderHomeHeaderResponse, JDFinderNetWork, NSDate, UIColor;

@interface FinderFrameViewController : JDViewController
{
    FinderTopView *_customTopView;
    FinderNavView *_navView;
    FinderContentViewController *_contentVC;
    FinderWebViewViewController *_externalWebViewVC;
    JDViewController *_currentShowingVC;
    FinderRecommendViewController *_homeVC;
    NSDate *_lastTime;
    JDFinderHomeHeaderResponse *_configRes;
    FinderSwitcher *_rightSwitcher;
    FinderSwitcher *_leftSwitcher;
    _Bool _isActiveMode;
    UIColor *_defaultWindowColor;
    _Bool _isDoFlipAnimation;
    long long _tabSelectedIndex;
    JDFinderNetWork *_netWork;
}

@property(readonly, nonatomic) JDFinderNetWork *netWork; // @synthesize netWork=_netWork;
- (void).cxx_destruct;
- (void)buildComponents:(id)arg1;
- (void)processConfigData:(id)arg1;
- (void)fetchConfigIfNeeded;
- (void)loadCacheData;
- (void)leftSwiped:(id)arg1;
- (void)leftTaped;
- (void)rightSwiped:(id)arg1;
- (void)rightTaped;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)flip2Native;
- (void)flip2WebView;
- (void)processedFlipWebView:(id)arg1;
- (void)changeToIndex:(id)arg1;
- (void)updateIndexReddot:(id)arg1;
- (void)requestMessageRedDotData;
- (void)tabBarSelected:(id)arg1;
- (void)reconnect;
- (void)extend:(_Bool)arg1 animated:(_Bool)arg2;
- (void)tabIndexSelected:(long long)arg1;
- (void)scanTap:(id)arg1;
- (void)unInstallSwitcher;
- (void)installRightSwitcher:(id)arg1 leftSwitcher:(id)arg2;
- (void)unInstallWebview;
- (void)installWebview:(id)arg1 rightSwitcher:(id)arg2 leftSwitcher:(id)arg3;
- (_Bool)installWebviewIfNeeded;
- (void)installTopView;
- (void)unInstallTitleView;
- (void)installTitleView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;
- (_Bool)isInFinderPage;
- (void)applicationWillEnterForeground;
- (void)appFinishSetup;
- (void)shouldShowTabBarRedDotView:(_Bool)arg1;
- (void)removeTabbarReddot;
- (void)processRedDot:(id)arg1 fetchInFinder:(_Bool)arg2;
- (void)fetchRedDot:(_Bool)arg1;
- (void)reddotDealloced;
- (void)reddotInitted;

@end

