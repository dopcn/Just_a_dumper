//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JMBaseViewController.h"

#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIWebView;

@interface JMServerMaintainViewController : JMBaseViewController <UIWebViewDelegate>
{
    NSString *_maintainUrl;
    UIWebView *_maintainWebView;
}

@property(retain, nonatomic) UIWebView *maintainWebView; // @synthesize maintainWebView=_maintainWebView;
@property(retain, nonatomic) NSString *maintainUrl; // @synthesize maintainUrl=_maintainUrl;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

