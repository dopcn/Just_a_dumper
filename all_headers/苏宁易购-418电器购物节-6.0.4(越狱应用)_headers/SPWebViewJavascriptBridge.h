//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPWebViewJSBridgeProvider-Protocol.h"
#import "SPWebViewJavascriptBridgeBaseDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSString, SPWebViewJavascriptBridgeBase, UIWebView;

@interface SPWebViewJavascriptBridge : NSObject <SPWebViewJSBridgeProvider, UIWebViewDelegate, SPWebViewJavascriptBridgeBaseDelegate>
{
    UIWebView *_webView;
    id _webViewDelegate;
    long long _uniqueId;
    SPWebViewJavascriptBridgeBase *_base;
    unsigned long long _numRequestsLoading;
}

+ (id)bridgeForWebView:(id)arg1 webViewDelegate:(id)arg2 handler:(CDUnknownBlockType)arg3 resourceBundle:(id)arg4;
+ (id)bridgeForWebView:(id)arg1 webViewDelegate:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)bridgeForWebView:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)enableLogging;
+ (id)bridgeForSPWebView:(id)arg1 webViewDelegate:(id)arg2 handler:(CDUnknownBlockType)arg3 resourceBundle:(id)arg4;
+ (id)bridgeForSPWebView:(id)arg1 webViewDelegate:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)bridgeForSPWebView:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)getMessageHandlers;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)_platformSpecificDealloc;
- (void)_platformSpecificSetup:(id)arg1 webViewDelegate:(id)arg2 handler:(CDUnknownBlockType)arg3 resourceBundle:(id)arg4;
- (id)_evaluateJavascript:(id)arg1;
- (void)dealloc;
- (void)registerHandler:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)callHandler:(id)arg1 data:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)callHandler:(id)arg1 data:(id)arg2;
- (void)callHandler:(id)arg1;
- (void)send:(id)arg1 responseCallback:(CDUnknownBlockType)arg2;
- (void)send:(id)arg1;
- (void)enableLogging;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

