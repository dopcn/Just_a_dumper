//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WMRootModel.h"

@interface WMSearchFoodModel : WMRootModel
{
}

- (id)rac_fetchNonDeliveryWithKeyword:(id)arg1 queryType:(long long)arg2 navigateType:(id)arg3 categoryType:(id)arg4 subCategoryType:(id)arg5 pageIndex:(id)arg6 pageSize:(id)arg7;
- (id)rac_fetchSearchListWithKeyword:(id)arg1 queryType:(long long)arg2 navigateType:(id)arg3 categotyType:(id)arg4 subCategoryType:(id)arg5 pageIndex:(id)arg6 pageSize:(id)arg7 filterCodes:(id)arg8 sliderSelected:(id)arg9 sortCode:(long long)arg10 isFilter:(_Bool)arg11 isFixKeyword:(_Bool)arg12;
- (id)rac_fetchHotLabelListAndHistoryWithNavigateType:(id)arg1 categoryType:(id)arg2 subCategoryType:(id)arg3 pageIndex:(long long)arg4 needRegion:(id)arg5 poiIdList:(id)arg6;
- (id)fetchSearchNonDeliveryListWithKeyword:(id)arg1 queryType:(long long)arg2 navigateType:(id)arg3 categotyType:(id)arg4 subCategoryType:(id)arg5 pageIndex:(id)arg6 pageSize:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (id)fetchSearchListWithKeyword:(id)arg1 queryType:(long long)arg2 navigateType:(id)arg3 categotyType:(id)arg4 subCategoryType:(id)arg5 pageIndex:(id)arg6 pageSize:(id)arg7 filterCodes:(id)arg8 sliderSelected:(id)arg9 sortCode:(long long)arg10 isFilter:(_Bool)arg11 isFixKeyword:(_Bool)arg12 completion:(CDUnknownBlockType)arg13;
- (id)fetchHotLabelListWithNavigateType:(id)arg1 categoryType:(id)arg2 subCategoryType:(id)arg3 pageIndex:(long long)arg4 needRegion:(id)arg5 poiIdList:(id)arg6 completion:(CDUnknownBlockType)arg7;

@end

