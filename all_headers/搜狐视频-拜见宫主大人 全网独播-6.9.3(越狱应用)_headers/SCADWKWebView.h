//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WKWebView.h>

#import "SCADWebViewProtocol-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class NSString;
@protocol SCADWebViewDelegate;

@interface SCADWKWebView : WKWebView <WKNavigationDelegate, WKUIDelegate, SCADWebViewProtocol>
{
    id <SCADWebViewDelegate> _scadDelegate;
    id _adapter;
    NSString *_inner_title;
    _Bool _inner_loading;
    double _inner_estimatedProgress;
    CDUnknownBlockType _titleObserverBlock;
    CDUnknownBlockType _loadingObserverBlock;
    CDUnknownBlockType _progressObserverBlock;
}

@property(copy, nonatomic) CDUnknownBlockType progressObserverBlock; // @synthesize progressObserverBlock=_progressObserverBlock;
@property(copy, nonatomic) CDUnknownBlockType loadingObserverBlock; // @synthesize loadingObserverBlock=_loadingObserverBlock;
@property(copy, nonatomic) CDUnknownBlockType titleObserverBlock; // @synthesize titleObserverBlock=_titleObserverBlock;
@property(nonatomic) double inner_estimatedProgress; // @synthesize inner_estimatedProgress=_inner_estimatedProgress;
@property(nonatomic) _Bool inner_loading; // @synthesize inner_loading=_inner_loading;
@property(copy, nonatomic) NSString *inner_title; // @synthesize inner_title=_inner_title;
@property(nonatomic) __weak id adapter; // @synthesize adapter=_adapter;
@property(nonatomic) __weak id <SCADWebViewDelegate> scadDelegate; // @synthesize scadDelegate=_scadDelegate;
- (void).cxx_destruct;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (_Bool)callDelegateForWebViewShouldStartLoadWithRequest:(id)arg1 navigationType:(long long)arg2;
- (void)callDelegateForWebViewDidFailLoadWithError:(id)arg1;
- (void)callDelegateForWebDidStartLoad;
- (void)callDelegateForWebViewDidFinishLoad;
- (id)fileURLForBuggyWKWebView8:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addInner_estimatedProgressObserver:(CDUnknownBlockType)arg1;
- (void)addInner_loadingObserver:(CDUnknownBlockType)arg1;
- (void)addInner_titleObserver:(CDUnknownBlockType)arg1;
- (id)scrollView;
- (id)URL;
- (void)goForward;
- (_Bool)canGoForward;
- (void)goBack;
- (_Bool)canGoBack;
- (void)stopLoading;
- (void)reload;
- (void)loadHTMLFileURL:(id)arg1 baseURL:(id)arg2;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)injectJSString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

