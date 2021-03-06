//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVCityListViewController.h"

@class NSArray, NSMutableArray, NVAuthorityAlert;

@interface NVForeignCityListViewController : NVCityListViewController
{
    _Bool _hasRecent;
    _Bool _isHasNearby;
    _Bool _isForeignCity;
    NSMutableArray *_cityNameIndexArray;
    NSMutableArray *_citySectionName;
    NSMutableArray *_citySectionData;
    NVAuthorityAlert *_alert;
    NSArray *_sections;
}

@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NVAuthorityAlert *alert; // @synthesize alert=_alert;
@property(retain, nonatomic) NSMutableArray *citySectionData; // @synthesize citySectionData=_citySectionData;
@property(retain, nonatomic) NSMutableArray *citySectionName; // @synthesize citySectionName=_citySectionName;
@property(nonatomic) _Bool isForeignCity; // @synthesize isForeignCity=_isForeignCity;
@property(nonatomic) _Bool isHasNearby; // @synthesize isHasNearby=_isHasNearby;
@property(nonatomic) _Bool hasRecent; // @synthesize hasRecent=_hasRecent;
@property(retain, nonatomic) NSMutableArray *cityNameIndexArray; // @synthesize cityNameIndexArray=_cityNameIndexArray;
- (void).cxx_destruct;
- (void)hotCitySelected:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)sectionTypeForSection:(long long)arg1;
- (_Bool)isVisibleForSectionType:(long long)arg1;
- (id)allSections;
- (void)reloadCityList;
- (void)loadData;
- (_Bool)showGPS;
- (id)getCityProvider;
- (id)init;

@end

