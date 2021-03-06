//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WKNavigationDelegate-Protocol.h"

@class NSString, UIView, WKWebView;

@interface PCSearchShowWebViewManager : NSObject <WKNavigationDelegate>
{
    UIView *_parentView;
    WKWebView *_webview;
}

@property(retain, nonatomic) WKWebView *webview; // @synthesize webview=_webview;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
- (void).cxx_destruct;
- (void)dealloc;
- (id)curTopViewController;
- (_Bool)webViewShouldRequest:(id)arg1;
- (void)removeWebview;
- (void)webviewLoadFinished;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)clearViews;
- (_Bool)isSearchViewController;
- (void)loadWebviewWithUrl:(id)arg1 withParentView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

