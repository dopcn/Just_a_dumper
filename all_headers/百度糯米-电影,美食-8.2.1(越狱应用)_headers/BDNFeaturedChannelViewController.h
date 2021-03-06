//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDNComponentViewController.h"

#import "BDNVoiceSearchBarDelegate-Protocol.h"

@class BDNVoiceSearchBar, NSDate, NSDictionary, NSTimer, UIView;
@protocol NSObject;

@interface BDNFeaturedChannelViewController : BDNComponentViewController <BDNVoiceSearchBarDelegate>
{
    BDNVoiceSearchBar *_voiceSearchBar;
    NSDate *_totalSpeedDate;
    NSDate *_compT10StartTime;
    NSDate *_e2eT10StartTime;
    _Bool _isActive;
    id <NSObject> _cityChangeStatusObserver;
    id <NSObject> _redPointObserver;
    NSDictionary *_currentParams;
    NSTimer *_redPointTimer;
    UIView *_firstNewStyleView;
}

@property(retain, nonatomic) UIView *firstNewStyleView; // @synthesize firstNewStyleView=_firstNewStyleView;
@property(retain, nonatomic) NSTimer *redPointTimer; // @synthesize redPointTimer=_redPointTimer;
@property(retain, nonatomic) NSDictionary *currentParams; // @synthesize currentParams=_currentParams;
@property(retain, nonatomic) id <NSObject> redPointObserver; // @synthesize redPointObserver=_redPointObserver;
@property(retain, nonatomic) id <NSObject> cityChangeStatusObserver; // @synthesize cityChangeStatusObserver=_cityChangeStatusObserver;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
- (void).cxx_destruct;
- (void)voiceSearchBarOnInput:(id)arg1;
- (void)voiceSearchBarClickQRScaner:(id)arg1;
- (void)homeThemeChanged;
- (void)playAnimationInTabBar;
- (void)iOSConfigReceived;
- (void)scrollToTop;
- (void)reloadPage:(id)arg1;
- (void)removeAllActionButton;
- (void)removeActionButton:(id)arg1;
- (void)addActionButton:(id)arg1;
- (void)jsapi_addSegementControl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)jsapi_addTagList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)jsapi_setTitleForClick:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)jsapi_setTitle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)actionCurrentCityDidChanged:(id)arg1;
- (void)homeSearchNavigationBarNotifcationCenterTapped;
- (void)homeSearchNavigationBarQueryTapped;
- (void)homeSearchNavigationBarErWeiMaFuKuanMaItemTapped;
- (void)homeSearchNavigationBarErWeiMaQRScanItemTapped;
- (void)homeSearchNavigationBarErWeiMaTapped;
- (void)homeSearchNavigationBarQRScanTapped;
- (void)homeSearchNavigationBarShoppingCartTapped;
- (void)homeSearchNavigationBarTitleViewQRScanTapped;
- (void)homeSearchNavigationBarTitleViewVoiceTapped;
- (void)homeSearchNavigationBarTitleViewTapped;
- (void)homeSearchNavigationBarCityTapped;
- (unsigned long long)homeSearchNavigationBarQueryOrigin;
- (void)scrollViewDidScroll:(id)arg1;
- (void)endComponentViewReloadData;
- (void)endReloadData;
- (void)hideActivityIndicatorView;
- (void)didReceiveMemoryWarning;
- (void)jsapi_hideLoadingPage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadPage:(_Bool)arg1;
- (id)calculationTimeDuration:(id)arg1 endTime:(id)arg2;
- (void)handleIcon;
- (void)handleRedPoint;
- (void)handelNewStyleRedpoint:(_Bool)arg1;
- (void)requestRedPoint;
- (void)requestURL;
- (void)refreshViewController;
- (id)paramsForScheme:(id)arg1;
- (void)setSavedRequestURL:(id)arg1;
- (id)savedRequestURL;
- (_Bool)shouldShowNewStyle;
- (void)handelRedPointTimer;
@property(nonatomic, getter=isShouldShowTabbarRedPoint) _Bool shouldShowTabbarRedPoint;
- (_Bool)relayoutViewOnNavigationBarFrameChanged;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)showRedPoint:(id)arg1;
- (id)initWithScheme:(id)arg1;
- (id)initViewController;
- (void)dealloc;

@end

