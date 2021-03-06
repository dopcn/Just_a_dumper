//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NHDViewControllerBase.h"

#import "NHJSBridgeDelegate-Protocol.h"
#import "SSActivityViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class EssayEmptyView, EssayWebShareModel, NHNavigationBar, NHWebView, NSMutableArray, NSMutableDictionary, NSString, NSURL, SSActivityShareManager, SSActivityView;

@interface NHWebViewController : NHDViewControllerBase <SSActivityViewDelegate, NHJSBridgeDelegate, UIWebViewDelegate>
{
    _Bool _needLoginBeforeShare;
    _Bool _hideFooter;
    _Bool _hideNavBar;
    _Bool _shareWebViewForSpringFestivalLoadFlag;
    _Bool _shouldAutoShareAfterLogin;
    NHNavigationBar *_navigationBar;
    NSURL *_webViewURL;
    NSMutableArray *_shareImgFlagForSpringFestival;
    NSString *_webViewTitle;
    NHWebView *_webView;
    SSActivityShareManager *_activityActionManager;
    EssayWebShareModel *_webShareModel;
    SSActivityView *_activityView;
    EssayEmptyView *_noNetworkView;
    NSMutableDictionary *_shareParamForSpringFestival;
    NHWebView *_shareWebViewForSpringFestival;
    NSString *_webviewUrlForSpringFestival;
}

@property(retain, nonatomic) NSString *webviewUrlForSpringFestival; // @synthesize webviewUrlForSpringFestival=_webviewUrlForSpringFestival;
@property(retain, nonatomic) NHWebView *shareWebViewForSpringFestival; // @synthesize shareWebViewForSpringFestival=_shareWebViewForSpringFestival;
@property(retain, nonatomic) NSMutableDictionary *shareParamForSpringFestival; // @synthesize shareParamForSpringFestival=_shareParamForSpringFestival;
@property(nonatomic) _Bool shouldAutoShareAfterLogin; // @synthesize shouldAutoShareAfterLogin=_shouldAutoShareAfterLogin;
@property(retain, nonatomic) EssayEmptyView *noNetworkView; // @synthesize noNetworkView=_noNetworkView;
@property(retain, nonatomic) SSActivityView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) EssayWebShareModel *webShareModel; // @synthesize webShareModel=_webShareModel;
@property(retain, nonatomic) SSActivityShareManager *activityActionManager; // @synthesize activityActionManager=_activityActionManager;
@property(retain, nonatomic) NHWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) NSString *webViewTitle; // @synthesize webViewTitle=_webViewTitle;
@property(retain, nonatomic) NSMutableArray *shareImgFlagForSpringFestival; // @synthesize shareImgFlagForSpringFestival=_shareImgFlagForSpringFestival;
@property(nonatomic) _Bool shareWebViewForSpringFestivalLoadFlag; // @synthesize shareWebViewForSpringFestivalLoadFlag=_shareWebViewForSpringFestivalLoadFlag;
@property(nonatomic) _Bool hideNavBar; // @synthesize hideNavBar=_hideNavBar;
@property(nonatomic) _Bool hideFooter; // @synthesize hideFooter=_hideFooter;
@property(nonatomic) _Bool needLoginBeforeShare; // @synthesize needLoginBeforeShare=_needLoginBeforeShare;
@property(retain, nonatomic) NSURL *webViewURL; // @synthesize webViewURL=_webViewURL;
@property(retain, nonatomic) NHNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (id)createwWebView:(struct CGRect)arg1;
- (void)openPostPageFromJSBridge:(id)arg1 withCategoryId:(id)arg2;
- (void)hideLeftNavigatorBar;
- (void)jsBridge:(id)arg1 willHandleEventType:(unsigned long long)arg2 condition:(id)arg3;
- (void)shareAction:(id)arg1;
- (_Bool)shareWithImgForSpringFestival:(long long)arg1;
- (void)activityView:(id)arg1 didCompleteByItemType:(long long)arg2;
- (void)retryAction:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)accountStatesFinished:(id)arg1;
- (void)viewDidLoad;
- (void)buildViews;
- (id)initWithBaseCondition:(id)arg1;
- (id)initWithURL:(id)arg1 title:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

