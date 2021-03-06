//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BDWalletOriginalAoumtItem, BDWalletPayComplianceItem, BDWalletPayResultRiskControlItem, BDWalletPayResultShowInfoItem, NSDictionary, NSMutableArray, NSString;

@interface BDWalletPayResultInfo : NSObject
{
    _Bool _use_vcode_to_pay;
    _Bool _cardItemRequired;
    int _resultCode;
    NSDictionary *_resultDictionary;
    long long _ret;
    NSString *_retMsg;
    NSString *_score;
    NSString *_order_no;
    NSString *_bank_no;
    NSString *_payTypeDesc;
    NSString *_notify;
    NSDictionary *_errContent;
    BDWalletOriginalAoumtItem *_orgAoumtItem;
    BDWalletPayResultShowInfoItem *_payResultShowInfoItem;
    NSString *_redirect_sp_succpage_remain_time;
    BDWalletPayResultRiskControlItem *_riskControl;
    BDWalletPayComplianceItem *_payCompliance;
    NSMutableArray *_couponList;
    NSString *_pay_result_page_promot_txt;
    NSString *_pure_sign;
    NSString *_contract_no;
    NSString *_sign_success_tips;
}

@property(retain, nonatomic) NSString *sign_success_tips; // @synthesize sign_success_tips=_sign_success_tips;
@property(retain, nonatomic) NSString *contract_no; // @synthesize contract_no=_contract_no;
@property(retain, nonatomic) NSString *pure_sign; // @synthesize pure_sign=_pure_sign;
@property(retain, nonatomic) NSString *pay_result_page_promot_txt; // @synthesize pay_result_page_promot_txt=_pay_result_page_promot_txt;
@property(retain, nonatomic) NSMutableArray *couponList; // @synthesize couponList=_couponList;
@property(nonatomic) _Bool cardItemRequired; // @synthesize cardItemRequired=_cardItemRequired;
@property(retain, nonatomic) BDWalletPayComplianceItem *payCompliance; // @synthesize payCompliance=_payCompliance;
@property(retain, nonatomic) BDWalletPayResultRiskControlItem *riskControl; // @synthesize riskControl=_riskControl;
@property(retain, nonatomic) NSString *redirect_sp_succpage_remain_time; // @synthesize redirect_sp_succpage_remain_time=_redirect_sp_succpage_remain_time;
@property(retain, nonatomic) BDWalletPayResultShowInfoItem *payResultShowInfoItem; // @synthesize payResultShowInfoItem=_payResultShowInfoItem;
@property(retain, nonatomic) BDWalletOriginalAoumtItem *orgAoumtItem; // @synthesize orgAoumtItem=_orgAoumtItem;
@property(nonatomic) _Bool use_vcode_to_pay; // @synthesize use_vcode_to_pay=_use_vcode_to_pay;
@property(copy, nonatomic) NSDictionary *errContent; // @synthesize errContent=_errContent;
@property(copy, nonatomic) NSString *notify; // @synthesize notify=_notify;
@property(copy, nonatomic) NSString *payTypeDesc; // @synthesize payTypeDesc=_payTypeDesc;
@property(copy, nonatomic) NSString *bank_no; // @synthesize bank_no=_bank_no;
@property(copy, nonatomic) NSString *order_no; // @synthesize order_no=_order_no;
@property(copy, nonatomic) NSString *score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *retMsg; // @synthesize retMsg=_retMsg;
@property(nonatomic) long long ret; // @synthesize ret=_ret;
@property(copy, nonatomic) NSDictionary *resultDictionary; // @synthesize resultDictionary=_resultDictionary;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
- (void).cxx_destruct;
- (id)init;

@end

