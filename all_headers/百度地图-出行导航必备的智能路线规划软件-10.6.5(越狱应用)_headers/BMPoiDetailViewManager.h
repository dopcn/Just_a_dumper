//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BMBaseControllerDelegate-Protocol.h"
#import "BMPOIDetailBaseDragMainViewDelegate-Protocol.h"
#import "BMPOIDetailBaseHeaderViewDeleagte-Protocol.h"

@class BMBaseController, BMBaseMapFramePage, BMDetailBaseView, BMDetailDefaultView, BMDetailNoNetView, BMDetailSubwayStationView, BMDragMainView, BMIndoorFloorView, BMMapPoiDetailModel, BMMapPoiModel, BMMapPointUIData, BMPOIDetailBaseActivePartView, BMPOIDetailBaseDragMainView, BMPOIDetailBaseHeaderView, BMSubStationView, NSDictionary, NSMutableDictionary, NSString;
@protocol BMPoiDetailViewManagerDelegate;

@interface BMPoiDetailViewManager : NSObject <BMBaseControllerDelegate, BMPOIDetailBaseDragMainViewDelegate, BMPOIDetailBaseHeaderViewDeleagte>
{
    int _detailViewType;
    int _mapPoiPageType;
    int _jumpType;
    BMBaseMapFramePage *_mapPoiPage;
    id _data;
    id <BMPoiDetailViewManagerDelegate> _managerDelegate;
    BMPOIDetailBaseHeaderView *_baseHeaderView;
    BMPOIDetailBaseActivePartView *_baseActivePartView;
    BMPOIDetailBaseDragMainView *_baseDragMainView;
    BMSubStationView *_subStationView;
    BMDetailDefaultView *_defaultView;
    BMDetailSubwayStationView *_subwayStationView;
    BMDetailBaseView *_detailWebView;
    BMDragMainView *_comMainView;
    BMDetailNoNetView *_noNetView;
    BMIndoorFloorView *_indoorFloorView;
    BMMapPoiDetailModel *_model;
    BMMapPointUIData *_pointUIData;
    BMMapPoiModel *_mapPoiModel;
    NSMutableDictionary *_soucreData;
    BMBaseController *_baseMapCtrl;
    NSString *_lData;
    NSDictionary *_extParams;
    NSString *_lastPoiUid;
}

@property(copy, nonatomic) NSString *lastPoiUid; // @synthesize lastPoiUid=_lastPoiUid;
@property(retain, nonatomic) NSDictionary *extParams; // @synthesize extParams=_extParams;
@property(nonatomic) int jumpType; // @synthesize jumpType=_jumpType;
@property(retain, nonatomic) NSString *lData; // @synthesize lData=_lData;
@property(nonatomic) int mapPoiPageType; // @synthesize mapPoiPageType=_mapPoiPageType;
@property(retain, nonatomic) BMBaseController *baseMapCtrl; // @synthesize baseMapCtrl=_baseMapCtrl;
@property(retain, nonatomic) NSMutableDictionary *soucreData; // @synthesize soucreData=_soucreData;
@property(retain, nonatomic) BMMapPoiModel *mapPoiModel; // @synthesize mapPoiModel=_mapPoiModel;
@property(retain, nonatomic) BMMapPointUIData *pointUIData; // @synthesize pointUIData=_pointUIData;
@property(retain, nonatomic) BMMapPoiDetailModel *model; // @synthesize model=_model;
@property(retain, nonatomic) BMIndoorFloorView *indoorFloorView; // @synthesize indoorFloorView=_indoorFloorView;
@property(retain, nonatomic) BMDetailNoNetView *noNetView; // @synthesize noNetView=_noNetView;
@property(retain, nonatomic) BMDragMainView *comMainView; // @synthesize comMainView=_comMainView;
@property(retain, nonatomic) BMDetailBaseView *detailWebView; // @synthesize detailWebView=_detailWebView;
@property(retain, nonatomic) BMDetailSubwayStationView *subwayStationView; // @synthesize subwayStationView=_subwayStationView;
@property(retain, nonatomic) BMDetailDefaultView *defaultView; // @synthesize defaultView=_defaultView;
@property(retain, nonatomic) BMSubStationView *subStationView; // @synthesize subStationView=_subStationView;
@property(retain, nonatomic) BMPOIDetailBaseDragMainView *baseDragMainView; // @synthesize baseDragMainView=_baseDragMainView;
@property(retain, nonatomic) BMPOIDetailBaseActivePartView *baseActivePartView; // @synthesize baseActivePartView=_baseActivePartView;
@property(retain, nonatomic) BMPOIDetailBaseHeaderView *baseHeaderView; // @synthesize baseHeaderView=_baseHeaderView;
@property(nonatomic) __weak id <BMPoiDetailViewManagerDelegate> managerDelegate; // @synthesize managerDelegate=_managerDelegate;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(nonatomic) __weak BMBaseMapFramePage *mapPoiPage; // @synthesize mapPoiPage=_mapPoiPage;
@property(nonatomic) int detailViewType; // @synthesize detailViewType=_detailViewType;
- (void).cxx_destruct;
- (id)getPoiDetailModel;
- (void)freshUIWithOffset:(struct CGPoint)arg1;
- (void)freshModelWithInfoEntity:(id)arg1;
- (id)getComParams:(id)arg1 withPoiModel:(id)arg2 with:(id)arg3;
- (id)getDetailViewModel:(id)arg1 withPoiModel:(id)arg2 withPageType:(int)arg3 with:(id)arg4;
- (int)getDetailViewType:(id)arg1 withPoiModel:(id)arg2;
- (void)changeMapStatus;
- (id)logParams;
- (id)getDragMainView;
- (void)initDragMainView;
- (id)getActivePartView;
- (void)initActivePartView;
- (id)getHeaderView;
- (void)initHeaderView;
- (_Bool)onGetExceptionInfo:(id)arg1;
- (_Bool)onPOIDetailSearchResult:(id)arg1;
- (void)getNetWorkDetail:(id)arg1;
- (void)getNetWorkDetail;
- (void)freshAllUI:(id)arg1;
- (void)freshAllUI:(id)arg1 withoutActivePartView:(_Bool)arg2;
- (void)freshUIWithModel:(id)arg1 withoutActivePartView:(_Bool)arg2;
- (void)freshUIWithModel:(id)arg1;
- (void)freshPartWebView;
- (void)freshDataWith:(id)arg1 withPoiModel:(id)arg2 withExt:(id)arg3 refreshAlways:(_Bool)arg4;
- (void)freshDataWith:(id)arg1 withPoiModel:(id)arg2 withExt:(id)arg3;
- (void)memoryClean;
- (void)dealloc;
- (void)initData;
- (id)initWithPage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

