//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NLPayPaymentQRSettingViewController, NSString, UIButton;

@protocol NLPayPaymentQRSettingViewControllerDelegate <NSObject>
- (void)paymentQRSettingViewControllerDidTapChangeCreditCard:(NLPayPaymentQRSettingViewController *)arg1;
- (void)paymentQRSettingViewControllerDidTapAddCreditCard:(NLPayPaymentQRSettingViewController *)arg1;
- (void)paymentQRSettingViewControllerDidTapSetupBankAccount:(NLPayPaymentQRSettingViewController *)arg1 tappedButton:(UIButton *)arg2;
- (void)paymentQRSettingViewController:(NLPayPaymentQRSettingViewController *)arg1 didSelectPayment:(long long)arg2 accountId:(NSString *)arg3;
@end

