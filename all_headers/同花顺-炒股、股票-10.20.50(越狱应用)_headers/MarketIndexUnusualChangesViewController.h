//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TabModuleBaseViewController.h"

#import "ChangeYiDongTimeButtonDelegate-Protocol.h"
#import "ClickOnSpecialDate-Protocol.h"
#import "HXBaseViewControllerProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CCSegmentViewCell, HXSocketFetcher, HXYiDongBiaoQianModel, HXYiDongDataResult, HXYiDongEmptyView, HXYiDongNoLoginView, NSDate, NSMutableArray, NSString, UIActivityIndicatorView, UIImageView, UITableView, UIView, UnusualChangesStockRealData, UnusualChangesTimeSharingViewController;
@protocol HXMarketIndexUnusualUpdateHeightDelegate;

@interface MarketIndexUnusualChangesViewController : TabModuleBaseViewController <UITableViewDelegate, UITableViewDataSource, ChangeYiDongTimeButtonDelegate, ClickOnSpecialDate, HXBaseViewControllerProtocol>
{
    _Bool _canScroll;
    _Bool _hasShowRedPoint;
    _Bool _isToday;
    _Bool _onlyPostOnce;
    id <HXMarketIndexUnusualUpdateHeightDelegate> _heightDelegate;
    UITableView *_tableView;
    HXSocketFetcher *_fetcher;
    HXSocketFetcher *_dingYueFetcher;
    NSMutableArray *_flagArray;
    NSMutableArray *_dataArray;
    HXYiDongDataResult *_dataResult;
    long long _startDate;
    UnusualChangesTimeSharingViewController *_unusualTimeSharingVC;
    NSMutableArray *_yiDongSelectedArrayBtn;
    HXYiDongBiaoQianModel *_biaoQianModel;
    UnusualChangesStockRealData *_realDataModel;
    CCSegmentViewCell *_segmentViewCell;
    NSString *_selectDateStr;
    HXYiDongEmptyView *_emptyView;
    HXYiDongNoLoginView *_noLoginView;
    UIImageView *_bgImageView;
    UIView *_tableViewListCover;
    NSDate *_selectDate;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property(nonatomic) _Bool onlyPostOnce; // @synthesize onlyPostOnce=_onlyPostOnce;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) NSDate *selectDate; // @synthesize selectDate=_selectDate;
@property(retain, nonatomic) UIView *tableViewListCover; // @synthesize tableViewListCover=_tableViewListCover;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) HXYiDongNoLoginView *noLoginView; // @synthesize noLoginView=_noLoginView;
@property(retain, nonatomic) HXYiDongEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) NSString *selectDateStr; // @synthesize selectDateStr=_selectDateStr;
@property(nonatomic) _Bool isToday; // @synthesize isToday=_isToday;
@property(nonatomic) _Bool hasShowRedPoint; // @synthesize hasShowRedPoint=_hasShowRedPoint;
@property(nonatomic) __weak CCSegmentViewCell *segmentViewCell; // @synthesize segmentViewCell=_segmentViewCell;
@property(retain, nonatomic) UnusualChangesStockRealData *realDataModel; // @synthesize realDataModel=_realDataModel;
@property(retain, nonatomic) HXYiDongBiaoQianModel *biaoQianModel; // @synthesize biaoQianModel=_biaoQianModel;
@property(retain, nonatomic) NSMutableArray *yiDongSelectedArrayBtn; // @synthesize yiDongSelectedArrayBtn=_yiDongSelectedArrayBtn;
@property(retain, nonatomic) UnusualChangesTimeSharingViewController *unusualTimeSharingVC; // @synthesize unusualTimeSharingVC=_unusualTimeSharingVC;
@property(nonatomic) long long startDate; // @synthesize startDate=_startDate;
@property(nonatomic) _Bool canScroll; // @synthesize canScroll=_canScroll;
@property(retain, nonatomic) HXYiDongDataResult *dataResult; // @synthesize dataResult=_dataResult;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSMutableArray *flagArray; // @synthesize flagArray=_flagArray;
@property(retain, nonatomic) HXSocketFetcher *dingYueFetcher; // @synthesize dingYueFetcher=_dingYueFetcher;
@property(retain, nonatomic) HXSocketFetcher *fetcher; // @synthesize fetcher=_fetcher;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <HXMarketIndexUnusualUpdateHeightDelegate> heightDelegate; // @synthesize heightDelegate=_heightDelegate;
- (void).cxx_destruct;
- (void)whenListContainer:(id)arg1 didScrolling:(id)arg2;
- (void)whenSegmentView:(id)arg1 selectedAtIndex:(long long)arg2;
- (void)didWhenCreateSegment:(id)arg1;
- (void)clickOnSpecialDate:(id)arg1 andIsToday:(_Bool)arg2;
- (void)changeYiDongTimeButtonStateRow:(long long)arg1 andSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)makeNoLoginBgViewConstraint;
- (void)makeEmptyViewConstraint;
- (void)removNoLoginView;
- (void)showNoLogin;
- (void)showEmptyPage;
- (void)setYiDongRealData:(id)arg1;
- (id)getYiDongTimeStr:(long long)arg1;
- (void)scrollViewToTop;
- (void)updateHeight:(double)arg1;
- (double)getTableViewHeight;
- (double)getTitleHeight:(id)arg1;
- (double)getUsualCellHeightSection:(long long)arg1 andIndexRow:(long long)arg2;
- (double)getCellheightSection:(long long)arg1 andIndexRow:(long long)arg2;
- (id)stockListTextWithStockInfos:(id)arg1;
- (id)marketListTextWithStockInfos:(id)arg1;
- (void)updateBiaoQianWithModel:(id)arg1;
- (id)getSelectDateString:(id)arg1;
- (void)makeConstraintsOnBaseVC;
- (void)hideActivityIndicator;
- (void)showActivityIndicator;
- (void)creatActivityIndicatorView;
- (void)resetYiDongButtonSelectedArr:(long long)arg1;
- (long long)getTheFirstSelcetYiDongBtn;
- (void)resetFlagArr;
- (void)requestRealZDFData;
- (void)dealHttpYiDongData:(id)arg1;
- (void)dealRequestBackData:(id)arg1;
- (void)requestData:(_Bool)arg1;
- (void)requestCurveData:(_Bool)arg1;
- (void)requestAllData:(_Bool)arg1;
- (void)httpRequestHistoryData:(id)arg1;
- (void)refreshViewController;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

