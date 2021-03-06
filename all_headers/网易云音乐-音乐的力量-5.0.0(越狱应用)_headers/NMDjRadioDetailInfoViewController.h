//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMScrollableParallaxContentViewController.h"

#import "NMDjRadioBuyHeaderViewDelegate-Protocol.h"
#import "NMDjRadioDetailHotCommentCellDelegate-Protocol.h"
#import "NMDjRadioDetailInfoBaseCellDelegate-Protocol.h"
#import "NMDjRadioDetailPublicationCellDelegate-Protocol.h"
#import "NMDjRadioDetailTrailCellDelegate-Protocol.h"
#import "NMDjRadioDetailVideoCellDelegate-Protocol.h"
#import "NMScrollableTableControllerProtocol-Protocol.h"

@class NMDjRadio, NMDjRadioBuyHeaderView, NMDjRadioDetailViewController, NMScrollTableController, NMScrollableTabItem, NSArray, NSMutableDictionary, NSString;

@interface NMDjRadioDetailInfoViewController : NMScrollableParallaxContentViewController <NMDjRadioDetailTrailCellDelegate, NMDjRadioDetailHotCommentCellDelegate, NMDjRadioDetailPublicationCellDelegate, NMDjRadioBuyHeaderViewDelegate, NMDjRadioDetailVideoCellDelegate, NMDjRadioDetailInfoBaseCellDelegate, NMScrollableTableControllerProtocol>
{
    _Bool _isLoading;
    NSMutableDictionary *_heightCacheDic;
    NMDjRadioBuyHeaderView *_headerView;
    NSArray *_trialPrograms;
    NSArray *_latestPrograms;
    NMDjRadioDetailViewController *_parentController;
    NMDjRadio *_djRadio;
}

@property(nonatomic) __weak NMDjRadio *djRadio; // @synthesize djRadio=_djRadio;
@property(nonatomic) __weak NMDjRadioDetailViewController *parentController; // @synthesize parentController=_parentController;
- (void).cxx_destruct;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)_addCellBILog:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)djRadioDetailVideoCell:(id)arg1 videoClicked:(id)arg2;
- (void)djRadioBuyHeaderViewBuyButtonClicked:(id)arg1;
- (void)_goToTrialPage;
- (void)djRadioBuyHeaderViewTrialButtonClicked:(id)arg1;
- (void)djRadioDetailPublicationRewardBtnClicked:(id)arg1;
- (void)djRadioDetailPublicationCellClicked:(id)arg1;
- (void)djRadioDetailHotCommentCell:(id)arg1 hotCommentClicked:(id)arg2;
- (void)djRadioDetailHotCommentCell:(id)arg1 userClicked:(id)arg2;
- (void)djRadioDetailMoreTrialClicked:(id)arg1;
- (void)djRadioDetailTrailCellClicked:(id)arg1 djPrograms:(id)arg2 playIndex:(long long)arg3;
- (void)djRadioDetailInfoBaseCell:(id)arg1 imageUrlClicked:(id)arg2;
- (_Bool)mcLoadMoreTableFooterDataSourceIsLoading:(id)arg1;
- (void)mcLoadMoreTableFooterDidTriggerRefresh:(id)arg1;
- (void)resetDataForReloading;
- (_Bool)anyAvailableData;
- (_Bool)noAvailabelData;
- (void)tableReloadData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak NMScrollTableController *scrollTableController;
@property(retain, nonatomic) NMScrollableTabItem *scrollableItem;
@property(readonly) Class superclass;

@end

