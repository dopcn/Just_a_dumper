//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormViewController.h"

#import "CCBUNSuccessDelegate-Protocol.h"

@class CCB_15_VM_ElectronicSetEmail, NSString;

@interface CCB_15_VC_ElectronicSetEmail : CCBFormViewController <CCBUNSuccessDelegate>
{
    NSString *_QRCode;
    CCB_15_VM_ElectronicSetEmail *_formViewModel;
}

@property(retain, nonatomic) CCB_15_VM_ElectronicSetEmail *formViewModel; // @synthesize formViewModel=_formViewModel;
@property(copy, nonatomic) NSString *QRCode; // @synthesize QRCode=_QRCode;
- (void).cxx_destruct;
- (void)formViewCellValueDidChanged:(id)arg1;
- (void)formViewCell:(id)arg1 didClickButtonAtIndex:(long long)arg2;
- (void)formViewCellDidClickRightButton:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)CCBunSuccessComplete;
- (void)RACObsever;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

