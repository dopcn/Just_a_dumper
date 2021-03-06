//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SKStoreProductViewControllerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class BaiduMobAdLpTintStyle, BaiduMobAdNewProgressView, BaiduMobAdProgressBar, NSDictionary, NSMutableDictionary, NSString, NSTimer, NSURL, UIBarButtonItem, UIView;
@protocol BaiduMobAdWebLPControllerDelegate, BaiduMobAdWebViewProvider;

@interface BaiduMobAdWebLPController : UIViewController <UIWebViewDelegate, UIGestureRecognizerDelegate, SKStoreProductViewControllerDelegate, WKNavigationDelegate, WKUIDelegate, UIActionSheetDelegate>
{
    int _clicktime;
    int _movetime;
    int _urlclicktime;
    double _lpStartTime;
    double _lploadTime;
    double _duration;
    double _lpWebStartLoad;
    double _lpWebFinishLoad;
    _Bool _firstStartLoad;
    _Bool _firstLoaded;
    _Bool _htmlLoading;
    int checkCount;
    int totalCheckCount;
    UIView<BaiduMobAdWebViewProvider> *_lpWebView;
    NSURL *Url;
    id <BaiduMobAdWebLPControllerDelegate> delegate;
    NSDictionary *_lpActionOption;
    NSTimer *_checkTimer;
    NSString *_bodyinnerHTML;
    NSString *_currentUrl;
    NSMutableDictionary *_buttonClickCountDic;
    BaiduMobAdLpTintStyle *_style;
    BaiduMobAdProgressBar *_progressBar;
    BaiduMobAdNewProgressView *_indicator;
    long long _bCancelCount;
    long long _bRefreshCount;
    long long _bCopyCount;
    long long _bGobackCount;
    long long _bMoreCount;
    long long _bHomeCount;
    UIBarButtonItem *_itemClose;
    UIBarButtonItem *_itemBack;
    UIBarButtonItem *_leftSpacer;
    UIBarButtonItem *_rightSpacer;
    long long _backCount;
}

@property(nonatomic) long long backCount; // @synthesize backCount=_backCount;
@property(retain, nonatomic) UIBarButtonItem *rightSpacer; // @synthesize rightSpacer=_rightSpacer;
@property(retain, nonatomic) UIBarButtonItem *leftSpacer; // @synthesize leftSpacer=_leftSpacer;
@property(retain, nonatomic) UIBarButtonItem *itemBack; // @synthesize itemBack=_itemBack;
@property(retain, nonatomic) UIBarButtonItem *itemClose; // @synthesize itemClose=_itemClose;
@property(nonatomic) long long bHomeCount; // @synthesize bHomeCount=_bHomeCount;
@property(nonatomic) long long bMoreCount; // @synthesize bMoreCount=_bMoreCount;
@property(nonatomic) long long bGobackCount; // @synthesize bGobackCount=_bGobackCount;
@property(nonatomic) long long bCopyCount; // @synthesize bCopyCount=_bCopyCount;
@property(nonatomic) long long bRefreshCount; // @synthesize bRefreshCount=_bRefreshCount;
@property(nonatomic) long long bCancelCount; // @synthesize bCancelCount=_bCancelCount;
@property(retain, nonatomic) BaiduMobAdNewProgressView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) BaiduMobAdProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) BaiduMobAdLpTintStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) NSMutableDictionary *buttonClickCountDic; // @synthesize buttonClickCountDic=_buttonClickCountDic;
@property(retain, nonatomic) NSString *currentUrl; // @synthesize currentUrl=_currentUrl;
@property(copy, nonatomic) NSString *bodyinnerHTML; // @synthesize bodyinnerHTML=_bodyinnerHTML;
@property(retain, nonatomic) NSTimer *checkTimer; // @synthesize checkTimer=_checkTimer;
@property(retain, nonatomic) NSDictionary *lpActionOption; // @synthesize lpActionOption=_lpActionOption;
@property(nonatomic) id <BaiduMobAdWebLPControllerDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSURL *Url; // @synthesize Url;
@property(retain, nonatomic) UIView<BaiduMobAdWebViewProvider> *lpWebView; // @synthesize lpWebView=_lpWebView;
- (_Bool)shouldAutorotate;
- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)handleSwipe:(id)arg1;
- (void)layoutSubview:(struct CGSize)arg1 withOrientaion:(long long)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)finishLoadOrNavigation;
- (void)didStartNavigation;
- (void)shouldStartDecidePolicy:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)sendLPMonitorLogURL:(id)arg1 logType:(id)arg2 dictionary:(id)arg3;
- (void)checkLoad;
- (void)ifProgressDismissed:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)willPresentActionSheet:(id)arg1;
- (void)show;
- (_Bool)needsClose;
- (_Bool)needsBack;
- (void)back;
- (void)close;
- (void)setLeftBarButtonNeedsClose:(_Bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)applicationBackground;
- (void)viewDidLoad;
- (void)lpFunctionButtonClickWithTag:(long long)arg1;
- (void)setProgressBarProgress:(double)arg1;
- (void)setIndicatorProgress:(double)arg1;
- (void)setProgressState:(double)arg1;
- (void)layoutProgressView:(struct CGSize)arg1 withOrientaion:(long long)arg2;
- (void)clickClose:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

