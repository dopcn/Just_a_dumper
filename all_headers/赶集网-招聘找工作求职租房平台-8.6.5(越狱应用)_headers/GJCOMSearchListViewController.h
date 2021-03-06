//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GJUIViewController.h"

#import "GJCOMFilterViewDatasource-Protocol.h"
#import "GJCOMFilterViewDelegate-Protocol.h"
#import "GJCOMSearchSuggestionListDelegate-Protocol.h"
#import "RefreshViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class FilterBaseClass, FilterBaseView, GJCOMFilterView, GJCOMSearchSuggestionTableViewController, MyTextField, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, RefreshView, UITableView, UITableViewCell;

@interface GJCOMSearchListViewController : GJUIViewController <GJCOMFilterViewDatasource, GJCOMFilterViewDelegate, GJCOMSearchSuggestionListDelegate, UIActionSheetDelegate, UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, RefreshViewDelegate>
{
    MyTextField *mainTF;
    NSString *keyword;
    NSArray *categoryArray;
    NSArray *searchArray;
    long long selectIndex;
    NSMutableArray *listArray;
    NSString *nowMasterIndex;
    NSString *nowMajorIndex;
    NSMutableDictionary *filterConditionDic;
    NSMutableArray *quickFilterArray;
    NSMutableArray *quickFilterKeyArray;
    NSArray *filterArray;
    NSArray *majorScriptArray;
    NSMutableDictionary *majorScriptDic;
    long long selectRow;
    long long districtSelectRow;
    long long categorySelectRow;
    NSArray *pickerArray;
    NSMutableDictionary *pickerSelectDic;
    NSArray *categoryFilterArray;
    NSString *urlStr;
    UITableViewCell *moreListCell;
    NSString *categoryTitle;
    unsigned long long _scrollToIndexWhenAppaer;
    _Bool _isLoading;
    _Bool _isHaveMoreData;
    _Bool _isNeedRestListArray;
    _Bool _isPushDownRefreshing;
    _Bool _isTextFiledEndEdit;
    _Bool _isHadLoadFilter;
    int _masterId;
    int _nowPage;
    long long _majorId;
    NSString *_fromString;
    GJCOMFilterView *_filterView;
    GJCOMSearchSuggestionTableViewController *_suggestionTableViewController;
    double _cellHegiht;
    NSString *_cellIdentifier;
    FilterBaseClass *_filterBase;
    FilterBaseView *_newfilterView;
    NSArray *_nodeParams;
    NSDictionary *_categoryParams;
    RefreshView *_refreshView;
    UITableView *_mainTbl;
}

