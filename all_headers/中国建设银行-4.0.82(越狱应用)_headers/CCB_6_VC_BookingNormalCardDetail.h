//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormViewController.h"

#import "CCBBasePickerViewDelegate-Protocol.h"
#import "CCBUNSuccessDelegate-Protocol.h"
#import "CCB_6_VM_BookingNormolCardDetailDelegate-Protocol.h"

@class CCB_6_VM_BookingNormolCardDetail, NSString;

@interface CCB_6_VC_BookingNormalCardDetail : CCBFormViewController <CCBBasePickerViewDelegate, CCB_6_VM_BookingNormolCardDetailDelegate, CCBUNSuccessDelegate>
{
    CCB_6_VM_BookingNormolCardDetail *_viewModel;
}

@property(retain, nonatomic) CCB_6_VM_BookingNormolCardDetail *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)CCBunFuncidTapOutSide:(id)arg1;
- (void)CCBunSuccessComplete;
- (void)bookingNormolCardDetailViewModel:(id)arg1 reloadPY0104DataSuccess:(_Bool)arg2 failure:(id)arg3;
- (void)formViewCell:(id)arg1 didClickButtonAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

