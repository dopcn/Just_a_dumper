//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormViewController.h"

#import "CCBUNSuccessDelegate-Protocol.h"

@class CCB_7_VM_ForeignExchangeQueryDeleteConfirm, NSString;

@interface CCB_7_VC_ForeignExchangeQueryDeleteConfirm : CCBFormViewController <CCBUNSuccessDelegate>
{
    int _pendIndex;
    CCB_7_VM_ForeignExchangeQueryDeleteConfirm *_viewModel;
}

@property(retain, nonatomic) CCB_7_VM_ForeignExchangeQueryDeleteConfirm *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) int pendIndex; // @synthesize pendIndex=_pendIndex;
- (void).cxx_destruct;
- (void)CCBunSuccessComplete;
- (void)formViewCell:(id)arg1 didClickButtonAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithMyAccont:(id)arg1 headerItems:(id)arg2 pendIndex:(int)arg3 PendTradeData:(id)arg4 profitData:(id)arg5 sellStopData:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

