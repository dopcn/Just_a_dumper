//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIButton, UIView, UIWebView;
@protocol WebViewControllerDelegate;

@interface WebViewController : UIViewController <UIWebViewDelegate>
{
    UIWebView *mWebView;
    UIButton *btnClose;
    UIView *viewTopBar;
    NSString *mWebUrl;
    id <WebViewControllerDelegate> delegate;
    unsigned long long _mType;
}

@property(nonatomic) unsigned long long mType; // @synthesize mType=_mType;
@property(nonatomic) id <WebViewControllerDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSString *mWebUrl; // @synthesize mWebUrl;
- (id)addVersionInfo:(id)arg1;
- (void)UserLoginSuccess;
- (void)jumpToLogin;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)updateWebViewData:(id)arg1;
- (void)btnClose:(id)arg1;
- (void)doSharingAction:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

