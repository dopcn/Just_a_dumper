//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BGModuleController.h"

@class AppCpmBean, NSArray, NSMutableSet, NVModelBaseAppShopAdBean, NVShopinfoTitleCell, RACDisposable, UITableViewCell;

@interface HOUSEInfoSpreadModule : BGModuleController
{
    _Bool _alreadyQueryOnce;
    RACDisposable *_cpmAppAdsDispose;
    NVShopinfoTitleCell *_titleCell;
    UITableViewCell *_spacingCell;
    AppCpmBean *_spreadCpmAds;
    NVModelBaseAppShopAdBean *_appShopAd;
    NSArray *_controllers;
    NSMutableSet *_gaItems;
}

@property(retain, nonatomic) NSMutableSet *gaItems; // @synthesize gaItems=_gaItems;
@property(retain, nonatomic) NSArray *controllers; // @synthesize controllers=_controllers;
@property(nonatomic) _Bool alreadyQueryOnce; // @synthesize alreadyQueryOnce=_alreadyQueryOnce;
@property(retain, nonatomic) NVModelBaseAppShopAdBean *appShopAd; // @synthesize appShopAd=_appShopAd;
@property(retain, nonatomic) AppCpmBean *spreadCpmAds; // @synthesize spreadCpmAds=_spreadCpmAds;
@property(retain, nonatomic) UITableViewCell *spacingCell; // @synthesize spacingCell=_spacingCell;
@property(retain, nonatomic) NVShopinfoTitleCell *titleCell; // @synthesize titleCell=_titleCell;
@property(retain, nonatomic) RACDisposable *cpmAppAdsDispose; // @synthesize cpmAppAdsDispose=_cpmAppAdsDispose;
- (void).cxx_destruct;
- (long long)maxRecommendCount;
- (id)buildSuggestShopParams;
- (void)setLineStyleForCell:(id)arg1 atIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)convertToCpmAd:(id)arg1;
- (id)convertToShopAd:(id)arg1;
- (void)refreshShopAdList:(id)arg1;
- (void)querySpread;
- (void)reloadData;
- (long long)slotID;
- (id)fillGaDictionary;
- (void)shopDidUpdate:(id)arg1 withExtra:(id)arg2;
- (double)viewHeight;
- (_Bool)shouldShow;
- (void)showViewGA;
@property(readonly, nonatomic) _Bool bShow;
- (void)didBecomeActive:(id)arg1;
- (_Bool)myGrandfatherLatestBack;
- (id)ga_label;
- (void)dealloc;
- (id)init;

@end

