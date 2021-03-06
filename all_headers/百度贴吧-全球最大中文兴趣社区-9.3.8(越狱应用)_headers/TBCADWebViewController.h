//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCSlideBackViewController.h"

#import "CAAnimationDelegate-Protocol.h"
#import "FMShareUIComponentDelegate-Protocol.h"
#import "TBCForumShareDelegate-Protocol.h"
#import "TBCForumShareUIComponentDelegate-Protocol.h"
#import "TBCHybridBridgeDelegate-Protocol.h"
#import "TBCNoDataViewButtonDelegate-Protocol.h"
#import "TBCWebImageDownloaderDelegate-Protocol.h"
#import "TBCWebImageManagerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class CALayer, FMShareUIComponent, NSString, NSTimer, NSURL, TBCDragButton, TBCForumShareChatContactsViewControllerHolder, TBCForumShareUIComponent, TBCHYWebViewJsBridge, TBCNavigationBarItemView, TBCNoDataView, TBCPromotionItem, TBCWebImageDownloader, TBCWebViewReplyView, UIActionSheet, UIBarButtonItem, UIButton, UIImage, UIToolbar, UIView, UIViewController, UIWebView;

@interface TBCADWebViewController : TBCSlideBackViewController <UIActionSheetDelegate, FMShareUIComponentDelegate, TBCForumShareUIComponentDelegate, TBCForumShareDelegate, TBCHybridBridgeDelegate, CAAnimationDelegate, UIWebViewDelegate, TBCWebImageDownloaderDelegate, UIGestureRecognizerDelegate, TBCWebImageManagerDelegate, TBCNoDataViewButtonDelegate>
{
    _Bool _cookieSeted;
    _Bool _hasHybridBridge;
    _Bool _hasPop;
    _Bool _hiddenToolBar;
    _Bool _isPresentViewController;
    _Bool _isGameUrl;
    _Bool _showScreenLandscape;
    _Bool _showScreenFull;
    _Bool _isPartnerWebView;
    _Bool _isPreViewControllerHideNavigationBar;
    _Bool _hasHiddenNaviationBarForUrl;
    _Bool _fcFullScreen;
    _Bool _shareTapped;
    _Bool _interactive;
    TBCForumShareChatContactsViewControllerHolder *_shareViewControllerHolder;
    NSURL *_url;
    UIWebView *_webview;
    NSString *_shareTitle;
    TBCHYWebViewJsBridge *_webViewBridge;
    TBCNavigationBarItemView *_rightNaviView;
    unsigned long long _availableActions;
    TBCWebImageDownloader *_webImageDownloader;
    UIBarButtonItem *_backBarButtonItem;
    UIBarButtonItem *_forwardBarButtonItem;
    UIBarButtonItem *_refreshBarButtonItem;
    UIBarButtonItem *_stopBarButtonItem;
    UIBarButtonItem *_actionBarButtonItem;
    UIActionSheet *_pageActionSheet;
    UIToolbar *_toolbar;
    UIViewController *_fromViewController;
    FMShareUIComponent *_component;
    UIView *_backgroundView;
    UIButton *_refreshGameButton;
    TBCDragButton *_dragButton;
    NSTimer *_dragShowTimer;
    UIView *_mistyView;
    UIView *_floatMenuView;
    FMShareUIComponent *_shareComponent;
    TBCForumShareUIComponent *_forumShareUIComponent;
    UIImage *_gameImage;
    TBCNoDataView *_nodataHintView;
    UIButton *_popButton;
    NSString *_shareImageUrl;
    NSString *_contentStr;
    NSString *_pbjid;
    NSString *_pbfid;
    NSString *_pbjfrom;
    TBCWebViewReplyView *_replayView;
    UIButton *_floatingBackButton;
    UIButton *_floatingShareButton;
    CALayer *_progresslayer;
    double _progress;
    unsigned long long _loadingCount;
    unsigned long long _maxLoadCount;
    NSURL *_currentURL;
    TBCPromotionItem *_promotionItem;
}

