//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormViewController.h"

#import "CCB_6_TowListCellDelegate-Protocol.h"

@class CCBRoundButton, CCB_6_VM_FineList, NSMutableArray, NSMutableDictionary, NSString;

@interface CCB_6_VC_FineList : CCBFormViewController <CCB_6_TowListCellDelegate>
{
    _Bool _flag;
    CCB_6_VM_FineList *_fineListModel;
    long long _cellRow;
    NSMutableArray *_imageNameAry;
    NSString *_drvlic_no;
    NSString *_licpla_ctlg;
    NSString *_licpla_no;
    NSMutableDictionary *_jf1105Dic;
    NSMutableDictionary *_paymentInfo;
    CCBRoundButton *_nextBut;
}

@property(retain, nonatomic) CCBRoundButton *nextBut; // @synthesize nextBut=_nextBut;
@property(retain, nonatomic) NSMutableDictionary *paymentInfo; // @synthesize paymentInfo=_paymentInfo;
@property(retain, nonatomic) NSMutableDictionary *jf1105Dic; // @synthesize jf1105Dic=_jf1105Dic;
@property(retain, nonatomic) NSString *licpla_no; // @synthesize licpla_no=_licpla_no;
@property(retain, nonatomic) NSString *licpla_ctlg; // @synthesize licpla_ctlg=_licpla_ctlg;
@property(retain, nonatomic) NSString *drvlic_no; // @synthesize drvlic_no=_drvlic_no;
@property(retain, nonatomic) NSMutableArray *imageNameAry; // @synthesize imageNameAry=_imageNameAry;
@property(nonatomic) _Bool flag; // @synthesize flag=_flag;
@property(nonatomic) long long cellRow; // @synthesize cellRow=_cellRow;
@property(retain, nonatomic) CCB_6_VM_FineList *fineListModel; // @synthesize fineListModel=_fineListModel;
- (void).cxx_destruct;
- (void)viewWillAppear:(_Bool)arg1;
- (void)formViewCell:(id)arg1 didClickButtonAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didLeftImageCell:(id)arg1 cellRow:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didTriggerRefresh;
- (void)viewDidAppear:(_Bool)arg1;
- (id)formatuploadTime:(id)arg1;
- (void)linkString:(id)arg1 key:(id)arg2 row:(id)arg3;
- (void)handlePaymentInfoData:(id)arg1;
- (void)nextStep1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

