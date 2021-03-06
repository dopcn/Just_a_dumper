//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HNaviBarVC.h"

#import "JumpHandleResponsePrt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSNumber, NSString, UIWebView;

@interface HNightWebVC : HNaviBarVC <UIWebViewDelegate, UIGestureRecognizerDelegate, UIAlertViewDelegate, JumpHandleResponsePrt>
{
    UIWebView *_webViewWeb;
    NSString *_webURL;
    NSNumber *_titleCanClick;
    NSString *_webTitle;
}

@property(retain, nonatomic) NSString *webTitle; // @synthesize webTitle=_webTitle;
@property(retain, nonatomic) NSNumber *titleCanClick; // @synthesize titleCanClick=_titleCanClick;
@property(retain, nonatomic) NSString *webURL; // @synthesize webURL=_webURL;
@property(retain, nonatomic) UIWebView *webViewWeb; // @synthesize webViewWeb=_webViewWeb;
- (void).cxx_destruct;
- (void)jumpHandleResponseData:(id)arg1 withOpenURL:(id)arg2 urlData:(id)arg3 userInfo:(id)arg4;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)setupNaviBarSubs:(id)arg1;
- (void)setupViewRootSubs:(id)arg1;
- (void)loadURL;
- (void)didTitleClicked:(id)arg1;
- (void)doClose:(id)arg1;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)getTitleCanClick;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

