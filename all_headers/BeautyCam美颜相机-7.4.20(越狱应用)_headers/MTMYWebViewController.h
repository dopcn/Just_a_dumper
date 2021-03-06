//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MTMYNoNetworkToRefreshDelegate-Protocol.h"
#import "MTWebViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class CALayer, MTMYActivitiyMascotLoading, MTMYButton, MTMYMaterialNoNetworkToRefreshView, MTMYPresentDelegate, MTMYShareViewManager, MTWWebView, MTWebViewConfiguration, NSDictionary, NSMutableDictionary, NSString, NSURL, NSURLRequest, UIActivityIndicatorView, UIButton, UILabel, UIView;

@interface MTMYWebViewController : UIViewController <UIScrollViewDelegate, MTMYNoNetworkToRefreshDelegate, MTWebViewDelegate>
{
    _Bool _isLocalWeb;
    _Bool _isUseProtocolCache;
    _Bool _takeOutDefaultNavView;
    _Bool _displayShareButton;
    _Bool _shouldFetchHomepageURL;
    _Bool _needAsyncRefresh;
    _Bool _isHomePage;
    _Bool _isOrderConfirmPage;
    _Bool _isOrderListPage;
    _Bool _isPaySucceedPage;
    _Bool _isGoodsDetailPage;
    _Bool _isOrderDetailPage;
    _Bool _isSkuFloatingPage;
    _Bool _isMaskFloatingPage;
    _Bool _isAboutMePage;
    _Bool _isCustomType;
    _Bool _isPayPageShow;
    _Bool _isOrderLogisticPage;
    _Bool _isWorkGamePage;
    _Bool _isJumpingLogin;
    _Bool _isFirstLoad;
    _Bool _loadSuccess;
    _Bool _isInitWithLogin;
    NSURL *_requestURL;
    NSString *_jsBridgeSubPath;
    NSDictionary *_dataDict;
    UIActivityIndicatorView *_indicatorView;
    UIView *_toastContainerView;
    MTMYMaterialNoNetworkToRefreshView *_noNetworkView;
    MTWWebView *_webView;
    NSURLRequest *_request;
    MTMYButton *_leftButton;
    UIButton *_rightButton;
    CALayer *_rightButtonRedDotLayer;
    UIButton *_shareButton;
    MTMYButton *_feedBackButton;
    UILabel *_titleLabel;
    UILabel *_tvAboutMePageTitle;
    UIView *_fakeStatusBarView;
    UIView *_fakeNavBarView;
    UIView *_splitineView;
    UIView *_splitLine;
    UIView *_navView;
    id _hostAppNavDelegate;
    MTMYPresentDelegate *_presentDelegate;
    long long _statusBarStyle;
    long long _previousStyle;
    NSDictionary *_jumpInfo;
    UIViewController *_holdVC;
    MTMYShareViewManager *_shareViewManager;
    NSMutableDictionary *_loadDurations;
    MTWebViewConfiguration *_configuration;
    MTMYActivitiyMascotLoading *_mascotLoading;
}

