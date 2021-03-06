//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ONESBaseMapEntranceDelegate-Protocol.h"
#import "ONETakeCarPlacePinViewNDelegate-Protocol.h"
#import "ONETakeCarPlaceStepMachineNDelegate-Protocol.h"

@class DMPoiInfoModel, DMPoiModel, NSDate, NSMutableArray, NSMutableDictionary, NSString, ONESBaseMapEntrance, ONESBasePointAnnotation, ONETakeCarPlaceAnnosManager, ONETakeCarPlacePinViewN, ONETakeCarPlaceStepMachineN, ONEXPassagerBubbleViewN, PointAnnoWithEntrance, TKPBConfigN;
@protocol ONETakeCarPlaceBusinessDataSourceN, ONETakeCarPlaceBusinessDelegateN;

@interface ONETakeCarPlaceBussinessN : NSObject <ONETakeCarPlacePinViewNDelegate, ONESBaseMapEntranceDelegate, ONETakeCarPlaceStepMachineNDelegate>
{
    _Bool _isActive;
    _Bool _allowShowRecommendPlace;
    _Bool _isMapMoving;
    _Bool _doubleFinger;
    _Bool _needReverseGeoWhenStart;
    _Bool _isNeedChangeSourceTag;
    _Bool _haveFinishFirstLaunchAnimation;
    _Bool _firstLaunch;
    int _enterStartFuncTimes;
    ONESBaseMapEntrance *_mapEntrance;
    id <ONETakeCarPlaceBusinessDelegateN> _delegate;
    id <ONETakeCarPlaceBusinessDataSourceN> _dataSource;
    DMPoiModel *_currentPoiModel;
    NSMutableDictionary *_session_needRgeo_pairs;
    NSString *_defaultLoadingTxt;
    DMPoiInfoModel *_currentRgeoModel;
    DMPoiInfoModel *_preRgeoModel;
    unsigned long long _sessionId;
    NSMutableArray *_machineArray;
    NSMutableArray *_hotPlaceAnimationViews;
    long long _lastNetworkStatus;
    NSString *_adsorption_method;
    ONETakeCarPlacePinViewN *_pinView;
    NSDate *_panBeginDate;
    NSDate *_tapDate;
    ONETakeCarPlaceStepMachineN *_lastMachine;
    TKPBConfigN *_themeConfig;
    unsigned long long _currentMode;
    ONESBasePointAnnotation *_transparentAnno;
    ONESBaseMapEntrance *_preMapEntrance;
    PointAnnoWithEntrance *_stationNameAnno;
    ONETakeCarPlaceAnnosManager *_tkpAnnoManager;
    ONETakeCarPlaceAnnosManager *_tkpStationAnnoManager;
    PointAnnoWithEntrance *_startPinAnno;
    PointAnnoWithEntrance *_startTxtAnno;
    PointAnnoWithEntrance *_endPinAnno;
    PointAnnoWithEntrance *_endTxtAnno;
    ONEXPassagerBubbleViewN *_confirmPageBubble_Start;
    ONEXPassagerBubbleViewN *_confirmPageBubble_End;
    NSString *_confirmPageStartPinTxt;
    struct CLLocationCoordinate2D _confirmPageStartPinCoor;
}

