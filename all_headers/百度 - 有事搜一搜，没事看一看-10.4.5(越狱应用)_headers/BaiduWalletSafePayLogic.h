//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BaiduWalletSafePayBankCardManager, BaiduWalletSafePayOrderManager, BaiduWalletSafePayPasswordManager, BaiduWalletSafePayPayManager;

@interface BaiduWalletSafePayLogic : NSObject
{
    BaiduWalletSafePayBankCardManager *_bankCardManager;
    BaiduWalletSafePayPasswordManager *_passwordManager;
    BaiduWalletSafePayPayManager *_payManager;
    BaiduWalletSafePayOrderManager *_orderManager;
}

+ (id)sharedLogic;
@property(retain, nonatomic) BaiduWalletSafePayOrderManager *orderManager; // @synthesize orderManager=_orderManager;
@property(retain, nonatomic) BaiduWalletSafePayPayManager *payManager; // @synthesize payManager=_payManager;
@property(retain, nonatomic) BaiduWalletSafePayPasswordManager *passwordManager; // @synthesize passwordManager=_passwordManager;
@property(retain, nonatomic) BaiduWalletSafePayBankCardManager *bankCardManager; // @synthesize bankCardManager=_bankCardManager;
- (void).cxx_destruct;
- (void)initManager;
- (id)init;

@end

