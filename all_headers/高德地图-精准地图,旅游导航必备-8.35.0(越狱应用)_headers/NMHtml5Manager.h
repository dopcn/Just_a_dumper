//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMBaseManager.h"

#import "NMAccountThirdLoginSuccessedDelegate-Protocol.h"
#import "NMHtml5ClassService-Protocol.h"
#import "NMHtml5Service-Protocol.h"
#import "NMMapCoveredProtocol-Protocol.h"

@class NSDictionary, NSString;

@interface NMHtml5Manager : NMBaseManager <NMMapCoveredProtocol, NMAccountThirdLoginSuccessedDelegate, NMHtml5Service, NMHtml5ClassService>
{
    _Bool _needToReloadInternalWebView;
    NSString *_poiQueryBizID;
    NSDictionary *_otherInfo;
}

+ (void)staticDoActionsBecomeActiveInBackground;
+ (void)staticdelayedTaskInFirstLaunch;
+ (_Bool)staticapplication:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
+ (void)clearTransparentWebView;
+ (void)checkPoiDetailTemplateFileUpdate;
+ (_Bool)needCheckUpdate;
+ (void)staticActionForRegisterAutoRequest:(long long)arg1;
+ (_Bool)autoRequestActionIsStatic;
+ (_Bool)needRegisterAutoRequest;
+ (void)registerApLayer;
+ (_Bool)isMultipleinstances;
@property(retain, nonatomic) NSDictionary *otherInfo; // @synthesize otherInfo=_otherInfo;
@property(copy, nonatomic) NSString *poiQueryBizID; // @synthesize poiQueryBizID=_poiQueryBizID;
- (void).cxx_destruct;
- (void)loginFromThirdSucceed:(id)arg1;
- (void)removeTopViewControl;
- (_Bool)isMapCoveredByViews:(long long)arg1;
- (id)topH5ViewControl;
- (id)popViewControlAnimated:(_Bool)arg1;
- (void)notifyHtml5View:(id)arg1;
- (void)handleFloorSelectDidShow:(id)arg1;
- (void)switchToMatchFloor:(id)arg1 withZoom:(_Bool)arg2;
- (void)dealloc;
- (void)apLayerHighlightedIndex:(long long)arg1 layerTye:(long long)arg2;
- (id)apLayerData:(long long)arg1;
- (void)openTransparentWebViewWithUrlString:(id)arg1;
- (void)goBack;
- (void)openInternalWebViewWithBackButton:(id)arg1;
- (void)openPOIView:(id)arg1 forDetail:(_Bool)arg2 andOtherInfo:(id)arg3;
- (void)openHtmlStringWebView:(id)arg1 andLoadingTitle:(id)arg2;
- (void)openThirdPartWebView:(id)arg1;
- (void)openThirdPartWebView:(id)arg1 andLoadingTitle:(id)arg2;
- (void)openLocalTempleteWebView:(id)arg1 withPoiData:(id)arg2 hideTitle:(_Bool)arg3;
- (void)openLocalTempleteWebView:(id)arg1 withPoiData:(id)arg2;
- (void)openInternalWebView:(id)arg1 withPoiData:(id)arg2 andLoadingTitle:(id)arg3;
- (void)openInternalWebView:(id)arg1 withPoiData:(id)arg2 andLoadingTitle:(id)arg3 hideBar:(_Bool)arg4 isHideBottomAndDisplayCloseButton:(_Bool)arg5 hideTitleBar:(_Bool)arg6 isHideCloseButton:(_Bool)arg7 isScrollDisabled:(_Bool)arg8 naviBarTitle:(id)arg9 forbid_showLoading:(_Bool)arg10;
- (void)openInternalWebView:(id)arg1 withPoiData:(id)arg2 andLoadingTitle:(id)arg3 hideBar:(_Bool)arg4 isHideBottomAndDisplayCloseButton:(_Bool)arg5 hideTitleBar:(_Bool)arg6 isHideCloseButton:(_Bool)arg7 isScrollDisabled:(_Bool)arg8 naviBarTitle:(id)arg9;
- (void)openInternalWebView:(id)arg1 withPoiData:(id)arg2 andLoadingTitle:(id)arg3 hideBar:(_Bool)arg4 isHideBottomAndDisplayCloseButton:(_Bool)arg5 hideTitleBar:(_Bool)arg6 isHideCloseButton:(_Bool)arg7 isScrollDisabled:(_Bool)arg8;
- (void)openInternalWebView:(id)arg1 withPoiData:(id)arg2 andLoadingTitle:(id)arg3 hideBar:(_Bool)arg4 isHideBottomAndDisplayCloseButton:(_Bool)arg5 isHideCloseButton:(_Bool)arg6;
- (void)openInternalWebView:(id)arg1 withPoiData:(id)arg2 andLoadingTitle:(id)arg3 hideBar:(_Bool)arg4 isHideBottomAndDisplayCloseButton:(_Bool)arg5 hideTitleBar:(_Bool)arg6 isScrollDisabled:(_Bool)arg7 naviBarTitle:(id)arg8;
- (void)openInternalWebView:(id)arg1 withPoiData:(id)arg2 andLoadingTitle:(id)arg3 hideBar:(_Bool)arg4 isHideBottomAndDisplayCloseButton:(_Bool)arg5 hideTitleBar:(_Bool)arg6 isScrollDisabled:(_Bool)arg7;
- (void)openInternalWebView:(id)arg1 withPoiData:(id)arg2 andLoadingTitle:(id)arg3 hideBar:(_Bool)arg4 isHideBottomAndDisplayCloseButton:(_Bool)arg5 hideTitleBar:(_Bool)arg6;
- (void)openInternalWebView:(id)arg1 withPoiData:(id)arg2 andLoadingTitle:(id)arg3 hideBar:(_Bool)arg4 isHideBottomAndDisplayCloseButton:(_Bool)arg5 hideTitleBar:(_Bool)arg6 forbid_showLoading:(_Bool)arg7;
- (void)openInternalWebView:(id)arg1 withPoiData:(id)arg2 andLoadingTitle:(id)arg3 hideBar:(_Bool)arg4 isHideBottomAndDisplayCloseButton:(_Bool)arg5;
- (void)openInternalWebView:(id)arg1 withPoiData:(id)arg2 andLoadingTitle:(id)arg3 hideBar:(_Bool)arg4;
- (void)popStatus;
- (id)firstPoiDataForViewData:(id)arg1;
- (_Bool)isPushStatusEqualCurrentStatus:(id)arg1;
- (void)pushViewControlForClassName:(id)arg1 withData:(id)arg2 animated:(_Bool)arg3;
- (void)isExitNavigation;
- (void)initManagerWithOtherInfo:(id)arg1;
- (void)uploadPhotoSuccessed;
- (void)touchOnMapBackground;
- (_Bool)touchOnMapBlank;
- (_Bool)forbidenShowMapviewScaleLine;
- (_Bool)forbiddenTopViewShown;
- (_Bool)forbiddenBottomViewShown;
- (_Bool)forbiddenShowLayersBtn;
- (_Bool)forbiddenShowTrafficBtn;
- (_Bool)forbiddenShowGPSOverlay;
- (_Bool)shouldShowTraffic;
- (_Bool)forbiddenShowMapFeedBackBtn;
- (_Bool)forbiddenShowFavorLayer;
- (_Bool)forbiddenShowMainLayerFavor;
- (_Bool)forbiddenSkinLayer;
- (_Bool)forbiddenShowInteractionLayer;
- (_Bool)forbiddenShowMainLayerInteraction;
- (_Bool)forbiddenFavoritePointClicked;
- (_Bool)forbiddenShowIndoorLayer;
- (_Bool)forbiddenShowMainLayer;
- (_Bool)forbiddenGuideviewButton;
- (int)suitableAnimation;
- (void)resumeRelatedViews;
- (void)suspendRelatedViews;
- (void)clearRelatedData;
- (void)clearRelatedViews;
- (_Bool)needStopNMLayers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

