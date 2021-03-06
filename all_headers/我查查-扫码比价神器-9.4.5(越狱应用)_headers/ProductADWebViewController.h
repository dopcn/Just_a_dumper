//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIWebViewDelegate-Protocol.h"
#import "WCCIAControlDelegate-Protocol.h"

@class NSString, NSTimer, UIButton, UIWebView, WCCIAControl;

@interface ProductADWebViewController : UIViewController <WCCIAControlDelegate, UIWebViewDelegate>
{
    NSTimer *_timerBack;
    _Bool _bShow;
    long long _iTimer;
    NSString *_strUrl;
    UIViewController *_parentVC;
    CDUnknownBlockType _showADBlock;
    CDUnknownBlockType _backBlock;
    UIButton *_btnBack;
    UIWebView *_webView;
    WCCIAControl *_wccIAControl;
    struct CGRect _parentFrame;
}

@property(retain, nonatomic) WCCIAControl *wccIAControl; // @synthesize wccIAControl=_wccIAControl;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) UIButton *btnBack; // @synthesize btnBack=_btnBack;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock=_backBlock;
@property(copy, nonatomic) CDUnknownBlockType showADBlock; // @synthesize showADBlock=_showADBlock;
@property(nonatomic) struct CGRect parentFrame; // @synthesize parentFrame=_parentFrame;
@property(nonatomic) __weak UIViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(retain, nonatomic) NSString *strUrl; // @synthesize strUrl=_strUrl;
@property(nonatomic) long long iTimer; // @synthesize iTimer=_iTimer;
- (void).cxx_destruct;
- (void)control:(id)arg1 loginSuccessWithCallBack:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)onBack:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

