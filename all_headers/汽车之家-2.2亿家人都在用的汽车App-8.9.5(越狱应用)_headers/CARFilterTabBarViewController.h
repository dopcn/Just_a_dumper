//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AHBusinessFramework/AHRefreshTableViewController.h>

#import "AHBaseServiceDelegate-Protocol.h"
#import "AHLoadingViewDelegate-Protocol.h"
#import "AHNetworkTableProtocol-Protocol.h"
#import "CARFilterCommonViewDelegate-Protocol.h"
#import "CARFilterListCellDelegate-Protocol.h"
#import "CARFilterNavViewDelegate-Protocol.h"
#import "CARFilterPriceViewDelegate-Protocol.h"
#import "CARFilterTopViewDelegate-Protocol.h"
#import "CARMoreFilterViewControllerDelegate-Protocol.h"
#import "CARPopSortViewManagerDataSource-Protocol.h"
#import "CARPopSortViewManagerDelegate-Protocol.h"
#import "FilterAdpterMenuDelegate-Protocol.h"

@class AHLoadingView, AHNavigationController, CARFilterCarOptionsSerManager, CARFilterCarOptionsService, CARFilterCommonView, CARFilterDataHandle, CARFilterGuideViewManager, CARFilterModel, CARFilterNavView, CARFilterNavigationModel, CARFilterPriceView, CARFilterService, CARFilterTopView, CARMoreFilterViewController, CARPopSortViewManager, FilterAdpterMenu, NSArray, NSMutableArray, NSString;

@interface CARFilterTabBarViewController : AHRefreshTableViewController <CARPopSortViewManagerDelegate, CARPopSortViewManagerDataSource, AHBaseServiceDelegate, CARFilterNavViewDelegate, AHLoadingViewDelegate, CARFilterListCellDelegate, FilterAdpterMenuDelegate, CARFilterPriceViewDelegate, CARFilterTopViewDelegate, CARMoreFilterViewControllerDelegate, CARFilterCommonViewDelegate, AHNetworkTableProtocol>
{
    _Bool _isReloadClick;
    _Bool _isFromResultList;
    _Bool _isSendPV;
    _Bool _isPopPriceView;
    _Bool _isFrom3DTouch;
    _Bool _carGamePopPriceView;
    AHLoadingView *loadingView;
    AHNavigationController *_parentNavigationController;
    long long _conditionfromType;
    long long _source;
    NSArray *_outSelectedAttentionArray;
    NSArray *_outSelectedPriceArray;
    NSArray *_outSelectedDistanceArray;
    NSArray *_outSelectedBrandArray;
    NSArray *_outSelectedUsedSelCarArray;
    NSArray *_outSelectedMoreConditionArray;
    CARFilterCarOptionsService *_filterOptionSer;
    CARFilterCarOptionsSerManager *_filterOptionSerManager;
    CARFilterModel *_choseFilter;
    long long _pageIndex;
    CARFilterDataHandle *_filterDataHandle;
    NSMutableArray *_asisstantListDataArray;
    NSMutableArray *_asisstantSelAttentionArray;
    NSMutableArray *_asisstantSelPriceArray;
    NSMutableArray *_asisstantSelBrandArray;
    NSMutableArray *_asisstantUseSelectCarArray;
    NSMutableArray *_asisstantSelMoreConditionArray;
    CARFilterNavView *_filterNavView;
    FilterAdpterMenu *_topMenuView;
    NSMutableArray *_topMenuViewDataArrayM;
    CARFilterTopView *_topTagShowView;
    NSMutableArray *_showTagArrayM;
    NSArray *_filterOrderArray;
    CARPopSortViewManager *_attentionSortViewManager;
    long long _sortCurrSelIndex;
    CARFilterPriceView *_filterPriceView;
    CARFilterNavigationModel *_filterPriceNavigation;
    CARFilterNavigationModel *_curSelPriceNavigation;
    NSMutableArray *_inSelectedPriceArray;
    CARFilterNavigationModel *_filterUseSelCarNavigation;
    NSMutableArray *_useSelCarFilterSelTagArrayM;
    CARFilterCommonView *_useSelectCarVew;
    NSMutableArray *_moreFilterDataListArray;
    CARMoreFilterViewController *_moreFilterViewController;
    NSMutableArray *_moreFilterVCSelTagArrayM;
    NSMutableArray *_filterBrandListArray;
    NSMutableArray *_moreFilterVCSelBrandTagArrayM;
    NSString *_filterResultTitle;
    CARFilterService *_filterResultService;
    NSMutableArray *_filterResultListArray;
    NSMutableArray *_filterResultSpecListArray;
    CARFilterGuideViewManager *_userGuideManager;
}

