//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTPage.h"

#import "ONESBaseMapEntranceDelegate-Protocol.h"
#import "SAirportComProtocol-Protocol.h"
#import "SBottomContainerViewDelegate-Protocol.h"
#import "SBubbleWaitResponeComProtocol-Protocol.h"
#import "SBulletinBoardsCallback-Protocol.h"
#import "SCancelOrderComDelegate-Protocol.h"
#import "SMapDelegate-Protocol.h"
#import "SOrderActComDelegate-Protocol.h"
#import "SOrderComDelegate-Protocol.h"
#import "SOrderHookDelegate-Protocol.h"
#import "SResetPosComProtocol-Protocol.h"
#import "SSInServiceBubbleComProtocol-Protocol.h"
#import "SSmoothMoveComDelegate-Protocol.h"
#import "SStationInfoComDelegate-Protocol.h"
#import "STipFeeComDelegate-Protocol.h"
#import "XPDomesticPanelViewControllerDataSource-Protocol.h"

@class NSString, ONESBasePointAnnotation, SAddressNavCom, SAirportCom, SBaseWebCom, SBicycleNumberCom, SBubbleWaitResponeCom, SBulletinBoardsCom, SCancelOrderCom, SGuideCom, SLockCom, SMapBizCom, SMapButtonCom, SMapLineCom, SMapRegionCom, SNewDriverCarInfoCardCom, SOperationCardCom, SOrderActCom, SOrderCom, SPickBymeterCom, SPosMarkerCom, SReservationCardCom, SResetPosCom, SSInServiceBubbleCom, SSmoothMoveCom, SStationInfoCom, STipFeeCom, SUnlockLoadingCom, SWatchCommunicateCom;

@interface SWaitRspPage : SPTPage <SCancelOrderComDelegate, SMapDelegate, SOrderActComDelegate, SResetPosComProtocol, SAirportComProtocol, SBulletinBoardsCallback, SSmoothMoveComDelegate, SStationInfoComDelegate, SBottomContainerViewDelegate, STipFeeComDelegate, SOrderComDelegate, SBubbleWaitResponeComProtocol, SOrderHookDelegate, SSInServiceBubbleComProtocol, ONESBaseMapEntranceDelegate, XPDomesticPanelViewControllerDataSource>
{
    SBulletinBoardsCom *_bbCom;
    SPickBymeterCom *_pickBymeterCom;
    SWatchCommunicateCom *_watchCommunicateCom;
    SPosMarkerCom *_posMarkerCom;
    SSmoothMoveCom *_smoothMoveCom;
    SResetPosCom *_resetPosCom;
    STipFeeCom *_tipFeeCom;
    SOrderActCom *_orderActCom;
    SReservationCardCom *_reservationCardCom;
    SCancelOrderCom *_cancelOrderCom;
    SBubbleWaitResponeCom *_bubbleWaitResponeCom;
    ONESBasePointAnnotation *_waitAnno;
    SMapLineCom *_mapLineCom;
    SMapBizCom *_mapBizCom;
    SAirportCom *_airportCom;
    SOrderCom *_orderCom;
    SGuideCom *_guideCom;
    SBaseWebCom *_webCom;
    SLockCom *_lockCom;
    SMapButtonCom *_mapButtonCom;
    SStationInfoCom *_stationInfoCom;
    SBicycleNumberCom *_bicycleNumberCom;
    SOperationCardCom *_operationCardCom;
    SUnlockLoadingCom *_unlockLoadingCom;
    SMapRegionCom *_mapRegionCom;
    SNewDriverCarInfoCardCom *_nDriverInfoCom;
    SAddressNavCom *_addressNavCom;
    SSInServiceBubbleCom *_bubbleCom;
    struct CGRect _visibleFrame;
}

