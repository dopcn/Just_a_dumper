//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTRootView.h"

#import "CTErrorViewDelegate-Protocol.h"
#import "CTHotelDirectSearchNoResultCellDelegate-Protocol.h"
#import "CTHotelIndividualFilterScrollViewDelegate-Protocol.h"
#import "CTHotelListBusinessZoneFilterCellDelegate-Protocol.h"
#import "CTHotelListMoreViewDelegate-Protocol.h"
#import "CTHotelListNoDataFilterContentCellDelegate-Protocol.h"
#import "CTHotelMainLocationUtilDelegate-Protocol.h"
#import "CTHotelRecommendFilterCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CTHotelIndividualFilterScrollView, CTHotelListCacheBean, CTHotelListRefreshPriceView, CTHotelMainLocationUtil, CTHotelSubFilterListView, CTHotelUserEncourageView, CTTableView, FilterNode, NSArray, NSMutableArray, NSString, UIView;
@protocol CTAllHotelListViewDelegate, UIScrollViewDelegate;

@interface CTAllHotelListView : CTRootView <CTHotelListNoDataFilterContentCellDelegate, CTHotelListMoreViewDelegate, CTErrorViewDelegate, UITableViewDelegate, UITableViewDataSource, CTHotelRecommendFilterCellDelegate, CTHotelListBusinessZoneFilterCellDelegate, CTHotelDirectSearchNoResultCellDelegate, CTHotelMainLocationUtilDelegate, CTHotelIndividualFilterScrollViewDelegate>
{
    double h_NoDataFilterContentCell;
    long long adShowCount;
    _Bool hasShowFilterTip;
    _Bool _isLoadingError;
    _Bool _isLoading;
    _Bool _isShowOverSeaSurroundingHotelSection;
    _Bool _showRoomid;
    _Bool _hasShowTripTypeCell;
    int _errorCode;
    CTHotelListCacheBean *ctripCacheBean;
    UIView *_separatorLine;
    CTHotelIndividualFilterScrollView *_indivitualFilterView;
    NSArray *_dataArray;
    NSArray *_dataArray2;
    NSArray *_dataArray_overSeaSurroundingHotel;
    NSMutableArray *_filterMarkMArray;
    CTTableView *__tableView;
    CTHotelUserEncourageView *_encourageView_;
    id <CTAllHotelListViewDelegate> _allListDelegate;
    id <UIScrollViewDelegate> _scrollDelegate;
    NSString *_errorInfo;
    UIView *_viewForLoading;
    NSArray *_sectionTypeList;
    NSString *_positionRemark;
    UIView *_bottomLine;
    CTHotelListRefreshPriceView *_refreshPriceView;
    CTHotelSubFilterListView *_subFilterListView;
    UIView *_shadowView;
    CTHotelMainLocationUtil *_locationUtil;
    FilterNode *_myLocationNode;
}

