//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDWalletBaseViewController.h"

@class BDWalletStateView, NSString, UIButton, UIImageView;

@interface BDWalletMobileRechargePayResultViewController : BDWalletBaseViewController
{
    int _chargeType;
    NSString *_payDesc;
    NSString *_orderNo;
    NSString *_bannerLinkUrl;
    BDWalletStateView *_stateView;
    UIButton *_finishButton;
    UIImageView *_bannerImageView;
    UIButton *_FAQButton;
    long long _payType;
}

@property(nonatomic) long long payType; // @synthesize payType=_payType;
@property(retain, nonatomic) UIButton *FAQButton; // @synthesize FAQButton=_FAQButton;
@property(retain, nonatomic) UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(retain, nonatomic) UIButton *finishButton; // @synthesize finishButton=_finishButton;
@property(retain, nonatomic) BDWalletStateView *stateView; // @synthesize stateView=_stateView;
@property(retain, nonatomic) NSString *bannerLinkUrl; // @synthesize bannerLinkUrl=_bannerLinkUrl;
@property(nonatomic) int chargeType; // @synthesize chargeType=_chargeType;
@property(retain, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
@property(retain, nonatomic) NSString *payDesc; // @synthesize payDesc=_payDesc;
- (void).cxx_destruct;
- (void)didClickBanner:(id)arg1;
- (void)didClickFAQButton:(id)arg1;
- (void)didClickFinishButton:(id)arg1;
- (void)doRequestBannerInfoCallBackWithResultModel:(id)arg1 error:(id)arg2;
- (void)requestBannerInfo;
- (void)updateBannerImage:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)createSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithPayDesc:(id)arg1 chargeType:(int)arg2 orderNo:(id)arg3 payType:(long long)arg4;

@end

