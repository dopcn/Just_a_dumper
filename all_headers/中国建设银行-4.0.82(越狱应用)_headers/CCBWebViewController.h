//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBViewController.h"

#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIButton, UINavigationController, UIWebView;

@interface CCBWebViewController : CCBViewController <UIWebViewDelegate>
{
    UIWebView *_webView;
    _Bool _isShowCloseBtn;
    UIButton *_closeBtn;
    UINavigationController *_tempNav;
    CDUnknownBlockType _onCloseBtnCallback;
}

+ (void)showWebViewByPresentWithUrl:(id)arg1 nav:(id)arg2;
+ (void)showWebViewWithUrl:(id)arg1;
+ (void)showWebViewWithTitle:(id)arg1 localUrl:(id)arg2;
+ (void)showWebViewWithTitle:(id)arg1 withUrl:(id)arg2 webIsFull:(_Bool)arg3;
@property(copy, nonatomic) CDUnknownBlockType onCloseBtnCallback; // @synthesize onCloseBtnCallback=_onCloseBtnCallback;
@property(retain, nonatomic) UINavigationController *tempNav; // @synthesize tempNav=_tempNav;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) _Bool isShowCloseBtn; // @synthesize isShowCloseBtn=_isShowCloseBtn;
- (void).cxx_destruct;
- (void)close;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)loadWebViewWithSourcePath:(id)arg1;
- (void)showWebViewWithURL:(id)arg1;
- (void)showWebViewWithURL:(id)arg1 closeBtnCallBack:(CDUnknownBlockType)arg2;
- (void)showWebViewByPresentWithURL:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