@property(nonatomic) _Bool hasShowTripTypeCell; // @synthesize hasShowTripTypeCell=_hasShowTripTypeCell;
@property(retain, nonatomic) FilterNode *myLocationNode; // @synthesize myLocationNode=_myLocationNode;
@property(retain, nonatomic) CTHotelMainLocationUtil *locationUtil; // @synthesize locationUtil=_locationUtil;
@property(nonatomic) __weak UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) __weak CTHotelSubFilterListView *subFilterListView; // @synthesize subFilterListView=_subFilterListView;
@property(retain, nonatomic) CTHotelListRefreshPriceView *refreshPriceView; // @synthesize refreshPriceView=_refreshPriceView;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) _Bool showRoomid; // @synthesize showRoomid=_showRoomid;
@property(retain, nonatomic) NSString *positionRemark; // @synthesize positionRemark=_positionRemark;
@property _Bool isShowOverSeaSurroundingHotelSection; // @synthesize isShowOverSeaSurroundingHotelSection=_isShowOverSeaSurroundingHotelSection;
@property(retain, nonatomic) NSArray *sectionTypeList; // @synthesize sectionTypeList=_sectionTypeList;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) UIView *viewForLoading; // @synthesize viewForLoading=_viewForLoading;
@property(nonatomic) _Bool isLoadingError; // @synthesize isLoadingError=_isLoadingError;
@property(retain, nonatomic) NSString *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(nonatomic) __weak id <CTAllHotelListViewDelegate> allListDelegate; // @synthesize allListDelegate=_allListDelegate;
@property(retain, nonatomic) CTHotelUserEncourageView *encourageView_; // @synthesize encourageView_=_encourageView_;
@property(retain, nonatomic) CTTableView *_tableView; // @synthesize _tableView=__tableView;
@property(retain, nonatomic) NSMutableArray *filterMarkMArray; // @synthesize filterMarkMArray=_filterMarkMArray;
@property(retain, nonatomic) NSArray *dataArray_overSeaSurroundingHotel; // @synthesize dataArray_overSeaSurroundingHotel=_dataArray_overSeaSurroundingHotel;
@property(retain, nonatomic) NSArray *dataArray2; // @synthesize dataArray2=_dataArray2;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) CTHotelIndividualFilterScrollView *indivitualFilterView; // @synthesize indivitualFilterView=_indivitualFilterView;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) CTHotelListCacheBean *ctripCacheBean; // @synthesize ctripCacheBean;
- (void).cxx_destruct;
- (void)stopPriceRefreshView;
- (void)hidePriceRefreshView;
- (void)refreshPriceRefreshViewAfterService:(double)arg1 duration:(double)arg2;
- (void)showPriceRefreshView;
- (void)jumpflagship:(id)arg1;
- (void)clickTotalPriceButton:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)updateSortOrderType:(id)arg1;
- (void)locationFail:(int)arg1 withCoordinate:(id)arg2;
- (void)locationSuccessWithCoordinate:(id)arg1;
- (void)hotelIndividualFilterScrollViewDidTapped:(id)arg1 sender:(id)arg2;
- (void)refreshIndividualFilters;
- (void)buildHotelList;
- (void)hideSubFilter;
- (void)showSubFilterList:(id)arg1 sender:(id)arg2 showBlock:(CDUnknownBlockType)arg3 hideBlock:(CDUnknownBlockType)arg4;
- (_Bool)isHasOverSeaSurroudingHotel;
- (id)createBrandPriceFilterResultCell:(id)arg1 indexPath:(id)arg2;
- (id)createPureContentCell:(id)arg1 indexPath:(id)arg2;
- (id)createDomesticExpandRecommendDescCell:(id)arg1 indexPath:(id)arg2;
- (id)createArHotListHeadCell:(id)arg1 indexPath:(id)arg2;
- (id)createSearchHotelKeyWordResultCell:(id)arg1 indexPath:(id)arg2;
- (id)createNoDataFilterContentCell:(id)arg1 isShowContent:(_Bool)arg2;
- (id)createNoResultCell:(id)arg1 tbv:(id)arg2;
- (id)createShowFilterOptionCell:(id)arg1 tbv:(id)arg2;
- (void)buzZoneFilterItemSelected:(id)arg1;
- (void)clickDeleteAction:(id)arg1;
- (void)filterViewIntantUpdated:(id)arg1 isConfirm:(_Bool)arg2;
- (void)filterViewUpdated:(id)arg1;
- (void)memberGuideInfoAction:(id)arg1;
- (id)initializeBillboard:(id)arg1;
- (id)initializePopularRank:(id)arg1;
- (id)initializeTripType:(id)arg1;
- (id)initializeHeaderTip:(id)arg1;
- (id)initializeInnBanner:(id)arg1 indexPath:(id)arg2;
- (id)initializeInvoiceInfoL:(id)arg1;
- (id)initializeNewPublicize:(id)arg1;
- (id)initializeUserFeedBack:(id)arg1;
- (id)initializeSimilarPeople:(id)arg1;
- (id)initializeGuessYouLike:(id)arg1;
- (id)initializeRecommendHighArticle:(id)arg1;
- (id)initializeMemberGuide:(id)arg1;
- (id)initializeCityStrategyInfo:(id)arg1;
- (id)initializeFastFilterArea:(id)arg1;
- (id)initializeFlagShipEntrance:(id)arg1;
- (void)removeOneObject:(id)arg1;
- (id)createHotelCell:(id)arg1 tbv:(id)arg2 array:(id)arg3;
- (void)recommendFilterCellClicked:(id)arg1;
- (void)didClickDirectSearchNoResultModel:(id)arg1;
- (id)createDirectSearchNoResultCell:(id)arg1 indexPath:(id)arg2;
- (void)traceLog:(id)arg1 withRange:(long long)arg2 withAction:(id)arg3;
- (void)selectReleatedHotelCell:(id)arg1;
- (void)selectRecommendHotelCell:(id)arg1;
- (void)selectArroundHotelCell:(id)arg1;
- (void)selectDomesticExpandCell:(id)arg1;
- (void)selectOverSeaSurroundingCell:(id)arg1;
- (void)selectFullOrNonFullHouseHotelCell:(id)arg1;
- (void)sizeToFitByconstrainedSize:(id)arg1 constrainedSize:(struct CGSize)arg2;
- (id)creatGHIorOverSeaSurroundingHotelSectionHeaderView;
- (void)openOrCloseGHISection:(id)arg1;
- (void)searchMoreHotel:(id)arg1;
- (id)drawHasDataTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 dataArray:(id)arg3;
- (id)drawMoreDataCellView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)otherActionButtonCallback:(id)arg1;
- (id)NoDataTableView0:(id)arg1 indexPath:(id)arg2;
- (void)showFilterTip;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 identifier:(id)arg2;
- (double)getNoResultHeight:(id)arg1;
- (double)getShowFilterHeight:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)pullUpToAddData:(id)arg1;
- (void)pullDownToRefreshData:(id)arg1;
- (void)didMoveToSuperview;
- (void)awakeFromNib;
- (void)initBaseView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

