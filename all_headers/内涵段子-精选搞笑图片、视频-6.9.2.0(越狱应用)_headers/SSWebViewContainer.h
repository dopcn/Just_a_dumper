//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewBase.h"

#import "UIWebViewDelegate-Protocol.h"

@class NSString, SSJSBridgeWebView;
@protocol SSWebViewContainerDelegate;

@interface SSWebViewContainer : SSViewBase <UIWebViewDelegate>
{
    CDUnknownBlockType _jsLogInstance;
    SSJSBridgeWebView *_ssWebView;
    id <SSWebViewContainerDelegate> _delegate;
}

+ (id)jsACTLOGURL:(id)arg1 actLogUrl:(id)arg2;
@property(nonatomic) __weak id <SSWebViewContainerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SSJSBridgeWebView *ssWebView; // @synthesize ssWebView=_ssWebView;
@property(copy, nonatomic) CDUnknownBlockType jsLogInstance; // @synthesize jsLogInstance=_jsLogInstance;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

