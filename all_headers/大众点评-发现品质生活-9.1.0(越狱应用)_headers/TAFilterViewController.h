//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseFilterViewController.h"

#import "NVBaseFilterItemDelegate-Protocol.h"
#import "NVFilterViewDelegate-Protocol.h"

@class NSString, TAFilterController, TAShopListDataEntity;

@interface TAFilterViewController : NVBaseFilterViewController <NVFilterViewDelegate, NVBaseFilterItemDelegate>
{
    _Bool _notCheckCategoryBelongs;
    TAShopListDataEntity *_dataEntity;
    TAFilterController *_filterView;
}

@property(retain, nonatomic) TAFilterController *filterView; // @synthesize filterView=_filterView;
@property(nonatomic) _Bool notCheckCategoryBelongs; // @synthesize notCheckCategoryBelongs=_notCheckCategoryBelongs;
@property(retain, nonatomic) TAShopListDataEntity *dataEntity; // @synthesize dataEntity=_dataEntity;
- (void).cxx_destruct;
- (void)didFilterSelected:(long long)arg1 withData:(id)arg2;
- (void)filterView:(id)arg1 touchedFilter:(long long)arg2 filterNeedsOn:(_Bool)arg3;
- (void)refreshData;
- (void)updateFilterItemsTitle;
- (id)itemWithFilterType:(long long)arg1;
- (id)createMultiFilterItem;
- (id)createSortFilterItem;
- (id)createCategoryFilterItem;
- (void)viewDidLoad;
- (void)dealloc;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

