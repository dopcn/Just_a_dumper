//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIAlertViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSOperation, NSString, UIButton, UIView, UIWebView, WIMood, WIProgressView;

@interface WIMoodShopPreVC : UIViewController <UIWebViewDelegate, UIAlertViewDelegate>
{
    CDUnknownBlockType _downloadFinishBlock;
    CDUnknownBlockType _dismissBlock;
    NSOperation *_request;
    WIMood *_mood;
    UIView *_backgroundView;
    UIView *_contentView;
    UIWebView *_webView;
    UIButton *_closeButton;
    UIButton *_downloadButton;
    WIProgressView *_progressView;
}

@property(nonatomic) __weak WIProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak UIButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) WIMood *mood; // @synthesize mood=_mood;
@property(nonatomic) __weak NSOperation *request; // @synthesize request=_request;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) CDUnknownBlockType downloadFinishBlock; // @synthesize downloadFinishBlock=_downloadFinishBlock;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)updateMood;
- (void)download;
- (void)deleteMood;
- (void)deleteMoodConfirm;
- (void)didReceiveMemoryWarning;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dismissMySelf:(id)arg1;
- (void)dealloc;
- (id)initWithMood:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

