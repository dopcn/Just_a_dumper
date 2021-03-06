//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPKModel.h"

@interface MTCModel : SPKModel
{
}

- (void)fetchOrderStatusWithTradeNumber:(id)arg1 payToken:(id)arg2 autoRequest:(_Bool)arg3 finished:(CDUnknownBlockType)arg4;
- (void)agreeTransferWithPath:(id)arg1 trandeNumber:(id)arg2 payToken:(id)arg3 isAgreementExist:(_Bool)arg4 finished:(CDUnknownBlockType)arg5;
- (void)sendSMSVerificationCodeWithURLString:(id)arg1 externalParamsDictionary:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)sendSMSVerificationCodeFinished:(CDUnknownBlockType)arg1;
- (void)payWithTradeNumber:(id)arg1 payToken:(id)arg2 isFromMeituanWallet:(_Bool)arg3 paymentMethod:(id)arg4 password:(id)arg5 verificationCode:(id)arg6 finished:(CDUnknownBlockType)arg7;
- (void)helloPayWithTradeNumber:(id)arg1 payToken:(id)arg2 cashierType:(id)arg3 isChangedOfMoneyToPay:(_Bool)arg4 isFromSelectBankCardView:(_Bool)arg5 paymentMethod:(id)arg6 bankPaymentMethod:(id)arg7 verificationCode:(id)arg8 useNoPasswordPay:(_Bool)arg9 finished:(CDUnknownBlockType)arg10;
- (void)closeFlashPayWithTradeNumber:(id)arg1 payToken:(id)arg2;
- (void)flashPayWithTradeNumber:(id)arg1 payToken:(id)arg2 payTypeID:(long long)arg3 campaignID:(id)arg4 password:(id)arg5 verificationSMSCode:(id)arg6 isFingerprintConfirmed:(_Bool)arg7 externalParams:(id)arg8 installedApps:(int)arg9 finished:(CDUnknownBlockType)arg10;
- (void)getCashierRouterInfoWithTradeNumber:(id)arg1 payToken:(id)arg2 dispatcherScene:(id)arg3 installedApps:(int)arg4 finished:(CDUnknownBlockType)arg5;
- (id)init;

@end

