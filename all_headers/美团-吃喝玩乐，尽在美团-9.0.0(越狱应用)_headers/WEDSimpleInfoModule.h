//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseModule.h"

@class GCBaseMarginCell, GCMerchantSimpleInfoCell, NVModelBaseWeddingShopInfo, WEDCoverPicTagsView, WEDSimpleInfoViewModel;

@interface WEDSimpleInfoModule : GCBaseModule
{
    long long _shopId;
    NVModelBaseWeddingShopInfo *_shopInfo;
    GCMerchantSimpleInfoCell *_cellForSimpleInfo;
    GCBaseMarginCell *_cellForShopTags;
    WEDCoverPicTagsView *_shopTagsView;
}

@property(retain, nonatomic) WEDCoverPicTagsView *shopTagsView; // @synthesize shopTagsView=_shopTagsView;
@property(retain, nonatomic) GCBaseMarginCell *cellForShopTags; // @synthesize cellForShopTags=_cellForShopTags;
@property(retain, nonatomic) GCMerchantSimpleInfoCell *cellForSimpleInfo; // @synthesize cellForSimpleInfo=_cellForSimpleInfo;
@property(retain, nonatomic) NVModelBaseWeddingShopInfo *shopInfo; // @synthesize shopInfo=_shopInfo;
@property(nonatomic) long long shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupCells;
- (void)setupModule;
- (_Bool)shouldShow;
- (id)gc_mge_info;
- (_Bool)needAutoModuleView;

// Remaining properties
@property(retain, nonatomic) WEDSimpleInfoViewModel *viewModel; // @dynamic viewModel;

@end

