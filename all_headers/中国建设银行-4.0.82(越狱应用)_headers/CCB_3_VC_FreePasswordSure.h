//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormViewController.h"

#import "CCBUNSuccessDelegate-Protocol.h"

@class CCB_3_VM_FreePasswordSure, NSString;

@interface CCB_3_VC_FreePasswordSure : CCBFormViewController <CCBUNSuccessDelegate>
{
    CCB_3_VM_FreePasswordSure *_viewModel;
}

@property(retain, nonatomic) CCB_3_VM_FreePasswordSure *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)CCBunFuncidTapOutSide:(id)arg1;
- (void)CCBunSuccessComplete;
- (void)formViewCellDidClickRightButton:(id)arg1;
- (void)formViewCell:(id)arg1 didClickButtonAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)addObserver;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