@property(nonatomic) _Bool isHadLoadFilter; // @synthesize isHadLoadFilter=_isHadLoadFilter;
@property(nonatomic) _Bool isTextFiledEndEdit; // @synthesize isTextFiledEndEdit=_isTextFiledEndEdit;
@property(retain, nonatomic) UITableView *mainTbl; // @synthesize mainTbl=_mainTbl;
@property(retain, nonatomic) RefreshView *refreshView; // @synthesize refreshView=_refreshView;
@property(nonatomic) _Bool isPushDownRefreshing; // @synthesize isPushDownRefreshing=_isPushDownRefreshing;
@property(nonatomic) _Bool isNeedRestListArray; // @synthesize isNeedRestListArray=_isNeedRestListArray;
@property(nonatomic) _Bool isHaveMoreData; // @synthesize isHaveMoreData=_isHaveMoreData;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) int nowPage; // @synthesize nowPage=_nowPage;
@property(retain, nonatomic) NSDictionary *categoryParams; // @synthesize categoryParams=_categoryParams;
@property(retain, nonatomic) NSArray *nodeParams; // @synthesize nodeParams=_nodeParams;
@property(retain, nonatomic) FilterBaseView *newfilterView; // @synthesize newfilterView=_newfilterView;
@property(retain, nonatomic) FilterBaseClass *filterBase; // @synthesize filterBase=_filterBase;
@property(copy, nonatomic) NSString *cellIdentifier; // @synthesize cellIdentifier=_cellIdentifier;
@property(nonatomic) double cellHegiht; // @synthesize cellHegiht=_cellHegiht;
@property(retain, nonatomic) GJCOMSearchSuggestionTableViewController *suggestionTableViewController; // @synthesize suggestionTableViewController=_suggestionTableViewController;
@property(retain, nonatomic) GJCOMFilterView *filterView; // @synthesize filterView=_filterView;
@property(copy, nonatomic) NSString *fromString; // @synthesize fromString=_fromString;
@property(nonatomic) long long majorId; // @synthesize majorId=_majorId;
@property(nonatomic) int masterId; // @synthesize masterId=_masterId;
@property(retain, nonatomic) NSArray *categoryFilterArray; // @synthesize categoryFilterArray;
@property(retain, nonatomic) NSMutableDictionary *pickerSelectDic; // @synthesize pickerSelectDic;
@property(retain, nonatomic) NSMutableDictionary *majorScriptDic; // @synthesize majorScriptDic;
@property(retain, nonatomic) NSArray *majorScriptArray; // @synthesize majorScriptArray;
@property(retain, nonatomic) NSArray *filterArray; // @synthesize filterArray;
@property(retain, nonatomic) NSMutableArray *quickFilterKeyArray; // @synthesize quickFilterKeyArray;
@property(retain, nonatomic) NSMutableArray *quickFilterArray; // @synthesize quickFilterArray;
@property(retain, nonatomic) NSMutableDictionary *filterConditionDic; // @synthesize filterConditionDic;
@property(copy, nonatomic) NSString *nowMajorIndex; // @synthesize nowMajorIndex;
@property(copy, nonatomic) NSString *nowMasterIndex; // @synthesize nowMasterIndex;
@property(retain, nonatomic) NSMutableArray *listArray; // @synthesize listArray;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex;
@property(retain, nonatomic) NSArray *searchArray; // @synthesize searchArray;
@property(retain, nonatomic) NSArray *categoryArray; // @synthesize categoryArray;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword;
- (void).cxx_destruct;
- (void)postDetailVCGetPostContentWithPageNumber:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)postDetailNewCurrentIndexWhenPopOrDismiss:(unsigned long long)arg1;
- (void)postDetailNewLoadMoreData:(CDUnknownBlockType)arg1;
- (_Bool)postDetailNewHasMoreData;
- (id)postDetailNewContentArray;
- (void)didReceiveMemoryWarning;
- (void)loadDataWithKeyword:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)searchTextDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textfieldSearchEvent;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)refreshViewDidCallBack;
- (void)refresh;
- (void)startLoading;
- (void)stopLoading;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)moreData;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)jumpSearchCellWithTableview:(id)arg1;
- (_Bool)visibleJumpToSearchListCell;
- (void)gotoFullSiteSearch;
- (void)gotoSearchListWithKeyword:(id)arg1;
- (void)timeOutForNetwork;
- (void)removeLoadingView;
- (void)addLoadingView;
- (void)loadListSuccessWithResult:(id)arg1;
- (void)restartNetwork;
- (void)addErrorTipViewWithErrorMsg:(id)arg1 withBtnTitle:(id)arg2;
- (void)addErrorTipViewWithErrorMsg:(id)arg1;
- (void)addNoNetWorkTipViewWithErrorMsg:(id)arg1;
- (void)loadSearchListWithMasterId:(id)arg1 withKeyword:(id)arg2;
- (void)loadSearchListWithMasterId:(id)arg1 withKeyword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadSearchCategoryWithKeyword:(id)arg1;
- (void)addBuxianFilterOption;
- (id)postRequestParam;
- (void)goBack;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)searchSuggestionListDidEndEditing:(id)arg1;
- (void)searchSuggestionList:(id)arg1 didSelectKeywordText:(id)arg2;
- (void)searchSuggestionList:(id)arg1 didSelectKeywordFromSuggestion:(id)arg2;
- (void)searchSuggestionList:(id)arg1 didSelectKeywordFromHistory:(id)arg2;
- (void)searchSuggestionListDidSelectClearHistory:(id)arg1;
- (void)searchSuggestionListDidSelectJumpToSearch:(id)arg1;
- (id)searchSuggestionListCurrentKeyword:(id)arg1;
- (id)searchTableView;
- (_Bool)shouldShowSearchBar;
- (void)filterViewDidRefresh:(id)arg1 withRootNode:(id)arg2 withKeyWord:(id)arg3;
- (Class)filterView:(id)arg1 optionListClassAtIndex:(long long)arg2;
- (_Bool)filterViewVisibleMutibleWithNode:(id)arg1;
- (id)getNodeNameForLog:(id)arg1;
- (void)filterView:(id)arg1 didSelectedNode:(id)arg2 atIndexOfBarItem:(long long)arg3;
- (long long)numberOfBarItemsShoudDisplayInFilterView:(id)arg1;
- (id)filterKeyWord;
- (void)searchWithKeyword:(id)arg1;
- (void)makeFilterView:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)gotoSearch;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)resetAppStreet;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

