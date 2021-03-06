//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BMBaseControllerDelegate-Protocol.h"

@class BMRouteController, NSMutableArray, NSString;

@interface BMRoadBookMyDirectlyNavi : NSObject <BMBaseControllerDelegate>
{
    int _startNaviIndex;
    BMRouteController *_routeMapCtrl;
    NSMutableArray *_arrNodes;
    NSMutableArray *_arrPBs;
}

@property(nonatomic) int startNaviIndex; // @synthesize startNaviIndex=_startNaviIndex;
@property(retain, nonatomic) NSMutableArray *arrPBs; // @synthesize arrPBs=_arrPBs;
@property(retain, nonatomic) NSMutableArray *arrNodes; // @synthesize arrNodes=_arrNodes;
@property(retain, nonatomic) BMRouteController *routeMapCtrl; // @synthesize routeMapCtrl=_routeMapCtrl;
- (void).cxx_destruct;
- (int)checkNaviDistanceIsLessThanNaviMin:(id)arg1;
- (_Bool)onGetExceptionInfo:(id)arg1;
- (void)addDataCollectIntoCycleNavi;
- (void)enterCycleNavi;
- (void)onGetCycleRouteResult:(id)arg1;
- (void)searchWithStartNode:(id)arg1 endNode:(id)arg2;
- (_Bool)naviClickWithArrPoilist:(id)arg1 arrRoutes:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

