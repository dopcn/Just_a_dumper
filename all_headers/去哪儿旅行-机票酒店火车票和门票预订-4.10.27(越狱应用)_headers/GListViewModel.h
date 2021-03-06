//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GCityVCDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class GDiscountViewVM, GGroupDetailUrgencyTitleInfo, GGroupListResultV2, GGroupNotify, GMultiSelectableFBViewModel, GTradeAreaResult, HNonResultTipText, HSearchPriceInfo, NSArray, NSMutableArray, NSNumber, NSString, NSURL, NetConnection, QWFilterInfo, RACTuple;

@interface GListViewModel : NSObject <UIAlertViewDelegate, GCityVCDelegate>
{
    NetConnection *_connection;
    _Bool _cityChanged;
    _Bool _hasMore;
    _Bool _hasResult;
    _Bool _firstSucceedRequest;
    NSArray *_items;
    GDiscountViewVM *_discountViewVM;
    GMultiSelectableFBViewModel *_multiSelectableFBVM;
    RACTuple *_requestStatus;
    GGroupNotify *_notify;
    NSString *_locationDescription;
    GGroupDetailUrgencyTitleInfo *_stockInfo;
    GTradeAreaResult *_tradeArea;
    NSArray *_actValueList;
    NSString *_popLayerURL;
    NSString *_refreshControlImgURL;
    NSString *_actType;
    NSString *_keyword;
    NSURL *_jumpURL;
    QWFilterInfo *_sortFilter;
    QWFilterInfo *_gradePriceFilter;
    NSArray *_locationAreaFilterArray;
    NSArray *_comprehensiveFilterArray;
    NSArray *_commonFilter;
    NSNumber *_listFilterNewStyle;
    HSearchPriceInfo *_priceInfo;
    NSMutableArray *_selectedFilterArray;
    NSMutableArray *_selectedFilterTitleArray;
    HNonResultTipText *_nonResultDesc;
    NSMutableArray *_boardArray;
    GGroupListResultV2 *_result;
    unsigned long long _currentPage;
}

@property(nonatomic) _Bool firstSucceedRequest; // @synthesize firstSucceedRequest=_firstSucceedRequest;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) GGroupListResultV2 *result; // @synthesize result=_result;
@property(retain, nonatomic) NSMutableArray *boardArray; // @synthesize boardArray=_boardArray;
@property(retain, nonatomic) HNonResultTipText *nonResultDesc; // @synthesize nonResultDesc=_nonResultDesc;
@property(retain, nonatomic) NSMutableArray *selectedFilterTitleArray; // @synthesize selectedFilterTitleArray=_selectedFilterTitleArray;
@property(retain, nonatomic) NSMutableArray *selectedFilterArray; // @synthesize selectedFilterArray=_selectedFilterArray;
@property(retain, nonatomic) HSearchPriceInfo *priceInfo; // @synthesize priceInfo=_priceInfo;
@property(retain, nonatomic) NSNumber *listFilterNewStyle; // @synthesize listFilterNewStyle=_listFilterNewStyle;
@property(retain, nonatomic) NSArray *commonFilter; // @synthesize commonFilter=_commonFilter;
@property(retain, nonatomic) NSArray *comprehensiveFilterArray; // @synthesize comprehensiveFilterArray=_comprehensiveFilterArray;
@property(retain, nonatomic) NSArray *locationAreaFilterArray; // @synthesize locationAreaFilterArray=_locationAreaFilterArray;
@property(retain, nonatomic) QWFilterInfo *gradePriceFilter; // @synthesize gradePriceFilter=_gradePriceFilter;
@property(retain, nonatomic) QWFilterInfo *sortFilter; // @synthesize sortFilter=_sortFilter;
@property(readonly, nonatomic) _Bool hasResult; // @synthesize hasResult=_hasResult;
@property(copy, nonatomic) NSURL *jumpURL; // @synthesize jumpURL=_jumpURL;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(copy, nonatomic) NSString *actType; // @synthesize actType=_actType;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(copy, nonatomic) NSString *refreshControlImgURL; // @synthesize refreshControlImgURL=_refreshControlImgURL;
@property(copy, nonatomic) NSString *popLayerURL; // @synthesize popLayerURL=_popLayerURL;
@property(retain, nonatomic) NSArray *actValueList; // @synthesize actValueList=_actValueList;
@property(readonly, nonatomic) GTradeAreaResult *tradeArea; // @synthesize tradeArea=_tradeArea;
@property(retain, nonatomic) GGroupDetailUrgencyTitleInfo *stockInfo; // @synthesize stockInfo=_stockInfo;
@property(copy, nonatomic) NSString *locationDescription; // @synthesize locationDescription=_locationDescription;
@property(retain, nonatomic) GGroupNotify *notify; // @synthesize notify=_notify;
@property(retain, nonatomic) RACTuple *requestStatus; // @synthesize requestStatus=_requestStatus;
@property(retain, nonatomic) GMultiSelectableFBViewModel *multiSelectableFBVM; // @synthesize multiSelectableFBVM=_multiSelectableFBVM;
@property(retain, nonatomic) GDiscountViewVM *discountViewVM; // @synthesize discountViewVM=_discountViewVM;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)GCityVCBack:(id)arg1 withCityUrl:(id)arg2 keyword:(id)arg3 withInfo:(id)arg4;
- (void)saveGradeAndPrice;
- (void)clearKeywords;
- (void)clearAllFilters:(_Bool)arg1 needClearGradePrice:(_Bool)arg2;
- (id)getTitleFromSelect:(id)arg1;
- (void)addSelectedFilter:(id)arg1 toArray:(id)arg2;
- (id)getSelectedFilterArray;
- (id)commonFilterFromSearchResult:(id)arg1;
- (id)comprehensiveFilter;
- (long long)commonFilterSelectCount;
- (id)locationAreaFilter;
- (id)newComprehensiveDesc;
- (id)newLocationAreaDesc;
- (id)locationAreaDesc;
- (id)gradePriceDesc;
- (id)sortDesc;
- (id)traAreasNotify;
- (id)locationCityCode;
- (id)locationCity;
- (void)remoteSelectPOI:(id)arg1 ofCategory:(id)arg2;
- (void)changeListCity:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)citySwitchTips;
- (id)fingerPrint;
- (void)fetchDataSucceed:(CDUnknownBlockType)arg1 empty:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (id)filtersParam;
- (id)parameters;
- (void)reset;
- (void)dataBinding;
- (id)init;
- (void)resetTopModules;
- (void)loadMoreHotels;
- (void)refreshHotels;
- (void)openCityList;
- (void)openCityListWithSearchNear:(_Bool)arg1;
- (void)fetchingWithGPS;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

