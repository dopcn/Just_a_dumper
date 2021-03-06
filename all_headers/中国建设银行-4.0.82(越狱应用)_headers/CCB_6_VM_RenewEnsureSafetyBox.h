//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseFormViewModel.h"

@class CCBBaseError, CCBNextButtonFormItem, CCB_6_RenewInfo, CCB_6_SafetyBoxInfoItem, CCB_6_SafetyBoxPriceItem, NSString;

@interface CCB_6_VM_RenewEnsureSafetyBox : CCBBaseFormViewModel
{
    CCB_6_RenewInfo *_renewInfo;
    CCBBaseError *_error;
    NSString *_errorMessage;
    CDUnknownBlockType _renewCallback;
    CCB_6_SafetyBoxInfoItem *_infoItem;
    CCB_6_SafetyBoxPriceItem *_priceItem;
    CCBNextButtonFormItem *_buttonItem;
}

@property(retain, nonatomic) CCBNextButtonFormItem *buttonItem; // @synthesize buttonItem=_buttonItem;
@property(retain, nonatomic) CCB_6_SafetyBoxPriceItem *priceItem; // @synthesize priceItem=_priceItem;
@property(retain, nonatomic) CCB_6_SafetyBoxInfoItem *infoItem; // @synthesize infoItem=_infoItem;
@property(copy, nonatomic) CDUnknownBlockType renewCallback; // @synthesize renewCallback=_renewCallback;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) CCBBaseError *error; // @synthesize error=_error;
@property(retain, nonatomic) CCB_6_RenewInfo *renewInfo; // @synthesize renewInfo=_renewInfo;
- (void).cxx_destruct;
- (void)requestFinished:(id)arg1 output:(id)arg2 error:(id)arg3;
- (void)requestForCost41;
- (void)requestNonPay44;
- (void)updateItem;
- (id)initWithDelegate:(id)arg1;

@end

