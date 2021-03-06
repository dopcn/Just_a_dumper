//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMBaseManager.h"

#import "AMAOSRequestDelegate-Protocol.h"
#import "NMGolfMapTipsViewDataSource-Protocol.h"
#import "NMGolfMapTipsViewDelegate-Protocol.h"
#import "NMGolfSearchInputResultListViewDataSource-Protocol.h"
#import "NMGolfSearchInputResultListViewDelegate-Protocol.h"
#import "NMGolfSearchInputViewDataSource-Protocol.h"
#import "NMGolfSearchInputViewDelegate-Protocol.h"
#import "NMGolfSearchListViewDataSource-Protocol.h"
#import "NMGolfSearchListViewDelegate-Protocol.h"
#import "NMGolfService-Protocol.h"
#import "NMLifeServiceNaviBarDataSource-Protocol.h"
#import "NMLifeServiceNaviBarDelegate-Protocol.h"
#import "NMPoiDetailWebViewDelegate-Protocol.h"
#import "NMPopupViewEvent-Protocol.h"
#import "NMSearchSuggestionDelegate-Protocol.h"
#import "SpliteTableViewDataSource-Protocol.h"
#import "SpliteTableViewDelegate-Protocol.h"

@class AMAOSGolfRequest, MPSQueryPoiData, NMGolfData, NMGolfDataCenter, NSArray, NSMutableArray, NSString;

@interface NMGolfManager : NMBaseManager <NMGolfService, NMGolfSearchListViewDataSource, NMGolfSearchListViewDelegate, AMAOSRequestDelegate, NMGolfMapTipsViewDataSource, NMGolfMapTipsViewDelegate, NMPoiDetailWebViewDelegate, NMGolfSearchInputViewDataSource, NMGolfSearchInputViewDelegate, NMSearchSuggestionDelegate, NMGolfSearchInputResultListViewDataSource, NMGolfSearchInputResultListViewDelegate, SpliteTableViewDataSource, SpliteTableViewDelegate, NMPopupViewEvent, NMLifeServiceNaviBarDelegate, NMLifeServiceNaviBarDataSource>
{
    _Bool _shouldGotoPage1;
    _Bool _highlighted;
    int _searchSource;
    NSString *_keyword;
    NSMutableArray *_viewStack;
    long long _currentViewType;
    MPSQueryPoiData *_searchAroundPoi;
    NMGolfDataCenter *_dataCenter;
    NSMutableArray *_searchClassify;
    AMAOSGolfRequest *_golfRequest;
    long long _currentPageNum;
    long long _currentPage;
    long long _inputTipIndex;
    long long _currentResultPageNum;
    NSString *_resultListViewTitle;
    NSMutableArray *_preSelectedClassify;
    long long _headerViewSegmentBtnIndex;
    NSArray *_mapPoiShowArray;
    long long _currentIndex;
    long long _showDemoIndex;
    NMGolfData *_selectedGolfDataToDetail;
    NMGolfData *_currentSelectPoiOnMap;
    NSMutableArray *_suggestionArray;
    NSString *_mapTipsViewTitle;
    struct CLLocationCoordinate2D _currentLastLocation;
}

