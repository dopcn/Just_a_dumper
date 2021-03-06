//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class QRPayBankDetailInfo, QRPayCardLimitView, QRPayCheckPasswordView, UIScrollView;

@interface QRPayCardDetailViewController : UIViewController
{
    QRPayBankDetailInfo *_cardLimitInfo;
    UIScrollView *_scrollView;
    QRPayCardLimitView *_qrcodePayLimitView;
    QRPayCardLimitView *_noQRcodePayLimitView;
    QRPayCheckPasswordView *_checkView;
}

@property(retain, nonatomic) QRPayCheckPasswordView *checkView; // @synthesize checkView=_checkView;
@property(retain, nonatomic) QRPayCardLimitView *noQRcodePayLimitView; // @synthesize noQRcodePayLimitView=_noQRcodePayLimitView;
@property(retain, nonatomic) QRPayCardLimitView *qrcodePayLimitView; // @synthesize qrcodePayLimitView=_qrcodePayLimitView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) QRPayBankDetailInfo *cardLimitInfo; // @synthesize cardLimitInfo=_cardLimitInfo;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)pressedForgetPassword;
- (void)doAfterCheckPayPasswordWithResult:(id)arg1 checkPassWordView:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clickRightButton;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

