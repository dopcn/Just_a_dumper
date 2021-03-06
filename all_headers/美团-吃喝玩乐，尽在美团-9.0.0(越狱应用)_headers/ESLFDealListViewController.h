//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTDragRefreshTableViewController.h"

#import "MRDLocationManagerDelegate-Protocol.h"
#import "SAKFetchedResultsControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ESLFDealListService, METNoNetworkPlaceHolderView, MTDealListLoadMoreProcessor, MTDealListNoContentView, MTHomeCategory, MTImageAnimationLoadingView, NSArray, NSDictionary, NSMutableArray, NSMutableSet, NSNumber, NSString, SAKCity, SAKFetchedResultsController, SAKTableViewDelegateChainer;

@interface ESLFDealListViewController : MTDragRefreshTableViewController <UITableViewDelegate, UITableViewDataSource, MRDLocationManagerDelegate, SAKFetchedResultsControllerDelegate>
{
    unsigned long long _totalCount;
    NSMutableSet *_expandedSectionSet;
    _Bool _isResetData;
    SAKTableViewDelegateChainer *_tableViewDelegateProcessor;
    MTDealListLoadMoreProcessor *_loadMoreProcessor;
    _Bool _needReconfigureProcessors;
    NSNumber *_loadedADCategoryID;
    _Bool _hasGroup;
    _Bool _loadingData;
    _Bool _locationUnAvailable;
    _Bool _showLocationUnAvailableView;
    _Bool _isPortalLocation;
    _Bool _popUpMessage;
    _Bool _shouldCancelOperation;
    int _criteriaID;
    int _sortType;
    ESLFDealListService *_poiService;
    SAKCity *_city;
    MTHomeCategory *_category;
    long long _criteria;
    NSString *_currentAreaName;
    NSDictionary *_filterDictionary;
    long long _entryPoint;
    NSString *_currentAddress;
    CDUnknownBlockType _authoringLocation;
    NSString *_recommendSelectionStrategy;
    MTImageAnimationLoadingView *_loadingImageView;
    METNoNetworkPlaceHolderView *_noNetworkView;
    MTDealListNoContentView *_noContentView;
    NSMutableArray *_operationArray;
    long long _offset;
    NSMutableArray *_rowsInSection;
}

@property(retain, nonatomic) NSMutableArray *rowsInSection; // @synthesize rowsInSection=_rowsInSection;
@property(nonatomic) _Bool shouldCancelOperation; // @synthesize shouldCancelOperation=_shouldCancelOperation;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSMutableArray *operationArray; // @synthesize operationArray=_operationArray;
@property(nonatomic) _Bool popUpMessage; // @synthesize popUpMessage=_popUpMessage;
@property(retain, nonatomic) MTDealListNoContentView *noContentView; // @synthesize noContentView=_noContentView;
@property(retain, nonatomic) METNoNetworkPlaceHolderView *noNetworkView; // @synthesize noNetworkView=_noNetworkView;
@property(retain, nonatomic) MTImageAnimationLoadingView *loadingImageView; // @synthesize loadingImageView=_loadingImageView;
@property(nonatomic) _Bool isPortalLocation; // @synthesize isPortalLocation=_isPortalLocation;
@property(copy, nonatomic) NSString *recommendSelectionStrategy; // @synthesize recommendSelectionStrategy=_recommendSelectionStrategy;
@property(copy, nonatomic) CDUnknownBlockType authoringLocation; // @synthesize authoringLocation=_authoringLocation;
@property(nonatomic) _Bool showLocationUnAvailableView; // @synthesize showLocationUnAvailableView=_showLocationUnAvailableView;
@property(nonatomic) _Bool locationUnAvailable; // @synthesize locationUnAvailable=_locationUnAvailable;
@property(copy, nonatomic) NSString *currentAddress; // @synthesize currentAddress=_currentAddress;
@property(nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(copy, nonatomic) NSDictionary *filterDictionary; // @synthesize filterDictionary=_filterDictionary;
@property(nonatomic, getter=isLoadingData) _Bool loadingData; // @synthesize loadingData=_loadingData;
@property(nonatomic) _Bool hasGroup; // @synthesize hasGroup=_hasGroup;
@property(nonatomic) int sortType; // @synthesize sortType=_sortType;
@property(nonatomic) int criteriaID; // @synthesize criteriaID=_criteriaID;
@property(copy, nonatomic) NSString *currentAreaName; // @synthesize currentAreaName=_currentAreaName;
@property(nonatomic) long long criteria; // @synthesize criteria=_criteria;
@property(retain, nonatomic) MTHomeCategory *category; // @synthesize category=_category;
@property(retain, nonatomic) SAKCity *city; // @synthesize city=_city;
- (void).cxx_destruct;
- (void)reportAdvertClickWithMerchant:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)configureTableViewDelegateProcessor;
- (void)refreshOperationArrayByDataSource:(id)arg1;
- (void)refresh;
- (void)resetLoadedDataList;
- (void)resetDataList;
- (void)getDataWithType:(int)arg1;
- (void)refreshData;
- (void)loadMore;
- (_Bool)shouldShowLocationIndicator;
- (_Bool)shouldMergePOI;
- (void)setCurrentLocation:(id)arg1;
- (void)reloadCriteria;
- (void)displayNoNetworkHintImmediately;
- (_Bool)displayNoNetworkHintIfNeeded;
@property(readonly, nonatomic) SAKFetchedResultsController *fetchedResultsController;
- (long long)fetchResultCount;
- (_Bool)isPurePoi;
- (long long)serviceType;
@property(readonly, nonatomic) int categoryID;
@property(readonly, nonatomic) NSArray *fetchedResults;
@property(readonly, nonatomic) ESLFDealListService *poiService; // @synthesize poiService=_poiService;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

