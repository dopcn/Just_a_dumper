//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseModule.h"

@class EDUCourseTagsCell, EDUSkuCourseListCell, GCBaseModuleBasicStyleHeaderCell, GCBaseModuleFooterCell, GCBasePromoHeadCell, NSMutableArray, NSString, NVModelBaseEduSKUProductListDo;

@interface EDUSKUCourseModule : GCBaseModule
{
    _Bool _shouldShowTitle;
    _Bool _shouldShowTags;
    long long _shopId;
    GCBasePromoHeadCell *_titleCell;
    GCBaseModuleBasicStyleHeaderCell *_titleCellForCustomRefund;
    EDUSkuCourseListCell *_productListCell;
    EDUCourseTagsCell *_tagsCell;
    GCBaseModuleFooterCell *_tailCell;
    NSMutableArray *_productList;
    NSString *_productListPageUrl;
    NVModelBaseEduSKUProductListDo *_productListResult;
}

@property(retain, nonatomic) NVModelBaseEduSKUProductListDo *productListResult; // @synthesize productListResult=_productListResult;
@property(copy, nonatomic) NSString *productListPageUrl; // @synthesize productListPageUrl=_productListPageUrl;
@property(retain, nonatomic) NSMutableArray *productList; // @synthesize productList=_productList;
@property(retain, nonatomic) GCBaseModuleFooterCell *tailCell; // @synthesize tailCell=_tailCell;
@property(retain, nonatomic) EDUCourseTagsCell *tagsCell; // @synthesize tagsCell=_tagsCell;
@property(retain, nonatomic) EDUSkuCourseListCell *productListCell; // @synthesize productListCell=_productListCell;
@property(retain, nonatomic) GCBaseModuleBasicStyleHeaderCell *titleCellForCustomRefund; // @synthesize titleCellForCustomRefund=_titleCellForCustomRefund;
@property(retain, nonatomic) GCBasePromoHeadCell *titleCell; // @synthesize titleCell=_titleCell;
@property(nonatomic) _Bool shouldShowTags; // @synthesize shouldShowTags=_shouldShowTags;
@property(nonatomic) _Bool shouldShowTitle; // @synthesize shouldShowTitle=_shouldShowTitle;
@property(nonatomic) long long shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;
- (id)productMoreAction;
- (id)productAction;
- (id)tagAction;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didSelectFooterCellForSection:(long long)arg1;
- (id)footerCellForSection:(long long)arg1;
- (double)heightForFooterCellForSection:(long long)arg1;
- (_Bool)hasFooterCellForSection:(long long)arg1;
- (void)tagButtonClicked:(id)arg1;
- (void)setTagsCellData:(id)arg1;
- (void)querySKUProductList;
- (_Bool)shouldShow;
- (void)makeupCells;
- (void)setupModule;
- (id)ga_label;

@end

