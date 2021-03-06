//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DEFDragRefreshTableViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DEFMTCallMerchantChildViewController, DEFMerchantBranchViewModel, NSArray, NSString, SAKFetchedResultsController, SAKMerchant;

@interface DEFMerchantBranchListViewController : DEFDragRefreshTableViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _loadingData;
    SAKMerchant *_merchant;
    NSArray *_merchantArray;
    NSArray *_section;
    DEFMerchantBranchViewModel *_branchViewModel;
    SAKFetchedResultsController *_fetchedResultsController;
    DEFMTCallMerchantChildViewController *_callMerchantChildViewController;
}

@property(retain, nonatomic) DEFMTCallMerchantChildViewController *callMerchantChildViewController; // @synthesize callMerchantChildViewController=_callMerchantChildViewController;
@property(readonly, nonatomic) SAKFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
@property(retain, nonatomic) DEFMerchantBranchViewModel *branchViewModel; // @synthesize branchViewModel=_branchViewModel;
@property(copy, nonatomic) NSArray *section; // @synthesize section=_section;
@property(copy, nonatomic) NSArray *merchantArray; // @synthesize merchantArray=_merchantArray;
@property(retain, nonatomic) SAKMerchant *merchant; // @synthesize merchant=_merchant;
@property(nonatomic, getter=isLoadingData) _Bool loadingData; // @synthesize loadingData=_loadingData;
- (void).cxx_destruct;
- (void)dealloc;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadMore;
- (void)refresh;
- (void)didTapPhone:(id)arg1;
- (void)didTapMapBarButtonItem;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLoad;
- (id)initWithMerchant:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

