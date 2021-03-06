//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MVWebViewProgressDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class MVWebViewProgress, MVWebViewProgressView, NSString, NSURL, UIButton, UILabel, UIWebView;

@interface MVWebViewController : UIViewController <UIWebViewDelegate, MVWebViewProgressDelegate>
{
    _Bool statusBar;
    _Bool _showModally;
    NSString *_titleString;
    UILabel *_navTitle;
    UIWebView *_webView;
    MVWebViewProgress *_webProgress;
    MVWebViewProgressView *_webProgressView;
    NSURL *_currentUrl;
    UIButton *_webBackButton;
    UIButton *_webForwardButton;
}

+ (id)pushWebViewFromNavController:(id)arg1 withURL:(id)arg2 title:(id)arg3;
+ (id)presentWebViewFromViewController:(id)arg1 withURL:(id)arg2 title:(id)arg3;
@property(nonatomic) _Bool showModally; // @synthesize showModally=_showModally;
@property(retain, nonatomic) UIButton *webForwardButton; // @synthesize webForwardButton=_webForwardButton;
@property(retain, nonatomic) UIButton *webBackButton; // @synthesize webBackButton=_webBackButton;
@property(retain, nonatomic) NSURL *currentUrl; // @synthesize currentUrl=_currentUrl;
@property(retain, nonatomic) MVWebViewProgressView *webProgressView; // @synthesize webProgressView=_webProgressView;
@property(retain, nonatomic) MVWebViewProgress *webProgress; // @synthesize webProgress=_webProgress;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) UILabel *navTitle; // @synthesize navTitle=_navTitle;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (void).cxx_destruct;
- (void)webViewProgress:(id)arg1 updateProgress:(float)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)switchForwardButtonStatus:(_Bool)arg1;
- (void)switchBackButtonStatus:(_Bool)arg1;
- (void)webRefreshAction:(id)arg1;
- (void)webForwardAction:(id)arg1;
- (void)webBackAction:(id)arg1;
- (void)navCloseAction:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