+ (void)registerApLayer;
@property(retain, nonatomic) NSString *mapTipsViewTitle; // @synthesize mapTipsViewTitle=_mapTipsViewTitle;
@property(retain, nonatomic) NSMutableArray *suggestionArray; // @synthesize suggestionArray=_suggestionArray;
@property(copy, nonatomic) NMGolfData *currentSelectPoiOnMap; // @synthesize currentSelectPoiOnMap=_currentSelectPoiOnMap;
@property(copy, nonatomic) NMGolfData *selectedGolfDataToDetail; // @synthesize selectedGolfDataToDetail=_selectedGolfDataToDetail;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) long long showDemoIndex; // @synthesize showDemoIndex=_showDemoIndex;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSArray *mapPoiShowArray; // @synthesize mapPoiShowArray=_mapPoiShowArray;
@property(nonatomic) long long headerViewSegmentBtnIndex; // @synthesize headerViewSegmentBtnIndex=_headerViewSegmentBtnIndex;
@property(retain, nonatomic) NSMutableArray *preSelectedClassify; // @synthesize preSelectedClassify=_preSelectedClassify;
@property(copy, nonatomic) NSString *resultListViewTitle; // @synthesize resultListViewTitle=_resultListViewTitle;
@property(nonatomic) long long currentResultPageNum; // @synthesize currentResultPageNum=_currentResultPageNum;
@property(nonatomic) long long inputTipIndex; // @synthesize inputTipIndex=_inputTipIndex;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) long long currentPageNum; // @synthesize currentPageNum=_currentPageNum;
@property(nonatomic) _Bool shouldGotoPage1; // @synthesize shouldGotoPage1=_shouldGotoPage1;
@property(retain, nonatomic) AMAOSGolfRequest *golfRequest; // @synthesize golfRequest=_golfRequest;
@property(nonatomic) struct CLLocationCoordinate2D currentLastLocation; // @synthesize currentLastLocation=_currentLastLocation;
@property(nonatomic) int searchSource; // @synthesize searchSource=_searchSource;
@property(retain, nonatomic) NSMutableArray *searchClassify; // @synthesize searchClassify=_searchClassify;
@property(retain, nonatomic) NMGolfDataCenter *dataCenter; // @synthesize dataCenter=_dataCenter;
@property(copy, nonatomic) MPSQueryPoiData *searchAroundPoi; // @synthesize searchAroundPoi=_searchAroundPoi;
@property(nonatomic) long long currentViewType; // @synthesize currentViewType=_currentViewType;
@property(retain, nonatomic) NSMutableArray *viewStack; // @synthesize viewStack=_viewStack;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (id)getNabiBarTextFieldPlaceholder;
- (void)didClickedRightButton:(id)arg1;
- (void)didClickedTextFieldButton:(id)arg1;
- (void)didClickedGoBackButton:(id)arg1;
- (void)refreshListViewCancel;
- (void)refreshListViewError;
- (_Bool)externalSearchAroundPoi:(id)arg1;
- (void)onButtonClickAction:(id)arg1 andSender:(id)arg2;
- (void)hideHighlightedPoint;
- (id)spliteTableViewPreSelectedIndexes;
- (id)spliteTableViewOfComponent:(id)arg1 withMainComponentIndex:(long long)arg2;
- (id)spliteTableViewComponentList;
- (_Bool)dispRightTable;
- (int)arroralign;
- (void)tableView:(id)arg1 didSelectComponent:(int)arg2 indexOfComponet:(int)arg3;
- (void)onUserCancel;
- (long long)golfSearchInputResultListViewgetTotalRecordNumber;
- (long long)golfSearchInputResultListViewgetCurrentPageNumber;
- (_Bool)golfSearchInputResultListViewisLastPage;
- (_Bool)golfSearchInputResultListViewisFistPage;
- (id)setGolfSearchInputResultListViewTextFieldText;
- (id)golfSearchInputResultListViewselectedClassifyArray;
- (id)GetGolfSearchInputResultListViewData;
- (void)golfSearchInputResultListViewPreviousPageSearch;
- (void)golfSearchInputResultListViewNextPageSearch;
- (void)golfSearchInputResultListViewCellSelected:(long long)arg1;
- (void)gotSearchSuggestionData:(id)arg1;
- (id)getTuangouTextFieldInitStr;
- (id)getSearchInputViewData;
- (void)groupGolfSearchInputViewLeftButtonPressed;
- (void)searchGolfSearchInputViewWithKeyWord:(id)arg1;
- (void)searchGolfSearchInputViewKeywordChange:(id)arg1;
- (void)selectedTableViewDataInRow:(int)arg1;
- (void)clearGolfSearchHistory;
- (void)popupCancelInvoke;
- (void)showClearHistoryPopupView;
- (_Bool)onShowOnMap:(id)arg1;
- (long long)getFromManagerId;
- (void)refreshFavoritePoiData:(id)arg1;
- (long long)getManagerId;
- (void)goBackAction:(id)arg1;
- (id)getMapTipsViewTitle;
- (long long)getGolfPoiListCount;
- (long long)getCurrentGolfPoiIndex;
- (id)getCurrentGolfPoiDesc:(long long)arg1;
- (void)goToNavi;
- (void)goToRoute;
- (void)goToSearchAround;
- (void)showGolfPoiItemView;
- (id)poiFooterViewData;
- (void)goToGolfPoiInfoView;
- (void)showCurrentGolfPoi:(long long)arg1;
- (void)golfMapTipsViewDelegategoBack;
- (void)apLayerUnhighlightedIndex:(long long)arg1 layerTye:(long long)arg2;
- (void)apLayerHighlightedIndex:(long long)arg1 layerTye:(long long)arg2;
- (id)apLayerData:(long long)arg1;
- (void)golfSearchListViewPreviousPageSearch;
- (void)golfSearchListViewNextPageSearch;
- (void)poiHeaderViewSegmentBtnClicked:(long long)arg1;
- (void)golfSearchListViewCellSelected:(long long)arg1;
- (void)golfSearchListViewBeginFirstSearch;
- (_Bool)isLastPage;
- (_Bool)isFistPage;
- (long long)getTotalRecordNumber;
- (long long)getCurrentPageNumber;
- (id)selectedClassifyArray;
- (id)golfSearchListViewGetGolfSearchListViewData;
- (void)gotDataFailed:(id)arg1 request:(id)arg2;
- (void)gotDataSucceed:(id)arg1 request:(id)arg2;
- (void)aosRequestFinished:(id)arg1 response:(id)arg2;
- (void)updateClassifyList;
- (void)resetSearchClassify;
- (void)cancelNetRequest;
- (void)cancelNetWork;
- (int)getRequestType;
- (void)golfSearchKeywords:(id)arg1 poiID:(id)arg2 pagesize:(int)arg3 pagenum:(int)arg4 is_classify:(_Bool)arg5 classify_data:(id)arg6;
- (int)suitableAnimation;
- (id)setNMTuangouSearchTextFieldText;
- (long long)SearchResultListViewgetCurrentPageNumber;
- (_Bool)SearchResultListViewisLastPage;
- (_Bool)SearchResultListViewisFistPage;
- (void)golfSearchWithPoiID:(id)arg1;
- (void)golfSearchWithKeyWord:(id)arg1;
- (id)getCurrentPoiData;
- (void)showPointOnMap;
- (void)goBack;
- (struct CLLocationCoordinate2D)getCoordinate;
- (id)getClassifyData;
- (id)generateViewIDDic:(long long)arg1 withCurrentViewId:(long long)arg2 withAction:(long long)arg3;
- (id)generateViewIDDic:(long long)arg1 withAction:(long long)arg2;
- (void)goToView:(long long)arg1 withAction:(long long)arg2;
- (void)goToView:(long long)arg1;
- (void)setPopupType:(long long)arg1;
- (Class)managerViewContainerClass;
- (void)dealloc;
- (void)resumeRelatedViews;
- (void)suspendRelatedViews;
- (_Bool)forbiddenShowMainLayer;
- (void)clearManager;
- (void)clearRelatedData;
- (void)clearRelatedViews;
- (void)initManager;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

