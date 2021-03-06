//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseFormViewModel.h"

@class CCBBaseError, CCBInputFormItem, CCBMessageCodeInputFormItem, CCBNextButtonFormItem, CCB_O_NP0008, CCB_O_NP0010, CCB_O_NPF001, CCB_O_NPF002, CCB_O_NPF004, CCB_O_PAA018, CCB_O_PAA019, NSString;

@interface CCB_13_VM_SetUpAuxiliaryPhoneNumber : CCBBaseFormViewModel
{
    _Bool _isSetupAuxiliaryPhoneNumber;
    CCBBaseError *_error;
    NSString *_auxiliaryPhoneNumber;
    CCB_O_PAA019 *_PAA019;
    CCB_O_PAA018 *_PAA018;
    CCB_O_NPF001 *_NPF001;
    CCB_O_NP0010 *_NP0010;
    CCB_O_NP0008 *_NP0008;
    CCB_O_NPF002 *_NPF002;
    CCB_O_NPF004 *_NPF004;
    CCBInputFormItem *_auxiliaryMobileNO;
    CCBInputFormItem *_verificationCode;
    CCBMessageCodeInputFormItem *_messageItem;
    CCBNextButtonFormItem *_btnItem;
}

@property(retain, nonatomic) CCBNextButtonFormItem *btnItem; // @synthesize btnItem=_btnItem;
@property(retain, nonatomic) CCBMessageCodeInputFormItem *messageItem; // @synthesize messageItem=_messageItem;
@property(retain, nonatomic) CCBInputFormItem *verificationCode; // @synthesize verificationCode=_verificationCode;
@property(retain, nonatomic) CCBInputFormItem *auxiliaryMobileNO; // @synthesize auxiliaryMobileNO=_auxiliaryMobileNO;
@property(retain, nonatomic) CCB_O_NPF004 *NPF004; // @synthesize NPF004=_NPF004;
@property(retain, nonatomic) CCB_O_NPF002 *NPF002; // @synthesize NPF002=_NPF002;
@property(retain, nonatomic) CCB_O_NP0008 *NP0008; // @synthesize NP0008=_NP0008;
@property(retain, nonatomic) CCB_O_NP0010 *NP0010; // @synthesize NP0010=_NP0010;
@property(retain, nonatomic) CCB_O_NPF001 *NPF001; // @synthesize NPF001=_NPF001;
@property(retain, nonatomic) CCB_O_PAA018 *PAA018; // @synthesize PAA018=_PAA018;
@property(retain, nonatomic) CCB_O_PAA019 *PAA019; // @synthesize PAA019=_PAA019;
@property(retain, nonatomic) NSString *auxiliaryPhoneNumber; // @synthesize auxiliaryPhoneNumber=_auxiliaryPhoneNumber;
@property(nonatomic) _Bool isSetupAuxiliaryPhoneNumber; // @synthesize isSetupAuxiliaryPhoneNumber=_isSetupAuxiliaryPhoneNumber;
@property(retain, nonatomic) CCBBaseError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)cleanData;
- (void)canClickNextButton;
- (void)requestFinished:(id)arg1 output:(id)arg2 error:(id)arg3;
- (void)requestNPF004;
- (void)requestNPF002WithVertificationCode:(id)arg1;
- (void)requestNP0010;
- (void)requestNP0008;
- (void)requestNPF001;
- (void)requestPAA019;
- (void)requestPAA018;
- (void)showSentTips;
- (void)setupData;

@end