@property(retain, nonatomic) CARFilterGuideViewManager *userGuideManager; // @synthesize userGuideManager=_userGuideManager;
@property(retain, nonatomic) NSMutableArray *filterResultSpecListArray; // @synthesize filterResultSpecListArray=_filterResultSpecListArray;
@property(retain, nonatomic) NSMutableArray *filterResultListArray; // @synthesize filterResultListArray=_filterResultListArray;
@property(retain, nonatomic) CARFilterService *filterResultService; // @synthesize filterResultService=_filterResultService;
@property(copy, nonatomic) NSString *filterResultTitle; // @synthesize filterResultTitle=_filterResultTitle;
@property(retain, nonatomic) NSMutableArray *moreFilterVCSelBrandTagArrayM; // @synthesize moreFilterVCSelBrandTagArrayM=_moreFilterVCSelBrandTagArrayM;
@property(retain, nonatomic) NSMutableArray *filterBrandListArray; // @synthesize filterBrandListArray=_filterBrandListArray;
@property(retain, nonatomic) NSMutableArray *moreFilterVCSelTagArrayM; // @synthesize moreFilterVCSelTagArrayM=_moreFilterVCSelTagArrayM;
@property(retain, nonatomic) CARMoreFilterViewController *moreFilterViewController; // @synthesize moreFilterViewController=_moreFilterViewController;
@property(retain, nonatomic) NSMutableArray *moreFilterDataListArray; // @synthesize moreFilterDataListArray=_moreFilterDataListArray;
@property(retain, nonatomic) CARFilterCommonView *useSelectCarVew; // @synthesize useSelectCarVew=_useSelectCarVew;
@property(retain, nonatomic) NSMutableArray *useSelCarFilterSelTagArrayM; // @synthesize useSelCarFilterSelTagArrayM=_useSelCarFilterSelTagArrayM;
@property(retain, nonatomic) CARFilterNavigationModel *filterUseSelCarNavigation; // @synthesize filterUseSelCarNavigation=_filterUseSelCarNavigation;
@property(nonatomic) _Bool carGamePopPriceView; // @synthesize carGamePopPriceView=_carGamePopPriceView;
@property(retain, nonatomic) NSMutableArray *inSelectedPriceArray; // @synthesize inSelectedPriceArray=_inSelectedPriceArray;
@property(retain, nonatomic) CARFilterNavigationModel *curSelPriceNavigation; // @synthesize curSelPriceNavigation=_curSelPriceNavigation;
@property(retain, nonatomic) CARFilterNavigationModel *filterPriceNavigation; // @synthesize filterPriceNavigation=_filterPriceNavigation;
@property(retain, nonatomic) CARFilterPriceView *filterPriceView; // @synthesize filterPriceView=_filterPriceView;
@property(nonatomic) long long sortCurrSelIndex; // @synthesize sortCurrSelIndex=_sortCurrSelIndex;
@property(retain, nonatomic) CARPopSortViewManager *attentionSortViewManager; // @synthesize attentionSortViewManager=_attentionSortViewManager;
@property(retain, nonatomic) NSArray *filterOrderArray; // @synthesize filterOrderArray=_filterOrderArray;
@property(retain, nonatomic) NSMutableArray *showTagArrayM; // @synthesize showTagArrayM=_showTagArrayM;
@property(retain, nonatomic) CARFilterTopView *topTagShowView; // @synthesize topTagShowView=_topTagShowView;
@property(retain, nonatomic) NSMutableArray *topMenuViewDataArrayM; // @synthesize topMenuViewDataArrayM=_topMenuViewDataArrayM;
@property(retain, nonatomic) FilterAdpterMenu *topMenuView; // @synthesize topMenuView=_topMenuView;
@property(retain, nonatomic) CARFilterNavView *filterNavView; // @synthesize filterNavView=_filterNavView;
@property(retain, nonatomic) NSMutableArray *asisstantSelMoreConditionArray; // @synthesize asisstantSelMoreConditionArray=_asisstantSelMoreConditionArray;
@property(retain, nonatomic) NSMutableArray *asisstantUseSelectCarArray; // @synthesize asisstantUseSelectCarArray=_asisstantUseSelectCarArray;
@property(retain, nonatomic) NSMutableArray *asisstantSelBrandArray; // @synthesize asisstantSelBrandArray=_asisstantSelBrandArray;
@property(retain, nonatomic) NSMutableArray *asisstantSelPriceArray; // @synthesize asisstantSelPriceArray=_asisstantSelPriceArray;
@property(retain, nonatomic) NSMutableArray *asisstantSelAttentionArray; // @synthesize asisstantSelAttentionArray=_asisstantSelAttentionArray;
@property(retain, nonatomic) NSMutableArray *asisstantListDataArray; // @synthesize asisstantListDataArray=_asisstantListDataArray;
@property(retain, nonatomic) CARFilterDataHandle *filterDataHandle; // @synthesize filterDataHandle=_filterDataHandle;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) _Bool isFrom3DTouch; // @synthesize isFrom3DTouch=_isFrom3DTouch;
@property(retain, nonatomic) CARFilterModel *choseFilter; // @synthesize choseFilter=_choseFilter;
@property(retain, nonatomic) CARFilterCarOptionsSerManager *filterOptionSerManager; // @synthesize filterOptionSerManager=_filterOptionSerManager;
@property(retain, nonatomic) CARFilterCarOptionsService *filterOptionSer; // @synthesize filterOptionSer=_filterOptionSer;
@property(nonatomic) _Bool isPopPriceView; // @synthesize isPopPriceView=_isPopPriceView;
@property(retain, nonatomic) NSArray *outSelectedMoreConditionArray; // @synthesize outSelectedMoreConditionArray=_outSelectedMoreConditionArray;
@property(retain, nonatomic) NSArray *outSelectedUsedSelCarArray; // @synthesize outSelectedUsedSelCarArray=_outSelectedUsedSelCarArray;
@property(retain, nonatomic) NSArray *outSelectedBrandArray; // @synthesize outSelectedBrandArray=_outSelectedBrandArray;
@property(retain, nonatomic) NSArray *outSelectedDistanceArray; // @synthesize outSelectedDistanceArray=_outSelectedDistanceArray;
@property(retain, nonatomic) NSArray *outSelectedPriceArray; // @synthesize outSelectedPriceArray=_outSelectedPriceArray;
@property(retain, nonatomic) NSArray *outSelectedAttentionArray; // @synthesize outSelectedAttentionArray=_outSelectedAttentionArray;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) long long conditionfromType; // @synthesize conditionfromType=_conditionfromType;
@property(retain, nonatomic) AHNavigationController *parentNavigationController; // @synthesize parentNavigationController=_parentNavigationController;
@property(retain, nonatomic) AHLoadingView *loadingView; // @synthesize loadingView;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)navigationGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)showFilterMoreView;
- (void)showUseSelCarView;
- (void)showFilterPriceView;
- (void)showAttentionPopSortView;
- (void)showFilterAttentionView;
- (void)deleteButtonClickToDistance:(id)arg1;
- (void)deleteButtonClickToDelMore:(id)arg1;
- (void)deleteButtonClickToDelUseSelectCar:(id)arg1;
- (void)deleteButtonClickToDelBrand:(id)arg1;
- (void)deleteButtonClickToDelPrice:(id)arg1;
- (void)updateTagViewAndRequestData;
- (void)showErrorTipStatusBlueView;
- (void)updateTopMenuViewData;
- (void)resetTopMenuView;
- (void)updateTopScollNavTitle:(id)arg1 withListData:(id)arg2 scrollNavType:(long long)arg3;
- (void)updateAttentionButtonTitleWithIndex:(long long)arg1;
- (void)updateFilterUseId;
- (void)handleTopTagViewShow;
- (void)handleTopTagViewHidden;
- (void)handleTopTagViewShowOrHidden;
- (void)updatePriceTitleAndMinPrice:(long long)arg1 maxPrice:(long long)arg2;
- (void)updateShowTagArrayData;
- (void)carMoreFilterViewVCCloseButtonClickAction;
- (void)carMoreFilterViewVCResultButtonClickAction:(id)arg1 moreSelTagListArrayM:(id)arg2 brandSelTagListArrayM:(id)arg3 withFilterMarkList:(id)arg4;
- (void)carMoreFilterViewVCSubItemUpdateData:(id)arg1;
- (void)carFitlerCommenViewOfTagButtonClick:(id)arg1;
- (void)filterResultButtonDidClickWithCurSelPriceBtn:(id)arg1 minPrice:(long long)arg2 maxPrice:(long long)arg3;
- (void)filterPriceTagCustomButtonDidClick:(id)arg1;
- (void)handleFilterPriceTagWithModel:(id)arg1 isSelected:(_Bool)arg2 minPrice:(long long)arg3 maxPrice:(long long)arg4;
- (void)filterPriceViewOfCoverViewDidClick;
- (void)filterPriceTagButtonDidClick:(id)arg1 minPrice:(long long)arg2 maxPrice:(long long)arg3;
- (void)carPopSortViewOfCoverViewDidClick;
- (void)sortSelectedIndex:(long long)arg1;
- (void)carPopSortView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (id)handleNavgationArrayToDragSelectModelArray:(id)arg1;
- (id)carPopSortViewDataArrayOfItem:(id)arg1;
- (void)filterAdpterMenuDidClickIndex:(long long)arg1 filterAdpterMenuItemModel:(id)arg2 filterAdpterMenu:(id)arg3;
- (_Bool)arrowTransformWhenFilterAdpterMenuDidClick:(long long)arg1;
- (void)carFilterTopViewTagBtnClick:(id)arg1;
- (void)carFitlerCommenViewOfCoverViewClick;
- (void)resetMoreCondtionDataAndUI;
- (void)resetUseSelCarDataAndUI;
- (void)resetFilterPriceDataAndUI;
- (void)resetAttentionDataAndUI;
- (void)redsetUseSelCarViewToHidden;
- (void)resetPriceViewToHidden;
- (void)resetAttentionToHidden;
- (void)resetAttentionPriceUseCarShowViewToHidden;
- (void)carFilterNavViewResetButtonAction:(id)arg1;
- (void)carFilterNavViewBackButtonAction:(id)arg1;
- (void)netServiceError:(long long)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3;
- (void)netServiceFinished:(long long)arg1 netServiceObj:(id)arg2;
- (void)netServiceStarted:(long long)arg1;
- (void)jumpSpecViewControllerDidClickIndex:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)AHLoadingViewReloadClick:(id)arg1;
- (void)showResultListDataMore;
- (void)getResultListDataWithFilterModel:(id)arg1;
- (void)getResultListData;
- (void)pullUpdateTriggering:(id)arg1 type:(long long)arg2;
- (void)postPagePV;
- (id)handlePvConditionWithCacheKey:(id)arg1;
- (void)postPvOnResultBtnClick;
- (void)udpateFilterOptionSerLocalData;
- (void)initServies;
- (void)initLoadingView;
- (void)initTableView;
- (void)initTopTagShowView;
- (void)initTopMenuView;
- (void)initNavView;
- (void)initSubViews;
- (void)handleOutSelectedTagArrayAndTopTagView;
- (void)handleOutSelectedMoreConditionData;
- (void)handleOutSelectedDistance;
- (void)handleOutSelectedUsedSelCarData;
- (void)handleOutSelectedBrandData;
- (void)handleAsisstantCustomPriceWithNavigation:(id)arg1;
- (void)handleOutSelectedPriceDataWithAsisstant:(_Bool)arg1;
- (void)handleOutSelectedPriceData;
- (void)handleOutSelectedAttentionData;
- (void)handleOutSelectedTagData;
- (void)handleSelectCarHallOfPriceSelected;
- (void)handleSelectCarHallData;
- (void)initMoreConditionListData;
- (void)initUsedSelCarData;
- (void)initBrandListData;
- (void)initFilterPriceData;
- (void)initAttentionListData;
- (void)initTopMenuViewData;
- (void)initData;
- (void)initAsisstantDisplacement;
- (void)handleAsisstantSelectedMoreConditionData;
- (void)handleAsisstantSelectedBrandData;
- (void)handleAsisstantUseSelectCarData;
- (void)handleAsisstantSelectedPriceData;
- (void)handleAsisstantSelectedAttentionData;
- (void)handleAsisstantSelectedTagData;
- (void)handleAsisstantMoreData;
- (void)handleAsisstantUsedSelCarData;
- (void)handleAsisstantBrandData;
- (void)handleAsisstantPriceData;
- (void)handleAsisstantAttentionData;
- (void)initAsisstantData;
- (void)checkNavigationController;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)setup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isLoadCache;
@property(nonatomic) _Bool isLoadNewData;
@property(nonatomic) _Bool isLoadView;
@property(readonly) Class superclass;

@end

