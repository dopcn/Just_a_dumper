//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCATRouteDetailBaseController.h"

#import "MCATBusAndMixHelperDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BMCarRoute, BMRouteSearchController, MCATBusAndMixHelper, NSArray, NSString, UITableView;

@interface MCATRouteDetailMixController : MCATRouteDetailBaseController <UITableViewDelegate, UITableViewDataSource, MCATBusAndMixHelperDelegate>
{
    UITableView *_detailTableView;
    BMRouteSearchController *_searchController;
    BMCarRoute *_carRoute;
    NSArray *_waterDropItemDatas;
    NSArray *_bubbleItemDatas;
    MCATBusAndMixHelper *_helper;
}

@property(retain, nonatomic) MCATBusAndMixHelper *helper; // @synthesize helper=_helper;
@property(retain, nonatomic) NSArray *bubbleItemDatas; // @synthesize bubbleItemDatas=_bubbleItemDatas;
@property(retain, nonatomic) NSArray *waterDropItemDatas; // @synthesize waterDropItemDatas=_waterDropItemDatas;
@property(retain, nonatomic) BMCarRoute *carRoute; // @synthesize carRoute=_carRoute;
@property(retain, nonatomic) BMRouteSearchController *searchController; // @synthesize searchController=_searchController;
@property(nonatomic) __weak UITableView *detailTableView; // @synthesize detailTableView=_detailTableView;
- (void).cxx_destruct;
- (id)tableViewImageForScreenShot;
- (id)imageForHeaderView;
- (id)imageForTitleShotScreen;
- (_Bool)shouldCreateForShotScreen;
- (id)imageForShotScreen;
- (id)currentMainView;
- (void)screenshotButtonClicked:(id)arg1;
- (void)feedbackButtonClicked:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct BMPoint)testPoint;
- (id)generateBubbleItemWithNode:(id)arg1 type:(long long)arg2;
- (void)showStationBubble:(_Bool)arg1;
- (void)showStationWaterDrop:(_Bool)arg1;
- (void)showStationItemOverlay:(_Bool)arg1;
- (struct BMRect)busMapBounds;
- (struct BMRect)taxiMapBounds;
- (struct BMRect)mixMapBounds;
- (struct BMRect)routeRect;
- (void)zoomMapWithAnimation:(_Bool)arg1;
- (void)showCarRoute:(id)arg1;
- (void)showBusRoute:(id)arg1;
- (void)showMixRouteOverlay;
- (void)hideDynamicOverlay;
- (void)showDynamicOverlay:(id)arg1 index:(long long)arg2;
- (void)onRecievedCarEntity:(id)arg1;
- (void)searchCarRoute;
- (id)getBusPlan;
- (id)getTaxiPlan;
- (void)parseRouteData;
- (void)dealWithData;
- (void)setRoutePlan:(id)arg1;
- (Class)contentViewClass;
- (Class)headerViewClass;
- (void)loadRouteDetail;
- (void)routeDidHide;
- (void)routeWillHide;
- (void)routeDidShow;
- (void)routeWillShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

