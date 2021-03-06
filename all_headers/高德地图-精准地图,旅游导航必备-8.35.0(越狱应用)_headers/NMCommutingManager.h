//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMBaseManager.h"

#import "NMCommuteService-Protocol.h"
#import "NMCommutingClassService-Protocol.h"
#import "NMCompanyHomeDigHelperDelegate-Protocol.h"
#import "NMFetchSubscribeInfoDelege-Protocol.h"

@class AMMPSExtendedPoiData, NMCommutingStatus, NMCompanyHomeDigHelper, NMPathFetcher, NSDictionary, NSMutableArray, NSString;
@protocol NMPathService;

@interface NMCommutingManager : NMBaseManager <NMFetchSubscribeInfoDelege, NMCompanyHomeDigHelperDelegate, NMCommuteService, NMCommutingClassService>
{
    long long _status;
    NSMutableArray *_statusArray;
    _Bool _isEditHomeAndCompanyPoi;
    long long _commutingProcessType;
    _Bool _hasEnterdCommteNavi;
    long long _fromSource;
    _Bool _enterInfoFeedBack;
    _Bool _firstRequestSucsess;
    _Bool _lastCarPlateStatus;
    long long _previousMapState;
    NMCommutingStatus *_commutingStatusHelper;
    id <NMPathService> _pathService;
    NMCompanyHomeDigHelper *_homeCompanyDigHepler;
    NSDictionary *_externalParams;
    long long _currentRuteType;
    AMMPSExtendedPoiData *_homePoiData;
    AMMPSExtendedPoiData *_companyPoiData;
    NSString *_lastOutCarPlate;
    long long _lastPathMethod;
    NMPathFetcher *_pathFetcher;
}

+ (id)diggedCompanyPoi;
+ (id)diggedHomePoi;
+ (long long)fetchCommutingType;
+ (void)fetchCommutingTypeWithCallBack:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NMPathFetcher *pathFetcher; // @synthesize pathFetcher=_pathFetcher;
@property(nonatomic) long long lastPathMethod; // @synthesize lastPathMethod=_lastPathMethod;
@property(nonatomic) _Bool lastCarPlateStatus; // @synthesize lastCarPlateStatus=_lastCarPlateStatus;
@property(copy, nonatomic) NSString *lastOutCarPlate; // @synthesize lastOutCarPlate=_lastOutCarPlate;
@property(retain, nonatomic) AMMPSExtendedPoiData *companyPoiData; // @synthesize companyPoiData=_companyPoiData;
@property(retain, nonatomic) AMMPSExtendedPoiData *homePoiData; // @synthesize homePoiData=_homePoiData;
@property(nonatomic) long long currentRuteType; // @synthesize currentRuteType=_currentRuteType;
@property(retain, nonatomic) NSDictionary *externalParams; // @synthesize externalParams=_externalParams;
@property(retain, nonatomic) NMCompanyHomeDigHelper *homeCompanyDigHepler; // @synthesize homeCompanyDigHepler=_homeCompanyDigHepler;
@property(nonatomic) __weak id <NMPathService> pathService; // @synthesize pathService=_pathService;
@property(retain, nonatomic) NMCommutingStatus *commutingStatusHelper; // @synthesize commutingStatusHelper=_commutingStatusHelper;
@property(nonatomic) long long previousMapState; // @synthesize previousMapState=_previousMapState;
@property(nonatomic) _Bool firstRequestSucsess; // @synthesize firstRequestSucsess=_firstRequestSucsess;
- (void).cxx_destruct;
- (long long)mapviewExtendState;
- (void)changeViewStackWhenHomeOrCompanyEmpty;
- (_Bool)hasEnteredCommuteNavi;
- (_Bool)isSubscribeInfoExist;
- (id)companyHomeSubscribeInfo;
- (id)homeCompanySubscribeInfo;
- (id)converSubscribeDic:(id)arg1;
- (void)clearSubscribeRequest;
- (void)deleteTraficSubscribeInfo:(long long)arg1;
- (void)remoteEditCompanyAndHomeTraffic:(long long)arg1 onOff:(_Bool)arg2 timeStr:(id)arg3 dayArray:(id)arg4;
- (void)remoteEditHomeAndCompanyTraffic:(long long)arg1 onOff:(_Bool)arg2 timeStr:(id)arg3 dayArray:(id)arg4;
- (void)fetchSubscribeInfoFromServer;
- (void)homeCompanyTrafficInfoEditSuccess:(_Bool)arg1 trafficType:(int)arg2;
- (void)syncSubscribeInfoSuccess:(_Bool)arg1;
- (long long)commutingProcessType;
- (id)experienceProcessCompanyPoi;
- (id)experienceProcessHomePoi;
- (id)diggedCompanyPoi;
- (id)diggedHomePoi;
- (id)getHCPoiFromDicParams;
- (long long)getRouteTypeFromDicParams;
- (void)popStatus;
- (void)setStatusBarStyleWithStatus:(long long)arg1;
- (void)pushStatus:(long long)arg1 data:(id)arg2;
- (void)goBack;
- (_Bool)isHCPoiFromExternal;
- (void)setNaviRouteType:(long long)arg1;
- (void)startComuNaviWithRouteList:(id)arg1;
- (void)fetchedRoute:(id)arg1 success:(_Bool)arg2;
- (id)displayedHCPoiData:(int)arg1;
- (void)cancelFetchPath;
- (void)commutingRequestRouteWithStartPoi:(id)arg1 endPoi:(id)arg2;
- (void)startDigHomeCompanyPoiData;
- (void)showScaleLineAndZoomButton;
- (id)trafficService;
- (void)enterInfoTrafficSetting:(id)arg1;
- (void)enterInfoFeedBack:(id)arg1;
- (void)highlightPointOutside:(id)arg1 inLayer:(id)arg2;
- (void)highlightPoint:(id)arg1 inLayer:(id)arg2;
- (void)highlightedLayerIndex:(long long)arg1;
- (_Bool)touchOnMapBlank;
- (void)enterCommutingWithType:(int)arg1 fromPush:(_Bool)arg2;
- (id)homeAndCompanyInfo;
- (long long)fetchCurrentCommutingType;
- (void)doSetHomeAndCompanyAction:(long long)arg1;
- (void)pushShowHCPoiSettingView;
- (void)pushPreviewCommutingRoute;
- (void)previewCommutingRoadInfo:(long long)arg1;
- (long long)fromSrouce;
- (_Bool)hasFullHomeAndCompanyInfo;
- (void)initRouteType;
- (void)setCommutingMapViewContext;
- (void)showFavorLayer;
- (void)hideFavorLayer;
- (Class)managerViewContainerClass;
- (id)container;
- (int)suitableAnimation;
- (void)afterExitNotification;
- (void)resumeRelatedViews;
- (void)suspendRelatedViews;
- (void)resumeRelatedData;
- (void)clearRelatedData;
- (void)setScaleLineBottomPadding:(float)arg1;
- (void)resetScaleLineHorizontalPadding:(float)arg1;
- (void)clearRelatedViews;
- (void)initRelatedViews;
- (void)initManagerWithOtherInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

