//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMBaseMapComponentView.h"

#import "NMCarRestrictTabViewDelegate-Protocol.h"
#import "NMRestrictFilterViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AMAOSCarRestictCityInfo, LTMTaxiGuideEntranceView, LTMTip, NMCarRestrictLodingView, NMCarRestrictTabView, NMRestrictFilterView, NMShadowTableView, NSArray, NSIndexPath, NSMutableDictionary, NSString, UIImageView, UIView;
@protocol NMCarRestrictListDataSource, NMCarRestrictListDelegate;

@interface NMCarRestrictListView : NMBaseMapComponentView <NMCarRestrictTabViewDelegate, UITableViewDelegate, UITableViewDataSource, NMRestrictFilterViewDelegate>
{
    NMCarRestrictTabView *_headTabView;
    NMShadowTableView *_restrictTable;
    NMCarRestrictLodingView *_loadingView;
    NSArray *_restrictRules;
    NSMutableDictionary *_restrictCellContexts;
    AMAOSCarRestictCityInfo *_currentCityInfo;
    NSArray *_sortedCityInfos;
    NSIndexPath *_displayIndexPath;
    UIView *_top;
    UIView *_bottom;
    _Bool _isAnimation;
    UIView *_tableFootView;
    double _scrolViewOffsetY;
    UIImageView *_selectedFlagView;
    _Bool _forBiddenShowTaxiEntrance;
    id <NMCarRestrictListDataSource> _dataSource;
    id <NMCarRestrictListDelegate> _delegate;
    NMRestrictFilterView *_filterView;
    LTMTip *_setCarPlateTip;
    LTMTaxiGuideEntranceView *_taxiGuideEntrance;
}

@property(nonatomic) _Bool forBiddenShowTaxiEntrance; // @synthesize forBiddenShowTaxiEntrance=_forBiddenShowTaxiEntrance;
@property(retain, nonatomic) LTMTaxiGuideEntranceView *taxiGuideEntrance; // @synthesize taxiGuideEntrance=_taxiGuideEntrance;
@property(retain, nonatomic) LTMTip *setCarPlateTip; // @synthesize setCarPlateTip=_setCarPlateTip;
@property(retain, nonatomic) NMRestrictFilterView *filterView; // @synthesize filterView=_filterView;
@property(nonatomic) __weak id <NMCarRestrictListDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <NMCarRestrictListDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)callTaxiAction;
- (void)closeTaxiEntrancAction;
- (_Bool)checkShouldShowTaxiEntrance;
- (void)setPlateNum;
- (void)disMissFilterView;
- (id)belowIndexPaths;
- (id)calculateBelowNeayByIndexPath:(double *)arg1;
- (_Bool)isRectFullCovert:(struct CGRect)arg1;
- (id)calculateAboveNearByIndexPath:(double *)arg1;
- (id)calculateDisplayIndexPath;
- (id)aboveIndexPaths;
- (double)bottomThreshold;
- (double)topThreshold;
- (int)indexOfCityInfoWithCityCode:(id)arg1;
- (void)locateRuleCardView;
- (void)refreshAction:(id)arg1;
- (void)restrictFilterView:(id)arg1 didSelectedAtIndex:(int)arg2 title:(id)arg3;
- (void)tabBarView:(id)arg1 didSelectedAtIndex:(long long)arg2;
- (void)configLodErrorView;
- (void)configLoadingView;
- (void)configShowdRestrictDataView;
- (int)selectedIndexOfTableHeader;
- (id)defaultIndexPathWithCity:(id)arg1;
- (int)ruleFilterSelectedIndex;
- (id)rulesFilterTitles;
- (void)configHeadViewWithTitles:(id)arg1;
- (id)cityInfoWithCityCode:(id)arg1;
- (id)headerViewTitles;
- (void)resetDisPlayIndexPath;
- (void)reloadRestrictData;
- (void)reloadTableView;
- (void)reloadNMData;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)contentWithIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateToPortraitSize;
- (void)defaultInit;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)clearTabDelegate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

