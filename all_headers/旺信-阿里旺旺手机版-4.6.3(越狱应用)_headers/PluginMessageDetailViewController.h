//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIWebViewDelegate-Protocol.h"
#import "WXOAttributedLabelDelegate-Protocol.h"

@class NSNumber, NSString, UIScrollView, UIWebView, WXOAttributedLabel;

__attribute__((visibility("hidden")))
@interface PluginMessageDetailViewController : UIViewController <UIWebViewDelegate, WXOAttributedLabelDelegate>
{
    NSString *itemId;
    NSNumber *pluginId;
    UIWebView *webView;
    UIScrollView *scrollView;
    WXOAttributedLabel *__textLabel;
    UIWebView *_phoneWebView;
}

@property(retain, nonatomic) UIWebView *phoneWebView; // @synthesize phoneWebView=_phoneWebView;
@property(retain, nonatomic) WXOAttributedLabel *textlabel; // @synthesize textlabel=__textLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView;
@property(retain, nonatomic) NSNumber *pluginId; // @synthesize pluginId;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didFollowLink:(id)arg2;
- (_Bool)attributedLabel:(id)arg1 shouldFollowLink:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)_uninitVariables;
- (void)dealloc;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)pressBack:(id)arg1;
- (id)initWithQuery:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

