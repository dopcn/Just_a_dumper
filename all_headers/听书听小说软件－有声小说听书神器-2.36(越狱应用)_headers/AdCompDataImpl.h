//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AdCompConnectionDelegate-Protocol.h"
#import "AdCompMraidViewDelegate-Protocol.h"
#import "AdCompWebViewControllerDelegate-Protocol.h"
#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "SKStoreProductViewControllerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class AdCompAdapter, AdCompContent, AdCompMraidWebView, AdCompView, NSMutableArray, NSString, NSTimer, UIActivityIndicatorView, UIButton, UIImageView, UIView, UIViewController;

@interface AdCompDataImpl : NSObject <SKStoreProductViewControllerDelegate, AdCompMraidViewDelegate, AdCompConnectionDelegate, UIWebViewDelegate, AdCompWebViewControllerDelegate, MFMessageComposeViewControllerDelegate, WKNavigationDelegate, WKUIDelegate>
{
    AdCompContent *adContent;
    NSTimer *adRequestTimer;
    NSMutableArray *adConnections;
    _Bool adNeedDisplay;
    _Bool adDisplay;
    _Bool adClick;
    double requestTime;
    int clickNumber;
    UIView *loadingAdView;
    UIView *adInstlView;
    UIImageView *adSpreadView;
    _Bool adClicking;
    _Bool adNotRequest;
    struct CGSize adPrefSize;
    AdCompAdapter *adapter;
    UIViewController *modalController;
    NSTimer *animTimer;
    UIButton *closeButton;
    float moveCenterHeight;
    AdCompView *rAdView;
    double inActiviteTime;
    _Bool statusBarHiden;
    _Bool isWebView;
    _Bool loadingFirstDisplay;
    _Bool reuseRequest;
    _Bool canCloseSpread;
    _Bool _hitTested;
    _Bool _didClosedSpread;
    _Bool _didResignActive;
    int advertType;
    float scaleSize;
    UIViewController *presentController;
    UIActivityIndicatorView *activity;
    NSTimer *delayTimer;
    CDUnknownBlockType rdBlock;
    CDUnknownBlockType spBlock;
    CDUnknownBlockType cBlock;
    CDUnknownBlockType flBlock;
    AdCompMraidWebView *_adCompWebView;
    double _spreadShowTime;
}