+ (id)checkUrl:(id)arg1;
+ (void)presentWebViewController:(id)arg1 url:(id)arg2 showBottomBar:(_Bool)arg3 adItem:(id)arg4;
+ (void)presentWebViewController:(id)arg1 url:(id)arg2 showBottomBar:(_Bool)arg3;
+ (void)presentWebViewController:(id)arg1 url:(id)arg2 adItem:(id)arg3;
+ (void)pushWebViewController:(id)arg1 url:(id)arg2 showBottomBar:(_Bool)arg3 source:(id)arg4 isGameUrl:(_Bool)arg5 withWebViewControllerAvailableActions:(unsigned long long)arg6 adItem:(id)arg7;
+ (void)pushWebViewController:(id)arg1 url:(id)arg2 showBottomBar:(_Bool)arg3 source:(id)arg4 isGameUrl:(_Bool)arg5 withWebViewControllerAvailableActions:(unsigned long long)arg6;
+ (void)pushGameWebViewController:(id)arg1 url:(id)arg2;
+ (void)pushWebViewController:(id)arg1 url:(id)arg2 withWebViewControllerAvailableActions:(unsigned long long)arg3;
+ (void)pushWebViewController:(id)arg1 url:(id)arg2;
+ (void)pushWebViewController:(id)arg1 url:(id)arg2 source:(id)arg3;
+ (void)pushWebViewController:(id)arg1 url:(id)arg2 adItem:(id)arg3;
+ (void)pushWebViewController:(id)arg1 url:(id)arg2 showBottomBar:(_Bool)arg3;
@property(retain, nonatomic) TBCPromotionItem *promotionItem; // @synthesize promotionItem=_promotionItem;
@property(nonatomic) __weak NSURL *currentURL; // @synthesize currentURL=_currentURL;
@property(nonatomic) _Bool interactive; // @synthesize interactive=_interactive;
@property(nonatomic) unsigned long long maxLoadCount; // @synthesize maxLoadCount=_maxLoadCount;
@property(nonatomic) unsigned long long loadingCount; // @synthesize loadingCount=_loadingCount;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) CALayer *progresslayer; // @synthesize progresslayer=_progresslayer;
@property(nonatomic) _Bool shareTapped; // @synthesize shareTapped=_shareTapped;
@property(retain, nonatomic) UIButton *floatingShareButton; // @synthesize floatingShareButton=_floatingShareButton;
@property(retain, nonatomic) UIButton *floatingBackButton; // @synthesize floatingBackButton=_floatingBackButton;
@property(nonatomic) _Bool fcFullScreen; // @synthesize fcFullScreen=_fcFullScreen;
@property(nonatomic) _Bool hasHiddenNaviationBarForUrl; // @synthesize hasHiddenNaviationBarForUrl=_hasHiddenNaviationBarForUrl;
@property(nonatomic) _Bool isPreViewControllerHideNavigationBar; // @synthesize isPreViewControllerHideNavigationBar=_isPreViewControllerHideNavigationBar;
@property(retain, nonatomic) TBCWebViewReplyView *replayView; // @synthesize replayView=_replayView;
@property(copy, nonatomic) NSString *pbjfrom; // @synthesize pbjfrom=_pbjfrom;
@property(copy, nonatomic) NSString *pbfid; // @synthesize pbfid=_pbfid;
@property(copy, nonatomic) NSString *pbjid; // @synthesize pbjid=_pbjid;
@property(nonatomic) _Bool isPartnerWebView; // @synthesize isPartnerWebView=_isPartnerWebView;
@property(copy, nonatomic) NSString *contentStr; // @synthesize contentStr=_contentStr;
@property(copy, nonatomic) NSString *shareImageUrl; // @synthesize shareImageUrl=_shareImageUrl;
@property(retain, nonatomic) UIButton *popButton; // @synthesize popButton=_popButton;
@property(retain, nonatomic) TBCNoDataView *nodataHintView; // @synthesize nodataHintView=_nodataHintView;
@property(retain, nonatomic) UIImage *gameImage; // @synthesize gameImage=_gameImage;
@property(retain, nonatomic) TBCForumShareUIComponent *forumShareUIComponent; // @synthesize forumShareUIComponent=_forumShareUIComponent;
@property(retain, nonatomic) FMShareUIComponent *shareComponent; // @synthesize shareComponent=_shareComponent;
@property(retain, nonatomic) UIView *floatMenuView; // @synthesize floatMenuView=_floatMenuView;
@property(retain, nonatomic) UIView *mistyView; // @synthesize mistyView=_mistyView;
@property(retain, nonatomic) NSTimer *dragShowTimer; // @synthesize dragShowTimer=_dragShowTimer;
@property(retain, nonatomic) TBCDragButton *dragButton; // @synthesize dragButton=_dragButton;
@property(retain, nonatomic) UIButton *refreshGameButton; // @synthesize refreshGameButton=_refreshGameButton;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool showScreenFull; // @synthesize showScreenFull=_showScreenFull;
@property(nonatomic) _Bool showScreenLandscape; // @synthesize showScreenLandscape=_showScreenLandscape;
@property(nonatomic) _Bool isGameUrl; // @synthesize isGameUrl=_isGameUrl;
@property(retain, nonatomic) FMShareUIComponent *component; // @synthesize component=_component;
@property(nonatomic) __weak UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) UIActionSheet *pageActionSheet; // @synthesize pageActionSheet=_pageActionSheet;
@property(retain, nonatomic) UIBarButtonItem *actionBarButtonItem; // @synthesize actionBarButtonItem=_actionBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *stopBarButtonItem; // @synthesize stopBarButtonItem=_stopBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *refreshBarButtonItem; // @synthesize refreshBarButtonItem=_refreshBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *forwardBarButtonItem; // @synthesize forwardBarButtonItem=_forwardBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
@property(retain, nonatomic) TBCWebImageDownloader *webImageDownloader; // @synthesize webImageDownloader=_webImageDownloader;
@property(nonatomic) _Bool isPresentViewController; // @synthesize isPresentViewController=_isPresentViewController;
@property(nonatomic) _Bool hiddenToolBar; // @synthesize hiddenToolBar=_hiddenToolBar;
@property(nonatomic) unsigned long long availableActions; // @synthesize availableActions=_availableActions;
@property(nonatomic) _Bool hasPop; // @synthesize hasPop=_hasPop;
@property(retain, nonatomic) TBCNavigationBarItemView *rightNaviView; // @synthesize rightNaviView=_rightNaviView;
@property(retain, nonatomic) TBCHYWebViewJsBridge *webViewBridge; // @synthesize webViewBridge=_webViewBridge;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(retain, nonatomic) UIWebView *webview; // @synthesize webview=_webview;
@property(nonatomic) _Bool hasHybridBridge; // @synthesize hasHybridBridge=_hasHybridBridge;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) TBCForumShareChatContactsViewControllerHolder *shareViewControllerHolder; // @synthesize shareViewControllerHolder=_shareViewControllerHolder;
- (void).cxx_destruct;
- (void)changeNavigationBarWithType:(long long)arg1;
- (void)webViewWithProgress:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewWithProgressDidFinishLoad:(id)arg1;
- (_Bool)checkIsRequestInteractive:(id)arg1;
- (_Bool)isNotRequestRedirect:(id)arg1;
- (_Bool)isRequestComplete:(id)arg1;
- (void)webViewWithProgressDidStartLoad:(id)arg1;
- (_Bool)webViewWithProgress:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)reset;
- (void)completeProgress;
- (void)incrementProgress;
- (void)startProgress;
- (void)setLoadingProgress:(float)arg1;
- (void)setupLoadingProgressIfNeed;
- (_Bool)isLoadingProgressOn;
- (double)adDelayTime;
- (void)clickNoDataViewButton;
- (void)loadFinish:(_Bool)arg1 loadDescription:(id)arg2;
- (id)registerCustomClass;
- (void)callJsShareResultMethod:(id)arg1;
- (void)shareWithShareComponentFailed:(id)arg1;
- (void)shareWithShareComponentSuccess:(id)arg1;
- (void)tDouIAPSucceed:(id)arg1;
- (void)setReplyViewAndSizefit;
- (void)setShareButtonControl:(id)arg1;
- (void)dragShow;
- (void)showDragButton:(_Bool)arg1;
- (void)updateScreenState;
- (void)removeRefreshAnimation;
- (void)addRefreshAnimation;
- (void)refreshGame;
- (void)sendForumShareContent:(id)arg1;
- (void)cancleForumShareContent;
- (void)showForumShareView:(id)arg1;
- (id)createForumShareContentWithType:(int)arg1 shareContent:(id)arg2;
- (id)contentForType:(int)arg1;
- (void)showShareStatus:(id)arg1;
- (void)shareGame;
- (void)gameContinue;
- (void)buttonClicked:(id)arg1;
- (void)dragButtonClick:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)stop:(id)arg1;
- (void)actionButtonClicked:(id)arg1;
- (void)goForward:(id)arg1;
- (void)goBack:(id)arg1;
- (void)refresh;
- (void)imageDownloader:(id)arg1 didFailWithError:(id)arg2;
- (void)imageDownloader:(id)arg1 didFinishWithImage:(id)arg2;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)checkClientVersionExist:(id)arg1;
- (_Bool)checkBaiDuDomainExist:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (_Bool)checkWebView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)focusRefreshView:(_Bool)arg1;
- (void)layoutFocusButtonsFullScreen:(_Bool)arg1;
- (void)floatingShareBtnTapped:(id)arg1;
- (void)floatingBackBtnTapped:(id)arg1;
- (void)returnLastViewOrWebView;
- (void)returnLastViewForAppStore;
- (void)returnLastView;
- (void)dismissWebViewController;
- (void)dismissOrReturnWebViewController;
- (void)doMoreThingFromHybrid:(id)arg1 shareContentDetail:(id)arg2 shareContentIcon:(id)arg3 shareContentUrl:(id)arg4;
- (void)doMoreThing;
- (_Bool)patchForHiddenBar;
- (_Bool)filterURLStringForPop:(id)arg1;
- (void)LayoutNavigationBar;
- (_Bool)isLiveURL:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewHideSwitch:(id)arg1;
- (void)loadURL:(id)arg1;
- (void)playVideoExitFullScreen:(id)arg1;
- (void)playVideoEnterFullScreen:(id)arg1;
- (void)addObservers;
- (void)jumpToNativePBView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

