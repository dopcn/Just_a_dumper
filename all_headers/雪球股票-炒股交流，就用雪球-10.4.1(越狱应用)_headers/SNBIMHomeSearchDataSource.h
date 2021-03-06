//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CALayer, NSArray, NSMutableArray, NSMutableDictionary, NSString, SNBIMHomeViewController;

@interface SNBIMHomeSearchDataSource : NSObject <UISearchBarDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *_allUsers;
    NSArray *_localUsers;
    NSArray *_allGroups;
    NSMutableDictionary *_searchResult;
    NSMutableArray *_titles;
    long long shouldReloadData;
    long long page;
    long long maxPage;
    _Bool isLoading;
    NSString *_searchText;
    CALayer *_shadowLayer;
    SNBIMHomeViewController *_controller;
}

@property(nonatomic) __weak SNBIMHomeViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)loadMoreData;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)getLocalUsers:(CDUnknownBlockType)arg1;
- (id)creatSessionWithTarget:(id)arg1;
- (void)reloadData;
- (void)clearAndExitSearch;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)loadContactAndDialogue;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

