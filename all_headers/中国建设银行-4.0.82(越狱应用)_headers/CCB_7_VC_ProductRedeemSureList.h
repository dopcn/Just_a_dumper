//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormViewController.h"

#import "CCBUNSuccessDelegate-Protocol.h"

@class CCB_7_VM_ProductRedeemBaseViewModel, CCB_7_VM_ProductRedeemSureList, NSString;

@interface CCB_7_VC_ProductRedeemSureList : CCBFormViewController <CCBUNSuccessDelegate>
{
    CCB_7_VM_ProductRedeemBaseViewModel *_dataModel;
    CCB_7_VM_ProductRedeemSureList *_viewModel;
}

@property(retain, nonatomic) CCB_7_VM_ProductRedeemSureList *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) CCB_7_VM_ProductRedeemBaseViewModel *dataModel; // @synthesize dataModel=_dataModel;
- (void).cxx_destruct;
- (void)CCBunFuncidTapOutSide:(id)arg1;
- (void)CCBunSuccessComplete;
- (void)requestData:(_Bool)arg1 withRsp:(id)arg2;
- (void)formViewCell:(id)arg1 didClickButtonAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

