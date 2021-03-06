//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate;

@interface BWNaviModel : NSObject
{
    int _status;
    int _type;
    _Bool _recalculate;
    _Bool _isNaviOnTop;
    _Bool _isNaviFinished;
    struct CGPoint _lastCompassLocation;
    struct CMapStatus _lastMapStatus;
    int itScreenAlwaysLight;
    NSDate *dtInto;
    int itStayArTime;
    NSDate *dtIntoAr;
    _Bool _blIsNeedBackgrondLocation;
    int _naviFromType;
    int _walkNaviType;
    int _itWalkTypeHighlightIndex;
}

+ (id)getInstance;
@property(nonatomic) int itWalkTypeHighlightIndex; // @synthesize itWalkTypeHighlightIndex=_itWalkTypeHighlightIndex;
@property(nonatomic) int walkNaviType; // @synthesize walkNaviType=_walkNaviType;
@property(nonatomic) _Bool blIsNeedBackgrondLocation; // @synthesize blIsNeedBackgrondLocation=_blIsNeedBackgrondLocation;
@property(nonatomic) int naviFromType; // @synthesize naviFromType=_naviFromType;
@property(nonatomic) _Bool isNaviFinished; // @synthesize isNaviFinished=_isNaviFinished;
@property(nonatomic) _Bool recalculate; // @synthesize recalculate=_recalculate;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int status; // @synthesize status=_status;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)calRotate;
- (void)onChangeToNPCARFromNoamalAR:(id)arg1;
- (void)onChangeToNormalARFromNPCAR;
- (void)onResume;
- (void)onPause;
- (void)setZoomLevel:(float)arg1;
- (float)getRouteDirection;
- (float)getCurCorrectDirection;
- (void)showBaseLayers:(int)arg1;
- (void)setBackgroundColor:(struct _VColor)arg1;
- (void)setCenterPointX:(double)arg1 pointY:(double)arg2;
- (void)enterSharePage;
- (double)getHadNaviDist;
- (void)routePlanDidUserCanceled:(id)arg1;
- (void)routePlanDidFailedWithError:(id)arg1 andUserInfo:(id)arg2;
- (void)routePlanDidFinished:(id)arg1;
- (void)onHandleGPSTips:(id)arg1 Show:(_Bool)arg2;
- (void)initTTSPlayer;
- (void)restoreUserMapLevel;
- (void)saveUserMapLevel;
- (void)calcRoute;
- (void)setInitGPSData;
- (_Bool)checkIsInWalkNavi;
- (void)addDataCollectNaviLength:(int)arg1;
- (void)addDataCollectWhenExit;
- (void)setDataWhenExit;
- (void)exitNavi;
- (void)dealWalkActivityWhenExit;
- (void)stopNavi;
- (_Bool)isGuidancePaused;
- (void)setARInitMainMapStatus;
- (void)addDataCollectIntoNormal;
- (void)restoreNormalWalkModeWithExit:(_Bool)arg1;
- (void)addDataCollectIntoAR;
- (void)hideCustomAR;
- (void)showARCutomView;
- (void)setWalkARMode;
- (void)setNaviMode:(int)arg1 withExit:(_Bool)arg2;
- (void)resumeNavi;
- (void)pauseNavi;
- (void)startNavi;
- (void)setNaviStatusSpin;
- (void)setBrowser:(_Bool)arg1;
- (void)updateNodeLayer;
- (void)updateRouteLayer;
- (void)exitViewAll;
- (void)enterViewAll;
- (void)setCarRotateMode:(_Bool)arg1;
- (void)restoreInCenterOffset;
- (void)showGuideView:(id)arg1;
- (void)carIncenter;
- (void)moveCarToCenterAnimation:(id)arg1;
- (void)cancelIntoAnimation;
- (void)showViewsAfterStatusReady;
- (_Bool)isNaviProcessPageOnTop;
- (void)handleRecoverBaiduMapConfig;
- (void)handleSaveBaiduMapConfig;
- (void)handleBeforeLeaveNaviPage;
- (void)IntoSegmentStatus;
- (void)setCompassFrames;
- (void)handleWalkActivityWhenEnterPage;
- (void)handleBeforeEnterNaviPage;
- (void)handleMapViewEnterForeground;
- (void)handleMapViewEnterBackground;
- (void)handleAppBecomeActive;
- (void)handleAppEnterForeground;
- (void)handleAppEnterBackground;
- (void)handleAppResignActive;
- (void)refreshUIViews:(id)arg1;
- (_Bool)checkMapTouchNeedToResponse;
- (_Bool)checkNeedToResponse;
- (void)reset:(int)arg1;
- (int)getScreenCarYOffset;
- (int)getScreenARCarYOffset;
- (int)getScreenCarXOffset;
- (void)dealloc;
- (id)init;
- (void)updateZoomInoutView;
- (void)returnToViewAll;
- (void)returnToCarPosition;
- (void)cancelAllDelayExecute;
- (void)cancelUpdateNaviRouteNodeLayer;
- (void)autoUpdateNaviRouteNodeLayerLater:(int)arg1;
- (void)cancelSaveUsersMapLevel;
- (void)autoSaveUsersMapLevelLater;
- (void)cancelRefeshZoomInoutButtons;
- (void)autoRefeshZoomInoutButtonsLater:(float)arg1;
- (void)cancelAutoReturnViewAll;
- (void)autoReturnViewAllLater;
- (void)cancelAutoReturnToCarPosition;
- (void)autoReturnToCarPositionLater;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onHandleMoreViewClicked;
- (void)onHandleViewAllViewClicked;
- (void)onHandleMBNoticeTipsViewClicked;
- (void)onHandleCompassClicked;
- (void)onPauseButtonViewClicked;
- (void)onHandleSpeedControlButtonClicked;
- (void)onHandleExitButtonClicked;
- (void)onHandleLocationViewClicked;
- (void)onRecalculateButtonViewClicked;
- (void)setTheMapOffsetOritationZeroBeforeZetToZone;
- (void)resetNaviAndSegmentValuesWhenIntoNavi;
- (_Bool)blResumeToGuideFromMapStatusAndViewAll;
- (void)setResumeToGuideFromMapStatusAndViewAll:(_Bool)arg1;
- (_Bool)blNaviModeToMapStatusBarShouldReturnNavi;
- (void)setNaviModeToMapStatusBarShouldReturnNavi:(_Bool)arg1;
- (_Bool)blNaviModeToSegmentModel;
- (void)setNaviModeToSegmentMode:(_Bool)arg1;
- (int)getCurrentRoadIdBeforeIntoViewAll;
- (void)setCurrentRoadIdBeforeIntoViewAll:(long long)arg1;
- (void)IntoTheLastRoadViewBeforeIntoViewALLFromAlwaylsSegment;
- (void)onHandleAfterStartNavi;
- (void)HideTips;
- (void)onHandleGPSChange:(_Bool)arg1;
- (void)makeLineDistanceInAr;
- (void)onHandleRemainInfoUpdate;
- (void)startDelayExitNavi;
- (void)cancelDelayExitNavi;
- (void)onHandleNaviEnd2;
- (void)handlePanoImageGet;
- (void)onHandleCompassInfoUpdate;
- (void)onHandleReRouteFailed;
- (void)onHandleRerouteEnd;
- (void)onhandleBeginYawing;
- (void)onHandleFarAway;
- (void)handleWalkTypesShowAndHide:(_NE_SimpleMapInfo_t_a3c9ae7e)arg1;
- (void)onHandleSimpleTips;
- (void)setMyCurrentLoationTheCarPoint;
- (void)makeRouteWalkTypeWhenRoutePlanResult;
- (void)onHandleRoutePlanResult;
- (void)onHandleStartNavi;
- (void)delayRefreshScaleView:(id)arg1;
- (void)segmentSwipeToRoadByRoadId:(int)arg1;
- (void)commonDelayExcuteAfterTapAction;
- (void)onHandleScale:(float)arg1;
- (void)onHandleRotate:(float)arg1;
- (void)onHandleOverlook:(float)arg1;
- (void)onHandleFlying;
- (void)onHandleEndTouch;
- (void)onHandleMoveTouch;
- (void)onHandleBeginTouch;
- (void)onHandleNormalPress;
- (void)onHandleLongPress;
- (void)onHandleTwoFignerTap;
- (void)onHandleDoubleTap;
- (void)onHandleSingleTap:(struct CGPoint)arg1;
- (void)FSM_StatusInMap_StatusInMap;
- (void)FSM_StatusInMap_Status3D;
- (void)FSM_StatusInMap_Status2D;
- (void)FSM_StatusInMap_StatusMap;
- (void)FSM_StatusInMap_StatusViewAll;
- (void)FSM_StatusInMap_StatusCalc;
- (void)FSM_StatusInMap_StatusExit;
- (void)FSM_Status3D_StatusInMap;
- (void)FSM_Status3D_Status3D;
- (void)FSM_Status3D_Status2D;
- (void)FSM_Status3D_StatusMap;
- (void)FSM_Status3D_StatusViewAll;
- (void)FSM_Status3D_StatusCalc;
- (void)FSM_Status3D_StatusExit;
- (void)FSM_Status2D_StatusInMap;
- (void)FSM_Status2D_Status3D;
- (void)FSM_Status2D_Status2D;
- (void)FSM_Status2D_StatusMap;
- (void)FSM_Status2D_StatusViewAll;
- (void)FSM_Status2D_StatusCalc;
- (void)FSM_Status2D_StatusExit;
- (void)FSM_StatusMap_StatusInMap;
- (void)FSM_StatusMap_Status3D;
- (void)FSM_StatusMap_Status2D;
- (void)FSM_StatusMap_StatusMap;
- (void)FSM_StatusMap_StatusViewAll;
- (void)FSM_StatusMap_StatusCalc;
- (void)FSM_StatusMap_StatusExit;
- (void)FSM_StatusViewAll_StatusMap;
- (void)FSM_StatusViewAll_StatusInMap;
- (void)FSM_StatusViewAll_Status3D;
- (void)FSM_StatusViewAll_Status2D;
- (void)FSM_StatusViewAll_StatusViewAll;
- (void)FSM_StatusViewAll_StatusCalc;
- (void)FSM_StatusViewAll_StatusExit;
- (void)FSM_StatusReady_StatusInMap;
- (void)FSM_StatusReady_StatusReady;
- (void)FSM_StatusReady_StatusExit;
- (void)FSM_StatusReady_Status3D;
- (void)FSM_StatusReady_Status2D;
- (void)FSM_StatusReady_StatusViewAll;
- (void)FSM_StatusCalc_StatusMap;
- (void)FSM_StatusCalc_StatusInMap;
- (void)FSM_StatusCalc_Status3D;
- (void)FSM_StatusCalc_StatusReady;
- (void)FSM_StatusCalc_StatusCalc;
- (void)FSM_StatusCalc_StatusExit;
- (void)FSM_StatusExit_StatusExit;
- (void)onHandleNaviCarUpdate;
- (void)onHandleNaviNodeUpdate;
- (void)onHandleNaviRouteUpdate;

@end

