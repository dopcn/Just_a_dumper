//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "KFScrollPageManagerDelegate-Protocol.h"
#import "KTVSelectingReEnterPanelDelegate-Protocol.h"
#import "KTVTabViewDelegate-Protocol.h"
#import "KTVTableViewDataSource-Protocol.h"
#import "KTVTableViewDelegate-Protocol.h"

@class KFScrollPageManager, KTVCommonTableViewRE, KTVEmptyView, KTVErrorView, KTVLazyAllocSet, KTVSelectingAccTableView, KTVSelectingReEnterPanel, KTVTabView, NSString, UITableViewCell;
@protocol KTVSelectingAccViewDataSource, KTVSelectingAccViewEventDelegate;

@interface KTVSelectingAccView : UIView <KTVTableViewDataSource, KTVTableViewDelegate, KTVSelectingReEnterPanelDelegate, KFScrollPageManagerDelegate, KTVTabViewDelegate>
{
    KFScrollPageManager *scrollContent;
    KTVTabView *segment;
    _Bool showRecommend;
    KTVLazyAllocSet *las;
    UITableViewCell *enterPageCell;
    UITableViewCell *lastTableViewCell;
    double semgentBottom;
    KTVEmptyView *_noDataView;
    KTVErrorView *_errorView;
    _Bool _needOffsetToAccompanyTable;
    int _tableType;
    id <KTVSelectingAccViewDataSource> _dataSource;
    id <KTVSelectingAccViewEventDelegate> _eventDelegate;
    KTVCommonTableViewRE *_pageTableView;
    KTVSelectingAccTableView *_hotTableView;
    KTVSelectingAccTableView *_recommendTableView;
    KTVSelectingAccTableView *_theNewTableView;
    KTVSelectingReEnterPanel *_reEnterPanel;
}

@property(nonatomic) _Bool needOffsetToAccompanyTable; // @synthesize needOffsetToAccompanyTable=_needOffsetToAccompanyTable;
@property(retain, nonatomic) KTVSelectingReEnterPanel *reEnterPanel; // @synthesize reEnterPanel=_reEnterPanel;
@property(nonatomic) int tableType; // @synthesize tableType=_tableType;
@property(retain, nonatomic) KTVSelectingAccTableView *theNewTableView; // @synthesize theNewTableView=_theNewTableView;
@property(retain, nonatomic) KTVSelectingAccTableView *recommendTableView; // @synthesize recommendTableView=_recommendTableView;
@property(retain, nonatomic) KTVSelectingAccTableView *hotTableView; // @synthesize hotTableView=_hotTableView;
@property(retain, nonatomic) KTVCommonTableViewRE *pageTableView; // @synthesize pageTableView=_pageTableView;
@property(nonatomic) __weak id <KTVSelectingAccViewEventDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(nonatomic) __weak id <KTVSelectingAccViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)scrollPageManager:(id)arg1 willShowViewAtIndex:(long long)arg2;
- (void)ktvTableViewDidScroll:(float)arg1;
- (void)btnClicked:(long long)arg1;
- (void)actionCappella;
- (void)actionChorus;
- (void)actionTogetherSing;
- (void)actionSelectedSong;
- (void)actionHot;
- (void)actionSingerSong;
- (void)actionSearch;
- (void)actionBanner:(id)arg1;
- (void)ktvTableView:(id)arg1 startAsyncRequestData:(_Bool)arg2;
- (id)ktvTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)ktvTableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)ktvTableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)ktvTableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)ktvTableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)ktvTableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)isTopCellShowingInView;
- (void)addAccompanyToTheTableIndexPath:(id)arg1;
- (void)changeContentOffsetToAccompanyTable;
- (void)createNewView;
- (void)createHotView;
- (void)setBannerInfo:(id)arg1;
- (void)createRecommendView;
- (void)createTableViewWhitShowRecommend:(_Bool)arg1;
- (void)getListData;
- (void)freshWithTableType:(int)arg1;
- (void)reflash;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

