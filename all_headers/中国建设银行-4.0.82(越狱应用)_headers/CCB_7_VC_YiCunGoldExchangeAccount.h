//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormViewController.h"

#import "CCBUNSuccessDelegate-Protocol.h"
#import "CJSheetDidSelect-Protocol.h"

@class CCB_5_DropdownView, CCB_7_VM_YiCunGoldExchangeAccount, CCB_O_SJ1250, CJSheetViewController, NSMutableArray, NSString;

@interface CCB_7_VC_YiCunGoldExchangeAccount : CCBFormViewController <CJSheetDidSelect, CCBUNSuccessDelegate>
{
    _Bool _isSign;
    _Bool _JUDGE;
    _Bool _isAdd;
    NSString *_signAcc;
    CCB_O_SJ1250 *_SJ1250;
    CCB_7_VM_YiCunGoldExchangeAccount *_viewModel;
    CCB_5_DropdownView *_downView;
    CJSheetViewController *_account_actionSheet;
    NSMutableArray *_accList;
    NSMutableArray *_acc434List;
    long long _index;
    NSMutableArray *_allAcctAry;
    NSMutableArray *_accnoAry;
    NSString *_newacct_no;
    NSString *_Acc_ID;
}

@property(retain, nonatomic) NSString *Acc_ID; // @synthesize Acc_ID=_Acc_ID;
@property(retain, nonatomic) NSString *newacct_no; // @synthesize newacct_no=_newacct_no;
@property(nonatomic) _Bool isAdd; // @synthesize isAdd=_isAdd;
@property(retain, nonatomic) NSMutableArray *accnoAry; // @synthesize accnoAry=_accnoAry;
@property(retain, nonatomic) NSMutableArray *allAcctAry; // @synthesize allAcctAry=_allAcctAry;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSMutableArray *acc434List; // @synthesize acc434List=_acc434List;
@property(retain, nonatomic) NSMutableArray *accList; // @synthesize accList=_accList;
@property(retain, nonatomic) CJSheetViewController *account_actionSheet; // @synthesize account_actionSheet=_account_actionSheet;
@property(nonatomic) _Bool JUDGE; // @synthesize JUDGE=_JUDGE;
@property(retain, nonatomic) CCB_5_DropdownView *downView; // @synthesize downView=_downView;
@property(retain, nonatomic) CCB_7_VM_YiCunGoldExchangeAccount *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool isSign; // @synthesize isSign=_isSign;
@property(retain, nonatomic) CCB_O_SJ1250 *SJ1250; // @synthesize SJ1250=_SJ1250;
@property(retain, nonatomic) NSString *signAcc; // @synthesize signAcc=_signAcc;
- (void).cxx_destruct;
- (void)CCBunSuccessComplete;
- (void)didReceiveMemoryWarning;
- (void)selectRowCell:(long long)arg1 withSelectObjc:(id)arg2;
- (void)didClickProtocolFormProtocolFormCellWithIndex:(long long)arg1;
- (void)formViewCellDidClickRightButton:(id)arg1;
- (id)getCardType:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)formViewCell:(id)arg1 didClickButtonAtIndex:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