@property(retain, nonatomic) SSInServiceBubbleCom *bubbleCom; // @synthesize bubbleCom=_bubbleCom;
@property(retain, nonatomic) SAddressNavCom *addressNavCom; // @synthesize addressNavCom=_addressNavCom;
@property(retain, nonatomic) SNewDriverCarInfoCardCom *nDriverInfoCom; // @synthesize nDriverInfoCom=_nDriverInfoCom;
@property(retain, nonatomic) SMapRegionCom *mapRegionCom; // @synthesize mapRegionCom=_mapRegionCom;
@property(retain, nonatomic) SUnlockLoadingCom *unlockLoadingCom; // @synthesize unlockLoadingCom=_unlockLoadingCom;
@property(retain, nonatomic) SOperationCardCom *operationCardCom; // @synthesize operationCardCom=_operationCardCom;
@property(retain, nonatomic) SBicycleNumberCom *bicycleNumberCom; // @synthesize bicycleNumberCom=_bicycleNumberCom;
@property(retain, nonatomic) SStationInfoCom *stationInfoCom; // @synthesize stationInfoCom=_stationInfoCom;
@property(retain, nonatomic) SMapButtonCom *mapButtonCom; // @synthesize mapButtonCom=_mapButtonCom;
@property(retain, nonatomic) SLockCom *lockCom; // @synthesize lockCom=_lockCom;
@property(retain, nonatomic) SBaseWebCom *webCom; // @synthesize webCom=_webCom;
@property(retain, nonatomic) SGuideCom *guideCom; // @synthesize guideCom=_guideCom;
@property(retain, nonatomic) SOrderCom *orderCom; // @synthesize orderCom=_orderCom;
@property(retain, nonatomic) SAirportCom *airportCom; // @synthesize airportCom=_airportCom;
@property(retain, nonatomic) SMapBizCom *mapBizCom; // @synthesize mapBizCom=_mapBizCom;
@property(retain, nonatomic) SMapLineCom *mapLineCom; // @synthesize mapLineCom=_mapLineCom;
@property(retain, nonatomic) ONESBasePointAnnotation *waitAnno; // @synthesize waitAnno=_waitAnno;
@property(retain, nonatomic) SBubbleWaitResponeCom *bubbleWaitResponeCom; // @synthesize bubbleWaitResponeCom=_bubbleWaitResponeCom;
@property(retain, nonatomic) SCancelOrderCom *cancelOrderCom; // @synthesize cancelOrderCom=_cancelOrderCom;
@property(retain, nonatomic) SReservationCardCom *reservationCardCom; // @synthesize reservationCardCom=_reservationCardCom;
@property(retain, nonatomic) SOrderActCom *orderActCom; // @synthesize orderActCom=_orderActCom;
@property(retain, nonatomic) STipFeeCom *tipFeeCom; // @synthesize tipFeeCom=_tipFeeCom;
@property(retain, nonatomic) SResetPosCom *resetPosCom; // @synthesize resetPosCom=_resetPosCom;
@property(retain, nonatomic) SSmoothMoveCom *smoothMoveCom; // @synthesize smoothMoveCom=_smoothMoveCom;
@property(retain, nonatomic) SPosMarkerCom *posMarkerCom; // @synthesize posMarkerCom=_posMarkerCom;
@property(retain, nonatomic) SWatchCommunicateCom *watchCommunicateCom; // @synthesize watchCommunicateCom=_watchCommunicateCom;
@property(retain, nonatomic) SPickBymeterCom *pickBymeterCom; // @synthesize pickBymeterCom=_pickBymeterCom;
@property(retain, nonatomic) SBulletinBoardsCom *bbCom; // @synthesize bbCom=_bbCom;
@property(nonatomic) struct CGRect visibleFrame; // @synthesize visibleFrame=_visibleFrame;
- (void).cxx_destruct;
- (void)resetMapButtonBottom:(double)arg1;
- (void)resetLocationButtonBottom:(double)arg1;
- (void)panelViewController:(id)arg1 topMarginRectDidChange:(struct CGRect)arg2;
- (void)operationCardComDidLoadAllViewModels:(id)arg1;
- (void)unhookOrderStatus:(id)arg1;
- (void)hookOrderStatus:(id)arg1 forObject:(id)arg2;
- (void)mapEntrance:(id)arg1 regionWillChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (_Bool)prefersStatusBarHidden;
- (void)containerView:(id)arg1 didTransferToHeight:(double)arg2 gesture:(_Bool)arg3;
- (void)containerView:(id)arg1 willTransferToHeight:(double)arg2 duration:(double)arg3 gesture:(_Bool)arg4;
- (_Bool)containerViewCanSwitchExpand:(id)arg1;
- (id)viewSourcesForContainerView:(id)arg1;
- (void)refreshBubbleForMapEntrance:(id)arg1;
- (void)mainPageNavDisplayStatusChange:(_Bool)arg1;
- (void)initNavigationView;
- (void)tipCom:(id)arg1 upToServiceIsSuccess:(_Bool)arg2;
- (_Bool)isNeedRequsetServiceForCom:(id)arg1;
- (void)tipCom:(id)arg1 selectedPrice:(id)arg2 atIndexRow:(long long)arg3 needEstimate:(_Bool)arg4;
- (struct CGRect)viewFrameForComponent:(id)arg1;
- (id)viewContainerForComponent:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)reloadBubbleDispalyView;
- (void)reloadBubbleView;
- (id)comConfig:(long long)arg1;
- (id)createCom:(long long)arg1;
- (void)orderStatusChange:(id)arg1 continue:(CDUnknownBlockType)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (void)autoCreateOrderSuccess:(id)arg1;
- (void)resendOrderSuccess:(id)arg1;
- (void)cancelOrderRequestFailure:(id)arg1 error:(id)arg2;
- (void)cancelOrderRequestSuccess:(id)arg1 responseModel:(id)arg2;
- (struct UIEdgeInsets)getMapVisibleRectEdgeInsetsForResetPosCom:(id)arg1;
- (void)reloadMapRouts:(id)arg1;
- (void)orderActCom:(id)arg1 didClickItemWithType:(long long)arg2;
- (long long)posMarkerWaitResponePageStatus:(id)arg1;
- (void)component:(id)arg1 willUseOtherRestPosCom:(long long)arg2;
- (id)annotationsWithBizType:(long long)arg1;
- (void)locationButtonClickForresetPosCom:(id)arg1;
- (id)getONESBaseMapEntranceForSResetPosCom:(id)arg1;
- (_Bool)needHandleFlight;
- (void)waitResponseComRequestGuideInfo:(id)arg1 guideType:(struct NSString *)arg2;
- (long long)SBubbleWaitResponePageStatus:(id)arg1;
- (void)removeBulletinBoards:(id)arg1;
- (void)updateNewBulletinBoards:(id)arg1;
- (void)addNewBulletinBoards:(id)arg1;
- (void)changedMainBulletinBoards:(id)arg1;
- (void)bulletinBoards:(id)arg1 didBBFrameChanged:(struct CGRect)arg2 isOpened:(_Bool)arg3 isSupportHandle:(_Bool)arg4;
- (id)bulletinBoards:(id)arg1 belowViewForViewContainer:(id)arg2;
- (void)openWebViewWithURLStr:(id)arg1 cardID:(id)arg2 params:(id)arg3;
- (void)bulletinBoards:(id)arg1 timerAndBizCallbackByConf:(id)arg2 actionType:(long long)arg3 targetURL:(id)arg4 extenralParams:(id)arg5;
- (void)bulletinBoards:(id)arg1 clickedCard:(id)arg2 actBtnAtIndex:(long long)arg3 actionType:(long long)arg4 targetURL:(id)arg5 extenralParams:(id)arg6;
- (long long)smoothMoveComWaitResponseStatus:(id)arg1;
- (void)driverAnnotationDidUpdateInSmoothMoveCom:(id)arg1;
- (void)dataDidUpdateInSmoothMoveCom:(id)arg1;
- (id)mapEntranceForSmoothMoveCom:(id)arg1;
- (void)orderComShowOrderBusGuideView:(id)arg1 animated:(_Bool)arg2;
- (void)reloadOrderActCom:(id)arg1;
- (void)orderComMatchedGuideInfoToCarPool:(id)arg1;
- (void)orderComReservationStatusChange:(id)arg1 status:(long long)arg2;
- (void)clearStationRadarView;
- (void)unlockLoadingResult:(id)arg1;
- (_Bool)panelViewController:(id)arg1 shouldTapHalfRevealCardViewForExpanding:(id)arg2;
- (id)accessoryCardViewsInPanelViewController:(id)arg1;
- (id)mainCardViewsInPanelViewController:(id)arg1;
- (void)configureXpanel;
- (id)currentConfiguration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

