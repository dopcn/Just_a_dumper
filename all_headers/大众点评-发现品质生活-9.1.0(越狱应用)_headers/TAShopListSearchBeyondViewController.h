//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModulesTableViewController.h"

#import "TAErrorhandlerDelegate-Protocol.h"

@class NSString, TAErrorView, TAShopListSearchBeyondViewModel;

@interface TAShopListSearchBeyondViewController : NVBaseModulesTableViewController <TAErrorhandlerDelegate>
{
    TAShopListSearchBeyondViewModel *_viewModel;
    TAErrorView *_taErrorView;
}

@property(retain, nonatomic) TAErrorView *taErrorView; // @synthesize taErrorView=_taErrorView;
@property(retain, nonatomic) TAShopListSearchBeyondViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)modules;
- (void)willRetryquery:(long long)arg1;
- (void)p_showErrorViewWithErrorCode:(long long)arg1 errorMessage:(id)arg2;
- (_Bool)isGroupedTableView;
- (void)failedRequestShopListDataWithErrorFlag:(long long)arg1;
- (void)successedRequestShopListData;
- (void)requestShopListData;
- (id)loadMoreData;
- (void)didReceiveMemoryWarning;
- (void)loadData;
- (void)bindWhiteBoard;
- (_Bool)handleWithURLAction:(id)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

