//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIWebViewDelegate-Protocol.h"
#import "WebViewControllerDelegate-Protocol.h"
#import "YLDuibaAlertViewDelegate-Protocol.h"

@class CreditWebView, MCSignInfo, NSString, NSURLRequest, UIActivityIndicatorView, UIBarButtonItem, UIButton;
@protocol CreditWebViewControllerDelegate;

@interface CreditWebViewController : UIViewController <UIWebViewDelegate, WebViewControllerDelegate, YLDuibaAlertViewDelegate>
{
    NSString *_needRefreshUrl;
    id <CreditWebViewControllerDelegate> _delegate;
    NSURLRequest *_request;
    CreditWebView *_webView;
    NSString *_shareUrl;
    NSString *_shareTitle;
    NSString *_shareSubtitle;
    NSString *_shareThumbnail;
    UIButton *_signButton;
    MCSignInfo *_signInfo;
    UIBarButtonItem *_shareButton;
    UIBarButtonItem *_jfrwButton;
    UIActivityIndicatorView *_activity;
}

@property(retain, nonatomic) UIActivityIndicatorView *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) UIBarButtonItem *jfrwButton; // @synthesize jfrwButton=_jfrwButton;
@property(retain, nonatomic) UIBarButtonItem *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) MCSignInfo *signInfo; // @synthesize signInfo=_signInfo;
@property(retain, nonatomic) UIButton *signButton; // @synthesize signButton=_signButton;
@property(retain, nonatomic) NSString *shareThumbnail; // @synthesize shareThumbnail=_shareThumbnail;
@property(retain, nonatomic) NSString *shareSubtitle; // @synthesize shareSubtitle=_shareSubtitle;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(retain, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(retain, nonatomic) CreditWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak id <CreditWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *needRefreshUrl; // @synthesize needRefreshUrl=_needRefreshUrl;
- (void).cxx_destruct;
- (void)setupSignButton;
- (void)ylDuibaAlertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)webViewControllerDidFinish:(id)arg1;
- (void)shouldBackRootRefresh:(id)arg1;
- (void)shouldBackRoot:(id)arg1;
- (void)shouldBack:(id)arg1;
- (void)shouldBackRefresh:(id)arg1;
- (void)shouldNewOpen:(id)arg1;
- (void)resetSignButton;
- (void)checkScoreStatus;
- (void)checkSignStatus;
- (void)scoreChangeNotification:(id)arg1;
- (void)signStatusChangeNotification:(id)arg1;
- (void)signBtnTapped:(id)arg1;
- (id)getNavCon;
- (void)jfrwButtonTapped:(id)arg1;
- (void)onShareClick;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)onleftBarButtonTouchUpInside:(id)arg1;
- (void)dealloc;
- (void)refreshParentPage:(id)arg1;
- (void)setRefreshCurrentUrl:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)marginSpace;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dismiss;
- (id)initWithRequest:(id)arg1;
- (id)initWithUrlByPresent:(id)arg1;
- (id)initWithUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

