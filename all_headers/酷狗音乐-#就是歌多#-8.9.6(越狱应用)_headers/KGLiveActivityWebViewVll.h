//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIView, UIWebView;

@interface KGLiveActivityWebViewVll : NSObject <UIWebViewDelegate>
{
    _Bool _isLoadSuccess;
    _Bool _isLoading;
    UIWebView *_webview;
    NSString *_url;
    UIView *_superView;
    CDUnknownBlockType _loadSuccessBlock;
    CDUnknownBlockType _closeWebviewBlock;
}

@property _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isLoadSuccess; // @synthesize isLoadSuccess=_isLoadSuccess;
@property(copy, nonatomic) CDUnknownBlockType closeWebviewBlock; // @synthesize closeWebviewBlock=_closeWebviewBlock;
@property(copy, nonatomic) CDUnknownBlockType loadSuccessBlock; // @synthesize loadSuccessBlock=_loadSuccessBlock;
@property(retain, nonatomic) UIView *superView; // @synthesize superView=_superView;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) UIWebView *webview; // @synthesize webview=_webview;
- (void).cxx_destruct;
- (void)autoRefresh;
- (void)loadSuccess;
- (void)openWebView:(id)arg1;
- (void)closeWebview;
- (void)updateMessage:(id)arg1;
- (_Bool)shouldStartLoad:(id)arg1;
- (void)changeWebUserAgent:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