@property(retain, nonatomic) MTMYActivitiyMascotLoading *mascotLoading; // @synthesize mascotLoading=_mascotLoading;
@property(nonatomic) __weak MTWebViewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSMutableDictionary *loadDurations; // @synthesize loadDurations=_loadDurations;
@property(retain, nonatomic) MTMYShareViewManager *shareViewManager; // @synthesize shareViewManager=_shareViewManager;
@property(retain, nonatomic) UIViewController *holdVC; // @synthesize holdVC=_holdVC;
@property(retain, nonatomic) NSDictionary *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) long long previousStyle; // @synthesize previousStyle=_previousStyle;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) _Bool isInitWithLogin; // @synthesize isInitWithLogin=_isInitWithLogin;
@property(retain, nonatomic) MTMYPresentDelegate *presentDelegate; // @synthesize presentDelegate=_presentDelegate;
@property(nonatomic) _Bool loadSuccess; // @synthesize loadSuccess=_loadSuccess;
@property(retain, nonatomic) id hostAppNavDelegate; // @synthesize hostAppNavDelegate=_hostAppNavDelegate;
@property(retain, nonatomic) UIView *navView; // @synthesize navView=_navView;
@property(retain, nonatomic) UIView *splitLine; // @synthesize splitLine=_splitLine;
@property(retain, nonatomic) UIView *splitineView; // @synthesize splitineView=_splitineView;
@property(retain, nonatomic) UIView *fakeNavBarView; // @synthesize fakeNavBarView=_fakeNavBarView;
@property(retain, nonatomic) UIView *fakeStatusBarView; // @synthesize fakeStatusBarView=_fakeStatusBarView;
@property(retain, nonatomic) UILabel *tvAboutMePageTitle; // @synthesize tvAboutMePageTitle=_tvAboutMePageTitle;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MTMYButton *feedBackButton; // @synthesize feedBackButton=_feedBackButton;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) CALayer *rightButtonRedDotLayer; // @synthesize rightButtonRedDotLayer=_rightButtonRedDotLayer;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) MTMYButton *leftButton; // @synthesize leftButton=_leftButton;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) MTWWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) MTMYMaterialNoNetworkToRefreshView *noNetworkView; // @synthesize noNetworkView=_noNetworkView;
@property(nonatomic) _Bool isJumpingLogin; // @synthesize isJumpingLogin=_isJumpingLogin;
@property(nonatomic) _Bool isWorkGamePage; // @synthesize isWorkGamePage=_isWorkGamePage;
@property(nonatomic) _Bool isOrderLogisticPage; // @synthesize isOrderLogisticPage=_isOrderLogisticPage;
@property(nonatomic) _Bool isPayPageShow; // @synthesize isPayPageShow=_isPayPageShow;
@property(nonatomic) _Bool isCustomType; // @synthesize isCustomType=_isCustomType;
@property(nonatomic) _Bool isAboutMePage; // @synthesize isAboutMePage=_isAboutMePage;
@property(nonatomic) _Bool isMaskFloatingPage; // @synthesize isMaskFloatingPage=_isMaskFloatingPage;
@property(nonatomic) _Bool isSkuFloatingPage; // @synthesize isSkuFloatingPage=_isSkuFloatingPage;
@property(nonatomic) _Bool isOrderDetailPage; // @synthesize isOrderDetailPage=_isOrderDetailPage;
@property(nonatomic) _Bool isGoodsDetailPage; // @synthesize isGoodsDetailPage=_isGoodsDetailPage;
@property(nonatomic) _Bool isPaySucceedPage; // @synthesize isPaySucceedPage=_isPaySucceedPage;
@property(nonatomic) _Bool isOrderListPage; // @synthesize isOrderListPage=_isOrderListPage;
@property(nonatomic) _Bool isOrderConfirmPage; // @synthesize isOrderConfirmPage=_isOrderConfirmPage;
@property(nonatomic) _Bool isHomePage; // @synthesize isHomePage=_isHomePage;
@property(nonatomic) _Bool needAsyncRefresh; // @synthesize needAsyncRefresh=_needAsyncRefresh;
@property(nonatomic) _Bool shouldFetchHomepageURL; // @synthesize shouldFetchHomepageURL=_shouldFetchHomepageURL;
@property(retain, nonatomic) UIView *toastContainerView; // @synthesize toastContainerView=_toastContainerView;
@property(readonly, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) NSDictionary *dataDict; // @synthesize dataDict=_dataDict;
@property(nonatomic) _Bool displayShareButton; // @synthesize displayShareButton=_displayShareButton;
@property(nonatomic) _Bool takeOutDefaultNavView; // @synthesize takeOutDefaultNavView=_takeOutDefaultNavView;
@property(retain, nonatomic) NSString *jsBridgeSubPath; // @synthesize jsBridgeSubPath=_jsBridgeSubPath;
@property(nonatomic) _Bool isUseProtocolCache; // @synthesize isUseProtocolCache=_isUseProtocolCache;
@property(nonatomic) _Bool isLocalWeb; // @synthesize isLocalWeb=_isLocalWeb;
@property(retain, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
- (void).cxx_destruct;
- (_Bool)needShowMascotLoading;
- (void)hideLoading;
- (void)showLoading;
- (void)popToHomeViewController:(_Bool)arg1;
- (void)reportAPMIfNeeded:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)fetchAndJumpToHomeURL;
- (void)actionMoreCustom;
- (void)actionBack:(id)arg1;
- (void)feedBackButtonOnClick:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didCloseWebview;
- (void)setupPresentDelegate;
- (void)clickSealPreviewBuyButton;
- (void)updateWebOverFlowScrollViewToOutViewFrame;
- (id)webviewControllerWithLink:(id)arg1 showShareButton:(_Bool)arg2 isLocal:(_Bool)arg3 data:(id)arg4;
- (_Bool)isFinishOriginWebViewData:(id)arg1;
- (_Bool)isJumpToGoodsDetailWithData:(id)arg1;
- (void)didDismissHUD;
- (void)registerDefaultMethodsWithConfiguration:(id)arg1;
- (void)dispatchJSCommand:(id)arg1;
- (void)removeSelfWhenPushToController:(id)arg1;
- (void)didClickRetryButton;
- (void)actionShare:(id)arg1;
- (void)mt_webViewDidStartLoad:(id)arg1;
- (void)mt_webViewDidFinishLoad:(id)arg1;
- (void)mt_webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)mt_webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(unsigned long long)arg3;
- (_Bool)isABoutMeituPage;
- (_Bool)isMyCouponPage;
- (_Bool)isCommonQPage;
- (_Bool)isCustomerServicePage;
- (_Bool)isConcatServicePage;
- (_Bool)isHelpSupportPage;
- (_Bool)isAddressMangePage;
- (_Bool)isSpcialTopicPage;
- (void)updateNavTitleAndButton;
- (void)configureNoNetworkView;
- (void)configureWebView;
- (void)configureNavButton;
- (void)configureNavView;
- (void)handleHomeBecomeActive;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)extendDict;
- (void)feedBackOnClick:(id)arg1;
- (id)pauseURLToDict:(id)arg1;
- (void)fetchSKUInfoFowGoodsInfo:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)jsOpenLoginPage;
- (void)jumpToImagePickerController:(id)arg1 goodsInfo:(id)arg2 skuInfo:(id)arg3;
- (void)setupJSDirectMethodWithCommand:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingPhoto:(id)arg2;
- (void)postImageReturnInfoToJS:(id)arg1;
- (void)openPhotoLibrary:(id)arg1;
- (void)uploadImage:(id)arg1;
- (void)openCamera:(id)arg1;
- (void)webProcessImageDidFinished:(id)arg1;
- (void)saveImage:(id)arg1;
- (id)extendDict;
- (void)openLoginPage;
- (void)pickerViewDidDismiss:(id)arg1;
- (void)pickerView:(id)arg1 didTapFinishWithType:(long long)arg2 resultInfo:(id)arg3;
- (void)shareViewWithContentInfo:(id)arg1 goodsID:(id)arg2;
- (void)setupShareInfoWithGoodsID:(id)arg1;
- (void)callAddressPicker:(id)arg1;
- (_Bool)isValidResponseJsonData:(id)arg1;
- (void)resetGetProxyProtocol;
- (void)resetPostProxyProtocol;
- (void)registerOrderShareDialogMethod;
- (void)registerOpenPhotoLabirayMethod;
- (void)registerOpenCameraMethod;
- (void)registerCopyMethod;
- (void)registerPayMethod;
- (void)registerSealPreviewBuyMethod;
- (void)registerCallAddressPickerMethod;
- (void)couponsViewTapped:(int)arg1;
- (void)registerJSMeiyinCouponsMethod;
- (void)registerCommonDialogMethod;
- (void)registerJSToastMethod;
- (void)registerMD5EncrptionMethod;
- (void)registerNavMethod;
- (void)registerLinkMethod;
- (void)registerPayCloseMethod;
- (void)registerPayShowMethod;
- (void)registerAPMTransmitMethod;
- (void)registerTransmitMethod;
- (void)regiterJSDirectMethod;
- (void)registerWhiteList;
- (void)registerCustomServiceMethod;
- (void)registerSetNavTitleMethod;
- (void)registerMethodProtocols;
- (id)imageUploader;
- (void)setImageUploader:(id)arg1;
- (_Bool)loginFromH5;
- (void)setLoginFromH5:(_Bool)arg1;
- (_Bool)shareButtonWithURLStr:(id)arg1;
- (void)showAd;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

