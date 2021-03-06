//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTMBaseViewControl.h"

#import "NMPoiDetailWebViewDelegate-Protocol.h"

@class LTMBusPathManager, MPSQueryPoiData, NMPoiDetailWebView, NMSubwayWebView, NSString;

@interface LTMMetroMapViewControl : LTMBaseViewControl <NMPoiDetailWebViewDelegate>
{
    NMSubwayWebView *_subwayWebView;
    MPSQueryPoiData *_detailWebViewpoiData;
    NSString *_subwayCurCityName;
    NSString *_urlString;
    LTMBusPathManager *_busPathManager;
    NMPoiDetailWebView *_subWayDetailsView;
}

@property(retain, nonatomic) NMPoiDetailWebView *subWayDetailsView; // @synthesize subWayDetailsView=_subWayDetailsView;
@property(nonatomic) __weak LTMBusPathManager *busPathManager; // @synthesize busPathManager=_busPathManager;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(copy, nonatomic) NSString *subwayCurCityName; // @synthesize subwayCurCityName=_subwayCurCityName;
@property(retain, nonatomic) MPSQueryPoiData *detailWebViewpoiData; // @synthesize detailWebViewpoiData=_detailWebViewpoiData;
@property(retain, nonatomic) NMSubwayWebView *subwayWebView; // @synthesize subwayWebView=_subwayWebView;
- (void).cxx_destruct;
- (void)refreshFavoritePoiData:(id)arg1;
- (long long)getFromManagerId;
- (_Bool)onShowOnMap:(id)arg1;
- (void)goBackAction:(id)arg1;
- (void)clearMainWebView;
- (void)clearDetailWebView;
- (void)showSubwayDetailView;
- (id)getDetailWebPoi;
- (void)showDetailWithPathData:(id)arg1 startPoiDic:(id)arg2 endPoiDic:(id)arg3;
- (void)setDetailWebPoi:(id)arg1 isFullDetail:(_Bool)arg2;
- (void)goBack;
- (void)setParams:(id)arg1;
- (void)showAnimated:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

