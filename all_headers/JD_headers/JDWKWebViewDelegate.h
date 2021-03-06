//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WKScriptMessageHandler-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class JDWebView, NSString;

@interface JDWKWebViewDelegate : NSObject <WKUIDelegate, WKScriptMessageHandler>
{
    id _viewController;
    JDWebView *_webView;
}

@property(nonatomic) __weak JDWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)baseUtilsFromVC:(id)arg1;
- (id)initWithVC:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

