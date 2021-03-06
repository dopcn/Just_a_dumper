//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseFormViewModel.h"

@class CCBBaseError, CCBLabelFormItem, CCB_7_Investment_InputMoneyItem, CCB_O_NIA037, CCB_O_NIA038, CCB_O_NP0001, CCB_O_PBE000, NSString;

@interface CCB_7_VM_Investment_Insurance_ApplyReceivePart_AddAccount : CCBBaseFormViewModel
{
    CCBBaseError *_error;
    CCB_O_PBE000 *_PBE000;
    CCB_O_NP0001 *_np0001;
    CCBLabelFormItem *_payAccount;
    CCB_7_Investment_InputMoneyItem *_inputMoney;
    NSString *_accNo;
    CCB_O_NIA037 *_nia037;
    CCB_O_NIA038 *_nia038;
}

@property(retain, nonatomic) CCB_O_NIA038 *nia038; // @synthesize nia038=_nia038;
@property(retain, nonatomic) CCB_O_NIA037 *nia037; // @synthesize nia037=_nia037;
@property(retain, nonatomic) NSString *accNo; // @synthesize accNo=_accNo;
@property(retain, nonatomic) CCB_7_Investment_InputMoneyItem *inputMoney; // @synthesize inputMoney=_inputMoney;
@property(retain, nonatomic) CCBLabelFormItem *payAccount; // @synthesize payAccount=_payAccount;
@property(retain, nonatomic) CCB_O_NP0001 *np0001; // @synthesize np0001=_np0001;
@property(retain, nonatomic) CCB_O_PBE000 *PBE000; // @synthesize PBE000=_PBE000;
@property(retain, nonatomic) CCBBaseError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)requestFinished:(id)arg1 output:(id)arg2 error:(id)arg3;
- (void)requestForNP0001;
- (void)requestForPBE000;
- (void)requestForPBE000InitMVUI;
- (id)initWithModel:(id)arg1;

@end

