//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormViewController.h"

#import "CJSheetDidSelect-Protocol.h"

@class CCB_1_VM_OtherSelectAccount, CJSheetViewController, NSArray, NSString;

@interface CCB_1_VC_OtherSelectAccount : CCBFormViewController <CJSheetDidSelect>
{
    CCB_1_VM_OtherSelectAccount *_viewModel;
    NSArray *_accountListArray;
    CJSheetViewController *_accountSelectVC;
    long long _selectIndex;
}

@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) CJSheetViewController *accountSelectVC; // @synthesize accountSelectVC=_accountSelectVC;
@property(retain, nonatomic) NSArray *accountListArray; // @synthesize accountListArray=_accountListArray;
@property(retain, nonatomic) CCB_1_VM_OtherSelectAccount *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)selectRowCell:(long long)arg1 withSelectObjc:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewModel:(id)arg1 requestFailed:(id)arg2 error:(id)arg3;
- (void)viewModel:(id)arg1 request:(id)arg2 didFinished:(id)arg3;
- (void)formViewCell:(id)arg1 didClickButtonAtIndex:(long long)arg2;
- (void)viewDidLoad;
- (id)initWithCCB_O_SJLQ13:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

