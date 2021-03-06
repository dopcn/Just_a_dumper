//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ONESBaseMapEntranceDelegate-Protocol.h"
#import "ONESelectAddressMapPoiStepMachineDelegate-Protocol.h"

@class NSDate, NSMutableArray, NSString, ONESBaseMapEntrance, ONESelectAddressMapPoiPinView, ONESelectAddressMapPoiStepMachine, TKPBSelectAddressConfig, UIPanGestureRecognizer;
@protocol ONESelectAddressMapPoiBusinessDelegate;

@interface ONESelectAddressMapPoiBussiness : NSObject <ONESBaseMapEntranceDelegate, ONESelectAddressMapPoiStepMachineDelegate>
{
    _Bool _isPanGesture;
    _Bool _isChanged;
    _Bool _isRegionDidChange;
    _Bool _hasResignActive;
    _Bool _hasEnterBackground;
    ONESBaseMapEntrance *_mapEntrance;
    id <ONESelectAddressMapPoiBusinessDelegate> _delegate;
    unsigned long long _sessionId;
    NSMutableArray *_machineArray;
    UIPanGestureRecognizer *_panGesture;
    CDUnknownBlockType _completion;
    long long _lastNetworkStatus;
    unsigned long long _eventType;
    NSDate *_enterBackgroundDate;
    NSDate *_enterForegroundDate;
    ONESelectAddressMapPoiPinView *_pinView;
    NSDate *_panBeginDate;
    NSDate *_tapDate;
    ONESelectAddressMapPoiStepMachine *_lastMachine;
    TKPBSelectAddressConfig *_themeConfig;
}

@property(retain, nonatomic) TKPBSelectAddressConfig *themeConfig; // @synthesize themeConfig=_themeConfig;
@property(retain, nonatomic) ONESelectAddressMapPoiStepMachine *lastMachine; // @synthesize lastMachine=_lastMachine;
@property(retain, nonatomic) NSDate *tapDate; // @synthesize tapDate=_tapDate;
@property(retain, nonatomic) NSDate *panBeginDate; // @synthesize panBeginDate=_panBeginDate;
@property(retain, nonatomic) ONESelectAddressMapPoiPinView *pinView; // @synthesize pinView=_pinView;
@property(retain, nonatomic) NSDate *enterForegroundDate; // @synthesize enterForegroundDate=_enterForegroundDate;
@property(retain, nonatomic) NSDate *enterBackgroundDate; // @synthesize enterBackgroundDate=_enterBackgroundDate;
@property(nonatomic) _Bool hasEnterBackground; // @synthesize hasEnterBackground=_hasEnterBackground;
@property(nonatomic) _Bool hasResignActive; // @synthesize hasResignActive=_hasResignActive;
@property(nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
@property(nonatomic) long long lastNetworkStatus; // @synthesize lastNetworkStatus=_lastNetworkStatus;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(nonatomic) _Bool isRegionDidChange; // @synthesize isRegionDidChange=_isRegionDidChange;
@property(nonatomic) _Bool isChanged; // @synthesize isChanged=_isChanged;
@property(nonatomic) _Bool isPanGesture; // @synthesize isPanGesture=_isPanGesture;
@property(retain, nonatomic) NSMutableArray *machineArray; // @synthesize machineArray=_machineArray;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) id <ONESelectAddressMapPoiBusinessDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak ONESBaseMapEntrance *mapEntrance; // @synthesize mapEntrance=_mapEntrance;
- (void).cxx_destruct;
- (_Bool)isValidCoor:(struct CLLocationCoordinate2D)arg1;
- (void)syncUserDefaults:(id)arg1 forKey:(id)arg2;
- (_Bool)userDefaultsBoolForKey:(id)arg1;
- (_Bool)isDistanceFromCoor:(struct CLLocationCoordinate2D)arg1 toCoor:(struct CLLocationCoordinate2D)arg2 inMeter:(long long)arg3;
- (_Bool)isDistanceIn_1M_FromCoor:(struct CLLocationCoordinate2D)arg1 toCoor:(struct CLLocationCoordinate2D)arg2;
- (void)regionDidChange;
- (void)regionWillChange;
- (void)mapEntrance:(id)arg1 languageDidChanged:(unsigned long long)arg2;
- (void)reverseGEOWithStartEGO:(_Bool)arg1 withCoord:(struct CLLocationCoordinate2D)arg2 isNeedLevel:(_Bool)arg3;
- (void)setMapCenter:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
- (struct CLLocationCoordinate2D)annotationValidateCoor:(struct CLLocationCoordinate2D)arg1;
- (void)updateCurrentOnPosition:(struct CLLocationCoordinate2D)arg1;
- (id)defaultDescription:(struct CLLocationCoordinate2D)arg1;
- (void)handlePanGestureWithReverseGeo:(_Bool)arg1 isPan:(_Bool)arg2;
- (void)panEvent:(id)arg1;
- (void)removeGesture;
- (void)addGesture;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)moveToCoordinate:(struct CLLocationCoordinate2D)arg1 animation:(_Bool)arg2 withEntity:(id)arg3;
- (double)getDistanceFromPoint:(struct CGPoint)arg1 otherPoint:(struct CGPoint)arg2;
- (void)ONEMapPoiStepMachineDelegateEnd:(id)arg1;
- (void)ONEMapPoiStepMachineDelegateAttachNearest:(id)arg1;
- (void)ONEMapPoiStepMachineDelegateShowHotPlace:(id)arg1;
- (void)ONEMapPoiStepMachineDelegateUpdateAddr:(id)arg1;
- (void)doRequestReverseGEOSuccess:(id)arg1 machine:(id)arg2 reverseComplete:(CDUnknownBlockType)arg3;
- (void)ONEMapPoiStepMachineDelegateReverseGeo:(id)arg1 reverseComplete:(CDUnknownBlockType)arg2;
- (_Bool)ONEMapPoiStepMachineDelegateNeedReverseGeo:(id)arg1;
- (void)startJumpAnimated:(id)arg1;
- (void)ONEMapPoiStepMachineDelegatePinJump:(id)arg1 jumpComplete:(CDUnknownBlockType)arg2;
- (_Bool)ONEMapPoiStepMachineDelegateIsValid:(id)arg1;
- (void)mapEntranceRegionWillChangeAtPanGesture:(id)arg1;
- (void)mapEntranceSingleTouchSingleTapGesture:(id)arg1;
- (void)mapEntrance:(id)arg1 regionDidChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapEntrance:(id)arg1 regionWillChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)updateUserGuideConfigX;
- (void)updateCurrentPositionContentX:(id)arg1;
- (void)updateCurrentPositionCoordinateX:(struct CLLocationCoordinate2D)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)removeNotification;
- (void)addNotification;
- (void)pinViewEndMoving;
- (void)pinViewMoving;
- (void)hidePinView;
- (void)showPinView;
- (void)handleAppBecomeActive;
- (void)handleAppEnterForeground;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)stop;
- (void)start;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)dealloc;
- (id)initWithMapEntrance:(id)arg1 config:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

