//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseFormViewModel.h"

@class CCBBaseError, CCB_O_SJD802, CCB_O_SJD804, CCB_O_SJDME8, RACSignal;

@interface CCB_8_VM_SBApplyForAuthorisation : CCBBaseFormViewModel
{
    CCBBaseError *_errorObj;
    unsigned long long _loanType;
    CCB_O_SJD802 *_SJD802_OUTPUT;
    CCB_O_SJDME8 *_SJDME8_OUTPUT;
    CCB_O_SJD804 *_SJD804_OUTPUT;
    RACSignal *_nextButtonSignal;
}

@property(retain, nonatomic) RACSignal *nextButtonSignal; // @synthesize nextButtonSignal=_nextButtonSignal;
@property(retain, nonatomic) CCB_O_SJD804 *SJD804_OUTPUT; // @synthesize SJD804_OUTPUT=_SJD804_OUTPUT;
@property(retain, nonatomic) CCB_O_SJDME8 *SJDME8_OUTPUT; // @synthesize SJDME8_OUTPUT=_SJDME8_OUTPUT;
@property(retain, nonatomic) CCB_O_SJD802 *SJD802_OUTPUT; // @synthesize SJD802_OUTPUT=_SJD802_OUTPUT;
@property(nonatomic) unsigned long long loanType; // @synthesize loanType=_loanType;
@property(retain, nonatomic) CCBBaseError *errorObj; // @synthesize errorObj=_errorObj;
- (void).cxx_destruct;
- (void)requestFinished:(id)arg1 output:(id)arg2 error:(id)arg3;
- (void)requestSJD802;
- (id)agreementAttributedString2;
- (id)agreementAttributedString1;
- (void)buildFormItems;

@end

