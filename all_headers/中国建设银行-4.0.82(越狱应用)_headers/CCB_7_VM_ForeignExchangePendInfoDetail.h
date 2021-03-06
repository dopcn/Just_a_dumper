//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseFormViewModel.h"

@class CCBNP0001MyAccount, CCB_7_ForeignExchangeQueryPendTradeData, CCB_7_ForeignExchangeQueryTradeLabelFormItem, NSDictionary, NSMutableArray;

@interface CCB_7_VM_ForeignExchangePendInfoDetail : CCBBaseFormViewModel
{
    NSMutableArray *_headerItems;
    CCB_7_ForeignExchangeQueryPendTradeData *_pendData;
    CCB_7_ForeignExchangeQueryPendTradeData *_profitPendData;
    CCB_7_ForeignExchangeQueryPendTradeData *_sellStopPendData;
    CCBNP0001MyAccount *_tradeAccount;
    NSDictionary *_tradeStatusDic;
    NSDictionary *_tradeMDlDic;
    CCB_7_ForeignExchangeQueryTradeLabelFormItem *_accFormItem;
}

@property(retain, nonatomic) CCB_7_ForeignExchangeQueryTradeLabelFormItem *accFormItem; // @synthesize accFormItem=_accFormItem;
@property(retain, nonatomic) NSDictionary *tradeMDlDic; // @synthesize tradeMDlDic=_tradeMDlDic;
@property(retain, nonatomic) NSDictionary *tradeStatusDic; // @synthesize tradeStatusDic=_tradeStatusDic;
@property(retain, nonatomic) CCBNP0001MyAccount *tradeAccount; // @synthesize tradeAccount=_tradeAccount;
@property(retain, nonatomic) CCB_7_ForeignExchangeQueryPendTradeData *sellStopPendData; // @synthesize sellStopPendData=_sellStopPendData;
@property(retain, nonatomic) CCB_7_ForeignExchangeQueryPendTradeData *profitPendData; // @synthesize profitPendData=_profitPendData;
@property(retain, nonatomic) CCB_7_ForeignExchangeQueryPendTradeData *pendData; // @synthesize pendData=_pendData;
@property(retain, nonatomic) NSMutableArray *headerItems; // @synthesize headerItems=_headerItems;
- (void).cxx_destruct;
- (void)reloadFormItems;
- (id)init;

@end

