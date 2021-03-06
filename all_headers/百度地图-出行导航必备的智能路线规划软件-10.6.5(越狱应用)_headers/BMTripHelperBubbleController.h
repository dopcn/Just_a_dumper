//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BMTHScenicBubble, BMTripHelperBubble, BMTripHelperBubbleModel, MapView, NSString, UIButton;

@interface BMTripHelperBubbleController : NSObject
{
    _Bool _hiddenBubble;
    _Bool _isFold;
    _Bool _isFirst;
    _Bool _duerHeplerIsShow;
    _Bool _isInit;
    BMTripHelperBubbleModel *_bubbleModel;
    MapView *_mapView;
    UIButton *_prettyBubble;
    BMTripHelperBubble *_tripBubble;
    BMTHScenicBubble *_scenicBubble;
    double _lastRequestTime;
    double _lastListRequestTime;
    NSString *_tripId;
    struct BMPoint _lastRequestPt;
}

@property(nonatomic) _Bool isInit; // @synthesize isInit=_isInit;
@property(nonatomic) _Bool duerHeplerIsShow; // @synthesize duerHeplerIsShow=_duerHeplerIsShow;
@property(retain, nonatomic) NSString *tripId; // @synthesize tripId=_tripId;
@property(nonatomic) double lastListRequestTime; // @synthesize lastListRequestTime=_lastListRequestTime;
@property(nonatomic) struct BMPoint lastRequestPt; // @synthesize lastRequestPt=_lastRequestPt;
@property(nonatomic) double lastRequestTime; // @synthesize lastRequestTime=_lastRequestTime;
@property(nonatomic) _Bool isFirst; // @synthesize isFirst=_isFirst;
@property(retain, nonatomic) BMTHScenicBubble *scenicBubble; // @synthesize scenicBubble=_scenicBubble;
@property(retain, nonatomic) BMTripHelperBubble *tripBubble; // @synthesize tripBubble=_tripBubble;
@property(retain, nonatomic) UIButton *prettyBubble; // @synthesize prettyBubble=_prettyBubble;
@property(retain, nonatomic) MapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) BMTripHelperBubbleModel *bubbleModel; // @synthesize bubbleModel=_bubbleModel;
@property(readonly, nonatomic) _Bool isFold; // @synthesize isFold=_isFold;
@property(nonatomic) _Bool hiddenBubble; // @synthesize hiddenBubble=_hiddenBubble;
- (void).cxx_destruct;
- (void)getHiddenBubbleNotification:(id)arg1;
- (void)refreshTripListForDynamicLayer;
- (id)logParams:(long long)arg1;
- (void)foldTripBubble:(_Bool)arg1;
- (void)updateLocation:(struct CGPoint)arg1;
- (void)refreshTripBubbleData:(CDUnknownBlockType)arg1;
- (void)hideBubble:(_Bool)arg1;
- (void)onRecieveNotification:(id)arg1;
- (void)unRegisterNotifications;
- (void)registerNotifications;
- (void)onDelayDestroyBubble;
- (void)onDelayRequest;
- (void)presetDestroyBubble;
- (void)presetRequestBubbleData;
- (_Bool)isNeedRefreshBubbleData;
- (void)onBtnPressed:(id)arg1;
- (void)showAlertView;
- (void)destroyBubble;
- (void)setupBubble:(id)arg1 with:(long long)arg2;
- (void)reloadBubbleView;
- (void)onCreate;
- (void)dealloc;
- (id)initWithMapView:(id)arg1;

@end

