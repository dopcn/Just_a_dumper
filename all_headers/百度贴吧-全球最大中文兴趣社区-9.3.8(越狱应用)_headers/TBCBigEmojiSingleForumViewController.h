//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCWKWebViewController.h"

#import "TBCEmotionPromptViewDelegate-Protocol.h"
#import "TBCResManagerDelegate-Protocol.h"

@class NSString;

@interface TBCBigEmojiSingleForumViewController : TBCWKWebViewController <TBCEmotionPromptViewDelegate, TBCResManagerDelegate>
{
}

+ (id)createWebViewControllerWithURL;
+ (void)load;
- (void)emojiUploading;
- (void)emojiUploadDone:(id)arg1;
- (void)hasEmojiPackageUploding;
- (void)createEmojiPackage:(id)arg1;
- (void)sortEmoticonPackage:(id)arg1;
- (void)deleteEmoticonPackage:(id)arg1;
- (id)downloadedEmoticonPackageIDString;
- (id)dataFromH5URL:(id)arg1;
- (void)executeJavaScript:(id)arg1 webView:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)refreshView;
- (_Bool)forceHideWebViewNavigationBar;
- (void)resoureManagerDelegate;
- (void)setupEmotionView;
- (void)handleHintButtonClicked;
- (void)jumpToHotTopicListViewController;
- (long long)getWebTypeWith:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)onShareSucceed:(id)arg1;
- (void)onPackagesUpdated:(id)arg1;
- (void)setupWebViewColor;
- (void)loadView;
- (void)setViewColor;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

