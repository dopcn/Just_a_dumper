//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MCRCSceneControllerDelegate-Protocol.h"

@class BMMapView, MCRCAgreementView, MCRCOverlayControl, MCRCProgressOrderTipsCard, MCRCRecommendStopModel, MCRCRouteModel, MCRCScene, MCVCOrderServiceController, NSArray, NSDictionary, NSString, UIView;

@interface MCRCSceneController : NSObject <MCRCSceneControllerDelegate>
{
    _Bool _pageIsShow;
    _Bool _startOrEndPlaceDidChanged;
    MCRCAgreementView *_agreementView;
    NSArray *_recommendStops;
    MCRCRecommendStopModel *_selectedRecommendModel;
    MCRCProgressOrderTipsCard *_progressHintCard;
    MCRCScene *_scene;
    MCRCOverlayControl *_overlayControl;
    MCRCRecommendStopModel *_recommendEndStopModel;
    MCVCOrderServiceController *_mcvcOrderServiceController;
}

@property(retain, nonatomic) MCVCOrderServiceController *mcvcOrderServiceController; // @synthesize mcvcOrderServiceController=_mcvcOrderServiceController;
@property(retain, nonatomic) MCRCRecommendStopModel *recommendEndStopModel; // @synthesize recommendEndStopModel=_recommendEndStopModel;
@property(retain, nonatomic) MCRCOverlayControl *overlayControl; // @synthesize overlayControl=_overlayControl;
@property(nonatomic) _Bool startOrEndPlaceDidChanged; // @synthesize startOrEndPlaceDidChanged=_startOrEndPlaceDidChanged;
@property(nonatomic) _Bool pageIsShow; // @synthesize pageIsShow=_pageIsShow;
@property(readonly, nonatomic) __weak MCRCScene *scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) MCRCProgressOrderTipsCard *progressHintCard; // @synthesize progressHintCard=_progressHintCard;
@property(readonly, nonatomic) MCRCRecommendStopModel *selectedRecommendModel; // @synthesize selectedRecommendModel=_selectedRecommendModel;
@property(retain, nonatomic) NSArray *recommendStops; // @synthesize recommendStops=_recommendStops;
- (void).cxx_destruct;
- (void)tryShowRecommendEndView;
- (void)requestRecommendEndPoints;
- (_Bool)isSameStartAndEndOverlay:(id)arg1 endItemData:(id)arg2;
- (void)hideActivityView;
@property(readonly, nonatomic) struct CGRect promotionBarFrame;
- (void)tryReverseLocation;
- (struct BMPoint)mapCenterOffsetPoint;
- (struct BMPoint)mapCenterWithOffsetPoint:(struct BMPoint)arg1;
@property(readonly, nonatomic) MCRCRouteModel *routeModel;
- (void)bringTopCardToFront;
@property(nonatomic) _Bool shouldShowEstimateBubbleViewDelay;
@property(readonly, nonatomic) _Bool didShowFromSwitchTabInScene;
@property(readonly, nonatomic) _Bool shouldShowAnimation;
- (void)updateLocationViewPosition:(struct CGPoint)arg1;
- (void)changeActivityButtonAlpha:(double)arg1;
- (void)showPersonalCenterRedDot:(_Bool)arg1;
- (void)updatePersonCenterTitle:(id)arg1;
@property(readonly, nonatomic) struct CGRect moduleCardFrame;
- (struct CGPoint)mapCenterForBubbleView;
- (void)changeOriDesPress;
- (void)poiSelectedInfo:(_Bool)arg1 name:(id)arg2 point:(struct BMPoint)arg3;
@property(readonly, nonatomic) BMMapView *mapView;
@property(readonly, nonatomic) UIView *paneView;
@property(readonly, nonatomic) UIView *view;
@property(readonly, nonatomic) MCRCAgreementView *agreementView; // @synthesize agreementView=_agreementView;
- (void)hideProgressOrderBannerCard;
- (void)showProgressOrderBannerCard:(id)arg1 progressOrderBlock:(CDUnknownBlockType)arg2;
- (id)progressOrderTipsCardClassName;
- (void)loadRouteFromRouteModel;
- (void)startOrEndPlaceDidChange;
- (void)loadRecommendStops;
- (void)showRecommendStops:(id)arg1;
- (void)mapViewEndMove;
- (void)mapViewBeginMove;
- (void)selectRecommendStopModel:(id)arg1;
- (void)componentChannelPageCenterMovedToPoint:(struct BMPoint)arg1;
- (_Bool)isInvalidatePageState;
@property(readonly, nonatomic) NSDictionary *userInfo;
- (void)moveMapViewToCenterWithPoint:(struct BMPoint)arg1;
- (void)readRouteInfoFromUserInfo;
- (void)componentUpdateRouteInfoFromUserInfo;
- (void)hideModuleCard;
- (void)showModuleCard;
- (void)hidePromotionBanner;
- (void)showPromotionBanner:(id)arg1 touchBlock:(CDUnknownBlockType)arg2;
- (id)componentBottomCard;
- (_Bool)componentIsShowStartAndEndOverlay;
- (_Bool)componentShouldAutomaticPopActivityView;
- (_Bool)componentExistingProgressOrder;
- (_Bool)componentDidHandleBackAaction;
- (void)mainBottomCardTopChanged;
- (void)componentDidDestory;
- (void)componentDidHide;
- (void)componentWillHide;
- (void)componentDidShow;
- (void)componentWillShow;
- (void)componentDidCreate;
- (id)initWithScene:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

