//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseFormViewModel.h"

@class CCBLabelFormItem, CCBNextButtonFormItem, CCB_6_NoHistorysItems, NSArray, NSDate, NSDictionary, NSMutableArray, NSString;

@interface CCB_6_VM_PaymentHistory : CCBBaseFormViewModel
{
    _Bool _isShowPullLoading;
    int _paymentHistoryState;
    int _paymentHistoryType;
    int _currentMonth;
    NSArray *_menuArray;
    long long _channelIndex;
    long long _dateIndex;
    NSString *_startDay;
    NSString *_endDay;
    NSString *_currDate;
    NSString *_oldStartDay;
    NSString *_oldEndDay;
    NSMutableArray *_displayData;
    NSDate *_serverTime;
    NSString *_serverTimeStr;
    NSMutableArray *_channelListArray;
    NSArray *_dateListArray;
    NSDictionary *_channelResult;
    NSMutableArray *_openArray;
    long long _lastExtendRow;
    CCBNextButtonFormItem *_paymentAccoutItem;
    CCBLabelFormItem *_paymentNoHistoryItem;
    CCB_6_NoHistorysItems *_historyItmes;
}

@property(retain, nonatomic) CCB_6_NoHistorysItems *historyItmes; // @synthesize historyItmes=_historyItmes;
@property(retain, nonatomic) CCBLabelFormItem *paymentNoHistoryItem; // @synthesize paymentNoHistoryItem=_paymentNoHistoryItem;
@property(retain, nonatomic) CCBNextButtonFormItem *paymentAccoutItem; // @synthesize paymentAccoutItem=_paymentAccoutItem;
@property(nonatomic) int currentMonth; // @synthesize currentMonth=_currentMonth;
@property(nonatomic) _Bool isShowPullLoading; // @synthesize isShowPullLoading=_isShowPullLoading;
@property(nonatomic) long long lastExtendRow; // @synthesize lastExtendRow=_lastExtendRow;
@property(retain, nonatomic) NSMutableArray *openArray; // @synthesize openArray=_openArray;
@property(retain, nonatomic) NSDictionary *channelResult; // @synthesize channelResult=_channelResult;
@property(retain, nonatomic) NSArray *dateListArray; // @synthesize dateListArray=_dateListArray;
@property(retain, nonatomic) NSMutableArray *channelListArray; // @synthesize channelListArray=_channelListArray;
@property(nonatomic) int paymentHistoryType; // @synthesize paymentHistoryType=_paymentHistoryType;
@property(nonatomic) int paymentHistoryState; // @synthesize paymentHistoryState=_paymentHistoryState;
@property(retain, nonatomic) NSString *serverTimeStr; // @synthesize serverTimeStr=_serverTimeStr;
@property(retain, nonatomic) NSDate *serverTime; // @synthesize serverTime=_serverTime;
@property(retain, nonatomic) NSMutableArray *displayData; // @synthesize displayData=_displayData;
@property(retain, nonatomic) NSString *oldEndDay; // @synthesize oldEndDay=_oldEndDay;
@property(retain, nonatomic) NSString *oldStartDay; // @synthesize oldStartDay=_oldStartDay;
@property(retain, nonatomic) NSString *currDate; // @synthesize currDate=_currDate;
@property(retain, nonatomic) NSString *endDay; // @synthesize endDay=_endDay;
@property(retain, nonatomic) NSString *startDay; // @synthesize startDay=_startDay;
@property(nonatomic) long long dateIndex; // @synthesize dateIndex=_dateIndex;
@property(nonatomic) long long channelIndex; // @synthesize channelIndex=_channelIndex;
@property(retain, nonatomic) NSArray *menuArray; // @synthesize menuArray=_menuArray;
- (void).cxx_destruct;
- (void)JFA054WithParamenter:(id)arg1 BackBlock:(CDUnknownBlockType)arg2;
- (id)changTextString:(id)arg1;
- (void)JFA030WithParamenter:(id)arg1 CurrentPage:(long long)arg2 TotalPage:(long long)arg3 BackBlock:(CDUnknownBlockType)arg4;
- (void)JFAEE4WithParamenter:(id)arg1 CurrentPage:(long long)arg2 TotalPage:(long long)arg3 Chnl_ID:(id)arg4 BackBlock:(CDUnknownBlockType)arg5;
- (void)JFA002WithParamenter:(id)arg1 CurrentPage:(long long)arg2 TotalPage:(long long)arg3 BackBlock:(CDUnknownBlockType)arg4;
- (void)reloadPaymentHistoryDataWithParamenter:(id)arg1 CurrentPage:(long long)arg2 TotalPage:(long long)arg3 BackBlock:(CDUnknownBlockType)arg4;
- (void)loadPaymentHistoryDataWithParamenter:(id)arg1 CurrentPage:(long long)arg2 TotalPage:(long long)arg3 BackBlock:(CDUnknownBlockType)arg4;
- (void)paymentItemWithBillItem:(id)arg1 Block:(CDUnknownBlockType)arg2;
- (id)dealCardNum:(id)arg1;
- (id)dealWeekWithParamenter:(id)arg1;
- (id)dealDayWithParamenter:(id)arg1 IsReplace:(_Bool)arg2;
- (_Bool)isSowButtonHidden:(id)arg1;
- (void)updateDataToFormItemWithPaymentMethod:(int)arg1;
- (void)setupNoHistoryWithPaymentMethod:(int)arg1 andIsSuccess:(_Bool)arg2;
- (id)initWithDelegate:(id)arg1 PaymentMethod:(int)arg2;

@end