@property(nonatomic) double spreadShowTime; // @synthesize spreadShowTime=_spreadShowTime;
@property(retain, nonatomic) AdCompMraidWebView *adCompWebView; // @synthesize adCompWebView=_adCompWebView;
@property(nonatomic) _Bool didResignActive; // @synthesize didResignActive=_didResignActive;
@property(nonatomic) _Bool didClosedSpread; // @synthesize didClosedSpread=_didClosedSpread;
@property _Bool hitTested; // @synthesize hitTested=_hitTested;
@property(copy, nonatomic) CDUnknownBlockType flBlock; // @synthesize flBlock;
@property(copy, nonatomic) CDUnknownBlockType cBlock; // @synthesize cBlock;
@property(copy, nonatomic) CDUnknownBlockType spBlock; // @synthesize spBlock;
@property(copy, nonatomic) CDUnknownBlockType rdBlock; // @synthesize rdBlock;
@property(nonatomic) _Bool statusBarHiden; // @synthesize statusBarHiden;
@property __weak AdCompView *rAdView; // @synthesize rAdView;
@property(retain, nonatomic) NSTimer *delayTimer; // @synthesize delayTimer;
@property(nonatomic) _Bool canCloseSpread; // @synthesize canCloseSpread;
@property(nonatomic) float scaleSize; // @synthesize scaleSize;
@property(nonatomic) float moveCenterHeight; // @synthesize moveCenterHeight;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton;
@property _Bool reuseRequest; // @synthesize reuseRequest;
@property(nonatomic) int advertType; // @synthesize advertType;
@property(retain, nonatomic) UIActivityIndicatorView *activity; // @synthesize activity;
@property(retain) NSTimer *animTimer; // @synthesize animTimer;
@property _Bool loadingFirstDisplay; // @synthesize loadingFirstDisplay;
@property(retain, nonatomic) UIImageView *adSpreadView; // @synthesize adSpreadView;
@property(retain) UIView *adInstlView; // @synthesize adInstlView;
@property(retain) UIView *loadingAdView; // @synthesize loadingAdView;
@property(retain, nonatomic) AdCompAdapter *adapter; // @synthesize adapter;
@property(retain, nonatomic) UIViewController *presentController; // @synthesize presentController;
@property(retain, nonatomic) UIViewController *modalController; // @synthesize modalController;
@property(nonatomic) struct CGSize adPrefSize; // @synthesize adPrefSize;
@property(retain) NSMutableArray *adConnections; // @synthesize adConnections;
@property(retain, nonatomic) AdCompContent *adContent; // @synthesize adContent;
@property(retain, nonatomic) NSTimer *adRequestTimer; // @synthesize adRequestTimer;
- (void).cxx_destruct;
- (void)nativeAdClose:(CDUnknownBlockType)arg1;
- (void)nativeAdShowPresent:(CDUnknownBlockType)arg1;
- (void)failToLoadNativeData:(CDUnknownBlockType)arg1;
- (void)didReceivedNativeData:(CDUnknownBlockType)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)delayToDoSomethingWith:(id)arg1;
- (void)addAdviewWithView:(id)arg1;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (_Bool)mraidViewShouldResize:(id)arg1 toPosition:(struct CGRect)arg2 allowOffscreen:(_Bool)arg3;
- (void)mraidViewNavigate:(id)arg1 withURL:(id)arg2;
- (void)mraidViewDidClose:(id)arg1;
- (void)mraidViewWillExpand:(id)arg1;
- (void)mraidViewAdFailed:(id)arg1;
- (void)mraidViewAdReady:(id)arg1;
- (void)mraidServiceStorePictureWithUrlString:(id)arg1;
- (void)mraidServiceExpandWithUrlString:(id)arg1;
- (void)mraidServiceOpenBrowserWithUrlString:(id)arg1;
- (void)mraidServicePlayVideoWithUrlString:(id)arg1;
- (void)mraidServiceCreateCalendarEventWithEventJSON:(id)arg1;
- (void)parseCommandUrl:(id)arg1 adCompMraidWebView:(id)arg2;
- (void)htmlAdForClikcAction:(id)arg1;
- (void)openDeeplink:(id)arg1;
- (_Bool)isSuccessOpenAppStoreInAppWithUrlString:(id)arg1;
- (void)dismissWebViewModal:(id)arg1;
- (void)performClickAction;
- (void)openLink:(id)arg1;
- (void)moveWebView:(id)arg1;
- (void)openWebBody:(id)arg1;
- (void)openLink:(id)arg1 ActionType:(int)arg2;
- (void)sendInAppSMS:(id)arg1 Body:(id)arg2;
- (void)adInstlSendClickOrDisplayMessage:(_Bool)arg1;
- (void)reportDisplayOrClickInfoToOther:(_Bool)arg1;
- (void)extendUrlSendWithClickOrDisplayMessage:(_Bool)arg1;
- (void)sendExtendUrlWithUrlArray:(id)arg1;
- (void)sendMessageToOtherPlats;
- (void)notifyDismissScreen;
- (void)notifyPresentScreen;
- (void)setClickPositionDicForClickAdInstlAction;
- (void)setClickPositionDicWithTouchPoint:(struct CGPoint)arg1 isBegan:(_Bool)arg2;
- (void)adConnectionDidFinishLoading:(id)arg1;
- (void)adConnectionDealloc:(id)arg1;
- (void)adConnection:(id)arg1 didFailWithError:(id)arg2;
- (void)adConnection:(id)arg1 didReceiveClickResponse:(id)arg2;
- (void)adConnection:(id)arg1 didReceiveDisplayResponse:(id)arg2;
- (void)adConnection:(id)arg1 didReceiveAdContent:(id)arg2;
- (void)adConnection:(id)arg1 didReceiveGetResponse:(id)arg2;
- (_Bool)isNeedCache;
- (void)requestClick;
- (void)requestDisplay;
- (void)makeRequestConnetion:(id)arg1;
- (void)requestGet:(int)arg1;
- (void)requestGet;
- (void)removeAdConnection:(id)arg1;
- (void)cancelAdConnections;
- (_Bool)isOutOfSurvivalCycle:(int)arg1 with:(int)arg2;
- (void)storeFinishLoadTime:(int)arg1 with:(int)arg2;
- (void)registerObserver;
- (void)setupAutoAdRequest;
- (void)setupAdRequestTimer:(long long)arg1;
- (void)becomeActive:(id)arg1;
- (void)resignActive:(id)arg1;
- (void)resumeRequestAd;
- (void)pauseRequestAd;
- (void)adCompBannerNotificationSuccess:(id)arg1;
- (void)transitIntoAdWKView:(id)arg1;
- (void)transitIntoAdView:(id)arg1;
- (void)adjustInstlView:(id)arg1;
- (void)loadSpreadView:(id)arg1;
- (void)displayAd:(_Bool)arg1 reuse:(_Bool)arg2;
- (void)cancelDelayTimer;
- (void)cancelAnimTimer;
- (void)mixAnimDisplay;
- (void)animDisplay;
- (void)closeAdInstlView:(id)arg1;
- (void)createCloseButton:(id)arg1;
- (void)closeAdInstl;
- (void)adInstlOrientationChanged;
- (_Bool)adinstlIsOutOfSurvivalCycle;
- (void)performDissmissSpread;
- (void)addSpreadBackgroundAndLogo;
- (void)delayShowSpread;
- (void)updateCountdownLabelText;
- (void)addCountdownLabel;
- (void)resetProtocolCount;
- (void)dealloc;
- (id)initWithAdPlatType:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

