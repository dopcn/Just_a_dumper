//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISearchDisplayController.h>

#import "AMapSearchDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AMapSearchAPI, NSArray, NSMutableArray, NSString;
@protocol LCLocationSearchDisplayDelegate;

@interface LCLocationSearchDisplayController : UISearchDisplayController <UITableViewDataSource, UITableViewDelegate, UISearchDisplayDelegate, UISearchBarDelegate, AMapSearchDelegate>
{
    _Bool _isLoading;
    _Bool _hasNextPage;
    id <LCLocationSearchDisplayDelegate> _searchDelegate;
    NSString *_currentCity;
    NSMutableArray *_datas;
    unsigned long long _currentPage;
    AMapSearchAPI *_search;
    NSArray *_filterDatas;
}

@property(retain, nonatomic) NSArray *filterDatas; // @synthesize filterDatas=_filterDatas;
@property(retain, nonatomic) AMapSearchAPI *search; // @synthesize search=_search;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSMutableArray *datas; // @synthesize datas=_datas;
@property(retain, nonatomic) NSString *currentCity; // @synthesize currentCity=_currentCity;
@property(nonatomic) __weak id <LCLocationSearchDisplayDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onPOISearchDone:(id)arg1 response:(id)arg2;
- (void)AMapSearchRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)requestData:(id)arg1;
- (id)cellForLoadmore;
- (id)cellForLocationWithIndexPath:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadFirstPage;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

