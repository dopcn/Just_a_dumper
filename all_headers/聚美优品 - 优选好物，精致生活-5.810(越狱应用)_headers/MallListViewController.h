//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAEProductsListViewController.h"

@class JM_MallProductItemData, NSString;

@interface MallListViewController : MAEProductsListViewController
{
    _Bool _isNeedShowLoadingView;
    NSString *_brandID;
    NSString *_categoryID;
    NSString *_funcationID;
    NSString *_searchKey;
    NSString *_minPrice;
    NSString *_maxPrice;
    NSString *_shell_status;
    NSString *_priceID;
    JM_MallProductItemData *_selectedMallItemData;
    long long _fromTabIndex;
}

@property(nonatomic) long long fromTabIndex; // @synthesize fromTabIndex=_fromTabIndex;
@property(nonatomic) _Bool isNeedShowLoadingView; // @synthesize isNeedShowLoadingView=_isNeedShowLoadingView;
@property(retain, nonatomic) JM_MallProductItemData *selectedMallItemData; // @synthesize selectedMallItemData=_selectedMallItemData;
@property(retain, nonatomic) NSString *priceID; // @synthesize priceID=_priceID;
@property(retain, nonatomic) NSString *shell_status; // @synthesize shell_status=_shell_status;
@property(retain, nonatomic) NSString *maxPrice; // @synthesize maxPrice=_maxPrice;
@property(retain, nonatomic) NSString *minPrice; // @synthesize minPrice=_minPrice;
@property(retain, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
@property(retain, nonatomic) NSString *funcationID; // @synthesize funcationID=_funcationID;
@property(retain, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(retain, nonatomic) NSString *brandID; // @synthesize brandID=_brandID;
- (void).cxx_destruct;
- (id)getMallSortTypeBySortItemData:(id)arg1;
- (id)getSortItemDataByMallSortType:(id)arg1;
- (void)initMallListData;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadMoreData;
- (void)resetShareImageUrl;
- (void)handleRequestSucess:(id)arg1;
- (void)loadDataIgnoreCache;
- (void)loadData;
- (void)doRefreshIgnoreCache;
- (void)reloadTableViewDataSource;
- (void)dealloc;
- (void)viewDidLoad;
- (void)backsNextControllerEvent:(id)arg1;
- (id)initWithBrandID:(id)arg1 categoryID:(id)arg2 functionID:(id)arg3 searchKey:(id)arg4 navTitle:(id)arg5;
- (id)initWithBrandID:(id)arg1 categoryID:(id)arg2 functionID:(id)arg3 searchKey:(id)arg4;
- (id)initWithBrandID:(id)arg1 categoryID:(id)arg2 functionID:(id)arg3 navTitle:(id)arg4;
- (id)initWithBrandID:(id)arg1 categoryID:(id)arg2 functionID:(id)arg3;
- (id)init;

@end

