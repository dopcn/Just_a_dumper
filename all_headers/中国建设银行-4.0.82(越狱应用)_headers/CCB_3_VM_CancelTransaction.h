//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseFormViewModel.h"

@class CCBLabelFormItem, CCBMessageCodeInputFormItem, CCBNextButtonFormItem, CCB_3_M_paymentFransaction, CCB_O_SJ9609, CCB_O_SJ9612;

@interface CCB_3_VM_CancelTransaction : CCBBaseFormViewModel
{
    CCBLabelFormItem *managedIDItem;
    CCBLabelFormItem *benteficiaryAccItem;
    CCBLabelFormItem *benteficiaryNameItem;
    CCBLabelFormItem *escrowAmountItem;
    CCBMessageCodeInputFormItem *codelItem;
    CCBNextButtonFormItem *nextButton;
    CCB_3_M_paymentFransaction *_model;
    CCB_O_SJ9609 *_SJ9609;
    CCB_O_SJ9612 *_SJ9612;
}

@property(retain, nonatomic) CCB_O_SJ9612 *SJ9612; // @synthesize SJ9612=_SJ9612;
@property(retain, nonatomic) CCB_O_SJ9609 *SJ9609; // @synthesize SJ9609=_SJ9609;
@property(retain, nonatomic) CCB_3_M_paymentFransaction *model; // @synthesize model=_model;
@property(retain, nonatomic) CCBNextButtonFormItem *nextButton; // @synthesize nextButton;
@property(retain, nonatomic) CCBMessageCodeInputFormItem *codelItem; // @synthesize codelItem;
@property(retain, nonatomic) CCBLabelFormItem *escrowAmountItem; // @synthesize escrowAmountItem;
@property(retain, nonatomic) CCBLabelFormItem *benteficiaryNameItem; // @synthesize benteficiaryNameItem;
@property(retain, nonatomic) CCBLabelFormItem *benteficiaryAccItem; // @synthesize benteficiaryAccItem;
@property(retain, nonatomic) CCBLabelFormItem *managedIDItem; // @synthesize managedIDItem;
- (void).cxx_destruct;
- (void)requestFinished:(id)arg1 output:(id)arg2 error:(id)arg3;
- (void)requestSJ9609:(id)arg1;
- (void)requestData;
- (id)init;

@end

