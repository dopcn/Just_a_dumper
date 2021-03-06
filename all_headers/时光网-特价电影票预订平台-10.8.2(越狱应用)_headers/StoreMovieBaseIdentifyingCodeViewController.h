//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MNBViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class MNMPayIndentifyCodeParameter, MNRSendBindMobileIdentifyingCode, MTBButton, MTBTextField, NSArray, NSString, NSTimer, TicketContext;

@interface StoreMovieBaseIdentifyingCodeViewController : MNBViewController <UITextFieldDelegate>
{
    _Bool _alreadyChecked;
    MTBTextField *_vierifyCodeTextField;
    MTBButton *_repostBtn;
    MTBButton *_sureToPayBtn;
    NSTimer *_codeTimer;
    long long _timeCount;
    long long _payType;
    TicketContext *_tc;
    long long _balanceAmount;
    long long _thirdPayAmount;
    long long _thirdPayType;
    long long _changeNum;
    NSString *_orderID;
    NSString *_voucherID;
    NSString *_telStr;
    NSString *_mobileNeedBind;
    MNMPayIndentifyCodeParameter *_modelParameter;
    NSArray *_arrayCellData;
    NSString *_stringShowPhone;
    MNRSendBindMobileIdentifyingCode *_requestIdentifyingCode;
}

@property(retain, nonatomic) MNRSendBindMobileIdentifyingCode *requestIdentifyingCode; // @synthesize requestIdentifyingCode=_requestIdentifyingCode;
@property(retain, nonatomic) NSString *stringShowPhone; // @synthesize stringShowPhone=_stringShowPhone;
@property(retain, nonatomic) NSArray *arrayCellData; // @synthesize arrayCellData=_arrayCellData;
@property(retain, nonatomic) MNMPayIndentifyCodeParameter *modelParameter; // @synthesize modelParameter=_modelParameter;
@property(retain, nonatomic) NSString *mobileNeedBind; // @synthesize mobileNeedBind=_mobileNeedBind;
@property(retain, nonatomic) NSString *telStr; // @synthesize telStr=_telStr;
@property(retain, nonatomic) NSString *voucherID; // @synthesize voucherID=_voucherID;
@property(retain, nonatomic) NSString *orderID; // @synthesize orderID=_orderID;
@property(nonatomic) _Bool alreadyChecked; // @synthesize alreadyChecked=_alreadyChecked;
@property(nonatomic) long long changeNum; // @synthesize changeNum=_changeNum;
@property(nonatomic) long long thirdPayType; // @synthesize thirdPayType=_thirdPayType;
@property(nonatomic) long long thirdPayAmount; // @synthesize thirdPayAmount=_thirdPayAmount;
@property(nonatomic) long long balanceAmount; // @synthesize balanceAmount=_balanceAmount;
@property(retain, nonatomic) TicketContext *tc; // @synthesize tc=_tc;
@property(nonatomic) long long payType; // @synthesize payType=_payType;
@property(nonatomic) long long timeCount; // @synthesize timeCount=_timeCount;
@property(retain, nonatomic) NSTimer *codeTimer; // @synthesize codeTimer=_codeTimer;
@property(retain, nonatomic) MTBButton *sureToPayBtn; // @synthesize sureToPayBtn=_sureToPayBtn;
@property(retain, nonatomic) MTBButton *repostBtn; // @synthesize repostBtn=_repostBtn;
@property(retain, nonatomic) MTBTextField *vierifyCodeTextField; // @synthesize vierifyCodeTextField=_vierifyCodeTextField;
- (void).cxx_destruct;
- (void)sendNotificationForThirdPay:(long long)arg1 withFormXml:(id)arg2;
- (long long)payViewCategory;
- (void)newPayServiceInStyle:(id)arg1;
- (void)afterRequestThirdPay:(id)arg1;
- (void)startVerify;
- (void)regetCode;
- (void)stopTimer;
- (void)stopCount;
- (void)timeCount:(id)arg1;
- (void)startCount;
- (void)resignKeyBoardWhenTimeUp;
- (void)textFieldHasChanged;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)backAction;
- (void)navigatorBackAction;
- (void)failedCode;
- (void)gotCode:(id)arg1;
- (void)getCode;
- (void)mt_cancelLoadData;
- (void)mt_loadData;
- (void)mt_destroyEvents;
- (void)mt_createEvents;
- (void)createMainViews;
- (void)createNavBarView;
- (void)mt_createViews;
- (void)mt_initFields;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

