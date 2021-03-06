//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AppBrowseUnit.h"

#import "MttShareBusinessCenterDataSource-Protocol.h"

@class MttCommonRNNavigationController, MttCommonRNPortalViewController, MttNewLoadingIndicator, MttRNCommonModuleConfig, NSNumber, NSString, RCQBAddress;

@interface MttCommonRNUnit : AppBrowseUnit <MttShareBusinessCenterDataSource>
{
    _Bool _bFocusUnit;
    RCQBAddress *_qb;
    RCQBAddress *_bizQBUrl;
    NSString *_customTitle;
    NSNumber *_statusBarStyle;
    long long _preOrientation;
    MttRNCommonModuleConfig *_moduleConfig;
    MttNewLoadingIndicator *_loadingIndicator;
    MttCommonRNNavigationController *_navigationController;
    MttCommonRNPortalViewController *_viewController;
    struct CGRect _preBounds;
}

@property(retain, nonatomic) MttCommonRNPortalViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) MttCommonRNNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) MttNewLoadingIndicator *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) MttRNCommonModuleConfig *moduleConfig; // @synthesize moduleConfig=_moduleConfig;
@property(nonatomic) long long preOrientation; // @synthesize preOrientation=_preOrientation;
@property(nonatomic) struct CGRect preBounds; // @synthesize preBounds=_preBounds;
@property(nonatomic) _Bool bFocusUnit; // @synthesize bFocusUnit=_bFocusUnit;
@property(retain, nonatomic) NSNumber *statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(retain, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
@property(retain, nonatomic) RCQBAddress *bizQBUrl; // @synthesize bizQBUrl=_bizQBUrl;
@property(retain, nonatomic) RCQBAddress *qb; // @synthesize qb=_qb;
- (void).cxx_destruct;
- (id)getNativeToJSModule;
- (id)getShareInfoPack;
- (id)controllerShareViewWillBePresented;
- (id)shareInfoPack;
- (id)shareText;
- (id)shareURL;
- (id)shareNoEnableStatusArray;
- (void)updateToolbarAndHeaderLayout;
- (_Bool)shouldShowToolBar;
- (_Bool)getSupportLandscape;
- (_Bool)needRotateAndForceOrientation;
- (void)back;
- (_Bool)canGoBack;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1 forNavigationType:(unsigned long long)arg2;
- (void)reload;
- (id)getUrl;
- (id)getTitle;
- (void)refreshSkinWithMode:(long long)arg1;
- (id)extendInitialProperties;
- (id)popMenuStatusArray;
- (void)unitWillShow;
- (void)unitWillHide;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (_Bool)isSupportLandscape;
- (void)activeHeaderView:(id)arg1;
- (void)addBrowserHeaderView;
- (void)layoutSubviews;
- (void)initReferenceViewController;
- (void)loadModuleConfigFail;
- (void)moduleConfigFetchDidFinish:(id)arg1;
- (void)startFetchModuleConfig;
- (id)initWithFrame:(struct CGRect)arg1 qb:(id)arg2 bizQB:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool usingQBWebView;

@end

