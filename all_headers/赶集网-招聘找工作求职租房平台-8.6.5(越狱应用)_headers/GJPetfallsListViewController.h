//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GJPetListBaseVC.h"

#import "GJPetFallFlowLayoutDelegate-Protocol.h"
#import "RefreshViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class GJListMoreCell, NSArray, NSMutableArray, NSString, RefreshView, UICollectionView;

@interface GJPetfallsListViewController : GJPetListBaseVC <UICollectionViewDelegate, UICollectionViewDataSource, GJPetFallFlowLayoutDelegate, RefreshViewDelegate>
{
    _Bool refreshing;
    _Bool ishaveMore;
    _Bool loadingNext;
    RefreshView *refreshView;
    double _lastPosition;
    _Bool _isNotFirstIn;
    id _delegate;
    long long _currentPageIndex;
    long long _totalPosts;
    NSMutableArray *_listData;
    NSMutableArray *_nowData;
    NSArray *_filterArray;
    NSArray *_keywords;
    UICollectionView *_collectionView;
    GJListMoreCell *_moreCell;
}

@property(nonatomic) _Bool isNotFirstIn; // @synthesize isNotFirstIn=_isNotFirstIn;
@property(retain, nonatomic) GJListMoreCell *moreCell; // @synthesize moreCell=_moreCell;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSArray *filterArray; // @synthesize filterArray=_filterArray;
@property(retain, nonatomic) NSMutableArray *nowData; // @synthesize nowData=_nowData;
@property(retain, nonatomic) NSMutableArray *listData; // @synthesize listData=_listData;
@property(nonatomic) long long totalPosts; // @synthesize totalPosts=_totalPosts;
@property(nonatomic) long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)waterFlowLayout:(id)arg1 heightForRowAtIndex:(long long)arg2 itemWidth:(double)arg3;
- (void)addNoDataTipView;
- (void)addErrorTipViewWithErrorMsg:(id)arg1;
- (void)removeLoading;
- (void)addLoadingView;
- (void)refreshViewDidCallBack;
- (void)refresh;
- (void)startLoading;
- (void)stopLoading;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)objectInfoFromData:(id)arg1;
- (void)api_SearchPostsByJson2_SuccecssCallBack;
- (void)resetData;
- (void)getListData_SearchPostByJson2WithCallblock:(CDUnknownBlockType)arg1;
- (void)getListData;
- (void)drawRefreshView;
- (void)loadMoreData;
- (void)viewDidLayoutSubviews;
- (void)drawWallView;
- (void)popVC;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setKeyword:(id)arg1;
- (id)initWithMasterId:(long long)arg1 withMajorId:(long long)arg2 WithTitle:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

