//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JUViewControllerBase.h"

#import "JUSearchNavBarProtocol-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JHSDataSource, JHSError, JHSErrorInfoHandler, JHSSearchKeywordDataSource, JHSSearchSegmentView, JHSUTListModel, JUSearchNavBar, NSString, UITableView, UIView;

@interface JUSearchDisplayController : JUViewControllerBase <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, JUSearchNavBarProtocol>
{
    NSString *_keyword;
    NSString *_sort;
    NSString *_reverses;
    JHSDataSource *_resultDataSource;
    JHSUTListModel *_utModel;
    JHSSearchKeywordDataSource *_keywordDataSource;
    JHSError *_emptyError;
    JHSErrorInfoHandler *_errorHandler;
    JUSearchNavBar *_searchNavBar;
    UITableView *_resultsTableView;
    UITableView *_historyTableView;
    JHSSearchSegmentView *_searchSegmentView;
    UIView *_emptyHistoryFooterView;
    UIView *_suggestionFooterView;
    _Bool _initiativeSearch;
}

- (void).cxx_destruct;
- (id)popAnimatedTransitioning;
- (id)pushAnimatedTransitioning;
- (long long)preferredStatusBarStyle;
- (id)suggestionFooterView;
- (id)emptyHistoryFooterView;
- (void)showPopLayerWithKeyword:(id)arg1;
- (void)gotoSearchResultViewController:(id)arg1;
- (void)addKeywordToTextField:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)searchWithKey:(id)arg1;
- (_Bool)searchForAutomation:(id)arg1;
- (void)navBack:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)killScroll;
- (void)loadDataFromDataSource;
- (void)refreshHistoryTableView;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)buildFootViewInHistoryTableView;
- (id)resultsTableView;
- (id)historyTableView;
- (id)searchSegmentView;
- (id)searchNavBar;
- (struct CGRect)resultsTableViewRectWhenSegHidden;
- (struct CGRect)resultsTableViewRect;
- (struct CGRect)historyTableViewRect;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)clearHistory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

