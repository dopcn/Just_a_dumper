//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseFormViewModel.h"

@class CCB_7_CurrentToFixedInfoModel, CCB_7_M_InputMountItem, CCB_7_M_countFeeItem, CCB_O_410228, CCB_O_NHZD06, NSDictionary, NSString;

@interface CCB_7_VM_Investment_RegularProduct_CurrentFixedTransfer_OneDayNotifyInputMoney : CCBBaseFormViewModel
{
    CCB_7_M_InputMountItem *_moneyItem;
    CCB_7_M_countFeeItem *_calculateItem;
    NSString *_errorMessage;
    CCB_O_NHZD06 *_nhzd06;
    NSString *_retValue;
    CCB_O_410228 *_Cal410228;
    NSDictionary *_body;
    CCB_7_CurrentToFixedInfoModel *_currentModel;
}

@property(retain, nonatomic) CCB_7_CurrentToFixedInfoModel *currentModel; // @synthesize currentModel=_currentModel;
@property(retain, nonatomic) NSDictionary *body; // @synthesize body=_body;
@property(retain, nonatomic) CCB_O_410228 *Cal410228; // @synthesize Cal410228=_Cal410228;
@property(retain, nonatomic) NSString *retValue; // @synthesize retValue=_retValue;
@property(retain, nonatomic) CCB_O_NHZD06 *nhzd06; // @synthesize nhzd06=_nhzd06;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) CCB_7_M_countFeeItem *calculateItem; // @synthesize calculateItem=_calculateItem;
@property(retain, nonatomic) CCB_7_M_InputMountItem *moneyItem; // @synthesize moneyItem=_moneyItem;
- (void).cxx_destruct;
- (void)requestFinished:(id)arg1 output:(id)arg2 error:(id)arg3;
- (void)requestFor410228;
- (void)requestForNHZD06;
- (void)requestDeposit;
- (id)returnRate;
- (void)updateRate;
- (_Bool)nextStepCheck;
- (id)changeToOrginalString:(id)arg1;
- (void)setUI;
- (id)init;

@end

