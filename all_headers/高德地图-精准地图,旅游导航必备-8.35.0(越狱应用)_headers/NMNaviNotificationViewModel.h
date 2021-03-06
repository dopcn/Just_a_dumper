//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMNaviPopupBaseViewModel.h"

#import "LTMCarNaviOverlayElementDataSource-Protocol.h"
#import "LTMCarNaviOverlayElementDelegate-Protocol.h"

@class NMNaviNotificationViewStyle, NSAttributedString, NSString, UIImage;

@interface NMNaviNotificationViewModel : NMNaviPopupBaseViewModel <LTMCarNaviOverlayElementDataSource, LTMCarNaviOverlayElementDelegate>
{
    NMNaviNotificationViewStyle *_viewStyle;
    NSString *_mainTitle;
    NSString *_mainHightlightTitle;
    NSString *_subTitle;
    NSString *_subHightlightTitle;
    NSString *_confirmButtonTitle;
    NSString *_cancelButtonTitle;
    UIImage *_leftViewImage;
    long long _autoDismissSeconds;
    long long _defaultAutoDismissButton;
}

@property(nonatomic) long long defaultAutoDismissButton; // @synthesize defaultAutoDismissButton=_defaultAutoDismissButton;
@property(nonatomic) long long autoDismissSeconds; // @synthesize autoDismissSeconds=_autoDismissSeconds;
@property(retain, nonatomic) UIImage *leftViewImage; // @synthesize leftViewImage=_leftViewImage;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property(copy, nonatomic) NSString *confirmButtonTitle; // @synthesize confirmButtonTitle=_confirmButtonTitle;
@property(copy, nonatomic) NSString *subHightlightTitle; // @synthesize subHightlightTitle=_subHightlightTitle;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *mainHightlightTitle; // @synthesize mainHightlightTitle=_mainHightlightTitle;
@property(copy, nonatomic) NSString *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(retain, nonatomic) NMNaviNotificationViewStyle *viewStyle; // @synthesize viewStyle=_viewStyle;
- (void).cxx_destruct;
- (void)addOverlayElementWithPointOverlay:(id)arg1;
- (void)removeOverlayElement;
- (_Bool)canVoiceControl;
- (void)configePublicConfirmProperties;
- (void)configSafetyShareForActivityProperties;
- (void)configOfflineRouteRequest;
- (void)configeParkingRecommendProperties;
- (void)configeReportIncidentProperties;
- (void)configCanNotJoinGroup;
- (void)configRouteStrategyProperties;
- (void)configReportIncidentThanks;
- (void)configSetCarPlateNumFinish;
- (void)configRestrictInfoProperties;
- (void)configChangeRouteSuccessProperties;
- (void)configSwitchRouteSuccessProperties;
- (void)configSwitchRouteFailProperties;
- (void)configReportProperties;
- (void)configSetCarPlateNumProperties;
- (void)configViaPointSelectProperties;
- (void)configRouteDialectEventProperties;
- (void)configRouteTrafficEventProperties;
- (void)configWeatherInfoProperties;
- (void)configGPSSignalWeakProperties;
- (void)configNotAvoidLimitInfoProperties;
- (void)setDayNightMode:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSAttributedString *subAttributedTitle;
@property(readonly, copy, nonatomic) NSAttributedString *mainAttributedTitle;
- (id)initWithPopupViewType:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

