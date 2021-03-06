//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCB_15_VM_EBTransactionDetailsBase.h"

@class CCBBaseError, CCB_15EBusinessExchangePayoutStatus, NSArray, NSString;

@interface CCB_15_VM_EBusinessTurnoverDetails : CCB_15_VM_EBTransactionDetailsBase
{
    CCBBaseError *_error;
    long long _pageIndex;
    long long _pageTotal;
    NSString *_STS_TRACE_ID;
    NSArray *_formItems;
    CCB_15EBusinessExchangePayoutStatus *_paystatus;
    NSArray *_turnoverArray;
}

@property(copy, nonatomic) NSArray *turnoverArray; // @synthesize turnoverArray=_turnoverArray;
@property(retain, nonatomic) CCB_15EBusinessExchangePayoutStatus *paystatus; // @synthesize paystatus=_paystatus;
@property(copy, nonatomic) NSArray *formItems; // @synthesize formItems=_formItems;
@property(copy, nonatomic) NSString *STS_TRACE_ID; // @synthesize STS_TRACE_ID=_STS_TRACE_ID;
@property(nonatomic) long long pageTotal; // @synthesize pageTotal=_pageTotal;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) CCBBaseError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)datestr:(id)arg1;
- (id)createFormItemsWith:(id)arg1;
- (void)SJ0502RequestFinished:(id)arg1 output:(id)arg2 error:(id)arg3;
- (void)requestFinished:(id)arg1 output:(id)arg2 error:(id)arg3;
- (void)requestSJ0502:(id)arg1 endDate:(id)arg2 pageIndex:(long long)arg3;
- (void)loadMoreDetails;
- (void)refreshDetails;

@end