+ (void)setCommonDataSource:(id)arg1;
@property(retain, nonatomic) NSString *confirmPageStartPinTxt; // @synthesize confirmPageStartPinTxt=_confirmPageStartPinTxt;
@property(nonatomic) struct CLLocationCoordinate2D confirmPageStartPinCoor; // @synthesize confirmPageStartPinCoor=_confirmPageStartPinCoor;
@property(retain, nonatomic) ONEXPassagerBubbleViewN *confirmPageBubble_End; // @synthesize confirmPageBubble_End=_confirmPageBubble_End;
@property(retain, nonatomic) ONEXPassagerBubbleViewN *confirmPageBubble_Start; // @synthesize confirmPageBubble_Start=_confirmPageBubble_Start;
@property(retain, nonatomic) PointAnnoWithEntrance *endTxtAnno; // @synthesize endTxtAnno=_endTxtAnno;
@property(retain, nonatomic) PointAnnoWithEntrance *endPinAnno; // @synthesize endPinAnno=_endPinAnno;
@property(retain, nonatomic) PointAnnoWithEntrance *startTxtAnno; // @synthesize startTxtAnno=_startTxtAnno;
@property(retain, nonatomic) PointAnnoWithEntrance *startPinAnno; // @synthesize startPinAnno=_startPinAnno;
@property(retain, nonatomic) ONETakeCarPlaceAnnosManager *tkpStationAnnoManager; // @synthesize tkpStationAnnoManager=_tkpStationAnnoManager;
@property(retain, nonatomic) ONETakeCarPlaceAnnosManager *tkpAnnoManager; // @synthesize tkpAnnoManager=_tkpAnnoManager;
@property(retain, nonatomic) PointAnnoWithEntrance *stationNameAnno; // @synthesize stationNameAnno=_stationNameAnno;
@property(retain, nonatomic) ONESBaseMapEntrance *preMapEntrance; // @synthesize preMapEntrance=_preMapEntrance;
@property(retain, nonatomic) ONESBasePointAnnotation *transparentAnno; // @synthesize transparentAnno=_transparentAnno;
@property(nonatomic) unsigned long long currentMode; // @synthesize currentMode=_currentMode;
@property(retain, nonatomic) TKPBConfigN *themeConfig; // @synthesize themeConfig=_themeConfig;
@property(retain, nonatomic) ONETakeCarPlaceStepMachineN *lastMachine; // @synthesize lastMachine=_lastMachine;
@property(nonatomic) int enterStartFuncTimes; // @synthesize enterStartFuncTimes=_enterStartFuncTimes;
@property(nonatomic) _Bool firstLaunch; // @synthesize firstLaunch=_firstLaunch;
@property(nonatomic) _Bool haveFinishFirstLaunchAnimation; // @synthesize haveFinishFirstLaunchAnimation=_haveFinishFirstLaunchAnimation;
@property(nonatomic) _Bool isNeedChangeSourceTag; // @synthesize isNeedChangeSourceTag=_isNeedChangeSourceTag;
@property(retain, nonatomic) NSDate *tapDate; // @synthesize tapDate=_tapDate;
@property(retain, nonatomic) NSDate *panBeginDate; // @synthesize panBeginDate=_panBeginDate;
@property(retain, nonatomic) ONETakeCarPlacePinViewN *pinView; // @synthesize pinView=_pinView;
@property(retain, nonatomic) NSString *adsorption_method; // @synthesize adsorption_method=_adsorption_method;
@property(nonatomic) _Bool needReverseGeoWhenStart; // @synthesize needReverseGeoWhenStart=_needReverseGeoWhenStart;
@property(nonatomic) long long lastNetworkStatus; // @synthesize lastNetworkStatus=_lastNetworkStatus;
@property(nonatomic) _Bool doubleFinger; // @synthesize doubleFinger=_doubleFinger;
@property(nonatomic) _Bool isMapMoving; // @synthesize isMapMoving=_isMapMoving;
@property(retain, nonatomic) NSMutableArray *hotPlaceAnimationViews; // @synthesize hotPlaceAnimationViews=_hotPlaceAnimationViews;
@property(retain, nonatomic) NSMutableArray *machineArray; // @synthesize machineArray=_machineArray;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) DMPoiInfoModel *preRgeoModel; // @synthesize preRgeoModel=_preRgeoModel;
@property(retain, nonatomic) DMPoiInfoModel *currentRgeoModel; // @synthesize currentRgeoModel=_currentRgeoModel;
@property(copy, nonatomic) NSString *defaultLoadingTxt; // @synthesize defaultLoadingTxt=_defaultLoadingTxt;
@property(retain, nonatomic) NSMutableDictionary *session_needRgeo_pairs; // @synthesize session_needRgeo_pairs=_session_needRgeo_pairs;
@property(nonatomic) _Bool allowShowRecommendPlace; // @synthesize allowShowRecommendPlace=_allowShowRecommendPlace;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) DMPoiModel *currentPoiModel; // @synthesize currentPoiModel=_currentPoiModel;
@property(nonatomic) __weak id <ONETakeCarPlaceBusinessDataSourceN> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <ONETakeCarPlaceBusinessDelegateN> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak ONESBaseMapEntrance *mapEntrance; // @synthesize mapEntrance=_mapEntrance;
- (void).cxx_destruct;
- (void)startBoxFillEventRec:(id)arg1;
- (void)firstShowPinViewEventRec;
- (void)cleanPinAnnotation;
- (id)tripEndTxtAnno;
- (id)tripEndPinAnno;
- (id)transparentPinViewAnno;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (id)stationAnnos;
- (id)allRecommendPois;
- (id)endTxtAnno_;
- (id)endPinAnno_;
- (id)startTxtAnno_;
- (id)startPinAnno_;
- (void)regionDidChange;
- (void)mapEntrance:(id)arg1 languageDidChanged:(unsigned long long)arg2;
- (void)startRgeoFlowStart:(unsigned long long)arg1 coor:(struct CLLocationCoordinate2D)arg2;
- (void)addRgeoFlowWithNeedRgeo:(_Bool)arg1 haveStart:(_Bool)arg2 haveEnd:(_Bool)arg3 absorbType:(unsigned long long)arg4 poi:(id)arg5 coor:(struct CLLocationCoordinate2D)arg6;
- (void)setMapCenter:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
- (void)addDefaultBoarding:(struct CLLocationCoordinate2D)arg1;
- (id)defaultDescription;
- (id)findAttachedAnnotation:(struct CLLocationCoordinate2D)arg1;
- (_Bool)judgeModelIfInCurrentTakeCarPlaceModels:(id)arg1;
- (_Bool)attachToPoi:(id)arg1;
- (id)getAnyPoiToAttachWithPoiinfo:(id)arg1;
- (id)getTheClosestPoiToCoor:(struct CLLocationCoordinate2D)arg1 surroundPoi:(id)arg2 inRange:(double)arg3;
- (id)getTheClosestPoi:(id)arg1 inRange:(_Bool)arg2;
- (void)hideAll_TakeCarPlaceAnno_WaveView;
- (void)update_TakeCarPlaceAnno_WaveIsShowByAnnoShowMaker;
- (void)update_TakeCarPlaceAnno_WaveViewPosition;
- (void)checkMarkerCrash;
- (void)addTakeCarPlaceAnnotationsIfNeed;
- (_Bool)mapLevelAllowShowTakeCarPlaceAnnotation;
- (id)takeCarPlaceAnnotations;
- (void)takeCarPlaceAnnotationSelected:(id)arg1;
- (void)ONETKPSMDelegate_End:(id)arg1;
- (void)ONETKPSMDelegate_UpdateAddr:(id)arg1;
- (void)ONETKPSMDelegate_AttachNearest:(id)arg1;
- (void)ONETKPSMDelegate_ShowHotPlace:(id)arg1;
- (void)doRequestReverseGEOSuccess:(id)arg1 machine:(id)arg2 reverseComplete:(CDUnknownBlockType)arg3;
- (void)startJumpAnimated:(id)arg1;
- (void)rgeoRequestFaild:(id)arg1 machine:(id)arg2;
- (void)rgeoRequestSuccess:(id)arg1 machine:(id)arg2;
- (void)ONETKPSMDelegate_PinJumpAndRgeo:(id)arg1;
- (_Bool)ONETKPSMDelegate_IsValid:(id)arg1;
- (void)mapEntrance:(id)arg1 regionDidChangeAtPanGesture:(id)arg2;
- (void)mapEntrance:(id)arg1 regionWillChangeAtPanGesture:(id)arg2;
- (void)mapEntranceSingleTouchSingleTapGesture:(id)arg1;
- (void)mapEntrancePositionChanged:(id)arg1;
- (void)mapEntrance:(id)arg1 regionDidChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapEntrance:(id)arg1 regionWillChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)updateStations;
- (void)updateToPosition:(struct CLLocationCoordinate2D)arg1 animation:(_Bool)arg2 needRgeo:(_Bool)arg3 needPersonalRec:(_Bool)arg4 needAborb:(_Bool)arg5;
- (void)updateToPosition:(struct CLLocationCoordinate2D)arg1 animation:(_Bool)arg2 needAbsorb:(_Bool)arg3;
- (void)updateToModel:(id)arg1 needRgeo:(_Bool)arg2 animation:(_Bool)arg3 needUpdateAddr:(_Bool)arg4;
- (void)updateToPoi:(id)arg1 needRgeo:(_Bool)arg2;
- (void)updateConfirmEndBubbleWithCustomView:(id)arg1;
- (void)updateBubbleWithCustomView:(id)arg1;
- (void)updateConfirmEndBubbleNum:(id)arg1 unit:(id)arg2 desc:(id)arg3 type:(unsigned long long)arg4 selected:(_Bool)arg5;
- (void)updateBubbleNum:(id)arg1 unit:(id)arg2 desc:(id)arg3 type:(unsigned long long)arg4 selected:(_Bool)arg5;
- (void)runLaunchAppAnimationFinished;
- (id)bizTypeToString:(unsigned long long)arg1;
- (id)typeToString:(unsigned long long)arg1;
- (_Bool)needShowPinView;
- (void)pinViewMoving;
- (void)hidePinView;
- (void)showPinView;
- (void)reachabilityChanged:(id)arg1;
- (void)removeNotification;
- (void)addNotification;
- (void)stop;
- (void)start;
- (void)dealloc;
- (void)updateToMode:(unsigned long long)arg1;
- (id)initWithMapEntrance:(id)arg1 config:(id)arg2;
- (id)initWithMapEntrance:(id)arg1;
- (id)init;
- (_Bool)isCurrentMapEntranceContainsPinView;
- (double)getDistanceFromPoint:(struct CGPoint)arg1 otherPoint:(struct CGPoint)arg2;
- (_Bool)isValidCoor:(struct CLLocationCoordinate2D)arg1;
- (void)syncUserDefaults:(id)arg1 forKey:(id)arg2;
- (_Bool)userDefaultsBoolForKey:(id)arg1;
- (_Bool)isDistanceFromCoor:(struct CLLocationCoordinate2D)arg1 toCoor:(struct CLLocationCoordinate2D)arg2 inMeter:(long long)arg3;
- (_Bool)isDistanceIn_1M_FromCoor:(struct CLLocationCoordinate2D)arg1 toCoor:(struct CLLocationCoordinate2D)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

