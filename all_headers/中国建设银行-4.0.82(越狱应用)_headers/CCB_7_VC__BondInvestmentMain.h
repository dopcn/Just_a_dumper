//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormViewController.h"

#import "CCB_NationalSearchViewDelegate-Protocol.h"

@class CCB_7_VM_BondInvestmentMain, NSString;

@interface CCB_7_VC__BondInvestmentMain : CCBFormViewController <CCB_NationalSearchViewDelegate>
{
    CCB_7_VM_BondInvestmentMain *_viewModel;
}

+ (void)JumpToMe;
@property(retain, nonatomic) CCB_7_VM_BondInvestmentMain *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)buttons:(long long)arg1;
- (void)formViewCell:(id)arg1 didClickButtonAtIndex:(long long)arg2;
- (void)formViewCellDidClickRightButton:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)refreshLoginStatus:(_Bool)arg1;
- (void)requestRefrshMyBondMoney;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

