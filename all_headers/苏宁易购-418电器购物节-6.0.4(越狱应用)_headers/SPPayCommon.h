//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SPPayCommon : NSObject
{
}

+ (void)openYifubAppOrAppStoreByIsSamplePwd:(_Bool)arg1;
+ (void)openURLToAppStore;
+ (void)didFindPwdSuccseesWithVc:(id)arg1;
+ (void)showFindPwdCertViewWithResponse:(id)arg1;
+ (void)showFindPwdQuickCardViewWithResponse:(id)arg1;
+ (void)forgetPasscodeHandel:(id)arg1;
+ (void)promoteAlertVCWith:(id)arg1 andTarget:(id)arg2;
+ (void)showSuccessViewOn:(id)arg1 withTitle:(id)arg2;
+ (void)showPaySuccessViewOn:(id)arg1;
+ (void)showLoadingViewOn:(id)arg1;
+ (void)showProgressingViewOn:(id)arg1;
+ (void)presentSheet:(id)arg1 ForView:(id)arg2;
+ (void)dismissHuDForView:(id)arg1;
+ (void)showLoadingAddedTo:(id)arg1;
+ (void)showPayLoadingViewWithDelegate:(id)arg1;
+ (void)presentBaseSheetOnWindow:(id)arg1;
+ (void)showDimViewWithDelegate:(id)arg1;
+ (void)showLoadingViewOnVc:(id)arg1;
+ (void)dismissHuDWithDelegate:(id)arg1;
+ (void)showSafeMountWithDelegate:(id)arg1;
+ (void)releaseSPDataCenterData;
+ (void)postFingerStaticsData;
+ (void)didPaymentOrderFailWithError:(id)arg1;
+ (void)didRollbackSDKPayment;
+ (void)didCanceSDKPayment;
+ (void)prepareToCloseCashier;
+ (void)didPaymentOrderSuccess;
+ (void)showGuideOpenFingerPrintView;
+ (void)showGuideOpenJotView;
+ (void)show261UnfrezzeVcWithError:(id)arg1 message:(id)arg2;
+ (void)show261ArticleVcWithError:(id)arg1 message:(id)arg2;
+ (void)showGuideRealNameVcWithError:(id)arg1 message:(id)arg2;
+ (void)showDigitalCertViewWithPayDic:(id)arg1;
+ (void)showBindPhonePaySuccessView;
+ (void)showSPLoginViewWithErrorDesc:(id)arg1;
+ (void)showRegistSimplePwdView;
+ (void)showSPWebViewControllerWithError:(int)arg1;
+ (void)showCompleteOverSeaDataViewWithError:(int)arg1;
+ (void)showCashierWithoutPayMode;
+ (void)showAddBankViewController4EbuyFontCashier;
+ (void)cancelEBuyFrontPrintWithIFFAADKError:(int)arg1;
+ (void)cancelEBuyFrontEnterPayFingerPrint;
+ (void)showEBuyFrontEnterPayWithFingerDic:(id)arg1;
+ (void)handleSubmitPayModel:(id)arg1;
+ (void)submitPayBackGround;
+ (void)handleEBuyFrontCashier;
+ (void)cancelPersonalLoanFingerPrintWithIFFAADKError:(int)arg1;
+ (void)cancelPersonalLoanFingerPrint;
+ (void)showPersonalLoanPayCahsierWithFingerDataDic:(id)arg1;
+ (void)handlePersonalLoanPayCahsier;
+ (void)openSuningBankSetPwdSdk;
+ (void)showOpenOneBtnPayView;
+ (void)showSuningBankGuideSetPwdWithMsg:(id)arg1;
+ (void)showAlertViewWithMessage:(id)arg1 cashierType:(long long)arg2;
+ (void)showCashierDeskViewByAnimationType:(int)arg1;
+ (void)showPayModeSelectedView;
+ (void)showCashier;
+ (void)showPengHuaSmsCashier;
+ (void)showPengHuaEnterPayPwdCashier;

@end

