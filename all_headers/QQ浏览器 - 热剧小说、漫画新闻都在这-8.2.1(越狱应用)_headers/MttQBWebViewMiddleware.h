//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MttUIWebViewDelegate-Protocol.h"
#import "MttWKWebViewDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class MttQBWebView, NSString;
@protocol UIWebViewDelegate, WKNavigationDelegate;

@interface MttQBWebViewMiddleware : NSObject <MttUIWebViewDelegate, WKUIDelegate, MttWKWebViewDelegate>
{
    MttQBWebView *_qbWebView;
    unsigned long long _numRequestsLoading;
    id <UIWebViewDelegate> _delegate;
    id <WKNavigationDelegate> _navigationDelegate;
}

+ (id)middlewareForWebView:(id)arg1 webViewDelegate:(id)arg2 navigationDelegate:(id)arg3 UIDelegate:(id)arg4;
@property(nonatomic) __weak id <WKNavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) __weak id <UIWebViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (_Bool)shouldStartAuthenticationChallenge;
- (void)longPressForWebView:(id)arg1 withHTMLElement:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)loadFailedWithError:(id)arg1 forWebView:(id)arg2;
- (void)webViewStartNetworkLoadForMainFrame:(id)arg1;
- (void)webViewStartLoadForMainFrame:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)setup:(id)arg1 webViewDelegate:(id)arg2 navigationDelegate:(id)arg3 UIDelegate:(id)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

