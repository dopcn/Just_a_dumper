//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTBaseViewController.h"

#import "METThemeApplyProtocol-Protocol.h"
#import "MRDLocationManagerDelegate-Protocol.h"
#import "PFBTabViewControllerProtocol-Protocol.h"
#import "SAKPortalable-Protocol.h"
#import "SAKWebViewControllerDelegate-Protocol.h"

@class CLLocation, METCouponPoorNetworkView, MTActivityIndicatorView, NSDate, NSString, PFBNearByTitleControl, SAKWebViewController, SAKWebViewControllerProgressProxy;

@interface PFBNearByWebViewController : MTBaseViewController <SAKWebViewControllerDelegate, MRDLocationManagerDelegate, SAKPortalable, PFBTabViewControllerProtocol, METThemeApplyProtocol>
{
    _Bool _isOnScreen;
    _Bool _isStatusBarWhite;
    NSDate *_lastUpdateDate;
    CLLocation *_lastUpdateLocation;
    SAKWebViewControllerProgressProxy *_progressProxy;
    PFBNearByTitleControl *_fakeNavigationBar;
    METCouponPoorNetworkView *_netWorkView;
    MTActivityIndicatorView *_activityIndicatorView;
    SAKWebViewController *_webViewController;
}

@property(nonatomic) _Bool isStatusBarWhite; // @synthesize isStatusBarWhite=_isStatusBarWhite;
@property(retain, nonatomic) SAKWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) MTActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) METCouponPoorNetworkView *netWorkView; // @synthesize netWorkView=_netWorkView;
@property(retain, nonatomic) PFBNearByTitleControl *fakeNavigationBar; // @synthesize fakeNavigationBar=_fakeNavigationBar;
@property(retain, nonatomic) SAKWebViewControllerProgressProxy *progressProxy; // @synthesize progressProxy=_progressProxy;
@property(retain, nonatomic) CLLocation *lastUpdateLocation; // @synthesize lastUpdateLocation=_lastUpdateLocation;
@property(retain, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(nonatomic) _Bool isOnScreen; // @synthesize isOnScreen=_isOnScreen;
- (void).cxx_destruct;
- (void)updateStatusBar;
- (void)applyThemeForNavigationBarBackground;
- (void)applyTheme;
- (void)scrollToTop;
- (void)dealloc;
- (void)handleLocationManagerCallback;
- (void)mrdlocationManager:(id)arg1 didFailForLocationWithError:(id)arg2;
- (void)mrdlocationManager:(id)arg1 didUpdateToLocation:(id)arg2 formLocation:(id)arg3;
- (void)webViewControllerDidFinishLoad:(id)arg1;
- (_Bool)webViewController:(id)arg1 shouldLoadRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewController:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewControllerDidStartLoad:(id)arg1;
- (_Bool)beyondUpdateLimitDistance;
- (_Bool)beyondUpdateLimitTime;
- (void)updateLocationIfNeeded;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadWebView;
- (void)loadNavigationBar;
- (void)reloadWebView;
- (void)viewDidLoad;
- (void)loadView;
- (id)pageDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

