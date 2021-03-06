//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMLayerControlBase.h"

#import "NMLayersReportFinishViewDataSource-Protocol.h"
#import "NMLayersReportFinishViewDelegate-Protocol.h"

@class NMLayersReportFinishView, NSString;

@interface NMLayersReportFinishViewControl : NMLayerControlBase <NMLayersReportFinishViewDelegate, NMLayersReportFinishViewDataSource>
{
    _Bool _hasConfig;
    NMLayersReportFinishView *_reportFinishView;
    NSString *_bizUUID;
}

@property(nonatomic) _Bool hasConfig; // @synthesize hasConfig=_hasConfig;
@property(copy, nonatomic) NSString *bizUUID; // @synthesize bizUUID=_bizUUID;
@property(retain, nonatomic) NMLayersReportFinishView *reportFinishView; // @synthesize reportFinishView=_reportFinishView;
- (void).cxx_destruct;
- (id)getBannerItem;
- (void)layersReportFinishViewClose;
- (void)layersReportFinishViewGotoBanner;
@property(readonly, nonatomic) _Bool isReportFinishViewShown;
- (void)unloadView;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

