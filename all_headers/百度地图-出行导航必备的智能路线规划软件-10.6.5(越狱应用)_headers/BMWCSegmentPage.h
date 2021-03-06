//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BMBaseMapLogicalPage.h"

#import "BMBaseControllerDelegate-Protocol.h"

@class BMBusRoute, BMCarRoute, BMWCSegmentView, NSString, UIView;

@interface BMWCSegmentPage : BMBaseMapLogicalPage <BMBaseControllerDelegate>
{
    _Bool _selectPoint;
    _Bool _bShowPOIPannel;
    int _routeType;
    int _busIndex;
    int _sectionIndex;
    long long _segmentIndex;
    BMBusRoute *_busData;
    BMCarRoute *_carData;
    BMWCSegmentView *_segmentView;
    UIView *_bottomView;
    long long _carRouteIndex;
    struct CGRect _currentRect;
}

@property(nonatomic) long long carRouteIndex; // @synthesize carRouteIndex=_carRouteIndex;
@property(nonatomic) _Bool bShowPOIPannel; // @synthesize bShowPOIPannel=_bShowPOIPannel;
@property(nonatomic) struct CGRect currentRect; // @synthesize currentRect=_currentRect;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) BMWCSegmentView *segmentView; // @synthesize segmentView=_segmentView;
@property(retain, nonatomic) BMCarRoute *carData; // @synthesize carData=_carData;
@property(nonatomic) _Bool selectPoint; // @synthesize selectPoint=_selectPoint;
@property(nonatomic) int sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) int busIndex; // @synthesize busIndex=_busIndex;
@property(retain, nonatomic) BMBusRoute *busData; // @synthesize busData=_busData;
@property(nonatomic) long long segmentIndex; // @synthesize segmentIndex=_segmentIndex;
@property(nonatomic) int routeType; // @synthesize routeType=_routeType;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onClickFavOverlay:(id)arg1;
- (void)onClickBackMark:(id)arg1;
- (void)onClickMyLocationButton:(int)arg1;
- (void)onLongTouchMapPress:(struct CGPoint)arg1;
- (void)showSegmentRouteInMap:(id)arg1;
- (void)hideOverlay;
- (void)clearMapLayoutButtonClick:(id)arg1;
- (void)hideOtherPaneView;
- (void)showOtherPaneView;
- (void)onNavigationBackButton;
- (void)pageStop;
- (long long)preferredStatusBarStyle;
- (void)pageCoverStoped;
- (id)pageMapStateSettings;
- (void)pageStart;
- (void)RefreshPageInPageStart;
- (void)pageCreate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

