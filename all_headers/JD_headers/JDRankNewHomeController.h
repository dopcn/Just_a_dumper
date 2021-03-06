//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDRankChildHeadViewDelegate-Protocol.h"
#import "JDRankNewHomeContentViewDelegate-Protocol.h"
#import "JDRankNewSingleHomeViewDelegate-Protocol.h"

@class JDNJMaskView, JDRankNewHomeContentView, JDRankNewHomeHeadView, JDRankRefreshTimeView, JDRankReloadView, JDRankSelectView, JDRankingManager, JDStoreNetwork, NSArray, NSMutableArray, NSMutableString, NSString, UIView;
@protocol JDRankNewHomeControllerDelegate;

@interface JDRankNewHomeController : JDViewController <JDRankNewHomeContentViewDelegate, JDRankChildHeadViewDelegate, JDRankNewSingleHomeViewDelegate>
{
    JDStoreNetwork *m_network;
    JDRankingManager *rankManager;
    UIView *childHeadView;
    JDRankNewHomeContentView *newContentView;
    JDNJMaskView *maskView;
    JDRankSelectView *selectView;
    JDRankRefreshTimeView *refreshTimeView;
    _Bool isShowRefreshtimeView;
    long long firstIn;
    NSString *_fromName;
    NSString *_rankId;
    NSString *_rankName;
    NSString *_selectedProvinceId;
    NSString *_selectedCityId;
    NSString *_shareUrl;
    NSString *_shareContent;
    NSString *_shareTitle;
    id <JDRankNewHomeControllerDelegate> _rankhomecontrollerDelegate;
    NSString *_selectedtime;
    NSString *_selectedCateId;
    NSString *_currentCateId;
    NSMutableArray *_viewArray;
    NSMutableArray *_cateModelArray;
    NSArray *_appHomecateIdlist;
    NSMutableArray *_rankCateList;
    NSArray *_redCateList;
    NSArray *_homeBannerArray;
    JDRankReloadView *_reloadView;
    JDRankNewHomeHeadView *_homeheadView;
    NSMutableArray *_childHeadViewArray;
    NSString *_cateContent;
    NSMutableString *_expParam;
    NSMutableArray *_expedArray;
}

@property(retain, nonatomic) NSMutableArray *expedArray; // @synthesize expedArray=_expedArray;
@property(retain, nonatomic) NSMutableString *expParam; // @synthesize expParam=_expParam;
@property(retain, nonatomic) NSString *cateContent; // @synthesize cateContent=_cateContent;
@property(retain, nonatomic) NSMutableArray *childHeadViewArray; // @synthesize childHeadViewArray=_childHeadViewArray;
@property(retain, nonatomic) JDRankNewHomeHeadView *homeheadView; // @synthesize homeheadView=_homeheadView;
@property(retain, nonatomic) JDRankReloadView *reloadView; // @synthesize reloadView=_reloadView;
@property(retain, nonatomic) NSArray *homeBannerArray; // @synthesize homeBannerArray=_homeBannerArray;
@property(retain, nonatomic) NSArray *redCateList; // @synthesize redCateList=_redCateList;
@property(retain, nonatomic) NSMutableArray *rankCateList; // @synthesize rankCateList=_rankCateList;
@property(retain, nonatomic) NSArray *appHomecateIdlist; // @synthesize appHomecateIdlist=_appHomecateIdlist;
@property(retain, nonatomic) NSMutableArray *cateModelArray; // @synthesize cateModelArray=_cateModelArray;
@property(retain, nonatomic) NSMutableArray *viewArray; // @synthesize viewArray=_viewArray;
@property(retain, nonatomic) NSString *currentCateId; // @synthesize currentCateId=_currentCateId;
@property(retain, nonatomic) NSString *selectedCateId; // @synthesize selectedCateId=_selectedCateId;
@property(retain, nonatomic) NSString *selectedtime; // @synthesize selectedtime=_selectedtime;
@property(nonatomic) id <JDRankNewHomeControllerDelegate> rankhomecontrollerDelegate; // @synthesize rankhomecontrollerDelegate=_rankhomecontrollerDelegate;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(retain, nonatomic) NSString *shareContent; // @synthesize shareContent=_shareContent;
@property(retain, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(retain, nonatomic) NSString *selectedCityId; // @synthesize selectedCityId=_selectedCityId;
@property(retain, nonatomic) NSString *selectedProvinceId; // @synthesize selectedProvinceId=_selectedProvinceId;
@property(retain, nonatomic) NSString *rankName; // @synthesize rankName=_rankName;
@property(retain, nonatomic) NSString *rankId; // @synthesize rankId=_rankId;
@property(retain, nonatomic) NSString *fromName; // @synthesize fromName=_fromName;
- (void).cxx_destruct;
- (id)getPageId;
- (void)expMta;
- (void)jdmtaRankingSubCategory:(long long)arg1;
- (void)jdmtaRankingCategory:(long long)arg1;
- (void)turnactivityVC:(id)arg1 skuID:(id)arg2 index:(id)arg3;
- (void)turnProductVC:(id)arg1 index:(id)arg2;
- (void)turnToDresserVC:(id)arg1 index:(id)arg2 top:(id)arg3 topEndTime:(id)arg4 topStartTime:(id)arg5;
- (void)turnShopVC:(id)arg1 index:(id)arg2 selectSku:(id)arg3 withSkus:(id)arg4;
- (void)turnToAfterInsertCell:(long long)arg1 cellType:(int)arg2 cateName:(id)arg3 cateId:(id)arg4 activityUrl:(id)arg5 subIndex:(long long)arg6;
- (void)showToastView:(id)arg1 isSuccess:(_Bool)arg2;
- (void)followOrUnfollowShop:(id)arg1;
- (void)followedBtnClick:(id)arg1;
- (void)clickShopFollowBtn:(id)arg1 index:(id)arg2;
- (void)jumpToRankHomeBannerWebPage:(id)arg1 url:(id)arg2 index:(long long)arg3;
- (void)addExpMat:(long long)arg1 cateId:(id)arg2 skuId:(id)arg3;
- (void)singleViewMoveNext;
- (void)reloadSingleRequest:(_Bool)arg1;
- (void)refreshRankInfoBysubCateId:(id)arg1;
- (void)slideSwitchView:(id)arg1 didselectTab:(unsigned long long)arg2;
- (id)slideSwitchView:(id)arg1 viewOfTab:(unsigned long long)arg2;
- (unsigned long long)numberOfTab:(id)arg1;
- (void)clickButtonInReloadView:(id)arg1;
- (void)showReloadSingleView;
- (void)hideNoDataView;
- (void)showNoDataView;
- (void)getDresserRankInfo;
- (void)getRankHomeInfo;
- (void)getRankHomeCatelist;
- (void)getHomeBannerData;
- (void)closeSelectView;
- (void)openSelectView;
- (void)removeRefreshView;
- (void)uPdataALLViewByCateList;
- (void)upDataFatherControllerShareUrl:(id)arg1 shareContent:(id)arg2 shareTitle:(id)arg3;
- (void)isshowRefreshTimeView:(_Bool)arg1;
- (void)showRefreshTimeView;
- (void)refreshRankInfo;
- (void)ChildHeadViewsetSetectIndex:(long long)arg1;
- (void)setUpNewContentView;
- (void)setUpChildHeadViewArray;
- (void)setupSelectUI;
- (void)setmaskViewupUI;
- (void)setUpHeadView;
- (void)setUpRefreshTimeView;
- (void)setupNoDateView;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithRankId:(id)arg1 appHomecateIdlist:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

