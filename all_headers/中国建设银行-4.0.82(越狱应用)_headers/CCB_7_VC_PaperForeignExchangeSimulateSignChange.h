//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormViewController.h"

#import "CCBSelectionActionSheetDelegate-Protocol.h"

@class CCB_7_VM_PaperForeignExchangeSimulateSignChange, NSString;

@interface CCB_7_VC_PaperForeignExchangeSimulateSignChange : CCBFormViewController <CCBSelectionActionSheetDelegate>
{
    CCB_7_VM_PaperForeignExchangeSimulateSignChange *_viewModel;
}

@property(retain, nonatomic) CCB_7_VM_PaperForeignExchangeSimulateSignChange *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)formViewCell:(id)arg1 didClickButtonAtIndex:(long long)arg2;
- (void)selectionActionSheetDidCancel:(id)arg1;
- (void)selectionActionSheet:(id)arg1 didSelectIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithPayAccountList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

