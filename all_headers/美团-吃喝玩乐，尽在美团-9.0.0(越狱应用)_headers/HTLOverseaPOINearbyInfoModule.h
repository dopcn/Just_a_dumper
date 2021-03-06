//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseModule.h"

@class HTLOverseaPOINearbyInfoHeaderCell, NSMutableArray, NVModelBaseNearbyInfo, NVModelBaseOHPoiBasicInfo;

@interface HTLOverseaPOINearbyInfoModule : GCBaseModule
{
    NVModelBaseOHPoiBasicInfo *_poiBasicInfo;
    NVModelBaseNearbyInfo *_nearByInfo;
    long long _selectedIndex;
    HTLOverseaPOINearbyInfoHeaderCell *_headerCell;
    NSMutableArray *_cellItemArray;
    NSMutableArray *_nearbyCellArray;
}

@property(retain, nonatomic) NSMutableArray *nearbyCellArray; // @synthesize nearbyCellArray=_nearbyCellArray;
@property(retain, nonatomic) NSMutableArray *cellItemArray; // @synthesize cellItemArray=_cellItemArray;
@property(retain, nonatomic) HTLOverseaPOINearbyInfoHeaderCell *headerCell; // @synthesize headerCell=_headerCell;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NVModelBaseNearbyInfo *nearByInfo; // @synthesize nearByInfo=_nearByInfo;
@property(retain, nonatomic) NVModelBaseOHPoiBasicInfo *poiBasicInfo; // @synthesize poiBasicInfo=_poiBasicInfo;
- (void).cxx_destruct;
- (void)scenicClickTrack:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)handelCellIsNilWithTableView:(id)arg1 IndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned long long)linkTypeInSection:(long long)arg1;
- (void)addPlaceHolderCell;
- (void)makeupCellItems;
- (void)setupModule;
- (_Bool)shouldShow;

@end

