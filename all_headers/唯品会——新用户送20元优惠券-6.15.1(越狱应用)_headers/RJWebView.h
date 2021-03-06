//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "RJWebViewDelegate-Protocol.h"

@class NSString, NSURL, UIScrollView;
@protocol RJWebViewDelegate, __RJInternalWebViewProtocol;

@interface RJWebView : UIView <RJWebViewDelegate>
{
    _Bool loading;
    _Bool canGoBack;
    _Bool canGoForward;
    NSURL *URL;
    NSString *title;
    double estimatedProgress;
    id <RJWebViewDelegate> _delegate;
    UIView<__RJInternalWebViewProtocol> *_innerWebView;
}

@property(retain, nonatomic) UIView<__RJInternalWebViewProtocol> *innerWebView; // @synthesize innerWebView=_innerWebView;
@property(nonatomic) __weak id <RJWebViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=canGoForward) _Bool canGoForward; // @synthesize canGoForward;
@property(readonly, nonatomic, getter=canGoBack) _Bool canGoBack; // @synthesize canGoBack;
@property(readonly, nonatomic, getter=isLoading) _Bool loading; // @synthesize loading;
@property(readonly, nonatomic) double estimatedProgress; // @synthesize estimatedProgress;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1;
- (void)goForward;
- (void)goBack;
- (void)reload;
- (void)stopLoading;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void)setApplicationNameForUserAgent:(id)arg1;
- (void)setCustomUserAgent:(id)arg1;
- (id)currentUserAgent;
@property(nonatomic) _Bool scalesPageToFit;
@property(nonatomic) _Bool mediaPlaybackRequiresUserAction;
@property(nonatomic) _Bool allowsInlineMediaPlayback;
@property(nonatomic) _Bool allowsBackForwardNavigationGestures;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)setup;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

