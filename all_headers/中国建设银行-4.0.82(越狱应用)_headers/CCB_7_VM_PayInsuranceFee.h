//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseFormViewModel.h"

@class CCBBaseError, CCBLabelFormItem, CCB_7_PayInsuranceFeeItem, CCB_O_NIA025, CCB_O_NIA025_LIST1, CCB_O_NIA026, CCB_O_NIA028;

@interface CCB_7_VM_PayInsuranceFee : CCBBaseFormViewModel
{
    CCBBaseError *_error;
    CCB_7_PayInsuranceFeeItem *_account;
    CCBLabelFormItem *_corporationItem;
    CCB_O_NIA028 *_nia028;
    CCB_O_NIA026 *_nia026;
    CCB_O_NIA025 *_nia025;
    CCB_O_NIA025_LIST1 *_list1;
}

@property(retain, nonatomic) CCB_O_NIA025_LIST1 *list1; // @synthesize list1=_list1;
@property(retain, nonatomic) CCB_O_NIA025 *nia025; // @synthesize nia025=_nia025;
@property(retain, nonatomic) CCB_O_NIA026 *nia026; // @synthesize nia026=_nia026;
@property(retain, nonatomic) CCB_O_NIA028 *nia028; // @synthesize nia028=_nia028;
@property(retain, nonatomic) CCBLabelFormItem *corporationItem; // @synthesize corporationItem=_corporationItem;
@property(retain, nonatomic) CCB_7_PayInsuranceFeeItem *account; // @synthesize account=_account;
@property(retain, nonatomic) CCBBaseError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)requestFinished:(id)arg1 output:(id)arg2 error:(id)arg3;
- (void)requestForNIA026:(_Bool)arg1;
- (void)requestForNIA025;
- (id)createFormItems;
- (id)init;

@end

