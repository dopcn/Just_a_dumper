//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseFormViewModel.h"

@class CCBBaseError, CCB_7_PaperForeignExchangeTradeDataInfo, NSArray;

@interface CCB_7_VM_PaperForeignExchangeSimulatePendTradeConfirm : CCBBaseFormViewModel
{
    id _dataInfo;
    NSArray *_accountInfoArray;
    CCBBaseError *_errorStr;
    CCB_7_PaperForeignExchangeTradeDataInfo *_pendData;
    CDUnknownBlockType _confirmCallBack;
}

@property(copy, nonatomic) CDUnknownBlockType confirmCallBack; // @synthesize confirmCallBack=_confirmCallBack;
@property(retain, nonatomic) CCB_7_PaperForeignExchangeTradeDataInfo *pendData; // @synthesize pendData=_pendData;
@property(retain, nonatomic) CCBBaseError *errorStr; // @synthesize errorStr=_errorStr;
@property(retain, nonatomic) NSArray *accountInfoArray; // @synthesize accountInfoArray=_accountInfoArray;
@property(retain, nonatomic) id dataInfo; // @synthesize dataInfo=_dataInfo;
- (void).cxx_destruct;
- (void)requestFinished:(id)arg1 output:(id)arg2 error:(id)arg3;
- (void)requestSJ4010;
- (void)pendEditConfirmWithResponseBlock:(CDUnknownBlockType)arg1;
- (void)rebuildFormItems;
- (id)init;

@end

