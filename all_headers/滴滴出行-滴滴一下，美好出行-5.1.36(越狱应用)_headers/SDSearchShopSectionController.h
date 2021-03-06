//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IGListSectionController.h"

@class IGListAdapter, NSDictionary, SDSearchShopSectionViewModel;

@interface SDSearchShopSectionController : IGListSectionController
{
    SDSearchShopSectionViewModel *_sectionViewModel;
    NSDictionary *_modelClasses;
    IGListAdapter *_adapter;
}

@property(retain, nonatomic) IGListAdapter *adapter; // @synthesize adapter=_adapter;
@property(retain, nonatomic) NSDictionary *modelClasses; // @synthesize modelClasses=_modelClasses;
@property(retain, nonatomic) SDSearchShopSectionViewModel *sectionViewModel; // @synthesize sectionViewModel=_sectionViewModel;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)init;

@end

