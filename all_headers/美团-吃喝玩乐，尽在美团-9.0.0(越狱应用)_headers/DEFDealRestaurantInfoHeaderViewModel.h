//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseModuleViewModel.h"

@class DEFDeal, DEFDealRestaurantInfo, NSOrderedSet;

@interface DEFDealRestaurantInfoHeaderViewModel : GCBaseModuleViewModel
{
    long long _currentCityBranchCount;
    NSOrderedSet *_dealBranches;
    long long _dealID;
    long long _fromPOIID;
    DEFDealRestaurantInfo *_restaurantInfo;
    DEFDeal *_deal;
}

@property(retain, nonatomic) DEFDeal *deal; // @synthesize deal=_deal;
@property(retain, nonatomic) DEFDealRestaurantInfo *restaurantInfo; // @synthesize restaurantInfo=_restaurantInfo;
@property(nonatomic) long long fromPOIID; // @synthesize fromPOIID=_fromPOIID;
@property(nonatomic) long long dealID; // @synthesize dealID=_dealID;
@property(retain, nonatomic) NSOrderedSet *dealBranches; // @synthesize dealBranches=_dealBranches;
@property(nonatomic) long long currentCityBranchCount; // @synthesize currentCityBranchCount=_currentCityBranchCount;
- (void).cxx_destruct;
- (_Bool)shouldShow;
- (void)setupViewModel;

@end

