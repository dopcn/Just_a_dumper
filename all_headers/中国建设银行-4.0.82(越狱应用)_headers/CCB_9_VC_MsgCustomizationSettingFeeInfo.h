//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormViewController.h"

#import "CCBSelectionActionSheetDelegate-Protocol.h"
#import "CCBUNSuccessDelegate-Protocol.h"
#import "CJSheetDidSelect-Protocol.h"

@class CCBSelectionActionSheet, CCB_9_VM_MsgCustomizationSettingFeeInfo, CJSheetViewController, NSString;

@interface CCB_9_VC_MsgCustomizationSettingFeeInfo : CCBFormViewController <CCBSelectionActionSheetDelegate, CCBUNSuccessDelegate, CJSheetDidSelect>
{
    _Bool _isFromDebit;
    CCB_9_VM_MsgCustomizationSettingFeeInfo *_viewModel;
    CCBSelectionActionSheet *_actionSheet;
    CJSheetViewController *_accountSheet;
    long long _selectRow;
}

@property(nonatomic) long long selectRow; // @synthesize selectRow=_selectRow;
@property(retain, nonatomic) CJSheetViewController *accountSheet; // @synthesize accountSheet=_accountSheet;
@property(retain, nonatomic) CCBSelectionActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) CCB_9_VM_MsgCustomizationSettingFeeInfo *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool isFromDebit; // @synthesize isFromDebit=_isFromDebit;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)CCBunFuncidTap;
- (void)CCBunSuccessComplete;
- (void)selectRowCell:(long long)arg1 withSelectObjc:(id)arg2;
- (void)selectionActionSheet:(id)arg1 didSelectIndexPath:(id)arg2;
- (void)selectionActionSheetDidCancel:(id)arg1;
- (void)formViewCell:(id)arg1 didClickButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

