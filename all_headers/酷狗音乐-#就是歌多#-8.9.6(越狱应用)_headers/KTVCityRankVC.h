//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KFViewController.h"

#import "KFScrollPageManagerDelegate-Protocol.h"
#import "KTVLbsListVLLDelegate-Protocol.h"
#import "KTVTabViewDelegate-Protocol.h"
#import "KTVWealthTypeVLLDelegate-Protocol.h"

@class KFScrollPageManager, KTVButton, KTVEmptyView, KTVErrorView, KTVLbsListVLL, KTVLbsListVM, KTVTabView, KTVUserHotStrategyBarVLL, KTVUserHotStrategyGuideBar, KTVWealthTypeVLL, KTVWealthTypeVM, KTVWealthTypeView, MLCollectionView, NSString, UIView;

@interface KTVCityRankVC : KFViewController <KTVLbsListVLLDelegate, KTVTabViewDelegate, KTVWealthTypeVLLDelegate, KFScrollPageManagerDelegate>
{
    _Bool _showWealthRank;
    long long _opusId;
    NSString *_showCityName;
    MLCollectionView *_hotListCityView;
    KTVLbsListVM *_hotListCityVM;
    KTVLbsListVLL *_hotListCityVLL;
    KTVWealthTypeView *_wealthListCityView;
    KTVWealthTypeVM *_wealthListCityVM;
    KTVWealthTypeVLL *_wealthListCityVLL;
    KTVTabView *_mtabView;
    KTVUserHotStrategyGuideBar *_hotStrategyBar;
    KTVUserHotStrategyBarVLL *_hotStrategyBarVLL;
    KFScrollPageManager *_scrollContent;
    KTVButton *_cityShowButton;
    UIView *_headTipView;
    long long _curentShowViewIndex;
    KTVErrorView *_netErrorView;
    KTVEmptyView *_noLbsView;
    KTVEmptyView *_emptyView;
    struct CGRect _viewFrame;
}

@property(retain, nonatomic) KTVEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) KTVEmptyView *noLbsView; // @synthesize noLbsView=_noLbsView;
@property(retain, nonatomic) KTVErrorView *netErrorView; // @synthesize netErrorView=_netErrorView;
@property(nonatomic) long long curentShowViewIndex; // @synthesize curentShowViewIndex=_curentShowViewIndex;
@property(retain, nonatomic) UIView *headTipView; // @synthesize headTipView=_headTipView;
@property(retain, nonatomic) KTVButton *cityShowButton; // @synthesize cityShowButton=_cityShowButton;
@property(retain, nonatomic) KFScrollPageManager *scrollContent; // @synthesize scrollContent=_scrollContent;
@property(nonatomic) struct CGRect viewFrame; // @synthesize viewFrame=_viewFrame;
@property(retain, nonatomic) KTVUserHotStrategyBarVLL *hotStrategyBarVLL; // @synthesize hotStrategyBarVLL=_hotStrategyBarVLL;
@property(retain, nonatomic) KTVUserHotStrategyGuideBar *hotStrategyBar; // @synthesize hotStrategyBar=_hotStrategyBar;
@property(retain, nonatomic) KTVTabView *mtabView; // @synthesize mtabView=_mtabView;
@property(retain, nonatomic) KTVWealthTypeVLL *wealthListCityVLL; // @synthesize wealthListCityVLL=_wealthListCityVLL;
@property(retain, nonatomic) KTVWealthTypeVM *wealthListCityVM; // @synthesize wealthListCityVM=_wealthListCityVM;
@property(retain, nonatomic) KTVWealthTypeView *wealthListCityView; // @synthesize wealthListCityView=_wealthListCityView;
@property(retain, nonatomic) KTVLbsListVLL *hotListCityVLL; // @synthesize hotListCityVLL=_hotListCityVLL;
@property(retain, nonatomic) KTVLbsListVM *hotListCityVM; // @synthesize hotListCityVM=_hotListCityVM;
@property(retain, nonatomic) MLCollectionView *hotListCityView; // @synthesize hotListCityView=_hotListCityView;
@property(nonatomic) _Bool showWealthRank; // @synthesize showWealthRank=_showWealthRank;
@property(retain, nonatomic) NSString *showCityName; // @synthesize showCityName=_showCityName;
@property(nonatomic) long long opusId; // @synthesize opusId=_opusId;
- (void).cxx_destruct;
- (id)pageSrollview;
- (long long)currentPage;
- (long long)totalPageCount;
- (void)scrollPageManager:(id)arg1 willShowViewAtIndex:(long long)arg2;
- (void)btnClicked:(long long)arg1;
- (void)goToWealthListWithType:(int)arg1;
- (void)didTapViewWithVLL:(id)arg1;
- (void)showWealthList;
- (void)createWealthList;
- (void)showEmptyOnView:(id)arg1 withText:(id)arg2;
- (void)showNoLbsOnView:(id)arg1;
- (void)loadData;
- (void)showNetErrorOnView:(id)arg1;
- (void)ktvLbsListVll:(id)arg1 willDisplayCellWithIndex:(long long)arg2;
- (void)ktvLbsListVll:(id)arg1 showUserSpaceForUserId:(long long)arg2;
- (void)ktvLbsListVll:(id)arg1 showListenForOpusInfo:(id)arg2 isGoContributionList:(_Bool)arg3;
- (void)cityChanageNotify:(id)arg1;
- (void)configureCity:(id)arg1;
- (void)showCitySelectedTool;
- (void)showCityList;
- (void)createCityList;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (void)KTVUsingControllerState:(int)arg1;
- (int)showKTVMiniBarWay;
- (long long)showPlayBarWay;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

