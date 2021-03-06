//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseFormViewModel.h"

@class CCBBaseError, CCB_7_ProductionInfoItem, CCB_O_SJ2I04, NSArray, NSMutableArray, NSString;

@interface CCB_7_VM_ProductProfitDetail : CCBBaseFormViewModel
{
    _Bool _isLoadMore;
    _Bool _isShowLoadMore;
    NSString *_ivsPrtfAR_ID;
    long long _profitGroupType;
    NSString *_title;
    long long _currentPage;
    long long _totalPage;
    NSArray *_noDataItemArray;
    CCBBaseError *_errorStr;
    NSArray *_currencyInfoArray;
    CCB_O_SJ2I04 *_SJ2I04_O;
    CCB_7_ProductionInfoItem *_group_ProductInfo;
    NSMutableArray *_productInfoArray;
    NSArray *_productSortNames;
    NSArray *_productSortColors;
    CDUnknownBlockType _requestTradeDataCallBack;
}

@property(copy, nonatomic) CDUnknownBlockType requestTradeDataCallBack; // @synthesize requestTradeDataCallBack=_requestTradeDataCallBack;
@property(retain, nonatomic) NSArray *productSortColors; // @synthesize productSortColors=_productSortColors;
@property(retain, nonatomic) NSArray *productSortNames; // @synthesize productSortNames=_productSortNames;
@property(retain, nonatomic) NSMutableArray *productInfoArray; // @synthesize productInfoArray=_productInfoArray;
@property(retain, nonatomic) CCB_7_ProductionInfoItem *group_ProductInfo; // @synthesize group_ProductInfo=_group_ProductInfo;
@property(retain, nonatomic) CCB_O_SJ2I04 *SJ2I04_O; // @synthesize SJ2I04_O=_SJ2I04_O;
@property(retain, nonatomic) NSArray *currencyInfoArray; // @synthesize currencyInfoArray=_currencyInfoArray;
@property(retain, nonatomic) CCBBaseError *errorStr; // @synthesize errorStr=_errorStr;
@property(retain, nonatomic) NSArray *noDataItemArray; // @synthesize noDataItemArray=_noDataItemArray;
@property(nonatomic) _Bool isShowLoadMore; // @synthesize isShowLoadMore=_isShowLoadMore;
@property(nonatomic) _Bool isLoadMore; // @synthesize isLoadMore=_isLoadMore;
@property(nonatomic) long long totalPage; // @synthesize totalPage=_totalPage;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long profitGroupType; // @synthesize profitGroupType=_profitGroupType;
@property(retain, nonatomic) NSString *ivsPrtfAR_ID; // @synthesize ivsPrtfAR_ID=_ivsPrtfAR_ID;
- (void).cxx_destruct;
- (id)productSortCode_Name_ColorDict;
- (void)requestFinished:(id)arg1 output:(id)arg2 error:(id)arg3;
- (id)getStrTxnDate:(id)arg1;
- (void)reloadLastDetailData;
- (void)requestTradeDataWithResponseBlock:(CDUnknownBlockType)arg1;
- (void)reloadNoDataItem:(id)arg1 isrequest:(_Bool)arg2;
- (id)initWithDelegate:(id)arg1;

@end

