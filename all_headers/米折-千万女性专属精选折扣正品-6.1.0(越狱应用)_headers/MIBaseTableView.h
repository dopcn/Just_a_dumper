//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "EGORefreshTableHeaderDelegate-Protocol.h"
#import "MIGoTopViewDelegate-Protocol.h"
#import "MIOverlayStatusViewDelegate-Protocol.h"
#import "MIViewLifecycleDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class EGORefreshTableHeaderView, MIGoTopView, MIOverlayStatusView, MIPageBaseRequest, MITopAdView, NSMutableArray, NSString, UITableView;

@interface MIBaseTableView : UIView <UITableViewDataSource, EGORefreshTableHeaderDelegate, MIOverlayStatusViewDelegate, MIViewLifecycleDelegate, MIGoTopViewDelegate, UITableViewDelegate>
{
    long long _tuanTenPageSize;
    long long _currentPage;
    long long _currentCount;
    float _buttomPullDistance;
    float _lastscrollViewOffset;
    _Bool _hasMore;
    _Bool _loading;
    _Bool _isMainCat;
    _Bool _enableShowItemCount;
    _Bool _isShowItemInteger;
    UITableView *_tableView;
    id _model;
    NSMutableArray *_modelArray;
    MIPageBaseRequest *_request;
    NSString *_cat;
    NSString *_catId;
    NSString *_subject;
    MIGoTopView *_goTopView;
    long long _totalCount;
    MIOverlayStatusView *_overlayView;
    EGORefreshTableHeaderView *_refreshTableView;
    NSMutableArray *_tuanHotItems;
    NSString *_tuanHotTag;
    long long _page;
    NSString *_categoryName;
    long long _rowItemsInteger;
    long long _rowShowLine;
    MITopAdView *_topAdView;
}

@property(retain, nonatomic) MITopAdView *topAdView; // @synthesize topAdView=_topAdView;
@property(nonatomic) _Bool isShowItemInteger; // @synthesize isShowItemInteger=_isShowItemInteger;
@property(nonatomic) long long rowShowLine; // @synthesize rowShowLine=_rowShowLine;
@property(nonatomic) long long rowItemsInteger; // @synthesize rowItemsInteger=_rowItemsInteger;
@property(nonatomic) _Bool enableShowItemCount; // @synthesize enableShowItemCount=_enableShowItemCount;
@property(nonatomic) _Bool isMainCat; // @synthesize isMainCat=_isMainCat;
@property(retain, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *tuanHotTag; // @synthesize tuanHotTag=_tuanHotTag;
@property(retain, nonatomic) NSMutableArray *tuanHotItems; // @synthesize tuanHotItems=_tuanHotItems;
@property(retain, nonatomic) EGORefreshTableHeaderView *refreshTableView; // @synthesize refreshTableView=_refreshTableView;
@property(retain, nonatomic) MIOverlayStatusView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) MIGoTopView *goTopView; // @synthesize goTopView=_goTopView;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSString *catId; // @synthesize catId=_catId;
@property(retain, nonatomic) NSString *cat; // @synthesize cat=_cat;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) MIPageBaseRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSMutableArray *modelArray; // @synthesize modelArray=_modelArray;
@property(retain, nonatomic) id model; // @synthesize model=_model;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)reloadTableViewForSale;
- (void)updateCellView:(id)arg1 tuanModel:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)makeGoTopView:(id)arg1;
- (void)goTopViewClicked;
- (void)scrollViewDidScroll:(id)arg1;
- (id)egoRefreshTableHeaderDataSourceLastUpdated:(id)arg1;
- (void)failLoadTableViewData;
- (void)finishLoadTableViewData;
- (void)loadMoreTableViewDataSource;
- (void)loadingMoreTableViewDataSource:(_Bool)arg1;
- (void)reloadTableViewDataSource;
- (void)refreshData;
- (void)reloadTableViewDataSource:(id)arg1;
- (void)cancelRequest;
- (void)willDisappearView;
- (void)willAppearView;
- (void)finishLoadTableViewData:(id)arg1 needReload:(_Bool)arg2;
- (void)finishLoadTableViewData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

