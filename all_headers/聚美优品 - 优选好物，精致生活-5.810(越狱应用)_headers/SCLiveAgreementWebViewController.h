//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, NSURL, UIWebView;

@interface SCLiveAgreementWebViewController : UIViewController <UIWebViewDelegate>
{
    UIWebView *_contentWebView;
    NSURL *_webURL;
    CDUnknownBlockType _agreeBlock;
    CDUnknownBlockType _closeBlock;
    NSLayoutConstraint *_contentWebBC;
    NSLayoutConstraint *_contentWebTC;
}

+ (id)instance;
+ (_Bool)needShowAgreement;
@property(nonatomic) __weak NSLayoutConstraint *contentWebTC; // @synthesize contentWebTC=_contentWebTC;
@property(nonatomic) __weak NSLayoutConstraint *contentWebBC; // @synthesize contentWebBC=_contentWebBC;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(copy, nonatomic) CDUnknownBlockType agreeBlock; // @synthesize agreeBlock=_agreeBlock;
@property(retain, nonatomic) NSURL *webURL; // @synthesize webURL=_webURL;
@property(retain, nonatomic) UIWebView *contentWebView; // @synthesize contentWebView=_contentWebView;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)tellParentVCReturn;
- (void)setupRightBarBtnItem;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

