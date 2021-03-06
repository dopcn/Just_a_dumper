//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYMMovieCommonViewController.h"

#import "QYMMovieTableViewCellDelegate-Protocol.h"
#import "QYMSearchModelCtrlDelegate-Protocol.h"
#import "QYMTableViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSMutableArray, NSString, NSTimer, QYMCinemaListCell, QYMSearchModelController, QYMTableView, QYMTextField, QYMovieDetailDataManager, QYMyMovieTicketsToastView, UIButton, UITableView, UIView;

@interface QYMSearchViewController : QYMMovieCommonViewController <QYMTableViewDelegate, UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate, QYMSearchModelCtrlDelegate, QYMMovieTableViewCellDelegate>
{
    _Bool _isChangeSearchingMode;
    _Bool _searchFailed;
    _Bool _isInputing;
    long long _searchType;
    long long _suggestType;
    NSString *_searchPlaceholder;
    NSString *_searchMovieId;
    UIView *_titleBarMaskView;
    QYMTextField *_searchField;
    UIButton *_searchBtn;
    NSString *_searchStr;
    NSMutableArray *_searchHistoryData;
    QYMTableView *_searchHistoryTableView;
    UITableView *_searchingTableView;
    QYMSearchModelController *_searchModelMgr;
    NSTimer *_timer;
    NSMutableArray *_moviesArray;
    NSMutableArray *_cinemasArray;
    NSMutableArray *_accurateArray;
    QYMyMovieTicketsToastView *_failedView;
    QYMovieDetailDataManager *_likeDataManager;
    QYMCinemaListCell *_presentListCell;
}

@property(retain, nonatomic) QYMCinemaListCell *presentListCell; // @synthesize presentListCell=_presentListCell;
@property(retain, nonatomic) QYMovieDetailDataManager *likeDataManager; // @synthesize likeDataManager=_likeDataManager;
@property(retain, nonatomic) QYMyMovieTicketsToastView *failedView; // @synthesize failedView=_failedView;
@property(retain, nonatomic) NSMutableArray *accurateArray; // @synthesize accurateArray=_accurateArray;
@property(retain, nonatomic) NSMutableArray *cinemasArray; // @synthesize cinemasArray=_cinemasArray;
@property(retain, nonatomic) NSMutableArray *moviesArray; // @synthesize moviesArray=_moviesArray;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool isInputing; // @synthesize isInputing=_isInputing;
@property(nonatomic) _Bool searchFailed; // @synthesize searchFailed=_searchFailed;
@property(nonatomic) _Bool isChangeSearchingMode; // @synthesize isChangeSearchingMode=_isChangeSearchingMode;
@property(retain, nonatomic) QYMSearchModelController *searchModelMgr; // @synthesize searchModelMgr=_searchModelMgr;
@property(retain, nonatomic) UITableView *searchingTableView; // @synthesize searchingTableView=_searchingTableView;
@property(retain, nonatomic) QYMTableView *searchHistoryTableView; // @synthesize searchHistoryTableView=_searchHistoryTableView;
@property(retain, nonatomic) NSMutableArray *searchHistoryData; // @synthesize searchHistoryData=_searchHistoryData;
@property(retain, nonatomic) NSString *searchStr; // @synthesize searchStr=_searchStr;
@property(retain, nonatomic) UIButton *searchBtn; // @synthesize searchBtn=_searchBtn;
@property(retain, nonatomic) QYMTextField *searchField; // @synthesize searchField=_searchField;
@property(retain, nonatomic) UIView *titleBarMaskView; // @synthesize titleBarMaskView=_titleBarMaskView;
@property(retain, nonatomic) NSString *searchMovieId; // @synthesize searchMovieId=_searchMovieId;
@property(retain, nonatomic) NSString *searchPlaceholder; // @synthesize searchPlaceholder=_searchPlaceholder;
@property(nonatomic) long long suggestType; // @synthesize suggestType=_suggestType;
@property(nonatomic) long long searchType; // @synthesize searchType=_searchType;
- (void).cxx_destruct;
- (_Bool)isEmpty:(id)arg1;
- (void)labelContext:(id)arg1 text:(id)arg2 num:(long long)arg3;
- (id)getHeaderViewWithText:(id)arg1 num:(long long)arg2;
- (void)gotoCinemaDetail:(id)arg1;
- (void)gotoMovieDetail:(id)arg1;
- (id)getCinemaCell:(id)arg1 tableview:(id)arg2;
- (id)getMovieCell:(id)arg1 tableview:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)moreCinemasAction;
- (void)moreMoviesAction;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)searchHistroyContent:(id)arg1;
- (void)noticeClearSearchHistory;
- (void)retryRequest;
- (void)clearSearchHistory;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)delaySendRequest:(id)arg1;
- (void)textFieldDidChanged:(id)arg1;
- (void)toMovieCommentListView:(id)arg1;
- (void)toMovieDetailWithData:(id)arg1 gossipId:(id)arg2;
- (void)toPlayerListVC:(id)arg1;
- (void)toNewsAction:(id)arg1 withType:(long long)arg2;
- (void)wantToSeeCancelAction:(id)arg1;
- (void)wantToSeeAction:(id)arg1;
- (void)selectBuyBtn:(id)arg1;
- (void)searchMoiveStoreFetchFailed;
- (void)searchMoiveStoreFetchSuccuss;
- (void)searchFetchFailed;
- (void)searchFetchSuccuss;
- (void)searchSuggestFetchFailed;
- (void)searchSuggestFetchSuccuss;
- (void)movieDetailLikeChangeInSearch:(id)arg1;
- (void)requestSearchData:(id)arg1 CityID:(id)arg2 Location:(id)arg3 MovieId:(id)arg4 SuggestType:(long long)arg5;
- (void)requestSearchSuggestData:(id)arg1 CityID:(id)arg2 Location:(id)arg3 MovieId:(id)arg4 SuggestType:(long long)arg5;
- (void)goToBack:(id)arg1;
- (void)analyseSearchHistoryData;
- (void)searchAction;
- (void)searchingSuggestAction;
- (void)initSearchingTableView;
- (void)initSearchHistotyTableView;
- (void)initAddCouponCodeButton;
- (void)initCouponSearchView;
- (void)initTitleMaskView;
- (void)initData;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)qyCommonViewDisappear;
- (void)qyCommonViewAppear;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

