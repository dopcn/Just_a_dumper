//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormViewController.h"

#import "CJSheetDidSelect-Protocol.h"

@class CCB_7_VM_TransferPlatform_InvestmentBuy, CCB_O_SJJJ62, CCB_O_SJZR06_OrderList, CCB_O_SJZR14, CJSheetViewController, NSArray, NSString;

@interface CCB_7_VC_TransferPlatform_InvestmentBuy : CCBFormViewController <CJSheetDidSelect>
{
    CCB_O_SJZR06_OrderList *_fundInfo;
    NSString *_Rght_Ntc_Sgnt_Ind;
    NSString *_Sgnt_Elc_Sgn_Egmt_Ind;
    CCB_O_SJJJ62 *_sjjj62repons;
    CCB_7_VM_TransferPlatform_InvestmentBuy *_viewModel;
    CJSheetViewController *_accountSheet;
    long long _selectRow;
    NSArray *_accountArray;
    CCB_O_SJZR14 *_SJZR14Repons;
}

@property(retain, nonatomic) CCB_O_SJZR14 *SJZR14Repons; // @synthesize SJZR14Repons=_SJZR14Repons;
@property(retain, nonatomic) NSArray *accountArray; // @synthesize accountArray=_accountArray;
@property(nonatomic) long long selectRow; // @synthesize selectRow=_selectRow;
@property(retain, nonatomic) CJSheetViewController *accountSheet; // @synthesize accountSheet=_accountSheet;
@property(retain, nonatomic) CCB_7_VM_TransferPlatform_InvestmentBuy *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) CCB_O_SJJJ62 *sjjj62repons; // @synthesize sjjj62repons=_sjjj62repons;
@property(retain, nonatomic) NSString *Sgnt_Elc_Sgn_Egmt_Ind; // @synthesize Sgnt_Elc_Sgn_Egmt_Ind=_Sgnt_Elc_Sgn_Egmt_Ind;
@property(retain, nonatomic) NSString *Rght_Ntc_Sgnt_Ind; // @synthesize Rght_Ntc_Sgnt_Ind=_Rght_Ntc_Sgnt_Ind;
@property(retain, nonatomic) CCB_O_SJZR06_OrderList *fundInfo; // @synthesize fundInfo=_fundInfo;
- (void).cxx_destruct;
- (id)Buy_YldRto_RATE:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)selectRowCell:(long long)arg1 withSelectObjc:(id)arg2;
- (void)NextRequest;
- (void)requestSJFX06;
- (void)judgeAppropriateDegreeWith;
- (void)riskAssessment;
- (void)goOnToInvest:(id)arg1 tip:(id)arg2;
- (void)gotoMakeRiskCheck:(id)arg1 tip:(id)arg2;
- (void)requestSjjj59;
- (void)requestForRiskEvaluation;
- (void)goToNext;
- (void)formViewCell:(id)arg1 didClickButtonAtIndex:(long long)arg2;
- (void)didClickProtocolFormProtocolFormCellWithIndex:(long long)arg1;
- (void)formViewCellValueDidChanged:(id)arg1;
- (void)formViewCellDidClickRightButton:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initRAC;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

