//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormViewController.h"

@class CCB_7_VM_FundsQueryHistoryProfixDetail;

@interface CCB_7_VC_FundsQueryHistoryProfixDetail : CCBFormViewController
{
    CCB_7_VM_FundsQueryHistoryProfixDetail *_detailModel;
}

@property(retain, nonatomic) CCB_7_VM_FundsQueryHistoryProfixDetail *detailModel; // @synthesize detailModel=_detailModel;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)formViewCell:(id)arg1 didClickButtonAtIndex:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;

@end

